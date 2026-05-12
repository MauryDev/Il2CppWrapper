
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::UnityInterop::TMPro {

struct TMP_Text {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 310> methods;
    inline static std::array<Il2CppWrapper::Field*, 238> fields;  
    /* System.String TMPro::TMP_Text::m_text */
inline static auto& f_m_text = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[0]);
/* System.Boolean TMPro::TMP_Text::m_IsTextBackingStringDirty */
inline static auto& f_m_IsTextBackingStringDirty = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[1]);
/* TMPro.ITextPreprocessor TMPro::TMP_Text::m_TextPreprocessor */
inline static auto& f_m_TextPreprocessor = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[2]);
/* System.Boolean TMPro::TMP_Text::m_isRightToLeft */
inline static auto& f_m_isRightToLeft = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[3]);
/* TMPro.TMP_FontAsset TMPro::TMP_Text::m_fontAsset */
inline static auto& f_m_fontAsset = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[4]);
/* TMPro.TMP_FontAsset TMPro::TMP_Text::m_currentFontAsset */
inline static auto& f_m_currentFontAsset = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[5]);
/* System.Boolean TMPro::TMP_Text::m_isSDFShader */
inline static auto& f_m_isSDFShader = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[6]);
/* UnityEngine.Material TMPro::TMP_Text::m_sharedMaterial */
inline static auto& f_m_sharedMaterial = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[7]);
/* UnityEngine.Material TMPro::TMP_Text::m_currentMaterial */
inline static auto& f_m_currentMaterial = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[8]);
/* TMPro.MaterialReference[] TMPro::TMP_Text::m_materialReferences */
inline static auto& f_m_materialReferences = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[9]);
/* System.Collections.Generic.Dictionary<System.Int32,System.Int32> TMPro::TMP_Text::m_materialReferenceIndexLookup */
inline static auto& f_m_materialReferenceIndexLookup = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[10]);
/* TMPro.TMP_TextProcessingStack<TMPro.MaterialReference> TMPro::TMP_Text::m_materialReferenceStack */
inline static auto& f_m_materialReferenceStack = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[11]);
/* System.Int32 TMPro::TMP_Text::m_currentMaterialIndex */
inline static auto& f_m_currentMaterialIndex = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[12]);
/* UnityEngine.Material[] TMPro::TMP_Text::m_fontSharedMaterials */
inline static auto& f_m_fontSharedMaterials = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[13]);
/* UnityEngine.Material TMPro::TMP_Text::m_fontMaterial */
inline static auto& f_m_fontMaterial = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[14]);
/* UnityEngine.Material[] TMPro::TMP_Text::m_fontMaterials */
inline static auto& f_m_fontMaterials = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[15]);
/* System.Boolean TMPro::TMP_Text::m_isMaterialDirty */
inline static auto& f_m_isMaterialDirty = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[16]);
/* UnityEngine.Color32 TMPro::TMP_Text::m_fontColor32 */
inline static auto& f_m_fontColor32 = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[17]);
/* UnityEngine.Color TMPro::TMP_Text::m_fontColor */
inline static auto& f_m_fontColor = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[18]);
/* UnityEngine.Color32 TMPro::TMP_Text::s_colorWhite */
inline static auto& f_s_colorWhite = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[19]);
/* UnityEngine.Color32 TMPro::TMP_Text::m_underlineColor */
inline static auto& f_m_underlineColor = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[20]);
/* UnityEngine.Color32 TMPro::TMP_Text::m_strikethroughColor */
inline static auto& f_m_strikethroughColor = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[21]);
/* TMPro.HighlightState TMPro::TMP_Text::m_HighlightState */
inline static auto& f_m_HighlightState = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[22]);
/* System.Boolean TMPro::TMP_Text::m_ConvertToLinearSpace */
inline static auto& f_m_ConvertToLinearSpace = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[23]);
/* System.Boolean TMPro::TMP_Text::m_enableVertexGradient */
inline static auto& f_m_enableVertexGradient = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[24]);
/* TMPro.ColorMode TMPro::TMP_Text::m_colorMode */
inline static auto& f_m_colorMode = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[25]);
/* TMPro.VertexGradient TMPro::TMP_Text::m_fontColorGradient */
inline static auto& f_m_fontColorGradient = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[26]);
/* TMPro.TMP_ColorGradient TMPro::TMP_Text::m_fontColorGradientPreset */
inline static auto& f_m_fontColorGradientPreset = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[27]);
/* TMPro.TMP_SpriteAsset TMPro::TMP_Text::m_spriteAsset */
inline static auto& f_m_spriteAsset = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[28]);
/* System.Boolean TMPro::TMP_Text::m_tintAllSprites */
inline static auto& f_m_tintAllSprites = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[29]);
/* System.Boolean TMPro::TMP_Text::m_tintSprite */
inline static auto& f_m_tintSprite = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[30]);
/* UnityEngine.Color32 TMPro::TMP_Text::m_spriteColor */
inline static auto& f_m_spriteColor = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[31]);
/* TMPro.TMP_StyleSheet TMPro::TMP_Text::m_StyleSheet */
inline static auto& f_m_StyleSheet = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[32]);
/* TMPro.TMP_Style TMPro::TMP_Text::m_TextStyle */
inline static auto& f_m_TextStyle = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[33]);
/* System.Int32 TMPro::TMP_Text::m_TextStyleHashCode */
inline static auto& f_m_TextStyleHashCode = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[34]);
/* System.Boolean TMPro::TMP_Text::m_overrideHtmlColors */
inline static auto& f_m_overrideHtmlColors = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[35]);
/* UnityEngine.Color32 TMPro::TMP_Text::m_faceColor */
inline static auto& f_m_faceColor = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[36]);
/* UnityEngine.Color32 TMPro::TMP_Text::m_outlineColor */
inline static auto& f_m_outlineColor = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[37]);
/* System.Single TMPro::TMP_Text::m_outlineWidth */
inline static auto& f_m_outlineWidth = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[38]);
/* UnityEngine.Vector3 TMPro::TMP_Text::m_currentEnvMapRotation */
inline static auto& f_m_currentEnvMapRotation = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[39]);
/* System.Boolean TMPro::TMP_Text::m_hasEnvMapProperty */
inline static auto& f_m_hasEnvMapProperty = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[40]);
/* System.Single TMPro::TMP_Text::m_fontSize */
inline static auto& f_m_fontSize = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[41]);
/* System.Single TMPro::TMP_Text::m_currentFontSize */
inline static auto& f_m_currentFontSize = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[42]);
/* System.Single TMPro::TMP_Text::m_fontSizeBase */
inline static auto& f_m_fontSizeBase = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[43]);
/* TMPro.TMP_TextProcessingStack<System.Single> TMPro::TMP_Text::m_sizeStack */
inline static auto& f_m_sizeStack = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[44]);
/* TMPro.FontWeight TMPro::TMP_Text::m_fontWeight */
inline static auto& f_m_fontWeight = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[45]);
/* TMPro.FontWeight TMPro::TMP_Text::m_FontWeightInternal */
inline static auto& f_m_FontWeightInternal = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[46]);
/* TMPro.TMP_TextProcessingStack<TMPro.FontWeight> TMPro::TMP_Text::m_FontWeightStack */
inline static auto& f_m_FontWeightStack = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[47]);
/* System.Boolean TMPro::TMP_Text::m_enableAutoSizing */
inline static auto& f_m_enableAutoSizing = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[48]);
/* System.Single TMPro::TMP_Text::m_maxFontSize */
inline static auto& f_m_maxFontSize = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[49]);
/* System.Single TMPro::TMP_Text::m_minFontSize */
inline static auto& f_m_minFontSize = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[50]);
/* System.Int32 TMPro::TMP_Text::m_AutoSizeIterationCount */
inline static auto& f_m_AutoSizeIterationCount = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[51]);
/* System.Int32 TMPro::TMP_Text::m_AutoSizeMaxIterationCount */
inline static auto& f_m_AutoSizeMaxIterationCount = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[52]);
/* System.Boolean TMPro::TMP_Text::m_IsAutoSizePointSizeSet */
inline static auto& f_m_IsAutoSizePointSizeSet = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[53]);
/* System.Single TMPro::TMP_Text::m_fontSizeMin */
inline static auto& f_m_fontSizeMin = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[54]);
/* System.Single TMPro::TMP_Text::m_fontSizeMax */
inline static auto& f_m_fontSizeMax = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[55]);
/* TMPro.FontStyles TMPro::TMP_Text::m_fontStyle */
inline static auto& f_m_fontStyle = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[56]);
/* TMPro.FontStyles TMPro::TMP_Text::m_FontStyleInternal */
inline static auto& f_m_FontStyleInternal = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[57]);
/* TMPro.TMP_FontStyleStack TMPro::TMP_Text::m_fontStyleStack */
inline static auto& f_m_fontStyleStack = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[58]);
/* System.Boolean TMPro::TMP_Text::m_isUsingBold */
inline static auto& f_m_isUsingBold = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[59]);
/* TMPro.HorizontalAlignmentOptions TMPro::TMP_Text::m_HorizontalAlignment */
inline static auto& f_m_HorizontalAlignment = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[60]);
/* TMPro.VerticalAlignmentOptions TMPro::TMP_Text::m_VerticalAlignment */
inline static auto& f_m_VerticalAlignment = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[61]);
/* TMPro.TextAlignmentOptions TMPro::TMP_Text::m_textAlignment */
inline static auto& f_m_textAlignment = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[62]);
/* TMPro.HorizontalAlignmentOptions TMPro::TMP_Text::m_lineJustification */
inline static auto& f_m_lineJustification = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[63]);
/* TMPro.TMP_TextProcessingStack<TMPro.HorizontalAlignmentOptions> TMPro::TMP_Text::m_lineJustificationStack */
inline static auto& f_m_lineJustificationStack = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[64]);
/* UnityEngine.Vector3[] TMPro::TMP_Text::m_textContainerLocalCorners */
inline static auto& f_m_textContainerLocalCorners = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[65]);
/* System.Single TMPro::TMP_Text::m_characterSpacing */
inline static auto& f_m_characterSpacing = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[66]);
/* System.Single TMPro::TMP_Text::m_cSpacing */
inline static auto& f_m_cSpacing = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[67]);
/* System.Single TMPro::TMP_Text::m_monoSpacing */
inline static auto& f_m_monoSpacing = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[68]);
/* System.Boolean TMPro::TMP_Text::m_duoSpace */
inline static auto& f_m_duoSpace = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[69]);
/* System.Single TMPro::TMP_Text::m_wordSpacing */
inline static auto& f_m_wordSpacing = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[70]);
/* System.Single TMPro::TMP_Text::m_lineSpacing */
inline static auto& f_m_lineSpacing = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[71]);
/* System.Single TMPro::TMP_Text::m_lineSpacingDelta */
inline static auto& f_m_lineSpacingDelta = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[72]);
/* System.Single TMPro::TMP_Text::m_lineHeight */
inline static auto& f_m_lineHeight = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[73]);
/* System.Boolean TMPro::TMP_Text::m_IsDrivenLineSpacing */
inline static auto& f_m_IsDrivenLineSpacing = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[74]);
/* System.Single TMPro::TMP_Text::m_lineSpacingMax */
inline static auto& f_m_lineSpacingMax = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[75]);
/* System.Single TMPro::TMP_Text::m_paragraphSpacing */
inline static auto& f_m_paragraphSpacing = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[76]);
/* System.Single TMPro::TMP_Text::m_charWidthMaxAdj */
inline static auto& f_m_charWidthMaxAdj = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[77]);
/* System.Single TMPro::TMP_Text::m_charWidthAdjDelta */
inline static auto& f_m_charWidthAdjDelta = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[78]);
/* TMPro.TextWrappingModes TMPro::TMP_Text::m_TextWrappingMode */
inline static auto& f_m_TextWrappingMode = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[79]);
/* System.Boolean TMPro::TMP_Text::m_isCharacterWrappingEnabled */
inline static auto& f_m_isCharacterWrappingEnabled = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[80]);
/* System.Boolean TMPro::TMP_Text::m_isNonBreakingSpace */
inline static auto& f_m_isNonBreakingSpace = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[81]);
/* System.Boolean TMPro::TMP_Text::m_isIgnoringAlignment */
inline static auto& f_m_isIgnoringAlignment = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[82]);
/* System.Single TMPro::TMP_Text::m_wordWrappingRatios */
inline static auto& f_m_wordWrappingRatios = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[83]);
/* TMPro.TextOverflowModes TMPro::TMP_Text::m_overflowMode */
inline static auto& f_m_overflowMode = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[84]);
/* System.Int32 TMPro::TMP_Text::m_firstOverflowCharacterIndex */
inline static auto& f_m_firstOverflowCharacterIndex = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[85]);
/* TMPro.TMP_Text TMPro::TMP_Text::m_linkedTextComponent */
inline static auto& f_m_linkedTextComponent = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[86]);
/* TMPro.TMP_Text TMPro::TMP_Text::parentLinkedComponent */
inline static auto& f_parentLinkedComponent = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[87]);
/* System.Boolean TMPro::TMP_Text::m_isTextTruncated */
inline static auto& f_m_isTextTruncated = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[88]);
/* System.Boolean TMPro::TMP_Text::m_enableKerning */
inline static auto& f_m_enableKerning = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[89]);
/* System.Int32 TMPro::TMP_Text::m_LastBaseGlyphIndex */
inline static auto& f_m_LastBaseGlyphIndex = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[90]);
/* System.Collections.Generic.List<UnityEngine.TextCore.OTL_FeatureTag> TMPro::TMP_Text::m_ActiveFontFeatures */
inline static auto& f_m_ActiveFontFeatures = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[91]);
/* System.Boolean TMPro::TMP_Text::m_enableExtraPadding */
inline static auto& f_m_enableExtraPadding = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[92]);
/* System.Boolean TMPro::TMP_Text::checkPaddingRequired */
inline static auto& f_checkPaddingRequired = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[93]);
/* System.Boolean TMPro::TMP_Text::m_isRichText */
inline static auto& f_m_isRichText = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[94]);
/* System.Boolean TMPro::TMP_Text::m_EmojiFallbackSupport */
inline static auto& f_m_EmojiFallbackSupport = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[95]);
/* System.Boolean TMPro::TMP_Text::m_parseCtrlCharacters */
inline static auto& f_m_parseCtrlCharacters = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[96]);
/* System.Boolean TMPro::TMP_Text::m_isOverlay */
inline static auto& f_m_isOverlay = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[97]);
/* System.Boolean TMPro::TMP_Text::m_isOrthographic */
inline static auto& f_m_isOrthographic = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[98]);
/* System.Boolean TMPro::TMP_Text::m_isCullingEnabled */
inline static auto& f_m_isCullingEnabled = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[99]);
/* System.Boolean TMPro::TMP_Text::m_isMaskingEnabled */
inline static auto& f_m_isMaskingEnabled = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[100]);
/* System.Boolean TMPro::TMP_Text::isMaskUpdateRequired */
inline static auto& f_isMaskUpdateRequired = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[101]);
/* System.Boolean TMPro::TMP_Text::m_ignoreCulling */
inline static auto& f_m_ignoreCulling = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[102]);
/* TMPro.TextureMappingOptions TMPro::TMP_Text::m_horizontalMapping */
inline static auto& f_m_horizontalMapping = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[103]);
/* TMPro.TextureMappingOptions TMPro::TMP_Text::m_verticalMapping */
inline static auto& f_m_verticalMapping = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[104]);
/* System.Single TMPro::TMP_Text::m_uvLineOffset */
inline static auto& f_m_uvLineOffset = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[105]);
/* TMPro.TextRenderFlags TMPro::TMP_Text::m_renderMode */
inline static auto& f_m_renderMode = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[106]);
/* TMPro.VertexSortingOrder TMPro::TMP_Text::m_geometrySortingOrder */
inline static auto& f_m_geometrySortingOrder = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[107]);
/* System.Boolean TMPro::TMP_Text::m_IsTextObjectScaleStatic */
inline static auto& f_m_IsTextObjectScaleStatic = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[108]);
/* System.Boolean TMPro::TMP_Text::m_VertexBufferAutoSizeReduction */
inline static auto& f_m_VertexBufferAutoSizeReduction = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[109]);
/* System.Int32 TMPro::TMP_Text::m_firstVisibleCharacter */
inline static auto& f_m_firstVisibleCharacter = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[110]);
/* System.Int32 TMPro::TMP_Text::m_maxVisibleCharacters */
inline static auto& f_m_maxVisibleCharacters = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[111]);
/* System.Int32 TMPro::TMP_Text::m_maxVisibleWords */
inline static auto& f_m_maxVisibleWords = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[112]);
/* System.Int32 TMPro::TMP_Text::m_maxVisibleLines */
inline static auto& f_m_maxVisibleLines = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[113]);
/* System.Boolean TMPro::TMP_Text::m_useMaxVisibleDescender */
inline static auto& f_m_useMaxVisibleDescender = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[114]);
/* System.Int32 TMPro::TMP_Text::m_pageToDisplay */
inline static auto& f_m_pageToDisplay = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[115]);
/* System.Boolean TMPro::TMP_Text::m_isNewPage */
inline static auto& f_m_isNewPage = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[116]);
/* UnityEngine.Vector4 TMPro::TMP_Text::m_margin */
inline static auto& f_m_margin = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[117]);
/* System.Single TMPro::TMP_Text::m_marginLeft */
inline static auto& f_m_marginLeft = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[118]);
/* System.Single TMPro::TMP_Text::m_marginRight */
inline static auto& f_m_marginRight = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[119]);
/* System.Single TMPro::TMP_Text::m_marginWidth */
inline static auto& f_m_marginWidth = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[120]);
/* System.Single TMPro::TMP_Text::m_marginHeight */
inline static auto& f_m_marginHeight = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[121]);
/* System.Single TMPro::TMP_Text::m_width */
inline static auto& f_m_width = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[122]);
/* TMPro.TMP_TextInfo TMPro::TMP_Text::m_textInfo */
inline static auto& f_m_textInfo = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[123]);
/* System.Boolean TMPro::TMP_Text::m_havePropertiesChanged */
inline static auto& f_m_havePropertiesChanged = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[124]);
/* System.Boolean TMPro::TMP_Text::m_isUsingLegacyAnimationComponent */
inline static auto& f_m_isUsingLegacyAnimationComponent = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[125]);
/* UnityEngine.Transform TMPro::TMP_Text::m_transform */
inline static auto& f_m_transform = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[126]);
/* UnityEngine.RectTransform TMPro::TMP_Text::m_rectTransform */
inline static auto& f_m_rectTransform = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[127]);
/* UnityEngine.Vector2 TMPro::TMP_Text::m_PreviousRectTransformSize */
inline static auto& f_m_PreviousRectTransformSize = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[128]);
/* UnityEngine.Vector2 TMPro::TMP_Text::m_PreviousPivotPosition */
inline static auto& f_m_PreviousPivotPosition = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[129]);
/* System.Boolean TMPro::TMP_Text::<autoSizeTextContainer>k__BackingField */
inline static auto& f__autoSizeTextContainer_k__BackingField = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[130]);
/* System.Boolean TMPro::TMP_Text::m_autoSizeTextContainer */
inline static auto& f_m_autoSizeTextContainer = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[131]);
/* UnityEngine.Mesh TMPro::TMP_Text::m_mesh */
inline static auto& f_m_mesh = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[132]);
/* System.Boolean TMPro::TMP_Text::m_isVolumetricText */
inline static auto& f_m_isVolumetricText = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[133]);
/* System.Func<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro::TMP_Text::OnFontAssetRequest */
inline static auto& f_OnFontAssetRequest = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[134]);
/* System.Func<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro::TMP_Text::OnSpriteAssetRequest */
inline static auto& f_OnSpriteAssetRequest = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[135]);
/* TMPro.TMP_Text.MissingCharacterEventCallback TMPro::TMP_Text::OnMissingCharacter */
inline static auto& f_OnMissingCharacter = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[136]);
/* System.Action<TMPro.TMP_TextInfo> TMPro::TMP_Text::OnPreRenderText */
inline static auto& f_OnPreRenderText = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[137]);
/* TMPro.TMP_SpriteAnimator TMPro::TMP_Text::m_spriteAnimator */
inline static auto& f_m_spriteAnimator = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[138]);
/* System.Single TMPro::TMP_Text::m_flexibleHeight */
inline static auto& f_m_flexibleHeight = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[139]);
/* System.Single TMPro::TMP_Text::m_flexibleWidth */
inline static auto& f_m_flexibleWidth = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[140]);
/* System.Single TMPro::TMP_Text::m_minWidth */
inline static auto& f_m_minWidth = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[141]);
/* System.Single TMPro::TMP_Text::m_minHeight */
inline static auto& f_m_minHeight = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[142]);
/* System.Single TMPro::TMP_Text::m_maxWidth */
inline static auto& f_m_maxWidth = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[143]);
/* System.Single TMPro::TMP_Text::m_maxHeight */
inline static auto& f_m_maxHeight = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[144]);
/* UnityEngine.UI.LayoutElement TMPro::TMP_Text::m_LayoutElement */
inline static auto& f_m_LayoutElement = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[145]);
/* System.Single TMPro::TMP_Text::m_preferredWidth */
inline static auto& f_m_preferredWidth = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[146]);
/* System.Single TMPro::TMP_Text::m_RenderedWidth */
inline static auto& f_m_RenderedWidth = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[147]);
/* System.Boolean TMPro::TMP_Text::m_isPreferredWidthDirty */
inline static auto& f_m_isPreferredWidthDirty = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[148]);
/* System.Single TMPro::TMP_Text::m_preferredHeight */
inline static auto& f_m_preferredHeight = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[149]);
/* System.Single TMPro::TMP_Text::m_RenderedHeight */
inline static auto& f_m_RenderedHeight = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[150]);
/* System.Boolean TMPro::TMP_Text::m_isPreferredHeightDirty */
inline static auto& f_m_isPreferredHeightDirty = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[151]);
/* System.Boolean TMPro::TMP_Text::m_isCalculatingPreferredValues */
inline static auto& f_m_isCalculatingPreferredValues = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[152]);
/* System.Int32 TMPro::TMP_Text::m_layoutPriority */
inline static auto& f_m_layoutPriority = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[153]);
/* System.Boolean TMPro::TMP_Text::m_isLayoutDirty */
inline static auto& f_m_isLayoutDirty = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[154]);
/* System.Boolean TMPro::TMP_Text::m_isAwake */
inline static auto& f_m_isAwake = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[155]);
/* System.Boolean TMPro::TMP_Text::m_isWaitingOnResourceLoad */
inline static auto& f_m_isWaitingOnResourceLoad = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[156]);
/* TMPro.TMP_Text.TextInputSources TMPro::TMP_Text::m_inputSource */
inline static auto& f_m_inputSource = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[157]);
/* System.Single TMPro::TMP_Text::m_fontScaleMultiplier */
inline static auto& f_m_fontScaleMultiplier = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[158]);
/* System.Char[] TMPro::TMP_Text::m_htmlTag */
inline static auto& f_m_htmlTag = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[159]);
/* TMPro.RichTextTagAttribute[] TMPro::TMP_Text::m_xmlAttribute */
inline static auto& f_m_xmlAttribute = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[160]);
/* System.Single[] TMPro::TMP_Text::m_attributeParameterValues */
inline static auto& f_m_attributeParameterValues = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[161]);
/* System.Single TMPro::TMP_Text::tag_LineIndent */
inline static auto& f_tag_LineIndent = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[162]);
/* System.Single TMPro::TMP_Text::tag_Indent */
inline static auto& f_tag_Indent = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[163]);
/* TMPro.TMP_TextProcessingStack<System.Single> TMPro::TMP_Text::m_indentStack */
inline static auto& f_m_indentStack = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[164]);
/* System.Boolean TMPro::TMP_Text::tag_NoParsing */
inline static auto& f_tag_NoParsing = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[165]);
/* System.Boolean TMPro::TMP_Text::m_isTextLayoutPhase */
inline static auto& f_m_isTextLayoutPhase = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[166]);
/* UnityEngine.Quaternion TMPro::TMP_Text::m_FXRotation */
inline static auto& f_m_FXRotation = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[167]);
/* UnityEngine.Vector3 TMPro::TMP_Text::m_FXScale */
inline static auto& f_m_FXScale = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[168]);
/* TMPro.TMP_Text.TextProcessingElement[] TMPro::TMP_Text::m_TextProcessingArray */
inline static auto& f_m_TextProcessingArray = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[169]);
/* System.Int32 TMPro::TMP_Text::m_InternalTextProcessingArraySize */
inline static auto& f_m_InternalTextProcessingArraySize = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[170]);
/* TMPro.TMP_CharacterInfo[] TMPro::TMP_Text::m_internalCharacterInfo */
inline static auto& f_m_internalCharacterInfo = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[171]);
/* System.Int32 TMPro::TMP_Text::m_totalCharacterCount */
inline static auto& f_m_totalCharacterCount = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[172]);
/* TMPro.WordWrapState TMPro::TMP_Text::m_SavedWordWrapState */
inline static auto& f_m_SavedWordWrapState = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[173]);
/* TMPro.WordWrapState TMPro::TMP_Text::m_SavedLineState */
inline static auto& f_m_SavedLineState = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[174]);
/* TMPro.WordWrapState TMPro::TMP_Text::m_SavedEllipsisState */
inline static auto& f_m_SavedEllipsisState = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[175]);
/* TMPro.WordWrapState TMPro::TMP_Text::m_SavedLastValidState */
inline static auto& f_m_SavedLastValidState = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[176]);
/* TMPro.WordWrapState TMPro::TMP_Text::m_SavedSoftLineBreakState */
inline static auto& f_m_SavedSoftLineBreakState = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[177]);
/* TMPro.TMP_TextProcessingStack<TMPro.WordWrapState> TMPro::TMP_Text::m_EllipsisInsertionCandidateStack */
inline static auto& f_m_EllipsisInsertionCandidateStack = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[178]);
/* System.Int32 TMPro::TMP_Text::m_characterCount */
inline static auto& f_m_characterCount = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[179]);
/* System.Int32 TMPro::TMP_Text::m_firstCharacterOfLine */
inline static auto& f_m_firstCharacterOfLine = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[180]);
/* System.Int32 TMPro::TMP_Text::m_firstVisibleCharacterOfLine */
inline static auto& f_m_firstVisibleCharacterOfLine = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[181]);
/* System.Int32 TMPro::TMP_Text::m_lastCharacterOfLine */
inline static auto& f_m_lastCharacterOfLine = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[182]);
/* System.Int32 TMPro::TMP_Text::m_lastVisibleCharacterOfLine */
inline static auto& f_m_lastVisibleCharacterOfLine = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[183]);
/* System.Int32 TMPro::TMP_Text::m_lineNumber */
inline static auto& f_m_lineNumber = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[184]);
/* System.Int32 TMPro::TMP_Text::m_lineVisibleCharacterCount */
inline static auto& f_m_lineVisibleCharacterCount = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[185]);
/* System.Int32 TMPro::TMP_Text::m_lineVisibleSpaceCount */
inline static auto& f_m_lineVisibleSpaceCount = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[186]);
/* System.Int32 TMPro::TMP_Text::m_pageNumber */
inline static auto& f_m_pageNumber = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[187]);
/* System.Single TMPro::TMP_Text::m_PageAscender */
inline static auto& f_m_PageAscender = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[188]);
/* System.Single TMPro::TMP_Text::m_maxTextAscender */
inline static auto& f_m_maxTextAscender = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[189]);
/* System.Single TMPro::TMP_Text::m_maxCapHeight */
inline static auto& f_m_maxCapHeight = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[190]);
/* System.Single TMPro::TMP_Text::m_ElementAscender */
inline static auto& f_m_ElementAscender = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[191]);
/* System.Single TMPro::TMP_Text::m_ElementDescender */
inline static auto& f_m_ElementDescender = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[192]);
/* System.Single TMPro::TMP_Text::m_maxLineAscender */
inline static auto& f_m_maxLineAscender = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[193]);
/* System.Single TMPro::TMP_Text::m_maxLineDescender */
inline static auto& f_m_maxLineDescender = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[194]);
/* System.Single TMPro::TMP_Text::m_startOfLineAscender */
inline static auto& f_m_startOfLineAscender = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[195]);
/* System.Single TMPro::TMP_Text::m_startOfLineDescender */
inline static auto& f_m_startOfLineDescender = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[196]);
/* System.Single TMPro::TMP_Text::m_lineOffset */
inline static auto& f_m_lineOffset = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[197]);
/* TMPro.Extents TMPro::TMP_Text::m_meshExtents */
inline static auto& f_m_meshExtents = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[198]);
/* UnityEngine.Color32 TMPro::TMP_Text::m_htmlColor */
inline static auto& f_m_htmlColor = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[199]);
/* TMPro.TMP_TextProcessingStack<UnityEngine.Color32> TMPro::TMP_Text::m_colorStack */
inline static auto& f_m_colorStack = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[200]);
/* TMPro.TMP_TextProcessingStack<UnityEngine.Color32> TMPro::TMP_Text::m_underlineColorStack */
inline static auto& f_m_underlineColorStack = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[201]);
/* TMPro.TMP_TextProcessingStack<UnityEngine.Color32> TMPro::TMP_Text::m_strikethroughColorStack */
inline static auto& f_m_strikethroughColorStack = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[202]);
/* TMPro.TMP_TextProcessingStack<TMPro.HighlightState> TMPro::TMP_Text::m_HighlightStateStack */
inline static auto& f_m_HighlightStateStack = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[203]);
/* TMPro.TMP_ColorGradient TMPro::TMP_Text::m_colorGradientPreset */
inline static auto& f_m_colorGradientPreset = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[204]);
/* TMPro.TMP_TextProcessingStack<TMPro.TMP_ColorGradient> TMPro::TMP_Text::m_colorGradientStack */
inline static auto& f_m_colorGradientStack = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[205]);
/* System.Boolean TMPro::TMP_Text::m_colorGradientPresetIsTinted */
inline static auto& f_m_colorGradientPresetIsTinted = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[206]);
/* System.Single TMPro::TMP_Text::m_tabSpacing */
inline static auto& f_m_tabSpacing = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[207]);
/* System.Single TMPro::TMP_Text::m_spacing */
inline static auto& f_m_spacing = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[208]);
/* TMPro.TMP_TextProcessingStack<System.Int32>[] TMPro::TMP_Text::m_TextStyleStacks */
inline static auto& f_m_TextStyleStacks = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[209]);
/* System.Int32 TMPro::TMP_Text::m_TextStyleStackDepth */
inline static auto& f_m_TextStyleStackDepth = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[210]);
/* TMPro.TMP_TextProcessingStack<System.Int32> TMPro::TMP_Text::m_ItalicAngleStack */
inline static auto& f_m_ItalicAngleStack = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[211]);
/* System.Int32 TMPro::TMP_Text::m_ItalicAngle */
inline static auto& f_m_ItalicAngle = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[212]);
/* TMPro.TMP_TextProcessingStack<System.Int32> TMPro::TMP_Text::m_actionStack */
inline static auto& f_m_actionStack = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[213]);
/* System.Single TMPro::TMP_Text::m_padding */
inline static auto& f_m_padding = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[214]);
/* System.Single TMPro::TMP_Text::m_baselineOffset */
inline static auto& f_m_baselineOffset = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[215]);
/* TMPro.TMP_TextProcessingStack<System.Single> TMPro::TMP_Text::m_baselineOffsetStack */
inline static auto& f_m_baselineOffsetStack = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[216]);
/* System.Single TMPro::TMP_Text::m_xAdvance */
inline static auto& f_m_xAdvance = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[217]);
/* TMPro.TMP_TextElementType TMPro::TMP_Text::m_textElementType */
inline static auto& f_m_textElementType = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[218]);
/* TMPro.TMP_TextElement TMPro::TMP_Text::m_cached_TextElement */
inline static auto& f_m_cached_TextElement = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[219]);
/* TMPro.TMP_Text.SpecialCharacter TMPro::TMP_Text::m_Ellipsis */
inline static auto& f_m_Ellipsis = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[220]);
/* TMPro.TMP_Text.SpecialCharacter TMPro::TMP_Text::m_Underline */
inline static auto& f_m_Underline = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[221]);
/* TMPro.TMP_SpriteAsset TMPro::TMP_Text::m_defaultSpriteAsset */
inline static auto& f_m_defaultSpriteAsset = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[222]);
/* TMPro.TMP_SpriteAsset TMPro::TMP_Text::m_currentSpriteAsset */
inline static auto& f_m_currentSpriteAsset = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[223]);
/* System.Int32 TMPro::TMP_Text::m_spriteCount */
inline static auto& f_m_spriteCount = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[224]);
/* System.Int32 TMPro::TMP_Text::m_spriteIndex */
inline static auto& f_m_spriteIndex = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[225]);
/* System.Int32 TMPro::TMP_Text::m_spriteAnimationID */
inline static auto& f_m_spriteAnimationID = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[226]);
/* Unity.Profiling.ProfilerMarker TMPro::TMP_Text::k_ParseTextMarker */
inline static auto& f_k_ParseTextMarker = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[227]);
/* Unity.Profiling.ProfilerMarker TMPro::TMP_Text::k_InsertNewLineMarker */
inline static auto& f_k_InsertNewLineMarker = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[228]);
/* System.Boolean TMPro::TMP_Text::m_ignoreActiveState */
inline static auto& f_m_ignoreActiveState = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[229]);
/* TMPro.TMP_Text.TextBackingContainer TMPro::TMP_Text::m_TextBackingArray */
inline static auto& f_m_TextBackingArray = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[230]);
/* System.Decimal[] TMPro::TMP_Text::k_Power */
inline static auto& f_k_Power = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[231]);
/* UnityEngine.Vector2 TMPro::TMP_Text::k_LargePositiveVector2 */
inline static auto& f_k_LargePositiveVector2 = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[232]);
/* UnityEngine.Vector2 TMPro::TMP_Text::k_LargeNegativeVector2 */
inline static auto& f_k_LargeNegativeVector2 = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[233]);
/* System.Single TMPro::TMP_Text::k_LargePositiveFloat */
inline static auto& f_k_LargePositiveFloat = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[234]);
/* System.Single TMPro::TMP_Text::k_LargeNegativeFloat */
inline static auto& f_k_LargeNegativeFloat = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[235]);
/* System.Int32 TMPro::TMP_Text::k_LargePositiveInt */
inline static auto& f_k_LargePositiveInt = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[236]);
/* System.Int32 TMPro::TMP_Text::k_LargeNegativeInt */
inline static auto& f_k_LargeNegativeInt = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[237]);
  
    /* System.String TMPro::TMP_Text::get_text() */
inline static auto& m0_get_text = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[0]);
/* System.Void TMPro::TMP_Text::set_text(System.String) */
inline static auto& m1_set_text = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[1]);
/* TMPro.ITextPreprocessor TMPro::TMP_Text::get_textPreprocessor() */
inline static auto& m2_get_textPreprocessor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[2]);
/* System.Void TMPro::TMP_Text::set_textPreprocessor(TMPro.ITextPreprocessor) */
inline static auto& m3_set_textPreprocessor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[3]);
/* System.Boolean TMPro::TMP_Text::get_isRightToLeftText() */
inline static auto& m4_get_isRightToLeftText = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[4]);
/* System.Void TMPro::TMP_Text::set_isRightToLeftText(System.Boolean) */
inline static auto& m5_set_isRightToLeftText = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[5]);
/* TMPro.TMP_FontAsset TMPro::TMP_Text::get_font() */
inline static auto& m6_get_font = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[6]);
/* System.Void TMPro::TMP_Text::set_font(TMPro.TMP_FontAsset) */
inline static auto& m7_set_font = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[7]);
/* UnityEngine.Material TMPro::TMP_Text::get_fontSharedMaterial() */
inline static auto& m8_get_fontSharedMaterial = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[8]);
/* System.Void TMPro::TMP_Text::set_fontSharedMaterial(UnityEngine.Material) */
inline static auto& m9_set_fontSharedMaterial = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[9]);
/* UnityEngine.Material[] TMPro::TMP_Text::get_fontSharedMaterials() */
inline static auto& m10_get_fontSharedMaterials = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[10]);
/* System.Void TMPro::TMP_Text::set_fontSharedMaterials(UnityEngine.Material[]) */
inline static auto& m11_set_fontSharedMaterials = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[11]);
/* UnityEngine.Material TMPro::TMP_Text::get_fontMaterial() */
inline static auto& m12_get_fontMaterial = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[12]);
/* System.Void TMPro::TMP_Text::set_fontMaterial(UnityEngine.Material) */
inline static auto& m13_set_fontMaterial = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[13]);
/* UnityEngine.Material[] TMPro::TMP_Text::get_fontMaterials() */
inline static auto& m14_get_fontMaterials = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[14]);
/* System.Void TMPro::TMP_Text::set_fontMaterials(UnityEngine.Material[]) */
inline static auto& m15_set_fontMaterials = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[15]);
/* UnityEngine.Color TMPro::TMP_Text::get_color() */
inline static auto& m16_get_color = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[16]);
/* System.Void TMPro::TMP_Text::set_color(UnityEngine.Color) */
inline static auto& m17_set_color = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[17]);
/* System.Single TMPro::TMP_Text::get_alpha() */
inline static auto& m18_get_alpha = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[18]);
/* System.Void TMPro::TMP_Text::set_alpha(System.Single) */
inline static auto& m19_set_alpha = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[19]);
/* System.Boolean TMPro::TMP_Text::get_enableVertexGradient() */
inline static auto& m20_get_enableVertexGradient = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[20]);
/* System.Void TMPro::TMP_Text::set_enableVertexGradient(System.Boolean) */
inline static auto& m21_set_enableVertexGradient = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[21]);
/* TMPro.VertexGradient TMPro::TMP_Text::get_colorGradient() */
inline static auto& m22_get_colorGradient = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[22]);
/* System.Void TMPro::TMP_Text::set_colorGradient(TMPro.VertexGradient) */
inline static auto& m23_set_colorGradient = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[23]);
/* TMPro.TMP_ColorGradient TMPro::TMP_Text::get_colorGradientPreset() */
inline static auto& m24_get_colorGradientPreset = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[24]);
/* System.Void TMPro::TMP_Text::set_colorGradientPreset(TMPro.TMP_ColorGradient) */
inline static auto& m25_set_colorGradientPreset = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[25]);
/* TMPro.TMP_SpriteAsset TMPro::TMP_Text::get_spriteAsset() */
inline static auto& m26_get_spriteAsset = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[26]);
/* System.Void TMPro::TMP_Text::set_spriteAsset(TMPro.TMP_SpriteAsset) */
inline static auto& m27_set_spriteAsset = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[27]);
/* System.Boolean TMPro::TMP_Text::get_tintAllSprites() */
inline static auto& m28_get_tintAllSprites = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[28]);
/* System.Void TMPro::TMP_Text::set_tintAllSprites(System.Boolean) */
inline static auto& m29_set_tintAllSprites = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[29]);
/* TMPro.TMP_StyleSheet TMPro::TMP_Text::get_styleSheet() */
inline static auto& m30_get_styleSheet = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[30]);
/* System.Void TMPro::TMP_Text::set_styleSheet(TMPro.TMP_StyleSheet) */
inline static auto& m31_set_styleSheet = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[31]);
/* TMPro.TMP_Style TMPro::TMP_Text::get_textStyle() */
inline static auto& m32_get_textStyle = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[32]);
/* System.Void TMPro::TMP_Text::set_textStyle(TMPro.TMP_Style) */
inline static auto& m33_set_textStyle = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[33]);
/* System.Boolean TMPro::TMP_Text::get_overrideColorTags() */
inline static auto& m34_get_overrideColorTags = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[34]);
/* System.Void TMPro::TMP_Text::set_overrideColorTags(System.Boolean) */
inline static auto& m35_set_overrideColorTags = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[35]);
/* UnityEngine.Color32 TMPro::TMP_Text::get_faceColor() */
inline static auto& m36_get_faceColor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[36]);
/* System.Void TMPro::TMP_Text::set_faceColor(UnityEngine.Color32) */
inline static auto& m37_set_faceColor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[37]);
/* UnityEngine.Color32 TMPro::TMP_Text::get_outlineColor() */
inline static auto& m38_get_outlineColor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[38]);
/* System.Void TMPro::TMP_Text::set_outlineColor(UnityEngine.Color32) */
inline static auto& m39_set_outlineColor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[39]);
/* System.Single TMPro::TMP_Text::get_outlineWidth() */
inline static auto& m40_get_outlineWidth = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[40]);
/* System.Void TMPro::TMP_Text::set_outlineWidth(System.Single) */
inline static auto& m41_set_outlineWidth = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[41]);
/* System.Single TMPro::TMP_Text::get_fontSize() */
inline static auto& m42_get_fontSize = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[42]);
/* System.Void TMPro::TMP_Text::set_fontSize(System.Single) */
inline static auto& m43_set_fontSize = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[43]);
/* TMPro.FontWeight TMPro::TMP_Text::get_fontWeight() */
inline static auto& m44_get_fontWeight = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[44]);
/* System.Void TMPro::TMP_Text::set_fontWeight(TMPro.FontWeight) */
inline static auto& m45_set_fontWeight = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[45]);
/* System.Single TMPro::TMP_Text::get_pixelsPerUnit() */
inline static auto& m46_get_pixelsPerUnit = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[46]);
/* System.Boolean TMPro::TMP_Text::get_enableAutoSizing() */
inline static auto& m47_get_enableAutoSizing = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[47]);
/* System.Void TMPro::TMP_Text::set_enableAutoSizing(System.Boolean) */
inline static auto& m48_set_enableAutoSizing = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[48]);
/* System.Single TMPro::TMP_Text::get_fontSizeMin() */
inline static auto& m49_get_fontSizeMin = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[49]);
/* System.Void TMPro::TMP_Text::set_fontSizeMin(System.Single) */
inline static auto& m50_set_fontSizeMin = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[50]);
/* System.Single TMPro::TMP_Text::get_fontSizeMax() */
inline static auto& m51_get_fontSizeMax = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[51]);
/* System.Void TMPro::TMP_Text::set_fontSizeMax(System.Single) */
inline static auto& m52_set_fontSizeMax = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[52]);
/* TMPro.FontStyles TMPro::TMP_Text::get_fontStyle() */
inline static auto& m53_get_fontStyle = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[53]);
/* System.Void TMPro::TMP_Text::set_fontStyle(TMPro.FontStyles) */
inline static auto& m54_set_fontStyle = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[54]);
/* System.Boolean TMPro::TMP_Text::get_isUsingBold() */
inline static auto& m55_get_isUsingBold = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[55]);
/* TMPro.HorizontalAlignmentOptions TMPro::TMP_Text::get_horizontalAlignment() */
inline static auto& m56_get_horizontalAlignment = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[56]);
/* System.Void TMPro::TMP_Text::set_horizontalAlignment(TMPro.HorizontalAlignmentOptions) */
inline static auto& m57_set_horizontalAlignment = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[57]);
/* TMPro.VerticalAlignmentOptions TMPro::TMP_Text::get_verticalAlignment() */
inline static auto& m58_get_verticalAlignment = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[58]);
/* System.Void TMPro::TMP_Text::set_verticalAlignment(TMPro.VerticalAlignmentOptions) */
inline static auto& m59_set_verticalAlignment = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[59]);
/* TMPro.TextAlignmentOptions TMPro::TMP_Text::get_alignment() */
inline static auto& m60_get_alignment = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[60]);
/* System.Void TMPro::TMP_Text::set_alignment(TMPro.TextAlignmentOptions) */
inline static auto& m61_set_alignment = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[61]);
/* System.Single TMPro::TMP_Text::get_characterSpacing() */
inline static auto& m62_get_characterSpacing = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[62]);
/* System.Void TMPro::TMP_Text::set_characterSpacing(System.Single) */
inline static auto& m63_set_characterSpacing = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[63]);
/* System.Single TMPro::TMP_Text::get_wordSpacing() */
inline static auto& m64_get_wordSpacing = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[64]);
/* System.Void TMPro::TMP_Text::set_wordSpacing(System.Single) */
inline static auto& m65_set_wordSpacing = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[65]);
/* System.Single TMPro::TMP_Text::get_lineSpacing() */
inline static auto& m66_get_lineSpacing = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[66]);
/* System.Void TMPro::TMP_Text::set_lineSpacing(System.Single) */
inline static auto& m67_set_lineSpacing = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[67]);
/* System.Single TMPro::TMP_Text::get_lineSpacingAdjustment() */
inline static auto& m68_get_lineSpacingAdjustment = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[68]);
/* System.Void TMPro::TMP_Text::set_lineSpacingAdjustment(System.Single) */
inline static auto& m69_set_lineSpacingAdjustment = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[69]);
/* System.Single TMPro::TMP_Text::get_paragraphSpacing() */
inline static auto& m70_get_paragraphSpacing = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[70]);
/* System.Void TMPro::TMP_Text::set_paragraphSpacing(System.Single) */
inline static auto& m71_set_paragraphSpacing = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[71]);
/* System.Single TMPro::TMP_Text::get_characterWidthAdjustment() */
inline static auto& m72_get_characterWidthAdjustment = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[72]);
/* System.Void TMPro::TMP_Text::set_characterWidthAdjustment(System.Single) */
inline static auto& m73_set_characterWidthAdjustment = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[73]);
/* TMPro.TextWrappingModes TMPro::TMP_Text::get_textWrappingMode() */
inline static auto& m74_get_textWrappingMode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[74]);
/* System.Void TMPro::TMP_Text::set_textWrappingMode(TMPro.TextWrappingModes) */
inline static auto& m75_set_textWrappingMode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[75]);
/* System.Boolean TMPro::TMP_Text::get_enableWordWrapping() */
inline static auto& m76_get_enableWordWrapping = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[76]);
/* System.Void TMPro::TMP_Text::set_enableWordWrapping(System.Boolean) */
inline static auto& m77_set_enableWordWrapping = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[77]);
/* System.Single TMPro::TMP_Text::get_wordWrappingRatios() */
inline static auto& m78_get_wordWrappingRatios = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[78]);
/* System.Void TMPro::TMP_Text::set_wordWrappingRatios(System.Single) */
inline static auto& m79_set_wordWrappingRatios = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[79]);
/* TMPro.TextOverflowModes TMPro::TMP_Text::get_overflowMode() */
inline static auto& m80_get_overflowMode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[80]);
/* System.Void TMPro::TMP_Text::set_overflowMode(TMPro.TextOverflowModes) */
inline static auto& m81_set_overflowMode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[81]);
/* System.Boolean TMPro::TMP_Text::get_isTextOverflowing() */
inline static auto& m82_get_isTextOverflowing = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[82]);
/* System.Int32 TMPro::TMP_Text::get_firstOverflowCharacterIndex() */
inline static auto& m83_get_firstOverflowCharacterIndex = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[83]);
/* TMPro.TMP_Text TMPro::TMP_Text::get_linkedTextComponent() */
inline static auto& m84_get_linkedTextComponent = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[84]);
/* System.Void TMPro::TMP_Text::set_linkedTextComponent(TMPro.TMP_Text) */
inline static auto& m85_set_linkedTextComponent = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[85]);
/* System.Boolean TMPro::TMP_Text::get_isTextTruncated() */
inline static auto& m86_get_isTextTruncated = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[86]);
/* System.Boolean TMPro::TMP_Text::get_enableKerning() */
inline static auto& m87_get_enableKerning = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[87]);
/* System.Void TMPro::TMP_Text::set_enableKerning(System.Boolean) */
inline static auto& m88_set_enableKerning = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[88]);
/* System.Collections.Generic.List<UnityEngine.TextCore.OTL_FeatureTag> TMPro::TMP_Text::get_fontFeatures() */
inline static auto& m89_get_fontFeatures = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[89]);
/* System.Void TMPro::TMP_Text::set_fontFeatures(System.Collections.Generic.List<UnityEngine.TextCore.OTL_FeatureTag>) */
inline static auto& m90_set_fontFeatures = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[90]);
/* System.Boolean TMPro::TMP_Text::get_extraPadding() */
inline static auto& m91_get_extraPadding = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[91]);
/* System.Void TMPro::TMP_Text::set_extraPadding(System.Boolean) */
inline static auto& m92_set_extraPadding = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[92]);
/* System.Boolean TMPro::TMP_Text::get_richText() */
inline static auto& m93_get_richText = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[93]);
/* System.Void TMPro::TMP_Text::set_richText(System.Boolean) */
inline static auto& m94_set_richText = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[94]);
/* System.Boolean TMPro::TMP_Text::get_emojiFallbackSupport() */
inline static auto& m95_get_emojiFallbackSupport = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[95]);
/* System.Void TMPro::TMP_Text::set_emojiFallbackSupport(System.Boolean) */
inline static auto& m96_set_emojiFallbackSupport = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[96]);
/* System.Boolean TMPro::TMP_Text::get_parseCtrlCharacters() */
inline static auto& m97_get_parseCtrlCharacters = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[97]);
/* System.Void TMPro::TMP_Text::set_parseCtrlCharacters(System.Boolean) */
inline static auto& m98_set_parseCtrlCharacters = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[98]);
/* System.Boolean TMPro::TMP_Text::get_isOverlay() */
inline static auto& m99_get_isOverlay = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[99]);
/* System.Void TMPro::TMP_Text::set_isOverlay(System.Boolean) */
inline static auto& m100_set_isOverlay = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[100]);
/* System.Boolean TMPro::TMP_Text::get_isOrthographic() */
inline static auto& m101_get_isOrthographic = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[101]);
/* System.Void TMPro::TMP_Text::set_isOrthographic(System.Boolean) */
inline static auto& m102_set_isOrthographic = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[102]);
/* System.Boolean TMPro::TMP_Text::get_enableCulling() */
inline static auto& m103_get_enableCulling = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[103]);
/* System.Void TMPro::TMP_Text::set_enableCulling(System.Boolean) */
inline static auto& m104_set_enableCulling = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[104]);
/* System.Boolean TMPro::TMP_Text::get_ignoreVisibility() */
inline static auto& m105_get_ignoreVisibility = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[105]);
/* System.Void TMPro::TMP_Text::set_ignoreVisibility(System.Boolean) */
inline static auto& m106_set_ignoreVisibility = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[106]);
/* TMPro.TextureMappingOptions TMPro::TMP_Text::get_horizontalMapping() */
inline static auto& m107_get_horizontalMapping = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[107]);
/* System.Void TMPro::TMP_Text::set_horizontalMapping(TMPro.TextureMappingOptions) */
inline static auto& m108_set_horizontalMapping = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[108]);
/* TMPro.TextureMappingOptions TMPro::TMP_Text::get_verticalMapping() */
inline static auto& m109_get_verticalMapping = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[109]);
/* System.Void TMPro::TMP_Text::set_verticalMapping(TMPro.TextureMappingOptions) */
inline static auto& m110_set_verticalMapping = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[110]);
/* System.Single TMPro::TMP_Text::get_mappingUvLineOffset() */
inline static auto& m111_get_mappingUvLineOffset = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[111]);
/* System.Void TMPro::TMP_Text::set_mappingUvLineOffset(System.Single) */
inline static auto& m112_set_mappingUvLineOffset = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[112]);
/* TMPro.TextRenderFlags TMPro::TMP_Text::get_renderMode() */
inline static auto& m113_get_renderMode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[113]);
/* System.Void TMPro::TMP_Text::set_renderMode(TMPro.TextRenderFlags) */
inline static auto& m114_set_renderMode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[114]);
/* TMPro.VertexSortingOrder TMPro::TMP_Text::get_geometrySortingOrder() */
inline static auto& m115_get_geometrySortingOrder = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[115]);
/* System.Void TMPro::TMP_Text::set_geometrySortingOrder(TMPro.VertexSortingOrder) */
inline static auto& m116_set_geometrySortingOrder = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[116]);
/* System.Boolean TMPro::TMP_Text::get_isTextObjectScaleStatic() */
inline static auto& m117_get_isTextObjectScaleStatic = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[117]);
/* System.Void TMPro::TMP_Text::set_isTextObjectScaleStatic(System.Boolean) */
inline static auto& m118_set_isTextObjectScaleStatic = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[118]);
/* System.Boolean TMPro::TMP_Text::get_vertexBufferAutoSizeReduction() */
inline static auto& m119_get_vertexBufferAutoSizeReduction = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[119]);
/* System.Void TMPro::TMP_Text::set_vertexBufferAutoSizeReduction(System.Boolean) */
inline static auto& m120_set_vertexBufferAutoSizeReduction = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[120]);
/* System.Int32 TMPro::TMP_Text::get_firstVisibleCharacter() */
inline static auto& m121_get_firstVisibleCharacter = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[121]);
/* System.Void TMPro::TMP_Text::set_firstVisibleCharacter(System.Int32) */
inline static auto& m122_set_firstVisibleCharacter = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[122]);
/* System.Int32 TMPro::TMP_Text::get_maxVisibleCharacters() */
inline static auto& m123_get_maxVisibleCharacters = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[123]);
/* System.Void TMPro::TMP_Text::set_maxVisibleCharacters(System.Int32) */
inline static auto& m124_set_maxVisibleCharacters = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[124]);
/* System.Int32 TMPro::TMP_Text::get_maxVisibleWords() */
inline static auto& m125_get_maxVisibleWords = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[125]);
/* System.Void TMPro::TMP_Text::set_maxVisibleWords(System.Int32) */
inline static auto& m126_set_maxVisibleWords = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[126]);
/* System.Int32 TMPro::TMP_Text::get_maxVisibleLines() */
inline static auto& m127_get_maxVisibleLines = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[127]);
/* System.Void TMPro::TMP_Text::set_maxVisibleLines(System.Int32) */
inline static auto& m128_set_maxVisibleLines = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[128]);
/* System.Boolean TMPro::TMP_Text::get_useMaxVisibleDescender() */
inline static auto& m129_get_useMaxVisibleDescender = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[129]);
/* System.Void TMPro::TMP_Text::set_useMaxVisibleDescender(System.Boolean) */
inline static auto& m130_set_useMaxVisibleDescender = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[130]);
/* System.Int32 TMPro::TMP_Text::get_pageToDisplay() */
inline static auto& m131_get_pageToDisplay = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[131]);
/* System.Void TMPro::TMP_Text::set_pageToDisplay(System.Int32) */
inline static auto& m132_set_pageToDisplay = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[132]);
/* UnityEngine.Vector4 TMPro::TMP_Text::get_margin() */
inline static auto& m133_get_margin = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[133]);
/* System.Void TMPro::TMP_Text::set_margin(UnityEngine.Vector4) */
inline static auto& m134_set_margin = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[134]);
/* TMPro.TMP_TextInfo TMPro::TMP_Text::get_textInfo() */
inline static auto& m135_get_textInfo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[135]);
/* System.Boolean TMPro::TMP_Text::get_havePropertiesChanged() */
inline static auto& m136_get_havePropertiesChanged = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[136]);
/* System.Void TMPro::TMP_Text::set_havePropertiesChanged(System.Boolean) */
inline static auto& m137_set_havePropertiesChanged = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[137]);
/* System.Boolean TMPro::TMP_Text::get_isUsingLegacyAnimationComponent() */
inline static auto& m138_get_isUsingLegacyAnimationComponent = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[138]);
/* System.Void TMPro::TMP_Text::set_isUsingLegacyAnimationComponent(System.Boolean) */
inline static auto& m139_set_isUsingLegacyAnimationComponent = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[139]);
/* UnityEngine.Transform TMPro::TMP_Text::get_transform() */
inline static auto& m140_get_transform = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[140]);
/* UnityEngine.RectTransform TMPro::TMP_Text::get_rectTransform() */
inline static auto& m141_get_rectTransform = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[141]);
/* System.Boolean TMPro::TMP_Text::get_autoSizeTextContainer() */
inline static auto& m142_get_autoSizeTextContainer = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[142]);
/* System.Void TMPro::TMP_Text::set_autoSizeTextContainer(System.Boolean) */
inline static auto& m143_set_autoSizeTextContainer = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[143]);
/* UnityEngine.Mesh TMPro::TMP_Text::get_mesh() */
inline static auto& m144_get_mesh = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[144]);
/* System.Boolean TMPro::TMP_Text::get_isVolumetricText() */
inline static auto& m145_get_isVolumetricText = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[145]);
/* System.Void TMPro::TMP_Text::set_isVolumetricText(System.Boolean) */
inline static auto& m146_set_isVolumetricText = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[146]);
/* UnityEngine.Bounds TMPro::TMP_Text::get_bounds() */
inline static auto& m147_get_bounds = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[147]);
/* UnityEngine.Bounds TMPro::TMP_Text::get_textBounds() */
inline static auto& m148_get_textBounds = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[148]);
/* System.Void TMPro::TMP_Text::add_OnFontAssetRequest(System.Func<System.Int32,System.String,TMPro.TMP_FontAsset>) */
inline static auto& m149_add_OnFontAssetRequest = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[149]);
/* System.Void TMPro::TMP_Text::remove_OnFontAssetRequest(System.Func<System.Int32,System.String,TMPro.TMP_FontAsset>) */
inline static auto& m150_remove_OnFontAssetRequest = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[150]);
/* System.Void TMPro::TMP_Text::add_OnSpriteAssetRequest(System.Func<System.Int32,System.String,TMPro.TMP_SpriteAsset>) */
inline static auto& m151_add_OnSpriteAssetRequest = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[151]);
/* System.Void TMPro::TMP_Text::remove_OnSpriteAssetRequest(System.Func<System.Int32,System.String,TMPro.TMP_SpriteAsset>) */
inline static auto& m152_remove_OnSpriteAssetRequest = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[152]);
/* System.Void TMPro::TMP_Text::add_OnMissingCharacter(TMPro.TMP_Text.MissingCharacterEventCallback) */
inline static auto& m153_add_OnMissingCharacter = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[153]);
/* System.Void TMPro::TMP_Text::remove_OnMissingCharacter(TMPro.TMP_Text.MissingCharacterEventCallback) */
inline static auto& m154_remove_OnMissingCharacter = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[154]);
/* System.Void TMPro::TMP_Text::add_OnPreRenderText(System.Action<TMPro.TMP_TextInfo>) */
inline static auto& m155_add_OnPreRenderText = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[155]);
/* System.Void TMPro::TMP_Text::remove_OnPreRenderText(System.Action<TMPro.TMP_TextInfo>) */
inline static auto& m156_remove_OnPreRenderText = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[156]);
/* TMPro.TMP_SpriteAnimator TMPro::TMP_Text::get_spriteAnimator() */
inline static auto& m157_get_spriteAnimator = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[157]);
/* System.Single TMPro::TMP_Text::get_flexibleHeight() */
inline static auto& m158_get_flexibleHeight = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[158]);
/* System.Single TMPro::TMP_Text::get_flexibleWidth() */
inline static auto& m159_get_flexibleWidth = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[159]);
/* System.Single TMPro::TMP_Text::get_minWidth() */
inline static auto& m160_get_minWidth = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[160]);
/* System.Single TMPro::TMP_Text::get_minHeight() */
inline static auto& m161_get_minHeight = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[161]);
/* System.Single TMPro::TMP_Text::get_maxWidth() */
inline static auto& m162_get_maxWidth = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[162]);
/* System.Single TMPro::TMP_Text::get_maxHeight() */
inline static auto& m163_get_maxHeight = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[163]);
/* UnityEngine.UI.LayoutElement TMPro::TMP_Text::get_layoutElement() */
inline static auto& m164_get_layoutElement = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[164]);
/* System.Single TMPro::TMP_Text::get_preferredWidth() */
inline static auto& m165_get_preferredWidth = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[165]);
/* System.Single TMPro::TMP_Text::get_preferredHeight() */
inline static auto& m166_get_preferredHeight = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[166]);
/* System.Single TMPro::TMP_Text::get_renderedWidth() */
inline static auto& m167_get_renderedWidth = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[167]);
/* System.Single TMPro::TMP_Text::get_renderedHeight() */
inline static auto& m168_get_renderedHeight = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[168]);
/* System.Int32 TMPro::TMP_Text::get_layoutPriority() */
inline static auto& m169_get_layoutPriority = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[169]);
/* System.Void TMPro::TMP_Text::LoadFontAsset() */
inline static auto& m170_LoadFontAsset = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[170]);
/* System.Void TMPro::TMP_Text::SetSharedMaterial(UnityEngine.Material) */
inline static auto& m171_SetSharedMaterial = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[171]);
/* UnityEngine.Material TMPro::TMP_Text::GetMaterial(UnityEngine.Material) */
inline static auto& m172_GetMaterial = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[172]);
/* System.Void TMPro::TMP_Text::SetFontBaseMaterial(UnityEngine.Material) */
inline static auto& m173_SetFontBaseMaterial = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[173]);
/* UnityEngine.Material[] TMPro::TMP_Text::GetSharedMaterials() */
inline static auto& m174_GetSharedMaterials = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[174]);
/* System.Void TMPro::TMP_Text::SetSharedMaterials(UnityEngine.Material[]) */
inline static auto& m175_SetSharedMaterials = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[175]);
/* UnityEngine.Material[] TMPro::TMP_Text::GetMaterials(UnityEngine.Material[]) */
inline static auto& m176_GetMaterials = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[176]);
/* UnityEngine.Material TMPro::TMP_Text::CreateMaterialInstance(UnityEngine.Material) */
inline static auto& m177_CreateMaterialInstance = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[177]);
/* System.Void TMPro::TMP_Text::SetVertexColorGradient(TMPro.TMP_ColorGradient) */
inline static auto& m178_SetVertexColorGradient = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[178]);
/* System.Void TMPro::TMP_Text::SetTextSortingOrder(TMPro.VertexSortingOrder) */
inline static auto& m179_SetTextSortingOrder = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[179]);
/* System.Void TMPro::TMP_Text::SetTextSortingOrder(System.Int32[]) */
inline static auto& m180_SetTextSortingOrder = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[180]);
/* System.Void TMPro::TMP_Text::SetFaceColor(UnityEngine.Color32) */
inline static auto& m181_SetFaceColor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[181]);
/* System.Void TMPro::TMP_Text::SetOutlineColor(UnityEngine.Color32) */
inline static auto& m182_SetOutlineColor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[182]);
/* System.Void TMPro::TMP_Text::SetOutlineThickness(System.Single) */
inline static auto& m183_SetOutlineThickness = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[183]);
/* System.Void TMPro::TMP_Text::SetShaderDepth() */
inline static auto& m184_SetShaderDepth = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[184]);
/* System.Void TMPro::TMP_Text::SetCulling() */
inline static auto& m185_SetCulling = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[185]);
/* System.Void TMPro::TMP_Text::UpdateCulling() */
inline static auto& m186_UpdateCulling = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[186]);
/* System.Single TMPro::TMP_Text::GetPaddingForMaterial() */
inline static auto& m187_GetPaddingForMaterial = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[187]);
/* System.Single TMPro::TMP_Text::GetPaddingForMaterial(UnityEngine.Material) */
inline static auto& m188_GetPaddingForMaterial = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[188]);
/* UnityEngine.Vector3[] TMPro::TMP_Text::GetTextContainerLocalCorners() */
inline static auto& m189_GetTextContainerLocalCorners = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[189]);
/* System.Void TMPro::TMP_Text::ForceMeshUpdate(System.Boolean, System.Boolean) */
inline static auto& m190_ForceMeshUpdate = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[190]);
/* System.Void TMPro::TMP_Text::UpdateGeometry(UnityEngine.Mesh, System.Int32) */
inline static auto& m191_UpdateGeometry = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[191]);
/* System.Void TMPro::TMP_Text::UpdateVertexData(TMPro.TMP_VertexDataUpdateFlags) */
inline static auto& m192_UpdateVertexData = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[192]);
/* System.Void TMPro::TMP_Text::UpdateVertexData() */
inline static auto& m193_UpdateVertexData = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[193]);
/* System.Void TMPro::TMP_Text::SetVertices(UnityEngine.Vector3[]) */
inline static auto& m194_SetVertices = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[194]);
/* System.Void TMPro::TMP_Text::UpdateMeshPadding() */
inline static auto& m195_UpdateMeshPadding = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[195]);
/* System.Void TMPro::TMP_Text::CrossFadeColor(UnityEngine.Color, System.Single, System.Boolean, System.Boolean) */
inline static auto& m196_CrossFadeColor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[196]);
/* System.Void TMPro::TMP_Text::CrossFadeAlpha(System.Single, System.Single, System.Boolean) */
inline static auto& m197_CrossFadeAlpha = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[197]);
/* System.Void TMPro::TMP_Text::InternalCrossFadeColor(UnityEngine.Color, System.Single, System.Boolean, System.Boolean) */
inline static auto& m198_InternalCrossFadeColor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[198]);
/* System.Void TMPro::TMP_Text::InternalCrossFadeAlpha(System.Single, System.Single, System.Boolean) */
inline static auto& m199_InternalCrossFadeAlpha = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[199]);
/* System.Void TMPro::TMP_Text::ParseInputText() */
inline static auto& m200_ParseInputText = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[200]);
/* System.Void TMPro::TMP_Text::PopulateTextBackingArray(System.String) */
inline static auto& m201_PopulateTextBackingArray = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[201]);
/* System.Void TMPro::TMP_Text::PopulateTextBackingArray(System.String, System.Int32, System.Int32) */
inline static auto& m202_PopulateTextBackingArray = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[202]);
/* System.Void TMPro::TMP_Text::PopulateTextBackingArray(System.Text.StringBuilder, System.Int32, System.Int32) */
inline static auto& m203_PopulateTextBackingArray = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[203]);
/* System.Void TMPro::TMP_Text::PopulateTextBackingArray(System.Char[], System.Int32, System.Int32) */
inline static auto& m204_PopulateTextBackingArray = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[204]);
/* System.Void TMPro::TMP_Text::PopulateTextProcessingArray() */
inline static auto& m205_PopulateTextProcessingArray = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[205]);
/* System.Void TMPro::TMP_Text::SetTextInternal(System.String) */
inline static auto& m206_SetTextInternal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[206]);
/* System.Void TMPro::TMP_Text::SetText(System.String) */
inline static auto& m207_SetText = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[207]);
/* System.Void TMPro::TMP_Text::SetText(System.String, System.Boolean) */
inline static auto& m208_SetText = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[208]);
/* System.Void TMPro::TMP_Text::SetText(System.String, System.Single) */
inline static auto& m209_SetText = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[209]);
/* System.Void TMPro::TMP_Text::SetText(System.String, System.Single, System.Single) */
inline static auto& m210_SetText = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[210]);
/* System.Void TMPro::TMP_Text::SetText(System.String, System.Single, System.Single, System.Single) */
inline static auto& m211_SetText = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[211]);
/* System.Void TMPro::TMP_Text::SetText(System.String, System.Single, System.Single, System.Single, System.Single) */
inline static auto& m212_SetText = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[212]);
/* System.Void TMPro::TMP_Text::SetText(System.String, System.Single, System.Single, System.Single, System.Single, System.Single) */
inline static auto& m213_SetText = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[213]);
/* System.Void TMPro::TMP_Text::SetText(System.String, System.Single, System.Single, System.Single, System.Single, System.Single, System.Single) */
inline static auto& m214_SetText = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[214]);
/* System.Void TMPro::TMP_Text::SetText(System.String, System.Single, System.Single, System.Single, System.Single, System.Single, System.Single, System.Single) */
inline static auto& m215_SetText = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[215]);
/* System.Void TMPro::TMP_Text::SetText(System.String, System.Single, System.Single, System.Single, System.Single, System.Single, System.Single, System.Single, System.Single) */
inline static auto& m216_SetText = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[216]);
/* System.Void TMPro::TMP_Text::SetText(System.Text.StringBuilder) */
inline static auto& m217_SetText = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[217]);
/* System.Void TMPro::TMP_Text::SetText(System.Text.StringBuilder, System.Int32, System.Int32) */
inline static auto& m218_SetText = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[218]);
/* System.Void TMPro::TMP_Text::SetText(System.Char[]) */
inline static auto& m219_SetText = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[219]);
/* System.Void TMPro::TMP_Text::SetText(System.Char[], System.Int32, System.Int32) */
inline static auto& m220_SetText = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[220]);
/* System.Void TMPro::TMP_Text::SetCharArray(System.Char[]) */
inline static auto& m221_SetCharArray = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[221]);
/* System.Void TMPro::TMP_Text::SetCharArray(System.Char[], System.Int32, System.Int32) */
inline static auto& m222_SetCharArray = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[222]);
/* TMPro.TMP_Style TMPro::TMP_Text::GetStyle(System.Int32) */
inline static auto& m223_GetStyle = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[223]);
/* System.Void TMPro::TMP_Text::InsertOpeningTextStyle(TMPro.TMP_Style, TMPro.TMP_Text.TextProcessingElement[]&, System.Int32&) */
inline static auto& m224_InsertOpeningTextStyle = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[224]);
/* System.Void TMPro::TMP_Text::InsertClosingTextStyle(TMPro.TMP_Style, TMPro.TMP_Text.TextProcessingElement[]&, System.Int32&) */
inline static auto& m225_InsertClosingTextStyle = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[225]);
/* System.Void TMPro::TMP_Text::InsertTextStyleInTextProcessingArray(TMPro.TMP_Text.TextProcessingElement[]&, System.Int32&, System.UInt32[]) */
inline static auto& m226_InsertTextStyleInTextProcessingArray = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[226]);
/* System.Boolean TMPro::TMP_Text::ReplaceOpeningStyleTag(TMPro.TMP_Text.TextBackingContainer&, System.Int32, System.Int32&, TMPro.TMP_Text.TextProcessingElement[]&, System.Int32&) */
inline static auto& m227_ReplaceOpeningStyleTag = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[227]);
/* System.Boolean TMPro::TMP_Text::ReplaceOpeningStyleTag(System.UInt32[]&, System.Int32, System.Int32&, TMPro.TMP_Text.TextProcessingElement[]&, System.Int32&) */
inline static auto& m228_ReplaceOpeningStyleTag = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[228]);
/* System.Void TMPro::TMP_Text::ReplaceClosingStyleTag(TMPro.TMP_Text.TextProcessingElement[]&, System.Int32&) */
inline static auto& m229_ReplaceClosingStyleTag = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[229]);
/* System.Void TMPro::TMP_Text::InsertOpeningStyleTag(TMPro.TMP_Style, TMPro.TMP_Text.TextProcessingElement[]&, System.Int32&) */
inline static auto& m230_InsertOpeningStyleTag = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[230]);
/* System.Void TMPro::TMP_Text::InsertClosingStyleTag(TMPro.TMP_Text.TextProcessingElement[]&, System.Int32&) */
inline static auto& m231_InsertClosingStyleTag = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[231]);
/* System.Int32 TMPro::TMP_Text::GetMarkupTagHashCode(System.UInt32[], System.Int32) */
inline static auto& m232_GetMarkupTagHashCode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[232]);
/* System.Int32 TMPro::TMP_Text::GetMarkupTagHashCode(TMPro.TMP_Text.TextBackingContainer, System.Int32) */
inline static auto& m233_GetMarkupTagHashCode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[233]);
/* System.Int32 TMPro::TMP_Text::GetStyleHashCode(System.UInt32[]&, System.Int32, System.Int32&) */
inline static auto& m234_GetStyleHashCode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[234]);
/* System.Int32 TMPro::TMP_Text::GetStyleHashCode(TMPro.TMP_Text.TextBackingContainer&, System.Int32, System.Int32&) */
inline static auto& m235_GetStyleHashCode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[235]);
/* System.Void TMPro::TMP_Text::ResizeInternalArray(T[]&) */
inline static auto& m236_ResizeInternalArray = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[236]);
/* System.Void TMPro::TMP_Text::ResizeInternalArray(T[]&, System.Int32) */
inline static auto& m237_ResizeInternalArray = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[237]);
/* System.Void TMPro::TMP_Text::AddFloatToInternalTextBackingArray(System.Single, System.Int32, System.Int32, System.Int32&) */
inline static auto& m238_AddFloatToInternalTextBackingArray = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[238]);
/* System.Void TMPro::TMP_Text::AddIntegerToInternalTextBackingArray(System.Double, System.Int32, System.Int32&) */
inline static auto& m239_AddIntegerToInternalTextBackingArray = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[239]);
/* System.String TMPro::TMP_Text::InternalTextBackingArrayToString() */
inline static auto& m240_InternalTextBackingArrayToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[240]);
/* System.Int32 TMPro::TMP_Text::SetArraySizes(TMPro.TMP_Text.TextProcessingElement[]) */
inline static auto& m241_SetArraySizes = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[241]);
/* UnityEngine.Vector2 TMPro::TMP_Text::GetPreferredValues() */
inline static auto& m242_GetPreferredValues = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[242]);
/* UnityEngine.Vector2 TMPro::TMP_Text::GetPreferredValues(System.Single, System.Single) */
inline static auto& m243_GetPreferredValues = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[243]);
/* UnityEngine.Vector2 TMPro::TMP_Text::GetPreferredValues(System.String) */
inline static auto& m244_GetPreferredValues = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[244]);
/* UnityEngine.Vector2 TMPro::TMP_Text::GetPreferredValues(System.String, System.Single, System.Single) */
inline static auto& m245_GetPreferredValues = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[245]);
/* System.Single TMPro::TMP_Text::GetPreferredWidth() */
inline static auto& m246_GetPreferredWidth = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[246]);
/* System.Single TMPro::TMP_Text::GetPreferredWidth(UnityEngine.Vector2) */
inline static auto& m247_GetPreferredWidth = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[247]);
/* System.Single TMPro::TMP_Text::GetPreferredWidth(UnityEngine.Vector2, TMPro.TextWrappingModes) */
inline static auto& m248_GetPreferredWidth = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[248]);
/* System.Single TMPro::TMP_Text::GetPreferredHeight() */
inline static auto& m249_GetPreferredHeight = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[249]);
/* System.Single TMPro::TMP_Text::GetPreferredHeight(UnityEngine.Vector2) */
inline static auto& m250_GetPreferredHeight = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[250]);
/* UnityEngine.Vector2 TMPro::TMP_Text::GetRenderedValues() */
inline static auto& m251_GetRenderedValues = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[251]);
/* UnityEngine.Vector2 TMPro::TMP_Text::GetRenderedValues(System.Boolean) */
inline static auto& m252_GetRenderedValues = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[252]);
/* System.Single TMPro::TMP_Text::GetRenderedWidth() */
inline static auto& m253_GetRenderedWidth = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[253]);
/* System.Single TMPro::TMP_Text::GetRenderedWidth(System.Boolean) */
inline static auto& m254_GetRenderedWidth = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[254]);
/* System.Single TMPro::TMP_Text::GetRenderedHeight() */
inline static auto& m255_GetRenderedHeight = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[255]);
/* System.Single TMPro::TMP_Text::GetRenderedHeight(System.Boolean) */
inline static auto& m256_GetRenderedHeight = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[256]);
/* UnityEngine.Vector2 TMPro::TMP_Text::CalculatePreferredValues(System.Single&, UnityEngine.Vector2, System.Boolean, TMPro.TextWrappingModes) */
inline static auto& m257_CalculatePreferredValues = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[257]);
/* UnityEngine.Bounds TMPro::TMP_Text::GetCompoundBounds() */
inline static auto& m258_GetCompoundBounds = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[258]);
/* UnityEngine.Rect TMPro::TMP_Text::GetCanvasSpaceClippingRect() */
inline static auto& m259_GetCanvasSpaceClippingRect = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[259]);
/* UnityEngine.Bounds TMPro::TMP_Text::GetTextBounds() */
inline static auto& m260_GetTextBounds = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[260]);
/* UnityEngine.Bounds TMPro::TMP_Text::GetTextBounds(System.Boolean) */
inline static auto& m261_GetTextBounds = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[261]);
/* System.Void TMPro::TMP_Text::AdjustLineOffset(System.Int32, System.Int32, System.Single) */
inline static auto& m262_AdjustLineOffset = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[262]);
/* System.Void TMPro::TMP_Text::ResizeLineExtents(System.Int32) */
inline static auto& m263_ResizeLineExtents = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[263]);
/* TMPro.TMP_TextInfo TMPro::TMP_Text::GetTextInfo(System.String) */
inline static auto& m264_GetTextInfo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[264]);
/* System.Void TMPro::TMP_Text::ComputeMarginSize() */
inline static auto& m265_ComputeMarginSize = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[265]);
/* System.Void TMPro::TMP_Text::InsertNewLine(System.Int32, System.Single, System.Single, System.Single, System.Single, System.Single, System.Single, System.Single, System.Boolean&, System.Single&) */
inline static auto& m266_InsertNewLine = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[266]);
/* System.Void TMPro::TMP_Text::SaveWordWrappingState(TMPro.WordWrapState&, System.Int32, System.Int32) */
inline static auto& m267_SaveWordWrappingState = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[267]);
/* System.Int32 TMPro::TMP_Text::RestoreWordWrappingState(TMPro.WordWrapState&) */
inline static auto& m268_RestoreWordWrappingState = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[268]);
/* System.Void TMPro::TMP_Text::SaveGlyphVertexInfo(System.Single, System.Single, UnityEngine.Color32) */
inline static auto& m269_SaveGlyphVertexInfo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[269]);
/* System.Void TMPro::TMP_Text::SaveSpriteVertexInfo(UnityEngine.Color32) */
inline static auto& m270_SaveSpriteVertexInfo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[270]);
/* System.Void TMPro::TMP_Text::FillCharacterVertexBuffers(System.Int32) */
inline static auto& m271_FillCharacterVertexBuffers = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[271]);
/* System.Void TMPro::TMP_Text::FillCharacterVertexBuffers(System.Int32, System.Boolean) */
inline static auto& m272_FillCharacterVertexBuffers = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[272]);
/* System.Void TMPro::TMP_Text::FillSpriteVertexBuffers(System.Int32) */
inline static auto& m273_FillSpriteVertexBuffers = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[273]);
/* System.Void TMPro::TMP_Text::DrawUnderlineMesh(UnityEngine.Vector3, UnityEngine.Vector3, System.Int32&, System.Single, System.Single, System.Single, System.Single, UnityEngine.Color32) */
inline static auto& m274_DrawUnderlineMesh = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[274]);
/* System.Void TMPro::TMP_Text::DrawTextHighlight(UnityEngine.Vector3, UnityEngine.Vector3, System.Int32&, UnityEngine.Color32) */
inline static auto& m275_DrawTextHighlight = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[275]);
/* System.Void TMPro::TMP_Text::LoadDefaultSettings() */
inline static auto& m276_LoadDefaultSettings = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[276]);
/* System.Void TMPro::TMP_Text::GetSpecialCharacters(TMPro.TMP_FontAsset) */
inline static auto& m277_GetSpecialCharacters = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[277]);
/* System.Void TMPro::TMP_Text::GetEllipsisSpecialCharacter(TMPro.TMP_FontAsset) */
inline static auto& m278_GetEllipsisSpecialCharacter = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[278]);
/* System.Void TMPro::TMP_Text::GetUnderlineSpecialCharacter(TMPro.TMP_FontAsset) */
inline static auto& m279_GetUnderlineSpecialCharacter = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[279]);
/* System.Void TMPro::TMP_Text::ReplaceTagWithCharacter(System.Int32[], System.Int32, System.Int32, System.Char) */
inline static auto& m280_ReplaceTagWithCharacter = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[280]);
/* TMPro.TMP_FontAsset TMPro::TMP_Text::GetFontAssetForWeight(System.Int32) */
inline static auto& m281_GetFontAssetForWeight = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[281]);
/* TMPro.TMP_TextElement TMPro::TMP_Text::GetTextElement(System.UInt32, TMPro.TMP_FontAsset, TMPro.FontStyles, TMPro.FontWeight, System.Boolean&) */
inline static auto& m282_GetTextElement = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[282]);
/* System.Void TMPro::TMP_Text::SetActiveSubMeshes(System.Boolean) */
inline static auto& m283_SetActiveSubMeshes = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[283]);
/* System.Void TMPro::TMP_Text::DestroySubMeshObjects() */
inline static auto& m284_DestroySubMeshObjects = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[284]);
/* System.Void TMPro::TMP_Text::ClearMesh() */
inline static auto& m285_ClearMesh = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[285]);
/* System.Void TMPro::TMP_Text::ClearMesh(System.Boolean) */
inline static auto& m286_ClearMesh = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[286]);
/* System.String TMPro::TMP_Text::GetParsedText() */
inline static auto& m287_GetParsedText = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[287]);
/* System.Boolean TMPro::TMP_Text::IsSelfOrLinkedAncestor(TMPro.TMP_Text) */
inline static auto& m288_IsSelfOrLinkedAncestor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[288]);
/* System.Void TMPro::TMP_Text::ReleaseLinkedTextComponent(TMPro.TMP_Text) */
inline static auto& m289_ReleaseLinkedTextComponent = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[289]);
/* System.Void TMPro::TMP_Text::DoMissingGlyphCallback(System.Int32, System.Int32, TMPro.TMP_FontAsset) */
inline static auto& m290_DoMissingGlyphCallback = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[290]);
/* UnityEngine.Vector2 TMPro::TMP_Text::PackUV(System.Single, System.Single, System.Single) */
inline static auto& m291_PackUV = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[291]);
/* System.Single TMPro::TMP_Text::PackUV(System.Single, System.Single) */
inline static auto& m292_PackUV = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[292]);
/* System.Void TMPro::TMP_Text::InternalUpdate() */
inline static auto& m293_InternalUpdate = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[293]);
/* System.UInt32 TMPro::TMP_Text::HexToInt(System.Char) */
inline static auto& m294_HexToInt = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[294]);
/* System.Boolean TMPro::TMP_Text::IsValidUTF16(TMPro.TMP_Text.TextBackingContainer, System.Int32) */
inline static auto& m295_IsValidUTF16 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[295]);
/* System.UInt32 TMPro::TMP_Text::GetUTF16(System.UInt32[], System.Int32) */
inline static auto& m296_GetUTF16 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[296]);
/* System.UInt32 TMPro::TMP_Text::GetUTF16(TMPro.TMP_Text.TextBackingContainer, System.Int32) */
inline static auto& m297_GetUTF16 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[297]);
/* System.Boolean TMPro::TMP_Text::IsValidUTF32(TMPro.TMP_Text.TextBackingContainer, System.Int32) */
inline static auto& m298_IsValidUTF32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[298]);
/* System.UInt32 TMPro::TMP_Text::GetUTF32(System.UInt32[], System.Int32) */
inline static auto& m299_GetUTF32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[299]);
/* System.UInt32 TMPro::TMP_Text::GetUTF32(TMPro.TMP_Text.TextBackingContainer, System.Int32) */
inline static auto& m300_GetUTF32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[300]);
/* UnityEngine.Color32 TMPro::TMP_Text::HexCharsToColor(System.Char[], System.Int32) */
inline static auto& m301_HexCharsToColor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[301]);
/* UnityEngine.Color32 TMPro::TMP_Text::HexCharsToColor(System.Char[], System.Int32, System.Int32) */
inline static auto& m302_HexCharsToColor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[302]);
/* System.Int32 TMPro::TMP_Text::GetAttributeParameters(System.Char[], System.Int32, System.Int32, System.Single[]&) */
inline static auto& m303_GetAttributeParameters = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[303]);
/* System.Single TMPro::TMP_Text::ConvertToFloat(System.Char[], System.Int32, System.Int32) */
inline static auto& m304_ConvertToFloat = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[304]);
/* System.Single TMPro::TMP_Text::ConvertToFloat(System.Char[], System.Int32, System.Int32, System.Int32&) */
inline static auto& m305_ConvertToFloat = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[305]);
/* System.Void TMPro::TMP_Text::ClearMarkupTagAttributes() */
inline static auto& m306_ClearMarkupTagAttributes = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[306]);
/* System.Boolean TMPro::TMP_Text::ValidateHtmlTag(TMPro.TMP_Text.TextProcessingElement[], System.Int32, System.Int32&) */
inline static auto& m307_ValidateHtmlTag = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[307]);
/* System.Void TMPro::TMP_Text::.ctor() */
inline static auto& m308__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[308]);
/* System.Void TMPro::TMP_Text::.cctor() */
inline static auto& m309__cctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[309]);

};

}