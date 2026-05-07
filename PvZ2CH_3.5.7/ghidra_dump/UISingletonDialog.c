// Class: UISingletonDialog<ActiveSummery>


/* UISingletonDialog<ActiveSummery>::GetSingletonPtr() */

undefined8 UISingletonDialog<ActiveSummery>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UIMessageBox>::ShowDialog() */

UIMessageBox * UISingletonDialog<UIMessageBox>::ShowDialog(void)

{
  UIMessageBox *pUVar1;
  char cVar2;
  UIMessageBox *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIMessageBox *)0x0) {
    pUVar3 = ::operator_new(0x210);
    UIMessageBox::UIMessageBox(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIMessageBox *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIMessageBox *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIArborDay>::GetSingletonPtr() */

undefined8 UISingletonDialog<UIArborDay>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<CommonRewardDisplay>::ShowDialog() */

CommonRewardDisplay * UISingletonDialog<CommonRewardDisplay>::ShowDialog(void)

{
  CommonRewardDisplay *pCVar1;
  char cVar2;
  CommonRewardDisplay *pCVar3;
  
  pCVar1 = m_pInstance;
  pCVar3 = pCVar1;
  if (m_pInstance == (CommonRewardDisplay *)0x0) {
    pCVar3 = ::operator_new(0x170);
    CommonRewardDisplay::CommonRewardDisplay(pCVar3);
    m_pInstance = pCVar3;
    cVar2 = (**(code **)(*(long *)pCVar3 + 0x310))(pCVar3);
    pCVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (CommonRewardDisplay *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (CommonRewardDisplay *)0x0;
      pCVar3 = pCVar1;
    }
  }
  return pCVar3;
}


/* UISingletonDialog<UICustomLevelMobileLink>::GetSingletonPtr() */

undefined8 UISingletonDialog<UICustomLevelMobileLink>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UIRechargeReward>::CloseDialog() */

void UISingletonDialog<UIRechargeReward>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UISecretAreaReward>::GetSingletonPtr() */

undefined8 UISingletonDialog<UISecretAreaReward>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UIMessageBox>::CloseDialog() */

void UISingletonDialog<UIMessageBox>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UISettingLargeTextEnunciation>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UISettingLargeTextEnunciation>::~UISingletonDialog
          (UISingletonDialog<UISettingLargeTextEnunciation> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066106b0;
  *(undefined ***)this = &PTR_GetClass_06610360;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UISettingLargeTextEnunciation> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UISettingLargeTextEnunciation>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UISettingLargeTextEnunciation>::~UISingletonDialog
          (UISingletonDialog<UISettingLargeTextEnunciation> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<OppoNewerEventUI>::ShowDialog() */

OppoNewerEventUI * UISingletonDialog<OppoNewerEventUI>::ShowDialog(void)

{
  OppoNewerEventUI *pOVar1;
  char cVar2;
  OppoNewerEventUI *pOVar3;
  
  pOVar1 = m_pInstance;
  pOVar3 = pOVar1;
  if (m_pInstance == (OppoNewerEventUI *)0x0) {
    pOVar3 = ::operator_new(0x1a8);
    OppoNewerEventUI::OppoNewerEventUI(pOVar3);
    m_pInstance = pOVar3;
    cVar2 = (**(code **)(*(long *)pOVar3 + 0x310))(pOVar3);
    pOVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (OppoNewerEventUI *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (OppoNewerEventUI *)0x0;
      pOVar3 = pOVar1;
    }
  }
  return pOVar3;
}


/* UISingletonDialog<OppoNewerEventUI>::GetSingletonPtr() */

undefined8 UISingletonDialog<OppoNewerEventUI>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<OppoNewerEventUI>::CloseDialog() */

void UISingletonDialog<OppoNewerEventUI>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIPrivacyDialog>::ShowDialog() */

UIPrivacyDialog * UISingletonDialog<UIPrivacyDialog>::ShowDialog(void)

{
  UIPrivacyDialog *pUVar1;
  char cVar2;
  UIPrivacyDialog *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIPrivacyDialog *)0x0) {
    pUVar3 = ::operator_new(0x138);
    UIPrivacyDialog::UIPrivacyDialog(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIPrivacyDialog *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIPrivacyDialog *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIMessageBox>::GetSingletonPtr() */

undefined8 UISingletonDialog<UIMessageBox>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<AdsRewardUI>::ShowDialog() */

AdsRewardUI * UISingletonDialog<AdsRewardUI>::ShowDialog(void)

{
  AdsRewardUI *pAVar1;
  char cVar2;
  AdsRewardUI *pAVar3;
  
  pAVar1 = m_pInstance;
  pAVar3 = pAVar1;
  if (m_pInstance == (AdsRewardUI *)0x0) {
    pAVar3 = ::operator_new(0x148);
    AdsRewardUI::AdsRewardUI(pAVar3);
    m_pInstance = pAVar3;
    cVar2 = (**(code **)(*(long *)pAVar3 + 0x310))(pAVar3);
    pAVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (AdsRewardUI *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (AdsRewardUI *)0x0;
      pAVar3 = pAVar1;
    }
  }
  return pAVar3;
}


/* UISingletonDialog<ChildrenDayUI>::ShowDialog() */

ChildrenDayUI * UISingletonDialog<ChildrenDayUI>::ShowDialog(void)

{
  ChildrenDayUI *pCVar1;
  char cVar2;
  ChildrenDayUI *pCVar3;
  
  pCVar1 = m_pInstance;
  pCVar3 = pCVar1;
  if (m_pInstance == (ChildrenDayUI *)0x0) {
    pCVar3 = ::operator_new(0x188);
    ChildrenDayUI::ChildrenDayUI(pCVar3);
    m_pInstance = pCVar3;
    cVar2 = (**(code **)(*(long *)pCVar3 + 0x310))(pCVar3);
    pCVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (ChildrenDayUI *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (ChildrenDayUI *)0x0;
      pCVar3 = pCVar1;
    }
  }
  return pCVar3;
}


/* UISingletonDialog<ProbabilityDLG>::ShowDialog() */

ProbabilityDLG * UISingletonDialog<ProbabilityDLG>::ShowDialog(void)

{
  ProbabilityDLG *pPVar1;
  char cVar2;
  ProbabilityDLG *pPVar3;
  
  pPVar1 = m_pInstance;
  pPVar3 = pPVar1;
  if (m_pInstance == (ProbabilityDLG *)0x0) {
    pPVar3 = ::operator_new(0x148);
    ProbabilityDLG::ProbabilityDLG(pPVar3);
    m_pInstance = pPVar3;
    cVar2 = (**(code **)(*(long *)pPVar3 + 0x310))(pPVar3);
    pPVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (ProbabilityDLG *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (ProbabilityDLG *)0x0;
      pPVar3 = pPVar1;
    }
  }
  return pPVar3;
}


/* UISingletonDialog<ProbabilityDLG>::CloseDialog() */

void UISingletonDialog<ProbabilityDLG>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UISettingLargeTextEnunciation>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UISettingLargeTextEnunciation>::UISingletonDialog
          (UISingletonDialog<UISettingLargeTextEnunciation> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06610360;
  *(undefined **)(this + 0xd8) = &DAT_066106b0;
  return;
}


/* UISingletonDialog<UISettingLargeTextEnunciation>::ShowDialog() */

UISettingLargeTextEnunciation * UISingletonDialog<UISettingLargeTextEnunciation>::ShowDialog(void)

{
  UISettingLargeTextEnunciation *pUVar1;
  char cVar2;
  UISettingLargeTextEnunciation *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UISettingLargeTextEnunciation *)0x0) {
    pUVar3 = ::operator_new(0x138);
    memset(pUVar3,0,0x138);
    UISettingLargeTextEnunciation::UISettingLargeTextEnunciation(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UISettingLargeTextEnunciation *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UISettingLargeTextEnunciation *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIRankAvatarSelect>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIRankAvatarSelect>::~UISingletonDialog
          (UISingletonDialog<UIRankAvatarSelect> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06614970;
  *(undefined ***)this = &PTR_GetClass_06614620;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIRankAvatarSelect> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIRankAvatarSelect>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIRankAvatarSelect>::~UISingletonDialog
          (UISingletonDialog<UIRankAvatarSelect> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIRankAvatarSelect>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIRankAvatarSelect>::UISingletonDialog
          (UISingletonDialog<UIRankAvatarSelect> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06614620;
  *(undefined **)(this + 0xd8) = &DAT_06614970;
  return;
}


/* UISingletonDialog<UIRankAvatarSelect>::CloseDialog() */

void UISingletonDialog<UIRankAvatarSelect>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIInvitation>::GetSingletonPtr() */

undefined8 UISingletonDialog<UIInvitation>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<CommonRewardDisplay>::CloseDialog() */

void UISingletonDialog<CommonRewardDisplay>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


void UISingletonDialog<CommonRewardDisplay>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


void UISingletonDialog<CommonRewardDisplay>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UINewPlantView_PlantDetails>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewPlantView_PlantDetails>::~UISingletonDialog
          (UISingletonDialog<UINewPlantView_PlantDetails> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066164d0;
  *(undefined ***)this = &PTR_GetClass_06616180;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UINewPlantView_PlantDetails> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UINewPlantView_PlantDetails>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewPlantView_PlantDetails>::~UISingletonDialog
          (UISingletonDialog<UINewPlantView_PlantDetails> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UINewPlantView_Classify>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewPlantView_Classify>::~UISingletonDialog
          (UISingletonDialog<UINewPlantView_Classify> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06616130;
  *(undefined ***)this = &PTR_GetClass_06615de0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UINewPlantView_Classify> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UINewPlantView_Classify>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewPlantView_Classify>::~UISingletonDialog
          (UISingletonDialog<UINewPlantView_Classify> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIPlantPedia>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPlantPedia>::~UISingletonDialog(UISingletonDialog<UIPlantPedia> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06616870;
  *(undefined ***)this = &PTR_GetClass_06616520;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIPlantPedia> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIPlantPedia>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPlantPedia>::~UISingletonDialog(UISingletonDialog<UIPlantPedia> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UINewPlantView_LevelUp>::ShowDialog() */

UINewPlantView_LevelUp * UISingletonDialog<UINewPlantView_LevelUp>::ShowDialog(void)

{
  UINewPlantView_LevelUp *pUVar1;
  char cVar2;
  UINewPlantView_LevelUp *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UINewPlantView_LevelUp *)0x0) {
    pUVar3 = ::operator_new(0x150);
    UINewPlantView_LevelUp::UINewPlantView_LevelUp(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UINewPlantView_LevelUp *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UINewPlantView_LevelUp *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UINewPlantView_AvatarPackage>::ShowDialog() */

UINewPlantView_AvatarPackage * UISingletonDialog<UINewPlantView_AvatarPackage>::ShowDialog(void)

{
  UINewPlantView_AvatarPackage *pUVar1;
  char cVar2;
  UINewPlantView_AvatarPackage *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UINewPlantView_AvatarPackage *)0x0) {
    pUVar3 = ::operator_new(0x168);
    UINewPlantView_AvatarPackage::UINewPlantView_AvatarPackage(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UINewPlantView_AvatarPackage *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UINewPlantView_AvatarPackage *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UINewPlantView_AccessoryPackage>::ShowDialog() */

UINewPlantView_AccessoryPackage *
UISingletonDialog<UINewPlantView_AccessoryPackage>::ShowDialog(void)

{
  UINewPlantView_AccessoryPackage *pUVar1;
  char cVar2;
  UINewPlantView_AccessoryPackage *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UINewPlantView_AccessoryPackage *)0x0) {
    pUVar3 = ::operator_new(0x1e0);
    UINewPlantView_AccessoryPackage::UINewPlantView_AccessoryPackage(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UINewPlantView_AccessoryPackage *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UINewPlantView_AccessoryPackage *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UINewPlantView_PlantDetails>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewPlantView_PlantDetails>::UISingletonDialog
          (UISingletonDialog<UINewPlantView_PlantDetails> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06616180;
  *(undefined **)(this + 0xd8) = &DAT_066164d0;
  return;
}


/* UISingletonDialog<UINewPlantView_PlantDetails>::ShowDialog() */

UINewPlantView_PlantDetails * UISingletonDialog<UINewPlantView_PlantDetails>::ShowDialog(void)

{
  UINewPlantView_PlantDetails *pUVar1;
  char cVar2;
  UINewPlantView_PlantDetails *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UINewPlantView_PlantDetails *)0x0) {
    pUVar3 = ::operator_new(0x140);
    memset(pUVar3,0,0x140);
    UINewPlantView_PlantDetails::UINewPlantView_PlantDetails(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UINewPlantView_PlantDetails *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UINewPlantView_PlantDetails *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UINewPlantView_Classify>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewPlantView_Classify>::UISingletonDialog
          (UISingletonDialog<UINewPlantView_Classify> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06615de0;
  *(undefined **)(this + 0xd8) = &DAT_06616130;
  return;
}


/* UISingletonDialog<UINewPlantView_Classify>::ShowDialog() */

UINewPlantView_Classify * UISingletonDialog<UINewPlantView_Classify>::ShowDialog(void)

{
  UINewPlantView_Classify *pUVar1;
  char cVar2;
  UINewPlantView_Classify *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UINewPlantView_Classify *)0x0) {
    pUVar3 = ::operator_new(0x138);
    memset(pUVar3,0,0x138);
    UINewPlantView_Classify::UINewPlantView_Classify(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UINewPlantView_Classify *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UINewPlantView_Classify *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIPlantPedia>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPlantPedia>::UISingletonDialog(UISingletonDialog<UIPlantPedia> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06616520;
  *(undefined **)(this + 0xd8) = &DAT_06616870;
  return;
}


/* UISingletonDialog<UIPlantPedia>::ShowDialog() */

UIPlantPedia * UISingletonDialog<UIPlantPedia>::ShowDialog(void)

{
  UIPlantPedia *pUVar1;
  char cVar2;
  UIPlantPedia *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIPlantPedia *)0x0) {
    pUVar3 = ::operator_new(0x140);
    memset(pUVar3,0,0x140);
    UIPlantPedia::UIPlantPedia(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIPlantPedia *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIPlantPedia *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<ActivityCollectionPlayerSurvey>::ShowDialog() */

ActivityCollectionPlayerSurvey * UISingletonDialog<ActivityCollectionPlayerSurvey>::ShowDialog(void)

{
  ActivityCollectionPlayerSurvey *pAVar1;
  char cVar2;
  ActivityCollectionPlayerSurvey *pAVar3;
  
  pAVar1 = m_pInstance;
  pAVar3 = pAVar1;
  if (m_pInstance == (ActivityCollectionPlayerSurvey *)0x0) {
    pAVar3 = ::operator_new(0x178);
    ActivityCollectionPlayerSurvey::ActivityCollectionPlayerSurvey(pAVar3);
    m_pInstance = pAVar3;
    cVar2 = (**(code **)(*(long *)pAVar3 + 0x310))(pAVar3);
    pAVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (ActivityCollectionPlayerSurvey *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (ActivityCollectionPlayerSurvey *)0x0;
      pAVar3 = pAVar1;
    }
  }
  return pAVar3;
}


/* UISingletonDialog<ActivityCollectionRichman>::ShowDialog() */

ActivityCollectionRichman * UISingletonDialog<ActivityCollectionRichman>::ShowDialog(void)

{
  ActivityCollectionRichman *pAVar1;
  char cVar2;
  ActivityCollectionRichman *pAVar3;
  
  pAVar1 = m_pInstance;
  pAVar3 = pAVar1;
  if (m_pInstance == (ActivityCollectionRichman *)0x0) {
    pAVar3 = ::operator_new(0x178);
    ActivityCollectionRichman::ActivityCollectionRichman(pAVar3);
    m_pInstance = pAVar3;
    cVar2 = (**(code **)(*(long *)pAVar3 + 0x310))(pAVar3);
    pAVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (ActivityCollectionRichman *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (ActivityCollectionRichman *)0x0;
      pAVar3 = pAVar1;
    }
  }
  return pAVar3;
}


/* UISingletonDialog<ActivityCollectionPartyAssist>::ShowDialog() */

ActivityCollectionPartyAssist * UISingletonDialog<ActivityCollectionPartyAssist>::ShowDialog(void)

{
  ActivityCollectionPartyAssist *pAVar1;
  char cVar2;
  ActivityCollectionPartyAssist *pAVar3;
  
  pAVar1 = m_pInstance;
  pAVar3 = pAVar1;
  if (m_pInstance == (ActivityCollectionPartyAssist *)0x0) {
    pAVar3 = ::operator_new(0x178);
    ActivityCollectionPartyAssist::ActivityCollectionPartyAssist(pAVar3);
    m_pInstance = pAVar3;
    cVar2 = (**(code **)(*(long *)pAVar3 + 0x310))(pAVar3);
    pAVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (ActivityCollectionPartyAssist *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (ActivityCollectionPartyAssist *)0x0;
      pAVar3 = pAVar1;
    }
  }
  return pAVar3;
}


/* UISingletonDialog<ActivityCollectionPiggyBank>::ShowDialog() */

ActivityCollectionPiggyBank * UISingletonDialog<ActivityCollectionPiggyBank>::ShowDialog(void)

{
  ActivityCollectionPiggyBank *pAVar1;
  char cVar2;
  ActivityCollectionPiggyBank *pAVar3;
  
  pAVar1 = m_pInstance;
  pAVar3 = pAVar1;
  if (m_pInstance == (ActivityCollectionPiggyBank *)0x0) {
    pAVar3 = ::operator_new(0x1d8);
    ActivityCollectionPiggyBank::ActivityCollectionPiggyBank(pAVar3);
    m_pInstance = pAVar3;
    cVar2 = (**(code **)(*(long *)pAVar3 + 0x310))(pAVar3);
    pAVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (ActivityCollectionPiggyBank *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (ActivityCollectionPiggyBank *)0x0;
      pAVar3 = pAVar1;
    }
  }
  return pAVar3;
}


/* UISingletonDialog<ActivityCollectionRechargeDailySign>::ShowDialog() */

ActivityCollectionRechargeDailySign *
UISingletonDialog<ActivityCollectionRechargeDailySign>::ShowDialog(void)

{
  ActivityCollectionRechargeDailySign *pAVar1;
  char cVar2;
  ActivityCollectionRechargeDailySign *pAVar3;
  
  pAVar1 = m_pInstance;
  pAVar3 = pAVar1;
  if (m_pInstance == (ActivityCollectionRechargeDailySign *)0x0) {
    pAVar3 = ::operator_new(0x188);
    ActivityCollectionRechargeDailySign::ActivityCollectionRechargeDailySign(pAVar3);
    m_pInstance = pAVar3;
    cVar2 = (**(code **)(*(long *)pAVar3 + 0x310))(pAVar3);
    pAVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (ActivityCollectionRechargeDailySign *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (ActivityCollectionRechargeDailySign *)0x0;
      pAVar3 = pAVar1;
    }
  }
  return pAVar3;
}


/* UISingletonDialog<ActivityCollectionDiscountShop>::ShowDialog() */

ActivityCollectionDiscountShop * UISingletonDialog<ActivityCollectionDiscountShop>::ShowDialog(void)

{
  ActivityCollectionDiscountShop *pAVar1;
  char cVar2;
  ActivityCollectionDiscountShop *pAVar3;
  
  pAVar1 = m_pInstance;
  pAVar3 = pAVar1;
  if (m_pInstance == (ActivityCollectionDiscountShop *)0x0) {
    pAVar3 = ::operator_new(0x198);
    ActivityCollectionDiscountShop::ActivityCollectionDiscountShop(pAVar3);
    m_pInstance = pAVar3;
    cVar2 = (**(code **)(*(long *)pAVar3 + 0x310))(pAVar3);
    pAVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (ActivityCollectionDiscountShop *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (ActivityCollectionDiscountShop *)0x0;
      pAVar3 = pAVar1;
    }
  }
  return pAVar3;
}


/* UISingletonDialog<ActivityCollectionUIFutureGiftBox>::ShowDialog() */

ActivityCollectionUIFutureGiftBox *
UISingletonDialog<ActivityCollectionUIFutureGiftBox>::ShowDialog(void)

{
  ActivityCollectionUIFutureGiftBox *pAVar1;
  char cVar2;
  ActivityCollectionUIFutureGiftBox *pAVar3;
  
  pAVar1 = m_pInstance;
  pAVar3 = pAVar1;
  if (m_pInstance == (ActivityCollectionUIFutureGiftBox *)0x0) {
    pAVar3 = ::operator_new(0x170);
    ActivityCollectionUIFutureGiftBox::ActivityCollectionUIFutureGiftBox(pAVar3);
    m_pInstance = pAVar3;
    cVar2 = (**(code **)(*(long *)pAVar3 + 0x310))(pAVar3);
    pAVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (ActivityCollectionUIFutureGiftBox *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (ActivityCollectionUIFutureGiftBox *)0x0;
      pAVar3 = pAVar1;
    }
  }
  return pAVar3;
}


/* UISingletonDialog<ActivityCollectionLuckyChest>::ShowDialog() */

ActivityCollectionLuckyChest * UISingletonDialog<ActivityCollectionLuckyChest>::ShowDialog(void)

{
  ActivityCollectionLuckyChest *pAVar1;
  char cVar2;
  ActivityCollectionLuckyChest *pAVar3;
  
  pAVar1 = m_pInstance;
  pAVar3 = pAVar1;
  if (m_pInstance == (ActivityCollectionLuckyChest *)0x0) {
    pAVar3 = ::operator_new(0x158);
    ActivityCollectionLuckyChest::ActivityCollectionLuckyChest(pAVar3);
    m_pInstance = pAVar3;
    cVar2 = (**(code **)(*(long *)pAVar3 + 0x310))(pAVar3);
    pAVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (ActivityCollectionLuckyChest *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (ActivityCollectionLuckyChest *)0x0;
      pAVar3 = pAVar1;
    }
  }
  return pAVar3;
}


/* UISingletonDialog<ActivityCollectionAutumnHarvest>::ShowDialog() */

ActivityCollectionAutumnHarvest *
UISingletonDialog<ActivityCollectionAutumnHarvest>::ShowDialog(void)

{
  ActivityCollectionAutumnHarvest *pAVar1;
  char cVar2;
  ActivityCollectionAutumnHarvest *pAVar3;
  
  pAVar1 = m_pInstance;
  pAVar3 = pAVar1;
  if (m_pInstance == (ActivityCollectionAutumnHarvest *)0x0) {
    pAVar3 = ::operator_new(0x148);
    ActivityCollectionAutumnHarvest::ActivityCollectionAutumnHarvest(pAVar3);
    m_pInstance = pAVar3;
    cVar2 = (**(code **)(*(long *)pAVar3 + 0x310))(pAVar3);
    pAVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (ActivityCollectionAutumnHarvest *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (ActivityCollectionAutumnHarvest *)0x0;
      pAVar3 = pAVar1;
    }
  }
  return pAVar3;
}


/* UISingletonDialog<ActivityCollectionNighttheToy>::ShowDialog() */

ActivityCollectionNighttheToy * UISingletonDialog<ActivityCollectionNighttheToy>::ShowDialog(void)

{
  ActivityCollectionNighttheToy *pAVar1;
  char cVar2;
  ActivityCollectionNighttheToy *pAVar3;
  
  pAVar1 = m_pInstance;
  pAVar3 = pAVar1;
  if (m_pInstance == (ActivityCollectionNighttheToy *)0x0) {
    pAVar3 = ::operator_new(0x1a0);
    ActivityCollectionNighttheToy::ActivityCollectionNighttheToy(pAVar3);
    m_pInstance = pAVar3;
    cVar2 = (**(code **)(*(long *)pAVar3 + 0x310))(pAVar3);
    pAVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (ActivityCollectionNighttheToy *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (ActivityCollectionNighttheToy *)0x0;
      pAVar3 = pAVar1;
    }
  }
  return pAVar3;
}


/* UISingletonDialog<UIWishingPool>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIWishingPool>::~UISingletonDialog(UISingletonDialog<UIWishingPool> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06627f40;
  *(undefined ***)this = &PTR_GetClass_06627bf0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIWishingPool> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIWishingPool>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIWishingPool>::~UISingletonDialog(UISingletonDialog<UIWishingPool> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIDaveKitchen>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIDaveKitchen>::~UISingletonDialog(UISingletonDialog<UIDaveKitchen> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066282e0;
  *(undefined ***)this = &PTR_GetClass_06627f90;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIDaveKitchen> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIDaveKitchen>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIDaveKitchen>::~UISingletonDialog(UISingletonDialog<UIDaveKitchen> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<ActivityCollectionPlayerSurvey>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<ActivityCollectionPlayerSurvey>::~UISingletonDialog
          (UISingletonDialog<ActivityCollectionPlayerSurvey> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06626240;
  *(undefined ***)this = &PTR_GetClass_06625ef0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<ActivityCollectionPlayerSurvey> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<ActivityCollectionPlayerSurvey>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<ActivityCollectionPlayerSurvey>::~UISingletonDialog
          (UISingletonDialog<ActivityCollectionPlayerSurvey> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<ActivityCollectionRichman>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<ActivityCollectionRichman>::~UISingletonDialog
          (UISingletonDialog<ActivityCollectionRichman> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066265e0;
  *(undefined ***)this = &PTR_GetClass_06626290;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<ActivityCollectionRichman> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<ActivityCollectionRichman>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<ActivityCollectionRichman>::~UISingletonDialog
          (UISingletonDialog<ActivityCollectionRichman> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<ActivityCollectionRechargeDailySign>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<ActivityCollectionRechargeDailySign>::~UISingletonDialog
          (UISingletonDialog<ActivityCollectionRechargeDailySign> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06626980;
  *(undefined ***)this = &PTR_GetClass_06626630;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<ActivityCollectionRechargeDailySign> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<ActivityCollectionRechargeDailySign>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<ActivityCollectionRechargeDailySign>::~UISingletonDialog
          (UISingletonDialog<ActivityCollectionRechargeDailySign> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<ActivityCollectionDiscountShop>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<ActivityCollectionDiscountShop>::~UISingletonDialog
          (UISingletonDialog<ActivityCollectionDiscountShop> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06626d20;
  *(undefined ***)this = &PTR_GetClass_066269d0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<ActivityCollectionDiscountShop> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<ActivityCollectionDiscountShop>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<ActivityCollectionDiscountShop>::~UISingletonDialog
          (UISingletonDialog<ActivityCollectionDiscountShop> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<ActivityCollectionPiggyBank>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<ActivityCollectionPiggyBank>::~UISingletonDialog
          (UISingletonDialog<ActivityCollectionPiggyBank> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066270c0;
  *(undefined ***)this = &PTR_GetClass_06626d70;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<ActivityCollectionPiggyBank> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<ActivityCollectionPiggyBank>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<ActivityCollectionPiggyBank>::~UISingletonDialog
          (UISingletonDialog<ActivityCollectionPiggyBank> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<ActivityCollectionPartyAssist>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<ActivityCollectionPartyAssist>::~UISingletonDialog
          (UISingletonDialog<ActivityCollectionPartyAssist> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06627460;
  *(undefined ***)this = &PTR_GetClass_06627110;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<ActivityCollectionPartyAssist> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<ActivityCollectionPartyAssist>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<ActivityCollectionPartyAssist>::~UISingletonDialog
          (UISingletonDialog<ActivityCollectionPartyAssist> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<ActivityCollectionUIFutureGiftBox>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<ActivityCollectionUIFutureGiftBox>::~UISingletonDialog
          (UISingletonDialog<ActivityCollectionUIFutureGiftBox> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06627800;
  *(undefined ***)this = &PTR_GetClass_066274b0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<ActivityCollectionUIFutureGiftBox> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<ActivityCollectionUIFutureGiftBox>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<ActivityCollectionUIFutureGiftBox>::~UISingletonDialog
          (UISingletonDialog<ActivityCollectionUIFutureGiftBox> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<ActivityCollectionAutumnHarvest>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<ActivityCollectionAutumnHarvest>::~UISingletonDialog
          (UISingletonDialog<ActivityCollectionAutumnHarvest> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06627ba0;
  *(undefined ***)this = &PTR_GetClass_06627850;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<ActivityCollectionAutumnHarvest> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<ActivityCollectionAutumnHarvest>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<ActivityCollectionAutumnHarvest>::~UISingletonDialog
          (UISingletonDialog<ActivityCollectionAutumnHarvest> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UILuckBag>::ShowDialog() */

UILuckBag * UISingletonDialog<UILuckBag>::ShowDialog(void)

{
  UILuckBag *pUVar1;
  char cVar2;
  UILuckBag *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UILuckBag *)0x0) {
    pUVar3 = ::operator_new(0x140);
    UILuckBag::UILuckBag(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UILuckBag *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UILuckBag *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


UILuckBag * UISingletonDialog<UILuckBag>::ShowDialog(void)

{
  UILuckBag *pUVar1;
  char cVar2;
  UILuckBag *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UILuckBag *)0x0) {
    pUVar3 = ::operator_new(0x140);
    UILuckBag::UILuckBag(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UILuckBag *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UILuckBag *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


UILuckBag * UISingletonDialog<UILuckBag>::ShowDialog(void)

{
  UILuckBag *pUVar1;
  char cVar2;
  UILuckBag *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UILuckBag *)0x0) {
    pUVar3 = ::operator_new(0x140);
    UILuckBag::UILuckBag(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UILuckBag *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UILuckBag *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UILimitGroupBuy>::ShowDialog() */

UILimitGroupBuy * UISingletonDialog<UILimitGroupBuy>::ShowDialog(void)

{
  UILimitGroupBuy *pUVar1;
  char cVar2;
  UILimitGroupBuy *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UILimitGroupBuy *)0x0) {
    pUVar3 = ::operator_new(0x1c8);
    UILimitGroupBuy::UILimitGroupBuy(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UILimitGroupBuy *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UILimitGroupBuy *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


UILimitGroupBuy * UISingletonDialog<UILimitGroupBuy>::ShowDialog(void)

{
  UILimitGroupBuy *pUVar1;
  char cVar2;
  UILimitGroupBuy *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UILimitGroupBuy *)0x0) {
    pUVar3 = ::operator_new(0x1c8);
    UILimitGroupBuy::UILimitGroupBuy(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UILimitGroupBuy *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UILimitGroupBuy *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


UILimitGroupBuy * UISingletonDialog<UILimitGroupBuy>::ShowDialog(void)

{
  UILimitGroupBuy *pUVar1;
  char cVar2;
  UILimitGroupBuy *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UILimitGroupBuy *)0x0) {
    pUVar3 = ::operator_new(0x1c8);
    UILimitGroupBuy::UILimitGroupBuy(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UILimitGroupBuy *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UILimitGroupBuy *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UILimitedSummon>::ShowDialog() */

UILimitedSummon * UISingletonDialog<UILimitedSummon>::ShowDialog(void)

{
  UILimitedSummon *pUVar1;
  char cVar2;
  UILimitedSummon *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UILimitedSummon *)0x0) {
    pUVar3 = ::operator_new(0x188);
    UILimitedSummon::UILimitedSummon(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UILimitedSummon *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UILimitedSummon *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


UILimitedSummon * UISingletonDialog<UILimitedSummon>::ShowDialog(void)

{
  UILimitedSummon *pUVar1;
  char cVar2;
  UILimitedSummon *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UILimitedSummon *)0x0) {
    pUVar3 = ::operator_new(0x188);
    UILimitedSummon::UILimitedSummon(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UILimitedSummon *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UILimitedSummon *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


UILimitedSummon * UISingletonDialog<UILimitedSummon>::ShowDialog(void)

{
  UILimitedSummon *pUVar1;
  char cVar2;
  UILimitedSummon *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UILimitedSummon *)0x0) {
    pUVar3 = ::operator_new(0x188);
    UILimitedSummon::UILimitedSummon(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UILimitedSummon *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UILimitedSummon *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UICarnival>::ShowDialog() */

UICarnival * UISingletonDialog<UICarnival>::ShowDialog(void)

{
  UICarnival *pUVar1;
  char cVar2;
  UICarnival *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UICarnival *)0x0) {
    pUVar3 = ::operator_new(0x228);
    UICarnival::UICarnival(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UICarnival *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UICarnival *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


UICarnival * UISingletonDialog<UICarnival>::ShowDialog(void)

{
  UICarnival *pUVar1;
  char cVar2;
  UICarnival *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UICarnival *)0x0) {
    pUVar3 = ::operator_new(0x228);
    UICarnival::UICarnival(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UICarnival *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UICarnival *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


UICarnival * UISingletonDialog<UICarnival>::ShowDialog(void)

{
  UICarnival *pUVar1;
  char cVar2;
  UICarnival *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UICarnival *)0x0) {
    pUVar3 = ::operator_new(0x228);
    UICarnival::UICarnival(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UICarnival *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UICarnival *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIRenaissanceChallengeNew>::ShowDialog() */

UIRenaissanceChallengeNew * UISingletonDialog<UIRenaissanceChallengeNew>::ShowDialog(void)

{
  UIRenaissanceChallengeNew *pUVar1;
  char cVar2;
  UIRenaissanceChallengeNew *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIRenaissanceChallengeNew *)0x0) {
    pUVar3 = ::operator_new(0x148);
    UIRenaissanceChallengeNew::UIRenaissanceChallengeNew(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIRenaissanceChallengeNew *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIRenaissanceChallengeNew *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIFestivalGoldenEggEntrance>::ShowDialog() */

UIFestivalGoldenEggEntrance * UISingletonDialog<UIFestivalGoldenEggEntrance>::ShowDialog(void)

{
  UIFestivalGoldenEggEntrance *pUVar1;
  char cVar2;
  UIFestivalGoldenEggEntrance *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIFestivalGoldenEggEntrance *)0x0) {
    pUVar3 = ::operator_new(0x200);
    UIFestivalGoldenEggEntrance::UIFestivalGoldenEggEntrance(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIFestivalGoldenEggEntrance *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIFestivalGoldenEggEntrance *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


UIFestivalGoldenEggEntrance * UISingletonDialog<UIFestivalGoldenEggEntrance>::ShowDialog(void)

{
  UIFestivalGoldenEggEntrance *pUVar1;
  char cVar2;
  UIFestivalGoldenEggEntrance *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIFestivalGoldenEggEntrance *)0x0) {
    pUVar3 = ::operator_new(0x200);
    UIFestivalGoldenEggEntrance::UIFestivalGoldenEggEntrance(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIFestivalGoldenEggEntrance *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIFestivalGoldenEggEntrance *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


UIFestivalGoldenEggEntrance * UISingletonDialog<UIFestivalGoldenEggEntrance>::ShowDialog(void)

{
  UIFestivalGoldenEggEntrance *pUVar1;
  char cVar2;
  UIFestivalGoldenEggEntrance *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIFestivalGoldenEggEntrance *)0x0) {
    pUVar3 = ::operator_new(0x200);
    UIFestivalGoldenEggEntrance::UIFestivalGoldenEggEntrance(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIFestivalGoldenEggEntrance *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIFestivalGoldenEggEntrance *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIAnniversaryTreasure>::ShowDialog() */

UIAnniversaryTreasure * UISingletonDialog<UIAnniversaryTreasure>::ShowDialog(void)

{
  UIAnniversaryTreasure *pUVar1;
  char cVar2;
  UIAnniversaryTreasure *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIAnniversaryTreasure *)0x0) {
    pUVar3 = ::operator_new(0x1c0);
    UIAnniversaryTreasure::UIAnniversaryTreasure(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIAnniversaryTreasure *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIAnniversaryTreasure *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


UIAnniversaryTreasure * UISingletonDialog<UIAnniversaryTreasure>::ShowDialog(void)

{
  UIAnniversaryTreasure *pUVar1;
  char cVar2;
  UIAnniversaryTreasure *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIAnniversaryTreasure *)0x0) {
    pUVar3 = ::operator_new(0x1c0);
    UIAnniversaryTreasure::UIAnniversaryTreasure(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIAnniversaryTreasure *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIAnniversaryTreasure *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


UIAnniversaryTreasure * UISingletonDialog<UIAnniversaryTreasure>::ShowDialog(void)

{
  UIAnniversaryTreasure *pUVar1;
  char cVar2;
  UIAnniversaryTreasure *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIAnniversaryTreasure *)0x0) {
    pUVar3 = ::operator_new(0x1c0);
    UIAnniversaryTreasure::UIAnniversaryTreasure(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIAnniversaryTreasure *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIAnniversaryTreasure *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UINewYearGoods>::ShowDialog() */

UINewYearGoods * UISingletonDialog<UINewYearGoods>::ShowDialog(void)

{
  UINewYearGoods *pUVar1;
  char cVar2;
  UINewYearGoods *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UINewYearGoods *)0x0) {
    pUVar3 = ::operator_new(0x178);
    UINewYearGoods::UINewYearGoods(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UINewYearGoods *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UINewYearGoods *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


UINewYearGoods * UISingletonDialog<UINewYearGoods>::ShowDialog(void)

{
  UINewYearGoods *pUVar1;
  char cVar2;
  UINewYearGoods *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UINewYearGoods *)0x0) {
    pUVar3 = ::operator_new(0x178);
    UINewYearGoods::UINewYearGoods(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UINewYearGoods *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UINewYearGoods *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


UINewYearGoods * UISingletonDialog<UINewYearGoods>::ShowDialog(void)

{
  UINewYearGoods *pUVar1;
  char cVar2;
  UINewYearGoods *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UINewYearGoods *)0x0) {
    pUVar3 = ::operator_new(0x178);
    UINewYearGoods::UINewYearGoods(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UINewYearGoods *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UINewYearGoods *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UICallofWish>::ShowDialog() */

UICallofWish * UISingletonDialog<UICallofWish>::ShowDialog(void)

{
  UICallofWish *pUVar1;
  char cVar2;
  UICallofWish *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UICallofWish *)0x0) {
    pUVar3 = ::operator_new(0x188);
    UICallofWish::UICallofWish(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UICallofWish *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UICallofWish *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


UICallofWish * UISingletonDialog<UICallofWish>::ShowDialog(void)

{
  UICallofWish *pUVar1;
  char cVar2;
  UICallofWish *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UICallofWish *)0x0) {
    pUVar3 = ::operator_new(0x188);
    UICallofWish::UICallofWish(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UICallofWish *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UICallofWish *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


UICallofWish * UISingletonDialog<UICallofWish>::ShowDialog(void)

{
  UICallofWish *pUVar1;
  char cVar2;
  UICallofWish *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UICallofWish *)0x0) {
    pUVar3 = ::operator_new(0x188);
    UICallofWish::UICallofWish(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UICallofWish *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UICallofWish *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIFightZodiac>::ShowDialog() */

UIFightZodiac * UISingletonDialog<UIFightZodiac>::ShowDialog(void)

{
  UIFightZodiac *pUVar1;
  char cVar2;
  UIFightZodiac *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIFightZodiac *)0x0) {
    pUVar3 = ::operator_new(0x1b8);
    UIFightZodiac::UIFightZodiac(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIFightZodiac *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIFightZodiac *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


UIFightZodiac * UISingletonDialog<UIFightZodiac>::ShowDialog(void)

{
  UIFightZodiac *pUVar1;
  char cVar2;
  UIFightZodiac *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIFightZodiac *)0x0) {
    pUVar3 = ::operator_new(0x1b8);
    UIFightZodiac::UIFightZodiac(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIFightZodiac *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIFightZodiac *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


UIFightZodiac * UISingletonDialog<UIFightZodiac>::ShowDialog(void)

{
  UIFightZodiac *pUVar1;
  char cVar2;
  UIFightZodiac *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIFightZodiac *)0x0) {
    pUVar3 = ::operator_new(0x1b8);
    UIFightZodiac::UIFightZodiac(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIFightZodiac *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIFightZodiac *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIDragonTreasure>::ShowDialog() */

UIDragonTreasure * UISingletonDialog<UIDragonTreasure>::ShowDialog(void)

{
  UIDragonTreasure *pUVar1;
  char cVar2;
  UIDragonTreasure *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIDragonTreasure *)0x0) {
    pUVar3 = ::operator_new(0x218);
    UIDragonTreasure::UIDragonTreasure(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIDragonTreasure *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIDragonTreasure *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


UIDragonTreasure * UISingletonDialog<UIDragonTreasure>::ShowDialog(void)

{
  UIDragonTreasure *pUVar1;
  char cVar2;
  UIDragonTreasure *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIDragonTreasure *)0x0) {
    pUVar3 = ::operator_new(0x218);
    UIDragonTreasure::UIDragonTreasure(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIDragonTreasure *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIDragonTreasure *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


UIDragonTreasure * UISingletonDialog<UIDragonTreasure>::ShowDialog(void)

{
  UIDragonTreasure *pUVar1;
  char cVar2;
  UIDragonTreasure *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIDragonTreasure *)0x0) {
    pUVar3 = ::operator_new(0x218);
    UIDragonTreasure::UIDragonTreasure(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIDragonTreasure *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIDragonTreasure *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UITreasurePavilion>::ShowDialog() */

UITreasurePavilion * UISingletonDialog<UITreasurePavilion>::ShowDialog(void)

{
  UITreasurePavilion *pUVar1;
  char cVar2;
  UITreasurePavilion *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UITreasurePavilion *)0x0) {
    pUVar3 = ::operator_new(0x208);
    UITreasurePavilion::UITreasurePavilion(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UITreasurePavilion *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UITreasurePavilion *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UINFSLinkage>::ShowDialog() */

UINFSLinkage * UISingletonDialog<UINFSLinkage>::ShowDialog(void)

{
  UINFSLinkage *pUVar1;
  char cVar2;
  UINFSLinkage *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UINFSLinkage *)0x0) {
    pUVar3 = ::operator_new(0x260);
    UINFSLinkage::UINFSLinkage(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UINFSLinkage *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UINFSLinkage *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


UINFSLinkage * UISingletonDialog<UINFSLinkage>::ShowDialog(void)

{
  UINFSLinkage *pUVar1;
  char cVar2;
  UINFSLinkage *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UINFSLinkage *)0x0) {
    pUVar3 = ::operator_new(0x260);
    UINFSLinkage::UINFSLinkage(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UINFSLinkage *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UINFSLinkage *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


UINFSLinkage * UISingletonDialog<UINFSLinkage>::ShowDialog(void)

{
  UINFSLinkage *pUVar1;
  char cVar2;
  UINFSLinkage *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UINFSLinkage *)0x0) {
    pUVar3 = ::operator_new(0x260);
    UINFSLinkage::UINFSLinkage(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UINFSLinkage *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UINFSLinkage *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<ActivityCollectionPlayerSurvey>::UISingletonDialog() */

void __thiscall
UISingletonDialog<ActivityCollectionPlayerSurvey>::UISingletonDialog
          (UISingletonDialog<ActivityCollectionPlayerSurvey> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06625ef0;
  *(undefined **)(this + 0xd8) = &DAT_06626240;
  return;
}


/* UISingletonDialog<UIPlayerSurvey>::GetSingletonPtr() */

undefined8 UISingletonDialog<UIPlayerSurvey>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UIPlayerSurvey>::ShowDialog() */

UIPlayerSurvey * UISingletonDialog<UIPlayerSurvey>::ShowDialog(void)

{
  UIPlayerSurvey *pUVar1;
  char cVar2;
  UIPlayerSurvey *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIPlayerSurvey *)0x0) {
    pUVar3 = ::operator_new(0x198);
    UIPlayerSurvey::UIPlayerSurvey(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIPlayerSurvey *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIPlayerSurvey *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<ActivityCollectionRichman>::UISingletonDialog() */

void __thiscall
UISingletonDialog<ActivityCollectionRichman>::UISingletonDialog
          (UISingletonDialog<ActivityCollectionRichman> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06626290;
  *(undefined **)(this + 0xd8) = &DAT_066265e0;
  return;
}


/* UISingletonDialog<ActivityCollectionRechargeDailySign>::UISingletonDialog() */

void __thiscall
UISingletonDialog<ActivityCollectionRechargeDailySign>::UISingletonDialog
          (UISingletonDialog<ActivityCollectionRechargeDailySign> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06626630;
  *(undefined **)(this + 0xd8) = &DAT_06626980;
  return;
}


/* UISingletonDialog<ActivityCollectionDiscountShop>::UISingletonDialog() */

void __thiscall
UISingletonDialog<ActivityCollectionDiscountShop>::UISingletonDialog
          (UISingletonDialog<ActivityCollectionDiscountShop> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066269d0;
  *(undefined **)(this + 0xd8) = &DAT_06626d20;
  return;
}


/* UISingletonDialog<ActivityCollectionPiggyBank>::UISingletonDialog() */

void __thiscall
UISingletonDialog<ActivityCollectionPiggyBank>::UISingletonDialog
          (UISingletonDialog<ActivityCollectionPiggyBank> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06626d70;
  *(undefined **)(this + 0xd8) = &DAT_066270c0;
  return;
}


/* UISingletonDialog<UITenYearRecord>::ShowDialog() */

UITenYearRecord * UISingletonDialog<UITenYearRecord>::ShowDialog(void)

{
  UITenYearRecord *pUVar1;
  char cVar2;
  UITenYearRecord *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UITenYearRecord *)0x0) {
    pUVar3 = ::operator_new(0x198);
    UITenYearRecord::UITenYearRecord(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UITenYearRecord *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UITenYearRecord *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


UITenYearRecord * UISingletonDialog<UITenYearRecord>::ShowDialog(void)

{
  UITenYearRecord *pUVar1;
  char cVar2;
  UITenYearRecord *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UITenYearRecord *)0x0) {
    pUVar3 = ::operator_new(0x198);
    UITenYearRecord::UITenYearRecord(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UITenYearRecord *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UITenYearRecord *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


UITenYearRecord * UISingletonDialog<UITenYearRecord>::ShowDialog(void)

{
  UITenYearRecord *pUVar1;
  char cVar2;
  UITenYearRecord *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UITenYearRecord *)0x0) {
    pUVar3 = ::operator_new(0x198);
    UITenYearRecord::UITenYearRecord(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UITenYearRecord *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UITenYearRecord *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<ActivityCollectionPartyAssist>::UISingletonDialog() */

void __thiscall
UISingletonDialog<ActivityCollectionPartyAssist>::UISingletonDialog
          (UISingletonDialog<ActivityCollectionPartyAssist> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06627110;
  *(undefined **)(this + 0xd8) = &DAT_06627460;
  return;
}


/* UISingletonDialog<UIPartyAssist>::ShowDialog() */

UIPartyAssist * UISingletonDialog<UIPartyAssist>::ShowDialog(void)

{
  UIPartyAssist *pUVar1;
  char cVar2;
  UIPartyAssist *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIPartyAssist *)0x0) {
    pUVar3 = ::operator_new(0x180);
    UIPartyAssist::UIPartyAssist(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIPartyAssist *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIPartyAssist *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UICustomVoting>::ShowDialog() */

UICustomVoting * UISingletonDialog<UICustomVoting>::ShowDialog(void)

{
  UICustomVoting *pUVar1;
  char cVar2;
  UICustomVoting *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UICustomVoting *)0x0) {
    pUVar3 = ::operator_new(0x170);
    UICustomVoting::UICustomVoting(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UICustomVoting *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UICustomVoting *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


UICustomVoting * UISingletonDialog<UICustomVoting>::ShowDialog(void)

{
  UICustomVoting *pUVar1;
  char cVar2;
  UICustomVoting *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UICustomVoting *)0x0) {
    pUVar3 = ::operator_new(0x170);
    UICustomVoting::UICustomVoting(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UICustomVoting *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UICustomVoting *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


UICustomVoting * UISingletonDialog<UICustomVoting>::ShowDialog(void)

{
  UICustomVoting *pUVar1;
  char cVar2;
  UICustomVoting *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UICustomVoting *)0x0) {
    pUVar3 = ::operator_new(0x170);
    UICustomVoting::UICustomVoting(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UICustomVoting *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UICustomVoting *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UINewYearGiftBox>::ShowDialog() */

UINewYearGiftBox * UISingletonDialog<UINewYearGiftBox>::ShowDialog(void)

{
  UINewYearGiftBox *pUVar1;
  char cVar2;
  UINewYearGiftBox *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UINewYearGiftBox *)0x0) {
    pUVar3 = ::operator_new(0x198);
    UINewYearGiftBox::UINewYearGiftBox(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UINewYearGiftBox *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UINewYearGiftBox *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


UINewYearGiftBox * UISingletonDialog<UINewYearGiftBox>::ShowDialog(void)

{
  UINewYearGiftBox *pUVar1;
  char cVar2;
  UINewYearGiftBox *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UINewYearGiftBox *)0x0) {
    pUVar3 = ::operator_new(0x198);
    UINewYearGiftBox::UINewYearGiftBox(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UINewYearGiftBox *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UINewYearGiftBox *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


UINewYearGiftBox * UISingletonDialog<UINewYearGiftBox>::ShowDialog(void)

{
  UINewYearGiftBox *pUVar1;
  char cVar2;
  UINewYearGiftBox *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UINewYearGiftBox *)0x0) {
    pUVar3 = ::operator_new(0x198);
    UINewYearGiftBox::UINewYearGiftBox(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UINewYearGiftBox *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UINewYearGiftBox *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<ActivityCollectionUIFutureGiftBox>::UISingletonDialog() */

void __thiscall
UISingletonDialog<ActivityCollectionUIFutureGiftBox>::UISingletonDialog
          (UISingletonDialog<ActivityCollectionUIFutureGiftBox> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066274b0;
  *(undefined **)(this + 0xd8) = &DAT_06627800;
  return;
}


/* UISingletonDialog<UIFutureGiftShop>::ShowDialog() */

UIFutureGiftShop * UISingletonDialog<UIFutureGiftShop>::ShowDialog(void)

{
  UIFutureGiftShop *pUVar1;
  char cVar2;
  UIFutureGiftShop *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIFutureGiftShop *)0x0) {
    pUVar3 = ::operator_new(0x198);
    UIFutureGiftShop::UIFutureGiftShop(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIFutureGiftShop *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIFutureGiftShop *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIPennyGiftBox>::ShowDialog() */

UIPennyGiftBox * UISingletonDialog<UIPennyGiftBox>::ShowDialog(void)

{
  UIPennyGiftBox *pUVar1;
  char cVar2;
  UIPennyGiftBox *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIPennyGiftBox *)0x0) {
    pUVar3 = ::operator_new(0x188);
    UIPennyGiftBox::UIPennyGiftBox(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIPennyGiftBox *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIPennyGiftBox *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


UIPennyGiftBox * UISingletonDialog<UIPennyGiftBox>::ShowDialog(void)

{
  UIPennyGiftBox *pUVar1;
  char cVar2;
  UIPennyGiftBox *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIPennyGiftBox *)0x0) {
    pUVar3 = ::operator_new(0x188);
    UIPennyGiftBox::UIPennyGiftBox(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIPennyGiftBox *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIPennyGiftBox *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


UIPennyGiftBox * UISingletonDialog<UIPennyGiftBox>::ShowDialog(void)

{
  UIPennyGiftBox *pUVar1;
  char cVar2;
  UIPennyGiftBox *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIPennyGiftBox *)0x0) {
    pUVar3 = ::operator_new(0x188);
    UIPennyGiftBox::UIPennyGiftBox(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIPennyGiftBox *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIPennyGiftBox *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<ActivityCollectionAutumnHarvest>::UISingletonDialog() */

void __thiscall
UISingletonDialog<ActivityCollectionAutumnHarvest>::UISingletonDialog
          (UISingletonDialog<ActivityCollectionAutumnHarvest> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06627850;
  *(undefined **)(this + 0xd8) = &DAT_06627ba0;
  return;
}


/* UISingletonDialog<UIAutumnHarvest>::ShowDialog() */

UIAutumnHarvest * UISingletonDialog<UIAutumnHarvest>::ShowDialog(void)

{
  UIAutumnHarvest *pUVar1;
  char cVar2;
  UIAutumnHarvest *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIAutumnHarvest *)0x0) {
    pUVar3 = ::operator_new(0x1a0);
    UIAutumnHarvest::UIAutumnHarvest(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIAutumnHarvest *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIAutumnHarvest *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIMiniGameCollection>::ShowDialog() */

UIMiniGameCollection * UISingletonDialog<UIMiniGameCollection>::ShowDialog(void)

{
  UIMiniGameCollection *pUVar1;
  char cVar2;
  UIMiniGameCollection *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIMiniGameCollection *)0x0) {
    pUVar3 = ::operator_new(0x160);
    UIMiniGameCollection::UIMiniGameCollection(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIMiniGameCollection *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIMiniGameCollection *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


UIMiniGameCollection * UISingletonDialog<UIMiniGameCollection>::ShowDialog(void)

{
  UIMiniGameCollection *pUVar1;
  char cVar2;
  UIMiniGameCollection *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIMiniGameCollection *)0x0) {
    pUVar3 = ::operator_new(0x160);
    UIMiniGameCollection::UIMiniGameCollection(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIMiniGameCollection *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIMiniGameCollection *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


UIMiniGameCollection * UISingletonDialog<UIMiniGameCollection>::ShowDialog(void)

{
  UIMiniGameCollection *pUVar1;
  char cVar2;
  UIMiniGameCollection *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIMiniGameCollection *)0x0) {
    pUVar3 = ::operator_new(0x160);
    UIMiniGameCollection::UIMiniGameCollection(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIMiniGameCollection *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIMiniGameCollection *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIWishingPool>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIWishingPool>::UISingletonDialog(UISingletonDialog<UIWishingPool> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06627bf0;
  *(undefined **)(this + 0xd8) = &DAT_06627f40;
  return;
}


/* UISingletonDialog<UIDaveKitchen>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIDaveKitchen>::UISingletonDialog(UISingletonDialog<UIDaveKitchen> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06627f90;
  *(undefined **)(this + 0xd8) = &DAT_066282e0;
  return;
}


/* UISingletonDialog<UIWishingPool>::ShowDialog() */

UIWishingPool * UISingletonDialog<UIWishingPool>::ShowDialog(void)

{
  UIWishingPool *pUVar1;
  char cVar2;
  UIWishingPool *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIWishingPool *)0x0) {
    pUVar3 = ::operator_new(0x1f8);
    memset(pUVar3,0,0x1f8);
    UIWishingPool::UIWishingPool(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIWishingPool *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIWishingPool *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


UIWishingPool * UISingletonDialog<UIWishingPool>::ShowDialog(void)

{
  UIWishingPool *pUVar1;
  char cVar2;
  UIWishingPool *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIWishingPool *)0x0) {
    pUVar3 = ::operator_new(0x1f8);
    memset(pUVar3,0,0x1f8);
    UIWishingPool::UIWishingPool(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIWishingPool *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIWishingPool *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


UIWishingPool * UISingletonDialog<UIWishingPool>::ShowDialog(void)

{
  UIWishingPool *pUVar1;
  char cVar2;
  UIWishingPool *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIWishingPool *)0x0) {
    pUVar3 = ::operator_new(0x1f8);
    memset(pUVar3,0,0x1f8);
    UIWishingPool::UIWishingPool(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIWishingPool *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIWishingPool *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIDaveKitchen>::ShowDialog() */

UIDaveKitchen * UISingletonDialog<UIDaveKitchen>::ShowDialog(void)

{
  UIDaveKitchen *pUVar1;
  char cVar2;
  UIDaveKitchen *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIDaveKitchen *)0x0) {
    pUVar3 = ::operator_new(0x1f0);
    memset(pUVar3,0,0x1f0);
    UIDaveKitchen::UIDaveKitchen(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIDaveKitchen *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIDaveKitchen *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


UIDaveKitchen * UISingletonDialog<UIDaveKitchen>::ShowDialog(void)

{
  UIDaveKitchen *pUVar1;
  char cVar2;
  UIDaveKitchen *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIDaveKitchen *)0x0) {
    pUVar3 = ::operator_new(0x1f0);
    memset(pUVar3,0,0x1f0);
    UIDaveKitchen::UIDaveKitchen(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIDaveKitchen *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIDaveKitchen *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


UIDaveKitchen * UISingletonDialog<UIDaveKitchen>::ShowDialog(void)

{
  UIDaveKitchen *pUVar1;
  char cVar2;
  UIDaveKitchen *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIDaveKitchen *)0x0) {
    pUVar3 = ::operator_new(0x1f0);
    memset(pUVar3,0,0x1f0);
    UIDaveKitchen::UIDaveKitchen(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIDaveKitchen *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIDaveKitchen *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UINewPlayerSignPreview>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewPlayerSignPreview>::~UISingletonDialog
          (UISingletonDialog<UINewPlayerSignPreview> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06631b50;
  *(undefined ***)this = &PTR_GetClass_06631800;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UINewPlayerSignPreview> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UINewPlayerSignPreview>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewPlayerSignPreview>::~UISingletonDialog
          (UISingletonDialog<UINewPlayerSignPreview> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UINewPlayerSignPreview>::CloseDialog() */

void UISingletonDialog<UINewPlayerSignPreview>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UINoviceSevenDaysCollection>::ShowDialog() */

UINoviceSevenDaysCollection * UISingletonDialog<UINoviceSevenDaysCollection>::ShowDialog(void)

{
  UINoviceSevenDaysCollection *pUVar1;
  char cVar2;
  UINoviceSevenDaysCollection *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UINoviceSevenDaysCollection *)0x0) {
    pUVar3 = ::operator_new(0x160);
    UINoviceSevenDaysCollection::UINoviceSevenDaysCollection(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UINoviceSevenDaysCollection *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UINoviceSevenDaysCollection *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIPennyClassroom>::ShowDialog() */

UIPennyClassroom * UISingletonDialog<UIPennyClassroom>::ShowDialog(void)

{
  UIPennyClassroom *pUVar1;
  char cVar2;
  UIPennyClassroom *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIPennyClassroom *)0x0) {
    pUVar3 = ::operator_new(0x218);
    UIPennyClassroom::UIPennyClassroom(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIPennyClassroom *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIPennyClassroom *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UINewPlayerSignPreview>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewPlayerSignPreview>::UISingletonDialog
          (UISingletonDialog<UINewPlayerSignPreview> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06631800;
  *(undefined **)(this + 0xd8) = &DAT_06631b50;
  return;
}


/* UISingletonDialog<UINewPlayerSignPreview>::ShowDialog() */

UINewPlayerSignPreview * UISingletonDialog<UINewPlayerSignPreview>::ShowDialog(void)

{
  UINewPlayerSignPreview *pUVar1;
  char cVar2;
  UINewPlayerSignPreview *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UINewPlayerSignPreview *)0x0) {
    pUVar3 = ::operator_new(0x198);
    memset(pUVar3,0,0x198);
    UINewPlayerSignPreview::UINewPlayerSignPreview(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UINewPlayerSignPreview *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UINewPlayerSignPreview *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIWishingPoolSelect>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIWishingPoolSelect>::~UISingletonDialog
          (UISingletonDialog<UIWishingPoolSelect> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06634390;
  *(undefined ***)this = &PTR_GetClass_06634040;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIWishingPoolSelect> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIWishingPoolSelect>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIWishingPoolSelect>::~UISingletonDialog
          (UISingletonDialog<UIWishingPoolSelect> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIWishingPoolSelect>::CloseDialog() */

void UISingletonDialog<UIWishingPoolSelect>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIWishingPool>::GetSingletonPtr() */

undefined8 UISingletonDialog<UIWishingPool>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UIWishingPool>::CloseDialog() */

void UISingletonDialog<UIWishingPool>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIWishingPoolSelect>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIWishingPoolSelect>::UISingletonDialog
          (UISingletonDialog<UIWishingPoolSelect> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06634040;
  *(undefined **)(this + 0xd8) = &DAT_06634390;
  return;
}


/* UISingletonDialog<UIWishingPoolSelect>::ShowDialog() */

UIWishingPoolSelect * UISingletonDialog<UIWishingPoolSelect>::ShowDialog(void)

{
  UIWishingPoolSelect *pUVar1;
  char cVar2;
  UIWishingPoolSelect *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIWishingPoolSelect *)0x0) {
    pUVar3 = ::operator_new(0x158);
    memset(pUVar3,0,0x158);
    UIWishingPoolSelect::UIWishingPoolSelect(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIWishingPoolSelect *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIWishingPoolSelect *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIPlantCultivate>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPlantCultivate>::~UISingletonDialog(UISingletonDialog<UIPlantCultivate> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_0663ecb0;
  *(undefined ***)this = &PTR_GetClass_0663e960;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIPlantCultivate> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIPlantCultivate>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPlantCultivate>::~UISingletonDialog(UISingletonDialog<UIPlantCultivate> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIPlantCultivateSelect>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPlantCultivateSelect>::~UISingletonDialog
          (UISingletonDialog<UIPlantCultivateSelect> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_0663e910;
  *(undefined ***)this = &PTR_GetClass_0663e5c0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIPlantCultivateSelect> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIPlantCultivateSelect>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPlantCultivateSelect>::~UISingletonDialog
          (UISingletonDialog<UIPlantCultivateSelect> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIPlantCultivateSelect>::CloseDialog() */

void UISingletonDialog<UIPlantCultivateSelect>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIPlantCultivate>::GetSingletonPtr() */

undefined8 UISingletonDialog<UIPlantCultivate>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UIPlantCultivate>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPlantCultivate>::UISingletonDialog(UISingletonDialog<UIPlantCultivate> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_0663e960;
  *(undefined **)(this + 0xd8) = &DAT_0663ecb0;
  return;
}


/* UISingletonDialog<UIPlantCultivate>::CloseDialog() */

void UISingletonDialog<UIPlantCultivate>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIPlantCultivateSelect>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPlantCultivateSelect>::UISingletonDialog
          (UISingletonDialog<UIPlantCultivateSelect> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_0663e5c0;
  *(undefined **)(this + 0xd8) = &DAT_0663e910;
  return;
}


/* UISingletonDialog<UIPlantCultivate>::ShowDialog() */

UIPlantCultivate * UISingletonDialog<UIPlantCultivate>::ShowDialog(void)

{
  UIPlantCultivate *pUVar1;
  char cVar2;
  UIPlantCultivate *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIPlantCultivate *)0x0) {
    pUVar3 = ::operator_new(0x148);
    UIPlantCultivate::UIPlantCultivate(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIPlantCultivate *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIPlantCultivate *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIPlantCultivateSelect>::ShowDialog() */

UIPlantCultivateSelect * UISingletonDialog<UIPlantCultivateSelect>::ShowDialog(void)

{
  UIPlantCultivateSelect *pUVar1;
  char cVar2;
  UIPlantCultivateSelect *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIPlantCultivateSelect *)0x0) {
    pUVar3 = ::operator_new(0x158);
    memset(pUVar3,0,0x158);
    UIPlantCultivateSelect::UIPlantCultivateSelect(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIPlantCultivateSelect *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIPlantCultivateSelect *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIUpdateNews>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIUpdateNews>::~UISingletonDialog(UISingletonDialog<UIUpdateNews> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06640530;
  *(undefined ***)this = &PTR_GetClass_066401e0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIUpdateNews> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIUpdateNews>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIUpdateNews>::~UISingletonDialog(UISingletonDialog<UIUpdateNews> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIGiftFoReturn>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIGiftFoReturn>::~UISingletonDialog(UISingletonDialog<UIGiftFoReturn> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06640190;
  *(undefined ***)this = &PTR_GetClass_0663fe40;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIGiftFoReturn> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIGiftFoReturn>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIGiftFoReturn>::~UISingletonDialog(UISingletonDialog<UIGiftFoReturn> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIUpdateNews>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIUpdateNews>::UISingletonDialog(UISingletonDialog<UIUpdateNews> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066401e0;
  *(undefined **)(this + 0xd8) = &DAT_06640530;
  return;
}


/* UISingletonDialog<UIGiftFoReturn>::GetSingletonPtr() */

undefined8 UISingletonDialog<UIGiftFoReturn>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UICommonItemSelect>::GetSingletonPtr() */

undefined8 UISingletonDialog<UICommonItemSelect>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UICommonItemSelect>::CloseDialog() */

void UISingletonDialog<UICommonItemSelect>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UICommonItemSelect>::ShowDialog() */

UICommonItemSelect * UISingletonDialog<UICommonItemSelect>::ShowDialog(void)

{
  UICommonItemSelect *pUVar1;
  char cVar2;
  UICommonItemSelect *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UICommonItemSelect *)0x0) {
    pUVar3 = ::operator_new(0x198);
    UICommonItemSelect::UICommonItemSelect(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UICommonItemSelect *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UICommonItemSelect *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIGiftFoReturn>::CloseDialog() */

void UISingletonDialog<UIGiftFoReturn>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIUpdateNews>::ShowDialog() */

UIUpdateNews * UISingletonDialog<UIUpdateNews>::ShowDialog(void)

{
  UIUpdateNews *pUVar1;
  char cVar2;
  UIUpdateNews *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIUpdateNews *)0x0) {
    pUVar3 = ::operator_new(0x158);
    UIUpdateNews::UIUpdateNews(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIUpdateNews *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIUpdateNews *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIUpdateNews>::CloseDialog() */

void UISingletonDialog<UIUpdateNews>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIDaveKitchen>::GetSingletonPtr() */

undefined8 UISingletonDialog<UIDaveKitchen>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UIDaveKitchen>::CloseDialog() */

void UISingletonDialog<UIDaveKitchen>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIDragonTreasure>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIDragonTreasure>::~UISingletonDialog(UISingletonDialog<UIDragonTreasure> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066432f0;
  *(undefined ***)this = &PTR_GetClass_06642fa0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIDragonTreasure> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIDragonTreasure>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIDragonTreasure>::~UISingletonDialog(UISingletonDialog<UIDragonTreasure> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIDragonTreasureSelect>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIDragonTreasureSelect>::~UISingletonDialog
          (UISingletonDialog<UIDragonTreasureSelect> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06643690;
  *(undefined ***)this = &PTR_GetClass_06643340;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIDragonTreasureSelect> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIDragonTreasureSelect>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIDragonTreasureSelect>::~UISingletonDialog
          (UISingletonDialog<UIDragonTreasureSelect> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIDragonTreasure>::GetSingletonPtr() */

undefined8 UISingletonDialog<UIDragonTreasure>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UIDragonTreasure>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIDragonTreasure>::UISingletonDialog(UISingletonDialog<UIDragonTreasure> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06642fa0;
  *(undefined **)(this + 0xd8) = &DAT_066432f0;
  return;
}


/* UISingletonDialog<UIDragonTreasure>::CloseDialog() */

void UISingletonDialog<UIDragonTreasure>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIDragonTreasureSelect>::CloseDialog() */

void UISingletonDialog<UIDragonTreasureSelect>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIDragonTreasureSelect>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIDragonTreasureSelect>::UISingletonDialog
          (UISingletonDialog<UIDragonTreasureSelect> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06643340;
  *(undefined **)(this + 0xd8) = &DAT_06643690;
  return;
}


/* UISingletonDialog<UIDragonTreasureSelect>::ShowDialog() */

UIDragonTreasureSelect * UISingletonDialog<UIDragonTreasureSelect>::ShowDialog(void)

{
  UIDragonTreasureSelect *pUVar1;
  char cVar2;
  UIDragonTreasureSelect *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIDragonTreasureSelect *)0x0) {
    pUVar3 = ::operator_new(0x158);
    memset(pUVar3,0,0x158);
    UIDragonTreasureSelect::UIDragonTreasureSelect(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIDragonTreasureSelect *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIDragonTreasureSelect *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UITreasurePavilion>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UITreasurePavilion>::~UISingletonDialog
          (UISingletonDialog<UITreasurePavilion> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06645140;
  *(undefined ***)this = &PTR_GetClass_06644df0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UITreasurePavilion> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UITreasurePavilion>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UITreasurePavilion>::~UISingletonDialog
          (UISingletonDialog<UITreasurePavilion> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UITreasurePavilionBundle>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UITreasurePavilionBundle>::~UISingletonDialog
          (UISingletonDialog<UITreasurePavilionBundle> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066454e0;
  *(undefined ***)this = &PTR_GetClass_06645190;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UITreasurePavilionBundle> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UITreasurePavilionBundle>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UITreasurePavilionBundle>::~UISingletonDialog
          (UISingletonDialog<UITreasurePavilionBundle> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UITreasurePavilion>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UITreasurePavilion>::UISingletonDialog
          (UISingletonDialog<UITreasurePavilion> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06644df0;
  *(undefined **)(this + 0xd8) = &DAT_06645140;
  return;
}


/* UISingletonDialog<UITreasurePavilion>::CloseDialog() */

void UISingletonDialog<UITreasurePavilion>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UITreasurePavilionBundle>::CloseDialog() */

void UISingletonDialog<UITreasurePavilionBundle>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UITreasurePavilion>::GetSingletonPtr() */

undefined8 UISingletonDialog<UITreasurePavilion>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UITreasurePavilionBundle>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UITreasurePavilionBundle>::UISingletonDialog
          (UISingletonDialog<UITreasurePavilionBundle> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06645190;
  *(undefined **)(this + 0xd8) = &DAT_066454e0;
  return;
}


/* UISingletonDialog<UITreasurePavilionBundle>::ShowDialog() */

UITreasurePavilionBundle * UISingletonDialog<UITreasurePavilionBundle>::ShowDialog(void)

{
  UITreasurePavilionBundle *pUVar1;
  char cVar2;
  UITreasurePavilionBundle *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UITreasurePavilionBundle *)0x0) {
    pUVar3 = ::operator_new(0x140);
    memset(pUVar3,0,0x140);
    UITreasurePavilionBundle::UITreasurePavilionBundle(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UITreasurePavilionBundle *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UITreasurePavilionBundle *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<NewPVPResultScreen>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<NewPVPResultScreen>::~UISingletonDialog
          (UISingletonDialog<NewPVPResultScreen> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06646a90;
  *(undefined ***)this = &PTR_GetClass_06646740;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<NewPVPResultScreen> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<NewPVPResultScreen>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<NewPVPResultScreen>::~UISingletonDialog
          (UISingletonDialog<NewPVPResultScreen> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<NewPVPResultScreen>::CloseDialog() */

void UISingletonDialog<NewPVPResultScreen>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<NewPVPResultScreen>::UISingletonDialog() */

void __thiscall
UISingletonDialog<NewPVPResultScreen>::UISingletonDialog
          (UISingletonDialog<NewPVPResultScreen> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06646740;
  *(undefined **)(this + 0xd8) = &DAT_06646a90;
  return;
}


/* UISingletonDialog<NewPVPResultScreen>::ShowDialog() */

NewPVPResultScreen * UISingletonDialog<NewPVPResultScreen>::ShowDialog(void)

{
  NewPVPResultScreen *pNVar1;
  char cVar2;
  NewPVPResultScreen *pNVar3;
  
  pNVar1 = m_pInstance;
  pNVar3 = pNVar1;
  if (m_pInstance == (NewPVPResultScreen *)0x0) {
    pNVar3 = ::operator_new(400);
    NewPVPResultScreen::NewPVPResultScreen(pNVar3);
    m_pInstance = pNVar3;
    cVar2 = (**(code **)(*(long *)pNVar3 + 0x310))(pNVar3);
    pNVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (NewPVPResultScreen *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (NewPVPResultScreen *)0x0;
      pNVar3 = pNVar1;
    }
  }
  return pNVar3;
}


/* UISingletonDialog<UINewPVPSeedChooser>::ShowDialog() */

UINewPVPSeedChooser * UISingletonDialog<UINewPVPSeedChooser>::ShowDialog(void)

{
  UINewPVPSeedChooser *pUVar1;
  char cVar2;
  UINewPVPSeedChooser *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UINewPVPSeedChooser *)0x0) {
    pUVar3 = ::operator_new(600);
    UINewPVPSeedChooser::UINewPVPSeedChooser(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UINewPVPSeedChooser *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UINewPVPSeedChooser *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UINewPVPSeedChooser>::GetSingletonPtr() */

undefined8 UISingletonDialog<UINewPVPSeedChooser>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UINewPVPSeedChooser>::CloseDialog() */

void UISingletonDialog<UINewPVPSeedChooser>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UINewPVPDuan>::ShowDialog() */

UINewPVPDuan * UISingletonDialog<UINewPVPDuan>::ShowDialog(void)

{
  UINewPVPDuan *pUVar1;
  char cVar2;
  UINewPVPDuan *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UINewPVPDuan *)0x0) {
    pUVar3 = ::operator_new(0x198);
    UINewPVPDuan::UINewPVPDuan(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UINewPVPDuan *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UINewPVPDuan *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UINewPVPBattlePass>::GetSingletonPtr() */

undefined8 UISingletonDialog<UINewPVPBattlePass>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UINewPVPSeedChooser>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewPVPSeedChooser>::~UISingletonDialog
          (UISingletonDialog<UINewPVPSeedChooser> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066501d0;
  *(undefined ***)this = &PTR_GetClass_0664fe80;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UINewPVPSeedChooser> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UINewPVPSeedChooser>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewPVPSeedChooser>::~UISingletonDialog
          (UISingletonDialog<UINewPVPSeedChooser> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UINewPVPDuan>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewPVPDuan>::~UISingletonDialog(UISingletonDialog<UINewPVPDuan> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06650570;
  *(undefined ***)this = &PTR_GetClass_06650220;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UINewPVPDuan> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UINewPVPDuan>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewPVPDuan>::~UISingletonDialog(UISingletonDialog<UINewPVPDuan> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UINewPVPSeedChooser>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewPVPSeedChooser>::UISingletonDialog
          (UISingletonDialog<UINewPVPSeedChooser> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_0664fe80;
  *(undefined **)(this + 0xd8) = &DAT_066501d0;
  return;
}


/* UISingletonDialog<UINewPVPDuan>::GetSingletonPtr() */

undefined8 UISingletonDialog<UINewPVPDuan>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UINewPVPDuan>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewPVPDuan>::UISingletonDialog(UISingletonDialog<UINewPVPDuan> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06650220;
  *(undefined **)(this + 0xd8) = &DAT_06650570;
  return;
}


/* UISingletonDialog<UINewPVPDuan>::CloseDialog() */

void UISingletonDialog<UINewPVPDuan>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UINewPVPBattlePass>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewPVPBattlePass>::~UISingletonDialog
          (UISingletonDialog<UINewPVPBattlePass> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066538e0;
  *(undefined ***)this = &PTR_GetClass_06653590;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UINewPVPBattlePass> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UINewPVPBattlePass>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewPVPBattlePass>::~UISingletonDialog
          (UISingletonDialog<UINewPVPBattlePass> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UINewPVPBattlePassBundle>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewPVPBattlePassBundle>::~UISingletonDialog
          (UISingletonDialog<UINewPVPBattlePassBundle> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06652e00;
  *(undefined ***)this = &PTR_GetClass_06652ab0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UINewPVPBattlePassBundle> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UINewPVPBattlePassBundle>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewPVPBattlePassBundle>::~UISingletonDialog
          (UISingletonDialog<UINewPVPBattlePassBundle> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UINewPVPBattlePassPrivilege>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewPVPBattlePassPrivilege>::~UISingletonDialog
          (UISingletonDialog<UINewPVPBattlePassPrivilege> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066531a0;
  *(undefined ***)this = &PTR_GetClass_06652e50;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UINewPVPBattlePassPrivilege> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UINewPVPBattlePassPrivilege>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewPVPBattlePassPrivilege>::~UISingletonDialog
          (UISingletonDialog<UINewPVPBattlePassPrivilege> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UINewPVPBattlePassTurnPagesList>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewPVPBattlePassTurnPagesList>::~UISingletonDialog
          (UISingletonDialog<UINewPVPBattlePassTurnPagesList> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06654020;
  *(undefined ***)this = &PTR_GetClass_06653cd0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UINewPVPBattlePassTurnPagesList> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UINewPVPBattlePassTurnPagesList>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewPVPBattlePassTurnPagesList>::~UISingletonDialog
          (UISingletonDialog<UINewPVPBattlePassTurnPagesList> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UINewPVPBattlePassPrivilegeRewardDisplay>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewPVPBattlePassPrivilegeRewardDisplay>::~UISingletonDialog
          (UISingletonDialog<UINewPVPBattlePassPrivilegeRewardDisplay> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06653540;
  *(undefined ***)this = &PTR_GetClass_066531f0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UINewPVPBattlePassPrivilegeRewardDisplay> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UINewPVPBattlePassPrivilegeRewardDisplay>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewPVPBattlePassPrivilegeRewardDisplay>::~UISingletonDialog
          (UISingletonDialog<UINewPVPBattlePassPrivilegeRewardDisplay> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<NewPVPBattlePassLotteryPanel>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<NewPVPBattlePassLotteryPanel>::~UISingletonDialog
          (UISingletonDialog<NewPVPBattlePassLotteryPanel> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06653c80;
  *(undefined ***)this = &PTR_GetClass_06653930;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<NewPVPBattlePassLotteryPanel> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<NewPVPBattlePassLotteryPanel>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<NewPVPBattlePassLotteryPanel>::~UISingletonDialog
          (UISingletonDialog<NewPVPBattlePassLotteryPanel> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<EmptyDialog>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<EmptyDialog>::~UISingletonDialog(UISingletonDialog<EmptyDialog> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06652320;
  *(undefined ***)this = &PTR_GetClass_06651fd0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<EmptyDialog> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<EmptyDialog>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<EmptyDialog>::~UISingletonDialog(UISingletonDialog<EmptyDialog> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UINewPVPBattlePassIntroduction>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewPVPBattlePassIntroduction>::~UISingletonDialog
          (UISingletonDialog<UINewPVPBattlePassIntroduction> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06652a60;
  *(undefined ***)this = &PTR_GetClass_06652710;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UINewPVPBattlePassIntroduction> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UINewPVPBattlePassIntroduction>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewPVPBattlePassIntroduction>::~UISingletonDialog
          (UISingletonDialog<UINewPVPBattlePassIntroduction> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UINewPVPBattlePassIntroduction>::CloseDialog() */

void UISingletonDialog<UINewPVPBattlePassIntroduction>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UINewPVPBattlePassBundle>::CloseDialog() */

void UISingletonDialog<UINewPVPBattlePassBundle>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UINewPVPBattlePassPrivilege>::CloseDialog() */

void UISingletonDialog<UINewPVPBattlePassPrivilege>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UINewPVPBattlePassPrivilegeRewardDisplay>::CloseDialog() */

void UISingletonDialog<UINewPVPBattlePassPrivilegeRewardDisplay>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UINewPVPBattlePass>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewPVPBattlePass>::UISingletonDialog
          (UISingletonDialog<UINewPVPBattlePass> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06653590;
  *(undefined **)(this + 0xd8) = &DAT_066538e0;
  return;
}


/* UISingletonDialog<UINewPVPBattlePass>::CloseDialog() */

void UISingletonDialog<UINewPVPBattlePass>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UINewPVPBattlePassPrivilege>::GetSingletonPtr() */

undefined8 UISingletonDialog<UINewPVPBattlePassPrivilege>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<NewPVPBattlePassLotteryPanel>::UISingletonDialog() */

void __thiscall
UISingletonDialog<NewPVPBattlePassLotteryPanel>::UISingletonDialog
          (UISingletonDialog<NewPVPBattlePassLotteryPanel> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06653930;
  *(undefined **)(this + 0xd8) = &DAT_06653c80;
  return;
}


/* UISingletonDialog<EmptyDialog>::CloseDialog() */

void UISingletonDialog<EmptyDialog>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UINewPVPBattlePassTurnPagesList>::CloseDialog() */

void UISingletonDialog<UINewPVPBattlePassTurnPagesList>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UINewPVPBattlePassBundle>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewPVPBattlePassBundle>::UISingletonDialog
          (UISingletonDialog<UINewPVPBattlePassBundle> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06652ab0;
  *(undefined **)(this + 0xd8) = &DAT_06652e00;
  return;
}


/* UISingletonDialog<UINewPVPBattlePassBundle>::ShowDialog() */

UINewPVPBattlePassBundle * UISingletonDialog<UINewPVPBattlePassBundle>::ShowDialog(void)

{
  UINewPVPBattlePassBundle *pUVar1;
  char cVar2;
  UINewPVPBattlePassBundle *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UINewPVPBattlePassBundle *)0x0) {
    pUVar3 = ::operator_new(0x140);
    memset(pUVar3,0,0x140);
    UINewPVPBattlePassBundle::UINewPVPBattlePassBundle(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UINewPVPBattlePassBundle *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UINewPVPBattlePassBundle *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UINewPVPBattlePassPrivilege>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewPVPBattlePassPrivilege>::UISingletonDialog
          (UISingletonDialog<UINewPVPBattlePassPrivilege> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06652e50;
  *(undefined **)(this + 0xd8) = &DAT_066531a0;
  return;
}


/* UISingletonDialog<UINewPVPBattlePassPrivilege>::ShowDialog() */

UINewPVPBattlePassPrivilege * UISingletonDialog<UINewPVPBattlePassPrivilege>::ShowDialog(void)

{
  UINewPVPBattlePassPrivilege *pUVar1;
  char cVar2;
  UINewPVPBattlePassPrivilege *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UINewPVPBattlePassPrivilege *)0x0) {
    pUVar3 = ::operator_new(0x138);
    memset(pUVar3,0,0x138);
    UINewPVPBattlePassPrivilege::UINewPVPBattlePassPrivilege(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UINewPVPBattlePassPrivilege *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UINewPVPBattlePassPrivilege *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UINewPVPBattlePassTurnPagesList>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewPVPBattlePassTurnPagesList>::UISingletonDialog
          (UISingletonDialog<UINewPVPBattlePassTurnPagesList> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06653cd0;
  *(undefined **)(this + 0xd8) = &DAT_06654020;
  return;
}


/* UISingletonDialog<UINewPVPBattlePassPrivilegeRewardDisplay>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewPVPBattlePassPrivilegeRewardDisplay>::UISingletonDialog
          (UISingletonDialog<UINewPVPBattlePassPrivilegeRewardDisplay> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066531f0;
  *(undefined **)(this + 0xd8) = &DAT_06653540;
  return;
}


/* UISingletonDialog<EmptyDialog>::UISingletonDialog() */

void __thiscall
UISingletonDialog<EmptyDialog>::UISingletonDialog(UISingletonDialog<EmptyDialog> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06651fd0;
  *(undefined **)(this + 0xd8) = &DAT_06652320;
  return;
}


/* UISingletonDialog<EmptyDialog>::ShowDialog() */

EmptyDialog * UISingletonDialog<EmptyDialog>::ShowDialog(void)

{
  EmptyDialog *pEVar1;
  char cVar2;
  EmptyDialog *pEVar3;
  
  pEVar1 = m_pInstance;
  pEVar3 = pEVar1;
  if (m_pInstance == (EmptyDialog *)0x0) {
    pEVar3 = ::operator_new(0x138);
    memset(pEVar3,0,0x138);
    EmptyDialog::EmptyDialog(pEVar3);
    m_pInstance = pEVar3;
    cVar2 = (**(code **)(*(long *)pEVar3 + 0x310))(pEVar3);
    pEVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (EmptyDialog *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (EmptyDialog *)0x0;
      pEVar3 = pEVar1;
    }
  }
  return pEVar3;
}


/* UISingletonDialog<UINewPVPBattlePassPrivilegeRewardDisplay>::ShowDialog() */

UINewPVPBattlePassPrivilegeRewardDisplay *
UISingletonDialog<UINewPVPBattlePassPrivilegeRewardDisplay>::ShowDialog(void)

{
  UINewPVPBattlePassPrivilegeRewardDisplay *pUVar1;
  char cVar2;
  UINewPVPBattlePassPrivilegeRewardDisplay *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UINewPVPBattlePassPrivilegeRewardDisplay *)0x0) {
    pUVar3 = ::operator_new(0x150);
    memset(pUVar3,0,0x150);
    UINewPVPBattlePassPrivilegeRewardDisplay::UINewPVPBattlePassPrivilegeRewardDisplay(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UINewPVPBattlePassPrivilegeRewardDisplay *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UINewPVPBattlePassPrivilegeRewardDisplay *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<NewPVPBattlePassLotteryPanel>::ShowDialog() */

NewPVPBattlePassLotteryPanel * UISingletonDialog<NewPVPBattlePassLotteryPanel>::ShowDialog(void)

{
  NewPVPBattlePassLotteryPanel *pNVar1;
  char cVar2;
  NewPVPBattlePassLotteryPanel *pNVar3;
  
  pNVar1 = m_pInstance;
  pNVar3 = pNVar1;
  if (m_pInstance == (NewPVPBattlePassLotteryPanel *)0x0) {
    pNVar3 = ::operator_new(0x1c8);
    NewPVPBattlePassLotteryPanel::NewPVPBattlePassLotteryPanel(pNVar3);
    m_pInstance = pNVar3;
    cVar2 = (**(code **)(*(long *)pNVar3 + 0x310))(pNVar3);
    pNVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (NewPVPBattlePassLotteryPanel *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (NewPVPBattlePassLotteryPanel *)0x0;
      pNVar3 = pNVar1;
    }
  }
  return pNVar3;
}


/* UISingletonDialog<UINewPVPBattlePass>::ShowDialog() */

UINewPVPBattlePass * UISingletonDialog<UINewPVPBattlePass>::ShowDialog(void)

{
  UINewPVPBattlePass *pUVar1;
  char cVar2;
  UINewPVPBattlePass *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UINewPVPBattlePass *)0x0) {
    pUVar3 = ::operator_new(0x3b8);
    UINewPVPBattlePass::UINewPVPBattlePass(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UINewPVPBattlePass *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UINewPVPBattlePass *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UINewPVPBattlePassTurnPagesList>::ShowDialog() */

UINewPVPBattlePassTurnPagesList *
UISingletonDialog<UINewPVPBattlePassTurnPagesList>::ShowDialog(void)

{
  UINewPVPBattlePassTurnPagesList *pUVar1;
  char cVar2;
  UINewPVPBattlePassTurnPagesList *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UINewPVPBattlePassTurnPagesList *)0x0) {
    pUVar3 = ::operator_new(0x160);
    memset(pUVar3,0,0x160);
    UINewPVPBattlePassTurnPagesList::UINewPVPBattlePassTurnPagesList(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UINewPVPBattlePassTurnPagesList *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UINewPVPBattlePassTurnPagesList *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UINewPVPShop>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewPVPShop>::~UISingletonDialog(UISingletonDialog<UINewPVPShop> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066574b0;
  *(undefined ***)this = &PTR_GetClass_06657160;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UINewPVPShop> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UINewPVPShop>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewPVPShop>::~UISingletonDialog(UISingletonDialog<UINewPVPShop> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UINewPVPShop>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewPVPShop>::UISingletonDialog(UISingletonDialog<UINewPVPShop> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06657160;
  *(undefined **)(this + 0xd8) = &DAT_066574b0;
  return;
}


/* UISingletonDialog<UINewPVPShop>::CloseDialog() */

void UISingletonDialog<UINewPVPShop>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UINewPVPShop>::GetSingletonPtr() */

undefined8 UISingletonDialog<UINewPVPShop>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UINewPVPShop>::ShowDialog() */

UINewPVPShop * UISingletonDialog<UINewPVPShop>::ShowDialog(void)

{
  UINewPVPShop *pUVar1;
  char cVar2;
  UINewPVPShop *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UINewPVPShop *)0x0) {
    pUVar3 = ::operator_new(0x168);
    UINewPVPShop::UINewPVPShop(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UINewPVPShop *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UINewPVPShop *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UICardGameRewardScrollPanel>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UICardGameRewardScrollPanel>::~UISingletonDialog
          (UISingletonDialog<UICardGameRewardScrollPanel> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066592d0;
  *(undefined ***)this = &PTR_GetClass_06658f80;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UICardGameRewardScrollPanel> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UICardGameRewardScrollPanel>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UICardGameRewardScrollPanel>::~UISingletonDialog
          (UISingletonDialog<UICardGameRewardScrollPanel> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UICardGameReward>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UICardGameReward>::~UISingletonDialog(UISingletonDialog<UICardGameReward> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06659670;
  *(undefined ***)this = &PTR_GetClass_06659320;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UICardGameReward> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UICardGameReward>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UICardGameReward>::~UISingletonDialog(UISingletonDialog<UICardGameReward> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UICardGameRewardScrollPanel>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UICardGameRewardScrollPanel>::UISingletonDialog
          (UISingletonDialog<UICardGameRewardScrollPanel> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06658f80;
  *(undefined **)(this + 0xd8) = &DAT_066592d0;
  return;
}


/* UISingletonDialog<UICardGameReward>::GetSingletonPtr() */

undefined8 UISingletonDialog<UICardGameReward>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UICardGameReward>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UICardGameReward>::UISingletonDialog(UISingletonDialog<UICardGameReward> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06659320;
  *(undefined **)(this + 0xd8) = &DAT_06659670;
  return;
}


/* UISingletonDialog<UICardGameReward>::CloseDialog() */

void UISingletonDialog<UICardGameReward>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UICardGameReward>::ShowDialog() */

UICardGameReward * UISingletonDialog<UICardGameReward>::ShowDialog(void)

{
  UICardGameReward *pUVar1;
  char cVar2;
  UICardGameReward *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UICardGameReward *)0x0) {
    pUVar3 = ::operator_new(0x168);
    UICardGameReward::UICardGameReward(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UICardGameReward *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UICardGameReward *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UICardGameRewardScrollPanel>::ShowDialog() */

UICardGameRewardScrollPanel * UISingletonDialog<UICardGameRewardScrollPanel>::ShowDialog(void)

{
  UICardGameRewardScrollPanel *pUVar1;
  char cVar2;
  UICardGameRewardScrollPanel *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UICardGameRewardScrollPanel *)0x0) {
    pUVar3 = ::operator_new(0x160);
    UICardGameRewardScrollPanel::UICardGameRewardScrollPanel(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UICardGameRewardScrollPanel *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UICardGameRewardScrollPanel *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<CardGameSelectLevel>::ShowDialog() */

CardGameSelectLevel * UISingletonDialog<CardGameSelectLevel>::ShowDialog(void)

{
  CardGameSelectLevel *pCVar1;
  char cVar2;
  CardGameSelectLevel *pCVar3;
  
  pCVar1 = m_pInstance;
  pCVar3 = pCVar1;
  if (m_pInstance == (CardGameSelectLevel *)0x0) {
    pCVar3 = ::operator_new(0x1f0);
    CardGameSelectLevel::CardGameSelectLevel(pCVar3);
    m_pInstance = pCVar3;
    cVar2 = (**(code **)(*(long *)pCVar3 + 0x310))(pCVar3);
    pCVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (CardGameSelectLevel *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (CardGameSelectLevel *)0x0;
      pCVar3 = pCVar1;
    }
  }
  return pCVar3;
}


/* UISingletonDialog<UICustomLevelMainMenu>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UICustomLevelMainMenu>::~UISingletonDialog
          (UISingletonDialog<UICustomLevelMainMenu> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_0665f720;
  *(undefined ***)this = &PTR_GetClass_0665f3d0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UICustomLevelMainMenu> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UICustomLevelMainMenu>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UICustomLevelMainMenu>::~UISingletonDialog
          (UISingletonDialog<UICustomLevelMainMenu> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UICustomLevelChooseLevel>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UICustomLevelChooseLevel>::~UISingletonDialog
          (UISingletonDialog<UICustomLevelChooseLevel> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_0665fac0;
  *(undefined ***)this = &PTR_GetClass_0665f770;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UICustomLevelChooseLevel> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UICustomLevelChooseLevel>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UICustomLevelChooseLevel>::~UISingletonDialog
          (UISingletonDialog<UICustomLevelChooseLevel> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UICustomLevelLeaderBoard>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UICustomLevelLeaderBoard>::~UISingletonDialog
          (UISingletonDialog<UICustomLevelLeaderBoard> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_0665fe60;
  *(undefined ***)this = &PTR_GetClass_0665fb10;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UICustomLevelLeaderBoard> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UICustomLevelLeaderBoard>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UICustomLevelLeaderBoard>::~UISingletonDialog
          (UISingletonDialog<UICustomLevelLeaderBoard> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UICustomLevelLevelDetail>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UICustomLevelLevelDetail>::~UISingletonDialog
          (UISingletonDialog<UICustomLevelLevelDetail> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06660200;
  *(undefined ***)this = &PTR_GetClass_0665feb0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UICustomLevelLevelDetail> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UICustomLevelLevelDetail>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UICustomLevelLevelDetail>::~UISingletonDialog
          (UISingletonDialog<UICustomLevelLevelDetail> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UICustomLevelDetailModifyName>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UICustomLevelDetailModifyName>::~UISingletonDialog
          (UISingletonDialog<UICustomLevelDetailModifyName> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06660940;
  *(undefined ***)this = &PTR_GetClass_066605f0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UICustomLevelDetailModifyName> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UICustomLevelDetailModifyName>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UICustomLevelDetailModifyName>::~UISingletonDialog
          (UISingletonDialog<UICustomLevelDetailModifyName> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UICustomLevelCreateLevel>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UICustomLevelCreateLevel>::~UISingletonDialog
          (UISingletonDialog<UICustomLevelCreateLevel> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06660ce0;
  *(undefined ***)this = &PTR_GetClass_06660990;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UICustomLevelCreateLevel> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UICustomLevelCreateLevel>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UICustomLevelCreateLevel>::~UISingletonDialog
          (UISingletonDialog<UICustomLevelCreateLevel> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UICustomLevelFilter>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UICustomLevelFilter>::~UISingletonDialog
          (UISingletonDialog<UICustomLevelFilter> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06661080;
  *(undefined ***)this = &PTR_GetClass_06660d30;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UICustomLevelFilter> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UICustomLevelFilter>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UICustomLevelFilter>::~UISingletonDialog
          (UISingletonDialog<UICustomLevelFilter> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UICustomLevelCreateLevelChooseMode>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UICustomLevelCreateLevelChooseMode>::~UISingletonDialog
          (UISingletonDialog<UICustomLevelCreateLevelChooseMode> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06661420;
  *(undefined ***)this = &PTR_GetClass_066610d0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UICustomLevelCreateLevelChooseMode> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UICustomLevelCreateLevelChooseMode>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UICustomLevelCreateLevelChooseMode>::~UISingletonDialog
          (UISingletonDialog<UICustomLevelCreateLevelChooseMode> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UICustomLevelMotivate>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UICustomLevelMotivate>::~UISingletonDialog
          (UISingletonDialog<UICustomLevelMotivate> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_0665f380;
  *(undefined ***)this = &PTR_GetClass_0665f030;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UICustomLevelMotivate> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UICustomLevelMotivate>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UICustomLevelMotivate>::~UISingletonDialog
          (UISingletonDialog<UICustomLevelMotivate> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UICustomLevelLevelDetailShare>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UICustomLevelLevelDetailShare>::~UISingletonDialog
          (UISingletonDialog<UICustomLevelLevelDetailShare> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066605a0;
  *(undefined ***)this = &PTR_GetClass_06660250;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UICustomLevelLevelDetailShare> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UICustomLevelLevelDetailShare>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UICustomLevelLevelDetailShare>::~UISingletonDialog
          (UISingletonDialog<UICustomLevelLevelDetailShare> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIUnchartedEntry>::GetSingletonPtr() */

undefined8 UISingletonDialog<UIUnchartedEntry>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UIUnchartedEntry>::CloseDialog() */

void UISingletonDialog<UIUnchartedEntry>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<ActivityLevelsChoose>::GetSingletonPtr() */

undefined8 UISingletonDialog<ActivityLevelsChoose>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<ActivityLevelsChoose>::CloseDialog() */

void UISingletonDialog<ActivityLevelsChoose>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UICustomLevelMainMenu>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UICustomLevelMainMenu>::UISingletonDialog
          (UISingletonDialog<UICustomLevelMainMenu> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_0665f3d0;
  *(undefined **)(this + 0xd8) = &DAT_0665f720;
  return;
}


/* UISingletonDialog<UICustomLevelMainMenu>::CloseDialog() */

void UISingletonDialog<UICustomLevelMainMenu>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UICustomLevelSetting>::ShowDialog() */

UICustomLevelSetting * UISingletonDialog<UICustomLevelSetting>::ShowDialog(void)

{
  UICustomLevelSetting *pUVar1;
  char cVar2;
  UICustomLevelSetting *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UICustomLevelSetting *)0x0) {
    pUVar3 = ::operator_new(0x138);
    UICustomLevelSetting::UICustomLevelSetting(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UICustomLevelSetting *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UICustomLevelSetting *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<CustomLevelShop>::ShowDialog() */

CustomLevelShop * UISingletonDialog<CustomLevelShop>::ShowDialog(void)

{
  CustomLevelShop *pCVar1;
  char cVar2;
  CustomLevelShop *pCVar3;
  
  pCVar1 = m_pInstance;
  pCVar3 = pCVar1;
  if (m_pInstance == (CustomLevelShop *)0x0) {
    pCVar3 = ::operator_new(0x160);
    CustomLevelShop::CustomLevelShop(pCVar3);
    m_pInstance = pCVar3;
    cVar2 = (**(code **)(*(long *)pCVar3 + 0x310))(pCVar3);
    pCVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (CustomLevelShop *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (CustomLevelShop *)0x0;
      pCVar3 = pCVar1;
    }
  }
  return pCVar3;
}


/* UISingletonDialog<UICustomLevelCreateLevel>::GetSingletonPtr() */

undefined8 UISingletonDialog<UICustomLevelCreateLevel>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UICustomLevelChooseLevel>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UICustomLevelChooseLevel>::UISingletonDialog
          (UISingletonDialog<UICustomLevelChooseLevel> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_0665f770;
  *(undefined **)(this + 0xd8) = &DAT_0665fac0;
  return;
}


/* UISingletonDialog<UICustomLevelMainMenu>::GetSingletonPtr() */

undefined8 UISingletonDialog<UICustomLevelMainMenu>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UICustomLevelLeaderBoard>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UICustomLevelLeaderBoard>::UISingletonDialog
          (UISingletonDialog<UICustomLevelLeaderBoard> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_0665fb10;
  *(undefined **)(this + 0xd8) = &DAT_0665fe60;
  return;
}


/* UISingletonDialog<UICustomLevelLeaderBoard>::ShowDialog() */

UICustomLevelLeaderBoard * UISingletonDialog<UICustomLevelLeaderBoard>::ShowDialog(void)

{
  UICustomLevelLeaderBoard *pUVar1;
  char cVar2;
  UICustomLevelLeaderBoard *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UICustomLevelLeaderBoard *)0x0) {
    pUVar3 = ::operator_new(0x140);
    UICustomLevelLeaderBoard::UICustomLevelLeaderBoard(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UICustomLevelLeaderBoard *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UICustomLevelLeaderBoard *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UICustomLevelLeaderBoard>::CloseDialog() */

void UISingletonDialog<UICustomLevelLeaderBoard>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UICustomLevelLevelDetail>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UICustomLevelLevelDetail>::UISingletonDialog
          (UISingletonDialog<UICustomLevelLevelDetail> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_0665feb0;
  *(undefined **)(this + 0xd8) = &DAT_06660200;
  return;
}


/* UISingletonDialog<UICustomLevelLevelDetail>::CloseDialog() */

void UISingletonDialog<UICustomLevelLevelDetail>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UICustomLevelChooseLevel>::GetSingletonPtr() */

undefined8 UISingletonDialog<UICustomLevelChooseLevel>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UICustomLevelDetailModifyName>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UICustomLevelDetailModifyName>::UISingletonDialog
          (UISingletonDialog<UICustomLevelDetailModifyName> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066605f0;
  *(undefined **)(this + 0xd8) = &DAT_06660940;
  return;
}


/* UISingletonDialog<UICustomLevelDetailModifyName>::CloseDialog() */

void UISingletonDialog<UICustomLevelDetailModifyName>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UICustomLevelCreateLevel>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UICustomLevelCreateLevel>::UISingletonDialog
          (UISingletonDialog<UICustomLevelCreateLevel> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06660990;
  *(undefined **)(this + 0xd8) = &DAT_06660ce0;
  return;
}


/* UISingletonDialog<UICustomLevelFilter>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UICustomLevelFilter>::UISingletonDialog
          (UISingletonDialog<UICustomLevelFilter> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06660d30;
  *(undefined **)(this + 0xd8) = &DAT_06661080;
  return;
}


/* UISingletonDialog<UICustomLevelFilter>::CloseDialog() */

void UISingletonDialog<UICustomLevelFilter>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UICustomLevelCreateLevelChooseMode>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UICustomLevelCreateLevelChooseMode>::UISingletonDialog
          (UISingletonDialog<UICustomLevelCreateLevelChooseMode> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066610d0;
  *(undefined **)(this + 0xd8) = &DAT_06661420;
  return;
}


/* UISingletonDialog<UICustomLevelCreateLevelChooseMode>::CloseDialog() */

void UISingletonDialog<UICustomLevelCreateLevelChooseMode>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UICustomLevelMotivate>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UICustomLevelMotivate>::UISingletonDialog
          (UISingletonDialog<UICustomLevelMotivate> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_0665f030;
  *(undefined **)(this + 0xd8) = &DAT_0665f380;
  return;
}


/* UISingletonDialog<UICustomLevelMotivate>::ShowDialog() */

UICustomLevelMotivate * UISingletonDialog<UICustomLevelMotivate>::ShowDialog(void)

{
  UICustomLevelMotivate *pUVar1;
  char cVar2;
  UICustomLevelMotivate *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UICustomLevelMotivate *)0x0) {
    pUVar3 = ::operator_new(0x138);
    UICustomLevelMotivate::UICustomLevelMotivate(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UICustomLevelMotivate *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UICustomLevelMotivate *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UICustomLevelLevelDetailShare>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UICustomLevelLevelDetailShare>::UISingletonDialog
          (UISingletonDialog<UICustomLevelLevelDetailShare> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06660250;
  *(undefined **)(this + 0xd8) = &DAT_066605a0;
  return;
}


/* UISingletonDialog<UICustomLevelLevelDetailShare>::CloseDialog() */

void UISingletonDialog<UICustomLevelLevelDetailShare>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UICustomLevelDetailModifyName>::ShowDialog() */

UICustomLevelDetailModifyName * UISingletonDialog<UICustomLevelDetailModifyName>::ShowDialog(void)

{
  UICustomLevelDetailModifyName *pUVar1;
  char cVar2;
  UICustomLevelDetailModifyName *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UICustomLevelDetailModifyName *)0x0) {
    pUVar3 = ::operator_new(0x150);
    UICustomLevelDetailModifyName::UICustomLevelDetailModifyName(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UICustomLevelDetailModifyName *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UICustomLevelDetailModifyName *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UICustomLevelCreateLevel>::ShowDialog() */

UICustomLevelCreateLevel * UISingletonDialog<UICustomLevelCreateLevel>::ShowDialog(void)

{
  UICustomLevelCreateLevel *pUVar1;
  char cVar2;
  UICustomLevelCreateLevel *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UICustomLevelCreateLevel *)0x0) {
    pUVar3 = ::operator_new(0x170);
    UICustomLevelCreateLevel::UICustomLevelCreateLevel(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UICustomLevelCreateLevel *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UICustomLevelCreateLevel *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UICustomLevelFilter>::ShowDialog() */

UICustomLevelFilter * UISingletonDialog<UICustomLevelFilter>::ShowDialog(void)

{
  UICustomLevelFilter *pUVar1;
  char cVar2;
  UICustomLevelFilter *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UICustomLevelFilter *)0x0) {
    pUVar3 = ::operator_new(0x180);
    UICustomLevelFilter::UICustomLevelFilter(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UICustomLevelFilter *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UICustomLevelFilter *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UICustomLevelCreateLevelChooseMode>::ShowDialog() */

UICustomLevelCreateLevelChooseMode *
UISingletonDialog<UICustomLevelCreateLevelChooseMode>::ShowDialog(void)

{
  UICustomLevelCreateLevelChooseMode *pUVar1;
  char cVar2;
  UICustomLevelCreateLevelChooseMode *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UICustomLevelCreateLevelChooseMode *)0x0) {
    pUVar3 = ::operator_new(0x160);
    UICustomLevelCreateLevelChooseMode::UICustomLevelCreateLevelChooseMode(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UICustomLevelCreateLevelChooseMode *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UICustomLevelCreateLevelChooseMode *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UICustomLevelLevelDetail>::ShowDialog() */

UICustomLevelLevelDetail * UISingletonDialog<UICustomLevelLevelDetail>::ShowDialog(void)

{
  UICustomLevelLevelDetail *pUVar1;
  char cVar2;
  UICustomLevelLevelDetail *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UICustomLevelLevelDetail *)0x0) {
    pUVar3 = ::operator_new(0x2a0);
    UICustomLevelLevelDetail::UICustomLevelLevelDetail(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UICustomLevelLevelDetail *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UICustomLevelLevelDetail *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UICustomLevelLevelDetailShare>::ShowDialog() */

UICustomLevelLevelDetailShare * UISingletonDialog<UICustomLevelLevelDetailShare>::ShowDialog(void)

{
  UICustomLevelLevelDetailShare *pUVar1;
  char cVar2;
  UICustomLevelLevelDetailShare *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UICustomLevelLevelDetailShare *)0x0) {
    pUVar3 = ::operator_new(600);
    UICustomLevelLevelDetailShare::UICustomLevelLevelDetailShare(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UICustomLevelLevelDetailShare *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UICustomLevelLevelDetailShare *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UICustomLevelMainMenu>::ShowDialog() */

UICustomLevelMainMenu * UISingletonDialog<UICustomLevelMainMenu>::ShowDialog(void)

{
  UICustomLevelMainMenu *pUVar1;
  char cVar2;
  UICustomLevelMainMenu *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UICustomLevelMainMenu *)0x0) {
    pUVar3 = ::operator_new(0x1e0);
    UICustomLevelMainMenu::UICustomLevelMainMenu(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UICustomLevelMainMenu *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UICustomLevelMainMenu *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UICustomLevelChooseLevel>::ShowDialog() */

UICustomLevelChooseLevel * UISingletonDialog<UICustomLevelChooseLevel>::ShowDialog(void)

{
  UICustomLevelChooseLevel *pUVar1;
  char cVar2;
  UICustomLevelChooseLevel *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UICustomLevelChooseLevel *)0x0) {
    pUVar3 = ::operator_new(0x278);
    UICustomLevelChooseLevel::UICustomLevelChooseLevel(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UICustomLevelChooseLevel *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UICustomLevelChooseLevel *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIRiftRewardResult>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIRiftRewardResult>::~UISingletonDialog
          (UISingletonDialog<UIRiftRewardResult> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06679ff0;
  *(undefined ***)this = &PTR_GetClass_06679ca0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIRiftRewardResult> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIRiftRewardResult>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIRiftRewardResult>::~UISingletonDialog
          (UISingletonDialog<UIRiftRewardResult> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIRiftRewardResult>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIRiftRewardResult>::UISingletonDialog
          (UISingletonDialog<UIRiftRewardResult> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06679ca0;
  *(undefined **)(this + 0xd8) = &DAT_06679ff0;
  return;
}


/* UISingletonDialog<UIRiftRewardResult>::CloseDialog() */

void UISingletonDialog<UIRiftRewardResult>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIRiftRewardResult>::ShowDialog() */

UIRiftRewardResult * UISingletonDialog<UIRiftRewardResult>::ShowDialog(void)

{
  UIRiftRewardResult *pUVar1;
  char cVar2;
  UIRiftRewardResult *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIRiftRewardResult *)0x0) {
    pUVar3 = ::operator_new(0x150);
    UIRiftRewardResult::UIRiftRewardResult(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIRiftRewardResult *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIRiftRewardResult *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<PennyPerkBattleStatementChooseUI>::ShowDialog() */

PennyPerkBattleStatementChooseUI *
UISingletonDialog<PennyPerkBattleStatementChooseUI>::ShowDialog(void)

{
  PennyPerkBattleStatementChooseUI *pPVar1;
  char cVar2;
  PennyPerkBattleStatementChooseUI *pPVar3;
  
  pPVar1 = m_pInstance;
  pPVar3 = pPVar1;
  if (m_pInstance == (PennyPerkBattleStatementChooseUI *)0x0) {
    pPVar3 = ::operator_new(0x188);
    PennyPerkBattleStatementChooseUI::PennyPerkBattleStatementChooseUI(pPVar3);
    m_pInstance = pPVar3;
    cVar2 = (**(code **)(*(long *)pPVar3 + 0x310))(pPVar3);
    pPVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (PennyPerkBattleStatementChooseUI *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (PennyPerkBattleStatementChooseUI *)0x0;
      pPVar3 = pPVar1;
    }
  }
  return pPVar3;
}


/* UISingletonDialog<PennyPerkBattleStatementChooseUI>::GetSingletonPtr() */

undefined8 UISingletonDialog<PennyPerkBattleStatementChooseUI>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UIRiftZombossRewardSelect>::ShowDialog() */

UIRiftZombossRewardSelect * UISingletonDialog<UIRiftZombossRewardSelect>::ShowDialog(void)

{
  UIRiftZombossRewardSelect *pUVar1;
  char cVar2;
  UIRiftZombossRewardSelect *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIRiftZombossRewardSelect *)0x0) {
    pUVar3 = ::operator_new(0x1a0);
    UIRiftZombossRewardSelect::UIRiftZombossRewardSelect(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIRiftZombossRewardSelect *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIRiftZombossRewardSelect *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIRiftZombossRewardSelect>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIRiftZombossRewardSelect>::~UISingletonDialog
          (UISingletonDialog<UIRiftZombossRewardSelect> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066853a0;
  *(undefined ***)this = &PTR_GetClass_06685050;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIRiftZombossRewardSelect> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIRiftZombossRewardSelect>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIRiftZombossRewardSelect>::~UISingletonDialog
          (UISingletonDialog<UIRiftZombossRewardSelect> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIRiftZombossRewardSelect>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIRiftZombossRewardSelect>::UISingletonDialog
          (UISingletonDialog<UIRiftZombossRewardSelect> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06685050;
  *(undefined **)(this + 0xd8) = &DAT_066853a0;
  return;
}


/* UISingletonDialog<UIRiftZombossRewardSelect>::CloseDialog() */

void UISingletonDialog<UIRiftZombossRewardSelect>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIArtifactBoostPreview>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIArtifactBoostPreview>::~UISingletonDialog
          (UISingletonDialog<UIArtifactBoostPreview> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06696e40;
  *(undefined ***)this = &PTR_GetClass_06696af0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIArtifactBoostPreview> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIArtifactBoostPreview>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIArtifactBoostPreview>::~UISingletonDialog
          (UISingletonDialog<UIArtifactBoostPreview> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIArtifactBoostDetails>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIArtifactBoostDetails>::~UISingletonDialog
          (UISingletonDialog<UIArtifactBoostDetails> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06696aa0;
  *(undefined ***)this = &PTR_GetClass_06696750;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIArtifactBoostDetails> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIArtifactBoostDetails>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIArtifactBoostDetails>::~UISingletonDialog
          (UISingletonDialog<UIArtifactBoostDetails> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIArtifactBoostDetails>::CloseDialog() */

void UISingletonDialog<UIArtifactBoostDetails>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIArtifactBoostPreview>::CloseDialog() */

void UISingletonDialog<UIArtifactBoostPreview>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIArtifactBoostPreview>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIArtifactBoostPreview>::UISingletonDialog
          (UISingletonDialog<UIArtifactBoostPreview> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06696af0;
  *(undefined **)(this + 0xd8) = &DAT_06696e40;
  return;
}


/* UISingletonDialog<UIArtifactBoostPreview>::ShowDialog() */

UIArtifactBoostPreview * UISingletonDialog<UIArtifactBoostPreview>::ShowDialog(void)

{
  UIArtifactBoostPreview *pUVar1;
  char cVar2;
  UIArtifactBoostPreview *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIArtifactBoostPreview *)0x0) {
    pUVar3 = ::operator_new(0x140);
    memset(pUVar3,0,0x140);
    UIArtifactBoostPreview::UIArtifactBoostPreview(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIArtifactBoostPreview *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIArtifactBoostPreview *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIPlantGeneToturial>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPlantGeneToturial>::~UISingletonDialog
          (UISingletonDialog<UIPlantGeneToturial> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_0669d370;
  *(undefined ***)this = &PTR_GetClass_0669d020;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIPlantGeneToturial> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIPlantGeneToturial>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPlantGeneToturial>::~UISingletonDialog
          (UISingletonDialog<UIPlantGeneToturial> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIPlantGeneSelectDrawMode>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPlantGeneSelectDrawMode>::~UISingletonDialog
          (UISingletonDialog<UIPlantGeneSelectDrawMode> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_0669d710;
  *(undefined ***)this = &PTR_GetClass_0669d3c0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIPlantGeneSelectDrawMode> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIPlantGeneSelectDrawMode>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPlantGeneSelectDrawMode>::~UISingletonDialog
          (UISingletonDialog<UIPlantGeneSelectDrawMode> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIPlantGeneSequenceShop>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPlantGeneSequenceShop>::~UISingletonDialog
          (UISingletonDialog<UIPlantGeneSequenceShop> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_0669de50;
  *(undefined ***)this = &PTR_GetClass_0669db00;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIPlantGeneSequenceShop> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIPlantGeneSequenceShop>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPlantGeneSequenceShop>::~UISingletonDialog
          (UISingletonDialog<UIPlantGeneSequenceShop> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIPlantGeneLevelUpView>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPlantGeneLevelUpView>::~UISingletonDialog
          (UISingletonDialog<UIPlantGeneLevelUpView> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_0669dab0;
  *(undefined ***)this = &PTR_GetClass_0669d760;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIPlantGeneLevelUpView> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIPlantGeneLevelUpView>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPlantGeneLevelUpView>::~UISingletonDialog
          (UISingletonDialog<UIPlantGeneLevelUpView> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIPlantGeneSelectDrawMode>::CloseDialog() */

void UISingletonDialog<UIPlantGeneSelectDrawMode>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIPlantGeneToturial>::CloseDialog() */

void UISingletonDialog<UIPlantGeneToturial>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIPlantGeneSelectDrawMode>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPlantGeneSelectDrawMode>::UISingletonDialog
          (UISingletonDialog<UIPlantGeneSelectDrawMode> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_0669d3c0;
  *(undefined **)(this + 0xd8) = &DAT_0669d710;
  return;
}


/* UISingletonDialog<UIPlantGeneSelectDrawMode>::ShowDialog() */

UIPlantGeneSelectDrawMode * UISingletonDialog<UIPlantGeneSelectDrawMode>::ShowDialog(void)

{
  UIPlantGeneSelectDrawMode *pUVar1;
  char cVar2;
  UIPlantGeneSelectDrawMode *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIPlantGeneSelectDrawMode *)0x0) {
    pUVar3 = ::operator_new(0x138);
    UIPlantGeneSelectDrawMode::UIPlantGeneSelectDrawMode(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIPlantGeneSelectDrawMode *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIPlantGeneSelectDrawMode *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIPlantGeneLevelUpView>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPlantGeneLevelUpView>::UISingletonDialog
          (UISingletonDialog<UIPlantGeneLevelUpView> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_0669d760;
  *(undefined **)(this + 0xd8) = &DAT_0669dab0;
  return;
}


/* UISingletonDialog<UIPlantGeneLevelUpView>::ShowDialog() */

UIPlantGeneLevelUpView * UISingletonDialog<UIPlantGeneLevelUpView>::ShowDialog(void)

{
  UIPlantGeneLevelUpView *pUVar1;
  char cVar2;
  UIPlantGeneLevelUpView *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIPlantGeneLevelUpView *)0x0) {
    pUVar3 = ::operator_new(0x140);
    UIPlantGeneLevelUpView::UIPlantGeneLevelUpView(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIPlantGeneLevelUpView *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIPlantGeneLevelUpView *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIPlantGeneLevelUpView>::CloseDialog() */

void UISingletonDialog<UIPlantGeneLevelUpView>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIPlantGeneSequenceShop>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPlantGeneSequenceShop>::UISingletonDialog
          (UISingletonDialog<UIPlantGeneSequenceShop> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_0669db00;
  *(undefined **)(this + 0xd8) = &DAT_0669de50;
  return;
}


/* UISingletonDialog<UIPlantGeneSequenceShop>::CloseDialog() */

void UISingletonDialog<UIPlantGeneSequenceShop>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIPlantGeneToturial>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPlantGeneToturial>::UISingletonDialog
          (UISingletonDialog<UIPlantGeneToturial> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_0669d020;
  *(undefined **)(this + 0xd8) = &DAT_0669d370;
  return;
}


/* UISingletonDialog<UIPlantGeneToturial>::ShowDialog() */

UIPlantGeneToturial * UISingletonDialog<UIPlantGeneToturial>::ShowDialog(void)

{
  UIPlantGeneToturial *pUVar1;
  char cVar2;
  UIPlantGeneToturial *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIPlantGeneToturial *)0x0) {
    pUVar3 = ::operator_new(0x138);
    memset(pUVar3,0,0x138);
    UIPlantGeneToturial::UIPlantGeneToturial(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIPlantGeneToturial *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIPlantGeneToturial *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIPlantGeneSequenceShop>::ShowDialog() */

UIPlantGeneSequenceShop * UISingletonDialog<UIPlantGeneSequenceShop>::ShowDialog(void)

{
  UIPlantGeneSequenceShop *pUVar1;
  char cVar2;
  UIPlantGeneSequenceShop *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIPlantGeneSequenceShop *)0x0) {
    pUVar3 = ::operator_new(0x1c8);
    UIPlantGeneSequenceShop::UIPlantGeneSequenceShop(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIPlantGeneSequenceShop *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIPlantGeneSequenceShop *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UINewPlantView_SkillDisplay>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewPlantView_SkillDisplay>::~UISingletonDialog
          (UISingletonDialog<UINewPlantView_SkillDisplay> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066a1550;
  *(undefined ***)this = &PTR_GetClass_066a1200;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UINewPlantView_SkillDisplay> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UINewPlantView_SkillDisplay>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewPlantView_SkillDisplay>::~UISingletonDialog
          (UISingletonDialog<UINewPlantView_SkillDisplay> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UINewPlantView_AvatarPackage>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewPlantView_AvatarPackage>::~UISingletonDialog
          (UISingletonDialog<UINewPlantView_AvatarPackage> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066a18f0;
  *(undefined ***)this = &PTR_GetClass_066a15a0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UINewPlantView_AvatarPackage> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UINewPlantView_AvatarPackage>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewPlantView_AvatarPackage>::~UISingletonDialog
          (UISingletonDialog<UINewPlantView_AvatarPackage> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UINewPlantView_ExchangeAvatar>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewPlantView_ExchangeAvatar>::~UISingletonDialog
          (UISingletonDialog<UINewPlantView_ExchangeAvatar> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066a2030;
  *(undefined ***)this = &PTR_GetClass_066a1ce0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UINewPlantView_ExchangeAvatar> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UINewPlantView_ExchangeAvatar>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewPlantView_ExchangeAvatar>::~UISingletonDialog
          (UISingletonDialog<UINewPlantView_ExchangeAvatar> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UINewPlantView_LevelUp>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewPlantView_LevelUp>::~UISingletonDialog
          (UISingletonDialog<UINewPlantView_LevelUp> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066a1c90;
  *(undefined ***)this = &PTR_GetClass_066a1940;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UINewPlantView_LevelUp> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UINewPlantView_LevelUp>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewPlantView_LevelUp>::~UISingletonDialog
          (UISingletonDialog<UINewPlantView_LevelUp> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<AdaptiveMessageBox>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<AdaptiveMessageBox>::~UISingletonDialog
          (UISingletonDialog<AdaptiveMessageBox> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066a2770;
  *(undefined ***)this = &PTR_GetClass_066a2420;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<AdaptiveMessageBox> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<AdaptiveMessageBox>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<AdaptiveMessageBox>::~UISingletonDialog
          (UISingletonDialog<AdaptiveMessageBox> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UINewPlantView_AccessoryPackage>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewPlantView_AccessoryPackage>::~UISingletonDialog
          (UISingletonDialog<UINewPlantView_AccessoryPackage> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066a23d0;
  *(undefined ***)this = &PTR_GetClass_066a2080;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UINewPlantView_AccessoryPackage> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UINewPlantView_AccessoryPackage>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewPlantView_AccessoryPackage>::~UISingletonDialog
          (UISingletonDialog<UINewPlantView_AccessoryPackage> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UINewPlantView_SkillDisplay>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewPlantView_SkillDisplay>::UISingletonDialog
          (UISingletonDialog<UINewPlantView_SkillDisplay> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066a1200;
  *(undefined **)(this + 0xd8) = &DAT_066a1550;
  return;
}


/* UISingletonDialog<UINewPlantView_SkillDisplay>::CloseDialog() */

void UISingletonDialog<UINewPlantView_SkillDisplay>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UINewPlantView_AvatarPackage>::GetSingletonPtr() */

undefined8 UISingletonDialog<UINewPlantView_AvatarPackage>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UINewPlantView_AvatarPackage>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewPlantView_AvatarPackage>::UISingletonDialog
          (UISingletonDialog<UINewPlantView_AvatarPackage> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066a15a0;
  *(undefined **)(this + 0xd8) = &DAT_066a18f0;
  return;
}


/* UISingletonDialog<UINewPlantView_AvatarPackage>::CloseDialog() */

void UISingletonDialog<UINewPlantView_AvatarPackage>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UINewPlantView_LevelUp>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewPlantView_LevelUp>::UISingletonDialog
          (UISingletonDialog<UINewPlantView_LevelUp> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066a1940;
  *(undefined **)(this + 0xd8) = &DAT_066a1c90;
  return;
}


/* UISingletonDialog<UINewPlantView_LevelUp>::CloseDialog() */

void UISingletonDialog<UINewPlantView_LevelUp>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<AdaptiveMessageBox>::CloseDialog() */

void UISingletonDialog<AdaptiveMessageBox>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


void UISingletonDialog<AdaptiveMessageBox>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


void UISingletonDialog<AdaptiveMessageBox>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UINewPlantView_Classify>::CloseDialog() */

void UISingletonDialog<UINewPlantView_Classify>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UINewPlantView_PlantDetails>::CloseDialog() */

void UISingletonDialog<UINewPlantView_PlantDetails>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UINewPlantView_AccessoryPackage>::GetSingletonPtr() */

undefined8 UISingletonDialog<UINewPlantView_AccessoryPackage>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UINewPlantView_AccessoryPackage>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewPlantView_AccessoryPackage>::UISingletonDialog
          (UISingletonDialog<UINewPlantView_AccessoryPackage> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066a2080;
  *(undefined **)(this + 0xd8) = &DAT_066a23d0;
  return;
}


/* UISingletonDialog<UINewPlantView_AccessoryPackage>::CloseDialog() */

void UISingletonDialog<UINewPlantView_AccessoryPackage>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UINewPlantView_ExchangeAvatar>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewPlantView_ExchangeAvatar>::UISingletonDialog
          (UISingletonDialog<UINewPlantView_ExchangeAvatar> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066a1ce0;
  *(undefined **)(this + 0xd8) = &DAT_066a2030;
  return;
}


/* UISingletonDialog<UINewPlantView_ExchangeAvatar>::ShowDialog() */

UINewPlantView_ExchangeAvatar * UISingletonDialog<UINewPlantView_ExchangeAvatar>::ShowDialog(void)

{
  UINewPlantView_ExchangeAvatar *pUVar1;
  char cVar2;
  UINewPlantView_ExchangeAvatar *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UINewPlantView_ExchangeAvatar *)0x0) {
    pUVar3 = ::operator_new(0x170);
    UINewPlantView_ExchangeAvatar::UINewPlantView_ExchangeAvatar(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UINewPlantView_ExchangeAvatar *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UINewPlantView_ExchangeAvatar *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UINewPlantView_ExchangeAvatar>::CloseDialog() */

void UISingletonDialog<UINewPlantView_ExchangeAvatar>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<AdaptiveMessageBox>::UISingletonDialog() */

void __thiscall
UISingletonDialog<AdaptiveMessageBox>::UISingletonDialog
          (UISingletonDialog<AdaptiveMessageBox> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066a2420;
  *(undefined **)(this + 0xd8) = &DAT_066a2770;
  return;
}


/* UISingletonDialog<AdaptiveMessageBox>::ShowDialog() */

AdaptiveMessageBox * UISingletonDialog<AdaptiveMessageBox>::ShowDialog(void)

{
  AdaptiveMessageBox *pAVar1;
  char cVar2;
  AdaptiveMessageBox *pAVar3;
  
  pAVar1 = m_pInstance;
  pAVar3 = pAVar1;
  if (m_pInstance == (AdaptiveMessageBox *)0x0) {
    pAVar3 = ::operator_new(0x180);
    memset(pAVar3,0,0x180);
    AdaptiveMessageBox::AdaptiveMessageBox(pAVar3);
    m_pInstance = pAVar3;
    cVar2 = (**(code **)(*(long *)pAVar3 + 0x310))(pAVar3);
    pAVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (AdaptiveMessageBox *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (AdaptiveMessageBox *)0x0;
      pAVar3 = pAVar1;
    }
  }
  return pAVar3;
}


/* UISingletonDialog<UINewPlantView_SkillDisplay>::ShowDialog() */

UINewPlantView_SkillDisplay * UISingletonDialog<UINewPlantView_SkillDisplay>::ShowDialog(void)

{
  UINewPlantView_SkillDisplay *pUVar1;
  char cVar2;
  UINewPlantView_SkillDisplay *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UINewPlantView_SkillDisplay *)0x0) {
    pUVar3 = ::operator_new(0x168);
    UINewPlantView_SkillDisplay::UINewPlantView_SkillDisplay(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UINewPlantView_SkillDisplay *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UINewPlantView_SkillDisplay *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<PVZ2UnchartedModeSelectLevelAnniversary>::ShowDialog() */

PVZ2UnchartedModeSelectLevelAnniversary *
UISingletonDialog<PVZ2UnchartedModeSelectLevelAnniversary>::ShowDialog(void)

{
  PVZ2UnchartedModeSelectLevelAnniversary *pPVar1;
  char cVar2;
  PVZ2UnchartedModeSelectLevelAnniversary *pPVar3;
  
  pPVar1 = m_pInstance;
  pPVar3 = pPVar1;
  if (m_pInstance == (PVZ2UnchartedModeSelectLevelAnniversary *)0x0) {
    pPVar3 = ::operator_new(0x230);
    PVZ2UnchartedModeSelectLevelAnniversary::PVZ2UnchartedModeSelectLevelAnniversary(pPVar3);
    m_pInstance = pPVar3;
    cVar2 = (**(code **)(*(long *)pPVar3 + 0x310))(pPVar3);
    pPVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (PVZ2UnchartedModeSelectLevelAnniversary *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (PVZ2UnchartedModeSelectLevelAnniversary *)0x0;
      pPVar3 = pPVar1;
    }
  }
  return pPVar3;
}


/* UISingletonDialog<PVZ2UnchartedModeSelectLevel>::ShowDialog() */

PVZ2UnchartedModeSelectLevel * UISingletonDialog<PVZ2UnchartedModeSelectLevel>::ShowDialog(void)

{
  PVZ2UnchartedModeSelectLevel *pPVar1;
  char cVar2;
  PVZ2UnchartedModeSelectLevel *pPVar3;
  
  pPVar1 = m_pInstance;
  pPVar3 = pPVar1;
  if (m_pInstance == (PVZ2UnchartedModeSelectLevel *)0x0) {
    pPVar3 = ::operator_new(0x220);
    PVZ2UnchartedModeSelectLevel::PVZ2UnchartedModeSelectLevel(pPVar3);
    m_pInstance = pPVar3;
    cVar2 = (**(code **)(*(long *)pPVar3 + 0x310))(pPVar3);
    pPVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (PVZ2UnchartedModeSelectLevel *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (PVZ2UnchartedModeSelectLevel *)0x0;
      pPVar3 = pPVar1;
    }
  }
  return pPVar3;
}


/* UISingletonDialog<UIUnchartedEntry>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIUnchartedEntry>::~UISingletonDialog(UISingletonDialog<UIUnchartedEntry> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066a5c40;
  *(undefined ***)this = &PTR_GetClass_066a58f0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIUnchartedEntry> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIUnchartedEntry>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIUnchartedEntry>::~UISingletonDialog(UISingletonDialog<UIUnchartedEntry> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIUnchartedEntry>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIUnchartedEntry>::UISingletonDialog(UISingletonDialog<UIUnchartedEntry> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066a58f0;
  *(undefined **)(this + 0xd8) = &DAT_066a5c40;
  return;
}


/* UISingletonDialog<UIUnchartedFestivalReward>::ShowDialog() */

UIUnchartedFestivalReward * UISingletonDialog<UIUnchartedFestivalReward>::ShowDialog(void)

{
  UIUnchartedFestivalReward *pUVar1;
  char cVar2;
  UIUnchartedFestivalReward *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIUnchartedFestivalReward *)0x0) {
    pUVar3 = ::operator_new(0x1f0);
    UIUnchartedFestivalReward::UIUnchartedFestivalReward(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIUnchartedFestivalReward *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIUnchartedFestivalReward *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIMiniGameCollection>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIMiniGameCollection>::~UISingletonDialog
          (UISingletonDialog<UIMiniGameCollection> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066b43a0;
  *(undefined ***)this = &PTR_GetClass_066b4050;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIMiniGameCollection> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIMiniGameCollection>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIMiniGameCollection>::~UISingletonDialog
          (UISingletonDialog<UIMiniGameCollection> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIMiniGameCollection>::GetSingletonPtr() */

undefined8 UISingletonDialog<UIMiniGameCollection>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UIMiniGameCollection>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIMiniGameCollection>::UISingletonDialog
          (UISingletonDialog<UIMiniGameCollection> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066b4050;
  *(undefined **)(this + 0xd8) = &DAT_066b43a0;
  return;
}


/* UISingletonDialog<UIMiniGameCollection>::CloseDialog() */

void UISingletonDialog<UIMiniGameCollection>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<ActivityCollectionNighttheToy>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<ActivityCollectionNighttheToy>::~UISingletonDialog
          (UISingletonDialog<ActivityCollectionNighttheToy> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066b5f70;
  *(undefined ***)this = &PTR_GetClass_066b5c20;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<ActivityCollectionNighttheToy> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<ActivityCollectionNighttheToy>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<ActivityCollectionNighttheToy>::~UISingletonDialog
          (UISingletonDialog<ActivityCollectionNighttheToy> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<ToyNightShopMain>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<ToyNightShopMain>::~UISingletonDialog(UISingletonDialog<ToyNightShopMain> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066b6310;
  *(undefined ***)this = &PTR_GetClass_066b5fc0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<ToyNightShopMain> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<ToyNightShopMain>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<ToyNightShopMain>::~UISingletonDialog(UISingletonDialog<ToyNightShopMain> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<ToyNightBundleMain>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<ToyNightBundleMain>::~UISingletonDialog
          (UISingletonDialog<ToyNightBundleMain> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066b66b0;
  *(undefined ***)this = &PTR_GetClass_066b6360;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<ToyNightBundleMain> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<ToyNightBundleMain>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<ToyNightBundleMain>::~UISingletonDialog
          (UISingletonDialog<ToyNightBundleMain> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<ToyNightTaskMain>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<ToyNightTaskMain>::~UISingletonDialog(UISingletonDialog<ToyNightTaskMain> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066b6a50;
  *(undefined ***)this = &PTR_GetClass_066b6700;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<ToyNightTaskMain> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<ToyNightTaskMain>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<ToyNightTaskMain>::~UISingletonDialog(UISingletonDialog<ToyNightTaskMain> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UICommonLogsTurnPagesList>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UICommonLogsTurnPagesList>::~UISingletonDialog
          (UISingletonDialog<UICommonLogsTurnPagesList> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066b6df0;
  *(undefined ***)this = &PTR_GetClass_066b6aa0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UICommonLogsTurnPagesList> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UICommonLogsTurnPagesList>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UICommonLogsTurnPagesList>::~UISingletonDialog
          (UISingletonDialog<UICommonLogsTurnPagesList> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UINighttheToyAction>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINighttheToyAction>::~UISingletonDialog
          (UISingletonDialog<UINighttheToyAction> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066b7190;
  *(undefined ***)this = &PTR_GetClass_066b6e40;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UINighttheToyAction> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UINighttheToyAction>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINighttheToyAction>::~UISingletonDialog
          (UISingletonDialog<UINighttheToyAction> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<ActivityCollectionNighttheToy>::UISingletonDialog() */

void __thiscall
UISingletonDialog<ActivityCollectionNighttheToy>::UISingletonDialog
          (UISingletonDialog<ActivityCollectionNighttheToy> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066b5c20;
  *(undefined **)(this + 0xd8) = &DAT_066b5f70;
  return;
}


/* UISingletonDialog<ActivityCollectionNighttheToy>::CloseDialog() */

void UISingletonDialog<ActivityCollectionNighttheToy>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<ToyNightShopMain>::CloseDialog() */

void UISingletonDialog<ToyNightShopMain>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<ToyNightShopMain>::GetSingletonPtr() */

undefined8 UISingletonDialog<ToyNightShopMain>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<ToyNightBundleMain>::CloseDialog() */

void UISingletonDialog<ToyNightBundleMain>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<ToyNightTaskMain>::CloseDialog() */

void UISingletonDialog<ToyNightTaskMain>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<ActivityCollectionNighttheToy>::GetSingletonPtr() */

undefined8 UISingletonDialog<ActivityCollectionNighttheToy>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UINighttheToyAction>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UINighttheToyAction>::UISingletonDialog
          (UISingletonDialog<UINighttheToyAction> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066b6e40;
  *(undefined **)(this + 0xd8) = &DAT_066b7190;
  return;
}


/* UISingletonDialog<UINighttheToyAction>::CloseDialog() */

void UISingletonDialog<UINighttheToyAction>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UICommonLogsTurnPagesList>::CloseDialog() */

void UISingletonDialog<UICommonLogsTurnPagesList>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<ToyNightShopMain>::UISingletonDialog() */

void __thiscall
UISingletonDialog<ToyNightShopMain>::UISingletonDialog(UISingletonDialog<ToyNightShopMain> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066b5fc0;
  *(undefined **)(this + 0xd8) = &DAT_066b6310;
  return;
}


/* UISingletonDialog<ToyNightShopMain>::ShowDialog() */

ToyNightShopMain * UISingletonDialog<ToyNightShopMain>::ShowDialog(void)

{
  ToyNightShopMain *pTVar1;
  char cVar2;
  ToyNightShopMain *pTVar3;
  
  pTVar1 = m_pInstance;
  pTVar3 = pTVar1;
  if (m_pInstance == (ToyNightShopMain *)0x0) {
    pTVar3 = ::operator_new(0x150);
    memset(pTVar3,0,0x150);
    ToyNightShopMain::ToyNightShopMain(pTVar3);
    m_pInstance = pTVar3;
    cVar2 = (**(code **)(*(long *)pTVar3 + 0x310))(pTVar3);
    pTVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (ToyNightShopMain *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (ToyNightShopMain *)0x0;
      pTVar3 = pTVar1;
    }
  }
  return pTVar3;
}


/* UISingletonDialog<ToyNightBundleMain>::UISingletonDialog() */

void __thiscall
UISingletonDialog<ToyNightBundleMain>::UISingletonDialog
          (UISingletonDialog<ToyNightBundleMain> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066b6360;
  *(undefined **)(this + 0xd8) = &DAT_066b66b0;
  return;
}


/* UISingletonDialog<ToyNightBundleMain>::ShowDialog() */

ToyNightBundleMain * UISingletonDialog<ToyNightBundleMain>::ShowDialog(void)

{
  ToyNightBundleMain *pTVar1;
  char cVar2;
  ToyNightBundleMain *pTVar3;
  
  pTVar1 = m_pInstance;
  pTVar3 = pTVar1;
  if (m_pInstance == (ToyNightBundleMain *)0x0) {
    pTVar3 = ::operator_new(0x150);
    memset(pTVar3,0,0x150);
    ToyNightBundleMain::ToyNightBundleMain(pTVar3);
    m_pInstance = pTVar3;
    cVar2 = (**(code **)(*(long *)pTVar3 + 0x310))(pTVar3);
    pTVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (ToyNightBundleMain *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (ToyNightBundleMain *)0x0;
      pTVar3 = pTVar1;
    }
  }
  return pTVar3;
}


/* UISingletonDialog<ToyNightTaskMain>::UISingletonDialog() */

void __thiscall
UISingletonDialog<ToyNightTaskMain>::UISingletonDialog(UISingletonDialog<ToyNightTaskMain> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066b6700;
  *(undefined **)(this + 0xd8) = &DAT_066b6a50;
  return;
}


/* UISingletonDialog<ToyNightTaskMain>::ShowDialog() */

ToyNightTaskMain * UISingletonDialog<ToyNightTaskMain>::ShowDialog(void)

{
  ToyNightTaskMain *pTVar1;
  char cVar2;
  ToyNightTaskMain *pTVar3;
  
  pTVar1 = m_pInstance;
  pTVar3 = pTVar1;
  if (m_pInstance == (ToyNightTaskMain *)0x0) {
    pTVar3 = ::operator_new(0x150);
    memset(pTVar3,0,0x150);
    ToyNightTaskMain::ToyNightTaskMain(pTVar3);
    m_pInstance = pTVar3;
    cVar2 = (**(code **)(*(long *)pTVar3 + 0x310))(pTVar3);
    pTVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (ToyNightTaskMain *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (ToyNightTaskMain *)0x0;
      pTVar3 = pTVar1;
    }
  }
  return pTVar3;
}


/* UISingletonDialog<UICommonLogsTurnPagesList>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UICommonLogsTurnPagesList>::UISingletonDialog
          (UISingletonDialog<UICommonLogsTurnPagesList> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066b6aa0;
  *(undefined **)(this + 0xd8) = &DAT_066b6df0;
  return;
}


/* UISingletonDialog<UICommonLogsTurnPagesList>::ShowDialog() */

UICommonLogsTurnPagesList * UISingletonDialog<UICommonLogsTurnPagesList>::ShowDialog(void)

{
  UICommonLogsTurnPagesList *pUVar1;
  char cVar2;
  UICommonLogsTurnPagesList *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UICommonLogsTurnPagesList *)0x0) {
    pUVar3 = ::operator_new(0x160);
    memset(pUVar3,0,0x160);
    UICommonLogsTurnPagesList::UICommonLogsTurnPagesList(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UICommonLogsTurnPagesList *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UICommonLogsTurnPagesList *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIPlantPedia>::CloseDialog() */

void UISingletonDialog<UIPlantPedia>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UITheaterDiceShop>::ShowDialog() */

UITheaterDiceShop * UISingletonDialog<UITheaterDiceShop>::ShowDialog(void)

{
  UITheaterDiceShop *pUVar1;
  char cVar2;
  UITheaterDiceShop *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UITheaterDiceShop *)0x0) {
    pUVar3 = ::operator_new(0x140);
    UITheaterDiceShop::UITheaterDiceShop(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UITheaterDiceShop *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UITheaterDiceShop *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UITheaterShop>::ShowDialog() */

UITheaterShop * UISingletonDialog<UITheaterShop>::ShowDialog(void)

{
  UITheaterShop *pUVar1;
  char cVar2;
  UITheaterShop *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UITheaterShop *)0x0) {
    pUVar3 = ::operator_new(0x150);
    UITheaterShop::UITheaterShop(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UITheaterShop *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UITheaterShop *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<PuzzlePlatformGiftPanel>::ShowDialog() */

PuzzlePlatformGiftPanel * UISingletonDialog<PuzzlePlatformGiftPanel>::ShowDialog(void)

{
  PuzzlePlatformGiftPanel *pPVar1;
  char cVar2;
  PuzzlePlatformGiftPanel *pPVar3;
  
  pPVar1 = m_pInstance;
  pPVar3 = pPVar1;
  if (m_pInstance == (PuzzlePlatformGiftPanel *)0x0) {
    pPVar3 = ::operator_new(400);
    PuzzlePlatformGiftPanel::PuzzlePlatformGiftPanel(pPVar3);
    m_pInstance = pPVar3;
    cVar2 = (**(code **)(*(long *)pPVar3 + 0x310))(pPVar3);
    pPVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (PuzzlePlatformGiftPanel *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (PuzzlePlatformGiftPanel *)0x0;
      pPVar3 = pPVar1;
    }
  }
  return pPVar3;
}


/* UISingletonDialog<OppoNewerEventUI>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<OppoNewerEventUI>::~UISingletonDialog(UISingletonDialog<OppoNewerEventUI> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066bf640;
  *(undefined ***)this = &PTR_GetClass_066bf2f0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<OppoNewerEventUI> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<OppoNewerEventUI>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<OppoNewerEventUI>::~UISingletonDialog(UISingletonDialog<OppoNewerEventUI> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<OppoNewerEventUI>::UISingletonDialog() */

void __thiscall
UISingletonDialog<OppoNewerEventUI>::UISingletonDialog(UISingletonDialog<OppoNewerEventUI> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066bf2f0;
  *(undefined **)(this + 0xd8) = &DAT_066bf640;
  return;
}


/* UISingletonDialog<OppoNewerDailyAwardUI>::CloseDialog() */

void UISingletonDialog<OppoNewerDailyAwardUI>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIOppoNewerChargeDouble>::CloseDialog() */

void UISingletonDialog<UIOppoNewerChargeDouble>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIOppoNewerChargeDouble>::GetSingletonPtr() */

undefined8 UISingletonDialog<UIOppoNewerChargeDouble>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UIOppoNewerChargeDouble>::ShowDialog() */

UIOppoNewerChargeDouble * UISingletonDialog<UIOppoNewerChargeDouble>::ShowDialog(void)

{
  UIOppoNewerChargeDouble *pUVar1;
  char cVar2;
  UIOppoNewerChargeDouble *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIOppoNewerChargeDouble *)0x0) {
    pUVar3 = ::operator_new(0x168);
    UIOppoNewerChargeDouble::UIOppoNewerChargeDouble(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIOppoNewerChargeDouble *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIOppoNewerChargeDouble *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<OppoNewerDailyAwardUI>::GetSingletonPtr() */

undefined8 UISingletonDialog<OppoNewerDailyAwardUI>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<OppoNewerDailyAwardUI>::ShowDialog() */

OppoNewerDailyAwardUI * UISingletonDialog<OppoNewerDailyAwardUI>::ShowDialog(void)

{
  OppoNewerDailyAwardUI *pOVar1;
  char cVar2;
  OppoNewerDailyAwardUI *pOVar3;
  
  pOVar1 = m_pInstance;
  pOVar3 = pOVar1;
  if (m_pInstance == (OppoNewerDailyAwardUI *)0x0) {
    pOVar3 = ::operator_new(0x1d0);
    OppoNewerDailyAwardUI::OppoNewerDailyAwardUI(pOVar3);
    m_pInstance = pOVar3;
    cVar2 = (**(code **)(*(long *)pOVar3 + 0x310))(pOVar3);
    pOVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (OppoNewerDailyAwardUI *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (OppoNewerDailyAwardUI *)0x0;
      pOVar3 = pOVar1;
    }
  }
  return pOVar3;
}


/* UISingletonDialog<ZShopConfirmDlg>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<ZShopConfirmDlg>::~UISingletonDialog(UISingletonDialog<ZShopConfirmDlg> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066c25d0;
  *(undefined ***)this = &PTR_GetClass_066c2280;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<ZShopConfirmDlg> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<ZShopConfirmDlg>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<ZShopConfirmDlg>::~UISingletonDialog(UISingletonDialog<ZShopConfirmDlg> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<ZMatchShopDlg>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<ZMatchShopDlg>::~UISingletonDialog(UISingletonDialog<ZMatchShopDlg> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066c2970;
  *(undefined ***)this = &PTR_GetClass_066c2620;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<ZMatchShopDlg> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<ZMatchShopDlg>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<ZMatchShopDlg>::~UISingletonDialog(UISingletonDialog<ZMatchShopDlg> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<ZMatchTicketShop>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<ZMatchTicketShop>::~UISingletonDialog(UISingletonDialog<ZMatchTicketShop> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066c2d10;
  *(undefined ***)this = &PTR_GetClass_066c29c0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<ZMatchTicketShop> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<ZMatchTicketShop>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<ZMatchTicketShop>::~UISingletonDialog(UISingletonDialog<ZMatchTicketShop> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<ZMatchShopDlg>::GetSingletonPtr() */

undefined8 UISingletonDialog<ZMatchShopDlg>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<ZShopConfirmDlg>::UISingletonDialog() */

void __thiscall
UISingletonDialog<ZShopConfirmDlg>::UISingletonDialog(UISingletonDialog<ZShopConfirmDlg> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066c2280;
  *(undefined **)(this + 0xd8) = &DAT_066c25d0;
  return;
}


/* UISingletonDialog<ZShopConfirmDlg>::CloseDialog() */

void UISingletonDialog<ZShopConfirmDlg>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<ZMatchShopDlg>::UISingletonDialog() */

void __thiscall
UISingletonDialog<ZMatchShopDlg>::UISingletonDialog(UISingletonDialog<ZMatchShopDlg> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066c2620;
  *(undefined **)(this + 0xd8) = &DAT_066c2970;
  return;
}


/* UISingletonDialog<ZMatchShopDlg>::CloseDialog() */

void UISingletonDialog<ZMatchShopDlg>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<ZMatchTicketShop>::UISingletonDialog() */

void __thiscall
UISingletonDialog<ZMatchTicketShop>::UISingletonDialog(UISingletonDialog<ZMatchTicketShop> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066c29c0;
  *(undefined **)(this + 0xd8) = &DAT_066c2d10;
  return;
}


/* UISingletonDialog<ZMatchTicketShop>::CloseDialog() */

void UISingletonDialog<ZMatchTicketShop>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<ZMatchShopDlg>::ShowDialog() */

ZMatchShopDlg * UISingletonDialog<ZMatchShopDlg>::ShowDialog(void)

{
  ZMatchShopDlg *pZVar1;
  char cVar2;
  ZMatchShopDlg *pZVar3;
  
  pZVar1 = m_pInstance;
  pZVar3 = pZVar1;
  if (m_pInstance == (ZMatchShopDlg *)0x0) {
    pZVar3 = ::operator_new(400);
    ZMatchShopDlg::ZMatchShopDlg(pZVar3);
    m_pInstance = pZVar3;
    cVar2 = (**(code **)(*(long *)pZVar3 + 0x310))(pZVar3);
    pZVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (ZMatchShopDlg *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (ZMatchShopDlg *)0x0;
      pZVar3 = pZVar1;
    }
  }
  return pZVar3;
}


/* UISingletonDialog<ZShopConfirmDlg>::ShowDialog() */

ZShopConfirmDlg * UISingletonDialog<ZShopConfirmDlg>::ShowDialog(void)

{
  ZShopConfirmDlg *pZVar1;
  char cVar2;
  ZShopConfirmDlg *pZVar3;
  
  pZVar1 = m_pInstance;
  pZVar3 = pZVar1;
  if (m_pInstance == (ZShopConfirmDlg *)0x0) {
    pZVar3 = ::operator_new(0x158);
    ZShopConfirmDlg::ZShopConfirmDlg(pZVar3);
    m_pInstance = pZVar3;
    cVar2 = (**(code **)(*(long *)pZVar3 + 0x310))(pZVar3);
    pZVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (ZShopConfirmDlg *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (ZShopConfirmDlg *)0x0;
      pZVar3 = pZVar1;
    }
  }
  return pZVar3;
}


/* UISingletonDialog<DaveClubUI>::ShowDialog() */

DaveClubUI * UISingletonDialog<DaveClubUI>::ShowDialog(void)

{
  DaveClubUI *pDVar1;
  char cVar2;
  DaveClubUI *pDVar3;
  
  pDVar1 = m_pInstance;
  pDVar3 = pDVar1;
  if (m_pInstance == (DaveClubUI *)0x0) {
    pDVar3 = ::operator_new(0x178);
    DaveClubUI::DaveClubUI(pDVar3);
    m_pInstance = pDVar3;
    cVar2 = (**(code **)(*(long *)pDVar3 + 0x310))(pDVar3);
    pDVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (DaveClubUI *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (DaveClubUI *)0x0;
      pDVar3 = pDVar1;
    }
  }
  return pDVar3;
}


/* UISingletonDialog<DaveClubUI>::CloseDialog() */

void UISingletonDialog<DaveClubUI>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<FestivalEventUI>::GetSingletonPtr() */

undefined8 UISingletonDialog<FestivalEventUI>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UINameAuthentication>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINameAuthentication>::~UISingletonDialog
          (UISingletonDialog<UINameAuthentication> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066c6570;
  *(undefined ***)this = &PTR_GetClass_066c6220;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UINameAuthentication> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UINameAuthentication>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINameAuthentication>::~UISingletonDialog
          (UISingletonDialog<UINameAuthentication> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UINameAuthentication>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UINameAuthentication>::UISingletonDialog
          (UISingletonDialog<UINameAuthentication> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066c6220;
  *(undefined **)(this + 0xd8) = &DAT_066c6570;
  return;
}


/* UISingletonDialog<UINameAuthentication>::ShowDialog() */

UINameAuthentication * UISingletonDialog<UINameAuthentication>::ShowDialog(void)

{
  UINameAuthentication *pUVar1;
  char cVar2;
  UINameAuthentication *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UINameAuthentication *)0x0) {
    pUVar3 = ::operator_new(0x198);
    UINameAuthentication::UINameAuthentication(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UINameAuthentication *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UINameAuthentication *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UINameAuthentication>::CloseDialog() */

void UISingletonDialog<UINameAuthentication>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIAuthenticationDialog>::ShowDialog() */

UIAuthenticationDialog * UISingletonDialog<UIAuthenticationDialog>::ShowDialog(void)

{
  UIAuthenticationDialog *pUVar1;
  char cVar2;
  UIAuthenticationDialog *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIAuthenticationDialog *)0x0) {
    pUVar3 = ::operator_new(0x140);
    UIAuthenticationDialog::UIAuthenticationDialog(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIAuthenticationDialog *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIAuthenticationDialog *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIMiniGameEntrance>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIMiniGameEntrance>::~UISingletonDialog
          (UISingletonDialog<UIMiniGameEntrance> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066c6d00;
  *(undefined ***)this = &PTR_GetClass_066c69b0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIMiniGameEntrance> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIMiniGameEntrance>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIMiniGameEntrance>::~UISingletonDialog
          (UISingletonDialog<UIMiniGameEntrance> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIMiniGameRule>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIMiniGameRule>::~UISingletonDialog(UISingletonDialog<UIMiniGameRule> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066c70a0;
  *(undefined ***)this = &PTR_GetClass_066c6d50;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIMiniGameRule> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIMiniGameRule>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIMiniGameRule>::~UISingletonDialog(UISingletonDialog<UIMiniGameRule> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIMiniGameEntrance>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIMiniGameEntrance>::UISingletonDialog
          (UISingletonDialog<UIMiniGameEntrance> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066c69b0;
  *(undefined **)(this + 0xd8) = &DAT_066c6d00;
  return;
}


/* UISingletonDialog<UIMiniGameEntrance>::CloseDialog() */

void UISingletonDialog<UIMiniGameEntrance>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIMiniGameRank>::ShowDialog() */

UIMiniGameRank * UISingletonDialog<UIMiniGameRank>::ShowDialog(void)

{
  UIMiniGameRank *pUVar1;
  char cVar2;
  UIMiniGameRank *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIMiniGameRank *)0x0) {
    pUVar3 = ::operator_new(0x158);
    UIMiniGameRank::UIMiniGameRank(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIMiniGameRank *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIMiniGameRank *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIMiniGameRule>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIMiniGameRule>::UISingletonDialog(UISingletonDialog<UIMiniGameRule> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066c6d50;
  *(undefined **)(this + 0xd8) = &DAT_066c70a0;
  return;
}


/* UISingletonDialog<UIMiniGameRule>::CloseDialog() */

void UISingletonDialog<UIMiniGameRule>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIMiniGameRule>::ShowDialog() */

UIMiniGameRule * UISingletonDialog<UIMiniGameRule>::ShowDialog(void)

{
  UIMiniGameRule *pUVar1;
  char cVar2;
  UIMiniGameRule *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIMiniGameRule *)0x0) {
    pUVar3 = ::operator_new(0x158);
    UIMiniGameRule::UIMiniGameRule(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIMiniGameRule *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIMiniGameRule *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIChagreDouble>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIChagreDouble>::~UISingletonDialog(UISingletonDialog<UIChagreDouble> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066c7d00;
  *(undefined ***)this = &PTR_GetClass_066c79b0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIChagreDouble> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIChagreDouble>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIChagreDouble>::~UISingletonDialog(UISingletonDialog<UIChagreDouble> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIOppoNewerChargeDouble>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIOppoNewerChargeDouble>::~UISingletonDialog
          (UISingletonDialog<UIOppoNewerChargeDouble> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066c80a0;
  *(undefined ***)this = &PTR_GetClass_066c7d50;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIOppoNewerChargeDouble> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIOppoNewerChargeDouble>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIOppoNewerChargeDouble>::~UISingletonDialog
          (UISingletonDialog<UIOppoNewerChargeDouble> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<ChristmasDailyAwardUI>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<ChristmasDailyAwardUI>::~UISingletonDialog
          (UISingletonDialog<ChristmasDailyAwardUI> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066c8460;
  *(undefined ***)this = &PTR_GetClass_066c8110;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<ChristmasDailyAwardUI> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<ChristmasDailyAwardUI>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<ChristmasDailyAwardUI>::~UISingletonDialog
          (UISingletonDialog<ChristmasDailyAwardUI> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<OppoNewerDailyAwardUI>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<OppoNewerDailyAwardUI>::~UISingletonDialog
          (UISingletonDialog<OppoNewerDailyAwardUI> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066c8800;
  *(undefined ***)this = &PTR_GetClass_066c84b0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<OppoNewerDailyAwardUI> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<OppoNewerDailyAwardUI>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<OppoNewerDailyAwardUI>::~UISingletonDialog
          (UISingletonDialog<OppoNewerDailyAwardUI> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIChagreDouble>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIChagreDouble>::UISingletonDialog(UISingletonDialog<UIChagreDouble> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066c79b0;
  *(undefined **)(this + 0xd8) = &DAT_066c7d00;
  return;
}


/* UISingletonDialog<UIChagreDouble>::CloseDialog() */

void UISingletonDialog<UIChagreDouble>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<OppoNewerRechargeChargeReward>::ShowDialog() */

OppoNewerRechargeChargeReward * UISingletonDialog<OppoNewerRechargeChargeReward>::ShowDialog(void)

{
  OppoNewerRechargeChargeReward *pOVar1;
  char cVar2;
  OppoNewerRechargeChargeReward *pOVar3;
  
  pOVar1 = m_pInstance;
  pOVar3 = pOVar1;
  if (m_pInstance == (OppoNewerRechargeChargeReward *)0x0) {
    pOVar3 = ::operator_new(0x150);
    OppoNewerRechargeChargeReward::OppoNewerRechargeChargeReward(pOVar3);
    m_pInstance = pOVar3;
    cVar2 = (**(code **)(*(long *)pOVar3 + 0x310))(pOVar3);
    pOVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (OppoNewerRechargeChargeReward *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (OppoNewerRechargeChargeReward *)0x0;
      pOVar3 = pOVar1;
    }
  }
  return pOVar3;
}


/* UISingletonDialog<UIOppoNewerChargeDouble>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIOppoNewerChargeDouble>::UISingletonDialog
          (UISingletonDialog<UIOppoNewerChargeDouble> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066c7d50;
  *(undefined **)(this + 0xd8) = &DAT_066c80a0;
  return;
}


/* UISingletonDialog<ChristmasDailyAwardUI>::UISingletonDialog() */

void __thiscall
UISingletonDialog<ChristmasDailyAwardUI>::UISingletonDialog
          (UISingletonDialog<ChristmasDailyAwardUI> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066c8110;
  *(undefined **)(this + 0xd8) = &DAT_066c8460;
  return;
}


/* UISingletonDialog<ChristmasDailyAwardUI>::CloseDialog() */

void UISingletonDialog<ChristmasDailyAwardUI>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<OppoNewerDailyAwardUI>::UISingletonDialog() */

void __thiscall
UISingletonDialog<OppoNewerDailyAwardUI>::UISingletonDialog
          (UISingletonDialog<OppoNewerDailyAwardUI> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066c84b0;
  *(undefined **)(this + 0xd8) = &DAT_066c8800;
  return;
}


/* UISingletonDialog<ChristmasChargeReward>::ShowDialog() */

ChristmasChargeReward * UISingletonDialog<ChristmasChargeReward>::ShowDialog(void)

{
  ChristmasChargeReward *pCVar1;
  char cVar2;
  ChristmasChargeReward *pCVar3;
  
  pCVar1 = m_pInstance;
  pCVar3 = pCVar1;
  if (m_pInstance == (ChristmasChargeReward *)0x0) {
    pCVar3 = ::operator_new(0x150);
    ChristmasChargeReward::ChristmasChargeReward(pCVar3);
    m_pInstance = pCVar3;
    cVar2 = (**(code **)(*(long *)pCVar3 + 0x310))(pCVar3);
    pCVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (ChristmasChargeReward *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (ChristmasChargeReward *)0x0;
      pCVar3 = pCVar1;
    }
  }
  return pCVar3;
}


/* UISingletonDialog<UIWorldCupEndLevel>::ShowDialog() */

UIWorldCupEndLevel * UISingletonDialog<UIWorldCupEndLevel>::ShowDialog(void)

{
  UIWorldCupEndLevel *pUVar1;
  char cVar2;
  UIWorldCupEndLevel *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIWorldCupEndLevel *)0x0) {
    pUVar3 = ::operator_new(0x138);
    UIWorldCupEndLevel::UIWorldCupEndLevel(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIWorldCupEndLevel *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIWorldCupEndLevel *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIMiniGameRankAward>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIMiniGameRankAward>::~UISingletonDialog
          (UISingletonDialog<UIMiniGameRankAward> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066cba70;
  *(undefined ***)this = &PTR_GetClass_066cb720;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIMiniGameRankAward> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIMiniGameRankAward>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIMiniGameRankAward>::~UISingletonDialog
          (UISingletonDialog<UIMiniGameRankAward> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<ChristmasChargeReward>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<ChristmasChargeReward>::~UISingletonDialog
          (UISingletonDialog<ChristmasChargeReward> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066cbe10;
  *(undefined ***)this = &PTR_GetClass_066cbac0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<ChristmasChargeReward> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<ChristmasChargeReward>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<ChristmasChargeReward>::~UISingletonDialog
          (UISingletonDialog<ChristmasChargeReward> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<OppoNewerRechargeChargeReward>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<OppoNewerRechargeChargeReward>::~UISingletonDialog
          (UISingletonDialog<OppoNewerRechargeChargeReward> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066cc1b0;
  *(undefined ***)this = &PTR_GetClass_066cbe60;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<OppoNewerRechargeChargeReward> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<OppoNewerRechargeChargeReward>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<OppoNewerRechargeChargeReward>::~UISingletonDialog
          (UISingletonDialog<OppoNewerRechargeChargeReward> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIMiniGameRank>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIMiniGameRank>::~UISingletonDialog(UISingletonDialog<UIMiniGameRank> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066cb6d0;
  *(undefined ***)this = &PTR_GetClass_066cb380;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIMiniGameRank> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIMiniGameRank>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIMiniGameRank>::~UISingletonDialog(UISingletonDialog<UIMiniGameRank> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIMiniGameRankAward>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIMiniGameRankAward>::UISingletonDialog
          (UISingletonDialog<UIMiniGameRankAward> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066cb720;
  *(undefined **)(this + 0xd8) = &DAT_066cba70;
  return;
}


/* UISingletonDialog<UIMiniGameRankAward>::CloseDialog() */

void UISingletonDialog<UIMiniGameRankAward>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<ChristmasChargeReward>::UISingletonDialog() */

void __thiscall
UISingletonDialog<ChristmasChargeReward>::UISingletonDialog
          (UISingletonDialog<ChristmasChargeReward> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066cbac0;
  *(undefined **)(this + 0xd8) = &DAT_066cbe10;
  return;
}


/* UISingletonDialog<ChristmasChargeReward>::CloseDialog() */

void UISingletonDialog<ChristmasChargeReward>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<OppoNewerRechargeChargeReward>::UISingletonDialog() */

void __thiscall
UISingletonDialog<OppoNewerRechargeChargeReward>::UISingletonDialog
          (UISingletonDialog<OppoNewerRechargeChargeReward> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066cbe60;
  *(undefined **)(this + 0xd8) = &DAT_066cc1b0;
  return;
}


/* UISingletonDialog<OppoNewerRechargeChargeReward>::CloseDialog() */

void UISingletonDialog<OppoNewerRechargeChargeReward>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIMiniGameRank>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIMiniGameRank>::UISingletonDialog(UISingletonDialog<UIMiniGameRank> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066cb380;
  *(undefined **)(this + 0xd8) = &DAT_066cb6d0;
  return;
}


/* UISingletonDialog<UIMiniGameRank>::CloseDialog() */

void UISingletonDialog<UIMiniGameRank>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<SpringDailyAwardUI>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<SpringDailyAwardUI>::~UISingletonDialog
          (UISingletonDialog<SpringDailyAwardUI> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066ce640;
  *(undefined ***)this = &PTR_GetClass_066ce2f0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<SpringDailyAwardUI> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<SpringDailyAwardUI>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<SpringDailyAwardUI>::~UISingletonDialog
          (UISingletonDialog<SpringDailyAwardUI> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UISpringBuyPlant>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UISpringBuyPlant>::~UISingletonDialog(UISingletonDialog<UISpringBuyPlant> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066ce9e0;
  *(undefined ***)this = &PTR_GetClass_066ce690;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UISpringBuyPlant> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UISpringBuyPlant>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UISpringBuyPlant>::~UISingletonDialog(UISingletonDialog<UISpringBuyPlant> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<SpringDailyAwardUI>::UISingletonDialog() */

void __thiscall
UISingletonDialog<SpringDailyAwardUI>::UISingletonDialog
          (UISingletonDialog<SpringDailyAwardUI> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066ce2f0;
  *(undefined **)(this + 0xd8) = &DAT_066ce640;
  return;
}


/* UISingletonDialog<SpringDailyAwardUI>::CloseDialog() */

void UISingletonDialog<SpringDailyAwardUI>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UISpringBuyPlant>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UISpringBuyPlant>::UISingletonDialog(UISingletonDialog<UISpringBuyPlant> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066ce690;
  *(undefined **)(this + 0xd8) = &DAT_066ce9e0;
  return;
}


/* UISingletonDialog<UISpringBuyPlant>::CloseDialog() */

void UISingletonDialog<UISpringBuyPlant>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UISpringBuyPlant>::ShowDialog() */

UISpringBuyPlant * UISingletonDialog<UISpringBuyPlant>::ShowDialog(void)

{
  UISpringBuyPlant *pUVar1;
  char cVar2;
  UISpringBuyPlant *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UISpringBuyPlant *)0x0) {
    pUVar3 = ::operator_new(0x138);
    UISpringBuyPlant::UISpringBuyPlant(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UISpringBuyPlant *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UISpringBuyPlant *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIAuthenticationDialog>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIAuthenticationDialog>::~UISingletonDialog
          (UISingletonDialog<UIAuthenticationDialog> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066d0520;
  *(undefined ***)this = &PTR_GetClass_066d01d0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIAuthenticationDialog> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIAuthenticationDialog>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIAuthenticationDialog>::~UISingletonDialog
          (UISingletonDialog<UIAuthenticationDialog> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIAuthenticationDialog>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIAuthenticationDialog>::UISingletonDialog
          (UISingletonDialog<UIAuthenticationDialog> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066d01d0;
  *(undefined **)(this + 0xd8) = &DAT_066d0520;
  return;
}


/* UISingletonDialog<UIAuthenticationDialog>::CloseDialog() */

void UISingletonDialog<UIAuthenticationDialog>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIWorldCupEntrance>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIWorldCupEntrance>::~UISingletonDialog
          (UISingletonDialog<UIWorldCupEntrance> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066d0e40;
  *(undefined ***)this = &PTR_GetClass_066d0af0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIWorldCupEntrance> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIWorldCupEntrance>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIWorldCupEntrance>::~UISingletonDialog
          (UISingletonDialog<UIWorldCupEntrance> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIWorldCupSelectTeam>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIWorldCupSelectTeam>::~UISingletonDialog
          (UISingletonDialog<UIWorldCupSelectTeam> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066d11e0;
  *(undefined ***)this = &PTR_GetClass_066d0e90;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIWorldCupSelectTeam> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIWorldCupSelectTeam>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIWorldCupSelectTeam>::~UISingletonDialog
          (UISingletonDialog<UIWorldCupSelectTeam> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIWorldCupEndLevel>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIWorldCupEndLevel>::~UISingletonDialog
          (UISingletonDialog<UIWorldCupEndLevel> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066d1580;
  *(undefined ***)this = &PTR_GetClass_066d1230;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIWorldCupEndLevel> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIWorldCupEndLevel>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIWorldCupEndLevel>::~UISingletonDialog
          (UISingletonDialog<UIWorldCupEndLevel> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIWorldCupRule>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIWorldCupRule>::~UISingletonDialog(UISingletonDialog<UIWorldCupRule> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066d1920;
  *(undefined ***)this = &PTR_GetClass_066d15d0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIWorldCupRule> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIWorldCupRule>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIWorldCupRule>::~UISingletonDialog(UISingletonDialog<UIWorldCupRule> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIWorldCupEntrance>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIWorldCupEntrance>::UISingletonDialog
          (UISingletonDialog<UIWorldCupEntrance> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066d0af0;
  *(undefined **)(this + 0xd8) = &DAT_066d0e40;
  return;
}


/* UISingletonDialog<UIWorldCupEntrance>::CloseDialog() */

void UISingletonDialog<UIWorldCupEntrance>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIWorldCupSelectTeam>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIWorldCupSelectTeam>::UISingletonDialog
          (UISingletonDialog<UIWorldCupSelectTeam> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066d0e90;
  *(undefined **)(this + 0xd8) = &DAT_066d11e0;
  return;
}


/* UISingletonDialog<UIWorldCupSelectTeam>::CloseDialog() */

void UISingletonDialog<UIWorldCupSelectTeam>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIWorldCupEndLevel>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIWorldCupEndLevel>::UISingletonDialog
          (UISingletonDialog<UIWorldCupEndLevel> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066d1230;
  *(undefined **)(this + 0xd8) = &DAT_066d1580;
  return;
}


/* UISingletonDialog<UIWorldCupEndLevel>::CloseDialog() */

void UISingletonDialog<UIWorldCupEndLevel>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIWorldCupRule>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIWorldCupRule>::UISingletonDialog(UISingletonDialog<UIWorldCupRule> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066d15d0;
  *(undefined **)(this + 0xd8) = &DAT_066d1920;
  return;
}


/* UISingletonDialog<UIWorldCupRule>::ShowDialog() */

UIWorldCupRule * UISingletonDialog<UIWorldCupRule>::ShowDialog(void)

{
  UIWorldCupRule *pUVar1;
  char cVar2;
  UIWorldCupRule *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIWorldCupRule *)0x0) {
    pUVar3 = ::operator_new(0x138);
    UIWorldCupRule::UIWorldCupRule(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIWorldCupRule *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIWorldCupRule *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIWorldCupRule>::CloseDialog() */

void UISingletonDialog<UIWorldCupRule>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIWorldCupEntrance>::ShowDialog() */

UIWorldCupEntrance * UISingletonDialog<UIWorldCupEntrance>::ShowDialog(void)

{
  UIWorldCupEntrance *pUVar1;
  char cVar2;
  UIWorldCupEntrance *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIWorldCupEntrance *)0x0) {
    pUVar3 = ::operator_new(0x138);
    UIWorldCupEntrance::UIWorldCupEntrance(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIWorldCupEntrance *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIWorldCupEntrance *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIWorldCupSelectTeam>::ShowDialog() */

UIWorldCupSelectTeam * UISingletonDialog<UIWorldCupSelectTeam>::ShowDialog(void)

{
  UIWorldCupSelectTeam *pUVar1;
  char cVar2;
  UIWorldCupSelectTeam *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIWorldCupSelectTeam *)0x0) {
    pUVar3 = ::operator_new(0x140);
    UIWorldCupSelectTeam::UIWorldCupSelectTeam(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIWorldCupSelectTeam *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIWorldCupSelectTeam *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<DaveClubUI>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<DaveClubUI>::~UISingletonDialog(UISingletonDialog<DaveClubUI> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066d3870;
  *(undefined ***)this = &PTR_GetClass_066d3520;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<DaveClubUI> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<DaveClubUI>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<DaveClubUI>::~UISingletonDialog(UISingletonDialog<DaveClubUI> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<DaveClubUI>::UISingletonDialog() */

void __thiscall
UISingletonDialog<DaveClubUI>::UISingletonDialog(UISingletonDialog<DaveClubUI> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066d3520;
  *(undefined **)(this + 0xd8) = &DAT_066d3870;
  return;
}


/* UISingletonDialog<NDDailyAwardUI>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<NDDailyAwardUI>::~UISingletonDialog(UISingletonDialog<NDDailyAwardUI> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066d6640;
  *(undefined ***)this = &PTR_GetClass_066d62f0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<NDDailyAwardUI> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<NDDailyAwardUI>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<NDDailyAwardUI>::~UISingletonDialog(UISingletonDialog<NDDailyAwardUI> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<NDDailyAwardUI>::UISingletonDialog() */

void __thiscall
UISingletonDialog<NDDailyAwardUI>::UISingletonDialog(UISingletonDialog<NDDailyAwardUI> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066d62f0;
  *(undefined **)(this + 0xd8) = &DAT_066d6640;
  return;
}


/* UISingletonDialog<NDDailyAwardUI>::CloseDialog() */

void UISingletonDialog<NDDailyAwardUI>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<DailySignUI>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<DailySignUI>::~UISingletonDialog(UISingletonDialog<DailySignUI> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066d7bd0;
  *(undefined ***)this = &PTR_GetClass_066d7880;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<DailySignUI> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<DailySignUI>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<DailySignUI>::~UISingletonDialog(UISingletonDialog<DailySignUI> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<DailySignUI>::UISingletonDialog() */

void __thiscall
UISingletonDialog<DailySignUI>::UISingletonDialog(UISingletonDialog<DailySignUI> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066d7880;
  *(undefined **)(this + 0xd8) = &DAT_066d7bd0;
  return;
}


/* UISingletonDialog<DailySignUI>::CloseDialog() */

void UISingletonDialog<DailySignUI>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<DailySignUI>::ShowDialog() */

DailySignUI * UISingletonDialog<DailySignUI>::ShowDialog(void)

{
  DailySignUI *pDVar1;
  char cVar2;
  DailySignUI *pDVar3;
  
  pDVar1 = m_pInstance;
  pDVar3 = pDVar1;
  if (m_pInstance == (DailySignUI *)0x0) {
    pDVar3 = ::operator_new(0x248);
    DailySignUI::DailySignUI(pDVar3);
    m_pInstance = pDVar3;
    cVar2 = (**(code **)(*(long *)pDVar3 + 0x310))(pDVar3);
    pDVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (DailySignUI *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (DailySignUI *)0x0;
      pDVar3 = pDVar1;
    }
  }
  return pDVar3;
}


/* UISingletonDialog<DailySignPage>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<DailySignPage>::~UISingletonDialog(UISingletonDialog<DailySignPage> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066d9150;
  *(undefined ***)this = &PTR_GetClass_066d8e00;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<DailySignPage> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<DailySignPage>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<DailySignPage>::~UISingletonDialog(UISingletonDialog<DailySignPage> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<DailySignPage>::UISingletonDialog() */

void __thiscall
UISingletonDialog<DailySignPage>::UISingletonDialog(UISingletonDialog<DailySignPage> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066d8e00;
  *(undefined **)(this + 0xd8) = &DAT_066d9150;
  return;
}


/* UISingletonDialog<UIRechargeReward>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIRechargeReward>::~UISingletonDialog(UISingletonDialog<UIRechargeReward> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066da020;
  *(undefined ***)this = &PTR_GetClass_066d9cd0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIRechargeReward> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIRechargeReward>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIRechargeReward>::~UISingletonDialog(UISingletonDialog<UIRechargeReward> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIRechargeReward>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIRechargeReward>::UISingletonDialog(UISingletonDialog<UIRechargeReward> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066d9cd0;
  *(undefined **)(this + 0xd8) = &DAT_066da020;
  return;
}


/* UISingletonDialog<UILimitLottery>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UILimitLottery>::~UISingletonDialog(UISingletonDialog<UILimitLottery> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066dcd60;
  *(undefined ***)this = &PTR_GetClass_066dca10;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UILimitLottery> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UILimitLottery>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UILimitLottery>::~UISingletonDialog(UISingletonDialog<UILimitLottery> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UILimitLotteryPage>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UILimitLotteryPage>::~UISingletonDialog
          (UISingletonDialog<UILimitLotteryPage> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066dd100;
  *(undefined ***)this = &PTR_GetClass_066dcdb0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UILimitLotteryPage> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UILimitLotteryPage>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UILimitLotteryPage>::~UISingletonDialog
          (UISingletonDialog<UILimitLotteryPage> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<LimitLotteryCrystalBuy>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<LimitLotteryCrystalBuy>::~UISingletonDialog
          (UISingletonDialog<LimitLotteryCrystalBuy> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066dc9c0;
  *(undefined ***)this = &PTR_GetClass_066dc670;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<LimitLotteryCrystalBuy> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<LimitLotteryCrystalBuy>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<LimitLotteryCrystalBuy>::~UISingletonDialog
          (UISingletonDialog<LimitLotteryCrystalBuy> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<LimitLotteryCupShop>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<LimitLotteryCupShop>::~UISingletonDialog
          (UISingletonDialog<LimitLotteryCupShop> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066dc620;
  *(undefined ***)this = &PTR_GetClass_066dc2d0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<LimitLotteryCupShop> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<LimitLotteryCupShop>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<LimitLotteryCupShop>::~UISingletonDialog
          (UISingletonDialog<LimitLotteryCupShop> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UILimitLottery>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UILimitLottery>::UISingletonDialog(UISingletonDialog<UILimitLottery> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066dca10;
  *(undefined **)(this + 0xd8) = &DAT_066dcd60;
  return;
}


/* UISingletonDialog<UILimitLottery>::CloseDialog() */

void UISingletonDialog<UILimitLottery>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UILimitLotteryPage>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UILimitLotteryPage>::UISingletonDialog
          (UISingletonDialog<UILimitLotteryPage> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066dcdb0;
  *(undefined **)(this + 0xd8) = &DAT_066dd100;
  return;
}


/* UISingletonDialog<UILimitLotteryPage>::CloseDialog() */

void UISingletonDialog<UILimitLotteryPage>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UILimitLottery>::GetSingletonPtr() */

undefined8 UISingletonDialog<UILimitLottery>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UILimitLotteryPage>::GetSingletonPtr() */

undefined8 UISingletonDialog<UILimitLotteryPage>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<LimitLotteryCrystalBuy>::UISingletonDialog() */

void __thiscall
UISingletonDialog<LimitLotteryCrystalBuy>::UISingletonDialog
          (UISingletonDialog<LimitLotteryCrystalBuy> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066dc670;
  *(undefined **)(this + 0xd8) = &DAT_066dc9c0;
  return;
}


/* UISingletonDialog<LimitLotteryCrystalBuy>::ShowDialog() */

LimitLotteryCrystalBuy * UISingletonDialog<LimitLotteryCrystalBuy>::ShowDialog(void)

{
  LimitLotteryCrystalBuy *pLVar1;
  char cVar2;
  LimitLotteryCrystalBuy *pLVar3;
  
  pLVar1 = m_pInstance;
  pLVar3 = pLVar1;
  if (m_pInstance == (LimitLotteryCrystalBuy *)0x0) {
    pLVar3 = ::operator_new(0x140);
    LimitLotteryCrystalBuy::LimitLotteryCrystalBuy(pLVar3);
    m_pInstance = pLVar3;
    cVar2 = (**(code **)(*(long *)pLVar3 + 0x310))(pLVar3);
    pLVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (LimitLotteryCrystalBuy *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (LimitLotteryCrystalBuy *)0x0;
      pLVar3 = pLVar1;
    }
  }
  return pLVar3;
}


/* UISingletonDialog<LimitLotteryCrystalBuy>::CloseDialog() */

void UISingletonDialog<LimitLotteryCrystalBuy>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<LimitLotteryCupShop>::UISingletonDialog() */

void __thiscall
UISingletonDialog<LimitLotteryCupShop>::UISingletonDialog
          (UISingletonDialog<LimitLotteryCupShop> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066dc2d0;
  *(undefined **)(this + 0xd8) = &DAT_066dc620;
  return;
}


/* UISingletonDialog<LimitLotteryCupShop>::CloseDialog() */

void UISingletonDialog<LimitLotteryCupShop>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<LimitLotteryCupShop>::ShowDialog() */

LimitLotteryCupShop * UISingletonDialog<LimitLotteryCupShop>::ShowDialog(void)

{
  LimitLotteryCupShop *pLVar1;
  char cVar2;
  LimitLotteryCupShop *pLVar3;
  
  pLVar1 = m_pInstance;
  pLVar3 = pLVar1;
  if (m_pInstance == (LimitLotteryCupShop *)0x0) {
    pLVar3 = ::operator_new(0x170);
    LimitLotteryCupShop::LimitLotteryCupShop(pLVar3);
    m_pInstance = pLVar3;
    cVar2 = (**(code **)(*(long *)pLVar3 + 0x310))(pLVar3);
    pLVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (LimitLotteryCupShop *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (LimitLotteryCupShop *)0x0;
      pLVar3 = pLVar1;
    }
  }
  return pLVar3;
}


/* UISingletonDialog<UILimitedSummon>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UILimitedSummon>::~UISingletonDialog(UISingletonDialog<UILimitedSummon> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066e0370;
  *(undefined ***)this = &PTR_GetClass_066e0020;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UILimitedSummon> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UILimitedSummon>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UILimitedSummon>::~UISingletonDialog(UISingletonDialog<UILimitedSummon> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<LimitedSummonPage>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<LimitedSummonPage>::~UISingletonDialog(UISingletonDialog<LimitedSummonPage> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066e0750;
  *(undefined ***)this = &PTR_GetClass_066e0400;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<LimitedSummonPage> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<LimitedSummonPage>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<LimitedSummonPage>::~UISingletonDialog(UISingletonDialog<LimitedSummonPage> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<LimitedSummonBundle>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<LimitedSummonBundle>::~UISingletonDialog
          (UISingletonDialog<LimitedSummonBundle> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066e0e90;
  *(undefined ***)this = &PTR_GetClass_066e0b40;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<LimitedSummonBundle> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<LimitedSummonBundle>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<LimitedSummonBundle>::~UISingletonDialog
          (UISingletonDialog<LimitedSummonBundle> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<LimitedSummonAddUp>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<LimitedSummonAddUp>::~UISingletonDialog
          (UISingletonDialog<LimitedSummonAddUp> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066e1230;
  *(undefined ***)this = &PTR_GetClass_066e0ee0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<LimitedSummonAddUp> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<LimitedSummonAddUp>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<LimitedSummonAddUp>::~UISingletonDialog
          (UISingletonDialog<LimitedSummonAddUp> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<LimitedSummonVIP>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<LimitedSummonVIP>::~UISingletonDialog(UISingletonDialog<LimitedSummonVIP> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066e0af0;
  *(undefined ***)this = &PTR_GetClass_066e07a0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<LimitedSummonVIP> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<LimitedSummonVIP>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<LimitedSummonVIP>::~UISingletonDialog(UISingletonDialog<LimitedSummonVIP> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<LimitedSummonRank>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<LimitedSummonRank>::~UISingletonDialog(UISingletonDialog<LimitedSummonRank> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066e15d0;
  *(undefined ***)this = &PTR_GetClass_066e1280;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<LimitedSummonRank> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<LimitedSummonRank>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<LimitedSummonRank>::~UISingletonDialog(UISingletonDialog<LimitedSummonRank> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UILimitedSummon>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UILimitedSummon>::UISingletonDialog(UISingletonDialog<UILimitedSummon> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066e0020;
  *(undefined **)(this + 0xd8) = &DAT_066e0370;
  return;
}


/* UISingletonDialog<UILimitedSummon>::CloseDialog() */

void UISingletonDialog<UILimitedSummon>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<LimitedSummonPage>::GetSingletonPtr() */

undefined8 UISingletonDialog<LimitedSummonPage>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<LimitedSummonVIP>::GetSingletonPtr() */

undefined8 UISingletonDialog<LimitedSummonVIP>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<LimitedSummonBundle>::GetSingletonPtr() */

undefined8 UISingletonDialog<LimitedSummonBundle>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<LimitedSummonAddUp>::GetSingletonPtr() */

undefined8 UISingletonDialog<LimitedSummonAddUp>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<LimitedSummonRank>::GetSingletonPtr() */

undefined8 UISingletonDialog<LimitedSummonRank>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<LimitedSummonVIP>::UISingletonDialog() */

void __thiscall
UISingletonDialog<LimitedSummonVIP>::UISingletonDialog(UISingletonDialog<LimitedSummonVIP> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066e07a0;
  *(undefined **)(this + 0xd8) = &DAT_066e0af0;
  return;
}


/* UISingletonDialog<UILimitedSummon>::GetSingletonPtr() */

undefined8 UISingletonDialog<UILimitedSummon>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<LimitedSummonRank>::UISingletonDialog() */

void __thiscall
UISingletonDialog<LimitedSummonRank>::UISingletonDialog(UISingletonDialog<LimitedSummonRank> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066e1280;
  *(undefined **)(this + 0xd8) = &DAT_066e15d0;
  return;
}


/* UISingletonDialog<LimitedSummonPage>::UISingletonDialog() */

void __thiscall
UISingletonDialog<LimitedSummonPage>::UISingletonDialog(UISingletonDialog<LimitedSummonPage> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066e0400;
  *(undefined **)(this + 0xd8) = &DAT_066e0750;
  return;
}


/* UISingletonDialog<LimitedSummonPage>::ShowDialog() */

LimitedSummonPage * UISingletonDialog<LimitedSummonPage>::ShowDialog(void)

{
  LimitedSummonPage *pLVar1;
  char cVar2;
  LimitedSummonPage *pLVar3;
  
  pLVar1 = m_pInstance;
  pLVar3 = pLVar1;
  if (m_pInstance == (LimitedSummonPage *)0x0) {
    pLVar3 = ::operator_new(0x138);
    memset(pLVar3,0,0x138);
    LimitedSummonPage::LimitedSummonPage(pLVar3);
    m_pInstance = pLVar3;
    cVar2 = (**(code **)(*(long *)pLVar3 + 0x310))(pLVar3);
    pLVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (LimitedSummonPage *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (LimitedSummonPage *)0x0;
      pLVar3 = pLVar1;
    }
  }
  return pLVar3;
}


/* UISingletonDialog<LimitedSummonBundle>::UISingletonDialog() */

void __thiscall
UISingletonDialog<LimitedSummonBundle>::UISingletonDialog
          (UISingletonDialog<LimitedSummonBundle> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066e0b40;
  *(undefined **)(this + 0xd8) = &DAT_066e0e90;
  return;
}


/* UISingletonDialog<LimitedSummonBundle>::ShowDialog() */

LimitedSummonBundle * UISingletonDialog<LimitedSummonBundle>::ShowDialog(void)

{
  LimitedSummonBundle *pLVar1;
  char cVar2;
  LimitedSummonBundle *pLVar3;
  
  pLVar1 = m_pInstance;
  pLVar3 = pLVar1;
  if (m_pInstance == (LimitedSummonBundle *)0x0) {
    pLVar3 = ::operator_new(0x140);
    memset(pLVar3,0,0x140);
    LimitedSummonBundle::LimitedSummonBundle(pLVar3);
    m_pInstance = pLVar3;
    cVar2 = (**(code **)(*(long *)pLVar3 + 0x310))(pLVar3);
    pLVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (LimitedSummonBundle *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (LimitedSummonBundle *)0x0;
      pLVar3 = pLVar1;
    }
  }
  return pLVar3;
}


/* UISingletonDialog<LimitedSummonAddUp>::UISingletonDialog() */

void __thiscall
UISingletonDialog<LimitedSummonAddUp>::UISingletonDialog
          (UISingletonDialog<LimitedSummonAddUp> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066e0ee0;
  *(undefined **)(this + 0xd8) = &DAT_066e1230;
  return;
}


/* UISingletonDialog<LimitedSummonAddUp>::ShowDialog() */

LimitedSummonAddUp * UISingletonDialog<LimitedSummonAddUp>::ShowDialog(void)

{
  LimitedSummonAddUp *pLVar1;
  char cVar2;
  LimitedSummonAddUp *pLVar3;
  
  pLVar1 = m_pInstance;
  pLVar3 = pLVar1;
  if (m_pInstance == (LimitedSummonAddUp *)0x0) {
    pLVar3 = ::operator_new(0x140);
    memset(pLVar3,0,0x140);
    LimitedSummonAddUp::LimitedSummonAddUp(pLVar3);
    m_pInstance = pLVar3;
    cVar2 = (**(code **)(*(long *)pLVar3 + 0x310))(pLVar3);
    pLVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (LimitedSummonAddUp *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (LimitedSummonAddUp *)0x0;
      pLVar3 = pLVar1;
    }
  }
  return pLVar3;
}


/* UISingletonDialog<LimitedSummonVIP>::ShowDialog() */

LimitedSummonVIP * UISingletonDialog<LimitedSummonVIP>::ShowDialog(void)

{
  LimitedSummonVIP *pLVar1;
  char cVar2;
  LimitedSummonVIP *pLVar3;
  
  pLVar1 = m_pInstance;
  pLVar3 = pLVar1;
  if (m_pInstance == (LimitedSummonVIP *)0x0) {
    pLVar3 = ::operator_new(0x148);
    LimitedSummonVIP::LimitedSummonVIP(pLVar3);
    m_pInstance = pLVar3;
    cVar2 = (**(code **)(*(long *)pLVar3 + 0x310))(pLVar3);
    pLVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (LimitedSummonVIP *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (LimitedSummonVIP *)0x0;
      pLVar3 = pLVar1;
    }
  }
  return pLVar3;
}


/* UISingletonDialog<LimitedSummonRank>::ShowDialog() */

LimitedSummonRank * UISingletonDialog<LimitedSummonRank>::ShowDialog(void)

{
  LimitedSummonRank *pLVar1;
  char cVar2;
  LimitedSummonRank *pLVar3;
  
  pLVar1 = m_pInstance;
  pLVar3 = pLVar1;
  if (m_pInstance == (LimitedSummonRank *)0x0) {
    pLVar3 = ::operator_new(0x160);
    LimitedSummonRank::LimitedSummonRank(pLVar3);
    m_pInstance = pLVar3;
    cVar2 = (**(code **)(*(long *)pLVar3 + 0x310))(pLVar3);
    pLVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (LimitedSummonRank *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (LimitedSummonRank *)0x0;
      pLVar3 = pLVar1;
    }
  }
  return pLVar3;
}


/* UISingletonDialog<UINewYearGoodsAnnouncement>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewYearGoodsAnnouncement>::~UISingletonDialog
          (UISingletonDialog<UINewYearGoodsAnnouncement> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066e3c90;
  *(undefined ***)this = &PTR_GetClass_066e3940;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UINewYearGoodsAnnouncement> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UINewYearGoodsAnnouncement>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewYearGoodsAnnouncement>::~UISingletonDialog
          (UISingletonDialog<UINewYearGoodsAnnouncement> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UINewYearGoods>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewYearGoods>::~UISingletonDialog(UISingletonDialog<UINewYearGoods> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066e4030;
  *(undefined ***)this = &PTR_GetClass_066e3ce0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UINewYearGoods> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UINewYearGoods>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewYearGoods>::~UISingletonDialog(UISingletonDialog<UINewYearGoods> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UINewYearGoodsSelect>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewYearGoodsSelect>::~UISingletonDialog
          (UISingletonDialog<UINewYearGoodsSelect> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066e43d0;
  *(undefined ***)this = &PTR_GetClass_066e4080;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UINewYearGoodsSelect> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UINewYearGoodsSelect>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewYearGoodsSelect>::~UISingletonDialog
          (UISingletonDialog<UINewYearGoodsSelect> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UINewYearGoodsAnnouncement>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewYearGoodsAnnouncement>::UISingletonDialog
          (UISingletonDialog<UINewYearGoodsAnnouncement> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066e3940;
  *(undefined **)(this + 0xd8) = &DAT_066e3c90;
  return;
}


/* UISingletonDialog<UINewYearGoodsAnnouncement>::CloseDialog() */

void UISingletonDialog<UINewYearGoodsAnnouncement>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UINewYearGoods>::GetSingletonPtr() */

undefined8 UISingletonDialog<UINewYearGoods>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UINewYearGoods>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewYearGoods>::UISingletonDialog(UISingletonDialog<UINewYearGoods> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066e3ce0;
  *(undefined **)(this + 0xd8) = &DAT_066e4030;
  return;
}


/* UISingletonDialog<UINewYearGoods>::CloseDialog() */

void UISingletonDialog<UINewYearGoods>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UINewYearGoodsSelect>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewYearGoodsSelect>::UISingletonDialog
          (UISingletonDialog<UINewYearGoodsSelect> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066e4080;
  *(undefined **)(this + 0xd8) = &DAT_066e43d0;
  return;
}


/* UISingletonDialog<UINewYearGoodsSelect>::CloseDialog() */

void UISingletonDialog<UINewYearGoodsSelect>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UINewYearGoodsSelect>::GetSingletonPtr() */

undefined8 UISingletonDialog<UINewYearGoodsSelect>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UINewYearGoodsSelect>::ShowDialog() */

UINewYearGoodsSelect * UISingletonDialog<UINewYearGoodsSelect>::ShowDialog(void)

{
  UINewYearGoodsSelect *pUVar1;
  char cVar2;
  UINewYearGoodsSelect *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UINewYearGoodsSelect *)0x0) {
    pUVar3 = ::operator_new(0x198);
    UINewYearGoodsSelect::UINewYearGoodsSelect(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UINewYearGoodsSelect *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UINewYearGoodsSelect *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UICarnivalBundleInfo>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UICarnivalBundleInfo>::~UISingletonDialog
          (UISingletonDialog<UICarnivalBundleInfo> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066e60d0;
  *(undefined ***)this = &PTR_GetClass_066e5d80;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UICarnivalBundleInfo> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UICarnivalBundleInfo>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UICarnivalBundleInfo>::~UISingletonDialog
          (UISingletonDialog<UICarnivalBundleInfo> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UICarnival>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UICarnival>::~UISingletonDialog(UISingletonDialog<UICarnival> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066e6470;
  *(undefined ***)this = &PTR_GetClass_066e6120;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UICarnival> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UICarnival>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UICarnival>::~UISingletonDialog(UISingletonDialog<UICarnival> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UICarnival>::GetSingletonPtr() */

undefined8 UISingletonDialog<UICarnival>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UICarnivalBundleInfo>::CloseDialog() */

void UISingletonDialog<UICarnivalBundleInfo>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UICarnival>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UICarnival>::UISingletonDialog(UISingletonDialog<UICarnival> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066e6120;
  *(undefined **)(this + 0xd8) = &DAT_066e6470;
  return;
}


/* UISingletonDialog<UICarnival>::CloseDialog() */

void UISingletonDialog<UICarnival>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UICarnivalBundleInfo>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UICarnivalBundleInfo>::UISingletonDialog
          (UISingletonDialog<UICarnivalBundleInfo> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066e5d80;
  *(undefined **)(this + 0xd8) = &DAT_066e60d0;
  return;
}


/* UISingletonDialog<UICarnivalBundleInfo>::ShowDialog() */

UICarnivalBundleInfo * UISingletonDialog<UICarnivalBundleInfo>::ShowDialog(void)

{
  UICarnivalBundleInfo *pUVar1;
  char cVar2;
  UICarnivalBundleInfo *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UICarnivalBundleInfo *)0x0) {
    pUVar3 = ::operator_new(0x138);
    memset(pUVar3,0,0x138);
    UICarnivalBundleInfo::UICarnivalBundleInfo(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UICarnivalBundleInfo *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UICarnivalBundleInfo *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIGeneralPlantChipsExchange>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIGeneralPlantChipsExchange>::~UISingletonDialog
          (UISingletonDialog<UIGeneralPlantChipsExchange> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066e8670;
  *(undefined ***)this = &PTR_GetClass_066e8320;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIGeneralPlantChipsExchange> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIGeneralPlantChipsExchange>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIGeneralPlantChipsExchange>::~UISingletonDialog
          (UISingletonDialog<UIGeneralPlantChipsExchange> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIGeneralPlantChipsExchange>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIGeneralPlantChipsExchange>::UISingletonDialog
          (UISingletonDialog<UIGeneralPlantChipsExchange> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066e8320;
  *(undefined **)(this + 0xd8) = &DAT_066e8670;
  return;
}


/* UISingletonDialog<UIGeneralPlantChipsExchange>::CloseDialog() */

void UISingletonDialog<UIGeneralPlantChipsExchange>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIAdsLottery>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIAdsLottery>::~UISingletonDialog(UISingletonDialog<UIAdsLottery> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066e9590;
  *(undefined ***)this = &PTR_GetClass_066e9240;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIAdsLottery> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIAdsLottery>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIAdsLottery>::~UISingletonDialog(UISingletonDialog<UIAdsLottery> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIAdsLottery>::GetSingletonPtr() */

undefined8 UISingletonDialog<UIAdsLottery>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UIAdsLottery>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIAdsLottery>::UISingletonDialog(UISingletonDialog<UIAdsLottery> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066e9240;
  *(undefined **)(this + 0xd8) = &DAT_066e9590;
  return;
}


/* UISingletonDialog<UIAdsLottery>::CloseDialog() */

void UISingletonDialog<UIAdsLottery>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIConsumeAndReceiveExtra>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIConsumeAndReceiveExtra>::~UISingletonDialog
          (UISingletonDialog<UIConsumeAndReceiveExtra> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066ea380;
  *(undefined ***)this = &PTR_GetClass_066ea030;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIConsumeAndReceiveExtra> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIConsumeAndReceiveExtra>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIConsumeAndReceiveExtra>::~UISingletonDialog
          (UISingletonDialog<UIConsumeAndReceiveExtra> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UILimitGroupShowReward>::ShowDialog() */

UILimitGroupShowReward * UISingletonDialog<UILimitGroupShowReward>::ShowDialog(void)

{
  UILimitGroupShowReward *pUVar1;
  char cVar2;
  UILimitGroupShowReward *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UILimitGroupShowReward *)0x0) {
    pUVar3 = ::operator_new(0x138);
    UILimitGroupShowReward::UILimitGroupShowReward(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UILimitGroupShowReward *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UILimitGroupShowReward *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIConsumeAndReceiveExtra>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIConsumeAndReceiveExtra>::UISingletonDialog
          (UISingletonDialog<UIConsumeAndReceiveExtra> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066ea030;
  *(undefined **)(this + 0xd8) = &DAT_066ea380;
  return;
}


/* UISingletonDialog<UIPlayerSurvey>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPlayerSurvey>::~UISingletonDialog(UISingletonDialog<UIPlayerSurvey> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066eaea0;
  *(undefined ***)this = &PTR_GetClass_066eab50;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIPlayerSurvey> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIPlayerSurvey>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPlayerSurvey>::~UISingletonDialog(UISingletonDialog<UIPlayerSurvey> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIPlayerSurvey>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPlayerSurvey>::UISingletonDialog(UISingletonDialog<UIPlayerSurvey> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066eab50;
  *(undefined **)(this + 0xd8) = &DAT_066eaea0;
  return;
}


/* UISingletonDialog<UIPlayerSurvey>::CloseDialog() */

void UISingletonDialog<UIPlayerSurvey>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<ActivityCollectionPlayerSurvey>::GetSingletonPtr() */

undefined8 UISingletonDialog<ActivityCollectionPlayerSurvey>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UILimitGroupBuy>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UILimitGroupBuy>::~UISingletonDialog(UISingletonDialog<UILimitGroupBuy> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066ec8a0;
  *(undefined ***)this = &PTR_GetClass_066ec550;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UILimitGroupBuy> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UILimitGroupBuy>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UILimitGroupBuy>::~UISingletonDialog(UISingletonDialog<UILimitGroupBuy> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UILimitGroupBuyNotice>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UILimitGroupBuyNotice>::~UISingletonDialog
          (UISingletonDialog<UILimitGroupBuyNotice> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066ec500;
  *(undefined ***)this = &PTR_GetClass_066ec1b0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UILimitGroupBuyNotice> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UILimitGroupBuyNotice>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UILimitGroupBuyNotice>::~UISingletonDialog
          (UISingletonDialog<UILimitGroupBuyNotice> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UILimitGroupBuyDiscount>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UILimitGroupBuyDiscount>::~UISingletonDialog
          (UISingletonDialog<UILimitGroupBuyDiscount> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066ec160;
  *(undefined ***)this = &PTR_GetClass_066ebe10;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UILimitGroupBuyDiscount> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UILimitGroupBuyDiscount>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UILimitGroupBuyDiscount>::~UISingletonDialog
          (UISingletonDialog<UILimitGroupBuyDiscount> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UILimitGroupBuyConfirm>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UILimitGroupBuyConfirm>::~UISingletonDialog
          (UISingletonDialog<UILimitGroupBuyConfirm> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066eba20;
  *(undefined ***)this = &PTR_GetClass_066eb6d0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UILimitGroupBuyConfirm> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UILimitGroupBuyConfirm>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UILimitGroupBuyConfirm>::~UISingletonDialog
          (UISingletonDialog<UILimitGroupBuyConfirm> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UILimitGroupShowReward>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UILimitGroupShowReward>::~UISingletonDialog
          (UISingletonDialog<UILimitGroupShowReward> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066ebdc0;
  *(undefined ***)this = &PTR_GetClass_066eba70;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UILimitGroupShowReward> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UILimitGroupShowReward>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UILimitGroupShowReward>::~UISingletonDialog
          (UISingletonDialog<UILimitGroupShowReward> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UILimitGroupBuyDiscount>::GetSingletonPtr() */

undefined8 UISingletonDialog<UILimitGroupBuyDiscount>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UILimitGroupBuy>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UILimitGroupBuy>::UISingletonDialog(UISingletonDialog<UILimitGroupBuy> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066ec550;
  *(undefined **)(this + 0xd8) = &DAT_066ec8a0;
  return;
}


/* UISingletonDialog<UILimitGroupBuy>::CloseDialog() */

void UISingletonDialog<UILimitGroupBuy>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UILimitGroupBuy>::GetSingletonPtr() */

undefined8 UISingletonDialog<UILimitGroupBuy>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UILimitGroupBuyNotice>::GetSingletonPtr() */

undefined8 UISingletonDialog<UILimitGroupBuyNotice>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UILimitGroupBuyNotice>::CloseDialog() */

void UISingletonDialog<UILimitGroupBuyNotice>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UILimitGroupBuyDiscount>::CloseDialog() */

void UISingletonDialog<UILimitGroupBuyDiscount>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UILimitGroupBuyConfirm>::GetSingletonPtr() */

undefined8 UISingletonDialog<UILimitGroupBuyConfirm>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UILimitGroupBuyConfirm>::CloseDialog() */

void UISingletonDialog<UILimitGroupBuyConfirm>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UILimitGroupBuyNotice>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UILimitGroupBuyNotice>::UISingletonDialog
          (UISingletonDialog<UILimitGroupBuyNotice> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066ec1b0;
  *(undefined **)(this + 0xd8) = &DAT_066ec500;
  return;
}


/* UISingletonDialog<UILimitGroupBuyNotice>::ShowDialog() */

UILimitGroupBuyNotice * UISingletonDialog<UILimitGroupBuyNotice>::ShowDialog(void)

{
  UILimitGroupBuyNotice *pUVar1;
  char cVar2;
  UILimitGroupBuyNotice *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UILimitGroupBuyNotice *)0x0) {
    pUVar3 = ::operator_new(0x138);
    UILimitGroupBuyNotice::UILimitGroupBuyNotice(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UILimitGroupBuyNotice *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UILimitGroupBuyNotice *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UILimitGroupBuyDiscount>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UILimitGroupBuyDiscount>::UISingletonDialog
          (UISingletonDialog<UILimitGroupBuyDiscount> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066ebe10;
  *(undefined **)(this + 0xd8) = &DAT_066ec160;
  return;
}


/* UISingletonDialog<UILimitGroupBuyConfirm>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UILimitGroupBuyConfirm>::UISingletonDialog
          (UISingletonDialog<UILimitGroupBuyConfirm> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066eb6d0;
  *(undefined **)(this + 0xd8) = &DAT_066eba20;
  return;
}


/* UISingletonDialog<UILimitGroupShowReward>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UILimitGroupShowReward>::UISingletonDialog
          (UISingletonDialog<UILimitGroupShowReward> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066eba70;
  *(undefined **)(this + 0xd8) = &DAT_066ebdc0;
  return;
}


/* UISingletonDialog<UILimitGroupShowReward>::CloseDialog() */

void UISingletonDialog<UILimitGroupShowReward>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UILimitGroupBuyDiscount>::ShowDialog() */

UILimitGroupBuyDiscount * UISingletonDialog<UILimitGroupBuyDiscount>::ShowDialog(void)

{
  UILimitGroupBuyDiscount *pUVar1;
  char cVar2;
  UILimitGroupBuyDiscount *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UILimitGroupBuyDiscount *)0x0) {
    pUVar3 = ::operator_new(0x150);
    UILimitGroupBuyDiscount::UILimitGroupBuyDiscount(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UILimitGroupBuyDiscount *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UILimitGroupBuyDiscount *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UILimitGroupBuyConfirm>::ShowDialog() */

UILimitGroupBuyConfirm * UISingletonDialog<UILimitGroupBuyConfirm>::ShowDialog(void)

{
  UILimitGroupBuyConfirm *pUVar1;
  char cVar2;
  UILimitGroupBuyConfirm *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UILimitGroupBuyConfirm *)0x0) {
    pUVar3 = ::operator_new(0x160);
    UILimitGroupBuyConfirm::UILimitGroupBuyConfirm(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UILimitGroupBuyConfirm *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UILimitGroupBuyConfirm *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIFightZodiacIntro>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIFightZodiacIntro>::~UISingletonDialog
          (UISingletonDialog<UIFightZodiacIntro> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066ef160;
  *(undefined ***)this = &PTR_GetClass_066eee10;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIFightZodiacIntro> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIFightZodiacIntro>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIFightZodiacIntro>::~UISingletonDialog
          (UISingletonDialog<UIFightZodiacIntro> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIFightZodiac>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIFightZodiac>::~UISingletonDialog(UISingletonDialog<UIFightZodiac> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066ef500;
  *(undefined ***)this = &PTR_GetClass_066ef1b0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIFightZodiac> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIFightZodiac>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIFightZodiac>::~UISingletonDialog(UISingletonDialog<UIFightZodiac> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIFightZodiacReward>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIFightZodiacReward>::~UISingletonDialog
          (UISingletonDialog<UIFightZodiacReward> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066ef8a0;
  *(undefined ***)this = &PTR_GetClass_066ef550;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIFightZodiacReward> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIFightZodiacReward>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIFightZodiacReward>::~UISingletonDialog
          (UISingletonDialog<UIFightZodiacReward> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIFightZodiac>::GetSingletonPtr() */

undefined8 UISingletonDialog<UIFightZodiac>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UIFightZodiacIntro>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIFightZodiacIntro>::UISingletonDialog
          (UISingletonDialog<UIFightZodiacIntro> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066eee10;
  *(undefined **)(this + 0xd8) = &DAT_066ef160;
  return;
}


/* UISingletonDialog<UIFightZodiacIntro>::CloseDialog() */

void UISingletonDialog<UIFightZodiacIntro>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIFightZodiac>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIFightZodiac>::UISingletonDialog(UISingletonDialog<UIFightZodiac> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066ef1b0;
  *(undefined **)(this + 0xd8) = &DAT_066ef500;
  return;
}


/* UISingletonDialog<UIFightZodiac>::CloseDialog() */

void UISingletonDialog<UIFightZodiac>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIFightZodiacReward>::CloseDialog() */

void UISingletonDialog<UIFightZodiacReward>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIFightZodiacReward>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIFightZodiacReward>::UISingletonDialog
          (UISingletonDialog<UIFightZodiacReward> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066ef550;
  *(undefined **)(this + 0xd8) = &DAT_066ef8a0;
  return;
}


/* UISingletonDialog<UIFightZodiacReward>::ShowDialog() */

UIFightZodiacReward * UISingletonDialog<UIFightZodiacReward>::ShowDialog(void)

{
  UIFightZodiacReward *pUVar1;
  char cVar2;
  UIFightZodiacReward *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIFightZodiacReward *)0x0) {
    pUVar3 = ::operator_new(0x140);
    memset(pUVar3,0,0x140);
    UIFightZodiacReward::UIFightZodiacReward(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIFightZodiacReward *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIFightZodiacReward *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UICallofWish>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UICallofWish>::~UISingletonDialog(UISingletonDialog<UICallofWish> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066f12f0;
  *(undefined ***)this = &PTR_GetClass_066f0fa0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UICallofWish> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UICallofWish>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UICallofWish>::~UISingletonDialog(UISingletonDialog<UICallofWish> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<CallofWishPage>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<CallofWishPage>::~UISingletonDialog(UISingletonDialog<CallofWishPage> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066f16d0;
  *(undefined ***)this = &PTR_GetClass_066f1380;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<CallofWishPage> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<CallofWishPage>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<CallofWishPage>::~UISingletonDialog(UISingletonDialog<CallofWishPage> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UICallofWish>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UICallofWish>::UISingletonDialog(UISingletonDialog<UICallofWish> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066f0fa0;
  *(undefined **)(this + 0xd8) = &DAT_066f12f0;
  return;
}


/* UISingletonDialog<UICallofWish>::CloseDialog() */

void UISingletonDialog<UICallofWish>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<CallofWishPage>::GetSingletonPtr() */

undefined8 UISingletonDialog<CallofWishPage>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<CallofWishPage>::UISingletonDialog() */

void __thiscall
UISingletonDialog<CallofWishPage>::UISingletonDialog(UISingletonDialog<CallofWishPage> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066f1380;
  *(undefined **)(this + 0xd8) = &DAT_066f16d0;
  return;
}


/* UISingletonDialog<CallofWishPage>::ShowDialog() */

CallofWishPage * UISingletonDialog<CallofWishPage>::ShowDialog(void)

{
  CallofWishPage *pCVar1;
  char cVar2;
  CallofWishPage *pCVar3;
  
  pCVar1 = m_pInstance;
  pCVar3 = pCVar1;
  if (m_pInstance == (CallofWishPage *)0x0) {
    pCVar3 = ::operator_new(0x140);
    CallofWishPage::CallofWishPage(pCVar3);
    m_pInstance = pCVar3;
    cVar2 = (**(code **)(*(long *)pCVar3 + 0x310))(pCVar3);
    pCVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (CallofWishPage *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (CallofWishPage *)0x0;
      pCVar3 = pCVar1;
    }
  }
  return pCVar3;
}


/* UISingletonDialog<UICallofWish>::GetSingletonPtr() */

undefined8 UISingletonDialog<UICallofWish>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UITravelLog>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UITravelLog>::~UISingletonDialog(UISingletonDialog<UITravelLog> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066f3830;
  *(undefined ***)this = &PTR_GetClass_066f34e0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UITravelLog> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UITravelLog>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UITravelLog>::~UISingletonDialog(UISingletonDialog<UITravelLog> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UITravelLog>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UITravelLog>::UISingletonDialog(UISingletonDialog<UITravelLog> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066f34e0;
  *(undefined **)(this + 0xd8) = &DAT_066f3830;
  return;
}


/* UISingletonDialog<UITravelLog>::CloseDialog() */

void UISingletonDialog<UITravelLog>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UITravelLog>::GetSingletonPtr() */

undefined8 UISingletonDialog<UITravelLog>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UIDaveTreasure>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIDaveTreasure>::~UISingletonDialog(UISingletonDialog<UIDaveTreasure> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066f6b40;
  *(undefined ***)this = &PTR_GetClass_066f67f0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIDaveTreasure> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIDaveTreasure>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIDaveTreasure>::~UISingletonDialog(UISingletonDialog<UIDaveTreasure> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIPennyGuide>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPennyGuide>::~UISingletonDialog(UISingletonDialog<UIPennyGuide> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066f6ee0;
  *(undefined ***)this = &PTR_GetClass_066f6b90;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIPennyGuide> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIPennyGuide>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPennyGuide>::~UISingletonDialog(UISingletonDialog<UIPennyGuide> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIDaveTreasure>::GetSingletonPtr() */

undefined8 UISingletonDialog<UIDaveTreasure>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UIPennyGuide>::GetSingletonPtr() */

undefined8 UISingletonDialog<UIPennyGuide>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UIDaveTreasure>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIDaveTreasure>::UISingletonDialog(UISingletonDialog<UIDaveTreasure> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066f67f0;
  *(undefined **)(this + 0xd8) = &DAT_066f6b40;
  return;
}


/* UISingletonDialog<UIDaveTreasure>::CloseDialog() */

void UISingletonDialog<UIDaveTreasure>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIPennyGuide>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPennyGuide>::UISingletonDialog(UISingletonDialog<UIPennyGuide> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066f6b90;
  *(undefined **)(this + 0xd8) = &DAT_066f6ee0;
  return;
}


/* UISingletonDialog<UIPennyGuide>::CloseDialog() */

void UISingletonDialog<UIPennyGuide>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIHappyVaseBreaker>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIHappyVaseBreaker>::~UISingletonDialog
          (UISingletonDialog<UIHappyVaseBreaker> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066fb060;
  *(undefined ***)this = &PTR_GetClass_066fad10;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIHappyVaseBreaker> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIHappyVaseBreaker>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIHappyVaseBreaker>::~UISingletonDialog
          (UISingletonDialog<UIHappyVaseBreaker> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIHappyVaseBreaker>::GetSingletonPtr() */

undefined8 UISingletonDialog<UIHappyVaseBreaker>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UIHappyVaseBreaker>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIHappyVaseBreaker>::UISingletonDialog
          (UISingletonDialog<UIHappyVaseBreaker> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066fad10;
  *(undefined **)(this + 0xd8) = &DAT_066fb060;
  return;
}


/* UISingletonDialog<UIHappyVaseBreaker>::CloseDialog() */

void UISingletonDialog<UIHappyVaseBreaker>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIFestivalGoldenEggEntrance>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIFestivalGoldenEggEntrance>::~UISingletonDialog
          (UISingletonDialog<UIFestivalGoldenEggEntrance> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066fc700;
  *(undefined ***)this = &PTR_GetClass_066fc3b0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIFestivalGoldenEggEntrance> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIFestivalGoldenEggEntrance>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIFestivalGoldenEggEntrance>::~UISingletonDialog
          (UISingletonDialog<UIFestivalGoldenEggEntrance> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIFestivalGoldenEggSelect>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIFestivalGoldenEggSelect>::~UISingletonDialog
          (UISingletonDialog<UIFestivalGoldenEggSelect> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066fcaa0;
  *(undefined ***)this = &PTR_GetClass_066fc750;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIFestivalGoldenEggSelect> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIFestivalGoldenEggSelect>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIFestivalGoldenEggSelect>::~UISingletonDialog
          (UISingletonDialog<UIFestivalGoldenEggSelect> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIFestivalGoldenEgg>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIFestivalGoldenEgg>::~UISingletonDialog
          (UISingletonDialog<UIFestivalGoldenEgg> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066fce40;
  *(undefined ***)this = &PTR_GetClass_066fcaf0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIFestivalGoldenEgg> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIFestivalGoldenEgg>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIFestivalGoldenEgg>::~UISingletonDialog
          (UISingletonDialog<UIFestivalGoldenEgg> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIFestivalGoldenEggEntrance>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIFestivalGoldenEggEntrance>::UISingletonDialog
          (UISingletonDialog<UIFestivalGoldenEggEntrance> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066fc3b0;
  *(undefined **)(this + 0xd8) = &DAT_066fc700;
  return;
}


/* UISingletonDialog<UIFestivalGoldenEggEntrance>::CloseDialog() */

void UISingletonDialog<UIFestivalGoldenEggEntrance>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIFestivalGoldenEggSelect>::CloseDialog() */

void UISingletonDialog<UIFestivalGoldenEggSelect>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIFestivalGoldenEgg>::GetSingletonPtr() */

undefined8 UISingletonDialog<UIFestivalGoldenEgg>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UIFestivalGoldenEgg>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIFestivalGoldenEgg>::UISingletonDialog
          (UISingletonDialog<UIFestivalGoldenEgg> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066fcaf0;
  *(undefined **)(this + 0xd8) = &DAT_066fce40;
  return;
}


/* UISingletonDialog<UIFestivalGoldenEgg>::CloseDialog() */

void UISingletonDialog<UIFestivalGoldenEgg>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIFestivalGoldenEggSelect>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIFestivalGoldenEggSelect>::UISingletonDialog
          (UISingletonDialog<UIFestivalGoldenEggSelect> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066fc750;
  *(undefined **)(this + 0xd8) = &DAT_066fcaa0;
  return;
}


/* UISingletonDialog<UIFestivalGoldenEggSelect>::ShowDialog() */

UIFestivalGoldenEggSelect * UISingletonDialog<UIFestivalGoldenEggSelect>::ShowDialog(void)

{
  UIFestivalGoldenEggSelect *pUVar1;
  char cVar2;
  UIFestivalGoldenEggSelect *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIFestivalGoldenEggSelect *)0x0) {
    pUVar3 = ::operator_new(0x200);
    memset(pUVar3,0,0x200);
    UIFestivalGoldenEggSelect::UIFestivalGoldenEggSelect(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIFestivalGoldenEggSelect *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIFestivalGoldenEggSelect *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIFestivalGoldenEgg>::ShowDialog() */

UIFestivalGoldenEgg * UISingletonDialog<UIFestivalGoldenEgg>::ShowDialog(void)

{
  UIFestivalGoldenEgg *pUVar1;
  char cVar2;
  UIFestivalGoldenEgg *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIFestivalGoldenEgg *)0x0) {
    pUVar3 = ::operator_new(0x2d8);
    UIFestivalGoldenEgg::UIFestivalGoldenEgg(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIFestivalGoldenEgg *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIFestivalGoldenEgg *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIArborDay>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIArborDay>::~UISingletonDialog(UISingletonDialog<UIArborDay> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066fe8b0;
  *(undefined ***)this = &PTR_GetClass_066fe560;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIArborDay> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIArborDay>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIArborDay>::~UISingletonDialog(UISingletonDialog<UIArborDay> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIArborDay>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIArborDay>::UISingletonDialog(UISingletonDialog<UIArborDay> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_066fe560;
  *(undefined **)(this + 0xd8) = &DAT_066fe8b0;
  return;
}


/* UISingletonDialog<UIBattleOrder>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIBattleOrder>::~UISingletonDialog(UISingletonDialog<UIBattleOrder> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06701130;
  *(undefined ***)this = &PTR_GetClass_06700de0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIBattleOrder> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIBattleOrder>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIBattleOrder>::~UISingletonDialog(UISingletonDialog<UIBattleOrder> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIBattleOrderBundle>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIBattleOrderBundle>::~UISingletonDialog
          (UISingletonDialog<UIBattleOrderBundle> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_067009f0;
  *(undefined ***)this = &PTR_GetClass_067006a0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIBattleOrderBundle> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIBattleOrderBundle>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIBattleOrderBundle>::~UISingletonDialog
          (UISingletonDialog<UIBattleOrderBundle> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIBattleOrderPrivilege>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIBattleOrderPrivilege>::~UISingletonDialog
          (UISingletonDialog<UIBattleOrderPrivilege> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06700d90;
  *(undefined ***)this = &PTR_GetClass_06700a40;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIBattleOrderPrivilege> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIBattleOrderPrivilege>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIBattleOrderPrivilege>::~UISingletonDialog
          (UISingletonDialog<UIBattleOrderPrivilege> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIBattleOrderTurnPagesList>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIBattleOrderTurnPagesList>::~UISingletonDialog
          (UISingletonDialog<UIBattleOrderTurnPagesList> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06701870;
  *(undefined ***)this = &PTR_GetClass_06701520;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIBattleOrderTurnPagesList> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIBattleOrderTurnPagesList>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIBattleOrderTurnPagesList>::~UISingletonDialog
          (UISingletonDialog<UIBattleOrderTurnPagesList> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<BattleOrderLotteryPanel>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<BattleOrderLotteryPanel>::~UISingletonDialog
          (UISingletonDialog<BattleOrderLotteryPanel> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_067014d0;
  *(undefined ***)this = &PTR_GetClass_06701180;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<BattleOrderLotteryPanel> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<BattleOrderLotteryPanel>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<BattleOrderLotteryPanel>::~UISingletonDialog
          (UISingletonDialog<BattleOrderLotteryPanel> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIBattleOrderIntroduction>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIBattleOrderIntroduction>::~UISingletonDialog
          (UISingletonDialog<UIBattleOrderIntroduction> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06700650;
  *(undefined ***)this = &PTR_GetClass_06700300;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIBattleOrderIntroduction> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIBattleOrderIntroduction>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIBattleOrderIntroduction>::~UISingletonDialog
          (UISingletonDialog<UIBattleOrderIntroduction> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIBattleOrderIntroduction>::CloseDialog() */

void UISingletonDialog<UIBattleOrderIntroduction>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIBattleOrder>::GetSingletonPtr() */

undefined8 UISingletonDialog<UIBattleOrder>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UIBattleOrderBundle>::CloseDialog() */

void UISingletonDialog<UIBattleOrderBundle>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIBattleOrderPrivilege>::CloseDialog() */

void UISingletonDialog<UIBattleOrderPrivilege>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIBattleOrder>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIBattleOrder>::UISingletonDialog(UISingletonDialog<UIBattleOrder> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06700de0;
  *(undefined **)(this + 0xd8) = &DAT_06701130;
  return;
}


/* UISingletonDialog<UIBattleOrder>::CloseDialog() */

void UISingletonDialog<UIBattleOrder>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIBattleOrderPrivilege>::GetSingletonPtr() */

undefined8 UISingletonDialog<UIBattleOrderPrivilege>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<BattleOrderLotteryPanel>::UISingletonDialog() */

void __thiscall
UISingletonDialog<BattleOrderLotteryPanel>::UISingletonDialog
          (UISingletonDialog<BattleOrderLotteryPanel> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06701180;
  *(undefined **)(this + 0xd8) = &DAT_067014d0;
  return;
}


/* UISingletonDialog<UIBattleOrderTurnPagesList>::CloseDialog() */

void UISingletonDialog<UIBattleOrderTurnPagesList>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIBattleOrderBundle>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIBattleOrderBundle>::UISingletonDialog
          (UISingletonDialog<UIBattleOrderBundle> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_067006a0;
  *(undefined **)(this + 0xd8) = &DAT_067009f0;
  return;
}


/* UISingletonDialog<UIBattleOrderBundle>::ShowDialog() */

UIBattleOrderBundle * UISingletonDialog<UIBattleOrderBundle>::ShowDialog(void)

{
  UIBattleOrderBundle *pUVar1;
  char cVar2;
  UIBattleOrderBundle *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIBattleOrderBundle *)0x0) {
    pUVar3 = ::operator_new(0x140);
    memset(pUVar3,0,0x140);
    UIBattleOrderBundle::UIBattleOrderBundle(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIBattleOrderBundle *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIBattleOrderBundle *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIBattleOrderPrivilege>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIBattleOrderPrivilege>::UISingletonDialog
          (UISingletonDialog<UIBattleOrderPrivilege> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06700a40;
  *(undefined **)(this + 0xd8) = &DAT_06700d90;
  return;
}


/* UISingletonDialog<UIBattleOrderPrivilege>::ShowDialog() */

UIBattleOrderPrivilege * UISingletonDialog<UIBattleOrderPrivilege>::ShowDialog(void)

{
  UIBattleOrderPrivilege *pUVar1;
  char cVar2;
  UIBattleOrderPrivilege *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIBattleOrderPrivilege *)0x0) {
    pUVar3 = ::operator_new(0x138);
    memset(pUVar3,0,0x138);
    UIBattleOrderPrivilege::UIBattleOrderPrivilege(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIBattleOrderPrivilege *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIBattleOrderPrivilege *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIBattleOrderTurnPagesList>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIBattleOrderTurnPagesList>::UISingletonDialog
          (UISingletonDialog<UIBattleOrderTurnPagesList> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06701520;
  *(undefined **)(this + 0xd8) = &DAT_06701870;
  return;
}


/* UISingletonDialog<UIBattleOrder>::ShowDialog() */

UIBattleOrder * UISingletonDialog<UIBattleOrder>::ShowDialog(void)

{
  UIBattleOrder *pUVar1;
  char cVar2;
  UIBattleOrder *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIBattleOrder *)0x0) {
    pUVar3 = ::operator_new(0x2e8);
    UIBattleOrder::UIBattleOrder(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIBattleOrder *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIBattleOrder *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<BattleOrderLotteryPanel>::ShowDialog() */

BattleOrderLotteryPanel * UISingletonDialog<BattleOrderLotteryPanel>::ShowDialog(void)

{
  BattleOrderLotteryPanel *pBVar1;
  char cVar2;
  BattleOrderLotteryPanel *pBVar3;
  
  pBVar1 = m_pInstance;
  pBVar3 = pBVar1;
  if (m_pInstance == (BattleOrderLotteryPanel *)0x0) {
    pBVar3 = ::operator_new(0x1c8);
    BattleOrderLotteryPanel::BattleOrderLotteryPanel(pBVar3);
    m_pInstance = pBVar3;
    cVar2 = (**(code **)(*(long *)pBVar3 + 0x310))(pBVar3);
    pBVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (BattleOrderLotteryPanel *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (BattleOrderLotteryPanel *)0x0;
      pBVar3 = pBVar1;
    }
  }
  return pBVar3;
}


/* UISingletonDialog<UIBattleOrderTurnPagesList>::ShowDialog() */

UIBattleOrderTurnPagesList * UISingletonDialog<UIBattleOrderTurnPagesList>::ShowDialog(void)

{
  UIBattleOrderTurnPagesList *pUVar1;
  char cVar2;
  UIBattleOrderTurnPagesList *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIBattleOrderTurnPagesList *)0x0) {
    pUVar3 = ::operator_new(0x160);
    memset(pUVar3,0,0x160);
    UIBattleOrderTurnPagesList::UIBattleOrderTurnPagesList(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIBattleOrderTurnPagesList *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIBattleOrderTurnPagesList *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UINoviceSevenDays>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINoviceSevenDays>::~UISingletonDialog(UISingletonDialog<UINoviceSevenDays> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06704a40;
  *(undefined ***)this = &PTR_GetClass_067046f0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UINoviceSevenDays> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UINoviceSevenDays>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINoviceSevenDays>::~UISingletonDialog(UISingletonDialog<UINoviceSevenDays> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UINoviceSevenDaysCollection>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINoviceSevenDaysCollection>::~UISingletonDialog
          (UISingletonDialog<UINoviceSevenDaysCollection> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06704de0;
  *(undefined ***)this = &PTR_GetClass_06704a90;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UINoviceSevenDaysCollection> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UINoviceSevenDaysCollection>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINoviceSevenDaysCollection>::~UISingletonDialog
          (UISingletonDialog<UINoviceSevenDaysCollection> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UINoviceSevenDays>::CloseDialog() */

void UISingletonDialog<UINoviceSevenDays>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UINoviceSevenDays>::GetSingletonPtr() */

undefined8 UISingletonDialog<UINoviceSevenDays>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UINoviceSevenDaysCollection>::GetSingletonPtr() */

undefined8 UISingletonDialog<UINoviceSevenDaysCollection>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UINoviceSevenDays>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UINoviceSevenDays>::UISingletonDialog(UISingletonDialog<UINoviceSevenDays> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_067046f0;
  *(undefined **)(this + 0xd8) = &DAT_06704a40;
  return;
}


/* UISingletonDialog<UINoviceSevenDaysCollection>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UINoviceSevenDaysCollection>::UISingletonDialog
          (UISingletonDialog<UINoviceSevenDaysCollection> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06704a90;
  *(undefined **)(this + 0xd8) = &DAT_06704de0;
  return;
}


/* UISingletonDialog<UINoviceSevenDaysCollection>::CloseDialog() */

void UISingletonDialog<UINoviceSevenDaysCollection>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIGrowthPackage>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIGrowthPackage>::~UISingletonDialog(UISingletonDialog<UIGrowthPackage> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06706480;
  *(undefined ***)this = &PTR_GetClass_06706130;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIGrowthPackage> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIGrowthPackage>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIGrowthPackage>::~UISingletonDialog(UISingletonDialog<UIGrowthPackage> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIGrowthPackage>::GetSingletonPtr() */

undefined8 UISingletonDialog<UIGrowthPackage>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UIGrowthPackage>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIGrowthPackage>::UISingletonDialog(UISingletonDialog<UIGrowthPackage> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06706130;
  *(undefined **)(this + 0xd8) = &DAT_06706480;
  return;
}


/* UISingletonDialog<UIGrowthPackage>::CloseDialog() */

void UISingletonDialog<UIGrowthPackage>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UICustomVoting>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UICustomVoting>::~UISingletonDialog(UISingletonDialog<UICustomVoting> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06707310;
  *(undefined ***)this = &PTR_GetClass_06706fc0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UICustomVoting> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UICustomVoting>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UICustomVoting>::~UISingletonDialog(UISingletonDialog<UICustomVoting> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UICustomVoting>::GetSingletonPtr() */

undefined8 UISingletonDialog<UICustomVoting>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UICustomVoting>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UICustomVoting>::UISingletonDialog(UISingletonDialog<UICustomVoting> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06706fc0;
  *(undefined **)(this + 0xd8) = &DAT_06707310;
  return;
}


/* UISingletonDialog<UICustomVoting>::CloseDialog() */

void UISingletonDialog<UICustomVoting>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIAnniversaryTreasure>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIAnniversaryTreasure>::~UISingletonDialog
          (UISingletonDialog<UIAnniversaryTreasure> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06708610;
  *(undefined ***)this = &PTR_GetClass_067082c0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIAnniversaryTreasure> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIAnniversaryTreasure>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIAnniversaryTreasure>::~UISingletonDialog
          (UISingletonDialog<UIAnniversaryTreasure> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIAnniversaryTreasure>::GetSingletonPtr() */

undefined8 UISingletonDialog<UIAnniversaryTreasure>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UIAnniversaryTreasure>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIAnniversaryTreasure>::UISingletonDialog
          (UISingletonDialog<UIAnniversaryTreasure> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_067082c0;
  *(undefined **)(this + 0xd8) = &DAT_06708610;
  return;
}


/* UISingletonDialog<UIAnniversaryTreasure>::CloseDialog() */

void UISingletonDialog<UIAnniversaryTreasure>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UICommonItemSelect>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UICommonItemSelect>::~UISingletonDialog
          (UISingletonDialog<UICommonItemSelect> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06709bb0;
  *(undefined ***)this = &PTR_GetClass_06709860;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UICommonItemSelect> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UICommonItemSelect>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UICommonItemSelect>::~UISingletonDialog
          (UISingletonDialog<UICommonItemSelect> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UINewRecall>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewRecall>::~UISingletonDialog(UISingletonDialog<UINewRecall> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06709f50;
  *(undefined ***)this = &PTR_GetClass_06709c00;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UINewRecall> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UINewRecall>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewRecall>::~UISingletonDialog(UISingletonDialog<UINewRecall> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UICommonItemSelect>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UICommonItemSelect>::UISingletonDialog
          (UISingletonDialog<UICommonItemSelect> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06709860;
  *(undefined **)(this + 0xd8) = &DAT_06709bb0;
  return;
}


/* UISingletonDialog<UINewRecall>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewRecall>::UISingletonDialog(UISingletonDialog<UINewRecall> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06709c00;
  *(undefined **)(this + 0xd8) = &DAT_06709f50;
  return;
}


/* UISingletonDialog<UINewRecall>::CloseDialog() */

void UISingletonDialog<UINewRecall>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIRenaissanceChallengeShop>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIRenaissanceChallengeShop>::~UISingletonDialog
          (UISingletonDialog<UIRenaissanceChallengeShop> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06712480;
  *(undefined ***)this = &PTR_GetClass_06712130;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIRenaissanceChallengeShop> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIRenaissanceChallengeShop>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIRenaissanceChallengeShop>::~UISingletonDialog
          (UISingletonDialog<UIRenaissanceChallengeShop> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIRenaissanceChallenge>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIRenaissanceChallenge>::~UISingletonDialog
          (UISingletonDialog<UIRenaissanceChallenge> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06712820;
  *(undefined ***)this = &PTR_GetClass_067124d0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIRenaissanceChallenge> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIRenaissanceChallenge>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIRenaissanceChallenge>::~UISingletonDialog
          (UISingletonDialog<UIRenaissanceChallenge> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIRenaissanceChallengeNew>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIRenaissanceChallengeNew>::~UISingletonDialog
          (UISingletonDialog<UIRenaissanceChallengeNew> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06712bc0;
  *(undefined ***)this = &PTR_GetClass_06712870;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIRenaissanceChallengeNew> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIRenaissanceChallengeNew>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIRenaissanceChallengeNew>::~UISingletonDialog
          (UISingletonDialog<UIRenaissanceChallengeNew> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIRenaissanceChallengeShop>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIRenaissanceChallengeShop>::UISingletonDialog
          (UISingletonDialog<UIRenaissanceChallengeShop> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06712130;
  *(undefined **)(this + 0xd8) = &DAT_06712480;
  return;
}


/* UISingletonDialog<UIRenaissanceChallengeShop>::ShowDialog() */

UIRenaissanceChallengeShop * UISingletonDialog<UIRenaissanceChallengeShop>::ShowDialog(void)

{
  UIRenaissanceChallengeShop *pUVar1;
  char cVar2;
  UIRenaissanceChallengeShop *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIRenaissanceChallengeShop *)0x0) {
    pUVar3 = ::operator_new(0x140);
    UIRenaissanceChallengeShop::UIRenaissanceChallengeShop(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIRenaissanceChallengeShop *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIRenaissanceChallengeShop *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIRenaissanceChallengeShop>::CloseDialog() */

void UISingletonDialog<UIRenaissanceChallengeShop>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIRenaissanceChallenge>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIRenaissanceChallenge>::UISingletonDialog
          (UISingletonDialog<UIRenaissanceChallenge> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_067124d0;
  *(undefined **)(this + 0xd8) = &DAT_06712820;
  return;
}


/* UISingletonDialog<UIRenaissanceChallengeNew>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIRenaissanceChallengeNew>::UISingletonDialog
          (UISingletonDialog<UIRenaissanceChallengeNew> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06712870;
  *(undefined **)(this + 0xd8) = &DAT_06712bc0;
  return;
}


/* UISingletonDialog<UIRenaissanceChallengeNew>::CloseDialog() */

void UISingletonDialog<UIRenaissanceChallengeNew>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UITheaterDiceShop>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UITheaterDiceShop>::~UISingletonDialog(UISingletonDialog<UITheaterDiceShop> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06714eb0;
  *(undefined ***)this = &PTR_GetClass_06714b60;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UITheaterDiceShop> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UITheaterDiceShop>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UITheaterDiceShop>::~UISingletonDialog(UISingletonDialog<UITheaterDiceShop> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UITheaterShop>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UITheaterShop>::~UISingletonDialog(UISingletonDialog<UITheaterShop> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06715250;
  *(undefined ***)this = &PTR_GetClass_06714f00;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UITheaterShop> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UITheaterShop>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UITheaterShop>::~UISingletonDialog(UISingletonDialog<UITheaterShop> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UITheaterDiceShop>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UITheaterDiceShop>::UISingletonDialog(UISingletonDialog<UITheaterDiceShop> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06714b60;
  *(undefined **)(this + 0xd8) = &DAT_06714eb0;
  return;
}


/* UISingletonDialog<UITheaterDiceShop>::CloseDialog() */

void UISingletonDialog<UITheaterDiceShop>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UITheaterShop>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UITheaterShop>::UISingletonDialog(UISingletonDialog<UITheaterShop> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06714f00;
  *(undefined **)(this + 0xd8) = &DAT_06715250;
  return;
}


/* UISingletonDialog<UITheaterShop>::CloseDialog() */

void UISingletonDialog<UITheaterShop>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UILuckBag>::~UISingletonDialog() */

void __thiscall UISingletonDialog<UILuckBag>::~UISingletonDialog(UISingletonDialog<UILuckBag> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06716500;
  *(undefined ***)this = &PTR_GetClass_067161b0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UILuckBag> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UILuckBag>::~UISingletonDialog() */

void __thiscall UISingletonDialog<UILuckBag>::~UISingletonDialog(UISingletonDialog<UILuckBag> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UILuckBagSelect>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UILuckBagSelect>::~UISingletonDialog(UISingletonDialog<UILuckBagSelect> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_067168a0;
  *(undefined ***)this = &PTR_GetClass_06716550;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UILuckBagSelect> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UILuckBagSelect>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UILuckBagSelect>::~UISingletonDialog(UISingletonDialog<UILuckBagSelect> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UILuckBagAnnouncement>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UILuckBagAnnouncement>::~UISingletonDialog
          (UISingletonDialog<UILuckBagAnnouncement> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06716160;
  *(undefined ***)this = &PTR_GetClass_06715e10;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UILuckBagAnnouncement> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UILuckBagAnnouncement>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UILuckBagAnnouncement>::~UISingletonDialog
          (UISingletonDialog<UILuckBagAnnouncement> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UILuckBagAnnouncement>::CloseDialog() */

void UISingletonDialog<UILuckBagAnnouncement>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UILuckBag>::UISingletonDialog() */

void __thiscall UISingletonDialog<UILuckBag>::UISingletonDialog(UISingletonDialog<UILuckBag> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_067161b0;
  *(undefined **)(this + 0xd8) = &DAT_06716500;
  return;
}


/* UISingletonDialog<UILuckBag>::CloseDialog() */

void UISingletonDialog<UILuckBag>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UILuckBagSelect>::GetSingletonPtr() */

undefined8 UISingletonDialog<UILuckBagSelect>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UILuckBag>::GetSingletonPtr() */

undefined8 UISingletonDialog<UILuckBag>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UILuckBagSelect>::CloseDialog() */

void UISingletonDialog<UILuckBagSelect>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UILuckBagSelect>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UILuckBagSelect>::UISingletonDialog(UISingletonDialog<UILuckBagSelect> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06716550;
  *(undefined **)(this + 0xd8) = &DAT_067168a0;
  return;
}


/* UISingletonDialog<UILuckBagSelect>::ShowDialog() */

UILuckBagSelect * UISingletonDialog<UILuckBagSelect>::ShowDialog(void)

{
  UILuckBagSelect *pUVar1;
  char cVar2;
  UILuckBagSelect *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UILuckBagSelect *)0x0) {
    pUVar3 = ::operator_new(0x160);
    UILuckBagSelect::UILuckBagSelect(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UILuckBagSelect *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UILuckBagSelect *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<FestivalEventUI>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<FestivalEventUI>::~UISingletonDialog(UISingletonDialog<FestivalEventUI> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_067185b0;
  *(undefined ***)this = &PTR_GetClass_06718260;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<FestivalEventUI> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<FestivalEventUI>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<FestivalEventUI>::~UISingletonDialog(UISingletonDialog<FestivalEventUI> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<RechargeWelfareUI>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<RechargeWelfareUI>::~UISingletonDialog(UISingletonDialog<RechargeWelfareUI> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06718950;
  *(undefined ***)this = &PTR_GetClass_06718600;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<RechargeWelfareUI> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<RechargeWelfareUI>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<RechargeWelfareUI>::~UISingletonDialog(UISingletonDialog<RechargeWelfareUI> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<GoldenEggPage>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<GoldenEggPage>::~UISingletonDialog(UISingletonDialog<GoldenEggPage> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_0671c6f0;
  *(undefined ***)this = &PTR_GetClass_0671c3a0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<GoldenEggPage> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<GoldenEggPage>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<GoldenEggPage>::~UISingletonDialog(UISingletonDialog<GoldenEggPage> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<GenericFestivalPage>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<GenericFestivalPage>::~UISingletonDialog
          (UISingletonDialog<GenericFestivalPage> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_0671c350;
  *(undefined ***)this = &PTR_GetClass_0671c000;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<GenericFestivalPage> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<GenericFestivalPage>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<GenericFestivalPage>::~UISingletonDialog
          (UISingletonDialog<GenericFestivalPage> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<CustomVotingPage>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<CustomVotingPage>::~UISingletonDialog(UISingletonDialog<CustomVotingPage> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_0671bfb0;
  *(undefined ***)this = &PTR_GetClass_0671bc60;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<CustomVotingPage> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<CustomVotingPage>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<CustomVotingPage>::~UISingletonDialog(UISingletonDialog<CustomVotingPage> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<LimitGroupBuyPage>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<LimitGroupBuyPage>::~UISingletonDialog(UISingletonDialog<LimitGroupBuyPage> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_0671bc10;
  *(undefined ***)this = &PTR_GetClass_0671b8c0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<LimitGroupBuyPage> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<LimitGroupBuyPage>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<LimitGroupBuyPage>::~UISingletonDialog(UISingletonDialog<LimitGroupBuyPage> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<ConsumeAndReceivePage>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<ConsumeAndReceivePage>::~UISingletonDialog
          (UISingletonDialog<ConsumeAndReceivePage> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_0671b870;
  *(undefined ***)this = &PTR_GetClass_0671b520;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<ConsumeAndReceivePage> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<ConsumeAndReceivePage>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<ConsumeAndReceivePage>::~UISingletonDialog
          (UISingletonDialog<ConsumeAndReceivePage> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<FestivalGamePageNewYearGoods>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<FestivalGamePageNewYearGoods>::~UISingletonDialog
          (UISingletonDialog<FestivalGamePageNewYearGoods> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_0671b4d0;
  *(undefined ***)this = &PTR_GetClass_0671b180;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<FestivalGamePageNewYearGoods> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<FestivalGamePageNewYearGoods>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<FestivalGamePageNewYearGoods>::~UISingletonDialog
          (UISingletonDialog<FestivalGamePageNewYearGoods> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<FestivalGamePageCarnival>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<FestivalGamePageCarnival>::~UISingletonDialog
          (UISingletonDialog<FestivalGamePageCarnival> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_0671b130;
  *(undefined ***)this = &PTR_GetClass_0671ade0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<FestivalGamePageCarnival> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<FestivalGamePageCarnival>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<FestivalGamePageCarnival>::~UISingletonDialog
          (UISingletonDialog<FestivalGamePageCarnival> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<FestivalGamePageLimitedSummon>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<FestivalGamePageLimitedSummon>::~UISingletonDialog
          (UISingletonDialog<FestivalGamePageLimitedSummon> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_0671ad90;
  *(undefined ***)this = &PTR_GetClass_0671aa40;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<FestivalGamePageLimitedSummon> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<FestivalGamePageLimitedSummon>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<FestivalGamePageLimitedSummon>::~UISingletonDialog
          (UISingletonDialog<FestivalGamePageLimitedSummon> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<FestivalGamePageBattleOrder>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<FestivalGamePageBattleOrder>::~UISingletonDialog
          (UISingletonDialog<FestivalGamePageBattleOrder> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_0671a9f0;
  *(undefined ***)this = &PTR_GetClass_0671a6a0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<FestivalGamePageBattleOrder> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<FestivalGamePageBattleOrder>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<FestivalGamePageBattleOrder>::~UISingletonDialog
          (UISingletonDialog<FestivalGamePageBattleOrder> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<FestivalGamePageFightZodiac>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<FestivalGamePageFightZodiac>::~UISingletonDialog
          (UISingletonDialog<FestivalGamePageFightZodiac> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_0671a650;
  *(undefined ***)this = &PTR_GetClass_0671a300;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<FestivalGamePageFightZodiac> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<FestivalGamePageFightZodiac>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<FestivalGamePageFightZodiac>::~UISingletonDialog
          (UISingletonDialog<FestivalGamePageFightZodiac> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<FestivalGamePageSecretStore>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<FestivalGamePageSecretStore>::~UISingletonDialog
          (UISingletonDialog<FestivalGamePageSecretStore> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_0671a2b0;
  *(undefined ***)this = &PTR_GetClass_06719f60;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<FestivalGamePageSecretStore> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<FestivalGamePageSecretStore>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<FestivalGamePageSecretStore>::~UISingletonDialog
          (UISingletonDialog<FestivalGamePageSecretStore> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<FestivalGamePageLuckyBag>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<FestivalGamePageLuckyBag>::~UISingletonDialog
          (UISingletonDialog<FestivalGamePageLuckyBag> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06719f10;
  *(undefined ***)this = &PTR_GetClass_06719bc0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<FestivalGamePageLuckyBag> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<FestivalGamePageLuckyBag>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<FestivalGamePageLuckyBag>::~UISingletonDialog
          (UISingletonDialog<FestivalGamePageLuckyBag> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<FestivalGamePageAnniversaryTreasure>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<FestivalGamePageAnniversaryTreasure>::~UISingletonDialog
          (UISingletonDialog<FestivalGamePageAnniversaryTreasure> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06719b70;
  *(undefined ***)this = &PTR_GetClass_06719820;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<FestivalGamePageAnniversaryTreasure> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<FestivalGamePageAnniversaryTreasure>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<FestivalGamePageAnniversaryTreasure>::~UISingletonDialog
          (UISingletonDialog<FestivalGamePageAnniversaryTreasure> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<FestivalGamePageMiniGame>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<FestivalGamePageMiniGame>::~UISingletonDialog
          (UISingletonDialog<FestivalGamePageMiniGame> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_067197d0;
  *(undefined ***)this = &PTR_GetClass_06719480;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<FestivalGamePageMiniGame> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<FestivalGamePageMiniGame>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<FestivalGamePageMiniGame>::~UISingletonDialog
          (UISingletonDialog<FestivalGamePageMiniGame> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<FestivalGamePageExtra>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<FestivalGamePageExtra>::~UISingletonDialog
          (UISingletonDialog<FestivalGamePageExtra> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06719430;
  *(undefined ***)this = &PTR_GetClass_067190e0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<FestivalGamePageExtra> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<FestivalGamePageExtra>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<FestivalGamePageExtra>::~UISingletonDialog
          (UISingletonDialog<FestivalGamePageExtra> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<FestivalGamePage>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<FestivalGamePage>::~UISingletonDialog(UISingletonDialog<FestivalGamePage> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06719090;
  *(undefined ***)this = &PTR_GetClass_06718d40;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<FestivalGamePage> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<FestivalGamePage>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<FestivalGamePage>::~UISingletonDialog(UISingletonDialog<FestivalGamePage> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<WeeklyRechargeRewardPage>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<WeeklyRechargeRewardPage>::~UISingletonDialog
          (UISingletonDialog<WeeklyRechargeRewardPage> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06718cf0;
  *(undefined ***)this = &PTR_GetClass_067189a0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<WeeklyRechargeRewardPage> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<WeeklyRechargeRewardPage>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<WeeklyRechargeRewardPage>::~UISingletonDialog
          (UISingletonDialog<WeeklyRechargeRewardPage> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<FestivalEventUI>::UISingletonDialog() */

void __thiscall
UISingletonDialog<FestivalEventUI>::UISingletonDialog(UISingletonDialog<FestivalEventUI> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06718260;
  *(undefined **)(this + 0xd8) = &DAT_067185b0;
  return;
}


/* UISingletonDialog<UIRenaissanceChallenge>::GetSingletonPtr() */

undefined8 UISingletonDialog<UIRenaissanceChallenge>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UIRenaissanceChallenge>::ShowDialog() */

UIRenaissanceChallenge * UISingletonDialog<UIRenaissanceChallenge>::ShowDialog(void)

{
  UIRenaissanceChallenge *pUVar1;
  char cVar2;
  UIRenaissanceChallenge *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIRenaissanceChallenge *)0x0) {
    pUVar3 = ::operator_new(0x150);
    UIRenaissanceChallenge::UIRenaissanceChallenge(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIRenaissanceChallenge *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIRenaissanceChallenge *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<FestivalGamePage>::GetSingletonPtr() */

undefined8 UISingletonDialog<FestivalGamePage>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<FestivalGamePageLimitedSummon>::GetSingletonPtr() */

undefined8 UISingletonDialog<FestivalGamePageLimitedSummon>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<FestivalGamePageCarnival>::GetSingletonPtr() */

undefined8 UISingletonDialog<FestivalGamePageCarnival>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<FestivalGamePageNewYearGoods>::GetSingletonPtr() */

undefined8 UISingletonDialog<FestivalGamePageNewYearGoods>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<FestivalGamePageExtra>::GetSingletonPtr() */

undefined8 UISingletonDialog<FestivalGamePageExtra>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<FestivalGamePageBattleOrder>::GetSingletonPtr() */

undefined8 UISingletonDialog<FestivalGamePageBattleOrder>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<ConsumeAndReceivePage>::GetSingletonPtr() */

undefined8 UISingletonDialog<ConsumeAndReceivePage>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UIConsumeAndReceiveExtra>::GetSingletonPtr() */

undefined8 UISingletonDialog<UIConsumeAndReceiveExtra>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UIConsumeAndReceiveExtra>::ShowDialog() */

UIConsumeAndReceiveExtra * UISingletonDialog<UIConsumeAndReceiveExtra>::ShowDialog(void)

{
  UIConsumeAndReceiveExtra *pUVar1;
  char cVar2;
  UIConsumeAndReceiveExtra *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIConsumeAndReceiveExtra *)0x0) {
    pUVar3 = ::operator_new(0x168);
    UIConsumeAndReceiveExtra::UIConsumeAndReceiveExtra(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIConsumeAndReceiveExtra *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIConsumeAndReceiveExtra *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UILimitLotteryPage>::ShowDialog() */

UILimitLotteryPage * UISingletonDialog<UILimitLotteryPage>::ShowDialog(void)

{
  UILimitLotteryPage *pUVar1;
  char cVar2;
  UILimitLotteryPage *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UILimitLotteryPage *)0x0) {
    pUVar3 = ::operator_new(0x1d0);
    UILimitLotteryPage::UILimitLotteryPage(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UILimitLotteryPage *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UILimitLotteryPage *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<WeeklyRechargeRewardPage>::GetSingletonPtr() */

undefined8 UISingletonDialog<WeeklyRechargeRewardPage>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<DailySignPage>::GetSingletonPtr() */

undefined8 UISingletonDialog<DailySignPage>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<DailySignPage>::ShowDialog() */

DailySignPage * UISingletonDialog<DailySignPage>::ShowDialog(void)

{
  DailySignPage *pDVar1;
  char cVar2;
  DailySignPage *pDVar3;
  
  pDVar1 = m_pInstance;
  pDVar3 = pDVar1;
  if (m_pInstance == (DailySignPage *)0x0) {
    pDVar3 = ::operator_new(0x1c8);
    DailySignPage::DailySignPage(pDVar3);
    m_pInstance = pDVar3;
    cVar2 = (**(code **)(*(long *)pDVar3 + 0x310))(pDVar3);
    pDVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (DailySignPage *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (DailySignPage *)0x0;
      pDVar3 = pDVar1;
    }
  }
  return pDVar3;
}


/* UISingletonDialog<RechargeDailySignActivityUI>::GetSingletonPtr() */

undefined8 UISingletonDialog<RechargeDailySignActivityUI>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<RechargeDailySignActivityUI>::ShowDialog() */

RechargeDailySignActivityUI * UISingletonDialog<RechargeDailySignActivityUI>::ShowDialog(void)

{
  RechargeDailySignActivityUI *pRVar1;
  char cVar2;
  RechargeDailySignActivityUI *pRVar3;
  
  pRVar1 = m_pInstance;
  pRVar3 = pRVar1;
  if (m_pInstance == (RechargeDailySignActivityUI *)0x0) {
    pRVar3 = ::operator_new(0x1a8);
    RechargeDailySignActivityUI::RechargeDailySignActivityUI(pRVar3);
    m_pInstance = pRVar3;
    cVar2 = (**(code **)(*(long *)pRVar3 + 0x310))(pRVar3);
    pRVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (RechargeDailySignActivityUI *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (RechargeDailySignActivityUI *)0x0;
      pRVar3 = pRVar1;
    }
  }
  return pRVar3;
}


/* UISingletonDialog<DiscountShopActivityUI>::GetSingletonPtr() */

undefined8 UISingletonDialog<DiscountShopActivityUI>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<DiscountShopActivityUI>::ShowDialog() */

DiscountShopActivityUI * UISingletonDialog<DiscountShopActivityUI>::ShowDialog(void)

{
  DiscountShopActivityUI *pDVar1;
  char cVar2;
  DiscountShopActivityUI *pDVar3;
  
  pDVar1 = m_pInstance;
  pDVar3 = pDVar1;
  if (m_pInstance == (DiscountShopActivityUI *)0x0) {
    pDVar3 = ::operator_new(400);
    DiscountShopActivityUI::DiscountShopActivityUI(pDVar3);
    m_pInstance = pDVar3;
    cVar2 = (**(code **)(*(long *)pDVar3 + 0x310))(pDVar3);
    pDVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (DiscountShopActivityUI *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (DiscountShopActivityUI *)0x0;
      pDVar3 = pDVar1;
    }
  }
  return pDVar3;
}


/* UISingletonDialog<CustomVotingPage>::GetSingletonPtr() */

undefined8 UISingletonDialog<CustomVotingPage>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<LimitGroupBuyPage>::GetSingletonPtr() */

undefined8 UISingletonDialog<LimitGroupBuyPage>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<FestivalGamePageMiniGame>::GetSingletonPtr() */

undefined8 UISingletonDialog<FestivalGamePageMiniGame>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<FestivalGamePageAnniversaryTreasure>::GetSingletonPtr() */

undefined8 UISingletonDialog<FestivalGamePageAnniversaryTreasure>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<FestivalGamePageLuckyBag>::GetSingletonPtr() */

undefined8 UISingletonDialog<FestivalGamePageLuckyBag>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<FestivalGamePageSecretStore>::GetSingletonPtr() */

undefined8 UISingletonDialog<FestivalGamePageSecretStore>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UIRechargeReward>::GetSingletonPtr() */

undefined8 UISingletonDialog<UIRechargeReward>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UIRechargeReward>::ShowDialog() */

UIRechargeReward * UISingletonDialog<UIRechargeReward>::ShowDialog(void)

{
  UIRechargeReward *pUVar1;
  char cVar2;
  UIRechargeReward *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIRechargeReward *)0x0) {
    pUVar3 = ::operator_new(0x1d0);
    UIRechargeReward::UIRechargeReward(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIRechargeReward *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIRechargeReward *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<GenericFestivalPage>::GetSingletonPtr() */

undefined8 UISingletonDialog<GenericFestivalPage>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<GenericFestivalPage>::CloseDialog() */

void UISingletonDialog<GenericFestivalPage>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<FestivalGamePageFightZodiac>::GetSingletonPtr() */

undefined8 UISingletonDialog<FestivalGamePageFightZodiac>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<GoldenEggPage>::GetSingletonPtr() */

undefined8 UISingletonDialog<GoldenEggPage>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UIArborDay>::ShowDialog() */

UIArborDay * UISingletonDialog<UIArborDay>::ShowDialog(void)

{
  UIArborDay *pUVar1;
  char cVar2;
  UIArborDay *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIArborDay *)0x0) {
    pUVar3 = ::operator_new(0x270);
    UIArborDay::UIArborDay(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIArborDay *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIArborDay *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIChagreDouble>::GetSingletonPtr() */

undefined8 UISingletonDialog<UIChagreDouble>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UIChagreDouble>::ShowDialog() */

UIChagreDouble * UISingletonDialog<UIChagreDouble>::ShowDialog(void)

{
  UIChagreDouble *pUVar1;
  char cVar2;
  UIChagreDouble *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIChagreDouble *)0x0) {
    pUVar3 = ::operator_new(0x2c8);
    UIChagreDouble::UIChagreDouble(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIChagreDouble *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIChagreDouble *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<RechargeWelfareUI>::UISingletonDialog() */

void __thiscall
UISingletonDialog<RechargeWelfareUI>::UISingletonDialog(UISingletonDialog<RechargeWelfareUI> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06718600;
  *(undefined **)(this + 0xd8) = &DAT_06718950;
  return;
}


/* UISingletonDialog<WeeklyRechargeRewardPage>::UISingletonDialog() */

void __thiscall
UISingletonDialog<WeeklyRechargeRewardPage>::UISingletonDialog
          (UISingletonDialog<WeeklyRechargeRewardPage> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_067189a0;
  *(undefined **)(this + 0xd8) = &DAT_06718cf0;
  return;
}


/* UISingletonDialog<WeeklyRechargeRewardPage>::ShowDialog() */

WeeklyRechargeRewardPage * UISingletonDialog<WeeklyRechargeRewardPage>::ShowDialog(void)

{
  WeeklyRechargeRewardPage *pWVar1;
  char cVar2;
  WeeklyRechargeRewardPage *pWVar3;
  
  pWVar1 = m_pInstance;
  pWVar3 = pWVar1;
  if (m_pInstance == (WeeklyRechargeRewardPage *)0x0) {
    pWVar3 = ::operator_new(0x168);
    WeeklyRechargeRewardPage::WeeklyRechargeRewardPage(pWVar3);
    m_pInstance = pWVar3;
    cVar2 = (**(code **)(*(long *)pWVar3 + 0x310))(pWVar3);
    pWVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (WeeklyRechargeRewardPage *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (WeeklyRechargeRewardPage *)0x0;
      pWVar3 = pWVar1;
    }
  }
  return pWVar3;
}


/* UISingletonDialog<FestivalGamePage>::UISingletonDialog() */

void __thiscall
UISingletonDialog<FestivalGamePage>::UISingletonDialog(UISingletonDialog<FestivalGamePage> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06718d40;
  *(undefined **)(this + 0xd8) = &DAT_06719090;
  return;
}


/* UISingletonDialog<FestivalGamePage>::ShowDialog() */

FestivalGamePage * UISingletonDialog<FestivalGamePage>::ShowDialog(void)

{
  FestivalGamePage *pFVar1;
  char cVar2;
  FestivalGamePage *pFVar3;
  
  pFVar1 = m_pInstance;
  pFVar3 = pFVar1;
  if (m_pInstance == (FestivalGamePage *)0x0) {
    pFVar3 = ::operator_new(0x158);
    FestivalGamePage::FestivalGamePage(pFVar3);
    m_pInstance = pFVar3;
    cVar2 = (**(code **)(*(long *)pFVar3 + 0x310))(pFVar3);
    pFVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (FestivalGamePage *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (FestivalGamePage *)0x0;
      pFVar3 = pFVar1;
    }
  }
  return pFVar3;
}


/* UISingletonDialog<FestivalGamePageExtra>::UISingletonDialog() */

void __thiscall
UISingletonDialog<FestivalGamePageExtra>::UISingletonDialog
          (UISingletonDialog<FestivalGamePageExtra> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_067190e0;
  *(undefined **)(this + 0xd8) = &DAT_06719430;
  return;
}


/* UISingletonDialog<FestivalGamePageExtra>::ShowDialog() */

FestivalGamePageExtra * UISingletonDialog<FestivalGamePageExtra>::ShowDialog(void)

{
  FestivalGamePageExtra *pFVar1;
  char cVar2;
  FestivalGamePageExtra *pFVar3;
  
  pFVar1 = m_pInstance;
  pFVar3 = pFVar1;
  if (m_pInstance == (FestivalGamePageExtra *)0x0) {
    pFVar3 = ::operator_new(0x160);
    FestivalGamePageExtra::FestivalGamePageExtra(pFVar3);
    m_pInstance = pFVar3;
    cVar2 = (**(code **)(*(long *)pFVar3 + 0x310))(pFVar3);
    pFVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (FestivalGamePageExtra *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (FestivalGamePageExtra *)0x0;
      pFVar3 = pFVar1;
    }
  }
  return pFVar3;
}


/* UISingletonDialog<FestivalGamePageMiniGame>::UISingletonDialog() */

void __thiscall
UISingletonDialog<FestivalGamePageMiniGame>::UISingletonDialog
          (UISingletonDialog<FestivalGamePageMiniGame> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06719480;
  *(undefined **)(this + 0xd8) = &DAT_067197d0;
  return;
}


/* UISingletonDialog<FestivalGamePageAnniversaryTreasure>::UISingletonDialog() */

void __thiscall
UISingletonDialog<FestivalGamePageAnniversaryTreasure>::UISingletonDialog
          (UISingletonDialog<FestivalGamePageAnniversaryTreasure> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06719820;
  *(undefined **)(this + 0xd8) = &DAT_06719b70;
  return;
}


/* UISingletonDialog<FestivalGamePageAnniversaryTreasure>::ShowDialog() */

FestivalGamePageAnniversaryTreasure *
UISingletonDialog<FestivalGamePageAnniversaryTreasure>::ShowDialog(void)

{
  FestivalGamePageAnniversaryTreasure *pFVar1;
  char cVar2;
  FestivalGamePageAnniversaryTreasure *pFVar3;
  
  pFVar1 = m_pInstance;
  pFVar3 = pFVar1;
  if (m_pInstance == (FestivalGamePageAnniversaryTreasure *)0x0) {
    pFVar3 = ::operator_new(0x160);
    FestivalGamePageAnniversaryTreasure::FestivalGamePageAnniversaryTreasure(pFVar3);
    m_pInstance = pFVar3;
    cVar2 = (**(code **)(*(long *)pFVar3 + 0x310))(pFVar3);
    pFVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (FestivalGamePageAnniversaryTreasure *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (FestivalGamePageAnniversaryTreasure *)0x0;
      pFVar3 = pFVar1;
    }
  }
  return pFVar3;
}


/* UISingletonDialog<FestivalGamePageLuckyBag>::UISingletonDialog() */

void __thiscall
UISingletonDialog<FestivalGamePageLuckyBag>::UISingletonDialog
          (UISingletonDialog<FestivalGamePageLuckyBag> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06719bc0;
  *(undefined **)(this + 0xd8) = &DAT_06719f10;
  return;
}


/* UISingletonDialog<FestivalGamePageLuckyBag>::ShowDialog() */

FestivalGamePageLuckyBag * UISingletonDialog<FestivalGamePageLuckyBag>::ShowDialog(void)

{
  FestivalGamePageLuckyBag *pFVar1;
  char cVar2;
  FestivalGamePageLuckyBag *pFVar3;
  
  pFVar1 = m_pInstance;
  pFVar3 = pFVar1;
  if (m_pInstance == (FestivalGamePageLuckyBag *)0x0) {
    pFVar3 = ::operator_new(0x160);
    FestivalGamePageLuckyBag::FestivalGamePageLuckyBag(pFVar3);
    m_pInstance = pFVar3;
    cVar2 = (**(code **)(*(long *)pFVar3 + 0x310))(pFVar3);
    pFVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (FestivalGamePageLuckyBag *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (FestivalGamePageLuckyBag *)0x0;
      pFVar3 = pFVar1;
    }
  }
  return pFVar3;
}


/* UISingletonDialog<FestivalGamePageSecretStore>::UISingletonDialog() */

void __thiscall
UISingletonDialog<FestivalGamePageSecretStore>::UISingletonDialog
          (UISingletonDialog<FestivalGamePageSecretStore> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06719f60;
  *(undefined **)(this + 0xd8) = &DAT_0671a2b0;
  return;
}


/* UISingletonDialog<FestivalGamePageSecretStore>::ShowDialog() */

FestivalGamePageSecretStore * UISingletonDialog<FestivalGamePageSecretStore>::ShowDialog(void)

{
  FestivalGamePageSecretStore *pFVar1;
  char cVar2;
  FestivalGamePageSecretStore *pFVar3;
  
  pFVar1 = m_pInstance;
  pFVar3 = pFVar1;
  if (m_pInstance == (FestivalGamePageSecretStore *)0x0) {
    pFVar3 = ::operator_new(0x160);
    FestivalGamePageSecretStore::FestivalGamePageSecretStore(pFVar3);
    m_pInstance = pFVar3;
    cVar2 = (**(code **)(*(long *)pFVar3 + 0x310))(pFVar3);
    pFVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (FestivalGamePageSecretStore *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (FestivalGamePageSecretStore *)0x0;
      pFVar3 = pFVar1;
    }
  }
  return pFVar3;
}


/* UISingletonDialog<FestivalGamePageFightZodiac>::UISingletonDialog() */

void __thiscall
UISingletonDialog<FestivalGamePageFightZodiac>::UISingletonDialog
          (UISingletonDialog<FestivalGamePageFightZodiac> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_0671a300;
  *(undefined **)(this + 0xd8) = &DAT_0671a650;
  return;
}


/* UISingletonDialog<FestivalGamePageBattleOrder>::UISingletonDialog() */

void __thiscall
UISingletonDialog<FestivalGamePageBattleOrder>::UISingletonDialog
          (UISingletonDialog<FestivalGamePageBattleOrder> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_0671a6a0;
  *(undefined **)(this + 0xd8) = &DAT_0671a9f0;
  return;
}


/* UISingletonDialog<FestivalGamePageLimitedSummon>::UISingletonDialog() */

void __thiscall
UISingletonDialog<FestivalGamePageLimitedSummon>::UISingletonDialog
          (UISingletonDialog<FestivalGamePageLimitedSummon> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_0671aa40;
  *(undefined **)(this + 0xd8) = &DAT_0671ad90;
  return;
}


/* UISingletonDialog<FestivalGamePageCarnival>::UISingletonDialog() */

void __thiscall
UISingletonDialog<FestivalGamePageCarnival>::UISingletonDialog
          (UISingletonDialog<FestivalGamePageCarnival> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_0671ade0;
  *(undefined **)(this + 0xd8) = &DAT_0671b130;
  return;
}


/* UISingletonDialog<FestivalGamePageNewYearGoods>::UISingletonDialog() */

void __thiscall
UISingletonDialog<FestivalGamePageNewYearGoods>::UISingletonDialog
          (UISingletonDialog<FestivalGamePageNewYearGoods> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_0671b180;
  *(undefined **)(this + 0xd8) = &DAT_0671b4d0;
  return;
}


/* UISingletonDialog<ConsumeAndReceivePage>::UISingletonDialog() */

void __thiscall
UISingletonDialog<ConsumeAndReceivePage>::UISingletonDialog
          (UISingletonDialog<ConsumeAndReceivePage> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_0671b520;
  *(undefined **)(this + 0xd8) = &DAT_0671b870;
  return;
}


/* UISingletonDialog<LimitGroupBuyPage>::UISingletonDialog() */

void __thiscall
UISingletonDialog<LimitGroupBuyPage>::UISingletonDialog(UISingletonDialog<LimitGroupBuyPage> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_0671b8c0;
  *(undefined **)(this + 0xd8) = &DAT_0671bc10;
  return;
}


/* UISingletonDialog<LimitGroupBuyPage>::ShowDialog() */

LimitGroupBuyPage * UISingletonDialog<LimitGroupBuyPage>::ShowDialog(void)

{
  LimitGroupBuyPage *pLVar1;
  char cVar2;
  LimitGroupBuyPage *pLVar3;
  
  pLVar1 = m_pInstance;
  pLVar3 = pLVar1;
  if (m_pInstance == (LimitGroupBuyPage *)0x0) {
    pLVar3 = ::operator_new(0x138);
    LimitGroupBuyPage::LimitGroupBuyPage(pLVar3);
    m_pInstance = pLVar3;
    cVar2 = (**(code **)(*(long *)pLVar3 + 0x310))(pLVar3);
    pLVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (LimitGroupBuyPage *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (LimitGroupBuyPage *)0x0;
      pLVar3 = pLVar1;
    }
  }
  return pLVar3;
}


/* UISingletonDialog<CustomVotingPage>::UISingletonDialog() */

void __thiscall
UISingletonDialog<CustomVotingPage>::UISingletonDialog(UISingletonDialog<CustomVotingPage> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_0671bc60;
  *(undefined **)(this + 0xd8) = &DAT_0671bfb0;
  return;
}


/* UISingletonDialog<GenericFestivalPage>::UISingletonDialog() */

void __thiscall
UISingletonDialog<GenericFestivalPage>::UISingletonDialog
          (UISingletonDialog<GenericFestivalPage> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_0671c000;
  *(undefined **)(this + 0xd8) = &DAT_0671c350;
  return;
}


/* UISingletonDialog<GoldenEggPage>::UISingletonDialog() */

void __thiscall
UISingletonDialog<GoldenEggPage>::UISingletonDialog(UISingletonDialog<GoldenEggPage> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_0671c3a0;
  *(undefined **)(this + 0xd8) = &DAT_0671c6f0;
  return;
}


/* UISingletonDialog<FestivalGamePageMiniGame>::ShowDialog() */

FestivalGamePageMiniGame * UISingletonDialog<FestivalGamePageMiniGame>::ShowDialog(void)

{
  FestivalGamePageMiniGame *pFVar1;
  char cVar2;
  FestivalGamePageMiniGame *pFVar3;
  
  pFVar1 = m_pInstance;
  pFVar3 = pFVar1;
  if (m_pInstance == (FestivalGamePageMiniGame *)0x0) {
    pFVar3 = ::operator_new(0x160);
    FestivalGamePageMiniGame::FestivalGamePageMiniGame(pFVar3);
    m_pInstance = pFVar3;
    cVar2 = (**(code **)(*(long *)pFVar3 + 0x310))(pFVar3);
    pFVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (FestivalGamePageMiniGame *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (FestivalGamePageMiniGame *)0x0;
      pFVar3 = pFVar1;
    }
  }
  return pFVar3;
}


/* UISingletonDialog<FestivalGamePageFightZodiac>::ShowDialog() */

FestivalGamePageFightZodiac * UISingletonDialog<FestivalGamePageFightZodiac>::ShowDialog(void)

{
  FestivalGamePageFightZodiac *pFVar1;
  char cVar2;
  FestivalGamePageFightZodiac *pFVar3;
  
  pFVar1 = m_pInstance;
  pFVar3 = pFVar1;
  if (m_pInstance == (FestivalGamePageFightZodiac *)0x0) {
    pFVar3 = ::operator_new(0x160);
    FestivalGamePageFightZodiac::FestivalGamePageFightZodiac(pFVar3);
    m_pInstance = pFVar3;
    cVar2 = (**(code **)(*(long *)pFVar3 + 0x310))(pFVar3);
    pFVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (FestivalGamePageFightZodiac *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (FestivalGamePageFightZodiac *)0x0;
      pFVar3 = pFVar1;
    }
  }
  return pFVar3;
}


/* UISingletonDialog<FestivalGamePageBattleOrder>::ShowDialog() */

FestivalGamePageBattleOrder * UISingletonDialog<FestivalGamePageBattleOrder>::ShowDialog(void)

{
  FestivalGamePageBattleOrder *pFVar1;
  char cVar2;
  FestivalGamePageBattleOrder *pFVar3;
  
  pFVar1 = m_pInstance;
  pFVar3 = pFVar1;
  if (m_pInstance == (FestivalGamePageBattleOrder *)0x0) {
    pFVar3 = ::operator_new(0x138);
    FestivalGamePageBattleOrder::FestivalGamePageBattleOrder(pFVar3);
    m_pInstance = pFVar3;
    cVar2 = (**(code **)(*(long *)pFVar3 + 0x310))(pFVar3);
    pFVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (FestivalGamePageBattleOrder *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (FestivalGamePageBattleOrder *)0x0;
      pFVar3 = pFVar1;
    }
  }
  return pFVar3;
}


/* UISingletonDialog<FestivalGamePageLimitedSummon>::ShowDialog() */

FestivalGamePageLimitedSummon * UISingletonDialog<FestivalGamePageLimitedSummon>::ShowDialog(void)

{
  FestivalGamePageLimitedSummon *pFVar1;
  char cVar2;
  FestivalGamePageLimitedSummon *pFVar3;
  
  pFVar1 = m_pInstance;
  pFVar3 = pFVar1;
  if (m_pInstance == (FestivalGamePageLimitedSummon *)0x0) {
    pFVar3 = ::operator_new(0x138);
    FestivalGamePageLimitedSummon::FestivalGamePageLimitedSummon(pFVar3);
    m_pInstance = pFVar3;
    cVar2 = (**(code **)(*(long *)pFVar3 + 0x310))(pFVar3);
    pFVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (FestivalGamePageLimitedSummon *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (FestivalGamePageLimitedSummon *)0x0;
      pFVar3 = pFVar1;
    }
  }
  return pFVar3;
}


/* UISingletonDialog<FestivalGamePageCarnival>::ShowDialog() */

FestivalGamePageCarnival * UISingletonDialog<FestivalGamePageCarnival>::ShowDialog(void)

{
  FestivalGamePageCarnival *pFVar1;
  char cVar2;
  FestivalGamePageCarnival *pFVar3;
  
  pFVar1 = m_pInstance;
  pFVar3 = pFVar1;
  if (m_pInstance == (FestivalGamePageCarnival *)0x0) {
    pFVar3 = ::operator_new(0x138);
    FestivalGamePageCarnival::FestivalGamePageCarnival(pFVar3);
    m_pInstance = pFVar3;
    cVar2 = (**(code **)(*(long *)pFVar3 + 0x310))(pFVar3);
    pFVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (FestivalGamePageCarnival *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (FestivalGamePageCarnival *)0x0;
      pFVar3 = pFVar1;
    }
  }
  return pFVar3;
}


/* UISingletonDialog<FestivalGamePageNewYearGoods>::ShowDialog() */

FestivalGamePageNewYearGoods * UISingletonDialog<FestivalGamePageNewYearGoods>::ShowDialog(void)

{
  FestivalGamePageNewYearGoods *pFVar1;
  char cVar2;
  FestivalGamePageNewYearGoods *pFVar3;
  
  pFVar1 = m_pInstance;
  pFVar3 = pFVar1;
  if (m_pInstance == (FestivalGamePageNewYearGoods *)0x0) {
    pFVar3 = ::operator_new(0x138);
    FestivalGamePageNewYearGoods::FestivalGamePageNewYearGoods(pFVar3);
    m_pInstance = pFVar3;
    cVar2 = (**(code **)(*(long *)pFVar3 + 0x310))(pFVar3);
    pFVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (FestivalGamePageNewYearGoods *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (FestivalGamePageNewYearGoods *)0x0;
      pFVar3 = pFVar1;
    }
  }
  return pFVar3;
}


/* UISingletonDialog<ConsumeAndReceivePage>::ShowDialog() */

ConsumeAndReceivePage * UISingletonDialog<ConsumeAndReceivePage>::ShowDialog(void)

{
  ConsumeAndReceivePage *pCVar1;
  char cVar2;
  ConsumeAndReceivePage *pCVar3;
  
  pCVar1 = m_pInstance;
  pCVar3 = pCVar1;
  if (m_pInstance == (ConsumeAndReceivePage *)0x0) {
    pCVar3 = ::operator_new(0x168);
    ConsumeAndReceivePage::ConsumeAndReceivePage(pCVar3);
    m_pInstance = pCVar3;
    cVar2 = (**(code **)(*(long *)pCVar3 + 0x310))(pCVar3);
    pCVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (ConsumeAndReceivePage *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (ConsumeAndReceivePage *)0x0;
      pCVar3 = pCVar1;
    }
  }
  return pCVar3;
}


/* UISingletonDialog<CustomVotingPage>::ShowDialog() */

CustomVotingPage * UISingletonDialog<CustomVotingPage>::ShowDialog(void)

{
  CustomVotingPage *pCVar1;
  char cVar2;
  CustomVotingPage *pCVar3;
  
  pCVar1 = m_pInstance;
  pCVar3 = pCVar1;
  if (m_pInstance == (CustomVotingPage *)0x0) {
    pCVar3 = ::operator_new(0x138);
    CustomVotingPage::CustomVotingPage(pCVar3);
    m_pInstance = pCVar3;
    cVar2 = (**(code **)(*(long *)pCVar3 + 0x310))(pCVar3);
    pCVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (CustomVotingPage *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (CustomVotingPage *)0x0;
      pCVar3 = pCVar1;
    }
  }
  return pCVar3;
}


/* UISingletonDialog<GenericFestivalPage>::ShowDialog() */

GenericFestivalPage * UISingletonDialog<GenericFestivalPage>::ShowDialog(void)

{
  GenericFestivalPage *pGVar1;
  char cVar2;
  GenericFestivalPage *pGVar3;
  
  pGVar1 = m_pInstance;
  pGVar3 = pGVar1;
  if (m_pInstance == (GenericFestivalPage *)0x0) {
    pGVar3 = ::operator_new(0x140);
    GenericFestivalPage::GenericFestivalPage(pGVar3);
    m_pInstance = pGVar3;
    cVar2 = (**(code **)(*(long *)pGVar3 + 0x310))(pGVar3);
    pGVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (GenericFestivalPage *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (GenericFestivalPage *)0x0;
      pGVar3 = pGVar1;
    }
  }
  return pGVar3;
}


/* UISingletonDialog<GoldenEggPage>::ShowDialog() */

GoldenEggPage * UISingletonDialog<GoldenEggPage>::ShowDialog(void)

{
  GoldenEggPage *pGVar1;
  char cVar2;
  GoldenEggPage *pGVar3;
  
  pGVar1 = m_pInstance;
  pGVar3 = pGVar1;
  if (m_pInstance == (GoldenEggPage *)0x0) {
    pGVar3 = ::operator_new(0x138);
    GoldenEggPage::GoldenEggPage(pGVar3);
    m_pInstance = pGVar3;
    cVar2 = (**(code **)(*(long *)pGVar3 + 0x310))(pGVar3);
    pGVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (GoldenEggPage *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (GoldenEggPage *)0x0;
      pGVar3 = pGVar1;
    }
  }
  return pGVar3;
}


/* UISingletonDialog<TimeTravelSelEntranceUI>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<TimeTravelSelEntranceUI>::~UISingletonDialog
          (UISingletonDialog<TimeTravelSelEntranceUI> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06723860;
  *(undefined ***)this = &PTR_GetClass_06723510;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<TimeTravelSelEntranceUI> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<TimeTravelSelEntranceUI>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<TimeTravelSelEntranceUI>::~UISingletonDialog
          (UISingletonDialog<TimeTravelSelEntranceUI> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<TimeTravelSelEntranceUI>::UISingletonDialog() */

void __thiscall
UISingletonDialog<TimeTravelSelEntranceUI>::UISingletonDialog
          (UISingletonDialog<TimeTravelSelEntranceUI> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06723510;
  *(undefined **)(this + 0xd8) = &DAT_06723860;
  return;
}


/* UISingletonDialog<TimeTravelSelEntranceUI>::CloseDialog() */

void UISingletonDialog<TimeTravelSelEntranceUI>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<PlantDefenceEntranceUI>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<PlantDefenceEntranceUI>::~UISingletonDialog
          (UISingletonDialog<PlantDefenceEntranceUI> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06724c70;
  *(undefined ***)this = &PTR_GetClass_06724920;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<PlantDefenceEntranceUI> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<PlantDefenceEntranceUI>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<PlantDefenceEntranceUI>::~UISingletonDialog
          (UISingletonDialog<PlantDefenceEntranceUI> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<PlantDefenceEntranceUI>::UISingletonDialog() */

void __thiscall
UISingletonDialog<PlantDefenceEntranceUI>::UISingletonDialog
          (UISingletonDialog<PlantDefenceEntranceUI> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06724920;
  *(undefined **)(this + 0xd8) = &DAT_06724c70;
  return;
}


/* UISingletonDialog<PlantDefenceEntranceUI>::CloseDialog() */

void UISingletonDialog<PlantDefenceEntranceUI>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UICustomLevelAppraise>::ShowDialog() */

UICustomLevelAppraise * UISingletonDialog<UICustomLevelAppraise>::ShowDialog(void)

{
  UICustomLevelAppraise *pUVar1;
  char cVar2;
  UICustomLevelAppraise *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UICustomLevelAppraise *)0x0) {
    pUVar3 = ::operator_new(0x1e0);
    UICustomLevelAppraise::UICustomLevelAppraise(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UICustomLevelAppraise *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UICustomLevelAppraise *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<FestivalEventUI>::ShowDialog() */

FestivalEventUI * UISingletonDialog<FestivalEventUI>::ShowDialog(void)

{
  FestivalEventUI *pFVar1;
  char cVar2;
  FestivalEventUI *pFVar3;
  
  pFVar1 = m_pInstance;
  pFVar3 = pFVar1;
  if (m_pInstance == (FestivalEventUI *)0x0) {
    pFVar3 = ::operator_new(0x200);
    FestivalEventUI::FestivalEventUI(pFVar3);
    m_pInstance = pFVar3;
    cVar2 = (**(code **)(*(long *)pFVar3 + 0x310))(pFVar3);
    pFVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (FestivalEventUI *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (FestivalEventUI *)0x0;
      pFVar3 = pFVar1;
    }
  }
  return pFVar3;
}


/* UISingletonDialog<FestivalEventUI>::CloseDialog() */

void UISingletonDialog<FestivalEventUI>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<RechargeWelfareUI>::ShowDialog() */

RechargeWelfareUI * UISingletonDialog<RechargeWelfareUI>::ShowDialog(void)

{
  RechargeWelfareUI *pRVar1;
  char cVar2;
  RechargeWelfareUI *pRVar3;
  
  pRVar1 = m_pInstance;
  pRVar3 = pRVar1;
  if (m_pInstance == (RechargeWelfareUI *)0x0) {
    pRVar3 = ::operator_new(0x200);
    RechargeWelfareUI::RechargeWelfareUI(pRVar3);
    m_pInstance = pRVar3;
    cVar2 = (**(code **)(*(long *)pRVar3 + 0x310))(pRVar3);
    pRVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (RechargeWelfareUI *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (RechargeWelfareUI *)0x0;
      pRVar3 = pRVar1;
    }
  }
  return pRVar3;
}


/* UISingletonDialog<RechargeWelfareUI>::CloseDialog() */

void UISingletonDialog<RechargeWelfareUI>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


UIMiniGameCollection * UISingletonDialog<UIMiniGameCollection>::ShowDialog(void)

{
  UIMiniGameCollection *pUVar1;
  char cVar2;
  UIMiniGameCollection *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIMiniGameCollection *)0x0) {
    pUVar3 = ::operator_new(0x160);
    UIMiniGameCollection::UIMiniGameCollection(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIMiniGameCollection *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIMiniGameCollection *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


UIMiniGameCollection * UISingletonDialog<UIMiniGameCollection>::ShowDialog(void)

{
  UIMiniGameCollection *pUVar1;
  char cVar2;
  UIMiniGameCollection *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIMiniGameCollection *)0x0) {
    pUVar3 = ::operator_new(0x160);
    UIMiniGameCollection::UIMiniGameCollection(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIMiniGameCollection *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIMiniGameCollection *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


UIMiniGameCollection * UISingletonDialog<UIMiniGameCollection>::ShowDialog(void)

{
  UIMiniGameCollection *pUVar1;
  char cVar2;
  UIMiniGameCollection *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIMiniGameCollection *)0x0) {
    pUVar3 = ::operator_new(0x160);
    UIMiniGameCollection::UIMiniGameCollection(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIMiniGameCollection *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIMiniGameCollection *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


UIMiniGameCollection * UISingletonDialog<UIMiniGameCollection>::ShowDialog(void)

{
  UIMiniGameCollection *pUVar1;
  char cVar2;
  UIMiniGameCollection *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIMiniGameCollection *)0x0) {
    pUVar3 = ::operator_new(0x160);
    UIMiniGameCollection::UIMiniGameCollection(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIMiniGameCollection *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIMiniGameCollection *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


UIMiniGameCollection * UISingletonDialog<UIMiniGameCollection>::ShowDialog(void)

{
  UIMiniGameCollection *pUVar1;
  char cVar2;
  UIMiniGameCollection *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIMiniGameCollection *)0x0) {
    pUVar3 = ::operator_new(0x160);
    UIMiniGameCollection::UIMiniGameCollection(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIMiniGameCollection *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIMiniGameCollection *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


UIMiniGameCollection * UISingletonDialog<UIMiniGameCollection>::ShowDialog(void)

{
  UIMiniGameCollection *pUVar1;
  char cVar2;
  UIMiniGameCollection *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIMiniGameCollection *)0x0) {
    pUVar3 = ::operator_new(0x160);
    UIMiniGameCollection::UIMiniGameCollection(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIMiniGameCollection *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIMiniGameCollection *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<PVPEntryDlg>::ShowDialog() */

PVPEntryDlg * UISingletonDialog<PVPEntryDlg>::ShowDialog(void)

{
  PVPEntryDlg *pPVar1;
  char cVar2;
  PVPEntryDlg *pPVar3;
  
  pPVar1 = m_pInstance;
  pPVar3 = pPVar1;
  if (m_pInstance == (PVPEntryDlg *)0x0) {
    pPVar3 = ::operator_new(0x178);
    PVPEntryDlg::PVPEntryDlg(pPVar3);
    m_pInstance = pPVar3;
    cVar2 = (**(code **)(*(long *)pPVar3 + 0x310))(pPVar3);
    pPVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (PVPEntryDlg *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (PVPEntryDlg *)0x0;
      pPVar3 = pPVar1;
    }
  }
  return pPVar3;
}


/* UISingletonDialog<PVPEntryDlg>::CloseDialog() */

void UISingletonDialog<PVPEntryDlg>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<PVPLabDlg>::ShowDialog() */

PVPLabDlg * UISingletonDialog<PVPLabDlg>::ShowDialog(void)

{
  PVPLabDlg *pPVar1;
  char cVar2;
  PVPLabDlg *pPVar3;
  
  pPVar1 = m_pInstance;
  pPVar3 = pPVar1;
  if (m_pInstance == (PVPLabDlg *)0x0) {
    pPVar3 = ::operator_new(0x170);
    PVPLabDlg::PVPLabDlg(pPVar3);
    m_pInstance = pPVar3;
    cVar2 = (**(code **)(*(long *)pPVar3 + 0x310))(pPVar3);
    pPVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (PVPLabDlg *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (PVPLabDlg *)0x0;
      pPVar3 = pPVar1;
    }
  }
  return pPVar3;
}


/* UISingletonDialog<PVPLabDlg>::CloseDialog() */

void UISingletonDialog<PVPLabDlg>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIDangerRoomTrainingSkipLevel>::ShowDialog() */

UIDangerRoomTrainingSkipLevel * UISingletonDialog<UIDangerRoomTrainingSkipLevel>::ShowDialog(void)

{
  UIDangerRoomTrainingSkipLevel *pUVar1;
  char cVar2;
  UIDangerRoomTrainingSkipLevel *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIDangerRoomTrainingSkipLevel *)0x0) {
    pUVar3 = ::operator_new(0x160);
    UIDangerRoomTrainingSkipLevel::UIDangerRoomTrainingSkipLevel(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIDangerRoomTrainingSkipLevel *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIDangerRoomTrainingSkipLevel *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIDangerRoomSkipLevel>::ShowDialog() */

UIDangerRoomSkipLevel * UISingletonDialog<UIDangerRoomSkipLevel>::ShowDialog(void)

{
  UIDangerRoomSkipLevel *pUVar1;
  char cVar2;
  UIDangerRoomSkipLevel *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIDangerRoomSkipLevel *)0x0) {
    pUVar3 = ::operator_new(0x1a0);
    UIDangerRoomSkipLevel::UIDangerRoomSkipLevel(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIDangerRoomSkipLevel *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIDangerRoomSkipLevel *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIPVZ1ModeCredits>::ShowDialog() */

UIPVZ1ModeCredits * UISingletonDialog<UIPVZ1ModeCredits>::ShowDialog(void)

{
  UIPVZ1ModeCredits *pUVar1;
  char cVar2;
  UIPVZ1ModeCredits *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIPVZ1ModeCredits *)0x0) {
    pUVar3 = ::operator_new(0x138);
    UIPVZ1ModeCredits::UIPVZ1ModeCredits(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIPVZ1ModeCredits *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIPVZ1ModeCredits *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIRankAvatarSelect>::ShowDialog() */

UIRankAvatarSelect * UISingletonDialog<UIRankAvatarSelect>::ShowDialog(void)

{
  UIRankAvatarSelect *pUVar1;
  char cVar2;
  UIRankAvatarSelect *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIRankAvatarSelect *)0x0) {
    pUVar3 = ::operator_new(0x160);
    UIRankAvatarSelect::UIRankAvatarSelect(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIRankAvatarSelect *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIRankAvatarSelect *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIPrivacyDialog>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPrivacyDialog>::~UISingletonDialog(UISingletonDialog<UIPrivacyDialog> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06773480;
  *(undefined ***)this = &PTR_GetClass_06773130;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIPrivacyDialog> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIPrivacyDialog>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPrivacyDialog>::~UISingletonDialog(UISingletonDialog<UIPrivacyDialog> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIPrivacyDialog>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPrivacyDialog>::UISingletonDialog(UISingletonDialog<UIPrivacyDialog> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06773130;
  *(undefined **)(this + 0xd8) = &DAT_06773480;
  return;
}


/* UISingletonDialog<UIPrivacyDialog>::CloseDialog() */

void UISingletonDialog<UIPrivacyDialog>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UISettingLargeTextEnunciation>::CloseDialog() */

void UISingletonDialog<UISettingLargeTextEnunciation>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UISecretStoreScrollPanel>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UISecretStoreScrollPanel>::~UISingletonDialog
          (UISingletonDialog<UISecretStoreScrollPanel> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06774450;
  *(undefined ***)this = &PTR_GetClass_06774100;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UISecretStoreScrollPanel> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UISecretStoreScrollPanel>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UISecretStoreScrollPanel>::~UISingletonDialog
          (UISingletonDialog<UISecretStoreScrollPanel> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UISecretStore>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UISecretStore>::~UISingletonDialog(UISingletonDialog<UISecretStore> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_067747f0;
  *(undefined ***)this = &PTR_GetClass_067744a0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UISecretStore> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UISecretStore>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UISecretStore>::~UISingletonDialog(UISingletonDialog<UISecretStore> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UISecretStoreScrollPanel>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UISecretStoreScrollPanel>::UISingletonDialog
          (UISingletonDialog<UISecretStoreScrollPanel> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06774100;
  *(undefined **)(this + 0xd8) = &DAT_06774450;
  return;
}


/* UISingletonDialog<UISecretStore>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UISecretStore>::UISingletonDialog(UISingletonDialog<UISecretStore> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_067744a0;
  *(undefined **)(this + 0xd8) = &DAT_067747f0;
  return;
}


/* UISingletonDialog<UISecretStoreScrollPanel>::ShowDialog() */

UISecretStoreScrollPanel * UISingletonDialog<UISecretStoreScrollPanel>::ShowDialog(void)

{
  UISecretStoreScrollPanel *pUVar1;
  char cVar2;
  UISecretStoreScrollPanel *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UISecretStoreScrollPanel *)0x0) {
    pUVar3 = ::operator_new(0x138);
    UISecretStoreScrollPanel::UISecretStoreScrollPanel(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UISecretStoreScrollPanel *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UISecretStoreScrollPanel *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UISecretStore>::CloseDialog() */

void UISingletonDialog<UISecretStore>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UISecretStore>::GetSingletonPtr() */

undefined8 UISingletonDialog<UISecretStore>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UISecretStore>::ShowDialog() */

UISecretStore * UISingletonDialog<UISecretStore>::ShowDialog(void)

{
  UISecretStore *pUVar1;
  char cVar2;
  UISecretStore *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UISecretStore *)0x0) {
    pUVar3 = ::operator_new(0x160);
    UISecretStore::UISecretStore(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UISecretStore *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UISecretStore *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UINewerPresentDetail>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewerPresentDetail>::~UISingletonDialog
          (UISingletonDialog<UINewerPresentDetail> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06777d90;
  *(undefined ***)this = &PTR_GetClass_06777a40;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UINewerPresentDetail> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UINewerPresentDetail>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewerPresentDetail>::~UISingletonDialog
          (UISingletonDialog<UINewerPresentDetail> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UINewerPresentScrollPanel>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewerPresentScrollPanel>::~UISingletonDialog
          (UISingletonDialog<UINewerPresentScrollPanel> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06778130;
  *(undefined ***)this = &PTR_GetClass_06777de0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UINewerPresentScrollPanel> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UINewerPresentScrollPanel>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewerPresentScrollPanel>::~UISingletonDialog
          (UISingletonDialog<UINewerPresentScrollPanel> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UINewerPresent>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewerPresent>::~UISingletonDialog(UISingletonDialog<UINewerPresent> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_067784d0;
  *(undefined ***)this = &PTR_GetClass_06778180;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UINewerPresent> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UINewerPresent>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewerPresent>::~UISingletonDialog(UISingletonDialog<UINewerPresent> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UINewerPresentDetail>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewerPresentDetail>::UISingletonDialog
          (UISingletonDialog<UINewerPresentDetail> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06777a40;
  *(undefined **)(this + 0xd8) = &DAT_06777d90;
  return;
}


/* UISingletonDialog<UINewerPresentDetail>::CloseDialog() */

void UISingletonDialog<UINewerPresentDetail>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UINewerPresentScrollPanel>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewerPresentScrollPanel>::UISingletonDialog
          (UISingletonDialog<UINewerPresentScrollPanel> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06777de0;
  *(undefined **)(this + 0xd8) = &DAT_06778130;
  return;
}


/* UISingletonDialog<UINewerPresent>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewerPresent>::UISingletonDialog(UISingletonDialog<UINewerPresent> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06778180;
  *(undefined **)(this + 0xd8) = &DAT_067784d0;
  return;
}


/* UISingletonDialog<UINewerPresentScrollPanel>::ShowDialog() */

UINewerPresentScrollPanel * UISingletonDialog<UINewerPresentScrollPanel>::ShowDialog(void)

{
  UINewerPresentScrollPanel *pUVar1;
  char cVar2;
  UINewerPresentScrollPanel *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UINewerPresentScrollPanel *)0x0) {
    pUVar3 = ::operator_new(0x138);
    UINewerPresentScrollPanel::UINewerPresentScrollPanel(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UINewerPresentScrollPanel *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UINewerPresentScrollPanel *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UINewerPresent>::CloseDialog() */

void UISingletonDialog<UINewerPresent>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UINewerPresent>::GetSingletonPtr() */

undefined8 UISingletonDialog<UINewerPresent>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UINewerPresent>::ShowDialog() */

UINewerPresent * UISingletonDialog<UINewerPresent>::ShowDialog(void)

{
  UINewerPresent *pUVar1;
  char cVar2;
  UINewerPresent *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UINewerPresent *)0x0) {
    pUVar3 = ::operator_new(0x150);
    UINewerPresent::UINewerPresent(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UINewerPresent *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UINewerPresent *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UINewerPresentDetail>::ShowDialog() */

UINewerPresentDetail * UISingletonDialog<UINewerPresentDetail>::ShowDialog(void)

{
  UINewerPresentDetail *pUVar1;
  char cVar2;
  UINewerPresentDetail *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UINewerPresentDetail *)0x0) {
    pUVar3 = ::operator_new(0x160);
    UINewerPresentDetail::UINewerPresentDetail(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UINewerPresentDetail *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UINewerPresentDetail *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIArtifactPresentScrollPanel>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIArtifactPresentScrollPanel>::~UISingletonDialog
          (UISingletonDialog<UIArtifactPresentScrollPanel> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06779ef0;
  *(undefined ***)this = &PTR_GetClass_06779ba0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIArtifactPresentScrollPanel> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIArtifactPresentScrollPanel>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIArtifactPresentScrollPanel>::~UISingletonDialog
          (UISingletonDialog<UIArtifactPresentScrollPanel> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIArtifactPresent>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIArtifactPresent>::~UISingletonDialog(UISingletonDialog<UIArtifactPresent> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_0677a290;
  *(undefined ***)this = &PTR_GetClass_06779f40;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIArtifactPresent> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIArtifactPresent>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIArtifactPresent>::~UISingletonDialog(UISingletonDialog<UIArtifactPresent> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIArtifactPresentDetail>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIArtifactPresentDetail>::~UISingletonDialog
          (UISingletonDialog<UIArtifactPresentDetail> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_0677a650;
  *(undefined ***)this = &PTR_GetClass_0677a300;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIArtifactPresentDetail> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIArtifactPresentDetail>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIArtifactPresentDetail>::~UISingletonDialog
          (UISingletonDialog<UIArtifactPresentDetail> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIArtifactPresentScrollPanel>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIArtifactPresentScrollPanel>::UISingletonDialog
          (UISingletonDialog<UIArtifactPresentScrollPanel> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06779ba0;
  *(undefined **)(this + 0xd8) = &DAT_06779ef0;
  return;
}


/* UISingletonDialog<UIArtifactPresent>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIArtifactPresent>::UISingletonDialog(UISingletonDialog<UIArtifactPresent> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06779f40;
  *(undefined **)(this + 0xd8) = &DAT_0677a290;
  return;
}


/* UISingletonDialog<UIArtifactPresentScrollPanel>::ShowDialog() */

UIArtifactPresentScrollPanel * UISingletonDialog<UIArtifactPresentScrollPanel>::ShowDialog(void)

{
  UIArtifactPresentScrollPanel *pUVar1;
  char cVar2;
  UIArtifactPresentScrollPanel *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIArtifactPresentScrollPanel *)0x0) {
    pUVar3 = ::operator_new(0x138);
    UIArtifactPresentScrollPanel::UIArtifactPresentScrollPanel(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIArtifactPresentScrollPanel *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIArtifactPresentScrollPanel *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIArtifactPresent>::CloseDialog() */

void UISingletonDialog<UIArtifactPresent>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIArtifactPresent>::GetSingletonPtr() */

undefined8 UISingletonDialog<UIArtifactPresent>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UIArtifactPresent>::ShowDialog() */

UIArtifactPresent * UISingletonDialog<UIArtifactPresent>::ShowDialog(void)

{
  UIArtifactPresent *pUVar1;
  char cVar2;
  UIArtifactPresent *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIArtifactPresent *)0x0) {
    pUVar3 = ::operator_new(0x150);
    UIArtifactPresent::UIArtifactPresent(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIArtifactPresent *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIArtifactPresent *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIArtifactPresentDetail>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIArtifactPresentDetail>::UISingletonDialog
          (UISingletonDialog<UIArtifactPresentDetail> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_0677a300;
  *(undefined **)(this + 0xd8) = &DAT_0677a650;
  return;
}


/* UISingletonDialog<UIArtifactPresentDetail>::ShowDialog() */

UIArtifactPresentDetail * UISingletonDialog<UIArtifactPresentDetail>::ShowDialog(void)

{
  UIArtifactPresentDetail *pUVar1;
  char cVar2;
  UIArtifactPresentDetail *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIArtifactPresentDetail *)0x0) {
    pUVar3 = ::operator_new(0x158);
    UIArtifactPresentDetail::UIArtifactPresentDetail(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIArtifactPresentDetail *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIArtifactPresentDetail *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIArtifactPresentDetail>::CloseDialog() */

void UISingletonDialog<UIArtifactPresentDetail>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UISecretAreaRewardScrollPanel>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UISecretAreaRewardScrollPanel>::~UISingletonDialog
          (UISingletonDialog<UISecretAreaRewardScrollPanel> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_0677b690;
  *(undefined ***)this = &PTR_GetClass_0677b340;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UISecretAreaRewardScrollPanel> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UISecretAreaRewardScrollPanel>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UISecretAreaRewardScrollPanel>::~UISingletonDialog
          (UISingletonDialog<UISecretAreaRewardScrollPanel> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UISecretAreaReward>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UISecretAreaReward>::~UISingletonDialog
          (UISingletonDialog<UISecretAreaReward> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_0677ba30;
  *(undefined ***)this = &PTR_GetClass_0677b6e0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UISecretAreaReward> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UISecretAreaReward>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UISecretAreaReward>::~UISingletonDialog
          (UISingletonDialog<UISecretAreaReward> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIUnchartedFestivalRewardPurchase>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIUnchartedFestivalRewardPurchase>::~UISingletonDialog
          (UISingletonDialog<UIUnchartedFestivalRewardPurchase> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_0677bdf0;
  *(undefined ***)this = &PTR_GetClass_0677baa0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIUnchartedFestivalRewardPurchase> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIUnchartedFestivalRewardPurchase>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIUnchartedFestivalRewardPurchase>::~UISingletonDialog
          (UISingletonDialog<UIUnchartedFestivalRewardPurchase> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIUnchartedFestivalReward>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIUnchartedFestivalReward>::~UISingletonDialog
          (UISingletonDialog<UIUnchartedFestivalReward> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_0677c190;
  *(undefined ***)this = &PTR_GetClass_0677be40;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIUnchartedFestivalReward> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIUnchartedFestivalReward>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIUnchartedFestivalReward>::~UISingletonDialog
          (UISingletonDialog<UIUnchartedFestivalReward> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UISecretAreaRewardScrollPanel>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UISecretAreaRewardScrollPanel>::UISingletonDialog
          (UISingletonDialog<UISecretAreaRewardScrollPanel> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_0677b340;
  *(undefined **)(this + 0xd8) = &DAT_0677b690;
  return;
}


/* UISingletonDialog<UISecretAreaReward>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UISecretAreaReward>::UISingletonDialog
          (UISingletonDialog<UISecretAreaReward> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_0677b6e0;
  *(undefined **)(this + 0xd8) = &DAT_0677ba30;
  return;
}


/* UISingletonDialog<UISecretAreaReward>::CloseDialog() */

void UISingletonDialog<UISecretAreaReward>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UISecretAreaReward>::ShowDialog() */

UISecretAreaReward * UISingletonDialog<UISecretAreaReward>::ShowDialog(void)

{
  UISecretAreaReward *pUVar1;
  char cVar2;
  UISecretAreaReward *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UISecretAreaReward *)0x0) {
    pUVar3 = ::operator_new(0x168);
    UISecretAreaReward::UISecretAreaReward(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UISecretAreaReward *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UISecretAreaReward *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIUnchartedFestivalRewardPurchase>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIUnchartedFestivalRewardPurchase>::UISingletonDialog
          (UISingletonDialog<UIUnchartedFestivalRewardPurchase> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_0677baa0;
  *(undefined **)(this + 0xd8) = &DAT_0677bdf0;
  return;
}


/* UISingletonDialog<UIUnchartedFestivalRewardPurchase>::CloseDialog() */

void UISingletonDialog<UIUnchartedFestivalRewardPurchase>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIUnchartedFestivalReward>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIUnchartedFestivalReward>::UISingletonDialog
          (UISingletonDialog<UIUnchartedFestivalReward> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_0677be40;
  *(undefined **)(this + 0xd8) = &DAT_0677c190;
  return;
}


/* UISingletonDialog<UIUnchartedFestivalReward>::CloseDialog() */

void UISingletonDialog<UIUnchartedFestivalReward>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIUnchartedFestivalRewardPurchase>::ShowDialog() */

UIUnchartedFestivalRewardPurchase *
UISingletonDialog<UIUnchartedFestivalRewardPurchase>::ShowDialog(void)

{
  UIUnchartedFestivalRewardPurchase *pUVar1;
  char cVar2;
  UIUnchartedFestivalRewardPurchase *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIUnchartedFestivalRewardPurchase *)0x0) {
    pUVar3 = ::operator_new(0x138);
    UIUnchartedFestivalRewardPurchase::UIUnchartedFestivalRewardPurchase(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIUnchartedFestivalRewardPurchase *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIUnchartedFestivalRewardPurchase *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UISecretAreaRewardScrollPanel>::ShowDialog() */

UISecretAreaRewardScrollPanel * UISingletonDialog<UISecretAreaRewardScrollPanel>::ShowDialog(void)

{
  UISecretAreaRewardScrollPanel *pUVar1;
  char cVar2;
  UISecretAreaRewardScrollPanel *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UISecretAreaRewardScrollPanel *)0x0) {
    pUVar3 = ::operator_new(0x160);
    UISecretAreaRewardScrollPanel::UISecretAreaRewardScrollPanel(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UISecretAreaRewardScrollPanel *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UISecretAreaRewardScrollPanel *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UICustomLevelAppraise>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UICustomLevelAppraise>::~UISingletonDialog
          (UISingletonDialog<UICustomLevelAppraise> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06794150;
  *(undefined ***)this = &PTR_GetClass_06793e00;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UICustomLevelAppraise> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UICustomLevelAppraise>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UICustomLevelAppraise>::~UISingletonDialog
          (UISingletonDialog<UICustomLevelAppraise> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UICustomLevelAppraise>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UICustomLevelAppraise>::UISingletonDialog
          (UISingletonDialog<UICustomLevelAppraise> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06793e00;
  *(undefined **)(this + 0xd8) = &DAT_06794150;
  return;
}


/* UISingletonDialog<UICustomLevelAppraise>::CloseDialog() */

void UISingletonDialog<UICustomLevelAppraise>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UICustomLevelSubSetting>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UICustomLevelSubSetting>::~UISingletonDialog
          (UISingletonDialog<UICustomLevelSubSetting> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06794bd0;
  *(undefined ***)this = &PTR_GetClass_06794880;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UICustomLevelSubSetting> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UICustomLevelSubSetting>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UICustomLevelSubSetting>::~UISingletonDialog
          (UISingletonDialog<UICustomLevelSubSetting> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UICustomLevelMobileLink>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UICustomLevelMobileLink>::~UISingletonDialog
          (UISingletonDialog<UICustomLevelMobileLink> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06794f70;
  *(undefined ***)this = &PTR_GetClass_06794c20;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UICustomLevelMobileLink> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UICustomLevelMobileLink>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UICustomLevelMobileLink>::~UISingletonDialog
          (UISingletonDialog<UICustomLevelMobileLink> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UICustomLevelSetting>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UICustomLevelSetting>::~UISingletonDialog
          (UISingletonDialog<UICustomLevelSetting> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06795310;
  *(undefined ***)this = &PTR_GetClass_06794fc0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UICustomLevelSetting> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UICustomLevelSetting>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UICustomLevelSetting>::~UISingletonDialog
          (UISingletonDialog<UICustomLevelSetting> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UILevelEditorEncourageSetting>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UILevelEditorEncourageSetting>::~UISingletonDialog
          (UISingletonDialog<UILevelEditorEncourageSetting> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_067956d0;
  *(undefined ***)this = &PTR_GetClass_06795380;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UILevelEditorEncourageSetting> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UILevelEditorEncourageSetting>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UILevelEditorEncourageSetting>::~UISingletonDialog
          (UISingletonDialog<UILevelEditorEncourageSetting> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UICustomLevelSubSetting>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UICustomLevelSubSetting>::UISingletonDialog
          (UISingletonDialog<UICustomLevelSubSetting> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06794880;
  *(undefined **)(this + 0xd8) = &DAT_06794bd0;
  return;
}


/* UISingletonDialog<UICustomLevelSubSetting>::CloseDialog() */

void UISingletonDialog<UICustomLevelSubSetting>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UICustomLevelSetting>::GetSingletonPtr() */

undefined8 UISingletonDialog<UICustomLevelSetting>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UICustomLevelMobileLink>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UICustomLevelMobileLink>::UISingletonDialog
          (UISingletonDialog<UICustomLevelMobileLink> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06794c20;
  *(undefined **)(this + 0xd8) = &DAT_06794f70;
  return;
}


/* UISingletonDialog<UICustomLevelMobileLink>::ShowDialog() */

UICustomLevelMobileLink * UISingletonDialog<UICustomLevelMobileLink>::ShowDialog(void)

{
  UICustomLevelMobileLink *pUVar1;
  char cVar2;
  UICustomLevelMobileLink *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UICustomLevelMobileLink *)0x0) {
    pUVar3 = ::operator_new(0x168);
    UICustomLevelMobileLink::UICustomLevelMobileLink(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UICustomLevelMobileLink *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UICustomLevelMobileLink *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UICustomLevelMobileLink>::CloseDialog() */

void UISingletonDialog<UICustomLevelMobileLink>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UICustomLevelSetting>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UICustomLevelSetting>::UISingletonDialog
          (UISingletonDialog<UICustomLevelSetting> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06794fc0;
  *(undefined **)(this + 0xd8) = &DAT_06795310;
  return;
}


/* UISingletonDialog<UICustomLevelSetting>::CloseDialog() */

void UISingletonDialog<UICustomLevelSetting>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UICustomLevelSubSetting>::ShowDialog() */

UICustomLevelSubSetting * UISingletonDialog<UICustomLevelSubSetting>::ShowDialog(void)

{
  UICustomLevelSubSetting *pUVar1;
  char cVar2;
  UICustomLevelSubSetting *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UICustomLevelSubSetting *)0x0) {
    pUVar3 = ::operator_new(0x148);
    UICustomLevelSubSetting::UICustomLevelSubSetting(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UICustomLevelSubSetting *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UICustomLevelSubSetting *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UILevelEditorEncourageSetting>::CloseDialog() */

void UISingletonDialog<UILevelEditorEncourageSetting>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<LevelEditor>::GetSingletonPtr() */

undefined8 UISingletonDialog<LevelEditor>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UINewYearGiftBox>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewYearGiftBox>::~UISingletonDialog(UISingletonDialog<UINewYearGiftBox> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_067a9fe0;
  *(undefined ***)this = &PTR_GetClass_067a9c90;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UINewYearGiftBox> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UINewYearGiftBox>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewYearGiftBox>::~UISingletonDialog(UISingletonDialog<UINewYearGiftBox> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UINewYearGiftBox>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UINewYearGiftBox>::UISingletonDialog(UISingletonDialog<UINewYearGiftBox> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_067a9c90;
  *(undefined **)(this + 0xd8) = &DAT_067a9fe0;
  return;
}


/* UISingletonDialog<UINewYearGiftBox>::CloseDialog() */

void UISingletonDialog<UINewYearGiftBox>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


void UISingletonDialog<AdaptiveMessageBox>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


void UISingletonDialog<AdaptiveMessageBox>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<PlantPieceCompletionDlg>::ShowDialog() */

PlantPieceCompletionDlg * UISingletonDialog<PlantPieceCompletionDlg>::ShowDialog(void)

{
  PlantPieceCompletionDlg *pPVar1;
  char cVar2;
  PlantPieceCompletionDlg *pPVar3;
  
  pPVar1 = m_pInstance;
  pPVar3 = pPVar1;
  if (m_pInstance == (PlantPieceCompletionDlg *)0x0) {
    pPVar3 = ::operator_new(0x148);
    PlantPieceCompletionDlg::PlantPieceCompletionDlg(pPVar3);
    m_pInstance = pPVar3;
    cVar2 = (**(code **)(*(long *)pPVar3 + 0x310))(pPVar3);
    pPVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (PlantPieceCompletionDlg *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (PlantPieceCompletionDlg *)0x0;
      pPVar3 = pPVar1;
    }
  }
  return pPVar3;
}


/* UISingletonDialog<UIEditor>::ShowDialog() */

UIEditor * UISingletonDialog<UIEditor>::ShowDialog(void)

{
  UIEditor *pUVar1;
  char cVar2;
  UIEditor *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIEditor *)0x0) {
    pUVar3 = ::operator_new(0x240);
    UIEditor::UIEditor(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIEditor *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIEditor *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<FishingModuleEditor>::ShowDialog() */

FishingModuleEditor * UISingletonDialog<FishingModuleEditor>::ShowDialog(void)

{
  FishingModuleEditor *pFVar1;
  char cVar2;
  FishingModuleEditor *pFVar3;
  
  pFVar1 = m_pInstance;
  pFVar3 = pFVar1;
  if (m_pInstance == (FishingModuleEditor *)0x0) {
    pFVar3 = ::operator_new(0x1a0);
    FishingModuleEditor::FishingModuleEditor(pFVar3);
    m_pInstance = pFVar3;
    cVar2 = (**(code **)(*(long *)pFVar3 + 0x310))(pFVar3);
    pFVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (FishingModuleEditor *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (FishingModuleEditor *)0x0;
      pFVar3 = pFVar1;
    }
  }
  return pFVar3;
}


/* UISingletonDialog<FishingModuleEditor>::CloseDialog() */

void UISingletonDialog<FishingModuleEditor>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<LevelEditorStatueMaze>::ShowDialog() */

LevelEditorStatueMaze * UISingletonDialog<LevelEditorStatueMaze>::ShowDialog(void)

{
  LevelEditorStatueMaze *pLVar1;
  char cVar2;
  LevelEditorStatueMaze *pLVar3;
  
  pLVar1 = m_pInstance;
  pLVar3 = pLVar1;
  if (m_pInstance == (LevelEditorStatueMaze *)0x0) {
    pLVar3 = ::operator_new(0x1a0);
    LevelEditorStatueMaze::LevelEditorStatueMaze(pLVar3);
    m_pInstance = pLVar3;
    cVar2 = (**(code **)(*(long *)pLVar3 + 0x310))(pLVar3);
    pLVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (LevelEditorStatueMaze *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (LevelEditorStatueMaze *)0x0;
      pLVar3 = pLVar1;
    }
  }
  return pLVar3;
}


/* UISingletonDialog<GuessGamePanel>::ShowDialog() */

GuessGamePanel * UISingletonDialog<GuessGamePanel>::ShowDialog(void)

{
  GuessGamePanel *pGVar1;
  char cVar2;
  GuessGamePanel *pGVar3;
  
  pGVar1 = m_pInstance;
  pGVar3 = pGVar1;
  if (m_pInstance == (GuessGamePanel *)0x0) {
    pGVar3 = ::operator_new(0x1a8);
    GuessGamePanel::GuessGamePanel(pGVar3);
    m_pInstance = pGVar3;
    cVar2 = (**(code **)(*(long *)pGVar3 + 0x310))(pGVar3);
    pGVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (GuessGamePanel *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (GuessGamePanel *)0x0;
      pGVar3 = pGVar1;
    }
  }
  return pGVar3;
}


/* UISingletonDialog<UIArtifactBoostDetails>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIArtifactBoostDetails>::UISingletonDialog
          (UISingletonDialog<UIArtifactBoostDetails> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06696750;
  *(undefined **)(this + 0xd8) = &DAT_06696aa0;
  return;
}


/* UISingletonDialog<UIArtifactBoostDetails>::ShowDialog() */

UIArtifactBoostDetails * UISingletonDialog<UIArtifactBoostDetails>::ShowDialog(void)

{
  UIArtifactBoostDetails *pUVar1;
  char cVar2;
  UIArtifactBoostDetails *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIArtifactBoostDetails *)0x0) {
    pUVar3 = ::operator_new(0x140);
    memset(pUVar3,0,0x140);
    UIArtifactBoostDetails::UIArtifactBoostDetails(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIArtifactBoostDetails *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIArtifactBoostDetails *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UITutorialSkipDialog>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UITutorialSkipDialog>::~UISingletonDialog
          (UISingletonDialog<UITutorialSkipDialog> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_068537f0;
  *(undefined ***)this = &PTR_GetClass_068534a0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UITutorialSkipDialog> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UITutorialSkipDialog>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UITutorialSkipDialog>::~UISingletonDialog
          (UISingletonDialog<UITutorialSkipDialog> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UITutorialSkipDialog>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UITutorialSkipDialog>::UISingletonDialog
          (UISingletonDialog<UITutorialSkipDialog> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_068534a0;
  *(undefined **)(this + 0xd8) = &DAT_068537f0;
  return;
}


/* UISingletonDialog<UITutorialSkipDialog>::CloseDialog() */

void UISingletonDialog<UITutorialSkipDialog>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<BoardDlg>::GetSingletonPtr() */

undefined8 UISingletonDialog<BoardDlg>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<BoardDlg>::CloseDialog() */

void UISingletonDialog<BoardDlg>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<BoardDlg>::ShowDialog() */

BoardDlg * UISingletonDialog<BoardDlg>::ShowDialog(void)

{
  BoardDlg *pBVar1;
  char cVar2;
  BoardDlg *pBVar3;
  
  pBVar1 = m_pInstance;
  pBVar3 = pBVar1;
  if (m_pInstance == (BoardDlg *)0x0) {
    pBVar3 = ::operator_new(0x1e0);
    BoardDlg::BoardDlg(pBVar3);
    m_pInstance = pBVar3;
    cVar2 = (**(code **)(*(long *)pBVar3 + 0x310))(pBVar3);
    pBVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (BoardDlg *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (BoardDlg *)0x0;
      pBVar3 = pBVar1;
    }
  }
  return pBVar3;
}


/* UISingletonDialog<UIUnchartedEntry>::ShowDialog() */

UIUnchartedEntry * UISingletonDialog<UIUnchartedEntry>::ShowDialog(void)

{
  UIUnchartedEntry *pUVar1;
  char cVar2;
  UIUnchartedEntry *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIUnchartedEntry *)0x0) {
    pUVar3 = ::operator_new(0x208);
    UIUnchartedEntry::UIUnchartedEntry(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIUnchartedEntry *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIUnchartedEntry *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UICornucopia>::ShowDialog() */

UICornucopia * UISingletonDialog<UICornucopia>::ShowDialog(void)

{
  UICornucopia *pUVar1;
  char cVar2;
  UICornucopia *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UICornucopia *)0x0) {
    pUVar3 = ::operator_new(0x1d0);
    UICornucopia::UICornucopia(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UICornucopia *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UICornucopia *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UICornucopia>::GetSingletonPtr() */

undefined8 UISingletonDialog<UICornucopia>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UIHappyVaseBreaker>::ShowDialog() */

UIHappyVaseBreaker * UISingletonDialog<UIHappyVaseBreaker>::ShowDialog(void)

{
  UIHappyVaseBreaker *pUVar1;
  char cVar2;
  UIHappyVaseBreaker *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIHappyVaseBreaker *)0x0) {
    pUVar3 = ::operator_new(0x1b0);
    UIHappyVaseBreaker::UIHappyVaseBreaker(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIHappyVaseBreaker *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIHappyVaseBreaker *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIFightZodiacIntro>::ShowDialog() */

UIFightZodiacIntro * UISingletonDialog<UIFightZodiacIntro>::ShowDialog(void)

{
  UIFightZodiacIntro *pUVar1;
  char cVar2;
  UIFightZodiacIntro *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIFightZodiacIntro *)0x0) {
    pUVar3 = ::operator_new(0x140);
    UIFightZodiacIntro::UIFightZodiacIntro(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIFightZodiacIntro *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIFightZodiacIntro *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UINewRecall>::ShowDialog() */

UINewRecall * UISingletonDialog<UINewRecall>::ShowDialog(void)

{
  UINewRecall *pUVar1;
  char cVar2;
  UINewRecall *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UINewRecall *)0x0) {
    pUVar3 = ::operator_new(0x168);
    UINewRecall::UINewRecall(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UINewRecall *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UINewRecall *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UILuckyChest>::ShowDialog() */

UILuckyChest * UISingletonDialog<UILuckyChest>::ShowDialog(void)

{
  UILuckyChest *pUVar1;
  char cVar2;
  UILuckyChest *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UILuckyChest *)0x0) {
    pUVar3 = ::operator_new(0x140);
    UILuckyChest::UILuckyChest(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UILuckyChest *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UILuckyChest *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UITourismOctober>::ShowDialog() */

UITourismOctober * UISingletonDialog<UITourismOctober>::ShowDialog(void)

{
  UITourismOctober *pUVar1;
  char cVar2;
  UITourismOctober *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UITourismOctober *)0x0) {
    pUVar3 = ::operator_new(0x230);
    UITourismOctober::UITourismOctober(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UITourismOctober *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UITourismOctober *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UINighttheToyAction>::ShowDialog() */

UINighttheToyAction * UISingletonDialog<UINighttheToyAction>::ShowDialog(void)

{
  UINighttheToyAction *pUVar1;
  char cVar2;
  UINighttheToyAction *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UINighttheToyAction *)0x0) {
    pUVar3 = ::operator_new(0x138);
    UINighttheToyAction::UINighttheToyAction(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UINighttheToyAction *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UINighttheToyAction *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIBattleOrderIntroduction>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIBattleOrderIntroduction>::UISingletonDialog
          (UISingletonDialog<UIBattleOrderIntroduction> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06700300;
  *(undefined **)(this + 0xd8) = &DAT_06700650;
  return;
}


/* UISingletonDialog<UIBattleOrderIntroduction>::ShowDialog() */

UIBattleOrderIntroduction * UISingletonDialog<UIBattleOrderIntroduction>::ShowDialog(void)

{
  UIBattleOrderIntroduction *pUVar1;
  char cVar2;
  UIBattleOrderIntroduction *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIBattleOrderIntroduction *)0x0) {
    pUVar3 = ::operator_new(0x138);
    memset(pUVar3,0,0x138);
    UIBattleOrderIntroduction::UIBattleOrderIntroduction(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIBattleOrderIntroduction *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIBattleOrderIntroduction *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UILuckBagAnnouncement>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UILuckBagAnnouncement>::UISingletonDialog
          (UISingletonDialog<UILuckBagAnnouncement> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06715e10;
  *(undefined **)(this + 0xd8) = &DAT_06716160;
  return;
}


/* UISingletonDialog<UILuckBagAnnouncement>::ShowDialog() */

UILuckBagAnnouncement * UISingletonDialog<UILuckBagAnnouncement>::ShowDialog(void)

{
  UILuckBagAnnouncement *pUVar1;
  char cVar2;
  UILuckBagAnnouncement *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UILuckBagAnnouncement *)0x0) {
    pUVar3 = ::operator_new(0x138);
    memset(pUVar3,0,0x138);
    UILuckBagAnnouncement::UILuckBagAnnouncement(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UILuckBagAnnouncement *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UILuckBagAnnouncement *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UISpringFestival2024BoostPanel>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UISpringFestival2024BoostPanel>::~UISingletonDialog
          (UISingletonDialog<UISpringFestival2024BoostPanel> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_0685cc10;
  *(undefined ***)this = &PTR_GetClass_0685c8c0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UISpringFestival2024BoostPanel> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UISpringFestival2024BoostPanel>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UISpringFestival2024BoostPanel>::~UISingletonDialog
          (UISingletonDialog<UISpringFestival2024BoostPanel> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UISpringFestival2024BoostPanel>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UISpringFestival2024BoostPanel>::UISingletonDialog
          (UISingletonDialog<UISpringFestival2024BoostPanel> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_0685c8c0;
  *(undefined **)(this + 0xd8) = &DAT_0685cc10;
  return;
}


/* UISingletonDialog<UISpringFestival2024BoostPanel>::ShowDialog() */

UISpringFestival2024BoostPanel * UISingletonDialog<UISpringFestival2024BoostPanel>::ShowDialog(void)

{
  UISpringFestival2024BoostPanel *pUVar1;
  char cVar2;
  UISpringFestival2024BoostPanel *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UISpringFestival2024BoostPanel *)0x0) {
    pUVar3 = ::operator_new(0x140);
    UISpringFestival2024BoostPanel::UISpringFestival2024BoostPanel(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UISpringFestival2024BoostPanel *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UISpringFestival2024BoostPanel *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UISpringFestival2024BoostPanel>::CloseDialog() */

void UISingletonDialog<UISpringFestival2024BoostPanel>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<ActivityLevelsChoose>::ShowDialog() */

ActivityLevelsChoose * UISingletonDialog<ActivityLevelsChoose>::ShowDialog(void)

{
  ActivityLevelsChoose *pAVar1;
  char cVar2;
  ActivityLevelsChoose *pAVar3;
  
  pAVar1 = m_pInstance;
  pAVar3 = pAVar1;
  if (m_pInstance == (ActivityLevelsChoose *)0x0) {
    pAVar3 = ::operator_new(0x1a8);
    ActivityLevelsChoose::ActivityLevelsChoose(pAVar3);
    m_pInstance = pAVar3;
    cVar2 = (**(code **)(*(long *)pAVar3 + 0x310))(pAVar3);
    pAVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (ActivityLevelsChoose *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (ActivityLevelsChoose *)0x0;
      pAVar3 = pAVar1;
    }
  }
  return pAVar3;
}


/* UISingletonDialog<UIBag>::ShowDialog() */

UIBag * UISingletonDialog<UIBag>::ShowDialog(void)

{
  UIBag *pUVar1;
  char cVar2;
  UIBag *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIBag *)0x0) {
    pUVar3 = ::operator_new(0x1b0);
    UIBag::UIBag(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIBag *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIBag *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<SpringDailyAwardUI>::ShowDialog() */

SpringDailyAwardUI * UISingletonDialog<SpringDailyAwardUI>::ShowDialog(void)

{
  SpringDailyAwardUI *pSVar1;
  char cVar2;
  SpringDailyAwardUI *pSVar3;
  
  pSVar1 = m_pInstance;
  pSVar3 = pSVar1;
  if (m_pInstance == (SpringDailyAwardUI *)0x0) {
    pSVar3 = ::operator_new(0x1b8);
    SpringDailyAwardUI::SpringDailyAwardUI(pSVar3);
    m_pInstance = pSVar3;
    cVar2 = (**(code **)(*(long *)pSVar3 + 0x310))(pSVar3);
    pSVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (SpringDailyAwardUI *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (SpringDailyAwardUI *)0x0;
      pSVar3 = pSVar1;
    }
  }
  return pSVar3;
}


/* UISingletonDialog<UILimitLottery>::ShowDialog() */

UILimitLottery * UISingletonDialog<UILimitLottery>::ShowDialog(void)

{
  UILimitLottery *pUVar1;
  char cVar2;
  UILimitLottery *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UILimitLottery *)0x0) {
    pUVar3 = ::operator_new(0x1d0);
    UILimitLottery::UILimitLottery(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UILimitLottery *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UILimitLottery *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIDaveTreasure>::ShowDialog() */

UIDaveTreasure * UISingletonDialog<UIDaveTreasure>::ShowDialog(void)

{
  UIDaveTreasure *pUVar1;
  char cVar2;
  UIDaveTreasure *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIDaveTreasure *)0x0) {
    pUVar3 = ::operator_new(0x178);
    UIDaveTreasure::UIDaveTreasure(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIDaveTreasure *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIDaveTreasure *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UITravelLog>::ShowDialog() */

UITravelLog * UISingletonDialog<UITravelLog>::ShowDialog(void)

{
  UITravelLog *pUVar1;
  char cVar2;
  UITravelLog *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UITravelLog *)0x0) {
    pUVar3 = ::operator_new(0x160);
    UITravelLog::UITravelLog(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UITravelLog *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UITravelLog *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIPennyGuide>::ShowDialog() */

UIPennyGuide * UISingletonDialog<UIPennyGuide>::ShowDialog(void)

{
  UIPennyGuide *pUVar1;
  char cVar2;
  UIPennyGuide *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIPennyGuide *)0x0) {
    pUVar3 = ::operator_new(0x178);
    UIPennyGuide::UIPennyGuide(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIPennyGuide *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIPennyGuide *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIMiniGameEntrance>::ShowDialog() */

UIMiniGameEntrance * UISingletonDialog<UIMiniGameEntrance>::ShowDialog(void)

{
  UIMiniGameEntrance *pUVar1;
  char cVar2;
  UIMiniGameEntrance *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIMiniGameEntrance *)0x0) {
    pUVar3 = ::operator_new(0x140);
    UIMiniGameEntrance::UIMiniGameEntrance(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIMiniGameEntrance *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIMiniGameEntrance *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<MonthlyCardSpecialUI>::ShowDialog() */

MonthlyCardSpecialUI * UISingletonDialog<MonthlyCardSpecialUI>::ShowDialog(void)

{
  MonthlyCardSpecialUI *pMVar1;
  char cVar2;
  MonthlyCardSpecialUI *pMVar3;
  
  pMVar1 = m_pInstance;
  pMVar3 = pMVar1;
  if (m_pInstance == (MonthlyCardSpecialUI *)0x0) {
    pMVar3 = ::operator_new(0x160);
    MonthlyCardSpecialUI::MonthlyCardSpecialUI(pMVar3);
    m_pInstance = pMVar3;
    cVar2 = (**(code **)(*(long *)pMVar3 + 0x310))(pMVar3);
    pMVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (MonthlyCardSpecialUI *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (MonthlyCardSpecialUI *)0x0;
      pMVar3 = pMVar1;
    }
  }
  return pMVar3;
}


/* UISingletonDialog<UINoviceSevenDays>::ShowDialog() */

UINoviceSevenDays * UISingletonDialog<UINoviceSevenDays>::ShowDialog(void)

{
  UINoviceSevenDays *pUVar1;
  char cVar2;
  UINoviceSevenDays *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UINoviceSevenDays *)0x0) {
    pUVar3 = ::operator_new(0x168);
    UINoviceSevenDays::UINoviceSevenDays(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UINoviceSevenDays *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UINoviceSevenDays *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIGrowthPackage>::ShowDialog() */

UIGrowthPackage * UISingletonDialog<UIGrowthPackage>::ShowDialog(void)

{
  UIGrowthPackage *pUVar1;
  char cVar2;
  UIGrowthPackage *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIGrowthPackage *)0x0) {
    pUVar3 = ::operator_new(0x1c8);
    UIGrowthPackage::UIGrowthPackage(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIGrowthPackage *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIGrowthPackage *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIInvitation>::ShowDialog() */

UIInvitation * UISingletonDialog<UIInvitation>::ShowDialog(void)

{
  UIInvitation *pUVar1;
  char cVar2;
  UIInvitation *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIInvitation *)0x0) {
    pUVar3 = ::operator_new(600);
    UIInvitation::UIInvitation(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIInvitation *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIInvitation *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIGiftFoReturn>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIGiftFoReturn>::UISingletonDialog(UISingletonDialog<UIGiftFoReturn> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_0663fe40;
  *(undefined **)(this + 0xd8) = &DAT_06640190;
  return;
}


/* UISingletonDialog<UIGiftFoReturn>::ShowDialog() */

UIGiftFoReturn * UISingletonDialog<UIGiftFoReturn>::ShowDialog(void)

{
  UIGiftFoReturn *pUVar1;
  char cVar2;
  UIGiftFoReturn *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIGiftFoReturn *)0x0) {
    pUVar3 = ::operator_new(0x248);
    memset(pUVar3,0,0x248);
    UIGiftFoReturn::UIGiftFoReturn(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIGiftFoReturn *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIGiftFoReturn *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<PvpExchangeDlg>::ShowDialog() */

PvpExchangeDlg * UISingletonDialog<PvpExchangeDlg>::ShowDialog(void)

{
  PvpExchangeDlg *pPVar1;
  char cVar2;
  PvpExchangeDlg *pPVar3;
  
  pPVar1 = m_pInstance;
  pPVar3 = pPVar1;
  if (m_pInstance == (PvpExchangeDlg *)0x0) {
    pPVar3 = ::operator_new(0x178);
    PvpExchangeDlg::PvpExchangeDlg(pPVar3);
    m_pInstance = pPVar3;
    cVar2 = (**(code **)(*(long *)pPVar3 + 0x310))(pPVar3);
    pPVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (PvpExchangeDlg *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (PvpExchangeDlg *)0x0;
      pPVar3 = pPVar1;
    }
  }
  return pPVar3;
}


/* UISingletonDialog<TimeTravelSelEntranceUI>::ShowDialog() */

TimeTravelSelEntranceUI * UISingletonDialog<TimeTravelSelEntranceUI>::ShowDialog(void)

{
  TimeTravelSelEntranceUI *pTVar1;
  char cVar2;
  TimeTravelSelEntranceUI *pTVar3;
  
  pTVar1 = m_pInstance;
  pTVar3 = pTVar1;
  if (m_pInstance == (TimeTravelSelEntranceUI *)0x0) {
    pTVar3 = ::operator_new(0x1d8);
    TimeTravelSelEntranceUI::TimeTravelSelEntranceUI(pTVar3);
    m_pInstance = pTVar3;
    cVar2 = (**(code **)(*(long *)pTVar3 + 0x310))(pTVar3);
    pTVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (TimeTravelSelEntranceUI *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (TimeTravelSelEntranceUI *)0x0;
      pTVar3 = pTVar1;
    }
  }
  return pTVar3;
}


/* UISingletonDialog<UIWorldLevelPackage>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIWorldLevelPackage>::~UISingletonDialog
          (UISingletonDialog<UIWorldLevelPackage> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06867dc0;
  *(undefined ***)this = &PTR_GetClass_06867a70;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIWorldLevelPackage> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIWorldLevelPackage>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIWorldLevelPackage>::~UISingletonDialog
          (UISingletonDialog<UIWorldLevelPackage> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIWorldLevelPackageDetail>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIWorldLevelPackageDetail>::~UISingletonDialog
          (UISingletonDialog<UIWorldLevelPackageDetail> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06868160;
  *(undefined ***)this = &PTR_GetClass_06867e10;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIWorldLevelPackageDetail> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIWorldLevelPackageDetail>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIWorldLevelPackageDetail>::~UISingletonDialog
          (UISingletonDialog<UIWorldLevelPackageDetail> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIWorldLevelPackage>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIWorldLevelPackage>::UISingletonDialog
          (UISingletonDialog<UIWorldLevelPackage> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06867a70;
  *(undefined **)(this + 0xd8) = &DAT_06867dc0;
  return;
}


/* UISingletonDialog<UIWorldLevelPackage>::ShowDialog() */

UIWorldLevelPackage * UISingletonDialog<UIWorldLevelPackage>::ShowDialog(void)

{
  UIWorldLevelPackage *pUVar1;
  char cVar2;
  UIWorldLevelPackage *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIWorldLevelPackage *)0x0) {
    pUVar3 = ::operator_new(0x138);
    UIWorldLevelPackage::UIWorldLevelPackage(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIWorldLevelPackage *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIWorldLevelPackage *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


UIWorldLevelPackage * UISingletonDialog<UIWorldLevelPackage>::ShowDialog(void)

{
  UIWorldLevelPackage *pUVar1;
  char cVar2;
  UIWorldLevelPackage *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIWorldLevelPackage *)0x0) {
    pUVar3 = ::operator_new(0x138);
    UIWorldLevelPackage::UIWorldLevelPackage(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIWorldLevelPackage *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIWorldLevelPackage *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


UIWorldLevelPackage * UISingletonDialog<UIWorldLevelPackage>::ShowDialog(void)

{
  UIWorldLevelPackage *pUVar1;
  char cVar2;
  UIWorldLevelPackage *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIWorldLevelPackage *)0x0) {
    pUVar3 = ::operator_new(0x138);
    UIWorldLevelPackage::UIWorldLevelPackage(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIWorldLevelPackage *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIWorldLevelPackage *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIWorldLevelPackage>::CloseDialog() */

void UISingletonDialog<UIWorldLevelPackage>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIWorldLevelPackageDetail>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIWorldLevelPackageDetail>::UISingletonDialog
          (UISingletonDialog<UIWorldLevelPackageDetail> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06867e10;
  *(undefined **)(this + 0xd8) = &DAT_06868160;
  return;
}


/* UISingletonDialog<UIWorldLevelPackageDetail>::CloseDialog() */

void UISingletonDialog<UIWorldLevelPackageDetail>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIWorldLevelPackageDetail>::ShowDialog() */

UIWorldLevelPackageDetail * UISingletonDialog<UIWorldLevelPackageDetail>::ShowDialog(void)

{
  UIWorldLevelPackageDetail *pUVar1;
  char cVar2;
  UIWorldLevelPackageDetail *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIWorldLevelPackageDetail *)0x0) {
    pUVar3 = ::operator_new(0x1c8);
    UIWorldLevelPackageDetail::UIWorldLevelPackageDetail(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIWorldLevelPackageDetail *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIWorldLevelPackageDetail *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<FishingModuleEditor>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<FishingModuleEditor>::~UISingletonDialog
          (UISingletonDialog<FishingModuleEditor> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_068e38c0;
  *(undefined ***)this = &PTR_GetClass_068e3570;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<FishingModuleEditor> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<FishingModuleEditor>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<FishingModuleEditor>::~UISingletonDialog
          (UISingletonDialog<FishingModuleEditor> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<FishingModuleEditor>::UISingletonDialog() */

void __thiscall
UISingletonDialog<FishingModuleEditor>::UISingletonDialog
          (UISingletonDialog<FishingModuleEditor> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_068e3570;
  *(undefined **)(this + 0xd8) = &DAT_068e38c0;
  return;
}


/* UISingletonDialog<PlantPieceCompletionDlg>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<PlantPieceCompletionDlg>::~UISingletonDialog
          (UISingletonDialog<PlantPieceCompletionDlg> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06928940;
  *(undefined ***)this = &PTR_GetClass_069285f0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<PlantPieceCompletionDlg> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<PlantPieceCompletionDlg>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<PlantPieceCompletionDlg>::~UISingletonDialog
          (UISingletonDialog<PlantPieceCompletionDlg> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<PlantPieceCompletionDlg>::UISingletonDialog() */

void __thiscall
UISingletonDialog<PlantPieceCompletionDlg>::UISingletonDialog
          (UISingletonDialog<PlantPieceCompletionDlg> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_069285f0;
  *(undefined **)(this + 0xd8) = &DAT_06928940;
  return;
}


/* UISingletonDialog<PlantPieceCompletionDlg>::CloseDialog() */

void UISingletonDialog<PlantPieceCompletionDlg>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<BoardDlg>::~UISingletonDialog() */

void __thiscall UISingletonDialog<BoardDlg>::~UISingletonDialog(UISingletonDialog<BoardDlg> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06934ee0;
  *(undefined ***)this = &PTR_GetClass_06934b90;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<BoardDlg> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<BoardDlg>::~UISingletonDialog() */

void __thiscall UISingletonDialog<BoardDlg>::~UISingletonDialog(UISingletonDialog<BoardDlg> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<BoardDlg>::UISingletonDialog() */

void __thiscall UISingletonDialog<BoardDlg>::UISingletonDialog(UISingletonDialog<BoardDlg> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06934b90;
  *(undefined **)(this + 0xd8) = &DAT_06934ee0;
  return;
}


/* UISingletonDialog<OfflineBoard>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<OfflineBoard>::~UISingletonDialog(UISingletonDialog<OfflineBoard> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06935cd0;
  *(undefined ***)this = &PTR_GetClass_06935980;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<OfflineBoard> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<OfflineBoard>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<OfflineBoard>::~UISingletonDialog(UISingletonDialog<OfflineBoard> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<OfflineBoard>::UISingletonDialog() */

void __thiscall
UISingletonDialog<OfflineBoard>::UISingletonDialog(UISingletonDialog<OfflineBoard> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06935980;
  *(undefined **)(this + 0xd8) = &DAT_06935cd0;
  return;
}


/* UISingletonDialog<OfflineBoard>::CloseDialog() */

void UISingletonDialog<OfflineBoard>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<OfflineBoard>::ShowDialog() */

OfflineBoard * UISingletonDialog<OfflineBoard>::ShowDialog(void)

{
  OfflineBoard *pOVar1;
  char cVar2;
  OfflineBoard *pOVar3;
  
  pOVar1 = m_pInstance;
  pOVar3 = pOVar1;
  if (m_pInstance == (OfflineBoard *)0x0) {
    pOVar3 = ::operator_new(0x1d8);
    OfflineBoard::OfflineBoard(pOVar3);
    m_pInstance = pOVar3;
    cVar2 = (**(code **)(*(long *)pOVar3 + 0x310))(pOVar3);
    pOVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (OfflineBoard *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (OfflineBoard *)0x0;
      pOVar3 = pOVar1;
    }
  }
  return pOVar3;
}


/* UISingletonDialog<ChildrenDayUI>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<ChildrenDayUI>::~UISingletonDialog(UISingletonDialog<ChildrenDayUI> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_0693d120;
  *(undefined ***)this = &PTR_GetClass_0693cdd0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<ChildrenDayUI> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<ChildrenDayUI>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<ChildrenDayUI>::~UISingletonDialog(UISingletonDialog<ChildrenDayUI> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<ChildrenDayUI>::UISingletonDialog() */

void __thiscall
UISingletonDialog<ChildrenDayUI>::UISingletonDialog(UISingletonDialog<ChildrenDayUI> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_0693cdd0;
  *(undefined **)(this + 0xd8) = &DAT_0693d120;
  return;
}


/* UISingletonDialog<ChildrenDayUI>::CloseDialog() */

void UISingletonDialog<ChildrenDayUI>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<ChallengeRewardDlg>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<ChallengeRewardDlg>::~UISingletonDialog
          (UISingletonDialog<ChallengeRewardDlg> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_0693ebe0;
  *(undefined ***)this = &PTR_GetClass_0693e890;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<ChallengeRewardDlg> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<ChallengeRewardDlg>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<ChallengeRewardDlg>::~UISingletonDialog
          (UISingletonDialog<ChallengeRewardDlg> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<DangerRoomEndLevelLose>::ShowDialog() */

DangerRoomEndLevelLose * UISingletonDialog<DangerRoomEndLevelLose>::ShowDialog(void)

{
  DangerRoomEndLevelLose *pDVar1;
  char cVar2;
  DangerRoomEndLevelLose *pDVar3;
  
  pDVar1 = m_pInstance;
  pDVar3 = pDVar1;
  if (m_pInstance == (DangerRoomEndLevelLose *)0x0) {
    pDVar3 = ::operator_new(0x148);
    DangerRoomEndLevelLose::DangerRoomEndLevelLose(pDVar3);
    m_pInstance = pDVar3;
    cVar2 = (**(code **)(*(long *)pDVar3 + 0x310))(pDVar3);
    pDVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (DangerRoomEndLevelLose *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (DangerRoomEndLevelLose *)0x0;
      pDVar3 = pDVar1;
    }
  }
  return pDVar3;
}


/* UISingletonDialog<DangerRoomEndLevelWin>::ShowDialog() */

DangerRoomEndLevelWin * UISingletonDialog<DangerRoomEndLevelWin>::ShowDialog(void)

{
  DangerRoomEndLevelWin *pDVar1;
  char cVar2;
  DangerRoomEndLevelWin *pDVar3;
  
  pDVar1 = m_pInstance;
  pDVar3 = pDVar1;
  if (m_pInstance == (DangerRoomEndLevelWin *)0x0) {
    pDVar3 = ::operator_new(0x1d8);
    DangerRoomEndLevelWin::DangerRoomEndLevelWin(pDVar3);
    m_pInstance = pDVar3;
    cVar2 = (**(code **)(*(long *)pDVar3 + 0x310))(pDVar3);
    pDVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (DangerRoomEndLevelWin *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (DangerRoomEndLevelWin *)0x0;
      pDVar3 = pDVar1;
    }
  }
  return pDVar3;
}


/* UISingletonDialog<ChallengeRewardDlg>::UISingletonDialog() */

void __thiscall
UISingletonDialog<ChallengeRewardDlg>::UISingletonDialog
          (UISingletonDialog<ChallengeRewardDlg> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_0693e890;
  *(undefined **)(this + 0xd8) = &DAT_0693ebe0;
  return;
}


/* UISingletonDialog<ChallengeRewardDlg>::ShowDialog() */

ChallengeRewardDlg * UISingletonDialog<ChallengeRewardDlg>::ShowDialog(void)

{
  ChallengeRewardDlg *pCVar1;
  char cVar2;
  ChallengeRewardDlg *pCVar3;
  
  pCVar1 = m_pInstance;
  pCVar3 = pCVar1;
  if (m_pInstance == (ChallengeRewardDlg *)0x0) {
    pCVar3 = ::operator_new(0x160);
    memset(pCVar3,0,0x160);
    ChallengeRewardDlg::ChallengeRewardDlg(pCVar3);
    m_pInstance = pCVar3;
    cVar2 = (**(code **)(*(long *)pCVar3 + 0x310))(pCVar3);
    pCVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (ChallengeRewardDlg *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (ChallengeRewardDlg *)0x0;
      pCVar3 = pCVar1;
    }
  }
  return pCVar3;
}


/* UISingletonDialog<UIDangerRoomSkipLevel>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIDangerRoomSkipLevel>::~UISingletonDialog
          (UISingletonDialog<UIDangerRoomSkipLevel> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_0693f9e0;
  *(undefined ***)this = &PTR_GetClass_0693f690;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIDangerRoomSkipLevel> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIDangerRoomSkipLevel>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIDangerRoomSkipLevel>::~UISingletonDialog
          (UISingletonDialog<UIDangerRoomSkipLevel> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIDangerRoomTrainingSkipLevel>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIDangerRoomTrainingSkipLevel>::~UISingletonDialog
          (UISingletonDialog<UIDangerRoomTrainingSkipLevel> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_0693fd80;
  *(undefined ***)this = &PTR_GetClass_0693fa30;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIDangerRoomTrainingSkipLevel> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIDangerRoomTrainingSkipLevel>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIDangerRoomTrainingSkipLevel>::~UISingletonDialog
          (UISingletonDialog<UIDangerRoomTrainingSkipLevel> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIDangerRoomSkipLevel>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIDangerRoomSkipLevel>::UISingletonDialog
          (UISingletonDialog<UIDangerRoomSkipLevel> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_0693f690;
  *(undefined **)(this + 0xd8) = &DAT_0693f9e0;
  return;
}


/* UISingletonDialog<UIDangerRoomSkipLevel>::CloseDialog() */

void UISingletonDialog<UIDangerRoomSkipLevel>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIDangerRoomTrainingSkipLevel>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIDangerRoomTrainingSkipLevel>::UISingletonDialog
          (UISingletonDialog<UIDangerRoomTrainingSkipLevel> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_0693fa30;
  *(undefined **)(this + 0xd8) = &DAT_0693fd80;
  return;
}


/* UISingletonDialog<UIDangerRoomTrainingSkipLevel>::CloseDialog() */

void UISingletonDialog<UIDangerRoomTrainingSkipLevel>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<DangerRoomEndLevelWin>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<DangerRoomEndLevelWin>::~UISingletonDialog
          (UISingletonDialog<DangerRoomEndLevelWin> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06940c60;
  *(undefined ***)this = &PTR_GetClass_06940910;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<DangerRoomEndLevelWin> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<DangerRoomEndLevelWin>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<DangerRoomEndLevelWin>::~UISingletonDialog
          (UISingletonDialog<DangerRoomEndLevelWin> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<DangerRoomEndLevelWin>::UISingletonDialog() */

void __thiscall
UISingletonDialog<DangerRoomEndLevelWin>::UISingletonDialog
          (UISingletonDialog<DangerRoomEndLevelWin> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06940910;
  *(undefined **)(this + 0xd8) = &DAT_06940c60;
  return;
}


/* UISingletonDialog<DangerRoomEndLevelWin>::CloseDialog() */

void UISingletonDialog<DangerRoomEndLevelWin>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<DangerRoomEndLevelLose>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<DangerRoomEndLevelLose>::~UISingletonDialog
          (UISingletonDialog<DangerRoomEndLevelLose> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069419e0;
  *(undefined ***)this = &PTR_GetClass_06941690;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<DangerRoomEndLevelLose> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<DangerRoomEndLevelLose>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<DangerRoomEndLevelLose>::~UISingletonDialog
          (UISingletonDialog<DangerRoomEndLevelLose> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<DangerRoomEndLevelLose>::UISingletonDialog() */

void __thiscall
UISingletonDialog<DangerRoomEndLevelLose>::UISingletonDialog
          (UISingletonDialog<DangerRoomEndLevelLose> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06941690;
  *(undefined **)(this + 0xd8) = &DAT_069419e0;
  return;
}


/* UISingletonDialog<DangerRoomEndLevelLose>::CloseDialog() */

void UISingletonDialog<DangerRoomEndLevelLose>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<TrainingInfoDlg>::ShowDialog() */

TrainingInfoDlg * UISingletonDialog<TrainingInfoDlg>::ShowDialog(void)

{
  TrainingInfoDlg *pTVar1;
  char cVar2;
  TrainingInfoDlg *pTVar3;
  
  pTVar1 = m_pInstance;
  pTVar3 = pTVar1;
  if (m_pInstance == (TrainingInfoDlg *)0x0) {
    pTVar3 = ::operator_new(0x148);
    TrainingInfoDlg::TrainingInfoDlg(pTVar3);
    m_pInstance = pTVar3;
    cVar2 = (**(code **)(*(long *)pTVar3 + 0x310))(pTVar3);
    pTVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (TrainingInfoDlg *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (TrainingInfoDlg *)0x0;
      pTVar3 = pTVar1;
    }
  }
  return pTVar3;
}


/* UISingletonDialog<TrainingInfoDlg>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<TrainingInfoDlg>::~UISingletonDialog(UISingletonDialog<TrainingInfoDlg> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_0694acf0;
  *(undefined ***)this = &PTR_GetClass_0694a9a0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<TrainingInfoDlg> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<TrainingInfoDlg>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<TrainingInfoDlg>::~UISingletonDialog(UISingletonDialog<TrainingInfoDlg> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<TrainingInfoDlg>::UISingletonDialog() */

void __thiscall
UISingletonDialog<TrainingInfoDlg>::UISingletonDialog(UISingletonDialog<TrainingInfoDlg> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_0694a9a0;
  *(undefined **)(this + 0xd8) = &DAT_0694acf0;
  return;
}


/* UISingletonDialog<TrainingInfoDlg>::CloseDialog() */

void UISingletonDialog<TrainingInfoDlg>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<TrainingCampZombieDlg>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<TrainingCampZombieDlg>::~UISingletonDialog
          (UISingletonDialog<TrainingCampZombieDlg> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_0694b450;
  *(undefined ***)this = &PTR_GetClass_0694b100;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<TrainingCampZombieDlg> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<TrainingCampZombieDlg>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<TrainingCampZombieDlg>::~UISingletonDialog
          (UISingletonDialog<TrainingCampZombieDlg> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<TrainingCampZombieDlg>::UISingletonDialog() */

void __thiscall
UISingletonDialog<TrainingCampZombieDlg>::UISingletonDialog
          (UISingletonDialog<TrainingCampZombieDlg> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_0694b100;
  *(undefined **)(this + 0xd8) = &DAT_0694b450;
  return;
}


/* UISingletonDialog<TrainingCampZombieDlg>::CloseDialog() */

void UISingletonDialog<TrainingCampZombieDlg>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<TrainingConfirmDlg>::ShowDialog() */

TrainingConfirmDlg * UISingletonDialog<TrainingConfirmDlg>::ShowDialog(void)

{
  TrainingConfirmDlg *pTVar1;
  char cVar2;
  TrainingConfirmDlg *pTVar3;
  
  pTVar1 = m_pInstance;
  pTVar3 = pTVar1;
  if (m_pInstance == (TrainingConfirmDlg *)0x0) {
    pTVar3 = ::operator_new(0x168);
    TrainingConfirmDlg::TrainingConfirmDlg(pTVar3);
    m_pInstance = pTVar3;
    cVar2 = (**(code **)(*(long *)pTVar3 + 0x310))(pTVar3);
    pTVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (TrainingConfirmDlg *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (TrainingConfirmDlg *)0x0;
      pTVar3 = pTVar1;
    }
  }
  return pTVar3;
}


/* UISingletonDialog<TrainingConfirmDlg>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<TrainingConfirmDlg>::~UISingletonDialog
          (UISingletonDialog<TrainingConfirmDlg> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_0694bef0;
  *(undefined ***)this = &PTR_GetClass_0694bba0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<TrainingConfirmDlg> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<TrainingConfirmDlg>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<TrainingConfirmDlg>::~UISingletonDialog
          (UISingletonDialog<TrainingConfirmDlg> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<TrainingConfirmDlg>::UISingletonDialog() */

void __thiscall
UISingletonDialog<TrainingConfirmDlg>::UISingletonDialog
          (UISingletonDialog<TrainingConfirmDlg> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_0694bba0;
  *(undefined **)(this + 0xd8) = &DAT_0694bef0;
  return;
}


/* UISingletonDialog<TrainingConfirmDlg>::CloseDialog() */

void UISingletonDialog<TrainingConfirmDlg>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<PlaybackDlg>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<PlaybackDlg>::~UISingletonDialog(UISingletonDialog<PlaybackDlg> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_0694c6e0;
  *(undefined ***)this = &PTR_GetClass_0694c390;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<PlaybackDlg> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<PlaybackDlg>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<PlaybackDlg>::~UISingletonDialog(UISingletonDialog<PlaybackDlg> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<PlaybackDlg>::UISingletonDialog() */

void __thiscall
UISingletonDialog<PlaybackDlg>::UISingletonDialog(UISingletonDialog<PlaybackDlg> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_0694c390;
  *(undefined **)(this + 0xd8) = &DAT_0694c6e0;
  return;
}


/* UISingletonDialog<PlaybackDlg>::CloseDialog() */

void UISingletonDialog<PlaybackDlg>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<PvpArmyDlg>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<PvpArmyDlg>::~UISingletonDialog(UISingletonDialog<PvpArmyDlg> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_0694d3e0;
  *(undefined ***)this = &PTR_GetClass_0694d090;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<PvpArmyDlg> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<PvpArmyDlg>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<PvpArmyDlg>::~UISingletonDialog(UISingletonDialog<PvpArmyDlg> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<PvpRankDlg>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<PvpRankDlg>::~UISingletonDialog(UISingletonDialog<PvpRankDlg> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_0694d780;
  *(undefined ***)this = &PTR_GetClass_0694d430;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<PvpRankDlg> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<PvpRankDlg>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<PvpRankDlg>::~UISingletonDialog(UISingletonDialog<PvpRankDlg> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<PvpArmyDlg>::UISingletonDialog() */

void __thiscall
UISingletonDialog<PvpArmyDlg>::UISingletonDialog(UISingletonDialog<PvpArmyDlg> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_0694d090;
  *(undefined **)(this + 0xd8) = &DAT_0694d3e0;
  return;
}


/* UISingletonDialog<PvpArmyDlg>::CloseDialog() */

void UISingletonDialog<PvpArmyDlg>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<PvpRankDlg>::UISingletonDialog() */

void __thiscall
UISingletonDialog<PvpRankDlg>::UISingletonDialog(UISingletonDialog<PvpRankDlg> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_0694d430;
  *(undefined **)(this + 0xd8) = &DAT_0694d780;
  return;
}


/* UISingletonDialog<PvpRankDlg>::CloseDialog() */

void UISingletonDialog<PvpRankDlg>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<PvpArmyDlg>::ShowDialog() */

PvpArmyDlg * UISingletonDialog<PvpArmyDlg>::ShowDialog(void)

{
  PvpArmyDlg *pPVar1;
  char cVar2;
  PvpArmyDlg *pPVar3;
  
  pPVar1 = m_pInstance;
  pPVar3 = pPVar1;
  if (m_pInstance == (PvpArmyDlg *)0x0) {
    pPVar3 = ::operator_new(0x168);
    PvpArmyDlg::PvpArmyDlg(pPVar3);
    m_pInstance = pPVar3;
    cVar2 = (**(code **)(*(long *)pPVar3 + 0x310))(pPVar3);
    pPVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (PvpArmyDlg *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (PvpArmyDlg *)0x0;
      pPVar3 = pPVar1;
    }
  }
  return pPVar3;
}


/* UISingletonDialog<PvpExchangeConfirmDlg>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<PvpExchangeConfirmDlg>::~UISingletonDialog
          (UISingletonDialog<PvpExchangeConfirmDlg> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_0694ecc0;
  *(undefined ***)this = &PTR_GetClass_0694e970;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<PvpExchangeConfirmDlg> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<PvpExchangeConfirmDlg>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<PvpExchangeConfirmDlg>::~UISingletonDialog
          (UISingletonDialog<PvpExchangeConfirmDlg> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<PvpExchangeDlg>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<PvpExchangeDlg>::~UISingletonDialog(UISingletonDialog<PvpExchangeDlg> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_0694f060;
  *(undefined ***)this = &PTR_GetClass_0694ed10;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<PvpExchangeDlg> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<PvpExchangeDlg>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<PvpExchangeDlg>::~UISingletonDialog(UISingletonDialog<PvpExchangeDlg> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<PvpExchangeConfirmDlg>::UISingletonDialog() */

void __thiscall
UISingletonDialog<PvpExchangeConfirmDlg>::UISingletonDialog
          (UISingletonDialog<PvpExchangeConfirmDlg> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_0694e970;
  *(undefined **)(this + 0xd8) = &DAT_0694ecc0;
  return;
}


/* UISingletonDialog<PvpExchangeConfirmDlg>::ShowDialog() */

PvpExchangeConfirmDlg * UISingletonDialog<PvpExchangeConfirmDlg>::ShowDialog(void)

{
  PvpExchangeConfirmDlg *pPVar1;
  char cVar2;
  PvpExchangeConfirmDlg *pPVar3;
  
  pPVar1 = m_pInstance;
  pPVar3 = pPVar1;
  if (m_pInstance == (PvpExchangeConfirmDlg *)0x0) {
    pPVar3 = ::operator_new(0x150);
    PvpExchangeConfirmDlg::PvpExchangeConfirmDlg(pPVar3);
    m_pInstance = pPVar3;
    cVar2 = (**(code **)(*(long *)pPVar3 + 0x310))(pPVar3);
    pPVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (PvpExchangeConfirmDlg *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (PvpExchangeConfirmDlg *)0x0;
      pPVar3 = pPVar1;
    }
  }
  return pPVar3;
}


/* UISingletonDialog<PvpExchangeConfirmDlg>::CloseDialog() */

void UISingletonDialog<PvpExchangeConfirmDlg>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<PvpExchangeDlg>::UISingletonDialog() */

void __thiscall
UISingletonDialog<PvpExchangeDlg>::UISingletonDialog(UISingletonDialog<PvpExchangeDlg> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_0694ed10;
  *(undefined **)(this + 0xd8) = &DAT_0694f060;
  return;
}


/* UISingletonDialog<PvpExchangeDlg>::CloseDialog() */

void UISingletonDialog<PvpExchangeDlg>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<PVPLabDlg>::~UISingletonDialog() */

void __thiscall UISingletonDialog<PVPLabDlg>::~UISingletonDialog(UISingletonDialog<PVPLabDlg> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069501d0;
  *(undefined ***)this = &PTR_GetClass_0694fe80;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<PVPLabDlg> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<PVPLabDlg>::~UISingletonDialog() */

void __thiscall UISingletonDialog<PVPLabDlg>::~UISingletonDialog(UISingletonDialog<PVPLabDlg> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<PVPLabDlg>::UISingletonDialog() */

void __thiscall UISingletonDialog<PVPLabDlg>::UISingletonDialog(UISingletonDialog<PVPLabDlg> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_0694fe80;
  *(undefined **)(this + 0xd8) = &DAT_069501d0;
  return;
}


/* UISingletonDialog<PVPEntryDlg>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<PVPEntryDlg>::~UISingletonDialog(UISingletonDialog<PVPEntryDlg> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06951080;
  *(undefined ***)this = &PTR_GetClass_06950d30;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<PVPEntryDlg> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<PVPEntryDlg>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<PVPEntryDlg>::~UISingletonDialog(UISingletonDialog<PVPEntryDlg> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<PVPEntryDlg>::UISingletonDialog() */

void __thiscall
UISingletonDialog<PVPEntryDlg>::UISingletonDialog(UISingletonDialog<PVPEntryDlg> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06950d30;
  *(undefined **)(this + 0xd8) = &DAT_06951080;
  return;
}


/* UISingletonDialog<TrainingCampZombieDlg>::GetSingletonPtr() */

undefined8 UISingletonDialog<TrainingCampZombieDlg>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<PlaybackDlg>::ShowDialog() */

PlaybackDlg * UISingletonDialog<PlaybackDlg>::ShowDialog(void)

{
  PlaybackDlg *pPVar1;
  char cVar2;
  PlaybackDlg *pPVar3;
  
  pPVar1 = m_pInstance;
  pPVar3 = pPVar1;
  if (m_pInstance == (PlaybackDlg *)0x0) {
    pPVar3 = ::operator_new(0x140);
    PlaybackDlg::PlaybackDlg(pPVar3);
    m_pInstance = pPVar3;
    cVar2 = (**(code **)(*(long *)pPVar3 + 0x310))(pPVar3);
    pPVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (PlaybackDlg *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (PlaybackDlg *)0x0;
      pPVar3 = pPVar1;
    }
  }
  return pPVar3;
}


/* UISingletonDialog<TrainingCampZombieDlg>::ShowDialog() */

TrainingCampZombieDlg * UISingletonDialog<TrainingCampZombieDlg>::ShowDialog(void)

{
  TrainingCampZombieDlg *pTVar1;
  char cVar2;
  TrainingCampZombieDlg *pTVar3;
  
  pTVar1 = m_pInstance;
  pTVar3 = pTVar1;
  if (m_pInstance == (TrainingCampZombieDlg *)0x0) {
    pTVar3 = ::operator_new(0x1e0);
    TrainingCampZombieDlg::TrainingCampZombieDlg(pTVar3);
    m_pInstance = pTVar3;
    cVar2 = (**(code **)(*(long *)pTVar3 + 0x310))(pTVar3);
    pTVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (TrainingCampZombieDlg *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (TrainingCampZombieDlg *)0x0;
      pTVar3 = pTVar1;
    }
  }
  return pTVar3;
}


/* UISingletonDialog<PvpRankDlg>::ShowDialog() */

PvpRankDlg * UISingletonDialog<PvpRankDlg>::ShowDialog(void)

{
  PvpRankDlg *pPVar1;
  char cVar2;
  PvpRankDlg *pPVar3;
  
  pPVar1 = m_pInstance;
  pPVar3 = pPVar1;
  if (m_pInstance == (PvpRankDlg *)0x0) {
    pPVar3 = ::operator_new(0x218);
    PvpRankDlg::PvpRankDlg(pPVar3);
    m_pInstance = pPVar3;
    cVar2 = (**(code **)(*(long *)pPVar3 + 0x310))(pPVar3);
    pPVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (PvpRankDlg *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (PvpRankDlg *)0x0;
      pPVar3 = pPVar1;
    }
  }
  return pPVar3;
}


/* UISingletonDialog<PVPCompensationNoticeDlg>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<PVPCompensationNoticeDlg>::~UISingletonDialog
          (UISingletonDialog<PVPCompensationNoticeDlg> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069517c0;
  *(undefined ***)this = &PTR_GetClass_06951470;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<PVPCompensationNoticeDlg> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<PVPCompensationNoticeDlg>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<PVPCompensationNoticeDlg>::~UISingletonDialog
          (UISingletonDialog<PVPCompensationNoticeDlg> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<PVPCompensationNoticeDlg>::UISingletonDialog() */

void __thiscall
UISingletonDialog<PVPCompensationNoticeDlg>::UISingletonDialog
          (UISingletonDialog<PVPCompensationNoticeDlg> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06951470;
  *(undefined **)(this + 0xd8) = &DAT_069517c0;
  return;
}


/* UISingletonDialog<PVPCompensationNoticeDlg>::ShowDialog() */

PVPCompensationNoticeDlg * UISingletonDialog<PVPCompensationNoticeDlg>::ShowDialog(void)

{
  PVPCompensationNoticeDlg *pPVar1;
  char cVar2;
  PVPCompensationNoticeDlg *pPVar3;
  
  pPVar1 = m_pInstance;
  pPVar3 = pPVar1;
  if (m_pInstance == (PVPCompensationNoticeDlg *)0x0) {
    pPVar3 = ::operator_new(0x138);
    PVPCompensationNoticeDlg::PVPCompensationNoticeDlg(pPVar3);
    m_pInstance = pPVar3;
    cVar2 = (**(code **)(*(long *)pPVar3 + 0x310))(pPVar3);
    pPVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (PVPCompensationNoticeDlg *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (PVPCompensationNoticeDlg *)0x0;
      pPVar3 = pPVar1;
    }
  }
  return pPVar3;
}


/* UISingletonDialog<PVPCompensationNoticeDlg>::CloseDialog() */

void UISingletonDialog<PVPCompensationNoticeDlg>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<LevelEditor>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<LevelEditor>::~UISingletonDialog(UISingletonDialog<LevelEditor> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06956a60;
  *(undefined ***)this = &PTR_GetClass_06956710;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<LevelEditor> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<LevelEditor>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<LevelEditor>::~UISingletonDialog(UISingletonDialog<LevelEditor> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<LevelEditorEvilDave>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<LevelEditorEvilDave>::~UISingletonDialog
          (UISingletonDialog<LevelEditorEvilDave> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06956e00;
  *(undefined ***)this = &PTR_GetClass_06956ab0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<LevelEditorEvilDave> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<LevelEditorEvilDave>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<LevelEditorEvilDave>::~UISingletonDialog
          (UISingletonDialog<LevelEditorEvilDave> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<LevelEditorTowerDefend>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<LevelEditorTowerDefend>::~UISingletonDialog
          (UISingletonDialog<LevelEditorTowerDefend> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069571a0;
  *(undefined ***)this = &PTR_GetClass_06956e50;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<LevelEditorTowerDefend> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<LevelEditorTowerDefend>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<LevelEditorTowerDefend>::~UISingletonDialog
          (UISingletonDialog<LevelEditorTowerDefend> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<LevelEditorSingleHanded>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<LevelEditorSingleHanded>::~UISingletonDialog
          (UISingletonDialog<LevelEditorSingleHanded> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06957540;
  *(undefined ***)this = &PTR_GetClass_069571f0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<LevelEditorSingleHanded> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<LevelEditorSingleHanded>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<LevelEditorSingleHanded>::~UISingletonDialog
          (UISingletonDialog<LevelEditorSingleHanded> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<LevelEditor>::UISingletonDialog() */

void __thiscall
UISingletonDialog<LevelEditor>::UISingletonDialog(UISingletonDialog<LevelEditor> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06956710;
  *(undefined **)(this + 0xd8) = &DAT_06956a60;
  return;
}


/* UISingletonDialog<LevelEditorVaseBreaker>::ShowDialog() */

LevelEditorVaseBreaker * UISingletonDialog<LevelEditorVaseBreaker>::ShowDialog(void)

{
  LevelEditorVaseBreaker *pLVar1;
  char cVar2;
  LevelEditorVaseBreaker *pLVar3;
  
  pLVar1 = m_pInstance;
  pLVar3 = pLVar1;
  if (m_pInstance == (LevelEditorVaseBreaker *)0x0) {
    pLVar3 = ::operator_new(0x180);
    LevelEditorVaseBreaker::LevelEditorVaseBreaker(pLVar3);
    m_pInstance = pLVar3;
    cVar2 = (**(code **)(*(long *)pLVar3 + 0x310))(pLVar3);
    pLVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (LevelEditorVaseBreaker *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (LevelEditorVaseBreaker *)0x0;
      pLVar3 = pLVar1;
    }
  }
  return pLVar3;
}


/* UISingletonDialog<LevelEditor>::CloseDialog() */

void UISingletonDialog<LevelEditor>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<LevelEditorEvilDave>::UISingletonDialog() */

void __thiscall
UISingletonDialog<LevelEditorEvilDave>::UISingletonDialog
          (UISingletonDialog<LevelEditorEvilDave> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06956ab0;
  *(undefined **)(this + 0xd8) = &DAT_06956e00;
  return;
}


/* UISingletonDialog<LevelEditorEvilDave>::ShowDialog() */

LevelEditorEvilDave * UISingletonDialog<LevelEditorEvilDave>::ShowDialog(void)

{
  LevelEditorEvilDave *pLVar1;
  char cVar2;
  LevelEditorEvilDave *pLVar3;
  
  pLVar1 = m_pInstance;
  pLVar3 = pLVar1;
  if (m_pInstance == (LevelEditorEvilDave *)0x0) {
    pLVar3 = ::operator_new(0x148);
    LevelEditorEvilDave::LevelEditorEvilDave(pLVar3);
    m_pInstance = pLVar3;
    cVar2 = (**(code **)(*(long *)pLVar3 + 0x310))(pLVar3);
    pLVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (LevelEditorEvilDave *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (LevelEditorEvilDave *)0x0;
      pLVar3 = pLVar1;
    }
  }
  return pLVar3;
}


/* UISingletonDialog<LevelEditorEvilDave>::CloseDialog() */

void UISingletonDialog<LevelEditorEvilDave>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<LevelEditorTowerDefend>::UISingletonDialog() */

void __thiscall
UISingletonDialog<LevelEditorTowerDefend>::UISingletonDialog
          (UISingletonDialog<LevelEditorTowerDefend> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06956e50;
  *(undefined **)(this + 0xd8) = &DAT_069571a0;
  return;
}


/* UISingletonDialog<LevelEditorTowerDefend>::ShowDialog() */

LevelEditorTowerDefend * UISingletonDialog<LevelEditorTowerDefend>::ShowDialog(void)

{
  LevelEditorTowerDefend *pLVar1;
  char cVar2;
  LevelEditorTowerDefend *pLVar3;
  
  pLVar1 = m_pInstance;
  pLVar3 = pLVar1;
  if (m_pInstance == (LevelEditorTowerDefend *)0x0) {
    pLVar3 = ::operator_new(0x158);
    LevelEditorTowerDefend::LevelEditorTowerDefend(pLVar3);
    m_pInstance = pLVar3;
    cVar2 = (**(code **)(*(long *)pLVar3 + 0x310))(pLVar3);
    pLVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (LevelEditorTowerDefend *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (LevelEditorTowerDefend *)0x0;
      pLVar3 = pLVar1;
    }
  }
  return pLVar3;
}


/* UISingletonDialog<LevelEditorTowerDefend>::CloseDialog() */

void UISingletonDialog<LevelEditorTowerDefend>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<LevelEditorSingleHanded>::UISingletonDialog() */

void __thiscall
UISingletonDialog<LevelEditorSingleHanded>::UISingletonDialog
          (UISingletonDialog<LevelEditorSingleHanded> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_069571f0;
  *(undefined **)(this + 0xd8) = &DAT_06957540;
  return;
}


/* UISingletonDialog<LevelEditorSingleHanded>::ShowDialog() */

LevelEditorSingleHanded * UISingletonDialog<LevelEditorSingleHanded>::ShowDialog(void)

{
  LevelEditorSingleHanded *pLVar1;
  char cVar2;
  LevelEditorSingleHanded *pLVar3;
  
  pLVar1 = m_pInstance;
  pLVar3 = pLVar1;
  if (m_pInstance == (LevelEditorSingleHanded *)0x0) {
    pLVar3 = ::operator_new(0x158);
    LevelEditorSingleHanded::LevelEditorSingleHanded(pLVar3);
    m_pInstance = pLVar3;
    cVar2 = (**(code **)(*(long *)pLVar3 + 0x310))(pLVar3);
    pLVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (LevelEditorSingleHanded *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (LevelEditorSingleHanded *)0x0;
      pLVar3 = pLVar1;
    }
  }
  return pLVar3;
}


/* UISingletonDialog<LevelEditorSingleHanded>::CloseDialog() */

void UISingletonDialog<LevelEditorSingleHanded>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<LevelEditor>::ShowDialog() */

LevelEditor * UISingletonDialog<LevelEditor>::ShowDialog(void)

{
  LevelEditor *pLVar1;
  char cVar2;
  LevelEditor *pLVar3;
  
  pLVar1 = m_pInstance;
  pLVar3 = pLVar1;
  if (m_pInstance == (LevelEditor *)0x0) {
    pLVar3 = ::operator_new(0x188);
    LevelEditor::LevelEditor(pLVar3);
    m_pInstance = pLVar3;
    cVar2 = (**(code **)(*(long *)pLVar3 + 0x310))(pLVar3);
    pLVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (LevelEditor *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (LevelEditor *)0x0;
      pLVar3 = pLVar1;
    }
  }
  return pLVar3;
}


/* UISingletonDialog<UILevelEditorEncourageSetting>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UILevelEditorEncourageSetting>::UISingletonDialog
          (UISingletonDialog<UILevelEditorEncourageSetting> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06795380;
  *(undefined **)(this + 0xd8) = &DAT_067956d0;
  return;
}


/* UISingletonDialog<UILevelEditorEncourageSetting>::ShowDialog() */

UILevelEditorEncourageSetting * UISingletonDialog<UILevelEditorEncourageSetting>::ShowDialog(void)

{
  UILevelEditorEncourageSetting *pUVar1;
  char cVar2;
  UILevelEditorEncourageSetting *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UILevelEditorEncourageSetting *)0x0) {
    pUVar3 = ::operator_new(0x148);
    memset(pUVar3,0,0x148);
    UILevelEditorEncourageSetting::UILevelEditorEncourageSetting(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UILevelEditorEncourageSetting *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UILevelEditorEncourageSetting *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<LevelEditorStatueMaze>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<LevelEditorStatueMaze>::~UISingletonDialog
          (UISingletonDialog<LevelEditorStatueMaze> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069587e0;
  *(undefined ***)this = &PTR_GetClass_06958490;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<LevelEditorStatueMaze> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<LevelEditorStatueMaze>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<LevelEditorStatueMaze>::~UISingletonDialog
          (UISingletonDialog<LevelEditorStatueMaze> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<LevelEditorStatueMaze>::UISingletonDialog() */

void __thiscall
UISingletonDialog<LevelEditorStatueMaze>::UISingletonDialog
          (UISingletonDialog<LevelEditorStatueMaze> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06958490;
  *(undefined **)(this + 0xd8) = &DAT_069587e0;
  return;
}


/* UISingletonDialog<LevelEditorStatueMaze>::CloseDialog() */

void UISingletonDialog<LevelEditorStatueMaze>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<LevelEditorVaseBreaker>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<LevelEditorVaseBreaker>::~UISingletonDialog
          (UISingletonDialog<LevelEditorVaseBreaker> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_0696b290;
  *(undefined ***)this = &PTR_GetClass_0696af40;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<LevelEditorVaseBreaker> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<LevelEditorVaseBreaker>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<LevelEditorVaseBreaker>::~UISingletonDialog
          (UISingletonDialog<LevelEditorVaseBreaker> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<LevelEditorVaseBreakerSettingNumber>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<LevelEditorVaseBreakerSettingNumber>::~UISingletonDialog
          (UISingletonDialog<LevelEditorVaseBreakerSettingNumber> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_0696b630;
  *(undefined ***)this = &PTR_GetClass_0696b2e0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<LevelEditorVaseBreakerSettingNumber> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<LevelEditorVaseBreakerSettingNumber>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<LevelEditorVaseBreakerSettingNumber>::~UISingletonDialog
          (UISingletonDialog<LevelEditorVaseBreakerSettingNumber> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<LevelEditorVaseBreaker>::UISingletonDialog() */

void __thiscall
UISingletonDialog<LevelEditorVaseBreaker>::UISingletonDialog
          (UISingletonDialog<LevelEditorVaseBreaker> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_0696af40;
  *(undefined **)(this + 0xd8) = &DAT_0696b290;
  return;
}


/* UISingletonDialog<LevelEditorVaseBreaker>::CloseDialog() */

void UISingletonDialog<LevelEditorVaseBreaker>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<LevelEditorVaseBreakerSettingNumber>::UISingletonDialog() */

void __thiscall
UISingletonDialog<LevelEditorVaseBreakerSettingNumber>::UISingletonDialog
          (UISingletonDialog<LevelEditorVaseBreakerSettingNumber> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_0696b2e0;
  *(undefined **)(this + 0xd8) = &DAT_0696b630;
  return;
}


/* UISingletonDialog<LevelEditorVaseBreakerSettingNumber>::ShowDialog() */

LevelEditorVaseBreakerSettingNumber *
UISingletonDialog<LevelEditorVaseBreakerSettingNumber>::ShowDialog(void)

{
  LevelEditorVaseBreakerSettingNumber *pLVar1;
  char cVar2;
  LevelEditorVaseBreakerSettingNumber *pLVar3;
  
  pLVar1 = m_pInstance;
  pLVar3 = pLVar1;
  if (m_pInstance == (LevelEditorVaseBreakerSettingNumber *)0x0) {
    pLVar3 = ::operator_new(0x148);
    LevelEditorVaseBreakerSettingNumber::LevelEditorVaseBreakerSettingNumber(pLVar3);
    m_pInstance = pLVar3;
    cVar2 = (**(code **)(*(long *)pLVar3 + 0x310))(pLVar3);
    pLVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (LevelEditorVaseBreakerSettingNumber *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (LevelEditorVaseBreakerSettingNumber *)0x0;
      pLVar3 = pLVar1;
    }
  }
  return pLVar3;
}


/* UISingletonDialog<LevelEditorVaseBreakerSettingNumber>::CloseDialog() */

void UISingletonDialog<LevelEditorVaseBreakerSettingNumber>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIEditor>::~UISingletonDialog() */

void __thiscall UISingletonDialog<UIEditor>::~UISingletonDialog(UISingletonDialog<UIEditor> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_0696e6e0;
  *(undefined ***)this = &PTR_GetClass_0696e390;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIEditor> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIEditor>::~UISingletonDialog() */

void __thiscall UISingletonDialog<UIEditor>::~UISingletonDialog(UISingletonDialog<UIEditor> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIEditor>::UISingletonDialog() */

void __thiscall UISingletonDialog<UIEditor>::UISingletonDialog(UISingletonDialog<UIEditor> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_0696e390;
  *(undefined **)(this + 0xd8) = &DAT_0696e6e0;
  return;
}


/* UISingletonDialog<UIEditor>::CloseDialog() */

void UISingletonDialog<UIEditor>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UITest>::~UISingletonDialog() */

void __thiscall UISingletonDialog<UITest>::~UISingletonDialog(UISingletonDialog<UITest> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_0696f630;
  *(undefined ***)this = &PTR_GetClass_0696f2e0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UITest> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UITest>::~UISingletonDialog() */

void __thiscall UISingletonDialog<UITest>::~UISingletonDialog(UISingletonDialog<UITest> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UITest>::UISingletonDialog() */

void __thiscall UISingletonDialog<UITest>::UISingletonDialog(UISingletonDialog<UITest> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_0696f2e0;
  *(undefined **)(this + 0xd8) = &DAT_0696f630;
  return;
}


/* UISingletonDialog<UIMessageBox>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIMessageBox>::~UISingletonDialog(UISingletonDialog<UIMessageBox> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069720b0;
  *(undefined ***)this = &PTR_GetClass_06971d60;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIMessageBox> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIMessageBox>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIMessageBox>::~UISingletonDialog(UISingletonDialog<UIMessageBox> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIMessageBox>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIMessageBox>::UISingletonDialog(UISingletonDialog<UIMessageBox> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06971d60;
  *(undefined **)(this + 0xd8) = &DAT_069720b0;
  return;
}


/* UISingletonDialog<ActiveCenter>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<ActiveCenter>::~UISingletonDialog(UISingletonDialog<ActiveCenter> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06972be0;
  *(undefined ***)this = &PTR_GetClass_06972890;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<ActiveCenter> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<ActiveCenter>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<ActiveCenter>::~UISingletonDialog(UISingletonDialog<ActiveCenter> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<ActiveCenter>::UISingletonDialog() */

void __thiscall
UISingletonDialog<ActiveCenter>::UISingletonDialog(UISingletonDialog<ActiveCenter> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06972890;
  *(undefined **)(this + 0xd8) = &DAT_06972be0;
  return;
}


/* UISingletonDialog<ActiveSummery>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<ActiveSummery>::~UISingletonDialog(UISingletonDialog<ActiveSummery> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06973830;
  *(undefined ***)this = &PTR_GetClass_069734e0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<ActiveSummery> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<ActiveSummery>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<ActiveSummery>::~UISingletonDialog(UISingletonDialog<ActiveSummery> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<ActiveSummery>::UISingletonDialog() */

void __thiscall
UISingletonDialog<ActiveSummery>::UISingletonDialog(UISingletonDialog<ActiveSummery> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_069734e0;
  *(undefined **)(this + 0xd8) = &DAT_06973830;
  return;
}


/* UISingletonDialog<ActiveSummery>::CloseDialog() */

void UISingletonDialog<ActiveSummery>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIMiniGameRankAward>::ShowDialog() */

UIMiniGameRankAward * UISingletonDialog<UIMiniGameRankAward>::ShowDialog(void)

{
  UIMiniGameRankAward *pUVar1;
  char cVar2;
  UIMiniGameRankAward *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIMiniGameRankAward *)0x0) {
    pUVar3 = ::operator_new(0x160);
    UIMiniGameRankAward::UIMiniGameRankAward(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIMiniGameRankAward *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIMiniGameRankAward *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<ChallengeRewardDlg>::CloseDialog() */

void UISingletonDialog<ChallengeRewardDlg>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<ActivityLevelsChoose>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<ActivityLevelsChoose>::~UISingletonDialog
          (UISingletonDialog<ActivityLevelsChoose> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06975ea0;
  *(undefined ***)this = &PTR_GetClass_06975b50;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<ActivityLevelsChoose> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<ActivityLevelsChoose>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<ActivityLevelsChoose>::~UISingletonDialog
          (UISingletonDialog<ActivityLevelsChoose> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<ActivityLevelsDifficultyChoose>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<ActivityLevelsDifficultyChoose>::~UISingletonDialog
          (UISingletonDialog<ActivityLevelsDifficultyChoose> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06976240;
  *(undefined ***)this = &PTR_GetClass_06975ef0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<ActivityLevelsDifficultyChoose> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<ActivityLevelsDifficultyChoose>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<ActivityLevelsDifficultyChoose>::~UISingletonDialog
          (UISingletonDialog<ActivityLevelsDifficultyChoose> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<ActivityLevelsChoose>::UISingletonDialog() */

void __thiscall
UISingletonDialog<ActivityLevelsChoose>::UISingletonDialog
          (UISingletonDialog<ActivityLevelsChoose> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06975b50;
  *(undefined **)(this + 0xd8) = &DAT_06975ea0;
  return;
}


/* UISingletonDialog<ActivityLevelsDifficultyChoose>::UISingletonDialog() */

void __thiscall
UISingletonDialog<ActivityLevelsDifficultyChoose>::UISingletonDialog
          (UISingletonDialog<ActivityLevelsDifficultyChoose> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06975ef0;
  *(undefined **)(this + 0xd8) = &DAT_06976240;
  return;
}


/* UISingletonDialog<ActivityLevelsDifficultyChoose>::CloseDialog() */

void UISingletonDialog<ActivityLevelsDifficultyChoose>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIBossChallengeReward>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIBossChallengeReward>::~UISingletonDialog
          (UISingletonDialog<UIBossChallengeReward> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06977940;
  *(undefined ***)this = &PTR_GetClass_069775f0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIBossChallengeReward> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIBossChallengeReward>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIBossChallengeReward>::~UISingletonDialog
          (UISingletonDialog<UIBossChallengeReward> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIBossChallengeReward>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIBossChallengeReward>::UISingletonDialog
          (UISingletonDialog<UIBossChallengeReward> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_069775f0;
  *(undefined **)(this + 0xd8) = &DAT_06977940;
  return;
}


/* UISingletonDialog<UIBossChallengeReward>::CloseDialog() */

void UISingletonDialog<UIBossChallengeReward>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIFastTransGenosis>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIFastTransGenosis>::~UISingletonDialog
          (UISingletonDialog<UIFastTransGenosis> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_0697a1d0;
  *(undefined ***)this = &PTR_GetClass_06979e80;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIFastTransGenosis> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIFastTransGenosis>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIFastTransGenosis>::~UISingletonDialog
          (UISingletonDialog<UIFastTransGenosis> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIFastTransGenosis>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIFastTransGenosis>::UISingletonDialog
          (UISingletonDialog<UIFastTransGenosis> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06979e80;
  *(undefined **)(this + 0xd8) = &DAT_0697a1d0;
  return;
}


/* UISingletonDialog<UIFastTransGenosis>::CloseDialog() */

void UISingletonDialog<UIFastTransGenosis>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIFastTransGenosis>::ShowDialog() */

UIFastTransGenosis * UISingletonDialog<UIFastTransGenosis>::ShowDialog(void)

{
  UIFastTransGenosis *pUVar1;
  char cVar2;
  UIFastTransGenosis *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIFastTransGenosis *)0x0) {
    pUVar3 = ::operator_new(0x180);
    UIFastTransGenosis::UIFastTransGenosis(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIFastTransGenosis *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIFastTransGenosis *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<ActiveCenter>::GetSingletonPtr() */

undefined8 UISingletonDialog<ActiveCenter>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UIAdsLottery>::ShowDialog() */

UIAdsLottery * UISingletonDialog<UIAdsLottery>::ShowDialog(void)

{
  UIAdsLottery *pUVar1;
  char cVar2;
  UIAdsLottery *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIAdsLottery *)0x0) {
    pUVar3 = ::operator_new(0x148);
    UIAdsLottery::UIAdsLottery(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIAdsLottery *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIAdsLottery *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<AdsRewardUI>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<AdsRewardUI>::~UISingletonDialog(UISingletonDialog<AdsRewardUI> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06980240;
  *(undefined ***)this = &PTR_GetClass_0697fef0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<AdsRewardUI> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<AdsRewardUI>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<AdsRewardUI>::~UISingletonDialog(UISingletonDialog<AdsRewardUI> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<AdsRewardUI>::UISingletonDialog() */

void __thiscall
UISingletonDialog<AdsRewardUI>::UISingletonDialog(UISingletonDialog<AdsRewardUI> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_0697fef0;
  *(undefined **)(this + 0xd8) = &DAT_06980240;
  return;
}


/* UISingletonDialog<AdsRewardUI>::CloseDialog() */

void UISingletonDialog<AdsRewardUI>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<ProbabilityDLG>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<ProbabilityDLG>::~UISingletonDialog(UISingletonDialog<ProbabilityDLG> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06985af0;
  *(undefined ***)this = &PTR_GetClass_069857a0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<ProbabilityDLG> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<ProbabilityDLG>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<ProbabilityDLG>::~UISingletonDialog(UISingletonDialog<ProbabilityDLG> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<ProbabilityDLG>::UISingletonDialog() */

void __thiscall
UISingletonDialog<ProbabilityDLG>::UISingletonDialog(UISingletonDialog<ProbabilityDLG> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_069857a0;
  *(undefined **)(this + 0xd8) = &DAT_06985af0;
  return;
}


/* UISingletonDialog<PuzzlePlatformGiftPanel>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<PuzzlePlatformGiftPanel>::~UISingletonDialog
          (UISingletonDialog<PuzzlePlatformGiftPanel> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06986280;
  *(undefined ***)this = &PTR_GetClass_06985f30;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<PuzzlePlatformGiftPanel> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<PuzzlePlatformGiftPanel>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<PuzzlePlatformGiftPanel>::~UISingletonDialog
          (UISingletonDialog<PuzzlePlatformGiftPanel> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<PuzzlePlatformGiftPanel>::CloseDialog() */

void UISingletonDialog<PuzzlePlatformGiftPanel>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<PuzzlePlatformGiftPanel>::UISingletonDialog() */

void __thiscall
UISingletonDialog<PuzzlePlatformGiftPanel>::UISingletonDialog
          (UISingletonDialog<PuzzlePlatformGiftPanel> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06985f30;
  *(undefined **)(this + 0xd8) = &DAT_06986280;
  return;
}


/* UISingletonDialog<GuessGamePanel>::CloseDialog() */

void UISingletonDialog<GuessGamePanel>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<GuessGamePanel>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<GuessGamePanel>::~UISingletonDialog(UISingletonDialog<GuessGamePanel> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069883b0;
  *(undefined ***)this = &PTR_GetClass_06988060;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<GuessGamePanel> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<GuessGamePanel>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<GuessGamePanel>::~UISingletonDialog(UISingletonDialog<GuessGamePanel> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<GuessGamePanel>::UISingletonDialog() */

void __thiscall
UISingletonDialog<GuessGamePanel>::UISingletonDialog(UISingletonDialog<GuessGamePanel> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06988060;
  *(undefined **)(this + 0xd8) = &DAT_069883b0;
  return;
}


/* UISingletonDialog<RechargeDailySignActivityUI>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<RechargeDailySignActivityUI>::~UISingletonDialog
          (UISingletonDialog<RechargeDailySignActivityUI> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06989950;
  *(undefined ***)this = &PTR_GetClass_06989600;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<RechargeDailySignActivityUI> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<RechargeDailySignActivityUI>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<RechargeDailySignActivityUI>::~UISingletonDialog
          (UISingletonDialog<RechargeDailySignActivityUI> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<RechargeDailySignActivityUI>::UISingletonDialog() */

void __thiscall
UISingletonDialog<RechargeDailySignActivityUI>::UISingletonDialog
          (UISingletonDialog<RechargeDailySignActivityUI> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06989600;
  *(undefined **)(this + 0xd8) = &DAT_06989950;
  return;
}


/* UISingletonDialog<DiscountShopActivityUI>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<DiscountShopActivityUI>::~UISingletonDialog
          (UISingletonDialog<DiscountShopActivityUI> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_0698a8e0;
  *(undefined ***)this = &PTR_GetClass_0698a590;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<DiscountShopActivityUI> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<DiscountShopActivityUI>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<DiscountShopActivityUI>::~UISingletonDialog
          (UISingletonDialog<DiscountShopActivityUI> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<DiscountShopActivityUI>::UISingletonDialog() */

void __thiscall
UISingletonDialog<DiscountShopActivityUI>::UISingletonDialog
          (UISingletonDialog<DiscountShopActivityUI> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_0698a590;
  *(undefined **)(this + 0xd8) = &DAT_0698a8e0;
  return;
}


/* UISingletonDialog<UIPartyAssist>::GetSingletonPtr() */

undefined8 UISingletonDialog<UIPartyAssist>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<PVZ1ModeSelectLevel>::ShowDialog() */

PVZ1ModeSelectLevel * UISingletonDialog<PVZ1ModeSelectLevel>::ShowDialog(void)

{
  PVZ1ModeSelectLevel *pPVar1;
  char cVar2;
  PVZ1ModeSelectLevel *pPVar3;
  
  pPVar1 = m_pInstance;
  pPVar3 = pPVar1;
  if (m_pInstance == (PVZ1ModeSelectLevel *)0x0) {
    pPVar3 = ::operator_new(0x220);
    PVZ1ModeSelectLevel::PVZ1ModeSelectLevel(pPVar3);
    m_pInstance = pPVar3;
    cVar2 = (**(code **)(*(long *)pPVar3 + 0x310))(pPVar3);
    pPVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (PVZ1ModeSelectLevel *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (PVZ1ModeSelectLevel *)0x0;
      pPVar3 = pPVar1;
    }
  }
  return pPVar3;
}


/* UISingletonDialog<UIPVZ1ModeResultScreen>::ShowDialog() */

UIPVZ1ModeResultScreen * UISingletonDialog<UIPVZ1ModeResultScreen>::ShowDialog(void)

{
  UIPVZ1ModeResultScreen *pUVar1;
  char cVar2;
  UIPVZ1ModeResultScreen *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIPVZ1ModeResultScreen *)0x0) {
    pUVar3 = ::operator_new(0x220);
    UIPVZ1ModeResultScreen::UIPVZ1ModeResultScreen(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIPVZ1ModeResultScreen *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIPVZ1ModeResultScreen *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIPVZ1ModeResultScreen>::CloseDialog() */

void UISingletonDialog<UIPVZ1ModeResultScreen>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<RiftaShop>::~UISingletonDialog() */

void __thiscall UISingletonDialog<RiftaShop>::~UISingletonDialog(UISingletonDialog<RiftaShop> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069b8870;
  *(undefined ***)this = &PTR_GetClass_069b8520;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<RiftaShop> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<RiftaShop>::~UISingletonDialog() */

void __thiscall UISingletonDialog<RiftaShop>::~UISingletonDialog(UISingletonDialog<RiftaShop> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<RiftaShop>::UISingletonDialog() */

void __thiscall UISingletonDialog<RiftaShop>::UISingletonDialog(UISingletonDialog<RiftaShop> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_069b8520;
  *(undefined **)(this + 0xd8) = &DAT_069b8870;
  return;
}


/* UISingletonDialog<RiftaShop>::CloseDialog() */

void UISingletonDialog<RiftaShop>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<RiftaShop>::GetSingletonPtr() */

undefined8 UISingletonDialog<RiftaShop>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<RiftaShop>::ShowDialog() */

RiftaShop * UISingletonDialog<RiftaShop>::ShowDialog(void)

{
  RiftaShop *pRVar1;
  char cVar2;
  RiftaShop *pRVar3;
  
  pRVar1 = m_pInstance;
  pRVar3 = pRVar1;
  if (m_pInstance == (RiftaShop *)0x0) {
    pRVar3 = ::operator_new(0x160);
    RiftaShop::RiftaShop(pRVar3);
    m_pInstance = pRVar3;
    cVar2 = (**(code **)(*(long *)pRVar3 + 0x310))(pRVar3);
    pRVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (RiftaShop *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (RiftaShop *)0x0;
      pRVar3 = pRVar1;
    }
  }
  return pRVar3;
}


/* UISingletonDialog<PennyPerkBattleStatementChooseUI>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<PennyPerkBattleStatementChooseUI>::~UISingletonDialog
          (UISingletonDialog<PennyPerkBattleStatementChooseUI> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069b9800;
  *(undefined ***)this = &PTR_GetClass_069b94b0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<PennyPerkBattleStatementChooseUI> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<PennyPerkBattleStatementChooseUI>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<PennyPerkBattleStatementChooseUI>::~UISingletonDialog
          (UISingletonDialog<PennyPerkBattleStatementChooseUI> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<PennyPerkBattleStatementChooseUI>::CloseDialog() */

void UISingletonDialog<PennyPerkBattleStatementChooseUI>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<PennyPerkBattleStatementChooseUI>::UISingletonDialog() */

void __thiscall
UISingletonDialog<PennyPerkBattleStatementChooseUI>::UISingletonDialog
          (UISingletonDialog<PennyPerkBattleStatementChooseUI> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_069b94b0;
  *(undefined **)(this + 0xd8) = &DAT_069b9800;
  return;
}


/* UISingletonDialog<UIPlantWarsActivityReward>::ShowDialog() */

UIPlantWarsActivityReward * UISingletonDialog<UIPlantWarsActivityReward>::ShowDialog(void)

{
  UIPlantWarsActivityReward *pUVar1;
  char cVar2;
  UIPlantWarsActivityReward *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIPlantWarsActivityReward *)0x0) {
    pUVar3 = ::operator_new(0x170);
    UIPlantWarsActivityReward::UIPlantWarsActivityReward(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIPlantWarsActivityReward *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIPlantWarsActivityReward *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIPlantWarsActivityReward>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPlantWarsActivityReward>::~UISingletonDialog
          (UISingletonDialog<UIPlantWarsActivityReward> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069bb920;
  *(undefined ***)this = &PTR_GetClass_069bb5d0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIPlantWarsActivityReward> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIPlantWarsActivityReward>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPlantWarsActivityReward>::~UISingletonDialog
          (UISingletonDialog<UIPlantWarsActivityReward> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIPlantWarsActivityReward>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPlantWarsActivityReward>::UISingletonDialog
          (UISingletonDialog<UIPlantWarsActivityReward> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_069bb5d0;
  *(undefined **)(this + 0xd8) = &DAT_069bb920;
  return;
}


/* UISingletonDialog<UIPlantWarsActivityReward>::CloseDialog() */

void UISingletonDialog<UIPlantWarsActivityReward>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<FirstRechargeExtraUI>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<FirstRechargeExtraUI>::~UISingletonDialog
          (UISingletonDialog<FirstRechargeExtraUI> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069bedc0;
  *(undefined ***)this = &PTR_GetClass_069bea70;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<FirstRechargeExtraUI> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<FirstRechargeExtraUI>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<FirstRechargeExtraUI>::~UISingletonDialog
          (UISingletonDialog<FirstRechargeExtraUI> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<FirstRechargeExtraUI>::GetSingletonPtr() */

undefined8 UISingletonDialog<FirstRechargeExtraUI>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<FirstRechargeExtraUI>::UISingletonDialog() */

void __thiscall
UISingletonDialog<FirstRechargeExtraUI>::UISingletonDialog
          (UISingletonDialog<FirstRechargeExtraUI> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_069bea70;
  *(undefined **)(this + 0xd8) = &DAT_069bedc0;
  return;
}


/* UISingletonDialog<FirstRechargeExtraUI>::CloseDialog() */

void UISingletonDialog<FirstRechargeExtraUI>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<FirstRechargeExtraUI>::ShowDialog() */

FirstRechargeExtraUI * UISingletonDialog<FirstRechargeExtraUI>::ShowDialog(void)

{
  FirstRechargeExtraUI *pFVar1;
  char cVar2;
  FirstRechargeExtraUI *pFVar3;
  
  pFVar1 = m_pInstance;
  pFVar3 = pFVar1;
  if (m_pInstance == (FirstRechargeExtraUI *)0x0) {
    pFVar3 = ::operator_new(0x200);
    FirstRechargeExtraUI::FirstRechargeExtraUI(pFVar3);
    m_pInstance = pFVar3;
    cVar2 = (**(code **)(*(long *)pFVar3 + 0x310))(pFVar3);
    pFVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (FirstRechargeExtraUI *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (FirstRechargeExtraUI *)0x0;
      pFVar3 = pFVar1;
    }
  }
  return pFVar3;
}


/* UISingletonDialog<MonthlyCardSpecialUI>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<MonthlyCardSpecialUI>::~UISingletonDialog
          (UISingletonDialog<MonthlyCardSpecialUI> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069bfdb0;
  *(undefined ***)this = &PTR_GetClass_069bfa60;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<MonthlyCardSpecialUI> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<MonthlyCardSpecialUI>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<MonthlyCardSpecialUI>::~UISingletonDialog
          (UISingletonDialog<MonthlyCardSpecialUI> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<MonthlyCardSpecialUI>::UISingletonDialog() */

void __thiscall
UISingletonDialog<MonthlyCardSpecialUI>::UISingletonDialog
          (UISingletonDialog<MonthlyCardSpecialUI> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_069bfa60;
  *(undefined **)(this + 0xd8) = &DAT_069bfdb0;
  return;
}


/* UISingletonDialog<MonthlyCardSpecialUI>::CloseDialog() */

void UISingletonDialog<MonthlyCardSpecialUI>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<DangerRoomSpecialOfferExtraUI>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<DangerRoomSpecialOfferExtraUI>::~UISingletonDialog
          (UISingletonDialog<DangerRoomSpecialOfferExtraUI> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069c0940;
  *(undefined ***)this = &PTR_GetClass_069c05f0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<DangerRoomSpecialOfferExtraUI> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<DangerRoomSpecialOfferExtraUI>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<DangerRoomSpecialOfferExtraUI>::~UISingletonDialog
          (UISingletonDialog<DangerRoomSpecialOfferExtraUI> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<DangerRoomSpecialOfferExtraUI>::UISingletonDialog() */

void __thiscall
UISingletonDialog<DangerRoomSpecialOfferExtraUI>::UISingletonDialog
          (UISingletonDialog<DangerRoomSpecialOfferExtraUI> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_069c05f0;
  *(undefined **)(this + 0xd8) = &DAT_069c0940;
  return;
}


/* UISingletonDialog<DangerRoomSpecialOfferExtraUI>::CloseDialog() */

void UISingletonDialog<DangerRoomSpecialOfferExtraUI>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<DangerRoomSpecialOfferExtraUI>::GetSingletonPtr() */

undefined8 UISingletonDialog<DangerRoomSpecialOfferExtraUI>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<DangerRoomSpecialOfferExtraUI>::ShowDialog() */

DangerRoomSpecialOfferExtraUI * UISingletonDialog<DangerRoomSpecialOfferExtraUI>::ShowDialog(void)

{
  DangerRoomSpecialOfferExtraUI *pDVar1;
  char cVar2;
  DangerRoomSpecialOfferExtraUI *pDVar3;
  
  pDVar1 = m_pInstance;
  pDVar3 = pDVar1;
  if (m_pInstance == (DangerRoomSpecialOfferExtraUI *)0x0) {
    pDVar3 = ::operator_new(0x158);
    DangerRoomSpecialOfferExtraUI::DangerRoomSpecialOfferExtraUI(pDVar3);
    m_pInstance = pDVar3;
    cVar2 = (**(code **)(*(long *)pDVar3 + 0x310))(pDVar3);
    pDVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (DangerRoomSpecialOfferExtraUI *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (DangerRoomSpecialOfferExtraUI *)0x0;
      pDVar3 = pDVar1;
    }
  }
  return pDVar3;
}


/* UISingletonDialog<UIBagItemBox>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIBagItemBox>::~UISingletonDialog(UISingletonDialog<UIBagItemBox> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069c1910;
  *(undefined ***)this = &PTR_GetClass_069c15c0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIBagItemBox> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIBagItemBox>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIBagItemBox>::~UISingletonDialog(UISingletonDialog<UIBagItemBox> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIBagItemBox>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIBagItemBox>::UISingletonDialog(UISingletonDialog<UIBagItemBox> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_069c15c0;
  *(undefined **)(this + 0xd8) = &DAT_069c1910;
  return;
}


/* UISingletonDialog<UIBagItemBox>::CloseDialog() */

void UISingletonDialog<UIBagItemBox>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIBag>::~UISingletonDialog() */

void __thiscall UISingletonDialog<UIBag>::~UISingletonDialog(UISingletonDialog<UIBag> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069c2070;
  *(undefined ***)this = &PTR_GetClass_069c1d20;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIBag> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIBag>::~UISingletonDialog() */

void __thiscall UISingletonDialog<UIBag>::~UISingletonDialog(UISingletonDialog<UIBag> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIBagItemBox>::ShowDialog() */

UIBagItemBox * UISingletonDialog<UIBagItemBox>::ShowDialog(void)

{
  UIBagItemBox *pUVar1;
  char cVar2;
  UIBagItemBox *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIBagItemBox *)0x0) {
    pUVar3 = ::operator_new(0x2d8);
    UIBagItemBox::UIBagItemBox(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIBagItemBox *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIBagItemBox *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIBag>::CloseDialog() */

void UISingletonDialog<UIBag>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIGeneralPlantChipsExchange>::ShowDialog() */

UIGeneralPlantChipsExchange * UISingletonDialog<UIGeneralPlantChipsExchange>::ShowDialog(void)

{
  UIGeneralPlantChipsExchange *pUVar1;
  char cVar2;
  UIGeneralPlantChipsExchange *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIGeneralPlantChipsExchange *)0x0) {
    pUVar3 = ::operator_new(0x180);
    UIGeneralPlantChipsExchange::UIGeneralPlantChipsExchange(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIGeneralPlantChipsExchange *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIGeneralPlantChipsExchange *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIBag>::GetSingletonPtr() */

undefined8 UISingletonDialog<UIBag>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UIBag>::UISingletonDialog() */

void __thiscall UISingletonDialog<UIBag>::UISingletonDialog(UISingletonDialog<UIBag> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_069c1d20;
  *(undefined **)(this + 0xd8) = &DAT_069c2070;
  return;
}


/* UISingletonDialog<PVZ1ModeShop>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<PVZ1ModeShop>::~UISingletonDialog(UISingletonDialog<PVZ1ModeShop> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069c4d80;
  *(undefined ***)this = &PTR_GetClass_069c4a30;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<PVZ1ModeShop> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<PVZ1ModeShop>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<PVZ1ModeShop>::~UISingletonDialog(UISingletonDialog<PVZ1ModeShop> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<PVZ1ModeShop>::UISingletonDialog() */

void __thiscall
UISingletonDialog<PVZ1ModeShop>::UISingletonDialog(UISingletonDialog<PVZ1ModeShop> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_069c4a30;
  *(undefined **)(this + 0xd8) = &DAT_069c4d80;
  return;
}


/* UISingletonDialog<PVZ1ModeShop>::CloseDialog() */

void UISingletonDialog<PVZ1ModeShop>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<PVZ1ModeShop>::GetSingletonPtr() */

undefined8 UISingletonDialog<PVZ1ModeShop>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<PVZ1ModeShop>::ShowDialog() */

PVZ1ModeShop * UISingletonDialog<PVZ1ModeShop>::ShowDialog(void)

{
  PVZ1ModeShop *pPVar1;
  char cVar2;
  PVZ1ModeShop *pPVar3;
  
  pPVar1 = m_pInstance;
  pPVar3 = pPVar1;
  if (m_pInstance == (PVZ1ModeShop *)0x0) {
    pPVar3 = ::operator_new(0x160);
    PVZ1ModeShop::PVZ1ModeShop(pPVar3);
    m_pInstance = pPVar3;
    cVar2 = (**(code **)(*(long *)pPVar3 + 0x310))(pPVar3);
    pPVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (PVZ1ModeShop *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (PVZ1ModeShop *)0x0;
      pPVar3 = pPVar1;
    }
  }
  return pPVar3;
}


/* UISingletonDialog<CustomLevelShop>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<CustomLevelShop>::~UISingletonDialog(UISingletonDialog<CustomLevelShop> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069c5d20;
  *(undefined ***)this = &PTR_GetClass_069c59d0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<CustomLevelShop> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<CustomLevelShop>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<CustomLevelShop>::~UISingletonDialog(UISingletonDialog<CustomLevelShop> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<MoreOptionsShopItem>::ShowDialog() */

MoreOptionsShopItem * UISingletonDialog<MoreOptionsShopItem>::ShowDialog(void)

{
  MoreOptionsShopItem *pMVar1;
  char cVar2;
  MoreOptionsShopItem *pMVar3;
  
  pMVar1 = m_pInstance;
  pMVar3 = pMVar1;
  if (m_pInstance == (MoreOptionsShopItem *)0x0) {
    pMVar3 = ::operator_new(0x178);
    MoreOptionsShopItem::MoreOptionsShopItem(pMVar3);
    m_pInstance = pMVar3;
    cVar2 = (**(code **)(*(long *)pMVar3 + 0x310))(pMVar3);
    pMVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (MoreOptionsShopItem *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (MoreOptionsShopItem *)0x0;
      pMVar3 = pMVar1;
    }
  }
  return pMVar3;
}


/* UISingletonDialog<MoreOptionsShopItem>::CloseDialog() */

void UISingletonDialog<MoreOptionsShopItem>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<CustomLevelShop>::UISingletonDialog() */

void __thiscall
UISingletonDialog<CustomLevelShop>::UISingletonDialog(UISingletonDialog<CustomLevelShop> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_069c59d0;
  *(undefined **)(this + 0xd8) = &DAT_069c5d20;
  return;
}


/* UISingletonDialog<CustomLevelShop>::CloseDialog() */

void UISingletonDialog<CustomLevelShop>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<PVZ1ModeAchievement>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<PVZ1ModeAchievement>::~UISingletonDialog
          (UISingletonDialog<PVZ1ModeAchievement> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069c6cb0;
  *(undefined ***)this = &PTR_GetClass_069c6960;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<PVZ1ModeAchievement> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<PVZ1ModeAchievement>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<PVZ1ModeAchievement>::~UISingletonDialog
          (UISingletonDialog<PVZ1ModeAchievement> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<PVZ1ModeAchievement>::GetSingletonPtr() */

undefined8 UISingletonDialog<PVZ1ModeAchievement>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<PVZ1ModeAchievement>::UISingletonDialog() */

void __thiscall
UISingletonDialog<PVZ1ModeAchievement>::UISingletonDialog
          (UISingletonDialog<PVZ1ModeAchievement> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_069c6960;
  *(undefined **)(this + 0xd8) = &DAT_069c6cb0;
  return;
}


/* UISingletonDialog<PVZ1ModeAchievement>::CloseDialog() */

void UISingletonDialog<PVZ1ModeAchievement>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<PVZ1ModeSelectLevel>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<PVZ1ModeSelectLevel>::~UISingletonDialog
          (UISingletonDialog<PVZ1ModeSelectLevel> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069c82f0;
  *(undefined ***)this = &PTR_GetClass_069c7fa0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<PVZ1ModeSelectLevel> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<PVZ1ModeSelectLevel>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<PVZ1ModeSelectLevel>::~UISingletonDialog
          (UISingletonDialog<PVZ1ModeSelectLevel> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<PVZ1ModeSelectLevel>::GetSingletonPtr() */

undefined8 UISingletonDialog<PVZ1ModeSelectLevel>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<PVZ1ModeSelectLevel>::UISingletonDialog() */

void __thiscall
UISingletonDialog<PVZ1ModeSelectLevel>::UISingletonDialog
          (UISingletonDialog<PVZ1ModeSelectLevel> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_069c7fa0;
  *(undefined **)(this + 0xd8) = &DAT_069c82f0;
  return;
}


/* UISingletonDialog<PVZ1ModeSelectLevel>::CloseDialog() */

void UISingletonDialog<PVZ1ModeSelectLevel>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIPVZ1ModeResultScreen>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPVZ1ModeResultScreen>::~UISingletonDialog
          (UISingletonDialog<UIPVZ1ModeResultScreen> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069ca850;
  *(undefined ***)this = &PTR_GetClass_069ca500;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIPVZ1ModeResultScreen> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIPVZ1ModeResultScreen>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPVZ1ModeResultScreen>::~UISingletonDialog
          (UISingletonDialog<UIPVZ1ModeResultScreen> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIPVZ1ModeResultScreen>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPVZ1ModeResultScreen>::UISingletonDialog
          (UISingletonDialog<UIPVZ1ModeResultScreen> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_069ca500;
  *(undefined **)(this + 0xd8) = &DAT_069ca850;
  return;
}


/* UISingletonDialog<UIPVZ1ModeCredits>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPVZ1ModeCredits>::~UISingletonDialog(UISingletonDialog<UIPVZ1ModeCredits> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069cb380;
  *(undefined ***)this = &PTR_GetClass_069cb030;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIPVZ1ModeCredits> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIPVZ1ModeCredits>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPVZ1ModeCredits>::~UISingletonDialog(UISingletonDialog<UIPVZ1ModeCredits> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIPVZ1ModeCredits>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPVZ1ModeCredits>::UISingletonDialog(UISingletonDialog<UIPVZ1ModeCredits> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_069cb030;
  *(undefined **)(this + 0xd8) = &DAT_069cb380;
  return;
}


/* UISingletonDialog<UIPVZ1ModeCredits>::CloseDialog() */

void UISingletonDialog<UIPVZ1ModeCredits>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIPennyClassroom>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPennyClassroom>::~UISingletonDialog(UISingletonDialog<UIPennyClassroom> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069cc700;
  *(undefined ***)this = &PTR_GetClass_069cc3b0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIPennyClassroom> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIPennyClassroom>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPennyClassroom>::~UISingletonDialog(UISingletonDialog<UIPennyClassroom> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIPennyClassroomSurvey>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPennyClassroomSurvey>::~UISingletonDialog
          (UISingletonDialog<UIPennyClassroomSurvey> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069cc360;
  *(undefined ***)this = &PTR_GetClass_069cc010;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIPennyClassroomSurvey> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIPennyClassroomSurvey>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPennyClassroomSurvey>::~UISingletonDialog
          (UISingletonDialog<UIPennyClassroomSurvey> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIPennyClassroomShop>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPennyClassroomShop>::~UISingletonDialog
          (UISingletonDialog<UIPennyClassroomShop> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069ccaa0;
  *(undefined ***)this = &PTR_GetClass_069cc750;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIPennyClassroomShop> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIPennyClassroomShop>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPennyClassroomShop>::~UISingletonDialog
          (UISingletonDialog<UIPennyClassroomShop> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIPennyClassroomStartLevel>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPennyClassroomStartLevel>::~UISingletonDialog
          (UISingletonDialog<UIPennyClassroomStartLevel> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069cbfc0;
  *(undefined ***)this = &PTR_GetClass_069cbc70;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIPennyClassroomStartLevel> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIPennyClassroomStartLevel>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPennyClassroomStartLevel>::~UISingletonDialog
          (UISingletonDialog<UIPennyClassroomStartLevel> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIPennyClassroom>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPennyClassroom>::UISingletonDialog(UISingletonDialog<UIPennyClassroom> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_069cc3b0;
  *(undefined **)(this + 0xd8) = &DAT_069cc700;
  return;
}


/* UISingletonDialog<UIPennyClassroom>::CloseDialog() */

void UISingletonDialog<UIPennyClassroom>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIPennyClassroomSurvey>::GetSingletonPtr() */

undefined8 UISingletonDialog<UIPennyClassroomSurvey>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UIPennyClassroomSurvey>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPennyClassroomSurvey>::UISingletonDialog
          (UISingletonDialog<UIPennyClassroomSurvey> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_069cc010;
  *(undefined **)(this + 0xd8) = &DAT_069cc360;
  return;
}


/* UISingletonDialog<UIPennyClassroomSurvey>::CloseDialog() */

void UISingletonDialog<UIPennyClassroomSurvey>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIPennyClassroomShop>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPennyClassroomShop>::UISingletonDialog
          (UISingletonDialog<UIPennyClassroomShop> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_069cc750;
  *(undefined **)(this + 0xd8) = &DAT_069ccaa0;
  return;
}


/* UISingletonDialog<UIPennyClassroomShop>::CloseDialog() */

void UISingletonDialog<UIPennyClassroomShop>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIPennyClassroomStartLevel>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPennyClassroomStartLevel>::UISingletonDialog
          (UISingletonDialog<UIPennyClassroomStartLevel> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_069cbc70;
  *(undefined **)(this + 0xd8) = &DAT_069cbfc0;
  return;
}


/* UISingletonDialog<UIPennyClassroomStartLevel>::CloseDialog() */

void UISingletonDialog<UIPennyClassroomStartLevel>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIPennyClassroomStartLevel>::ShowDialog() */

UIPennyClassroomStartLevel * UISingletonDialog<UIPennyClassroomStartLevel>::ShowDialog(void)

{
  UIPennyClassroomStartLevel *pUVar1;
  char cVar2;
  UIPennyClassroomStartLevel *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIPennyClassroomStartLevel *)0x0) {
    pUVar3 = ::operator_new(0x210);
    UIPennyClassroomStartLevel::UIPennyClassroomStartLevel(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIPennyClassroomStartLevel *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIPennyClassroomStartLevel *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIPennyClassroomSurvey>::ShowDialog() */

UIPennyClassroomSurvey * UISingletonDialog<UIPennyClassroomSurvey>::ShowDialog(void)

{
  UIPennyClassroomSurvey *pUVar1;
  char cVar2;
  UIPennyClassroomSurvey *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIPennyClassroomSurvey *)0x0) {
    pUVar3 = ::operator_new(0x280);
    UIPennyClassroomSurvey::UIPennyClassroomSurvey(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIPennyClassroomSurvey *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIPennyClassroomSurvey *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIPennyClassroomShop>::ShowDialog() */

UIPennyClassroomShop * UISingletonDialog<UIPennyClassroomShop>::ShowDialog(void)

{
  UIPennyClassroomShop *pUVar1;
  char cVar2;
  UIPennyClassroomShop *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIPennyClassroomShop *)0x0) {
    pUVar3 = ::operator_new(0x220);
    UIPennyClassroomShop::UIPennyClassroomShop(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIPennyClassroomShop *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIPennyClassroomShop *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<PVZ2UnchartedModeResultScreen>::ShowDialog() */

PVZ2UnchartedModeResultScreen * UISingletonDialog<PVZ2UnchartedModeResultScreen>::ShowDialog(void)

{
  PVZ2UnchartedModeResultScreen *pPVar1;
  char cVar2;
  PVZ2UnchartedModeResultScreen *pPVar3;
  
  pPVar1 = m_pInstance;
  pPVar3 = pPVar1;
  if (m_pInstance == (PVZ2UnchartedModeResultScreen *)0x0) {
    pPVar3 = ::operator_new(0x2d0);
    PVZ2UnchartedModeResultScreen::PVZ2UnchartedModeResultScreen(pPVar3);
    m_pInstance = pPVar3;
    cVar2 = (**(code **)(*(long *)pPVar3 + 0x310))(pPVar3);
    pPVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (PVZ2UnchartedModeResultScreen *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (PVZ2UnchartedModeResultScreen *)0x0;
      pPVar3 = pPVar1;
    }
  }
  return pPVar3;
}


/* UISingletonDialog<PVZ2UnchartedModeResultScreen>::CloseDialog() */

void UISingletonDialog<PVZ2UnchartedModeResultScreen>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<PVZ2UnchartedModeResultScreen>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<PVZ2UnchartedModeResultScreen>::~UISingletonDialog
          (UISingletonDialog<PVZ2UnchartedModeResultScreen> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069cff70;
  *(undefined ***)this = &PTR_GetClass_069cfc20;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<PVZ2UnchartedModeResultScreen> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<PVZ2UnchartedModeResultScreen>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<PVZ2UnchartedModeResultScreen>::~UISingletonDialog
          (UISingletonDialog<PVZ2UnchartedModeResultScreen> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<PVZ2UnchartedModeResultScreen>::UISingletonDialog() */

void __thiscall
UISingletonDialog<PVZ2UnchartedModeResultScreen>::UISingletonDialog
          (UISingletonDialog<PVZ2UnchartedModeResultScreen> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_069cfc20;
  *(undefined **)(this + 0xd8) = &DAT_069cff70;
  return;
}


/* UISingletonDialog<PVZ2UnchartedModeSelectLevel>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<PVZ2UnchartedModeSelectLevel>::~UISingletonDialog
          (UISingletonDialog<PVZ2UnchartedModeSelectLevel> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069d06b0;
  *(undefined ***)this = &PTR_GetClass_069d0360;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<PVZ2UnchartedModeSelectLevel> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<PVZ2UnchartedModeSelectLevel>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<PVZ2UnchartedModeSelectLevel>::~UISingletonDialog
          (UISingletonDialog<PVZ2UnchartedModeSelectLevel> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<PVZ2UnchartedModeSelectLevelAnniversary>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<PVZ2UnchartedModeSelectLevelAnniversary>::~UISingletonDialog
          (UISingletonDialog<PVZ2UnchartedModeSelectLevelAnniversary> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069d0a50;
  *(undefined ***)this = &PTR_GetClass_069d0700;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<PVZ2UnchartedModeSelectLevelAnniversary> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<PVZ2UnchartedModeSelectLevelAnniversary>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<PVZ2UnchartedModeSelectLevelAnniversary>::~UISingletonDialog
          (UISingletonDialog<PVZ2UnchartedModeSelectLevelAnniversary> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<PVZ2UnchartedModeSelectLevelTaskPanel>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<PVZ2UnchartedModeSelectLevelTaskPanel>::~UISingletonDialog
          (UISingletonDialog<PVZ2UnchartedModeSelectLevelTaskPanel> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069d0df0;
  *(undefined ***)this = &PTR_GetClass_069d0aa0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<PVZ2UnchartedModeSelectLevelTaskPanel> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<PVZ2UnchartedModeSelectLevelTaskPanel>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<PVZ2UnchartedModeSelectLevelTaskPanel>::~UISingletonDialog
          (UISingletonDialog<PVZ2UnchartedModeSelectLevelTaskPanel> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<PVZ2UnchartedModeSelectLevel>::UISingletonDialog() */

void __thiscall
UISingletonDialog<PVZ2UnchartedModeSelectLevel>::UISingletonDialog
          (UISingletonDialog<PVZ2UnchartedModeSelectLevel> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_069d0360;
  *(undefined **)(this + 0xd8) = &DAT_069d06b0;
  return;
}


/* UISingletonDialog<PVZ2UnchartedModeSelectLevel>::CloseDialog() */

void UISingletonDialog<PVZ2UnchartedModeSelectLevel>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<PVZ2UnchartedModeSelectLevelAnniversary>::UISingletonDialog() */

void __thiscall
UISingletonDialog<PVZ2UnchartedModeSelectLevelAnniversary>::UISingletonDialog
          (UISingletonDialog<PVZ2UnchartedModeSelectLevelAnniversary> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_069d0700;
  *(undefined **)(this + 0xd8) = &DAT_069d0a50;
  return;
}


/* UISingletonDialog<PVZ2UnchartedModeSelectLevelAnniversary>::CloseDialog() */

void UISingletonDialog<PVZ2UnchartedModeSelectLevelAnniversary>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<PVZ2UnchartedModeSelectLevelTaskPanel>::UISingletonDialog() */

void __thiscall
UISingletonDialog<PVZ2UnchartedModeSelectLevelTaskPanel>::UISingletonDialog
          (UISingletonDialog<PVZ2UnchartedModeSelectLevelTaskPanel> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_069d0aa0;
  *(undefined **)(this + 0xd8) = &DAT_069d0df0;
  return;
}


/* UISingletonDialog<PVZ2UnchartedModeSelectLevelTaskPanel>::ShowDialog() */

PVZ2UnchartedModeSelectLevelTaskPanel *
UISingletonDialog<PVZ2UnchartedModeSelectLevelTaskPanel>::ShowDialog(void)

{
  PVZ2UnchartedModeSelectLevelTaskPanel *pPVar1;
  char cVar2;
  PVZ2UnchartedModeSelectLevelTaskPanel *pPVar3;
  
  pPVar1 = m_pInstance;
  pPVar3 = pPVar1;
  if (m_pInstance == (PVZ2UnchartedModeSelectLevelTaskPanel *)0x0) {
    pPVar3 = ::operator_new(0x140);
    PVZ2UnchartedModeSelectLevelTaskPanel::PVZ2UnchartedModeSelectLevelTaskPanel(pPVar3);
    m_pInstance = pPVar3;
    cVar2 = (**(code **)(*(long *)pPVar3 + 0x310))(pPVar3);
    pPVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (PVZ2UnchartedModeSelectLevelTaskPanel *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (PVZ2UnchartedModeSelectLevelTaskPanel *)0x0;
      pPVar3 = pPVar1;
    }
  }
  return pPVar3;
}


/* UISingletonDialog<PVZ2UnchartedModeSelectLevelTaskPanel>::CloseDialog() */

void UISingletonDialog<PVZ2UnchartedModeSelectLevelTaskPanel>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<CardGameResultScreen>::ShowDialog() */

CardGameResultScreen * UISingletonDialog<CardGameResultScreen>::ShowDialog(void)

{
  CardGameResultScreen *pCVar1;
  char cVar2;
  CardGameResultScreen *pCVar3;
  
  pCVar1 = m_pInstance;
  pCVar3 = pCVar1;
  if (m_pInstance == (CardGameResultScreen *)0x0) {
    pCVar3 = ::operator_new(0x230);
    CardGameResultScreen::CardGameResultScreen(pCVar3);
    m_pInstance = pCVar3;
    cVar2 = (**(code **)(*(long *)pCVar3 + 0x310))(pCVar3);
    pCVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (CardGameResultScreen *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (CardGameResultScreen *)0x0;
      pCVar3 = pCVar1;
    }
  }
  return pCVar3;
}


/* UISingletonDialog<CardGameResultScreen>::CloseDialog() */

void UISingletonDialog<CardGameResultScreen>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<CardGameResultScreen>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<CardGameResultScreen>::~UISingletonDialog
          (UISingletonDialog<CardGameResultScreen> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069d5d10;
  *(undefined ***)this = &PTR_GetClass_069d59c0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<CardGameResultScreen> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<CardGameResultScreen>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<CardGameResultScreen>::~UISingletonDialog
          (UISingletonDialog<CardGameResultScreen> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<CardGameResultScreen>::UISingletonDialog() */

void __thiscall
UISingletonDialog<CardGameResultScreen>::UISingletonDialog
          (UISingletonDialog<CardGameResultScreen> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_069d59c0;
  *(undefined **)(this + 0xd8) = &DAT_069d5d10;
  return;
}


/* UISingletonDialog<CardGameSelectLevel>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<CardGameSelectLevel>::~UISingletonDialog
          (UISingletonDialog<CardGameSelectLevel> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069d9920;
  *(undefined ***)this = &PTR_GetClass_069d95d0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<CardGameSelectLevel> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<CardGameSelectLevel>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<CardGameSelectLevel>::~UISingletonDialog
          (UISingletonDialog<CardGameSelectLevel> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<CardGameSelectLevel>::UISingletonDialog() */

void __thiscall
UISingletonDialog<CardGameSelectLevel>::UISingletonDialog
          (UISingletonDialog<CardGameSelectLevel> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_069d95d0;
  *(undefined **)(this + 0xd8) = &DAT_069d9920;
  return;
}


/* UISingletonDialog<CardGameSelectLevel>::CloseDialog() */

void UISingletonDialog<CardGameSelectLevel>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<CardGameChooseDeck>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<CardGameChooseDeck>::~UISingletonDialog
          (UISingletonDialog<CardGameChooseDeck> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069da060;
  *(undefined ***)this = &PTR_GetClass_069d9d10;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<CardGameChooseDeck> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<CardGameChooseDeck>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<CardGameChooseDeck>::~UISingletonDialog
          (UISingletonDialog<CardGameChooseDeck> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<CardGameChooseDeck>::UISingletonDialog() */

void __thiscall
UISingletonDialog<CardGameChooseDeck>::UISingletonDialog
          (UISingletonDialog<CardGameChooseDeck> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_069d9d10;
  *(undefined **)(this + 0xd8) = &DAT_069da060;
  return;
}


/* UISingletonDialog<CardGameChooseDeck>::CloseDialog() */

void UISingletonDialog<CardGameChooseDeck>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UICornucopia>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UICornucopia>::~UISingletonDialog(UISingletonDialog<UICornucopia> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069e11c0;
  *(undefined ***)this = &PTR_GetClass_069e0e70;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UICornucopia> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UICornucopia>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UICornucopia>::~UISingletonDialog(UISingletonDialog<UICornucopia> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UICornucopiaTurnPagesList>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UICornucopiaTurnPagesList>::~UISingletonDialog
          (UISingletonDialog<UICornucopiaTurnPagesList> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069e0e20;
  *(undefined ***)this = &PTR_GetClass_069e0ad0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UICornucopiaTurnPagesList> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UICornucopiaTurnPagesList>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UICornucopiaTurnPagesList>::~UISingletonDialog
          (UISingletonDialog<UICornucopiaTurnPagesList> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UICornucopia>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UICornucopia>::UISingletonDialog(UISingletonDialog<UICornucopia> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_069e0e70;
  *(undefined **)(this + 0xd8) = &DAT_069e11c0;
  return;
}


/* UISingletonDialog<UICornucopia>::CloseDialog() */

void UISingletonDialog<UICornucopia>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UICornucopiaTurnPagesList>::CloseDialog() */

void UISingletonDialog<UICornucopiaTurnPagesList>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UICornucopiaTurnPagesList>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UICornucopiaTurnPagesList>::UISingletonDialog
          (UISingletonDialog<UICornucopiaTurnPagesList> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_069e0ad0;
  *(undefined **)(this + 0xd8) = &DAT_069e0e20;
  return;
}


/* UISingletonDialog<UICornucopiaTurnPagesList>::ShowDialog() */

UICornucopiaTurnPagesList * UISingletonDialog<UICornucopiaTurnPagesList>::ShowDialog(void)

{
  UICornucopiaTurnPagesList *pUVar1;
  char cVar2;
  UICornucopiaTurnPagesList *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UICornucopiaTurnPagesList *)0x0) {
    pUVar3 = ::operator_new(0x160);
    memset(pUVar3,0,0x160);
    UICornucopiaTurnPagesList::UICornucopiaTurnPagesList(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UICornucopiaTurnPagesList *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UICornucopiaTurnPagesList *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIInvitation>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIInvitation>::~UISingletonDialog(UISingletonDialog<UIInvitation> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069e3bf0;
  *(undefined ***)this = &PTR_GetClass_069e38a0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIInvitation> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIInvitation>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIInvitation>::~UISingletonDialog(UISingletonDialog<UIInvitation> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIInvitationSharedDetail>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIInvitationSharedDetail>::~UISingletonDialog
          (UISingletonDialog<UIInvitationSharedDetail> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069e3f90;
  *(undefined ***)this = &PTR_GetClass_069e3c40;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIInvitationSharedDetail> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIInvitationSharedDetail>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIInvitationSharedDetail>::~UISingletonDialog
          (UISingletonDialog<UIInvitationSharedDetail> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<InvitationLotteryPanel>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<InvitationLotteryPanel>::~UISingletonDialog
          (UISingletonDialog<InvitationLotteryPanel> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069e3850;
  *(undefined ***)this = &PTR_GetClass_069e3500;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<InvitationLotteryPanel> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<InvitationLotteryPanel>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<InvitationLotteryPanel>::~UISingletonDialog
          (UISingletonDialog<InvitationLotteryPanel> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIInvitationSharedDetail>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIInvitationSharedDetail>::UISingletonDialog
          (UISingletonDialog<UIInvitationSharedDetail> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_069e3c40;
  *(undefined **)(this + 0xd8) = &DAT_069e3f90;
  return;
}


/* UISingletonDialog<UIInvitation>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIInvitation>::UISingletonDialog(UISingletonDialog<UIInvitation> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_069e38a0;
  *(undefined **)(this + 0xd8) = &DAT_069e3bf0;
  return;
}


/* UISingletonDialog<UIInvitation>::CloseDialog() */

void UISingletonDialog<UIInvitation>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIInvitationSharedDetail>::CloseDialog() */

void UISingletonDialog<UIInvitationSharedDetail>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<InvitationLotteryPanel>::UISingletonDialog() */

void __thiscall
UISingletonDialog<InvitationLotteryPanel>::UISingletonDialog
          (UISingletonDialog<InvitationLotteryPanel> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_069e3500;
  *(undefined **)(this + 0xd8) = &DAT_069e3850;
  return;
}


/* UISingletonDialog<InvitationLotteryPanel>::ShowDialog() */

InvitationLotteryPanel * UISingletonDialog<InvitationLotteryPanel>::ShowDialog(void)

{
  InvitationLotteryPanel *pIVar1;
  char cVar2;
  InvitationLotteryPanel *pIVar3;
  
  pIVar1 = m_pInstance;
  pIVar3 = pIVar1;
  if (m_pInstance == (InvitationLotteryPanel *)0x0) {
    pIVar3 = ::operator_new(0x1d0);
    InvitationLotteryPanel::InvitationLotteryPanel(pIVar3);
    m_pInstance = pIVar3;
    cVar2 = (**(code **)(*(long *)pIVar3 + 0x310))(pIVar3);
    pIVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (InvitationLotteryPanel *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (InvitationLotteryPanel *)0x0;
      pIVar3 = pIVar1;
    }
  }
  return pIVar3;
}


/* UISingletonDialog<UIInvitationSharedDetail>::ShowDialog() */

UIInvitationSharedDetail * UISingletonDialog<UIInvitationSharedDetail>::ShowDialog(void)

{
  UIInvitationSharedDetail *pUVar1;
  char cVar2;
  UIInvitationSharedDetail *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIInvitationSharedDetail *)0x0) {
    pUVar3 = ::operator_new(0x1f0);
    UIInvitationSharedDetail::UIInvitationSharedDetail(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIInvitationSharedDetail *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIInvitationSharedDetail *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIFutureGiftShop>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIFutureGiftShop>::~UISingletonDialog(UISingletonDialog<UIFutureGiftShop> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069e57c0;
  *(undefined ***)this = &PTR_GetClass_069e5470;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIFutureGiftShop> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIFutureGiftShop>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIFutureGiftShop>::~UISingletonDialog(UISingletonDialog<UIFutureGiftShop> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIFutureGiftShop>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIFutureGiftShop>::UISingletonDialog(UISingletonDialog<UIFutureGiftShop> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_069e5470;
  *(undefined **)(this + 0xd8) = &DAT_069e57c0;
  return;
}


/* UISingletonDialog<UIFutureGiftShop>::CloseDialog() */

void UISingletonDialog<UIFutureGiftShop>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIPennyGiftBox>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPennyGiftBox>::~UISingletonDialog(UISingletonDialog<UIPennyGiftBox> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069e6510;
  *(undefined ***)this = &PTR_GetClass_069e61c0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIPennyGiftBox> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIPennyGiftBox>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPennyGiftBox>::~UISingletonDialog(UISingletonDialog<UIPennyGiftBox> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<PennyGiftBoxPage>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<PennyGiftBoxPage>::~UISingletonDialog(UISingletonDialog<PennyGiftBoxPage> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069e6ff0;
  *(undefined ***)this = &PTR_GetClass_069e6ca0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<PennyGiftBoxPage> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<PennyGiftBoxPage>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<PennyGiftBoxPage>::~UISingletonDialog(UISingletonDialog<PennyGiftBoxPage> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<PennyGiftBoxBundle>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<PennyGiftBoxBundle>::~UISingletonDialog
          (UISingletonDialog<PennyGiftBoxBundle> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069e7730;
  *(undefined ***)this = &PTR_GetClass_069e73e0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<PennyGiftBoxBundle> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<PennyGiftBoxBundle>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<PennyGiftBoxBundle>::~UISingletonDialog
          (UISingletonDialog<PennyGiftBoxBundle> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIPenntGiftBoxItemInfo>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPenntGiftBoxItemInfo>::~UISingletonDialog
          (UISingletonDialog<UIPenntGiftBoxItemInfo> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069e6c50;
  *(undefined ***)this = &PTR_GetClass_069e6900;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIPenntGiftBoxItemInfo> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIPenntGiftBoxItemInfo>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPenntGiftBoxItemInfo>::~UISingletonDialog
          (UISingletonDialog<UIPenntGiftBoxItemInfo> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<PennyGiftConfig>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<PennyGiftConfig>::~UISingletonDialog(UISingletonDialog<PennyGiftConfig> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069e68b0;
  *(undefined ***)this = &PTR_GetClass_069e6560;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<PennyGiftConfig> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<PennyGiftConfig>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<PennyGiftConfig>::~UISingletonDialog(UISingletonDialog<PennyGiftConfig> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIPennyGiftBoxReward>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPennyGiftBoxReward>::~UISingletonDialog
          (UISingletonDialog<UIPennyGiftBoxReward> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069e7390;
  *(undefined ***)this = &PTR_GetClass_069e7040;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIPennyGiftBoxReward> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIPennyGiftBoxReward>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPennyGiftBoxReward>::~UISingletonDialog
          (UISingletonDialog<UIPennyGiftBoxReward> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<PennyGiftBoxRank>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<PennyGiftBoxRank>::~UISingletonDialog(UISingletonDialog<PennyGiftBoxRank> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069e7ad0;
  *(undefined ***)this = &PTR_GetClass_069e7780;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<PennyGiftBoxRank> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<PennyGiftBoxRank>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<PennyGiftBoxRank>::~UISingletonDialog(UISingletonDialog<PennyGiftBoxRank> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIPennyGiftBox>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPennyGiftBox>::UISingletonDialog(UISingletonDialog<UIPennyGiftBox> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_069e61c0;
  *(undefined **)(this + 0xd8) = &DAT_069e6510;
  return;
}


/* UISingletonDialog<UIPennyGiftBox>::CloseDialog() */

void UISingletonDialog<UIPennyGiftBox>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<PennyGiftBoxPage>::GetSingletonPtr() */

undefined8 UISingletonDialog<PennyGiftBoxPage>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UIPennyGiftBoxReward>::GetSingletonPtr() */

undefined8 UISingletonDialog<UIPennyGiftBoxReward>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<PennyGiftBoxBundle>::GetSingletonPtr() */

undefined8 UISingletonDialog<PennyGiftBoxBundle>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<PennyGiftBoxRank>::GetSingletonPtr() */

undefined8 UISingletonDialog<PennyGiftBoxRank>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<PennyGiftConfig>::GetSingletonPtr() */

undefined8 UISingletonDialog<PennyGiftConfig>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<PennyGiftConfig>::CloseDialog() */

void UISingletonDialog<PennyGiftConfig>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIPenntGiftBoxItemInfo>::CloseDialog() */

void UISingletonDialog<UIPenntGiftBoxItemInfo>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIPennyGiftBox>::GetSingletonPtr() */

undefined8 UISingletonDialog<UIPennyGiftBox>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UIPennyGiftBoxReward>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPennyGiftBoxReward>::UISingletonDialog
          (UISingletonDialog<UIPennyGiftBoxReward> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_069e7040;
  *(undefined **)(this + 0xd8) = &DAT_069e7390;
  return;
}


/* UISingletonDialog<PennyGiftBoxRank>::UISingletonDialog() */

void __thiscall
UISingletonDialog<PennyGiftBoxRank>::UISingletonDialog(UISingletonDialog<PennyGiftBoxRank> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_069e7780;
  *(undefined **)(this + 0xd8) = &DAT_069e7ad0;
  return;
}


/* UISingletonDialog<PennyGiftBoxPage>::UISingletonDialog() */

void __thiscall
UISingletonDialog<PennyGiftBoxPage>::UISingletonDialog(UISingletonDialog<PennyGiftBoxPage> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_069e6ca0;
  *(undefined **)(this + 0xd8) = &DAT_069e6ff0;
  return;
}


/* UISingletonDialog<PennyGiftBoxBundle>::UISingletonDialog() */

void __thiscall
UISingletonDialog<PennyGiftBoxBundle>::UISingletonDialog
          (UISingletonDialog<PennyGiftBoxBundle> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_069e73e0;
  *(undefined **)(this + 0xd8) = &DAT_069e7730;
  return;
}


/* UISingletonDialog<PennyGiftBoxBundle>::ShowDialog() */

PennyGiftBoxBundle * UISingletonDialog<PennyGiftBoxBundle>::ShowDialog(void)

{
  PennyGiftBoxBundle *pPVar1;
  char cVar2;
  PennyGiftBoxBundle *pPVar3;
  
  pPVar1 = m_pInstance;
  pPVar3 = pPVar1;
  if (m_pInstance == (PennyGiftBoxBundle *)0x0) {
    pPVar3 = ::operator_new(0x140);
    memset(pPVar3,0,0x140);
    PennyGiftBoxBundle::PennyGiftBoxBundle(pPVar3);
    m_pInstance = pPVar3;
    cVar2 = (**(code **)(*(long *)pPVar3 + 0x310))(pPVar3);
    pPVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (PennyGiftBoxBundle *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (PennyGiftBoxBundle *)0x0;
      pPVar3 = pPVar1;
    }
  }
  return pPVar3;
}


/* UISingletonDialog<UIPenntGiftBoxItemInfo>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPenntGiftBoxItemInfo>::UISingletonDialog
          (UISingletonDialog<UIPenntGiftBoxItemInfo> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_069e6900;
  *(undefined **)(this + 0xd8) = &DAT_069e6c50;
  return;
}


/* UISingletonDialog<UIPenntGiftBoxItemInfo>::ShowDialog() */

UIPenntGiftBoxItemInfo * UISingletonDialog<UIPenntGiftBoxItemInfo>::ShowDialog(void)

{
  UIPenntGiftBoxItemInfo *pUVar1;
  char cVar2;
  UIPenntGiftBoxItemInfo *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIPenntGiftBoxItemInfo *)0x0) {
    pUVar3 = ::operator_new(0x138);
    memset(pUVar3,0,0x138);
    UIPenntGiftBoxItemInfo::UIPenntGiftBoxItemInfo(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIPenntGiftBoxItemInfo *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIPenntGiftBoxItemInfo *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<PennyGiftConfig>::UISingletonDialog() */

void __thiscall
UISingletonDialog<PennyGiftConfig>::UISingletonDialog(UISingletonDialog<PennyGiftConfig> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_069e6560;
  *(undefined **)(this + 0xd8) = &DAT_069e68b0;
  return;
}


/* UISingletonDialog<UIPennyGiftBoxReward>::ShowDialog() */

UIPennyGiftBoxReward * UISingletonDialog<UIPennyGiftBoxReward>::ShowDialog(void)

{
  UIPennyGiftBoxReward *pUVar1;
  char cVar2;
  UIPennyGiftBoxReward *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIPennyGiftBoxReward *)0x0) {
    pUVar3 = ::operator_new(0x280);
    UIPennyGiftBoxReward::UIPennyGiftBoxReward(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIPennyGiftBoxReward *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIPennyGiftBoxReward *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<PennyGiftBoxRank>::ShowDialog() */

PennyGiftBoxRank * UISingletonDialog<PennyGiftBoxRank>::ShowDialog(void)

{
  PennyGiftBoxRank *pPVar1;
  char cVar2;
  PennyGiftBoxRank *pPVar3;
  
  pPVar1 = m_pInstance;
  pPVar3 = pPVar1;
  if (m_pInstance == (PennyGiftBoxRank *)0x0) {
    pPVar3 = ::operator_new(0x160);
    PennyGiftBoxRank::PennyGiftBoxRank(pPVar3);
    m_pInstance = pPVar3;
    cVar2 = (**(code **)(*(long *)pPVar3 + 0x310))(pPVar3);
    pPVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (PennyGiftBoxRank *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (PennyGiftBoxRank *)0x0;
      pPVar3 = pPVar1;
    }
  }
  return pPVar3;
}


/* UISingletonDialog<PennyGiftBoxPage>::ShowDialog() */

PennyGiftBoxPage * UISingletonDialog<PennyGiftBoxPage>::ShowDialog(void)

{
  PennyGiftBoxPage *pPVar1;
  char cVar2;
  PennyGiftBoxPage *pPVar3;
  
  pPVar1 = m_pInstance;
  pPVar3 = pPVar1;
  if (m_pInstance == (PennyGiftBoxPage *)0x0) {
    pPVar3 = ::operator_new(0x150);
    memset(pPVar3,0,0x150);
    PennyGiftBoxPage::PennyGiftBoxPage(pPVar3);
    m_pInstance = pPVar3;
    cVar2 = (**(code **)(*(long *)pPVar3 + 0x310))(pPVar3);
    pPVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (PennyGiftBoxPage *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (PennyGiftBoxPage *)0x0;
      pPVar3 = pPVar1;
    }
  }
  return pPVar3;
}


/* UISingletonDialog<PennyGiftConfig>::ShowDialog() */

PennyGiftConfig * UISingletonDialog<PennyGiftConfig>::ShowDialog(void)

{
  PennyGiftConfig *pPVar1;
  char cVar2;
  PennyGiftConfig *pPVar3;
  
  pPVar1 = m_pInstance;
  pPVar3 = pPVar1;
  if (m_pInstance == (PennyGiftConfig *)0x0) {
    pPVar3 = ::operator_new(0x170);
    memset(pPVar3,0,0x170);
    PennyGiftConfig::PennyGiftConfig(pPVar3);
    m_pInstance = pPVar3;
    cVar2 = (**(code **)(*(long *)pPVar3 + 0x310))(pPVar3);
    pPVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (PennyGiftConfig *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (PennyGiftConfig *)0x0;
      pPVar3 = pPVar1;
    }
  }
  return pPVar3;
}


/* UISingletonDialog<UITenYearRecord>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UITenYearRecord>::~UISingletonDialog(UISingletonDialog<UITenYearRecord> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069eb530;
  *(undefined ***)this = &PTR_GetClass_069eb1e0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UITenYearRecord> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UITenYearRecord>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UITenYearRecord>::~UISingletonDialog(UISingletonDialog<UITenYearRecord> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UITenYearRecord>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UITenYearRecord>::UISingletonDialog(UISingletonDialog<UITenYearRecord> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_069eb1e0;
  *(undefined **)(this + 0xd8) = &DAT_069eb530;
  return;
}


/* UISingletonDialog<UITenYearRecord>::CloseDialog() */

void UISingletonDialog<UITenYearRecord>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UINFSLinkage>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINFSLinkage>::~UISingletonDialog(UISingletonDialog<UINFSLinkage> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069ec0b0;
  *(undefined ***)this = &PTR_GetClass_069ebd60;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UINFSLinkage> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UINFSLinkage>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UINFSLinkage>::~UISingletonDialog(UISingletonDialog<UINFSLinkage> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UINFSLinkage>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UINFSLinkage>::UISingletonDialog(UISingletonDialog<UINFSLinkage> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_069ebd60;
  *(undefined **)(this + 0xd8) = &DAT_069ec0b0;
  return;
}


/* UISingletonDialog<UINFSLinkage>::CloseDialog() */

void UISingletonDialog<UINFSLinkage>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UINFSLinkage>::GetSingletonPtr() */

undefined8 UISingletonDialog<UINFSLinkage>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UITourismOctober>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UITourismOctober>::~UISingletonDialog(UISingletonDialog<UITourismOctober> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069ed830;
  *(undefined ***)this = &PTR_GetClass_069ed4e0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UITourismOctober> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UITourismOctober>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UITourismOctober>::~UISingletonDialog(UISingletonDialog<UITourismOctober> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UITourismOctoberSharedDetail>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UITourismOctoberSharedDetail>::~UISingletonDialog
          (UISingletonDialog<UITourismOctoberSharedDetail> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069edbd0;
  *(undefined ***)this = &PTR_GetClass_069ed880;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UITourismOctoberSharedDetail> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UITourismOctoberSharedDetail>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UITourismOctoberSharedDetail>::~UISingletonDialog
          (UISingletonDialog<UITourismOctoberSharedDetail> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UITourismOctoberSharedDetail>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UITourismOctoberSharedDetail>::UISingletonDialog
          (UISingletonDialog<UITourismOctoberSharedDetail> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_069ed880;
  *(undefined **)(this + 0xd8) = &DAT_069edbd0;
  return;
}


/* UISingletonDialog<UITourismOctober>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UITourismOctober>::UISingletonDialog(UISingletonDialog<UITourismOctober> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_069ed4e0;
  *(undefined **)(this + 0xd8) = &DAT_069ed830;
  return;
}


/* UISingletonDialog<UITourismOctober>::CloseDialog() */

void UISingletonDialog<UITourismOctober>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UITourismOctober>::GetSingletonPtr() */

undefined8 UISingletonDialog<UITourismOctober>::GetSingletonPtr(void)

{
  return m_pInstance;
}


void UISingletonDialog<CommonRewardDisplay>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


void UISingletonDialog<CommonRewardDisplay>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UITourismOctoberSharedDetail>::CloseDialog() */

void UISingletonDialog<UITourismOctoberSharedDetail>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UITourismOctoberSharedDetail>::ShowDialog() */

UITourismOctoberSharedDetail * UISingletonDialog<UITourismOctoberSharedDetail>::ShowDialog(void)

{
  UITourismOctoberSharedDetail *pUVar1;
  char cVar2;
  UITourismOctoberSharedDetail *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UITourismOctoberSharedDetail *)0x0) {
    pUVar3 = ::operator_new(0x1c8);
    UITourismOctoberSharedDetail::UITourismOctoberSharedDetail(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UITourismOctoberSharedDetail *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UITourismOctoberSharedDetail *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIPartyAssist>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPartyAssist>::~UISingletonDialog(UISingletonDialog<UIPartyAssist> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069efad0;
  *(undefined ***)this = &PTR_GetClass_069ef780;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIPartyAssist> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIPartyAssist>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPartyAssist>::~UISingletonDialog(UISingletonDialog<UIPartyAssist> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIPartyAssistWishingPoolSelect>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPartyAssistWishingPoolSelect>::~UISingletonDialog
          (UISingletonDialog<UIPartyAssistWishingPoolSelect> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069efe90;
  *(undefined ***)this = &PTR_GetClass_069efb40;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIPartyAssistWishingPoolSelect> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIPartyAssistWishingPoolSelect>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPartyAssistWishingPoolSelect>::~UISingletonDialog
          (UISingletonDialog<UIPartyAssistWishingPoolSelect> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIPartyAssist>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPartyAssist>::UISingletonDialog(UISingletonDialog<UIPartyAssist> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_069ef780;
  *(undefined **)(this + 0xd8) = &DAT_069efad0;
  return;
}


/* UISingletonDialog<UIPartyAssist>::CloseDialog() */

void UISingletonDialog<UIPartyAssist>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIPartyAssistWishingPoolSelect>::CloseDialog() */

void UISingletonDialog<UIPartyAssistWishingPoolSelect>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIPartyAssistWishingPoolSelect>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIPartyAssistWishingPoolSelect>::UISingletonDialog
          (UISingletonDialog<UIPartyAssistWishingPoolSelect> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_069efb40;
  *(undefined **)(this + 0xd8) = &DAT_069efe90;
  return;
}


/* UISingletonDialog<UIPartyAssistWishingPoolSelect>::ShowDialog() */

UIPartyAssistWishingPoolSelect * UISingletonDialog<UIPartyAssistWishingPoolSelect>::ShowDialog(void)

{
  UIPartyAssistWishingPoolSelect *pUVar1;
  char cVar2;
  UIPartyAssistWishingPoolSelect *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIPartyAssistWishingPoolSelect *)0x0) {
    pUVar3 = ::operator_new(0x158);
    memset(pUVar3,0,0x158);
    UIPartyAssistWishingPoolSelect::UIPartyAssistWishingPoolSelect(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIPartyAssistWishingPoolSelect *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIPartyAssistWishingPoolSelect *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UILuckyChest>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UILuckyChest>::~UISingletonDialog(UISingletonDialog<UILuckyChest> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069f26e0;
  *(undefined ***)this = &PTR_GetClass_069f2390;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UILuckyChest> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UILuckyChest>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UILuckyChest>::~UISingletonDialog(UISingletonDialog<UILuckyChest> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<CommonRewardDisplayShare>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<CommonRewardDisplayShare>::~UISingletonDialog
          (UISingletonDialog<CommonRewardDisplayShare> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069f2e30;
  *(undefined ***)this = &PTR_GetClass_069f2ae0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<CommonRewardDisplayShare> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<CommonRewardDisplayShare>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<CommonRewardDisplayShare>::~UISingletonDialog
          (UISingletonDialog<CommonRewardDisplayShare> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<ActivityCollectionLuckyChest>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<ActivityCollectionLuckyChest>::~UISingletonDialog
          (UISingletonDialog<ActivityCollectionLuckyChest> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069f2340;
  *(undefined ***)this = &PTR_GetClass_069f1ff0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<ActivityCollectionLuckyChest> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<ActivityCollectionLuckyChest>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<ActivityCollectionLuckyChest>::~UISingletonDialog
          (UISingletonDialog<ActivityCollectionLuckyChest> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UILuckyChest>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UILuckyChest>::UISingletonDialog(UISingletonDialog<UILuckyChest> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_069f2390;
  *(undefined **)(this + 0xd8) = &DAT_069f26e0;
  return;
}


/* UISingletonDialog<UILuckyChest>::CloseDialog() */

void UISingletonDialog<UILuckyChest>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<CommonRewardDisplayShare>::UISingletonDialog() */

void __thiscall
UISingletonDialog<CommonRewardDisplayShare>::UISingletonDialog
          (UISingletonDialog<CommonRewardDisplayShare> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_069f2ae0;
  *(undefined **)(this + 0xd8) = &DAT_069f2e30;
  return;
}


/* UISingletonDialog<CommonRewardDisplayShare>::CloseDialog() */

void UISingletonDialog<CommonRewardDisplayShare>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


void UISingletonDialog<CommonRewardDisplayShare>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


void UISingletonDialog<CommonRewardDisplayShare>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<ActivityCollectionLuckyChest>::UISingletonDialog() */

void __thiscall
UISingletonDialog<ActivityCollectionLuckyChest>::UISingletonDialog
          (UISingletonDialog<ActivityCollectionLuckyChest> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_069f1ff0;
  *(undefined **)(this + 0xd8) = &DAT_069f2340;
  return;
}


/* UISingletonDialog<CommonRewardDisplayShare>::ShowDialog() */

CommonRewardDisplayShare * UISingletonDialog<CommonRewardDisplayShare>::ShowDialog(void)

{
  CommonRewardDisplayShare *pCVar1;
  char cVar2;
  CommonRewardDisplayShare *pCVar3;
  
  pCVar1 = m_pInstance;
  pCVar3 = pCVar1;
  if (m_pInstance == (CommonRewardDisplayShare *)0x0) {
    pCVar3 = ::operator_new(0x170);
    CommonRewardDisplayShare::CommonRewardDisplayShare(pCVar3);
    m_pInstance = pCVar3;
    cVar2 = (**(code **)(*(long *)pCVar3 + 0x310))(pCVar3);
    pCVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (CommonRewardDisplayShare *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (CommonRewardDisplayShare *)0x0;
      pCVar3 = pCVar1;
    }
  }
  return pCVar3;
}


/* UISingletonDialog<UIAccumulatedLogin>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIAccumulatedLogin>::~UISingletonDialog
          (UISingletonDialog<UIAccumulatedLogin> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069f42d0;
  *(undefined ***)this = &PTR_GetClass_069f3f80;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIAccumulatedLogin> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIAccumulatedLogin>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIAccumulatedLogin>::~UISingletonDialog
          (UISingletonDialog<UIAccumulatedLogin> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIAccumulatedLogin>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIAccumulatedLogin>::UISingletonDialog
          (UISingletonDialog<UIAccumulatedLogin> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_069f3f80;
  *(undefined **)(this + 0xd8) = &DAT_069f42d0;
  return;
}


/* UISingletonDialog<UIAccumulatedLogin>::CloseDialog() */

void UISingletonDialog<UIAccumulatedLogin>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIAccumulatedLogin>::ShowDialog() */

UIAccumulatedLogin * UISingletonDialog<UIAccumulatedLogin>::ShowDialog(void)

{
  UIAccumulatedLogin *pUVar1;
  char cVar2;
  UIAccumulatedLogin *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIAccumulatedLogin *)0x0) {
    pUVar3 = ::operator_new(0x1a8);
    UIAccumulatedLogin::UIAccumulatedLogin(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIAccumulatedLogin *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIAccumulatedLogin *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<UIAutumnHarvest>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIAutumnHarvest>::~UISingletonDialog(UISingletonDialog<UIAutumnHarvest> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069f5350;
  *(undefined ***)this = &PTR_GetClass_069f5000;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIAutumnHarvest> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIAutumnHarvest>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIAutumnHarvest>::~UISingletonDialog(UISingletonDialog<UIAutumnHarvest> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIAutumnHarvestTurnPagesList>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIAutumnHarvestTurnPagesList>::~UISingletonDialog
          (UISingletonDialog<UIAutumnHarvestTurnPagesList> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069f56f0;
  *(undefined ***)this = &PTR_GetClass_069f53a0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<UIAutumnHarvestTurnPagesList> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<UIAutumnHarvestTurnPagesList>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<UIAutumnHarvestTurnPagesList>::~UISingletonDialog
          (UISingletonDialog<UIAutumnHarvestTurnPagesList> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<UIAutumnHarvest>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIAutumnHarvest>::UISingletonDialog(UISingletonDialog<UIAutumnHarvest> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_069f5000;
  *(undefined **)(this + 0xd8) = &DAT_069f5350;
  return;
}


/* UISingletonDialog<UIAutumnHarvest>::CloseDialog() */

void UISingletonDialog<UIAutumnHarvest>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIAutumnHarvest>::GetSingletonPtr() */

undefined8 UISingletonDialog<UIAutumnHarvest>::GetSingletonPtr(void)

{
  return m_pInstance;
}


/* UISingletonDialog<UIAutumnHarvestTurnPagesList>::CloseDialog() */

void UISingletonDialog<UIAutumnHarvestTurnPagesList>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<UIAutumnHarvestTurnPagesList>::UISingletonDialog() */

void __thiscall
UISingletonDialog<UIAutumnHarvestTurnPagesList>::UISingletonDialog
          (UISingletonDialog<UIAutumnHarvestTurnPagesList> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_069f53a0;
  *(undefined **)(this + 0xd8) = &DAT_069f56f0;
  return;
}


/* UISingletonDialog<UIAutumnHarvestTurnPagesList>::ShowDialog() */

UIAutumnHarvestTurnPagesList * UISingletonDialog<UIAutumnHarvestTurnPagesList>::ShowDialog(void)

{
  UIAutumnHarvestTurnPagesList *pUVar1;
  char cVar2;
  UIAutumnHarvestTurnPagesList *pUVar3;
  
  pUVar1 = m_pInstance;
  pUVar3 = pUVar1;
  if (m_pInstance == (UIAutumnHarvestTurnPagesList *)0x0) {
    pUVar3 = ::operator_new(0x160);
    memset(pUVar3,0,0x160);
    UIAutumnHarvestTurnPagesList::UIAutumnHarvestTurnPagesList(pUVar3);
    m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (UIAutumnHarvestTurnPagesList *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (UIAutumnHarvestTurnPagesList *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UISingletonDialog<MoreOptionsShopItem>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<MoreOptionsShopItem>::~UISingletonDialog
          (UISingletonDialog<MoreOptionsShopItem> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06a27280;
  *(undefined ***)this = &PTR_GetClass_06a26f30;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<MoreOptionsShopItem> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<MoreOptionsShopItem>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<MoreOptionsShopItem>::~UISingletonDialog
          (UISingletonDialog<MoreOptionsShopItem> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<CommonRewardDisplay>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<CommonRewardDisplay>::~UISingletonDialog
          (UISingletonDialog<CommonRewardDisplay> *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06a27620;
  *(undefined ***)this = &PTR_GetClass_06a272d0;
  if (m_pInstance != this) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
  m_pInstance = (UISingletonDialog<CommonRewardDisplay> *)0x0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UISingletonDialog<CommonRewardDisplay>::~UISingletonDialog() */

void __thiscall
UISingletonDialog<CommonRewardDisplay>::~UISingletonDialog
          (UISingletonDialog<CommonRewardDisplay> *this)

{
  ~UISingletonDialog(this);
  AK::FreeHook(this);
  return;
}


/* UISingletonDialog<MoreOptionsShopItem>::UISingletonDialog() */

void __thiscall
UISingletonDialog<MoreOptionsShopItem>::UISingletonDialog
          (UISingletonDialog<MoreOptionsShopItem> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06a26f30;
  *(undefined **)(this + 0xd8) = &DAT_06a27280;
  return;
}


/* UISingletonDialog<CommonRewardDisplay>::UISingletonDialog() */

void __thiscall
UISingletonDialog<CommonRewardDisplay>::UISingletonDialog
          (UISingletonDialog<CommonRewardDisplay> *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_06a272d0;
  *(undefined **)(this + 0xd8) = &DAT_06a27620;
  return;
}


void UISingletonDialog<CommonRewardDisplay>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


void UISingletonDialog<CommonRewardDisplay>::CloseDialog(void)

{
  if (m_pInstance != (long *)0x0) {
    (**(code **)(*m_pInstance + 0x318))();
    m_pInstance = (long *)0x0;
  }
  return;
}


/* UISingletonDialog<PVZ1ModeAchievement>::ShowDialog() */

PVZ1ModeAchievement * UISingletonDialog<PVZ1ModeAchievement>::ShowDialog(void)

{
  PVZ1ModeAchievement *pPVar1;
  char cVar2;
  PVZ1ModeAchievement *pPVar3;
  
  pPVar1 = m_pInstance;
  pPVar3 = pPVar1;
  if (m_pInstance == (PVZ1ModeAchievement *)0x0) {
    pPVar3 = ::operator_new(0x160);
    PVZ1ModeAchievement::PVZ1ModeAchievement(pPVar3);
    m_pInstance = pPVar3;
    cVar2 = (**(code **)(*(long *)pPVar3 + 0x310))(pPVar3);
    pPVar3 = m_pInstance;
    if (cVar2 == '\0') {
      if (m_pInstance != (PVZ1ModeAchievement *)0x0) {
        (**(code **)(*(long *)m_pInstance + 0x18))();
      }
      m_pInstance = (PVZ1ModeAchievement *)0x0;
      pPVar3 = pPVar1;
    }
  }
  return pPVar3;
}

