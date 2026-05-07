// Class: UINewPlantView_AvatarPackage


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_AvatarPackage::GetLayoutName() */

void __thiscall UINewPlantView_AvatarPackage::GetLayoutName(UINewPlantView_AvatarPackage *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UINewPlantView_AvatarPackage");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UINewPlantView_AvatarPackage::UnlockAvatar() */

void __thiscall UINewPlantView_AvatarPackage::UnlockAvatar(UINewPlantView_AvatarPackage *this)

{
  NetworkMgr *this_00;
  long *plVar1;
  
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  plVar1 = (long *)NetworkMgr::GetNewNetWorkProcess(this_00);
  (**(code **)(*plVar1 + 0x1b0))(plVar1,*(undefined4 *)(this + 0x134));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_AvatarPackage::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
UINewPlantView_AvatarPackage::DrawAll
          (UINewPlantView_AvatarPackage *this,ModalFlags *param_1,Graphics *param_2)

{
  UIWidgetText *this_00;
  undefined8 uVar1;
  undefined8 uVar2;
  int local_38 [2];
  undefined1 auStack_30 [4];
  int local_2c;
  Insets aIStack_28 [16];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  std::string::string(asStack_18,"UIText_Description");
  this_00 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  uVar1 = UIWidgetImage::GetPVZ2Image((UIWidgetImage *)this_00);
  (**(code **)(*(long *)this_00 + 0xd0))(local_38,this_00);
  (**(code **)(*(long *)this_00 + 0xd0))(auStack_30,this_00);
  Sexy::Insets::Insets
            (aIStack_28,local_38[0],local_2c,*(int *)(this_00 + 0x50),*(int *)(this_00 + 0x54));
  uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)asStack_18,4);
  WriteWordInRect(param_2,uVar1,aIStack_28,uVar2,asStack_18,3,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINewPlantView_AvatarPackage::UINewPlantView_AvatarPackage() */

void __thiscall
UINewPlantView_AvatarPackage::UINewPlantView_AvatarPackage(UINewPlantView_AvatarPackage *this)

{
  undefined *puVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  UISingletonDialog<UINewPlantView_AvatarPackage>::UISingletonDialog
            ((UISingletonDialog<UINewPlantView_AvatarPackage> *)this);
  *(undefined ***)this = &PTR_GetClass_066a3510;
  *(undefined **)(this + 0xd8) = &DAT_066a3860;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x138));
  *(undefined8 *)(this + 0x140) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x148));
  this[0x160] = (UINewPlantView_AvatarPackage)0x0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnUnlockAvatar);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<bool,int,Sexy::CBMemberTranslatorX<UINewPlantView_AvatarPackage,void(UINewPlantView_AvatarPackage::*)(bool,int)>>
            ((MessageRouter *)puVar1,Message::NotifyUnlockNewAvatar,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnExchangeAvatar);
  local_40 = local_8;
  local_50 = local_18;
  uStack_48 = uStack_10;
  MessageRouter::
  Subscribe<bool,int,Sexy::CBMemberTranslatorX<UINewPlantView_AvatarPackage,void(UINewPlantView_AvatarPackage::*)(bool,int)>>
            ((MessageRouter *)puVar1,Message::NotifyExchangeNewAvatar,&local_50);
  return;
}


/* UINewPlantView_AvatarPackage::~UINewPlantView_AvatarPackage() */

void __thiscall
UINewPlantView_AvatarPackage::~UINewPlantView_AvatarPackage(UINewPlantView_AvatarPackage *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066a3860;
  *(undefined ***)this = &PTR_GetClass_066a3510;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,false);
  *(undefined8 *)(this + 0x140) = 0;
  std::vector<AvatarPackageItem*,std::allocator<AvatarPackageItem*>>::~vector
            ((vector<AvatarPackageItem*,std::allocator<AvatarPackageItem*>> *)(this + 0x148));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x138));
  UISingletonDialog<UINewPlantView_AvatarPackage>::~UISingletonDialog
            ((UISingletonDialog<UINewPlantView_AvatarPackage> *)this);
  return;
}


/* UINewPlantView_AvatarPackage::~UINewPlantView_AvatarPackage() */

void __thiscall
UINewPlantView_AvatarPackage::~UINewPlantView_AvatarPackage(UINewPlantView_AvatarPackage *this)

{
  ~UINewPlantView_AvatarPackage(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_AvatarPackage::FocusAvatar(int) */

void __thiscall
UINewPlantView_AvatarPackage::FocusAvatar(UINewPlantView_AvatarPackage *this,int param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  AvatarPackageItem *this_01;
  ulong uVar6;
  ProfileMgr *this_02;
  PlayerInfo *this_03;
  PVZ2UIButton *this_04;
  UIWidgetText *pUVar7;
  long *plVar8;
  PVZ2UIButton *pPVar9;
  char *pcVar10;
  int extraout_w1;
  int extraout_w1_00;
  string *extraout_x1;
  ulong uVar11;
  undefined8 uVar12;
  code *pcVar13;
  UIWidgetText *local_88;
  string asStack_70 [8];
  string asStack_68 [8];
  wstring awStack_60 [8];
  undefined4 local_58 [2];
  string asStack_50 [8];
  string asStack_48 [64];
  long local_8;
  
  uVar11 = 0;
  uVar12 = *(undefined8 *)(this + 0x148);
  local_8 = ___stack_chk_guard;
  lVar4 = FUN_03813b98(uVar12,*(undefined8 *)(this + 0x150));
  if (lVar4 != 0) {
    do {
      puVar5 = (undefined8 *)FUN_03813ba4(uVar12,uVar11);
      this_01 = (AvatarPackageItem *)*puVar5;
      if (*(int *)(this_01 + 0xe4) == param_1) {
        AvatarPackageItem::SelectPackageItem(this_01,true);
      }
      else {
        AvatarPackageItem::SelectPackageItem(this_01,false);
      }
      uVar11 = uVar11 + 1;
      uVar12 = *(undefined8 *)(this + 0x148);
      uVar6 = FUN_03813b98(uVar12,*(undefined8 *)(this + 0x150));
    } while (uVar11 < uVar6);
  }
  this[0x160] = (UINewPlantView_AvatarPackage)0x0;
  *(int *)(this + 0x134) = param_1;
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x138);
  this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_03 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_02);
  std::string::string(asStack_48,"UIButton_Tool");
  this_04 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_48);
  std::string::~string(asStack_48);
  nop();
  std::string::string(asStack_50,"UIText_ticket");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_50);
  plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  local_58[0] = (**(code **)(*plVar8 + 0xb0))();
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_58);
  UIWidgetText::SetString(pUVar7,asStack_48);
  std::string::~string(asStack_48);
  std::string::~string(asStack_50);
  nop();
  pcVar13 = *(code **)(*(long *)this_04 + 800);
  uVar12 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_20_Outline);
  (*pcVar13)(this_04,uVar12);
  PlantAvatarExchangeConfig::PlantAvatarExchangeConfig((PlantAvatarExchangeConfig *)asStack_48);
  uVar12 = *(undefined8 *)(this + 0x148);
  lVar4 = FUN_03813b98(uVar12,*(undefined8 *)(this + 0x150));
  if ((lVar4 != 0) && (plVar8 = (long *)FUN_03813ba4(uVar12,0), *(int *)(*plVar8 + 0xe4) == param_1)
     ) {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    cVar1 = PlantAvatarExchange::GetIsSellPlantAvatar((string *)(lVar4 + 8));
    if (cVar1 != '\0') {
      this[0x160] = (UINewPlantView_AvatarPackage)0x1;
    }
  }
  std::string::string(asStack_50,"UIButton_Exchange");
  pPVar9 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_50);
  std::string::~string(asStack_50);
  nop();
  (**(code **)(*(long *)pPVar9 + 0x158))(pPVar9,0);
  (**(code **)(*(long *)pPVar9 + 0x188))(pPVar9,1);
  cVar1 = NewAvatar::IsAvatarUnlocked(*(int *)(this + 0x134));
  if (cVar1 == '\0') {
    iVar3 = NewAvatar::GetAvatarPieceNum(*(int *)(this + 0x134));
    iVar2 = NewAvatar::GetAvatarPieceMaxNum(*(int *)(this + 0x134));
    if (iVar3 < iVar2) {
      (**(code **)(*(long *)this_04 + 0x188))(this_04,1);
      TodStringTranslate(L"[NEW_AVATAR_EXCHANGE]");
      PVZ2UIButton::SetLabelText(this_04,(wstring *)asStack_50);
      FUN_05476c50(asStack_50);
    }
    else {
      (**(code **)(*(long *)this_04 + 0x188))(this_04,0);
      TodStringTranslate(L"[NEW_AVATAR_EXCHANGE]");
      PVZ2UIButton::SetLabelText(this_04,(wstring *)asStack_50);
      FUN_05476c50(asStack_50);
      *(undefined4 *)(this_04 + 0xd4) = 0x16;
    }
    if (this[0x160] != (UINewPlantView_AvatarPackage)0x0) {
      (**(code **)(*(long *)pPVar9 + 0x158))(pPVar9,1);
      (**(code **)(*(long *)pPVar9 + 0x188))(pPVar9,0);
    }
  }
  else {
    cVar1 = PlayerInfo::IsEquipAvatar(this_03,*(int *)(this + 0x134));
    if (cVar1 == '\0') {
      (**(code **)(*(long *)this_04 + 0x188))(this_04);
      TodStringTranslate(L"[NEW_AVATAR_WEAR]");
      PVZ2UIButton::SetLabelText(this_04,(wstring *)asStack_50);
      FUN_05476c50(asStack_50);
      *(undefined4 *)(this_04 + 0xd4) = 0x21;
      this[0x160] = (UINewPlantView_AvatarPackage)0x0;
    }
    else {
      (**(code **)(*(long *)this_04 + 0x188))(this_04,0);
      TodStringTranslate(L"[NEW_AVATAR_TAKE_OFF]");
      PVZ2UIButton::SetLabelText(this_04,(wstring *)asStack_50);
      FUN_05476c50(asStack_50);
      *(undefined4 *)(this_04 + 0xd4) = 0x2c;
      this[0x160] = (UINewPlantView_AvatarPackage)0x0;
    }
  }
  std::string::string(asStack_68,"UIText_AvatarEffect");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_68);
  TodStringTranslate(L"[NEW_AVATAR_BUFF]");
  NewAvatar::GetAvatarDescription((NewAvatar *)(ulong)*(uint *)(this + 0x134),extraout_w1);
  std::operator+(awStack_60,(wstring *)local_58);
  PuzzleTip::SetTip(pUVar7,asStack_50);
  FUN_05476c50(asStack_50);
  FUN_05476c50((ActivityTypeID *)local_58);
  FUN_05476c50(awStack_60);
  std::string::~string(asStack_68);
  nop();
  std::string::string(asStack_68,"UIText_Way");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_68);
  TodStringTranslate(L"[NEW_AVATAR_GET]");
  NewAvatar::GetAvatarGetWay((NewAvatar *)(ulong)*(uint *)(this + 0x134),extraout_w1_00);
  std::operator+(awStack_60,(wstring *)local_58);
  PuzzleTip::SetTip(pUVar7,asStack_50);
  FUN_05476c50(asStack_50);
  FUN_05476c50((ActivityTypeID *)local_58);
  FUN_05476c50(awStack_60);
  std::string::~string(asStack_68);
  nop();
  iVar3 = NewAvatar::GetAvatarIndexForAvatarID(*(int *)(this + 0x134));
  FUN_03813ab8(*(long *)(this + 0x140) + 0xd4,iVar3);
  PlantDisplayBoard::DisplayNexyAction(*(PlantDisplayBoard **)(this + 0x140));
  if (iVar3 < 0) {
    std::string::string(asStack_70,"UIText_Description");
    local_88 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_70);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    uVar12 = FUN_0547429c(lVar4 + 8);
    pcVar10 = "[%s_PLANTFOOD_DESCRIPTION]";
  }
  else {
    std::string::string(asStack_70,"UIText_Description");
    local_88 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_70);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    uVar12 = FUN_0547429c(lVar4 + 8);
    pcVar10 = "[%s_AVATAR_PLANTFOOD_DESCRIPTION]";
  }
  Sexy::StrFormat(pcVar10,asStack_68,uVar12);
  Sexy::StringToUpper((Sexy *)asStack_68,extraout_x1);
  Sexy::ToWString((string *)awStack_60);
  TodStringTranslate((wstring *)local_58);
  PuzzleTip::SetTip(local_88,asStack_50);
  FUN_05476c50(asStack_50);
  FUN_05476c50((ActivityTypeID *)local_58);
  std::string::~string((string *)awStack_60);
  std::string::~string(asStack_68);
  std::string::~string(asStack_70);
  nop();
  std::string::string(asStack_50,"UIText_Description");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_50);
  (**(code **)(*(long *)pUVar7 + 0x158))(pUVar7,0);
  std::string::~string(asStack_50);
  nop();
  PlantAvatarExchangeConfig::~PlantAvatarExchangeConfig((PlantAvatarExchangeConfig *)asStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_AvatarPackage::EquipAvatar() */

void __thiscall UINewPlantView_AvatarPackage::EquipAvatar(UINewPlantView_AvatarPackage *this)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  NameMapperBase *this_02;
  long lVar3;
  PVZ2UIButton *pPVar4;
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  cVar1 = NewAvatar::IsAvatarUnlocked(*(int *)(this + 0x134));
  if (cVar1 == '\0') {
    FocusAvatar(this,*(int *)(this + 0x134));
    iVar2 = FUN_03813ad8(*(undefined4 *)(this_01 + 0x40));
  }
  else {
    PlayerInfo::EquipAvatar(this_01,*(int *)(this + 0x134));
    this_02 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x138));
    iVar2 = NameMapperBase::GetIdForName(this_02,(string *)(lVar3 + 8));
    MessageRouter::Post<int,int>
              ((MessageRouter *)gMessageRouter,Message::NewPlantView_SwitchAvatar,iVar2);
    FocusAvatar(this,*(int *)(this + 0x134));
    iVar2 = FUN_03813ad8(*(undefined4 *)(this_01 + 0x40));
  }
  if (iVar2 == 0x18) {
    LawnApp::KillGameMaskUI(gLawnApp);
    std::string::string(asStack_18,"UIButton_Close");
    pPVar4 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_18);
    std::string::~string(asStack_18);
    nop();
    std::string::string(asStack_20,"");
    Sexy::Insets::Insets((Insets *)asStack_18);
    GameMaskUI::ShowMask(pPVar4,4,asStack_20,asStack_18);
    std::string::~string(asStack_20);
    nop();
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* UINewPlantView_AvatarPackage::UnEquipAvatar() */

void __thiscall UINewPlantView_AvatarPackage::UnEquipAvatar(UINewPlantView_AvatarPackage *this)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  NameMapperBase *this_02;
  long lVar2;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  PlayerInfo::UnEquipAvatar(this_01,*(int *)(this + 0x134));
  this_02 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x138));
  iVar1 = NameMapperBase::GetIdForName(this_02,(string *)(lVar2 + 8));
  MessageRouter::Post<int,int>
            ((MessageRouter *)gMessageRouter,Message::NewPlantView_SwitchAvatar,iVar1);
  FocusAvatar(this,*(int *)(this + 0x134));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_AvatarPackage::InitView(std::string const&) */

void UINewPlantView_AvatarPackage::InitView(string *param_1)

{
  int iVar1;
  int iVar2;
  PVZ2UIButton PVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  string *psVar14;
  PVZ2UIButton *pPVar15;
  UIWidgetImage *pUVar16;
  UIWidgetBackground *pUVar17;
  UIWidgetText *pUVar18;
  UIWidgetImage *pUVar19;
  Widget *pWVar20;
  NameMapperBase *this;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  PlantNewAvatar *this_01;
  ulong uVar21;
  AvatarPackageItem *pAVar22;
  int *piVar23;
  undefined4 *puVar24;
  ProfileMgr *pPVar25;
  PlayerInfo *pPVar26;
  WorldMap *this_02;
  GachaMgr *pGVar27;
  ulong uVar28;
  long lVar29;
  long *plVar30;
  string asStack_58 [8];
  AvatarPackageItem *local_50;
  undefined4 local_48 [4];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_58);
  psVar14 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar14);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(param_1 + 0x138),(RtWeakPtr *)&local_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  std::string::string((string *)&local_20,"UIButton_Tool");
  pPVar15 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)param_1,(string *)&local_20);
  (**(code **)(*(long *)pPVar15 + 0x188))(pPVar15,1);
  std::string::~string((string *)&local_20);
  nop();
  std::string::string((string *)&local_20,"UIImage_Main");
  pUVar16 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)param_1,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  std::string::string((string *)&local_20,"Background_0");
  pUVar17 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)param_1,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  std::string::string((string *)&local_20,"UIImage_Material");
  UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)param_1,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  std::string::string((string *)&local_20,"UIText_exchange");
  pUVar18 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)param_1,(string *)&local_20);
  pUVar18[0x6d] = (UIWidgetText)0x0;
  std::string::~string((string *)&local_20);
  nop();
  std::string::string((string *)&local_20,"UIText_ticket");
  pUVar18 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)param_1,(string *)&local_20);
  pUVar18[0x6d] = (UIWidgetText)0x0;
  std::string::~string((string *)&local_20);
  nop();
  std::string::string((string *)&local_20,"UIImage_Material");
  pUVar19 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)param_1,(string *)&local_20);
  pUVar19[0x6d] = (UIWidgetImage)0x0;
  std::string::~string((string *)&local_20);
  nop();
  psVar14 = ::operator_new(0x178);
  PlantDisplayBoard::PlantDisplayBoard((PlantDisplayBoard *)psVar14,3,0);
  *(string **)(param_1 + 0x140) = psVar14;
  PlantDisplayBoard::SetPlantName(psVar14);
  iVar12 = *(int *)(pUVar17 + 0x48);
  iVar13 = *(int *)(pUVar16 + 0x48);
  plVar30 = *(long **)(param_1 + 0x140);
  iVar6 = FUN_03814ff8(0x50);
  iVar7 = FUN_03814fe4(200);
  iVar1 = *(int *)(pUVar17 + 0x4c);
  iVar2 = *(int *)(pUVar16 + 0x4c);
  iVar8 = FUN_03814ff8(0x32);
  iVar9 = FUN_03814fe4(0xa0);
  uVar10 = FUN_03814ff8(0x226);
  uVar11 = FUN_03814ff8(0x104);
  (**(code **)(*plVar30 + 0x198))
            (plVar30,(iVar12 + iVar13 + iVar6) - iVar7,(iVar1 + iVar2 + iVar8) - iVar9,uVar10,uVar11
            );
  FUN_03814138(*(long *)(param_1 + 0x140) + 0xd1);
  lVar29 = *(long *)(param_1 + 0x140);
  iVar12 = FUN_03814ff8(0x50);
  iVar13 = FUN_03814ff8(0);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_20,(float)iVar12,(float)iVar13);
  FUN_03813acc(lVar29 + 0x13c,(RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  PlantDisplayBoard::DisplayNexyAction(*(PlantDisplayBoard **)(param_1 + 0x140));
  lVar29 = *(long *)(param_1 + 0x140);
  iVar12 = FUN_03814ff8(0x14);
  iVar13 = FUN_03814ff8(0x37);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_20,(float)-iVar12,(float)-iVar13);
  FUN_03813ac0(lVar29 + 0x134,(RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  (**(code **)(*(long *)param_1 + 0x60))(param_1,*(undefined8 *)(param_1 + 0x140));
  std::string::string((string *)&local_20,"Widget_AvatarList");
  pWVar20 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)param_1,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  this = (NameMapperBase *)AvatarNameMapperServerID::GetInstance();
  local_20 = NameMapperBase::GetIdForName(this,asStack_58);
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)&local_38,(int *)&local_20);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  NewAvatar::GetListByPlantName(asStack_58,(vector *)&local_20);
  uVar28 = 0;
  while( true ) {
    uVar4 = CONCAT44(uStack_1c,local_20);
    uVar21 = FUN_03813b7c(uVar4,local_18);
    if (uVar21 <= uVar28) break;
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03813b88(uVar4,uVar28);
    this_01 = (PlantNewAvatar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    local_48[0] = PlantNewAvatar::GetNewAvatarID(this_01);
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)&local_38,(int *)local_48);
    uVar28 = uVar28 + 1;
  }
  uVar28 = 0;
  while( true ) {
    uVar4 = local_38;
    uVar21 = FUN_03813b00(local_38,local_30);
    if (uVar21 <= uVar28) break;
    pAVar22 = ::operator_new(0x110);
    AvatarPackageItem::AvatarPackageItem(pAVar22);
    local_50 = pAVar22;
    iVar12 = FUN_03814ff8(0x46);
    iVar13 = FUN_03814ff8(0x5a);
    uVar10 = FUN_03814ff8(0x3c);
    (**(code **)(*(long *)pAVar22 + 0x198))
              (pAVar22,iVar12 * (int)(uVar28 % 5),iVar13 * (int)(uVar28 / 5),uVar10,iVar13);
    piVar23 = (int *)FUN_03813b90(local_38,uVar28);
    NewAvatar::GetAvatarInfoByAvatarId(*piVar23);
    cVar5 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)local_48);
    pAVar22 = local_50;
    if (cVar5 == '\0') {
      puVar24 = (undefined4 *)FUN_03813b90(local_38,uVar28);
      AvatarPackageItem::InitView(pAVar22,*puVar24,0);
    }
    else {
      lVar29 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_48);
      pAVar22 = local_50;
      if (*(int *)(lVar29 + 0x60) == 0) {
        puVar24 = (undefined4 *)FUN_03813b90(local_38,uVar28);
        AvatarPackageItem::InitView(pAVar22,*puVar24,1);
      }
      else if (*(int *)(lVar29 + 0x60) == 1) {
        puVar24 = (undefined4 *)FUN_03813b90(local_38,uVar28);
        AvatarPackageItem::InitView(pAVar22,*puVar24,2);
      }
      else {
        puVar24 = (undefined4 *)FUN_03813b90(local_38,uVar28);
        AvatarPackageItem::InitView(pAVar22,*puVar24,0);
      }
    }
    uVar28 = uVar28 + 1;
    (**(code **)(*(long *)pWVar20 + 0x60))(pWVar20,local_50);
    std::vector<AvatarPackageItem*,std::allocator<AvatarPackageItem*>>::push_back
              ((vector<AvatarPackageItem*,std::allocator<AvatarPackageItem*>> *)(param_1 + 0x148),
               &local_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_48);
  }
  piVar23 = (int *)FUN_03813b90(uVar4,0);
  FocusAvatar((UINewPlantView_AvatarPackage *)param_1,*piVar23);
  pPVar25 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar26 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar25);
  iVar12 = FUN_03813ad8(*(undefined4 *)(pPVar26 + 0x40));
  if (iVar12 == 0x18) {
    LawnApp::KillGameMaskUI(gLawnApp);
    std::string::string((string *)local_48,"UIButton_Tool");
    pPVar15 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)param_1,(string *)local_48);
    std::string::~string((string *)local_48);
    nop();
    if (pPVar15[0x6e] == (PVZ2UIButton)0x0) {
      std::string::string((string *)&local_50,"");
      Sexy::Insets::Insets((Insets *)local_48);
      GameMaskUI::ShowMask(pPVar15,4,(string *)&local_50,(RtWeakPtr<Sexy::ResourceInfo> *)local_48);
      std::string::~string((string *)&local_50);
      nop();
    }
    else {
      this_02 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
      if (this_02 != (WorldMap *)0x0) {
        WorldMap::ForceTutorialToFinish(this_02);
      }
      PlayerInfo::CompleteTutorial(pPVar26,0x18);
      pGVar27 = (GachaMgr *)Sexy::LazySingleton<GachaMgr>::GetInstance();
      GachaMgr::SetTutorialStep(pGVar27,0);
      lVar29 = Sexy::LazySingleton<TutorialMgr>::GetInstance();
      FUN_03813adc(lVar29 + 0x10,0x19);
    }
  }
  std::string::string((string *)local_48,"UIButton_Exchange");
  pPVar15 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)param_1,(string *)local_48);
  PVar3 = pPVar15[0x6c];
  std::string::~string((string *)local_48);
  nop();
  if (PVar3 != (PVZ2UIButton)0x0) {
    pPVar25 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar26 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar25);
    iVar12 = FUN_03813ad8(*(undefined4 *)(pPVar26 + 0x40));
    if ((iVar12 == 0) &&
       (cVar5 = PlayerInfo::PlayerHasCompletedTutorial(pPVar26,0x4c), cVar5 == '\0')) {
      PlayerInfo::CompleteTutorial(pPVar26,0x4c);
      std::string::string((string *)local_48,"UIButton_Exchange");
      pPVar15 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)param_1,(string *)local_48);
      std::string::~string((string *)local_48);
      nop();
      std::string::string((string *)&local_50,"[EXCHANGEAVATAR_TUTORIAL_SLOT]");
      Sexy::Insets::Insets((Insets *)local_48);
      lVar29 = GameMaskUI::ShowMask
                         (pPVar15,2,(string *)&local_50,(RtWeakPtr<Sexy::ResourceInfo> *)local_48);
      std::string::~string((string *)&local_50);
      nop();
      uVar10 = FUN_03814ff8(0xffffff0f);
      uVar11 = FUN_03814ff8(0xffffff79);
      FUN_038143ac(lVar29 + 0x114,uVar10,uVar11);
    }
  }
  std::vector<Sexy::RtWeakPtr<PlantNewAvatar>,std::allocator<Sexy::RtWeakPtr<PlantNewAvatar>>>::
  ~vector((vector<Sexy::RtWeakPtr<PlantNewAvatar>,std::allocator<Sexy::RtWeakPtr<PlantNewAvatar>>> *
          )&local_20);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_38);
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_AvatarPackage::OnUnlockAvatar(bool, int) */

void __thiscall
UINewPlantView_AvatarPackage::OnUnlockAvatar
          (UINewPlantView_AvatarPackage *this,bool param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  LawnApp *pLVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  NameMapperBase *pNVar7;
  char *pcVar8;
  TGALogMgr *this_02;
  long lVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  string *psVar13;
  PVZ2UIButton *pPVar14;
  size_t __n;
  string asStack_70 [8];
  undefined4 local_68 [2];
  string asStack_60 [8];
  int local_58 [4];
  undefined4 local_48 [2];
  string asStack_40 [16];
  string asStack_30 [40];
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    psVar13 = ___stack_chk_guard;
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    iVar5 = FUN_03813ad8(*(undefined4 *)(this_01 + 0x40));
    if (iVar5 == 0x18) {
      LawnApp::KillGameMaskUI(gLawnApp);
      std::string::string((string *)local_48,"UIButton_Tool");
      pPVar14 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)local_48);
      std::string::~string((string *)local_48);
      nop();
      std::string::string((string *)local_58,"");
      Sexy::Insets::Insets((Insets *)local_48);
      GameMaskUI::ShowMask(pPVar14,4,(string *)local_58,(string *)local_48);
      std::string::~string((string *)local_58);
      nop();
    }
    pNVar7 = (NameMapperBase *)AvatarNameMapperServerID::GetInstance();
    cVar4 = NameMapperBase::ContainsId(pNVar7,param_2);
    if (cVar4 == '\0') {
      pNVar7 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
      cVar4 = NameMapperBase::ContainsId(pNVar7,param_2);
      if (cVar4 != '\0') {
        PlayerInfo::UnlockNewAvatar(this_01,param_2);
        NewAvatar::GetAvatarInfoByAvatarId(param_2);
        pNVar7 = (NameMapperBase *)PlantNewAvatarPieceMapper::GetInstance();
        iVar5 = PlantNewAvatarMapper::GetInstance();
        NameMapperBase::GetNameForId(iVar5);
        iVar5 = NameMapperBase::GetIdForName(pNVar7,(string *)local_48);
        std::string::~string((string *)local_48);
        iVar6 = PlayerInfo::GetNewAvatarPiecesCount(this_01,iVar5);
        lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
        uVar1 = iVar6 - *(int *)(lVar11 + 0x28);
        __n = (size_t)uVar1;
        PlayerInfo::SetNewAvatarPiecesCount(this_01,iVar5,uVar1);
        TGAPlantWarsData::TGAPlantWarsData((TGAPlantWarsData *)local_48);
        local_68[0] = 2;
        FUN_03813954((string *)local_58,local_68);
        FUN_05474278((string *)local_48,(string *)local_58);
        std::string::~string((string *)local_58);
        DString::DString((DString *)local_58,iVar5);
        pcVar8 = (char *)DString::c_str((DString *)local_58);
        std::string::append(asStack_40,pcVar8,__n);
        DString::~DString((DString *)local_58);
        lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
        DString::DString((DString *)local_58,*(int *)(lVar11 + 0x28));
        pcVar8 = (char *)DString::c_str((DString *)local_58);
        std::string::append(asStack_30,pcVar8,__n);
        DString::~DString((DString *)local_58);
        this_02 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
        TGALogMgr::LogDecorateData(this_02,(TGALogPlantDecorate *)local_48);
        pLVar3 = gLawnApp;
        psVar13 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar13);
        lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
        lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
        lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
        LawnApp::ShowAvatarRewardDialog
                  (pLVar3,(string *)local_58,lVar11 + 0x48,lVar9 + 0x50,0,0,0,
                   *(undefined4 *)(lVar10 + 0x10));
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_58);
        puVar2 = gMessageRouter;
        pNVar7 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
        lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
        iVar5 = NameMapperBase::GetIdForName(pNVar7,(string *)(lVar11 + 0x18));
        MessageRouter::Post<int,int>
                  ((MessageRouter *)puVar2,Message::NewPlantView_UnlockAvatar,iVar5);
        TGAPlantWarsData::~TGAPlantWarsData((TGAPlantWarsData *)local_48);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60)
        ;
      }
    }
    else {
      iVar5 = AvatarNameMapperServerID::GetInstance();
      NameMapperBase::GetNameForId(iVar5);
      std::string::string(asStack_60,"iOS PvZ2 Avatar Store");
      std::string::string((string *)local_58,"Avatars");
      std::string::string((string *)local_48,"avatar");
      Magento::FindStoreProduct
                ((Magento *)asStack_60,(string *)local_58,(string *)local_48,asStack_70,psVar13);
      std::string::~string((string *)local_48);
      nop();
      std::string::~string((string *)local_58);
      nop();
      std::string::~string(asStack_60);
      nop();
      cVar4 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)local_68);
      if (cVar4 != '\0') {
        iVar5 = PlayerInfo::GetAvatarPiecesCount(this_01,asStack_70,0,0);
        lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_68)
        ;
        local_58[0] = iVar5 - *(int *)(lVar11 + 0x90);
        local_48[0] = 0;
        piVar12 = eastl::max_alt<int>(local_58,(int *)local_48);
        PlayerInfo::SetAvatarPieces(this_01,asStack_70,0,*piVar12,1,1);
        PlayerInfo::UnlockPlantAvatar(this_01,asStack_70,0);
        PlayerInfo::SetPlantAvatar(this_01,asStack_70,0);
        pLVar3 = gLawnApp;
        psVar13 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar13);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
        MagentoProductProps::GetLocalizedShortDescription();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
        MagentoProductProps::GetLocalizedDescription();
        LawnApp::ShowAvatarRewardDialog
                  (pLVar3,asStack_60,(string *)local_58,(string *)local_48,0,0,0,0);
        std::string::~string((string *)local_48);
        std::string::~string((string *)local_58);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60)
        ;
        puVar2 = gMessageRouter;
        pNVar7 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
        iVar5 = NameMapperBase::GetIdForName(pNVar7,asStack_70);
        MessageRouter::Post<int,int>
                  ((MessageRouter *)puVar2,Message::NewPlantView_UnlockAvatar,iVar5);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
      std::string::~string(asStack_70);
    }
    FocusAvatar(this,*(int *)(this + 0x134));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_AvatarPackage::OnExchangeAvatar(bool, int) */

void __thiscall
UINewPlantView_AvatarPackage::OnExchangeAvatar
          (UINewPlantView_AvatarPackage *this,bool param_1,int param_2)

{
  undefined *puVar1;
  LawnApp *pLVar2;
  char cVar3;
  int iVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  NameMapperBase *pNVar5;
  long lVar6;
  char *__s;
  TGALogMgr *this_02;
  long lVar7;
  long lVar8;
  string *psVar9;
  PVZ2UIButton *pPVar10;
  string *psVar11;
  string asStack_70 [8];
  undefined4 local_68 [2];
  string asStack_60 [8];
  string asStack_58 [16];
  string asStack_48 [24];
  string asStack_30 [40];
  string *local_8;
  
  psVar9 = (string *)(ulong)(uint)param_2;
  local_8 = ___stack_chk_guard;
  if (param_1) {
    psVar11 = ___stack_chk_guard;
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    iVar4 = FUN_03813ad8(*(undefined4 *)(this_01 + 0x40));
    if (iVar4 == 0x18) {
      LawnApp::KillGameMaskUI(gLawnApp);
      std::string::string(asStack_48,"UIButton_Tool");
      pPVar10 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_48);
      std::string::~string(asStack_48);
      nop();
      std::string::string(asStack_58,"");
      Sexy::Insets::Insets((Insets *)asStack_48);
      psVar9 = asStack_58;
      GameMaskUI::ShowMask(pPVar10,4,asStack_58,asStack_48);
      std::string::~string(asStack_58);
      nop();
    }
    pNVar5 = (NameMapperBase *)AvatarNameMapperServerID::GetInstance();
    cVar3 = NameMapperBase::ContainsId(pNVar5,param_2);
    if (cVar3 == '\0') {
      pNVar5 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
      cVar3 = NameMapperBase::ContainsId(pNVar5,param_2);
      if (cVar3 != '\0') {
        PlayerInfo::UnlockNewAvatar(this_01,param_2);
        NewAvatar::GetAvatarInfoByAvatarId(param_2);
        TGAPlantWarsData::TGAPlantWarsData((TGAPlantWarsData *)asStack_48);
        local_68[0] = 2;
        FUN_03813954(asStack_58,local_68);
        FUN_05474278((TGAPlantWarsData *)asStack_48,asStack_58);
        std::string::~string(asStack_58);
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
        DString::DString((DString *)asStack_58,*(int *)(lVar6 + 0x28));
        __s = (char *)DString::c_str((DString *)asStack_58);
        std::string::append(asStack_30,__s,(size_t)psVar9);
        DString::~DString((DString *)asStack_58);
        this_02 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
        TGALogMgr::LogDecorateData(this_02,(TGALogPlantDecorate *)asStack_48);
        pLVar2 = gLawnApp;
        psVar9 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar9);
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
        lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
        LawnApp::ShowAvatarRewardDialog
                  (pLVar2,asStack_58,lVar6 + 0x48,lVar7 + 0x50,0,0,0,*(undefined4 *)(lVar8 + 0x10));
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58)
        ;
        puVar1 = gMessageRouter;
        pNVar5 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
        iVar4 = NameMapperBase::GetIdForName(pNVar5,(string *)(lVar6 + 0x18));
        MessageRouter::Post<int,int>
                  ((MessageRouter *)puVar1,Message::NewPlantView_UnlockAvatar,iVar4);
        TGAPlantWarsData::~TGAPlantWarsData((TGAPlantWarsData *)asStack_48);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60)
        ;
      }
    }
    else {
      iVar4 = AvatarNameMapperServerID::GetInstance();
      NameMapperBase::GetNameForId(iVar4);
      std::string::string(asStack_60,"iOS PvZ2 Avatar Store");
      std::string::string(asStack_58,"Avatars");
      std::string::string(asStack_48,"avatar");
      Magento::FindStoreProduct((Magento *)asStack_60,asStack_58,asStack_48,asStack_70,psVar11);
      std::string::~string(asStack_48);
      nop();
      std::string::~string(asStack_58);
      nop();
      std::string::~string(asStack_60);
      nop();
      cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)local_68);
      if (cVar3 != '\0') {
        PlayerInfo::UnlockPlantAvatar(this_01,asStack_70,0);
        PlayerInfo::SetPlantAvatar(this_01,asStack_70,0);
        pLVar2 = gLawnApp;
        psVar9 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar9);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
        MagentoProductProps::GetLocalizedShortDescription();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
        MagentoProductProps::GetLocalizedDescription();
        LawnApp::ShowAvatarRewardDialog(pLVar2,asStack_60,asStack_58,asStack_48,0,0,0,0);
        std::string::~string(asStack_48);
        std::string::~string(asStack_58);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60)
        ;
        puVar1 = gMessageRouter;
        pNVar5 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
        iVar4 = NameMapperBase::GetIdForName(pNVar5,asStack_70);
        MessageRouter::Post<int,int>
                  ((MessageRouter *)puVar1,Message::NewPlantView_UnlockAvatar,iVar4);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
      std::string::~string(asStack_70);
    }
    FocusAvatar(this,*(int *)(this + 0x134));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_AvatarPackage::ExchangeAvatar(std::string) */

void __thiscall
UINewPlantView_AvatarPackage::ExchangeAvatar(UINewPlantView_AvatarPackage *this,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UINewPlantView_ExchangeAvatar *pUVar3;
  long *plVar4;
  long lVar5;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pUVar3 = (UINewPlantView_ExchangeAvatar *)
           UISingletonDialog<UINewPlantView_ExchangeAvatar>::ShowDialog();
  FUN_05475d88(asStack_10,param_2);
  uVar1 = *(undefined4 *)(this + 0x134);
  plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x138));
  uVar2 = (**(code **)(*plVar4 + 0xb0))();
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x138));
  UINewPlantView_ExchangeAvatar::InitView
            (pUVar3,asStack_10,uVar1,uVar2,*(undefined4 *)(lVar5 + 0xd0));
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_AvatarPackage::ButtonDepress(int) */

void __thiscall
UINewPlantView_AvatarPackage::ButtonDepress(UINewPlantView_AvatarPackage *this,int param_1)

{
  long lVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x58) {
    UISingletonDialog<UINewPlantView_AvatarPackage>::CloseDialog();
    MessageRouter::Post((_func_void *)gMessageRouter);
  }
  else if (param_1 == 0x16) {
    UnlockAvatar(this);
  }
  else if (param_1 == 0x21) {
    EquipAvatar(this);
  }
  else if (param_1 == 0x2c) {
    UnEquipAvatar(this);
  }
  else if (param_1 == 0x37) {
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x138));
    FUN_05475d88(asStack_10,lVar1 + 8);
    ExchangeAvatar(this,asStack_10);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UINewPlantView_AvatarPackage::ButtonDepress(int) */

void __thiscall
UINewPlantView_AvatarPackage::ButtonDepress(UINewPlantView_AvatarPackage *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

