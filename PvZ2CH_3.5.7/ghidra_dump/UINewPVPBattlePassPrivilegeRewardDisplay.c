// Class: UINewPVPBattlePassPrivilegeRewardDisplay


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPBattlePassPrivilegeRewardDisplay::GetLayoutName() */

void __thiscall
UINewPVPBattlePassPrivilegeRewardDisplay::GetLayoutName
          (UINewPVPBattlePassPrivilegeRewardDisplay *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UINewPVPRewardDisplay");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UINewPVPBattlePassPrivilegeRewardDisplay::ButtonDepress(int) */

void __thiscall
UINewPVPBattlePassPrivilegeRewardDisplay::ButtonDepress
          (UINewPVPBattlePassPrivilegeRewardDisplay *this,int param_1)

{
  if (param_1 != 0x58) {
    return;
  }
  UISingletonDialog<UINewPVPBattlePassPrivilegeRewardDisplay>::CloseDialog();
  return;
}


/* non-virtual thunk to UINewPVPBattlePassPrivilegeRewardDisplay::ButtonDepress(int) */

void __thiscall
UINewPVPBattlePassPrivilegeRewardDisplay::ButtonDepress
          (UINewPVPBattlePassPrivilegeRewardDisplay *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* UINewPVPBattlePassPrivilegeRewardDisplay::UINewPVPBattlePassPrivilegeRewardDisplay() */

void __thiscall
UINewPVPBattlePassPrivilegeRewardDisplay::UINewPVPBattlePassPrivilegeRewardDisplay
          (UINewPVPBattlePassPrivilegeRewardDisplay *this)

{
  UISingletonDialog<UINewPVPBattlePassPrivilegeRewardDisplay>::UISingletonDialog
            ((UISingletonDialog<UINewPVPBattlePassPrivilegeRewardDisplay> *)this);
  this[0x131] = (UINewPVPBattlePassPrivilegeRewardDisplay)0x0;
  *(undefined ***)this = &PTR_GetClass_06655070;
  *(undefined **)(this + 0xd8) = &DAT_066553c0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x138));
  return;
}


/* UINewPVPBattlePassPrivilegeRewardDisplay::~UINewPVPBattlePassPrivilegeRewardDisplay() */

void __thiscall
UINewPVPBattlePassPrivilegeRewardDisplay::~UINewPVPBattlePassPrivilegeRewardDisplay
          (UINewPVPBattlePassPrivilegeRewardDisplay *this)

{
  *(undefined ***)this = &PTR_GetClass_06655070;
  *(undefined **)(this + 0xd8) = &DAT_066553c0;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x138));
  UISingletonDialog<UINewPVPBattlePassPrivilegeRewardDisplay>::~UISingletonDialog
            ((UISingletonDialog<UINewPVPBattlePassPrivilegeRewardDisplay> *)this);
  return;
}


/* UINewPVPBattlePassPrivilegeRewardDisplay::~UINewPVPBattlePassPrivilegeRewardDisplay() */

void __thiscall
UINewPVPBattlePassPrivilegeRewardDisplay::~UINewPVPBattlePassPrivilegeRewardDisplay
          (UINewPVPBattlePassPrivilegeRewardDisplay *this)

{
  ~UINewPVPBattlePassPrivilegeRewardDisplay(this);
  AK::FreeHook(this);
  return;
}


/* UINewPVPBattlePassPrivilegeRewardDisplay::InitView(std::vector<S2C_BonusInfo,
   std::allocator<S2C_BonusInfo> > const&) */

void __thiscall
UINewPVPBattlePassPrivilegeRewardDisplay::InitView
          (UINewPVPBattlePassPrivilegeRewardDisplay *this,vector *param_1)

{
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x138),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPBattlePassPrivilegeRewardDisplay::OnCreate() */

void __thiscall
UINewPVPBattlePassPrivilegeRewardDisplay::OnCreate(UINewPVPBattlePassPrivilegeRewardDisplay *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  UIWidgetBackground *pUVar7;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  string *psVar8;
  UIWidgetImage *pUVar9;
  long lVar10;
  Image *pIVar11;
  code *pcVar12;
  undefined1 auVar13 [16];
  string asStack_2a8 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_2a0 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_298 [8];
  string asStack_290 [16];
  ActiveItem aAStack_280 [128];
  string asStack_200 [168];
  undefined8 local_158;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_200,"Background_0");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_200);
  std::string::~string(asStack_200);
  nop();
  *(int *)(pUVar7 + 0x48) = (*(int *)(this + 0x50) - *(int *)(pUVar7 + 0x50)) / 2;
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  NewPVPBattlePassData::NewPVPBattlePassData((NewPVPBattlePassData *)asStack_200);
  cVar1 = ActiveItem::GetDataSerialized(aAStack_280,(RtObject *)asStack_200);
  if (cVar1 != '\0') {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    iVar3 = PlantNameMapperServerID::GetInstance();
    FUN_035399e4(local_158,0);
    NameMapperBase::GetNameForId(iVar3);
    bVar2 = std::operator!=(asStack_2a8,"");
    if (bVar2) {
      cVar1 = PlayerInfo::GetIsPlantUnlocked(this_01,asStack_2a8);
      if (cVar1 == '\0') {
        psVar8 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar8);
        std::string::string(asStack_290,"UIImage_Plant");
        pUVar9 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_290);
        std::string::~string(asStack_290);
        nop();
        auVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_2a0);
        Sexy::StringToUpper((Sexy *)(auVar13._0_8_ + 8),auVar13._8_8_);
        std::operator+("IMAGE_UI_HEADSHOT_PLANT_",(string *)aRStack_298);
        pIVar11 = (Image *)StringHelper::ToImage(asStack_290,true);
        std::string::~string(asStack_290);
        std::string::~string((string *)aRStack_298);
        pcVar12 = *(code **)(*(long *)pUVar9 + 0x1a0);
        iVar3 = FUN_0353ba6c(0x5a);
        iVar4 = FUN_0353ba6c(0x6e);
        iVar5 = FUN_0353ba6c(100);
        iVar6 = FUN_0353ba6c(0x46);
        Sexy::Insets::Insets((Insets *)asStack_290,iVar3,iVar4,iVar5,iVar6);
        (*pcVar12)(pUVar9,asStack_290);
        UIWidgetImage::SetImage(pUVar9,pIVar11);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_2a0);
      }
      else {
        this[0x131] = (UINewPVPBattlePassPrivilegeRewardDisplay)0x1;
        psVar8 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar8);
        std::string::string(asStack_290,"UIImage_Plant");
        pUVar9 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_290);
        std::string::~string(asStack_290);
        nop();
        lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_298);
        pIVar11 = (Image *)StringHelper::ToImage((string *)(lVar10 + 0x40),true);
        UIWidgetImage::SetImage(pUVar9,pIVar11);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_298);
      }
    }
    std::string::~string(asStack_2a8);
  }
  NewPVPBattlePassData::~NewPVPBattlePassData((NewPVPBattlePassData *)asStack_200);
  ActiveItem::~ActiveItem(aAStack_280);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPBattlePassPrivilegeRewardDisplay::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
UINewPVPBattlePassPrivilegeRewardDisplay::DrawAll
          (UINewPVPBattlePassPrivilegeRewardDisplay *this,ModalFlags *param_1,Graphics *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  string *extraout_x1;
  ulong uVar7;
  string *extraout_x1_00;
  undefined1 auStack_2b0 [8];
  undefined1 auStack_2a8 [8];
  Insets aIStack_2a0 [16];
  string asStack_290 [16];
  ActiveItem aAStack_280 [128];
  NewPVPBattlePassData aNStack_200 [168];
  undefined8 local_158;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  NewPVPBattlePassData::NewPVPBattlePassData(aNStack_200);
  cVar1 = ActiveItem::GetDataSerialized(aAStack_280,(RtObject *)aNStack_200);
  if (cVar1 != '\0') {
    std::string::string(asStack_290,"x270");
    Sexy::ToSexyString((Sexy *)asStack_290,extraout_x1);
    std::string::~string(asStack_290);
    nop();
    iVar2 = *(int *)(this + 0x50);
    iVar3 = FUN_0353ba6c(100);
    iVar4 = FUN_0353ba6c(0x32);
    Sexy::Insets::Insets(aIStack_2a0,iVar2 / 2 + iVar3,*(int *)(this + 0x54) / 2,iVar2 / 2,iVar4);
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_32_ThickOutline)
    ;
    Sexy::Color::Color((Color *)asStack_290,4);
    WriteWordInRect(param_2,auStack_2b0,aIStack_2a0,uVar5,asStack_290,3,1);
    uVar7 = 10;
    if (this[0x131] == (UINewPVPBattlePassPrivilegeRewardDisplay)0x0) {
      lVar6 = FUN_035399e4(local_158,0);
      uVar7 = (ulong)*(uint *)(lVar6 + 4);
    }
    Sexy::StrFormat("x%d",asStack_290,uVar7);
    Sexy::ToSexyString((Sexy *)asStack_290,extraout_x1_00);
    std::string::~string(asStack_290);
    iVar2 = *(int *)(this + 0x50);
    iVar3 = FUN_0353ba6c(0x5a);
    iVar4 = FUN_0353ba6c(0x32);
    Sexy::Insets::Insets(aIStack_2a0,iVar2 / 2 - iVar3,*(int *)(this + 0x54) / 2,iVar2 / 2,iVar4);
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_32_ThickOutline)
    ;
    Sexy::Color::Color((Color *)asStack_290,4);
    WriteWordInRect(param_2,auStack_2a8,aIStack_2a0,uVar5,asStack_290,3,1);
    FUN_05476c50(auStack_2a8);
    FUN_05476c50(auStack_2b0);
  }
  NewPVPBattlePassData::~NewPVPBattlePassData(aNStack_200);
  ActiveItem::~ActiveItem(aAStack_280);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

