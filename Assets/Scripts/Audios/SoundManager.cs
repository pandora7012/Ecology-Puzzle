using System;
using System.Collections;
using System.Collections.Generic;
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

    public void MusicFadeOut(float FadeTime, float vol)
    {
        if (musicMute)
            return;
        StartCoroutine(FastFadeOut("Music", FadeTime, vol));
    }
    
    public void MusicFadeIn(float FadeTime, float vol)
    {
        if (musicMute)
            return;
        StartCoroutine(FastFadeIn("Music", FadeTime, vol));
    }

    private IEnumerator FastFadeOut(string name, float FadeTime, float vol)
    {
        foreach (var sound in sounds)
        {
            if (sound.name != name) continue;
            while (sound.audioSource.volume > vol)
            {
                sound.audioSource.volume -= Time.deltaTime / FadeTime * vol;
                yield return null;
            }
        }
    }

    private IEnumerator FastFadeIn(string name, float FadeTime, float vol)
    {
        foreach (var sound in sounds)
        {
            if (sound.name != name) continue;
            while (sound.audioSource.volume < vol)
            {
                sound.audioSource.volume += Time.deltaTime / FadeTime * vol;
                yield return null;
            }
        }
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