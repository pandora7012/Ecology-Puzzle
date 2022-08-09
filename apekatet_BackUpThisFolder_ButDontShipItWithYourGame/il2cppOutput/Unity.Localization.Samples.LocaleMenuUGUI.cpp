#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>
struct Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF;
// System.Action`1<UnityEngine.Localization.Locale>
struct Action_1_t55C64C85A9D0051A87CCECD2C9B66D12616ECC38;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<UnityEngine.Localization.Locale>
struct AsyncOperationBase_1_t1EC10470DC5A6216672A1BA5A67E3A5478EDB079;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Object>
struct AsyncOperationBase_1_t777EC3ACED7579A0B8EFE3EEE605D824516B3C13;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<UnityEngine.Localization.Locale,UnityEngine.UI.Toggle>
struct Dictionary_2_t8C990C3846625D81DDAEB52F7699B7EBC9F19C8F;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Localization.Locale>
struct IEqualityComparer_1_tB0F49406B86B2B60704CA0F95C9729D8FE1059A0;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Localization.Locale,UnityEngine.UI.Toggle>
struct KeyCollection_tFC32D03ECE1D6F6D418ECEF5E9591F19F966EEC3;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.Localization.Locale>
struct List_1_tBD0AC994E5F9C7F539E0378F0CBB119065136548;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.UI.Toggle>
struct List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem>
struct List_1_t89B39292AD45371F7FDCB295AAE956D33588BC6E;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>
struct List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60;
// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB;
// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Localization.Locale,UnityEngine.UI.Toggle>
struct ValueCollection_tE2BC2C9878A6A37576419ECAE788110D3F526FC4;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.Localization.Locale,UnityEngine.UI.Toggle>[]
struct EntryU5BU5D_t9808DBCD0FC78948C4B81C11F949E5C68BA68E4E;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.Localization.Locale[]
struct LocaleU5BU5D_tA72D83EF0A860CBFEFDD5F8CE268C3E7B09C1A12;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.UI.Dropdown/OptionData[]
struct OptionDataU5BU5D_tF56CF744A9E6A0DBB0AC2072BE52F7C8D2E1947F;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.UI.Dropdown
struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation
struct IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// UnityEngine.Localization.Settings.ILocalesProvider
struct ILocalesProvider_t61A5B94D50A769527BFEF945350EA16D17BAFBB0;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.Localization.Samples.LanguageSelectionMenuUGUIDropdown
struct LanguageSelectionMenuUGUIDropdown_t032BBC2EF09E7B75859FA398383CD7EAD1B8145C;
// UnityEngine.Localization.Samples.LanguageSelectionMenuUGUIToggleList
struct LanguageSelectionMenuUGUIToggleList_tC1C201696C0BECBB7D1A7544573530A5ED134645;
// UnityEngine.Localization.Locale
struct Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.Localization.Metadata.MetadataCollection
struct MetadataCollection_t79AF57BE506FF84FEF50E610C73ED4CA6D015CE0;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059;
// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F;
// UnityEngine.UI.Dropdown/OptionDataList
struct OptionDataList_t53255477D0A9C6980AB48693A520EFBC94DFFB96;
// UnityEngine.Localization.Samples.LanguageSelectionMenuUGUIToggleList/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t99E335A9B0DADAA6FB4EFE62EC6DEE480427ECFB;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t55C64C85A9D0051A87CCECD2C9B66D12616ECC38_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t8C990C3846625D81DDAEB52F7699B7EBC9F19C8F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILocalesProvider_t61A5B94D50A769527BFEF945350EA16D17BAFBB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass6_0_t99E335A9B0DADAA6FB4EFE62EC6DEE480427ECFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralB376EB0B0DA422B5ED0EC8E9A8588B9736801CFB;
IL2CPP_EXTERN_C String_t* _stringLiteralBE86F00232CDCD6B0AE55F07CC02A298271564FA;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationHandle_1_op_Implicit_mFD51F23F5F6FDF2A289B4663B6F2D063B5BF261B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisDropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_m0DC2A1698BB6D852352E5460A07E91DA649EED00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m6EFEEF1A48396E2022178EEECD03FE642016141B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m7FD0EEF4AF1811557E3C42AEDEA0021AD190E57F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m523A3491FABFC4B0ACEB02BF92A9568686CA6B49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C_m4B74F74B0C7DF2BD2A5061E4BA49A25AB8F95AE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m4883A479F4252D21D45D5AD3140CB42598C48A13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m4EE154BD6B3D051BADD8CC7F7C28CF20349ABD17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LanguageSelectionMenuUGUIDropdown_InitializeCompleted_mD021CC6B1CA46D71F5A200ACD6805246DAD670A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LanguageSelectionMenuUGUIDropdown_LocalizationSettings_SelectedLocaleChanged_mD13A958B3C9DE3B3D95BBE94598BF3645C4A733C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LanguageSelectionMenuUGUIDropdown_OnSelectionChanged_mF7F5CCE9B198B1DE98BC83EC9D2AC634C690BDD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LanguageSelectionMenuUGUIToggleList_InitializeCompleted_m0A21D2FD493D3FCA43244E236191458C55BC8279_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LanguageSelectionMenuUGUIToggleList_LocalizationSettings_SelectedLocaleChanged_m0E3C70F5068FF5E9A1B6C81CC8353596679FE6C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mD4C8E5C7DAB7FBB4A72C861A16DFED06E2DCA03C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_IndexOf_mF60728B5646243CE1A06E49E08D77DD25CE9FCF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m2E877F5243ECE9B85FB668AC7BAEDD41295ADBB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m371BFB123C54FBBA612036D55FABF370481EFB71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass6_0_U3CInitializeCompletedU3Eb__0_m247691BF966AA408EFA756546FF4B2569F75A8B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t7778AF8D7BC9F1CB21523E86563803B315651BFE 
{
};

// System.Collections.Generic.Dictionary`2<UnityEngine.Localization.Locale,UnityEngine.UI.Toggle>
struct Dictionary_2_t8C990C3846625D81DDAEB52F7699B7EBC9F19C8F  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t9808DBCD0FC78948C4B81C11F949E5C68BA68E4E* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tFC32D03ECE1D6F6D418ECEF5E9591F19F966EEC3* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tE2BC2C9878A6A37576419ECAE788110D3F526FC4* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<UnityEngine.Localization.Locale>
struct List_1_tBD0AC994E5F9C7F539E0378F0CBB119065136548  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	LocaleU5BU5D_tA72D83EF0A860CBFEFDD5F8CE268C3E7B09C1A12* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tBD0AC994E5F9C7F539E0378F0CBB119065136548_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	LocaleU5BU5D_tA72D83EF0A860CBFEFDD5F8CE268C3E7B09C1A12* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>
struct List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	OptionDataU5BU5D_tF56CF744A9E6A0DBB0AC2072BE52F7C8D2E1947F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	OptionDataU5BU5D_tF56CF744A9E6A0DBB0AC2072BE52F7C8D2E1947F* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F  : public RuntimeObject
{
	// System.String UnityEngine.UI.Dropdown/OptionData::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Sprite UnityEngine.UI.Dropdown/OptionData::m_Image
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Image_1;
};

// UnityEngine.Localization.Samples.LanguageSelectionMenuUGUIToggleList/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t99E335A9B0DADAA6FB4EFE62EC6DEE480427ECFB  : public RuntimeObject
{
	// UnityEngine.Localization.Locale UnityEngine.Localization.Samples.LanguageSelectionMenuUGUIToggleList/<>c__DisplayClass6_0::locale
	Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* ___locale_0;
	// UnityEngine.Localization.Samples.LanguageSelectionMenuUGUIToggleList UnityEngine.Localization.Samples.LanguageSelectionMenuUGUIToggleList/<>c__DisplayClass6_0::<>4__this
	LanguageSelectionMenuUGUIToggleList_tC1C201696C0BECBB7D1A7544573530A5ED134645* ___U3CU3E4__this_1;
};

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.Localization.Locale>
struct AsyncOperationHandle_1_tD9CC9BC83FC922061675E3C81FB7B270F848AB79 
{
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<TObject> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_InternalOp
	AsyncOperationBase_1_t1EC10470DC5A6216672A1BA5A67E3A5478EDB079* ___m_InternalOp_0;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_Version
	int32_t ___m_Version_1;
	// System.String UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_LocationName
	String_t* ___m_LocationName_2;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_UnloadSceneOpExcludeReleaseCallback
	bool ___m_UnloadSceneOpExcludeReleaseCallback_3;
};

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Object>
struct AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 
{
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<TObject> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_InternalOp
	AsyncOperationBase_1_t777EC3ACED7579A0B8EFE3EEE605D824516B3C13* ___m_InternalOp_0;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_Version
	int32_t ___m_Version_1;
	// System.String UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_LocationName
	String_t* ___m_LocationName_2;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_UnloadSceneOpExcludeReleaseCallback
	bool ___m_UnloadSceneOpExcludeReleaseCallback_3;
};

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
struct AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D 
{
	// UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::m_InternalOp
	RuntimeObject* ___m_InternalOp_0;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::m_Version
	int32_t ___m_Version_1;
	// System.String UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::m_LocationName
	String_t* ___m_LocationName_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
struct AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_pinvoke
{
	RuntimeObject* ___m_InternalOp_0;
	int32_t ___m_Version_1;
	char* ___m_LocationName_2;
};
// Native definition for COM marshalling of UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
struct AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_com
{
	RuntimeObject* ___m_InternalOp_0;
	int32_t ___m_Version_1;
	Il2CppChar* ___m_LocationName_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Localization.LocaleIdentifier
struct LocaleIdentifier_t1C6758D6E05D8D5DBCD7FFEC16E8E55547595C18 
{
	// System.String UnityEngine.Localization.LocaleIdentifier::m_Code
	String_t* ___m_Code_0;
	// System.Globalization.CultureInfo UnityEngine.Localization.LocaleIdentifier::m_CultureInfo
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CultureInfo_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Localization.LocaleIdentifier
struct LocaleIdentifier_t1C6758D6E05D8D5DBCD7FFEC16E8E55547595C18_marshaled_pinvoke
{
	char* ___m_Code_0;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___m_CultureInfo_1;
};
// Native definition for COM marshalling of UnityEngine.Localization.LocaleIdentifier
struct LocaleIdentifier_t1C6758D6E05D8D5DBCD7FFEC16E8E55547595C18_marshaled_com
{
	Il2CppChar* ___m_Code_0;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___m_CultureInfo_1;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059  : public UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A
{
};

// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02  : public UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>
struct Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.Localization.Locale>
struct Action_1_t55C64C85A9D0051A87CCECD2C9B66D12616ECC38  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Localization.Locale
struct Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Localization.LocaleIdentifier UnityEngine.Localization.Locale::m_Identifier
	LocaleIdentifier_t1C6758D6E05D8D5DBCD7FFEC16E8E55547595C18 ___m_Identifier_4;
	// UnityEngine.Localization.Metadata.MetadataCollection UnityEngine.Localization.Locale::m_Metadata
	MetadataCollection_t79AF57BE506FF84FEF50E610C73ED4CA6D015CE0* ___m_Metadata_5;
	// System.String UnityEngine.Localization.Locale::m_LocaleName
	String_t* ___m_LocaleName_6;
	// System.String UnityEngine.Localization.Locale::m_CustomFormatCultureCode
	String_t* ___m_CustomFormatCultureCode_7;
	// System.Boolean UnityEngine.Localization.Locale::m_UseCustomFormatter
	bool ___m_UseCustomFormatter_8;
	// System.UInt16 UnityEngine.Localization.Locale::m_SortOrder
	uint16_t ___m_SortOrder_9;
	// System.IFormatProvider UnityEngine.Localization.Locale::m_Formatter
	RuntimeObject* ___m_Formatter_10;
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Localization.Samples.LanguageSelectionMenuUGUIDropdown
struct LanguageSelectionMenuUGUIDropdown_t032BBC2EF09E7B75859FA398383CD7EAD1B8145C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Dropdown UnityEngine.Localization.Samples.LanguageSelectionMenuUGUIDropdown::m_Dropdown
	Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* ___m_Dropdown_4;
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle UnityEngine.Localization.Samples.LanguageSelectionMenuUGUIDropdown::m_InitializeOperation
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___m_InitializeOperation_5;
};

// UnityEngine.Localization.Samples.LanguageSelectionMenuUGUIToggleList
struct LanguageSelectionMenuUGUIToggleList_tC1C201696C0BECBB7D1A7544573530A5ED134645  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform UnityEngine.Localization.Samples.LanguageSelectionMenuUGUIToggleList::container
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___container_4;
	// UnityEngine.GameObject UnityEngine.Localization.Samples.LanguageSelectionMenuUGUIToggleList::languageTogglePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___languageTogglePrefab_5;
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle UnityEngine.Localization.Samples.LanguageSelectionMenuUGUIToggleList::m_InitializeOperation
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___m_InitializeOperation_6;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Localization.Locale,UnityEngine.UI.Toggle> UnityEngine.Localization.Samples.LanguageSelectionMenuUGUIToggleList::m_Toggles
	Dictionary_2_t8C990C3846625D81DDAEB52F7699B7EBC9F19C8F* ___m_Toggles_7;
	// UnityEngine.UI.ToggleGroup UnityEngine.Localization.Samples.LanguageSelectionMenuUGUIToggleList::m_ToggleGroup
	ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* ___m_ToggleGroup_8;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.ToggleGroup
struct ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.ToggleGroup::m_AllowSwitchOff
	bool ___m_AllowSwitchOff_4;
	// System.Collections.Generic.List`1<UnityEngine.UI.Toggle> UnityEngine.UI.ToggleGroup::m_Toggles
	List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16* ___m_Toggles_5;
};

// UnityEngine.UI.Dropdown
struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Dropdown::m_Template
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Template_20;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_CaptionText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_CaptionText_21;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_CaptionImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_CaptionImage_22;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_ItemText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_ItemText_23;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_ItemImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_ItemImage_24;
	// System.Int32 UnityEngine.UI.Dropdown::m_Value
	int32_t ___m_Value_25;
	// UnityEngine.UI.Dropdown/OptionDataList UnityEngine.UI.Dropdown::m_Options
	OptionDataList_t53255477D0A9C6980AB48693A520EFBC94DFFB96* ___m_Options_26;
	// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::m_OnValueChanged
	DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059* ___m_OnValueChanged_27;
	// System.Single UnityEngine.UI.Dropdown::m_AlphaFadeSpeed
	float ___m_AlphaFadeSpeed_28;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Dropdown
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Dropdown_29;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Blocker
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Blocker_30;
	// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem> UnityEngine.UI.Dropdown::m_Items
	List_1_t89B39292AD45371F7FDCB295AAE956D33588BC6E* ___m_Items_31;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween> UnityEngine.UI.Dropdown::m_AlphaTweenRunner
	TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B* ___m_AlphaTweenRunner_32;
	// System.Boolean UnityEngine.UI.Dropdown::validTemplate
	bool ___validTemplate_33;
};

struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_StaticFields
{
	// UnityEngine.UI.Dropdown/OptionData UnityEngine.UI.Dropdown::s_NoOptionData
	OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* ___s_NoOptionData_35;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m48C26C8BF8CF832FAFF2818DC9246BACBC3CCF2B_gshared (UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_gshared (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* __this, UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* ___call0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Object>::op_Implicit(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D AsyncOperationHandle_1_op_Implicit_m052FD5134CC06547BA8188CEDD1E687F68158CAE_gshared (AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 ___obj0, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mB7E422278A9F89203BFED7F1B8F04DB5F7438D0E_gshared (Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD_gshared (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_gshared (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* ___call0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponent<UnityEngine.UI.Dropdown>()
inline Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* Component_GetComponent_TisDropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_m0DC2A1698BB6D852352E5460A07E91DA649EED00 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::get_onValueChanged()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059* Dropdown_get_onValueChanged_mAC49CE9A83E258FEC024662127057567275CAC12_inline (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m48C26C8BF8CF832FAFF2818DC9246BACBC3CCF2B (UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m48C26C8BF8CF832FAFF2818DC9246BACBC3CCF2B_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* __this, UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A*, UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60*, const RuntimeMethod*))UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.UI.Dropdown::ClearOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dropdown_ClearOptions_m3EE71BFE47AB96BC7F731C4EE6BC728ED0E6EE56 (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData> UnityEngine.UI.Dropdown::get_options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* Dropdown_get_options_m30F757DBA22980CB77DADB8315207D5B87307816 (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Dropdown/OptionData::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionData__ctor_m0BB22D3B9A2443D8D51CE88AD6B4DAEAF11B59E6 (OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* __this, String_t* ___text0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>::Add(T)
inline void List_1_Add_mD4C8E5C7DAB7FBB4A72C861A16DFED06E2DCA03C_inline (List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* __this, OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55*, OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.Localization.Locale> UnityEngine.Localization.Settings.LocalizationSettings::get_SelectedLocaleAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_1_tD9CC9BC83FC922061675E3C81FB7B270F848AB79 LocalizationSettings_get_SelectedLocaleAsync_m524BFB6CBAE6D6AFC056559EBB994C51571930F2 (const RuntimeMethod* method) ;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.Localization.Locale>::op_Implicit(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>)
inline AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D AsyncOperationHandle_1_op_Implicit_mFD51F23F5F6FDF2A289B4663B6F2D063B5BF261B (AsyncOperationHandle_1_tD9CC9BC83FC922061675E3C81FB7B270F848AB79 ___obj0, const RuntimeMethod* method)
{
	return ((  AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D (*) (AsyncOperationHandle_1_tD9CC9BC83FC922061675E3C81FB7B270F848AB79, const RuntimeMethod*))AsyncOperationHandle_1_op_Implicit_m052FD5134CC06547BA8188CEDD1E687F68158CAE_gshared)(___obj0, method);
}
// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::get_IsDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperationHandle_get_IsDone_m55E07BF92CC2979A9BBFD8F5B97DCCD52DA1326A (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Localization.Samples.LanguageSelectionMenuUGUIDropdown::InitializeCompleted(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LanguageSelectionMenuUGUIDropdown_InitializeCompleted_mD021CC6B1CA46D71F5A200ACD6805246DAD670A2 (LanguageSelectionMenuUGUIDropdown_t032BBC2EF09E7B75859FA398383CD7EAD1B8145C* __this, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___obj0, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mB7E422278A9F89203BFED7F1B8F04DB5F7438D0E (Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mB7E422278A9F89203BFED7F1B8F04DB5F7438D0E_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::add_Completed(System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle_add_Completed_mD5633623ADF00C97B6A1EE712E6654452F64B2E0 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// UnityEngine.Localization.Settings.ILocalesProvider UnityEngine.Localization.Settings.LocalizationSettings::get_AvailableLocales()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LocalizationSettings_get_AvailableLocales_m95587473945EA5E4DF6638412151A0FEE83A0BCC (const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Localization.Locale>::get_Item(System.Int32)
inline Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* List_1_get_Item_m371BFB123C54FBBA612036D55FABF370481EFB71 (List_1_tBD0AC994E5F9C7F539E0378F0CBB119065136548* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* (*) (List_1_tBD0AC994E5F9C7F539E0378F0CBB119065136548*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// UnityEngine.Localization.Locale UnityEngine.Localization.Settings.LocalizationSettings::get_SelectedLocale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* LocalizationSettings_get_SelectedLocale_mACC907A60E1512A873D25E8C84E40873B81CEE83 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Localization.LocaleIdentifier UnityEngine.Localization.Locale::get_Identifier()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LocaleIdentifier_t1C6758D6E05D8D5DBCD7FFEC16E8E55547595C18 Locale_get_Identifier_mB725A4E8F29CA5C0544D03E1DD10767B54BCF29F_inline (Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* __this, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo UnityEngine.Localization.LocaleIdentifier::get_CultureInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* LocaleIdentifier_get_CultureInfo_m219CA437AF19CE1411AEAB32FED7D69E45E2447B (LocaleIdentifier_t1C6758D6E05D8D5DBCD7FFEC16E8E55547595C18* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Localization.Locale>::get_Count()
inline int32_t List_1_get_Count_m2E877F5243ECE9B85FB668AC7BAEDD41295ADBB9_inline (List_1_tBD0AC994E5F9C7F539E0378F0CBB119065136548* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tBD0AC994E5F9C7F539E0378F0CBB119065136548*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void UnityEngine.UI.Dropdown::AddOptions(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dropdown_AddOptions_mCFB763400FA1BCA695C168E7FBCDE20C9B8E7839 (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___options0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Dropdown::SetValueWithoutNotify(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dropdown_SetValueWithoutNotify_m3D2B40BC16D305309D68D9FF093BF25FF66E4ABA (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, int32_t ___input0, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.Localization.Locale>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m5CD9148DEE5317BA23F52D3CFF3B775540F3D24D (Action_1_t55C64C85A9D0051A87CCECD2C9B66D12616ECC38* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t55C64C85A9D0051A87CCECD2C9B66D12616ECC38*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Localization.Settings.LocalizationSettings::add_SelectedLocaleChanged(System.Action`1<UnityEngine.Localization.Locale>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalizationSettings_add_SelectedLocaleChanged_m8F417D4662DEDA1C37BE3A159B956EFCDE4ADF79 (Action_1_t55C64C85A9D0051A87CCECD2C9B66D12616ECC38* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Localization.Settings.LocalizationSettings::remove_SelectedLocaleChanged(System.Action`1<UnityEngine.Localization.Locale>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalizationSettings_remove_SelectedLocaleChanged_m98797ACA5E77BF66D64E11BDAE292AB7C2D952A3 (Action_1_t55C64C85A9D0051A87CCECD2C9B66D12616ECC38* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Localization.Settings.LocalizationSettings::set_SelectedLocale(UnityEngine.Localization.Locale)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalizationSettings_set_SelectedLocale_m19FDCECD3A7667D216F3CD160E0A9F7078D262A1 (Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Localization.Locale>::IndexOf(T)
inline int32_t List_1_IndexOf_mF60728B5646243CE1A06E49E08D77DD25CE9FCF3 (List_1_tBD0AC994E5F9C7F539E0378F0CBB119065136548* __this, Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* ___item0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tBD0AC994E5F9C7F539E0378F0CBB119065136548*, Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9*, const RuntimeMethod*))List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Localization.Samples.LanguageSelectionMenuUGUIToggleList::InitializeCompleted(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LanguageSelectionMenuUGUIToggleList_InitializeCompleted_m0A21D2FD493D3FCA43244E236191458C55BC8279 (LanguageSelectionMenuUGUIToggleList_tC1C201696C0BECBB7D1A7544573530A5ED134645* __this, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___obj0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.UI.ToggleGroup>()
inline ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* GameObject_AddComponent_TisToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C_m4B74F74B0C7DF2BD2A5061E4BA49A25AB8F95AE7 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Localization.Samples.LanguageSelectionMenuUGUIToggleList/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m6A8560FD976A7C7D32D9458606753A4CAD58FB1D (U3CU3Ec__DisplayClass6_0_t99E335A9B0DADAA6FB4EFE62EC6DEE480427ECFB* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared)(___original0, ___parent1, method);
}
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GameObject_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m4883A479F4252D21D45D5AD3140CB42598C48A13 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Toggle>()
inline Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* GameObject_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m4EE154BD6B3D051BADD8CC7F7C28CF20349ABD17 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Toggle::SetIsOnWithoutNotify(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_SetIsOnWithoutNotify_mF5B19F1767B9EFF02335E41D3D2DC678642170C2 (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Localization.Locale,UnityEngine.UI.Toggle>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m523A3491FABFC4B0ACEB02BF92A9568686CA6B49 (Dictionary_2_t8C990C3846625D81DDAEB52F7699B7EBC9F19C8F* __this, Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* ___key0, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8C990C3846625D81DDAEB52F7699B7EBC9F19C8F*, Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9*, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB*, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*, const RuntimeMethod*))UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.UI.Toggle::set_group(UnityEngine.UI.ToggleGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_set_group_mEE85FE3AB2ACFF9056DA613239DBACECA588507B (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Localization.Locale,UnityEngine.UI.Toggle>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m6EFEEF1A48396E2022178EEECD03FE642016141B (Dictionary_2_t8C990C3846625D81DDAEB52F7699B7EBC9F19C8F* __this, Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* ___key0, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t8C990C3846625D81DDAEB52F7699B7EBC9F19C8F*, Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9*, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Localization.Locale,UnityEngine.UI.Toggle>::.ctor()
inline void Dictionary_2__ctor_m7FD0EEF4AF1811557E3C42AEDEA0021AD190E57F (Dictionary_2_t8C990C3846625D81DDAEB52F7699B7EBC9F19C8F* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8C990C3846625D81DDAEB52F7699B7EBC9F19C8F*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Localization.Samples.LanguageSelectionMenuUGUIDropdown::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LanguageSelectionMenuUGUIDropdown_Start_m30F95F3640DD6E21C7EA3EF88EE64468D27ABB2A (LanguageSelectionMenuUGUIDropdown_t032BBC2EF09E7B75859FA398383CD7EAD1B8145C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_op_Implicit_mFD51F23F5F6FDF2A289B4663B6F2D063B5BF261B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisDropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_m0DC2A1698BB6D852352E5460A07E91DA649EED00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LanguageSelectionMenuUGUIDropdown_InitializeCompleted_mD021CC6B1CA46D71F5A200ACD6805246DAD670A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LanguageSelectionMenuUGUIDropdown_OnSelectionChanged_mF7F5CCE9B198B1DE98BC83EC9D2AC634C690BDD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD4C8E5C7DAB7FBB4A72C861A16DFED06E2DCA03C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE86F00232CDCD6B0AE55F07CC02A298271564FA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Dropdown = GetComponent<Dropdown>();
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_0;
		L_0 = Component_GetComponent_TisDropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_m0DC2A1698BB6D852352E5460A07E91DA649EED00(__this, Component_GetComponent_TisDropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_m0DC2A1698BB6D852352E5460A07E91DA649EED00_RuntimeMethod_var);
		__this->___m_Dropdown_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Dropdown_4), (void*)L_0);
		// m_Dropdown.onValueChanged.AddListener(OnSelectionChanged);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_1 = __this->___m_Dropdown_4;
		NullCheck(L_1);
		DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059* L_2;
		L_2 = Dropdown_get_onValueChanged_mAC49CE9A83E258FEC024662127057567275CAC12_inline(L_1, NULL);
		UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* L_3 = (UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60*)il2cpp_codegen_object_new(UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_m48C26C8BF8CF832FAFF2818DC9246BACBC3CCF2B(L_3, __this, (intptr_t)((void*)LanguageSelectionMenuUGUIDropdown_OnSelectionChanged_mF7F5CCE9B198B1DE98BC83EC9D2AC634C690BDD2_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE(L_2, L_3, UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_RuntimeMethod_var);
		// m_Dropdown.ClearOptions();
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_4 = __this->___m_Dropdown_4;
		NullCheck(L_4);
		Dropdown_ClearOptions_m3EE71BFE47AB96BC7F731C4EE6BC728ED0E6EE56(L_4, NULL);
		// m_Dropdown.options.Add(new Dropdown.OptionData("Loading..."));
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_5 = __this->___m_Dropdown_4;
		NullCheck(L_5);
		List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* L_6;
		L_6 = Dropdown_get_options_m30F757DBA22980CB77DADB8315207D5B87307816(L_5, NULL);
		OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* L_7 = (OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F*)il2cpp_codegen_object_new(OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		OptionData__ctor_m0BB22D3B9A2443D8D51CE88AD6B4DAEAF11B59E6(L_7, _stringLiteralBE86F00232CDCD6B0AE55F07CC02A298271564FA, NULL);
		NullCheck(L_6);
		List_1_Add_mD4C8E5C7DAB7FBB4A72C861A16DFED06E2DCA03C_inline(L_6, L_7, List_1_Add_mD4C8E5C7DAB7FBB4A72C861A16DFED06E2DCA03C_RuntimeMethod_var);
		// m_Dropdown.interactable = false;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_8 = __this->___m_Dropdown_4;
		NullCheck(L_8);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_8, (bool)0, NULL);
		// m_InitializeOperation = LocalizationSettings.SelectedLocaleAsync;
		AsyncOperationHandle_1_tD9CC9BC83FC922061675E3C81FB7B270F848AB79 L_9;
		L_9 = LocalizationSettings_get_SelectedLocaleAsync_m524BFB6CBAE6D6AFC056559EBB994C51571930F2(NULL);
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_10;
		L_10 = AsyncOperationHandle_1_op_Implicit_mFD51F23F5F6FDF2A289B4663B6F2D063B5BF261B(L_9, AsyncOperationHandle_1_op_Implicit_mFD51F23F5F6FDF2A289B4663B6F2D063B5BF261B_RuntimeMethod_var);
		__this->___m_InitializeOperation_5 = L_10;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___m_InitializeOperation_5))->___m_InternalOp_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___m_InitializeOperation_5))->___m_LocationName_2), (void*)NULL);
		#endif
		// if (m_InitializeOperation.IsDone)
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* L_11 = (&__this->___m_InitializeOperation_5);
		bool L_12;
		L_12 = AsyncOperationHandle_get_IsDone_m55E07BF92CC2979A9BBFD8F5B97DCCD52DA1326A(L_11, NULL);
		if (!L_12)
		{
			goto IL_0083;
		}
	}
	{
		// InitializeCompleted(m_InitializeOperation);
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_13 = __this->___m_InitializeOperation_5;
		LanguageSelectionMenuUGUIDropdown_InitializeCompleted_mD021CC6B1CA46D71F5A200ACD6805246DAD670A2(__this, L_13, NULL);
		return;
	}

IL_0083:
	{
		// m_InitializeOperation.Completed += InitializeCompleted;
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* L_14 = (&__this->___m_InitializeOperation_5);
		Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* L_15 = (Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF*)il2cpp_codegen_object_new(Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Action_1__ctor_mB7E422278A9F89203BFED7F1B8F04DB5F7438D0E(L_15, __this, (intptr_t)((void*)LanguageSelectionMenuUGUIDropdown_InitializeCompleted_mD021CC6B1CA46D71F5A200ACD6805246DAD670A2_RuntimeMethod_var), NULL);
		AsyncOperationHandle_add_Completed_mD5633623ADF00C97B6A1EE712E6654452F64B2E0(L_14, L_15, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Localization.Samples.LanguageSelectionMenuUGUIDropdown::InitializeCompleted(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LanguageSelectionMenuUGUIDropdown_InitializeCompleted_mD021CC6B1CA46D71F5A200ACD6805246DAD670A2 (LanguageSelectionMenuUGUIDropdown_t032BBC2EF09E7B75859FA398383CD7EAD1B8145C* __this, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t55C64C85A9D0051A87CCECD2C9B66D12616ECC38_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILocalesProvider_t61A5B94D50A769527BFEF945350EA16D17BAFBB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LanguageSelectionMenuUGUIDropdown_LocalizationSettings_SelectedLocaleChanged_mD13A958B3C9DE3B3D95BBE94598BF3645C4A733C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2E877F5243ECE9B85FB668AC7BAEDD41295ADBB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m371BFB123C54FBBA612036D55FABF370481EFB71_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB376EB0B0DA422B5ED0EC8E9A8588B9736801CFB);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	int32_t V_1 = 0;
	List_1_tBD0AC994E5F9C7F539E0378F0CBB119065136548* V_2 = NULL;
	int32_t V_3 = 0;
	Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* V_4 = NULL;
	String_t* V_5 = NULL;
	LocaleIdentifier_t1C6758D6E05D8D5DBCD7FFEC16E8E55547595C18 V_6;
	memset((&V_6), 0, sizeof(V_6));
	String_t* G_B6_0 = NULL;
	{
		// var options = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_0 = L_0;
		// int selectedOption = 0;
		V_1 = 0;
		// var locales = LocalizationSettings.AvailableLocales.Locales;
		RuntimeObject* L_1;
		L_1 = LocalizationSettings_get_AvailableLocales_m95587473945EA5E4DF6638412151A0FEE83A0BCC(NULL);
		NullCheck(L_1);
		List_1_tBD0AC994E5F9C7F539E0378F0CBB119065136548* L_2;
		L_2 = InterfaceFuncInvoker0< List_1_tBD0AC994E5F9C7F539E0378F0CBB119065136548* >::Invoke(0 /* System.Collections.Generic.List`1<UnityEngine.Localization.Locale> UnityEngine.Localization.Settings.ILocalesProvider::get_Locales() */, ILocalesProvider_t61A5B94D50A769527BFEF945350EA16D17BAFBB0_il2cpp_TypeInfo_var, L_1);
		V_2 = L_2;
		// for (int i = 0; i < locales.Count; ++i)
		V_3 = 0;
		goto IL_007d;
	}

IL_0017:
	{
		// var locale = locales[i];
		List_1_tBD0AC994E5F9C7F539E0378F0CBB119065136548* L_3 = V_2;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* L_5;
		L_5 = List_1_get_Item_m371BFB123C54FBBA612036D55FABF370481EFB71(L_3, L_4, List_1_get_Item_m371BFB123C54FBBA612036D55FABF370481EFB71_RuntimeMethod_var);
		V_4 = L_5;
		// if (LocalizationSettings.SelectedLocale == locale)
		Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* L_6;
		L_6 = LocalizationSettings_get_SelectedLocale_mACC907A60E1512A873D25E8C84E40873B81CEE83(NULL);
		Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* L_7 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_0030;
		}
	}
	{
		// selectedOption = i;
		int32_t L_9 = V_3;
		V_1 = L_9;
	}

IL_0030:
	{
		// var displayName = locales[i].Identifier.CultureInfo != null ? locales[i].Identifier.CultureInfo.NativeName : locales[i].ToString();
		List_1_tBD0AC994E5F9C7F539E0378F0CBB119065136548* L_10 = V_2;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* L_12;
		L_12 = List_1_get_Item_m371BFB123C54FBBA612036D55FABF370481EFB71(L_10, L_11, List_1_get_Item_m371BFB123C54FBBA612036D55FABF370481EFB71_RuntimeMethod_var);
		NullCheck(L_12);
		LocaleIdentifier_t1C6758D6E05D8D5DBCD7FFEC16E8E55547595C18 L_13;
		L_13 = Locale_get_Identifier_mB725A4E8F29CA5C0544D03E1DD10767B54BCF29F_inline(L_12, NULL);
		V_6 = L_13;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_14;
		L_14 = LocaleIdentifier_get_CultureInfo_m219CA437AF19CE1411AEAB32FED7D69E45E2447B((&V_6), NULL);
		if (L_14)
		{
			goto IL_0055;
		}
	}
	{
		List_1_tBD0AC994E5F9C7F539E0378F0CBB119065136548* L_15 = V_2;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* L_17;
		L_17 = List_1_get_Item_m371BFB123C54FBBA612036D55FABF370481EFB71(L_15, L_16, List_1_get_Item_m371BFB123C54FBBA612036D55FABF370481EFB71_RuntimeMethod_var);
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_17);
		G_B6_0 = L_18;
		goto IL_006f;
	}

IL_0055:
	{
		List_1_tBD0AC994E5F9C7F539E0378F0CBB119065136548* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* L_21;
		L_21 = List_1_get_Item_m371BFB123C54FBBA612036D55FABF370481EFB71(L_19, L_20, List_1_get_Item_m371BFB123C54FBBA612036D55FABF370481EFB71_RuntimeMethod_var);
		NullCheck(L_21);
		LocaleIdentifier_t1C6758D6E05D8D5DBCD7FFEC16E8E55547595C18 L_22;
		L_22 = Locale_get_Identifier_mB725A4E8F29CA5C0544D03E1DD10767B54BCF29F_inline(L_21, NULL);
		V_6 = L_22;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_23;
		L_23 = LocaleIdentifier_get_CultureInfo_m219CA437AF19CE1411AEAB32FED7D69E45E2447B((&V_6), NULL);
		NullCheck(L_23);
		String_t* L_24;
		L_24 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Globalization.CultureInfo::get_NativeName() */, L_23);
		G_B6_0 = L_24;
	}

IL_006f:
	{
		V_5 = G_B6_0;
		// options.Add(displayName);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_25 = V_0;
		String_t* L_26 = V_5;
		NullCheck(L_25);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_25, L_26, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// for (int i = 0; i < locales.Count; ++i)
		int32_t L_27 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007d:
	{
		// for (int i = 0; i < locales.Count; ++i)
		int32_t L_28 = V_3;
		List_1_tBD0AC994E5F9C7F539E0378F0CBB119065136548* L_29 = V_2;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = List_1_get_Count_m2E877F5243ECE9B85FB668AC7BAEDD41295ADBB9_inline(L_29, List_1_get_Count_m2E877F5243ECE9B85FB668AC7BAEDD41295ADBB9_RuntimeMethod_var);
		if ((((int32_t)L_28) < ((int32_t)L_30)))
		{
			goto IL_0017;
		}
	}
	{
		// if (options.Count == 0)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_31 = V_0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_31, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if (L_32)
		{
			goto IL_00a7;
		}
	}
	{
		// options.Add("No Locales Available");
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_33 = V_0;
		NullCheck(L_33);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_33, _stringLiteralB376EB0B0DA422B5ED0EC8E9A8588B9736801CFB, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// m_Dropdown.interactable = false;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_34 = __this->___m_Dropdown_4;
		NullCheck(L_34);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_34, (bool)0, NULL);
		goto IL_00b3;
	}

IL_00a7:
	{
		// m_Dropdown.interactable = true;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_35 = __this->___m_Dropdown_4;
		NullCheck(L_35);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_35, (bool)1, NULL);
	}

IL_00b3:
	{
		// m_Dropdown.ClearOptions();
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_36 = __this->___m_Dropdown_4;
		NullCheck(L_36);
		Dropdown_ClearOptions_m3EE71BFE47AB96BC7F731C4EE6BC728ED0E6EE56(L_36, NULL);
		// m_Dropdown.AddOptions(options);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_37 = __this->___m_Dropdown_4;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_38 = V_0;
		NullCheck(L_37);
		Dropdown_AddOptions_mCFB763400FA1BCA695C168E7FBCDE20C9B8E7839(L_37, L_38, NULL);
		// m_Dropdown.SetValueWithoutNotify(selectedOption);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_39 = __this->___m_Dropdown_4;
		int32_t L_40 = V_1;
		NullCheck(L_39);
		Dropdown_SetValueWithoutNotify_m3D2B40BC16D305309D68D9FF093BF25FF66E4ABA(L_39, L_40, NULL);
		// LocalizationSettings.SelectedLocaleChanged += LocalizationSettings_SelectedLocaleChanged;
		Action_1_t55C64C85A9D0051A87CCECD2C9B66D12616ECC38* L_41 = (Action_1_t55C64C85A9D0051A87CCECD2C9B66D12616ECC38*)il2cpp_codegen_object_new(Action_1_t55C64C85A9D0051A87CCECD2C9B66D12616ECC38_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		Action_1__ctor_m5CD9148DEE5317BA23F52D3CFF3B775540F3D24D(L_41, __this, (intptr_t)((void*)LanguageSelectionMenuUGUIDropdown_LocalizationSettings_SelectedLocaleChanged_mD13A958B3C9DE3B3D95BBE94598BF3645C4A733C_RuntimeMethod_var), NULL);
		LocalizationSettings_add_SelectedLocaleChanged_m8F417D4662DEDA1C37BE3A159B956EFCDE4ADF79(L_41, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Localization.Samples.LanguageSelectionMenuUGUIDropdown::OnSelectionChanged(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LanguageSelectionMenuUGUIDropdown_OnSelectionChanged_mF7F5CCE9B198B1DE98BC83EC9D2AC634C690BDD2 (LanguageSelectionMenuUGUIDropdown_t032BBC2EF09E7B75859FA398383CD7EAD1B8145C* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t55C64C85A9D0051A87CCECD2C9B66D12616ECC38_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILocalesProvider_t61A5B94D50A769527BFEF945350EA16D17BAFBB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LanguageSelectionMenuUGUIDropdown_LocalizationSettings_SelectedLocaleChanged_mD13A958B3C9DE3B3D95BBE94598BF3645C4A733C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m371BFB123C54FBBA612036D55FABF370481EFB71_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LocalizationSettings.SelectedLocaleChanged -= LocalizationSettings_SelectedLocaleChanged;
		Action_1_t55C64C85A9D0051A87CCECD2C9B66D12616ECC38* L_0 = (Action_1_t55C64C85A9D0051A87CCECD2C9B66D12616ECC38*)il2cpp_codegen_object_new(Action_1_t55C64C85A9D0051A87CCECD2C9B66D12616ECC38_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_m5CD9148DEE5317BA23F52D3CFF3B775540F3D24D(L_0, __this, (intptr_t)((void*)LanguageSelectionMenuUGUIDropdown_LocalizationSettings_SelectedLocaleChanged_mD13A958B3C9DE3B3D95BBE94598BF3645C4A733C_RuntimeMethod_var), NULL);
		LocalizationSettings_remove_SelectedLocaleChanged_m98797ACA5E77BF66D64E11BDAE292AB7C2D952A3(L_0, NULL);
		// var locale = LocalizationSettings.AvailableLocales.Locales[index];
		RuntimeObject* L_1;
		L_1 = LocalizationSettings_get_AvailableLocales_m95587473945EA5E4DF6638412151A0FEE83A0BCC(NULL);
		NullCheck(L_1);
		List_1_tBD0AC994E5F9C7F539E0378F0CBB119065136548* L_2;
		L_2 = InterfaceFuncInvoker0< List_1_tBD0AC994E5F9C7F539E0378F0CBB119065136548* >::Invoke(0 /* System.Collections.Generic.List`1<UnityEngine.Localization.Locale> UnityEngine.Localization.Settings.ILocalesProvider::get_Locales() */, ILocalesProvider_t61A5B94D50A769527BFEF945350EA16D17BAFBB0_il2cpp_TypeInfo_var, L_1);
		int32_t L_3 = ___index0;
		NullCheck(L_2);
		Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* L_4;
		L_4 = List_1_get_Item_m371BFB123C54FBBA612036D55FABF370481EFB71(L_2, L_3, List_1_get_Item_m371BFB123C54FBBA612036D55FABF370481EFB71_RuntimeMethod_var);
		// LocalizationSettings.SelectedLocale = locale;
		LocalizationSettings_set_SelectedLocale_m19FDCECD3A7667D216F3CD160E0A9F7078D262A1(L_4, NULL);
		// LocalizationSettings.SelectedLocaleChanged += LocalizationSettings_SelectedLocaleChanged;
		Action_1_t55C64C85A9D0051A87CCECD2C9B66D12616ECC38* L_5 = (Action_1_t55C64C85A9D0051A87CCECD2C9B66D12616ECC38*)il2cpp_codegen_object_new(Action_1_t55C64C85A9D0051A87CCECD2C9B66D12616ECC38_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_m5CD9148DEE5317BA23F52D3CFF3B775540F3D24D(L_5, __this, (intptr_t)((void*)LanguageSelectionMenuUGUIDropdown_LocalizationSettings_SelectedLocaleChanged_mD13A958B3C9DE3B3D95BBE94598BF3645C4A733C_RuntimeMethod_var), NULL);
		LocalizationSettings_add_SelectedLocaleChanged_m8F417D4662DEDA1C37BE3A159B956EFCDE4ADF79(L_5, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Localization.Samples.LanguageSelectionMenuUGUIDropdown::LocalizationSettings_SelectedLocaleChanged(UnityEngine.Localization.Locale)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LanguageSelectionMenuUGUIDropdown_LocalizationSettings_SelectedLocaleChanged_mD13A958B3C9DE3B3D95BBE94598BF3645C4A733C (LanguageSelectionMenuUGUIDropdown_t032BBC2EF09E7B75859FA398383CD7EAD1B8145C* __this, Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* ___locale0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILocalesProvider_t61A5B94D50A769527BFEF945350EA16D17BAFBB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_mF60728B5646243CE1A06E49E08D77DD25CE9FCF3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// var selectedIndex = LocalizationSettings.AvailableLocales.Locales.IndexOf(locale);
		RuntimeObject* L_0;
		L_0 = LocalizationSettings_get_AvailableLocales_m95587473945EA5E4DF6638412151A0FEE83A0BCC(NULL);
		NullCheck(L_0);
		List_1_tBD0AC994E5F9C7F539E0378F0CBB119065136548* L_1;
		L_1 = InterfaceFuncInvoker0< List_1_tBD0AC994E5F9C7F539E0378F0CBB119065136548* >::Invoke(0 /* System.Collections.Generic.List`1<UnityEngine.Localization.Locale> UnityEngine.Localization.Settings.ILocalesProvider::get_Locales() */, ILocalesProvider_t61A5B94D50A769527BFEF945350EA16D17BAFBB0_il2cpp_TypeInfo_var, L_0);
		Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* L_2 = ___locale0;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = List_1_IndexOf_mF60728B5646243CE1A06E49E08D77DD25CE9FCF3(L_1, L_2, List_1_IndexOf_mF60728B5646243CE1A06E49E08D77DD25CE9FCF3_RuntimeMethod_var);
		V_0 = L_3;
		// m_Dropdown.SetValueWithoutNotify(selectedIndex);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_4 = __this->___m_Dropdown_4;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Dropdown_SetValueWithoutNotify_m3D2B40BC16D305309D68D9FF093BF25FF66E4ABA(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Localization.Samples.LanguageSelectionMenuUGUIDropdown::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LanguageSelectionMenuUGUIDropdown__ctor_mE9990CB0ED749C85D8E456EB1A9B5F9DB6A98698 (LanguageSelectionMenuUGUIDropdown_t032BBC2EF09E7B75859FA398383CD7EAD1B8145C* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Localization.Samples.LanguageSelectionMenuUGUIToggleList::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LanguageSelectionMenuUGUIToggleList_Start_m66F69AF2FFAE3EEAB866CC37F4D1D9FD247FB4D9 (LanguageSelectionMenuUGUIToggleList_tC1C201696C0BECBB7D1A7544573530A5ED134645* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_op_Implicit_mFD51F23F5F6FDF2A289B4663B6F2D063B5BF261B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LanguageSelectionMenuUGUIToggleList_InitializeCompleted_m0A21D2FD493D3FCA43244E236191458C55BC8279_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_InitializeOperation = LocalizationSettings.SelectedLocaleAsync;
		AsyncOperationHandle_1_tD9CC9BC83FC922061675E3C81FB7B270F848AB79 L_0;
		L_0 = LocalizationSettings_get_SelectedLocaleAsync_m524BFB6CBAE6D6AFC056559EBB994C51571930F2(NULL);
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_1;
		L_1 = AsyncOperationHandle_1_op_Implicit_mFD51F23F5F6FDF2A289B4663B6F2D063B5BF261B(L_0, AsyncOperationHandle_1_op_Implicit_mFD51F23F5F6FDF2A289B4663B6F2D063B5BF261B_RuntimeMethod_var);
		__this->___m_InitializeOperation_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___m_InitializeOperation_6))->___m_InternalOp_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___m_InitializeOperation_6))->___m_LocationName_2), (void*)NULL);
		#endif
		// if (m_InitializeOperation.IsDone)
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* L_2 = (&__this->___m_InitializeOperation_6);
		bool L_3;
		L_3 = AsyncOperationHandle_get_IsDone_m55E07BF92CC2979A9BBFD8F5B97DCCD52DA1326A(L_2, NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// InitializeCompleted(m_InitializeOperation);
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_4 = __this->___m_InitializeOperation_6;
		LanguageSelectionMenuUGUIToggleList_InitializeCompleted_m0A21D2FD493D3FCA43244E236191458C55BC8279(__this, L_4, NULL);
		return;
	}

IL_002a:
	{
		// m_InitializeOperation.Completed += InitializeCompleted;
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* L_5 = (&__this->___m_InitializeOperation_6);
		Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* L_6 = (Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF*)il2cpp_codegen_object_new(Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action_1__ctor_mB7E422278A9F89203BFED7F1B8F04DB5F7438D0E(L_6, __this, (intptr_t)((void*)LanguageSelectionMenuUGUIToggleList_InitializeCompleted_m0A21D2FD493D3FCA43244E236191458C55BC8279_RuntimeMethod_var), NULL);
		AsyncOperationHandle_add_Completed_mD5633623ADF00C97B6A1EE712E6654452F64B2E0(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Localization.Samples.LanguageSelectionMenuUGUIToggleList::InitializeCompleted(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LanguageSelectionMenuUGUIToggleList_InitializeCompleted_m0A21D2FD493D3FCA43244E236191458C55BC8279 (LanguageSelectionMenuUGUIToggleList_tC1C201696C0BECBB7D1A7544573530A5ED134645* __this, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t55C64C85A9D0051A87CCECD2C9B66D12616ECC38_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m523A3491FABFC4B0ACEB02BF92A9568686CA6B49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C_m4B74F74B0C7DF2BD2A5061E4BA49A25AB8F95AE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m4883A479F4252D21D45D5AD3140CB42598C48A13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m4EE154BD6B3D051BADD8CC7F7C28CF20349ABD17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILocalesProvider_t61A5B94D50A769527BFEF945350EA16D17BAFBB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LanguageSelectionMenuUGUIToggleList_LocalizationSettings_SelectedLocaleChanged_m0E3C70F5068FF5E9A1B6C81CC8353596679FE6C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2E877F5243ECE9B85FB668AC7BAEDD41295ADBB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m371BFB123C54FBBA612036D55FABF370481EFB71_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_U3CInitializeCompletedU3Eb__0_m247691BF966AA408EFA756546FF4B2569F75A8B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_t99E335A9B0DADAA6FB4EFE62EC6DEE480427ECFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tBD0AC994E5F9C7F539E0378F0CBB119065136548* V_0 = NULL;
	int32_t V_1 = 0;
	U3CU3Ec__DisplayClass6_0_t99E335A9B0DADAA6FB4EFE62EC6DEE480427ECFB* V_2 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* V_4 = NULL;
	LocaleIdentifier_t1C6758D6E05D8D5DBCD7FFEC16E8E55547595C18 V_5;
	memset((&V_5), 0, sizeof(V_5));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B3_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B2_0 = NULL;
	String_t* G_B4_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B4_1 = NULL;
	{
		// LocalizationSettings.SelectedLocaleChanged += LocalizationSettings_SelectedLocaleChanged;
		Action_1_t55C64C85A9D0051A87CCECD2C9B66D12616ECC38* L_0 = (Action_1_t55C64C85A9D0051A87CCECD2C9B66D12616ECC38*)il2cpp_codegen_object_new(Action_1_t55C64C85A9D0051A87CCECD2C9B66D12616ECC38_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_m5CD9148DEE5317BA23F52D3CFF3B775540F3D24D(L_0, __this, (intptr_t)((void*)LanguageSelectionMenuUGUIToggleList_LocalizationSettings_SelectedLocaleChanged_m0E3C70F5068FF5E9A1B6C81CC8353596679FE6C5_RuntimeMethod_var), NULL);
		LocalizationSettings_add_SelectedLocaleChanged_m8F417D4662DEDA1C37BE3A159B956EFCDE4ADF79(L_0, NULL);
		// m_ToggleGroup = container.gameObject.AddComponent<ToggleGroup>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___container_4;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		NullCheck(L_2);
		ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* L_3;
		L_3 = GameObject_AddComponent_TisToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C_m4B74F74B0C7DF2BD2A5061E4BA49A25AB8F95AE7(L_2, GameObject_AddComponent_TisToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C_m4B74F74B0C7DF2BD2A5061E4BA49A25AB8F95AE7_RuntimeMethod_var);
		__this->___m_ToggleGroup_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ToggleGroup_8), (void*)L_3);
		// var locales = LocalizationSettings.AvailableLocales.Locales;
		RuntimeObject* L_4;
		L_4 = LocalizationSettings_get_AvailableLocales_m95587473945EA5E4DF6638412151A0FEE83A0BCC(NULL);
		NullCheck(L_4);
		List_1_tBD0AC994E5F9C7F539E0378F0CBB119065136548* L_5;
		L_5 = InterfaceFuncInvoker0< List_1_tBD0AC994E5F9C7F539E0378F0CBB119065136548* >::Invoke(0 /* System.Collections.Generic.List`1<UnityEngine.Localization.Locale> UnityEngine.Localization.Settings.ILocalesProvider::get_Locales() */, ILocalesProvider_t61A5B94D50A769527BFEF945350EA16D17BAFBB0_il2cpp_TypeInfo_var, L_4);
		V_0 = L_5;
		// for (int i = 0; i < locales.Count; ++i)
		V_1 = 0;
		goto IL_0113;
	}

IL_0039:
	{
		U3CU3Ec__DisplayClass6_0_t99E335A9B0DADAA6FB4EFE62EC6DEE480427ECFB* L_6 = (U3CU3Ec__DisplayClass6_0_t99E335A9B0DADAA6FB4EFE62EC6DEE480427ECFB*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass6_0_t99E335A9B0DADAA6FB4EFE62EC6DEE480427ECFB_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		U3CU3Ec__DisplayClass6_0__ctor_m6A8560FD976A7C7D32D9458606753A4CAD58FB1D(L_6, NULL);
		V_2 = L_6;
		U3CU3Ec__DisplayClass6_0_t99E335A9B0DADAA6FB4EFE62EC6DEE480427ECFB* L_7 = V_2;
		NullCheck(L_7);
		L_7->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___U3CU3E4__this_1), (void*)__this);
		// var locale = locales[i];
		U3CU3Ec__DisplayClass6_0_t99E335A9B0DADAA6FB4EFE62EC6DEE480427ECFB* L_8 = V_2;
		List_1_tBD0AC994E5F9C7F539E0378F0CBB119065136548* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* L_11;
		L_11 = List_1_get_Item_m371BFB123C54FBBA612036D55FABF370481EFB71(L_9, L_10, List_1_get_Item_m371BFB123C54FBBA612036D55FABF370481EFB71_RuntimeMethod_var);
		NullCheck(L_8);
		L_8->___locale_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___locale_0), (void*)L_11);
		// var languageToggle = Instantiate(languageTogglePrefab, container);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___languageTogglePrefab_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->___container_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_12, L_13, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		V_3 = L_14;
		// languageToggle.name = locale.Identifier.CultureInfo != null ? locale.Identifier.CultureInfo.NativeName : locale.ToString();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = V_3;
		U3CU3Ec__DisplayClass6_0_t99E335A9B0DADAA6FB4EFE62EC6DEE480427ECFB* L_16 = V_2;
		NullCheck(L_16);
		Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* L_17 = L_16->___locale_0;
		NullCheck(L_17);
		LocaleIdentifier_t1C6758D6E05D8D5DBCD7FFEC16E8E55547595C18 L_18;
		L_18 = Locale_get_Identifier_mB725A4E8F29CA5C0544D03E1DD10767B54BCF29F_inline(L_17, NULL);
		V_5 = L_18;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_19;
		L_19 = LocaleIdentifier_get_CultureInfo_m219CA437AF19CE1411AEAB32FED7D69E45E2447B((&V_5), NULL);
		G_B2_0 = L_15;
		if (L_19)
		{
			G_B3_0 = L_15;
			goto IL_0089;
		}
	}
	{
		U3CU3Ec__DisplayClass6_0_t99E335A9B0DADAA6FB4EFE62EC6DEE480427ECFB* L_20 = V_2;
		NullCheck(L_20);
		Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* L_21 = L_20->___locale_0;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
		G_B4_0 = L_22;
		G_B4_1 = G_B2_0;
		goto IL_00a2;
	}

IL_0089:
	{
		U3CU3Ec__DisplayClass6_0_t99E335A9B0DADAA6FB4EFE62EC6DEE480427ECFB* L_23 = V_2;
		NullCheck(L_23);
		Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* L_24 = L_23->___locale_0;
		NullCheck(L_24);
		LocaleIdentifier_t1C6758D6E05D8D5DBCD7FFEC16E8E55547595C18 L_25;
		L_25 = Locale_get_Identifier_mB725A4E8F29CA5C0544D03E1DD10767B54BCF29F_inline(L_24, NULL);
		V_5 = L_25;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_26;
		L_26 = LocaleIdentifier_get_CultureInfo_m219CA437AF19CE1411AEAB32FED7D69E45E2447B((&V_5), NULL);
		NullCheck(L_26);
		String_t* L_27;
		L_27 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Globalization.CultureInfo::get_NativeName() */, L_26);
		G_B4_0 = L_27;
		G_B4_1 = G_B3_0;
	}

IL_00a2:
	{
		NullCheck(G_B4_1);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(G_B4_1, G_B4_0, NULL);
		// var label = languageToggle.GetComponentInChildren<Text>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = V_3;
		NullCheck(L_28);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_29;
		L_29 = GameObject_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m4883A479F4252D21D45D5AD3140CB42598C48A13(L_28, GameObject_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m4883A479F4252D21D45D5AD3140CB42598C48A13_RuntimeMethod_var);
		// label.text = languageToggle.name;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = V_3;
		NullCheck(L_30);
		String_t* L_31;
		L_31 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_30, NULL);
		NullCheck(L_29);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_29, L_31);
		// var toggle = languageToggle.GetComponent<Toggle>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = V_3;
		NullCheck(L_32);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_33;
		L_33 = GameObject_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m4EE154BD6B3D051BADD8CC7F7C28CF20349ABD17(L_32, GameObject_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m4EE154BD6B3D051BADD8CC7F7C28CF20349ABD17_RuntimeMethod_var);
		V_4 = L_33;
		// toggle.SetIsOnWithoutNotify(LocalizationSettings.SelectedLocale == locale);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_34 = V_4;
		Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* L_35;
		L_35 = LocalizationSettings_get_SelectedLocale_mACC907A60E1512A873D25E8C84E40873B81CEE83(NULL);
		U3CU3Ec__DisplayClass6_0_t99E335A9B0DADAA6FB4EFE62EC6DEE480427ECFB* L_36 = V_2;
		NullCheck(L_36);
		Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* L_37 = L_36->___locale_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_35, L_37, NULL);
		NullCheck(L_34);
		Toggle_SetIsOnWithoutNotify_mF5B19F1767B9EFF02335E41D3D2DC678642170C2(L_34, L_38, NULL);
		// m_Toggles[locale] = toggle;
		Dictionary_2_t8C990C3846625D81DDAEB52F7699B7EBC9F19C8F* L_39 = __this->___m_Toggles_7;
		U3CU3Ec__DisplayClass6_0_t99E335A9B0DADAA6FB4EFE62EC6DEE480427ECFB* L_40 = V_2;
		NullCheck(L_40);
		Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* L_41 = L_40->___locale_0;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_42 = V_4;
		NullCheck(L_39);
		Dictionary_2_set_Item_m523A3491FABFC4B0ACEB02BF92A9568686CA6B49(L_39, L_41, L_42, Dictionary_2_set_Item_m523A3491FABFC4B0ACEB02BF92A9568686CA6B49_RuntimeMethod_var);
		// toggle.onValueChanged.AddListener(val =>
		// {
		//     if (val)
		//     {
		//         // Unsubscribe from SelectedLocaleChanged so we don't get an unnecessary callback from the change we are about to make.
		//         LocalizationSettings.SelectedLocaleChanged -= LocalizationSettings_SelectedLocaleChanged;
		// 
		//         LocalizationSettings.SelectedLocale = locale;
		// 
		//         // Resubscribe to SelectedLocaleChanged so that we can stay in sync with changes that may be made by other scripts.
		//         LocalizationSettings.SelectedLocaleChanged += LocalizationSettings_SelectedLocaleChanged;
		//     }
		// });
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_43 = V_4;
		NullCheck(L_43);
		ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* L_44 = L_43->___onValueChanged_23;
		U3CU3Ec__DisplayClass6_0_t99E335A9B0DADAA6FB4EFE62EC6DEE480427ECFB* L_45 = V_2;
		UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* L_46 = (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*)il2cpp_codegen_object_new(UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		NullCheck(L_46);
		UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD(L_46, L_45, (intptr_t)((void*)U3CU3Ec__DisplayClass6_0_U3CInitializeCompletedU3Eb__0_m247691BF966AA408EFA756546FF4B2569F75A8B1_RuntimeMethod_var), NULL);
		NullCheck(L_44);
		UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD(L_44, L_46, UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		// toggle.group = m_ToggleGroup;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_47 = V_4;
		ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* L_48 = __this->___m_ToggleGroup_8;
		NullCheck(L_47);
		Toggle_set_group_mEE85FE3AB2ACFF9056DA613239DBACECA588507B(L_47, L_48, NULL);
		// for (int i = 0; i < locales.Count; ++i)
		int32_t L_49 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_0113:
	{
		// for (int i = 0; i < locales.Count; ++i)
		int32_t L_50 = V_1;
		List_1_tBD0AC994E5F9C7F539E0378F0CBB119065136548* L_51 = V_0;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = List_1_get_Count_m2E877F5243ECE9B85FB668AC7BAEDD41295ADBB9_inline(L_51, List_1_get_Count_m2E877F5243ECE9B85FB668AC7BAEDD41295ADBB9_RuntimeMethod_var);
		if ((((int32_t)L_50) < ((int32_t)L_52)))
		{
			goto IL_0039;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Localization.Samples.LanguageSelectionMenuUGUIToggleList::LocalizationSettings_SelectedLocaleChanged(UnityEngine.Localization.Locale)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LanguageSelectionMenuUGUIToggleList_LocalizationSettings_SelectedLocaleChanged_m0E3C70F5068FF5E9A1B6C81CC8353596679FE6C5 (LanguageSelectionMenuUGUIToggleList_tC1C201696C0BECBB7D1A7544573530A5ED134645* __this, Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* ___locale0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m6EFEEF1A48396E2022178EEECD03FE642016141B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* V_0 = NULL;
	{
		// if (m_Toggles.TryGetValue(locale, out var toggle))
		Dictionary_2_t8C990C3846625D81DDAEB52F7699B7EBC9F19C8F* L_0 = __this->___m_Toggles_7;
		Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* L_1 = ___locale0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m6EFEEF1A48396E2022178EEECD03FE642016141B(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m6EFEEF1A48396E2022178EEECD03FE642016141B_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// toggle.SetIsOnWithoutNotify(true);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_3 = V_0;
		NullCheck(L_3);
		Toggle_SetIsOnWithoutNotify_mF5B19F1767B9EFF02335E41D3D2DC678642170C2(L_3, (bool)1, NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Localization.Samples.LanguageSelectionMenuUGUIToggleList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LanguageSelectionMenuUGUIToggleList__ctor_m0A916F0F7355C5320A28036CF848CFA9A7E974F6 (LanguageSelectionMenuUGUIToggleList_tC1C201696C0BECBB7D1A7544573530A5ED134645* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m7FD0EEF4AF1811557E3C42AEDEA0021AD190E57F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t8C990C3846625D81DDAEB52F7699B7EBC9F19C8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Dictionary<Locale, Toggle> m_Toggles = new Dictionary<Locale, Toggle>();
		Dictionary_2_t8C990C3846625D81DDAEB52F7699B7EBC9F19C8F* L_0 = (Dictionary_2_t8C990C3846625D81DDAEB52F7699B7EBC9F19C8F*)il2cpp_codegen_object_new(Dictionary_2_t8C990C3846625D81DDAEB52F7699B7EBC9F19C8F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m7FD0EEF4AF1811557E3C42AEDEA0021AD190E57F(L_0, Dictionary_2__ctor_m7FD0EEF4AF1811557E3C42AEDEA0021AD190E57F_RuntimeMethod_var);
		__this->___m_Toggles_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Toggles_7), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Localization.Samples.LanguageSelectionMenuUGUIToggleList/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m6A8560FD976A7C7D32D9458606753A4CAD58FB1D (U3CU3Ec__DisplayClass6_0_t99E335A9B0DADAA6FB4EFE62EC6DEE480427ECFB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.Localization.Samples.LanguageSelectionMenuUGUIToggleList/<>c__DisplayClass6_0::<InitializeCompleted>b__0(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3CInitializeCompletedU3Eb__0_m247691BF966AA408EFA756546FF4B2569F75A8B1 (U3CU3Ec__DisplayClass6_0_t99E335A9B0DADAA6FB4EFE62EC6DEE480427ECFB* __this, bool ___val0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t55C64C85A9D0051A87CCECD2C9B66D12616ECC38_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LanguageSelectionMenuUGUIToggleList_LocalizationSettings_SelectedLocaleChanged_m0E3C70F5068FF5E9A1B6C81CC8353596679FE6C5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (val)
		bool L_0 = ___val0;
		if (!L_0)
		{
			goto IL_003a;
		}
	}
	{
		// LocalizationSettings.SelectedLocaleChanged -= LocalizationSettings_SelectedLocaleChanged;
		LanguageSelectionMenuUGUIToggleList_tC1C201696C0BECBB7D1A7544573530A5ED134645* L_1 = __this->___U3CU3E4__this_1;
		Action_1_t55C64C85A9D0051A87CCECD2C9B66D12616ECC38* L_2 = (Action_1_t55C64C85A9D0051A87CCECD2C9B66D12616ECC38*)il2cpp_codegen_object_new(Action_1_t55C64C85A9D0051A87CCECD2C9B66D12616ECC38_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_m5CD9148DEE5317BA23F52D3CFF3B775540F3D24D(L_2, L_1, (intptr_t)((void*)LanguageSelectionMenuUGUIToggleList_LocalizationSettings_SelectedLocaleChanged_m0E3C70F5068FF5E9A1B6C81CC8353596679FE6C5_RuntimeMethod_var), NULL);
		LocalizationSettings_remove_SelectedLocaleChanged_m98797ACA5E77BF66D64E11BDAE292AB7C2D952A3(L_2, NULL);
		// LocalizationSettings.SelectedLocale = locale;
		Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* L_3 = __this->___locale_0;
		LocalizationSettings_set_SelectedLocale_m19FDCECD3A7667D216F3CD160E0A9F7078D262A1(L_3, NULL);
		// LocalizationSettings.SelectedLocaleChanged += LocalizationSettings_SelectedLocaleChanged;
		LanguageSelectionMenuUGUIToggleList_tC1C201696C0BECBB7D1A7544573530A5ED134645* L_4 = __this->___U3CU3E4__this_1;
		Action_1_t55C64C85A9D0051A87CCECD2C9B66D12616ECC38* L_5 = (Action_1_t55C64C85A9D0051A87CCECD2C9B66D12616ECC38*)il2cpp_codegen_object_new(Action_1_t55C64C85A9D0051A87CCECD2C9B66D12616ECC38_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_m5CD9148DEE5317BA23F52D3CFF3B775540F3D24D(L_5, L_4, (intptr_t)((void*)LanguageSelectionMenuUGUIToggleList_LocalizationSettings_SelectedLocaleChanged_m0E3C70F5068FF5E9A1B6C81CC8353596679FE6C5_RuntimeMethod_var), NULL);
		LocalizationSettings_add_SelectedLocaleChanged_m8F417D4662DEDA1C37BE3A159B956EFCDE4ADF79(L_5, NULL);
	}

IL_003a:
	{
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059* Dropdown_get_onValueChanged_mAC49CE9A83E258FEC024662127057567275CAC12_inline (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, const RuntimeMethod* method) 
{
	{
		// public DropdownEvent onValueChanged { get { return m_OnValueChanged; } set { m_OnValueChanged = value; } }
		DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059* L_0 = __this->___m_OnValueChanged_27;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LocaleIdentifier_t1C6758D6E05D8D5DBCD7FFEC16E8E55547595C18 Locale_get_Identifier_mB725A4E8F29CA5C0544D03E1DD10767B54BCF29F_inline (Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Identifier;
		LocaleIdentifier_t1C6758D6E05D8D5DBCD7FFEC16E8E55547595C18 L_0 = __this->___m_Identifier_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
