using System;
using System.Collections;
using DG.Tweening;
using UnityEngine;

public class SoundManager : Singleton<SoundManager>
{
    [SerializeField] public bool musicMute, effectMute;
    public Sound[] sounds;

    void Init()
    {
        musicMute = PlayerPrefs.GetInt(StringHash.MUSIC) == 0;
        effectMute = PlayerPrefs.GetInt(StringHash.SOUND_EFFECT) == 0;
        foreach (Sound s in sounds)
        {
            s.audioSource = gameObject.AddComponent<AudioSource>();
            s.audioSource.clip = s.audioClip;
            s.audioSource.loop = s.loop;
            s.audioSource.pitch = s.pitch;
            s.audioSource.volume = s.volume;
        }

        if (PlayerPrefs.GetInt(StringHash.MUSIC) == 1)
            Play("Music");
    }


    private void Start()
    {
        Init();
    }

    public void ToggleMusic()
    {
        musicMute = !musicMute;
        
        var p = musicMute ? 0 : 1;
        PlayerPrefs.SetInt(StringHash.MUSIC, p);
        Play("ButtonTap");
        if (p == 1)
            Play("Music");
        else if (p == 0)
            StopMusic();
    }

    public void ToggleEffect()
    {
        effectMute = !effectMute;
        var p = effectMute ? 0 : 1;
        Play("ButtonTap");
        PlayerPrefs.SetInt(StringHash.SOUND_EFFECT, p);
    }

    public void Play(string name)
    {
        foreach (Sound s in sounds)
        {
            if (s.name == name)
                if (s.isEffect == true && effectMute == false)
                    s.audioSource.Play();
                else if (s.isEffect == false && musicMute == false)
                    s.audioSource.Play();
        }
    }

    public void StopMusic()
    {
        foreach (var s in sounds)
        {
            if (s.name == "Music")
                s.audioSource.Stop();
        }
    }

    public void SetVolumeMusic(int vol)
    {
        foreach (var s in sounds)
        {
            if (s.name == "Music")
                s.audioSource.volume = vol;
        }
    }

    public void MusicFadeOut(float fadeTime, float vol)
    {
        if (musicMute)
            return;
        FadeToValue("Music", fadeTime, vol);
    }
    
    public void MusicFadeIn(float fadeTime, float vol)
    {
        if (musicMute)
            return;
        FadeToValue("Music", fadeTime, vol);
    }

    private void FadeToValue(string name, float fadeTime, float vol)
    {
        Sound audio = new Sound();
        foreach(var sound in sounds)
        {
            if (sound.name == name)
            {
                audio = sound;
                break;
            }
        }
        DOTween.To(() => audio.audioSource.volume, x => audio.audioSource.volume = x, vol, fadeTime);
    }
}

[System.Serializable]
public class Sound
{
    public string name;
    public AudioClip audioClip;
    public bool isEffect; 
    public bool loop;
    [Range(0, 1)] public float volume;
    [Range(0, 1)] public float pitch;
    [HideInInspector] public AudioSource audioSource;
}