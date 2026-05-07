// Class: GachaUI


/* GachaUI::setRewardItemList(std::vector<RewardItemData, std::allocator<RewardItemData> > const&)
    */

void GachaUI::setRewardItemList(vector *param_1)

{
  std::vector<RewardItemData,std::allocator<RewardItemData>>::operator=
            ((vector<RewardItemData,std::allocator<RewardItemData>> *)s_rewardItemList,param_1);
  return;
}


/* GachaUI::ResetGachaGeneralTime() */

void __thiscall GachaUI::ResetGachaGeneralTime(GachaUI *this)

{
  undefined8 uVar1;
  
  uVar1 = LawnApp::GetRealBeijingTime(gLawnApp);
  *(undefined8 *)(this + 0xf0) = uVar1;
  return;
}


/* GachaUI::ResetGachaSpecialTime() */

void __thiscall GachaUI::ResetGachaSpecialTime(GachaUI *this)

{
  undefined8 uVar1;
  
  uVar1 = LawnApp::GetRealBeijingTime(gLawnApp);
  *(undefined8 *)(this + 0xf8) = uVar1;
  return;
}


/* GachaUI::getGachaGlobalResult() */

ulong GachaUI::getGachaGlobalResult(void)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  lVar2 = gLawnApp;
  uVar1 = *(uint *)(gLawnApp + 0x2a04);
  if ((-1 < (int)uVar1) && (uVar5 = FUN_04a313f0(DAT_06b79b10,DAT_06b79b18), uVar5 != 0)) {
    *(uint *)(lVar2 + 0x2a04) = uVar1 + 1;
    if (uVar5 <= (ulong)(long)(int)uVar1) {
      uVar1 = 0;
    }
    return (ulong)uVar1;
  }
  uVar5 = 0;
  iVar4 = Sexy::Rand(DAT_06b79c88);
  uVar3 = DAT_06b79b10;
  uVar6 = FUN_04a313f0(DAT_06b79b10,DAT_06b79b18);
  if (uVar6 != 0) {
    do {
      puVar7 = (undefined8 *)FUN_04a313fc(uVar3,uVar5);
      if ((*(int *)*puVar7 <= iVar4) && (iVar4 < ((int *)*puVar7)[1])) {
        return uVar5 & 0xffffffff;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar6);
  }
  return 0xffffffff;
}


/* GachaUI::getGachaPlantResult() */

ulong GachaUI::getGachaPlantResult(void)

{
  undefined8 uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  iVar2 = Sexy::Rand(DAT_06b79ab8);
  uVar1 = DAT_06b79ce8;
  uVar5 = 0;
  uVar3 = FUN_04a313f0(DAT_06b79ce8,DAT_06b79cf0);
  if (uVar3 != 0) {
    do {
      puVar4 = (undefined8 *)FUN_04a313fc(uVar1,uVar5);
      if ((*(int *)*puVar4 <= iVar2) && (iVar2 < ((int *)*puVar4)[1])) {
        return uVar5 & 0xffffffff;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar3);
  }
  return 0xffffffff;
}


/* GachaUI::getGachaFreeResult() */

ulong GachaUI::getGachaFreeResult(void)

{
  undefined8 uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  iVar2 = Sexy::Rand(DAT_06b79ba8);
  uVar1 = DAT_06b79c70;
  uVar5 = 0;
  uVar3 = FUN_04a313f0(DAT_06b79c70,DAT_06b79c78);
  if (uVar3 != 0) {
    do {
      puVar4 = (undefined8 *)FUN_04a313fc(uVar1,uVar5);
      if ((*(int *)*puVar4 <= iVar2) && (iVar2 < ((int *)*puVar4)[1])) {
        return uVar5 & 0xffffffff;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar3);
  }
  return 0xffffffff;
}


/* GachaUI::DealGachaDayFirstPay(int) */

void __thiscall GachaUI::DealGachaDayFirstPay(GachaUI *this,int param_1)

{
  char cVar1;
  PlayerInfo *this_00;
  int iVar2;
  
  this_00 = (PlayerInfo *)ProfileUtils::Profile();
  if ((this_00 != (PlayerInfo *)0x0) &&
     (cVar1 = PlayerInfo::GetDayFirstPayFlag(this_00,param_1), cVar1 == '\0')) {
    if (param_1 != 1) {
      iVar2 = 0;
      if (param_1 == 2) {
        iVar2 = 0x96;
      }
      PlayerInfo::AddGems(this_00,iVar2,false);
      PlayerInfo::UpdataDayFirstPayFlag(this_00,param_1);
      return;
    }
    PlayerInfo::AddGems(this_00,0x12,false);
    PlayerInfo::UpdataDayFirstPayFlag(this_00,1);
    return;
  }
  return;
}


/* GachaUI::ClearGachaResult() */

void __thiscall GachaUI::ClearGachaResult(GachaUI *this)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  GachaRewardUI *this_00;
  undefined8 uVar5;
  
  uVar3 = 0;
  do {
    uVar5 = *(undefined8 *)(this + 0x120);
    uVar2 = FUN_04a313f0(uVar5,*(undefined8 *)(this + 0x128));
    uVar4 = uVar3;
    do {
      uVar3 = uVar4 + 1;
      if (uVar2 <= uVar4) {
        std::vector<GachaRewardUI*,std::allocator<GachaRewardUI*>>::clear
                  ((vector<GachaRewardUI*,std::allocator<GachaRewardUI*>> *)(this + 0x120));
        return;
      }
      puVar1 = (undefined8 *)FUN_04a313fc(uVar5,uVar4);
      this_00 = (GachaRewardUI *)*puVar1;
      uVar4 = uVar3;
    } while (this_00 == (GachaRewardUI *)0x0);
    GachaRewardUI::~GachaRewardUI(this_00);
    AK::FreeHook(this_00);
  } while( true );
}


/* GachaUI::TouchEnded(Sexy::Touch const&) */

void GachaUI::TouchEnded(Touch *param_1)

{
  undefined4 uVar1;
  float fVar2;
  
  if (param_1[0x15a] != (Touch)0x0) {
    param_1[0x15a] = (Touch)0x0;
    param_1[0x159] = (Touch)0x0;
    StandaloneEffect::SetVisibility(*(StandaloneEffect **)(param_1 + 0x170),false);
    StandaloneEffect::SetVisibility(*(StandaloneEffect **)(param_1 + 0x178),false);
    *(undefined4 *)(param_1 + 0x1b0) = 0x3f99999a;
    uVar1 = PVZ_T();
    *(undefined4 *)(param_1 + 0x144) = uVar1;
    fVar2 = (float)PVZ_T();
    *(float *)(param_1 + 0x148) = fVar2 + 0.3;
  }
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x04a31cb4 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* GachaUI::ShowCurrentPlant() */

void __thiscall GachaUI::ShowCurrentPlant(GachaUI *this)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined4 uVar6;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar2 = (long *)FUN_04a313fc(*(undefined8 *)(this + 0x120),(long)*(int *)(this + 0x13c));
  *(undefined1 *)(*plVar2 + 0x2e) = 1;
  cVar1 = LawnApp::IsPlatformHD(gLawnApp);
  if (cVar1 == '\0') {
    plVar2 = (long *)FUN_04a313fc(*(undefined8 *)(this + 0x120),(long)*(int *)(this + 0x13c));
    lVar3 = *plVar2;
    uVar6 = *(undefined4 *)(this + 0x150);
    auVar5 = PVZ_T();
    local_10 = 0x3e99999a;
    local_c = 0x3f000000;
    fVar4 = CurveLerp<float>(auVar5,uVar6,auVar5._0_4_,&local_10,&local_c,3);
    *(float *)(lVar3 + 0x28) = fVar4;
  }
  else {
    plVar2 = (long *)FUN_04a313fc(*(undefined8 *)(this + 0x120),(long)*(int *)(this + 0x13c));
    lVar3 = *plVar2;
    uVar6 = *(undefined4 *)(this + 0x150);
    auVar5 = PVZ_T();
    local_c = 0x3f800000;
    fVar4 = CurveLerp<float>(auVar5,uVar6,auVar5._0_4_,&local_c,&DAT_05754e30,3);
    *(float *)(lVar3 + 0x28) = fVar4;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GachaUI::ButtonDepress(int) */

GachaUI * __thiscall GachaUI::ButtonDepress(GachaUI *this,int param_1)

{
  UILimitedGacha *this_00;
  int iVar1;
  GachaUI *pGVar2;
  ActivityManager *this_01;
  long lVar3;
  GachaMgr *pGVar4;
  float fVar5;
  
  this_00 = UILimitedGacha::s_pWidgetHandler;
  if (param_1 == 0) {
    LawnApp::KillGachaUI(gLawnApp);
    this_01 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::Request(this_01,0x2a4c,false,0);
    lVar3 = Sexy::LazySingleton<GachaMgr>::GetInstance();
    iVar1 = FUN_04a313ec(*(undefined4 *)(lVar3 + 0x44));
    if (iVar1 == 1) {
      pGVar4 = (GachaMgr *)Sexy::LazySingleton<GachaMgr>::GetInstance();
      pGVar2 = (GachaUI *)GachaMgr::SetTutorialStep(pGVar4,2);
      return pGVar2;
    }
    lVar3 = Sexy::LazySingleton<GachaMgr>::GetInstance();
    this = (GachaUI *)FUN_04a313ec(*(undefined4 *)(lVar3 + 0x44));
    if ((int)this == 4) {
      LawnApp::KillGameMaskUI(gLawnApp);
      lVar3 = Sexy::LazySingleton<GachaMgr>::GetInstance();
      FUN_04a314e0(lVar3 + 0x62);
      lVar3 = Sexy::LazySingleton<TutorialMgr>::GetInstance();
      pGVar2 = (GachaUI *)FUN_04a314d4(lVar3 + 0x10);
      return pGVar2;
    }
  }
  else if (param_1 == 1) {
    if (UILimitedGacha::s_pWidgetHandler != (UILimitedGacha *)0x0) {
      fVar5 = (float)FUN_04a313e8(*(undefined4 *)(UILimitedGacha::s_pWidgetHandler + 0x144));
      pGVar2 = (GachaUI *)UILimitedGacha::DoConfirmDialog(this_00,fVar5);
      return pGVar2;
    }
    pGVar4 = (GachaMgr *)Sexy::LazySingleton<GachaMgr>::GetInstance();
    pGVar2 = (GachaUI *)GachaMgr::DrawGachaAgain(pGVar4);
    return pGVar2;
  }
  return this;
}


/* non-virtual thunk to GachaUI::ButtonDepress(int) */

void __thiscall GachaUI::ButtonDepress(GachaUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GachaUI::GachaUI(std::string const&, bool) */

void __thiscall GachaUI::GachaUI(GachaUI *this,string *param_1,bool param_2)

{
  LawnApp *pLVar1;
  long lVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined ***)this = &PTR_GetClass_069313a0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069316c8;
  FUN_05475d88(this + 0x110,param_1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x120));
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x180));
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Gacha");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Plantback");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_BigPlant");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_NewAvatar");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  this[0x11c] = (GachaUI)param_2;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  this[0x15b] = (GachaUI)0x0;
  std::vector<GachaRewardUI*,std::allocator<GachaRewardUI*>>::clear
            ((vector<GachaRewardUI*,std::allocator<GachaRewardUI*>> *)&DAT_06b79b10);
  std::vector<GachaRewardUI*,std::allocator<GachaRewardUI*>>::clear
            ((vector<GachaRewardUI*,std::allocator<GachaRewardUI*>> *)&DAT_06b79ce8);
  std::vector<GachaRewardUI*,std::allocator<GachaRewardUI*>>::clear
            ((vector<GachaRewardUI*,std::allocator<GachaRewardUI*>> *)&DAT_06b79c70);
  *(undefined8 *)(this + 0xf0) = 0;
  lVar2 = ___stack_chk_guard;
  *(undefined8 *)(this + 0xf8) = 0;
  DAT_06b79c88 = 0;
  DAT_06b79ab8 = 0;
  DAT_06b79ba8 = 0;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GachaUI::GachaUI(std::string const&, bool, GachaType) */

void __thiscall
GachaUI::GachaUI(GachaUI *this,undefined8 param_1,GachaUI param_2,undefined4 param_4)

{
  LawnApp *pLVar1;
  long lVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined ***)this = &PTR_GetClass_069313a0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069316c8;
  FUN_05475d88(this + 0x110,param_1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x120));
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x180));
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Gacha");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Plantback");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_BigPlant");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_NewAvatar");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  this[0x11c] = param_2;
  *(undefined4 *)(this + 0x118) = param_4;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  this[0x15b] = (GachaUI)0x0;
  std::vector<GachaRewardUI*,std::allocator<GachaRewardUI*>>::clear
            ((vector<GachaRewardUI*,std::allocator<GachaRewardUI*>> *)&DAT_06b79b10);
  std::vector<GachaRewardUI*,std::allocator<GachaRewardUI*>>::clear
            ((vector<GachaRewardUI*,std::allocator<GachaRewardUI*>> *)&DAT_06b79ce8);
  std::vector<GachaRewardUI*,std::allocator<GachaRewardUI*>>::clear
            ((vector<GachaRewardUI*,std::allocator<GachaRewardUI*>> *)&DAT_06b79c70);
  *(undefined8 *)(this + 0xf0) = 0;
  lVar2 = ___stack_chk_guard;
  *(undefined8 *)(this + 0xf8) = 0;
  DAT_06b79c88 = 0;
  DAT_06b79ab8 = 0;
  DAT_06b79ba8 = 0;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GachaUI::~GachaUI() */

void __thiscall GachaUI::~GachaUI(GachaUI *this)

{
  LawnApp *pLVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  GachaRewardUI *pGVar6;
  undefined8 uVar7;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_069313a0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069316c8;
  pLVar1 = gLawnApp;
  uVar5 = 0;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Gacha");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Plantback");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_BigPlant");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_NewAvatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  uVar7 = DAT_06b79b10;
  uVar2 = FUN_04a313f0(DAT_06b79b10,DAT_06b79b18);
  if (uVar2 != 0) {
    do {
      puVar3 = (undefined8 *)FUN_04a313fc(uVar7,uVar5);
      pGVar6 = (GachaRewardUI *)*puVar3;
      if (pGVar6 != (GachaRewardUI *)0x0) {
        GachaRewardUI::~GachaRewardUI(pGVar6);
        AK::FreeHook(pGVar6);
        uVar7 = DAT_06b79b10;
        uVar2 = FUN_04a313f0(DAT_06b79b10,DAT_06b79b18);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  uVar5 = 0;
  std::vector<GachaRewardUI*,std::allocator<GachaRewardUI*>>::clear
            ((vector<GachaRewardUI*,std::allocator<GachaRewardUI*>> *)&DAT_06b79b10);
  uVar7 = DAT_06b79ce8;
  uVar2 = FUN_04a313f0(DAT_06b79ce8,DAT_06b79cf0);
  if (uVar2 != 0) {
    do {
      puVar3 = (undefined8 *)FUN_04a313fc(uVar7,uVar5);
      pGVar6 = (GachaRewardUI *)*puVar3;
      if (pGVar6 != (GachaRewardUI *)0x0) {
        GachaRewardUI::~GachaRewardUI(pGVar6);
        AK::FreeHook(pGVar6);
        uVar7 = DAT_06b79ce8;
        uVar2 = FUN_04a313f0(DAT_06b79ce8,DAT_06b79cf0);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  uVar5 = 0;
  std::vector<GachaRewardUI*,std::allocator<GachaRewardUI*>>::clear
            ((vector<GachaRewardUI*,std::allocator<GachaRewardUI*>> *)&DAT_06b79ce8);
  uVar7 = DAT_06b79c70;
  uVar2 = FUN_04a313f0(DAT_06b79c70,DAT_06b79c78);
  if (uVar2 != 0) {
    do {
      puVar3 = (undefined8 *)FUN_04a313fc(uVar7,uVar5);
      pGVar6 = (GachaRewardUI *)*puVar3;
      if (pGVar6 != (GachaRewardUI *)0x0) {
        GachaRewardUI::~GachaRewardUI(pGVar6);
        AK::FreeHook(pGVar6);
        uVar7 = DAT_06b79c70;
        uVar2 = FUN_04a313f0(DAT_06b79c70,DAT_06b79c78);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  std::vector<GachaRewardUI*,std::allocator<GachaRewardUI*>>::clear
            ((vector<GachaRewardUI*,std::allocator<GachaRewardUI*>> *)&DAT_06b79c70);
  if (*(long **)(this + 0x160) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x160) + 0x18))();
    *(undefined8 *)(this + 0x160) = 0;
  }
  if (*(long **)(this + 0x168) == (long *)0x0) {
    plVar4 = *(long **)(this + 0x170);
  }
  else {
    (**(code **)(**(long **)(this + 0x168) + 0x18))();
    *(undefined8 *)(this + 0x168) = 0;
    plVar4 = *(long **)(this + 0x170);
  }
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
    *(undefined8 *)(this + 0x170) = 0;
  }
  if (*(long **)(this + 0x178) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x178) + 0x18))();
    *(undefined8 *)(this + 0x178) = 0;
  }
  uVar7 = *(undefined8 *)(this + 0x180);
  uVar5 = 0;
  uVar2 = FUN_04a31404(uVar7,*(undefined8 *)(this + 0x188));
  if (uVar2 != 0) {
    do {
      plVar4 = (long *)FUN_04a31410(uVar7,uVar5);
      if ((long *)*plVar4 != (long *)0x0) {
        (**(code **)(*(long *)*plVar4 + 0x18))();
        puVar3 = (undefined8 *)FUN_04a31410(*(undefined8 *)(this + 0x180),uVar5);
        *puVar3 = 0;
        uVar7 = *(undefined8 *)(this + 0x180);
        uVar2 = FUN_04a31404(uVar7,*(undefined8 *)(this + 0x188));
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  std::vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>>::~vector
            ((vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>> *)(this + 0x180));
  std::vector<GachaRewardUI*,std::allocator<GachaRewardUI*>>::~vector
            ((vector<GachaRewardUI*,std::allocator<GachaRewardUI*>> *)(this + 0x120));
  std::string::~string((string *)(this + 0x110));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GachaUI::~GachaUI() */

void __thiscall GachaUI::~GachaUI(GachaUI *this)

{
  ~GachaUI(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GachaUI::GetPlantNameByType(std::string const&, std::string const&) */

void __thiscall GachaUI::GetPlantNameByType(GachaUI *this,string *param_1,string *param_2)

{
  bool bVar1;
  char cVar2;
  string *psVar3;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0();
  bVar1 = std::operator==((string *)this,"plant");
  if ((bVar1) || (bVar1 = std::operator==((string *)this,"accessory"), bVar1)) {
    thunk_FUN_05475e00();
  }
  else {
    bVar1 = std::operator==((string *)this,"plant_piece");
    if (bVar1) {
      psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr()
      ;
      ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar3);
      cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
        nop();
        thunk_FUN_05475e00();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        goto LAB_04a32a44;
      }
    }
    else {
      bVar1 = std::operator==((string *)this,"avatar_piece");
      if (bVar1) {
        psVar3 = (string *)
                 Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
        ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar3);
        cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
        if (cVar2 != '\0') {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
          nop();
          thunk_FUN_05475e00();
        }
      }
      else {
        bVar1 = std::operator==((string *)this,"accessory_piece");
        if (!bVar1) goto LAB_04a32a44;
        psVar3 = (string *)
                 Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
        ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar3);
        cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
        if (cVar2 != '\0') {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
          nop();
          thunk_FUN_05475e00();
        }
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
LAB_04a32a44:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GachaUI::DrawPlantID_Debug(Sexy::Graphics*, GachaRewardUI*) */

void __thiscall GachaUI::DrawPlantID_Debug(GachaUI *this,Graphics *param_1,GachaRewardUI *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  NameMapperBase *this_00;
  ulong uVar7;
  PrimeTypeface *this_01;
  string *psVar8;
  float fVar9;
  float fVar10;
  PrimeTypeface *pPVar11;
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_30,"ID:null");
  nop();
  psVar8 = asStack_18;
  std::string::string(asStack_28,"Name:null");
  nop();
  if (param_2 != (GachaRewardUI *)0x0) {
    GetPlantNameByType((GachaUI *)(param_2 + 0x10),(string *)(param_2 + 0x18),psVar8);
    cVar2 = FUN_0547419c(asStack_20);
    uVar7 = 0;
    if (cVar2 == '\0') {
      this_00 = (NameMapperBase *)PlantNameMapper::GetInstance();
      uVar7 = NameMapperBase::GetIdForName(this_00,asStack_20);
      uVar7 = uVar7 & 0xffffffff;
    }
    Sexy::StrFormat("ID:%d",asStack_18,uVar7);
    FUN_05474278(asStack_30,asStack_18);
    std::string::~string(asStack_18);
    thunk_FUN_05475e00(asStack_28,(string *)(param_2 + 0x18));
    std::string::~string(asStack_20);
  }
  if (PrimeText_Game::Typeface_CafeteriaBlack_16 == (PrimeText_PotentialTypeface *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_16);
  }
  iVar3 = FUN_04a314f8(100);
  iVar5 = *(int *)(param_2 + 0x20);
  iVar1 = *(int *)(param_2 + 0x24);
  iVar4 = FUN_04a314f8(200);
  Sexy::ToWString(asStack_30);
  Sexy::Color::Color((Color *)asStack_18,4);
  Sexy::PrimeTypeface::DrawString_Line
            ((PrimeTypeface *)(float)(iVar5 - iVar3),(float)iVar1,(float)iVar4,uVar6,param_1,
             asStack_20,1,asStack_18,0);
  FUN_05476c50(asStack_20);
  if (PrimeText_Game::Typeface_CafeteriaBlack_16 == (PrimeText_PotentialTypeface *)0x0) {
    iVar5 = FUN_04a314f8(100);
    fVar10 = (float)*(int *)(param_2 + 0x24);
    pPVar11._0_4_ = (PrimeTypeface *)(float)(*(int *)(param_2 + 0x20) - iVar5);
    this_01 = (PrimeTypeface *)0x0;
    uVar6 = 0;
  }
  else {
    uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_16);
    iVar5 = FUN_04a314f8(100);
    this_01 = (PrimeTypeface *)0x0;
    fVar10 = (float)*(int *)(param_2 + 0x24);
    pPVar11._0_4_ = (PrimeTypeface *)(float)(*(int *)(param_2 + 0x20) - iVar5);
    if (PrimeText_Game::Typeface_CafeteriaBlack_16 != (PrimeText_PotentialTypeface *)0x0) {
      this_01 = (PrimeTypeface *)
                PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_16);
    }
  }
  fVar9 = (float)Sexy::PrimeTypeface::GetLineHeight(this_01);
  iVar5 = FUN_04a314f8(200);
  Sexy::ToWString(asStack_28);
  Sexy::Color::Color((Color *)asStack_18,4);
  Sexy::PrimeTypeface::DrawString_Line
            (pPVar11._0_4_,fVar9 + fVar10,(float)iVar5,uVar6,param_1,asStack_20,1,asStack_18,0);
  FUN_05476c50(asStack_20);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GachaUI::getGachaRewardName(int) */

void GachaUI::getGachaRewardName(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  string *psVar6;
  Magento *this;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar7;
  long lVar8;
  ulong uVar9;
  Magento *this_00;
  Magento *extraout_x0;
  wchar_t *pwVar10;
  long extraout_x0_00;
  long extraout_x0_01;
  NameMapperBase *pNVar11;
  Magento *extraout_x0_02;
  Magento *extraout_x0_03;
  PlantAccessoryMgr *this_01;
  long extraout_x0_04;
  int in_w1;
  string *extraout_x1;
  string *extraout_x1_00;
  ulong uVar12;
  long lVar13;
  string asStack_48 [8];
  string asStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  Sexy aSStack_20 [8];
  wstring awStack_18 [8];
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  uVar4 = (ulong)(uint)param_1;
  lVar13 = (long)in_w1;
  local_8 = ___stack_chk_guard;
  FUN_05478178();
  nop();
  Set8BytesTo0(asStack_48);
  plVar5 = (long *)FUN_04a313fc(*(undefined8 *)(uVar4 + 0x120),lVar13);
  bVar1 = std::operator==((string *)(*plVar5 + 0x10),"plant");
  if (bVar1) {
    psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    FUN_04a313fc(*(undefined8 *)(uVar4 + 0x120),lVar13);
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar6);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
    if (cVar2 != '\0') {
      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      thunk_FUN_05475e00(asStack_48,lVar8 + 8);
    }
    this = (Magento *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                     ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  else {
    plVar5 = (long *)FUN_04a313fc(*(undefined8 *)(uVar4 + 0x120),lVar13);
    bVar1 = std::operator==((string *)(*plVar5 + 0x10),"plant_piece");
    if (bVar1) {
      psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr()
      ;
      FUN_04a313fc(*(undefined8 *)(uVar4 + 0x120),lVar13);
      ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar6);
      cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
        nop();
        thunk_FUN_05475e00(asStack_48,extraout_x0_01 + 0x98);
      }
    }
    else {
      plVar5 = (long *)FUN_04a313fc(*(undefined8 *)(uVar4 + 0x120),lVar13);
      bVar1 = std::operator==((string *)(*plVar5 + 0x10),"avatar_piece");
      if (!bVar1) {
        plVar5 = (long *)FUN_04a313fc(*(undefined8 *)(uVar4 + 0x120),lVar13);
        bVar1 = std::operator==((string *)(*plVar5 + 0x10),"avatar");
        if (bVar1) {
          plVar5 = (long *)FUN_04a313fc(*(undefined8 *)(uVar4 + 0x120),lVar13);
          FUN_05475d88(asStack_40,*plVar5 + 0x18);
          FUN_05475ffc(aRStack_10,asStack_40,7,0xffffffffffffffff);
          FUN_05474278(asStack_48,aRStack_10);
          std::string::~string((string *)aRStack_10);
          Magento::GetPlantLevelUp(this_00);
          uVar9 = 0;
          do {
            uVar12 = uVar9;
            lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
            uVar9 = FUN_04a31458(*(undefined8 *)(lVar8 + 0x60),*(undefined8 *)(lVar8 + 0x68));
            if (uVar9 <= uVar12) goto LAB_04a331a0;
            lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
            pRVar7 = (RtWeakPtr<Sexy::ResourceInfo> *)
                     FUN_04a31464(*(undefined8 *)(lVar8 + 0x60),uVar12);
            lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar7);
            cVar2 = std::operator==((string *)(lVar8 + 0x80),asStack_48);
            uVar9 = uVar12 + 1;
          } while (cVar2 == '\0');
          lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
          pRVar7 = (RtWeakPtr<Sexy::ResourceInfo> *)
                   FUN_04a31464(*(undefined8 *)(lVar8 + 0x60),uVar12);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar7);
          MagentoProductProps::GetLocalizedShortDescription();
          Sexy::UTF8StringToWString((Sexy *)aRStack_30,extraout_x1_00);
          TodStringTranslate((wstring *)aRStack_28);
          TodStringTranslate(L"[AVATAR]");
          std::operator+((wstring *)aSStack_20,awStack_18);
          FUN_054766c8();
          FUN_05476c50(aRStack_10);
          FUN_05476c50(awStack_18);
          FUN_05476c50((wstring *)aSStack_20);
          FUN_05476c50((wstring *)aRStack_28);
          std::string::~string((string *)aRStack_30);
LAB_04a331a0:
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
          std::string::~string(asStack_40);
          this = extraout_x0;
        }
        else {
          plVar5 = (long *)FUN_04a313fc(*(undefined8 *)(uVar4 + 0x120),lVar13);
          bVar1 = std::operator==((string *)(*plVar5 + 0x10),"new_avatar");
          if (bVar1) {
            plVar5 = (long *)FUN_04a313fc(*(undefined8 *)(uVar4 + 0x120),lVar13);
            FUN_05475d88((string *)aRStack_30,*plVar5 + 0x18);
            FUN_05475ffc((string *)aRStack_28,(string *)aRStack_30,0xb,0xffffffffffffffff);
            pNVar11 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
            iVar3 = NameMapperBase::GetIdForName(pNVar11,(string *)aRStack_28);
            NewAvatar::GetAvatarInfoByAvatarId(iVar3);
            lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aSStack_20);
            Sexy::ToWString((string *)(lVar8 + 0x48));
            TodStringTranslate(awStack_18);
            FUN_054766c8();
            FUN_05476c50(aRStack_10);
            FUN_05476c50(awStack_18);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aSStack_20);
            std::string::~string((string *)aRStack_28);
            std::string::~string((string *)aRStack_30);
            this = extraout_x0_03;
          }
          else {
            plVar5 = (long *)FUN_04a313fc(*(undefined8 *)(uVar4 + 0x120),lVar13);
            bVar1 = std::operator==((string *)(*plVar5 + 0x10),"new_avatar_piece");
            if (bVar1) {
              plVar5 = (long *)FUN_04a313fc(*(undefined8 *)(uVar4 + 0x120),lVar13);
              FUN_05475d88(asStack_40,*plVar5 + 0x18);
              FUN_05475ffc((string *)aRStack_38,asStack_40,0x11,0xffffffffffffffff);
              pNVar11 = (NameMapperBase *)PlantNewAvatarPieceMapper::GetInstance();
              iVar3 = NameMapperBase::GetIdForName(pNVar11,(string *)aRStack_38);
              NewAvatar::GetAvatarInfoByAvatarPieceId(iVar3);
              lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
              Sexy::ToWString((string *)(lVar8 + 0x48));
              TodStringTranslate((wstring *)aRStack_28);
              TodStringTranslate(L"[PIECE]");
              std::operator+((wstring *)aSStack_20,awStack_18);
              FUN_054766c8();
              FUN_05476c50(aRStack_10);
              FUN_05476c50(awStack_18);
              FUN_05476c50((wstring *)aSStack_20);
              FUN_05476c50((wstring *)aRStack_28);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
              std::string::~string((string *)aRStack_38);
              std::string::~string(asStack_40);
              this = extraout_x0_02;
            }
            else {
              plVar5 = (long *)FUN_04a313fc(*(undefined8 *)(uVar4 + 0x120),lVar13);
              bVar1 = std::operator==((string *)(*plVar5 + 0x10),"accessory_piece");
              if (bVar1) {
                psVar6 = (string *)
                         Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr()
                ;
                FUN_04a313fc(*(undefined8 *)(uVar4 + 0x120),lVar13);
                ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar6);
                cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)awStack_18);
                if (cVar2 != '\0') {
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)awStack_18);
                  nop();
                  thunk_FUN_05475e00(asStack_48,extraout_x0_04 + 0x98);
                }
                this_01 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance()
                ;
                PlantAccessoryMgr::GetAccessoryDisplayName(this_01,asStack_48);
                thunk_FUN_05477b9c();
                FUN_05476c50(aRStack_10);
                this = (Magento *)
                       Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)awStack_18);
              }
              else {
                this = (Magento *)0x0;
              }
            }
          }
        }
        goto LAB_04a32f2c;
      }
      psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr()
      ;
      FUN_04a313fc(*(undefined8 *)(uVar4 + 0x120),lVar13);
      ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar6);
      cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
        nop();
        thunk_FUN_05475e00(asStack_48,extraout_x0_00 + 0x98);
      }
    }
    this = (Magento *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                     ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
LAB_04a32f2c:
  Magento::GetPlantLevelUp(this);
  uVar9 = 0;
  do {
    uVar12 = uVar9;
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
    uVar9 = FUN_04a31458(*(undefined8 *)(lVar8 + 0x60),*(undefined8 *)(lVar8 + 0x68));
    if (uVar9 <= uVar12) goto LAB_04a32f90;
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
    pRVar7 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04a31464(*(undefined8 *)(lVar8 + 0x60),uVar12);
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar7);
    cVar2 = std::operator==((string *)(lVar8 + 0x80),asStack_48);
    uVar9 = uVar12 + 1;
  } while (cVar2 == '\0');
  lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
  pRVar7 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04a31464(*(undefined8 *)(lVar8 + 0x60),uVar12);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar7);
  MagentoProductProps::GetLocalizedShortDescription();
  Sexy::UTF8StringToWString(aSStack_20,extraout_x1);
  TodStringTranslate(awStack_18);
  FUN_054766c8();
  FUN_05476c50(aRStack_10);
  FUN_05476c50(awStack_18);
  std::string::~string((string *)aSStack_20);
LAB_04a32f90:
  plVar5 = (long *)FUN_04a313fc(*(undefined8 *)(uVar4 + 0x120),lVar13);
  bVar1 = std::operator==((string *)(*plVar5 + 0x10),"plant_piece");
  if (bVar1) {
    pwVar10 = L"[PIECE]";
  }
  else {
    plVar5 = (long *)FUN_04a313fc(*(undefined8 *)(uVar4 + 0x120),lVar13);
    bVar1 = std::operator==((string *)(*plVar5 + 0x10),"avatar_piece");
    if (!bVar1) goto LAB_04a32fdc;
    pwVar10 = L"[AVATAR_PIECE]";
  }
  TodStringTranslate(pwVar10);
  thunk_FUN_05477668();
  FUN_05476c50(aRStack_10);
LAB_04a32fdc:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  std::string::~string(asStack_48);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GachaUI::InitView() */

void __thiscall GachaUI::InitView(GachaUI *this)

{
  ButtonListener *pBVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  int *piVar12;
  LotteryResultProgressBar *pLVar13;
  Effect_PopAnim *pEVar14;
  ResourceInfo *pRVar15;
  PopAnimRig *this_00;
  char *pcVar16;
  long *plVar17;
  PVZ2UIButton *pPVar18;
  SalesProgressBar *pSVar19;
  GachaMgr *pGVar20;
  string *psVar21;
  code *pcVar22;
  long lVar23;
  StandaloneEffect *pSVar24;
  undefined8 uVar25;
  float fVar26;
  Effect_PopAnim *pEVar27;
  RtWeakPtr aRStack_a8 [8];
  string asStack_a0 [8];
  RtWeakPtr aRStack_98 [8];
  RtWeakPtr aRStack_90 [8];
  wstring awStack_88 [8];
  undefined1 auStack_80 [8];
  string asStack_78 [56];
  Effect_PopAnim *local_40 [7];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  *(undefined4 *)(this + 0x13c) = 0;
  *(undefined4 *)(this + 0x140) = 0;
  uVar4 = FUN_04a313f0(*(undefined8 *)(this + 0x120),*(undefined8 *)(this + 0x128));
  this[0x159] = (GachaUI)0x0;
  *(undefined4 *)(this + 0x138) = uVar4;
  this[0x15a] = (GachaUI)0x0;
  this[0x158] = (GachaUI)0x1;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  fVar26 = (float)PVZ_T();
  *(float *)(this + 0x14c) = fVar26 + 2.2;
  pEVar27._0_4_ = (Effect_PopAnim *)PVZ_EOT();
  iVar8 = *(int *)(this + 0x50);
                    /* WARNING: Store size is inaccurate */
  *(Effect_PopAnim **)(this + 0x144) = pEVar27._0_4_;
  *(int *)(this + 0x198) = iVar8 / 2;
                    /* WARNING: Store size is inaccurate */
  *(Effect_PopAnim **)(this + 0x148) = pEVar27._0_4_;
                    /* WARNING: Store size is inaccurate */
  *(Effect_PopAnim **)(this + 0x150) = pEVar27._0_4_;
                    /* WARNING: Store size is inaccurate */
  *(Effect_PopAnim **)(this + 0x154) = pEVar27._0_4_;
  iVar5 = FUN_04a314f8(0x32);
  *(int *)(this + 0x19c) = iVar5 + *(int *)(this + 0x54) / 2;
  piVar12 = eastl::min_alt<int>((int *)&DAT_05754e34,(int *)(this + 0x138));
  iVar5 = *piVar12;
  pLVar13 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79a90);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
  iVar7 = FUN_04a314f8(0x3c);
  *(undefined4 *)(this + 0x1a4) = 0x50;
  *(int *)(this + 0x1a0) =
       (int)((((float)iVar8 - (float)iVar6 * (float)(iVar5 + -1)) - (float)((iVar5 + -1) * iVar7)) *
            0.5);
  LawnApp::GetPlatformName();
  bVar2 = std::operator==((string *)local_40,"ipad3");
  std::string::~string((string *)local_40);
  if (bVar2) {
    iVar8 = FUN_04a314f8(0x28);
    *(int *)(this + 0x1a4) = *(int *)(this + 0x1a4) + iVar8;
  }
  lVar23 = 0;
  pLVar13 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79a90);
  iVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
  iVar5 = FUN_04a314f8(0x3c);
  *(int *)(this + 0x1a8) = (int)((float)iVar5 + (float)iVar8);
  uVar4 = FUN_04a314f8(0xa0);
  *(undefined4 *)(this + 0x1ac) = uVar4;
  *(undefined4 *)(this + 0x1b0) = 0x3dcccccd;
  pEVar14 = GameObject::CreateOutsideTable<Effect_PopAnim>();
  *(Effect_PopAnim **)(this + 0x168) = pEVar14;
  std::string::string((string *)local_40,"POPANIM_EFFECTS_GACHA_ANIMATION");
  GetPAMByName((string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  pRVar15 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_a8);
  Effect_PopAnim::CreatePopAnimRig
            (*(Effect_PopAnim **)(this + 0x168),(PopAnim *)pRVar15,(RtClass *)0x0);
  pSVar24 = *(StandaloneEffect **)(this + 0x168);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)local_40,(float)(*(int *)(this + 0x50) / 2),
             (float)(*(int *)(this + 0x54) / 2));
  StandaloneEffect::SetScreenSpaceOrigin(pSVar24,(SexyVector2 *)local_40,900000);
  Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0x168),true);
  this_00 = (PopAnimRig *)UIWidget::GetAtlasImage(*(UIWidget **)(this + 0x168));
  std::string::string((string *)local_40,"bon1");
  PopAnimRig::SetLayerVisibility(this_00,(string *)local_40,false);
  std::string::~string((string *)local_40);
  nop();
  pEVar14 = *(Effect_PopAnim **)(this + 0x168);
  std::string::string((string *)local_40,"anim1");
  Effect_PopAnim::PlaySingleAnimation(pEVar14,(string *)local_40,0);
  std::string::~string((string *)local_40);
  nop();
  pcVar16 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar16,"Play_UI_Gacha_Start");
  psVar21 = (string *)local_40;
  std::string::string(asStack_a0,"POPANIM_EFFECTS_GACHA_PLANT");
  nop();
  if (0 < *(int *)(this + 0x138)) {
    do {
      plVar17 = (long *)FUN_04a313fc(*(undefined8 *)(this + 0x120),lVar23);
      bVar2 = std::operator==((string *)(*plVar17 + 0x10),"avatar");
      if (bVar2) {
LAB_04a33b24:
        std::string::append(asStack_a0,"POPANIM_EFFECTS_GACHA_AVATAR",(size_t)psVar21);
        break;
      }
      plVar17 = (long *)FUN_04a313fc(*(undefined8 *)(this + 0x120),lVar23);
      bVar2 = std::operator==((string *)(*plVar17 + 0x10),"new_avatar");
      if (bVar2) goto LAB_04a33b24;
      iVar8 = (int)lVar23;
      lVar23 = lVar23 + 1;
    } while (iVar8 + 1 < *(int *)(this + 0x138));
  }
  pEVar14 = GameObject::CreateOutsideTable<Effect_PopAnim>();
  *(Effect_PopAnim **)(this + 0x170) = pEVar14;
  GetPAMByName(asStack_a0);
  pRVar15 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_98);
  Effect_PopAnim::CreatePopAnimRig
            (*(Effect_PopAnim **)(this + 0x170),(PopAnim *)pRVar15,(RtClass *)0x0);
  bVar2 = std::operator==(asStack_a0,"POPANIM_EFFECTS_GACHA_PLANT");
  if (bVar2) {
    iVar5 = *(int *)(this + 0x50);
    pSVar24 = *(StandaloneEffect **)(this + 0x170);
    iVar8 = *(int *)(this + 0x54) / 2;
  }
  else {
    iVar5 = *(int *)(this + 0x50);
    pSVar24 = *(StandaloneEffect **)(this + 0x170);
    iVar8 = *(int *)(this + 0x54) / 6;
  }
  Sexy::FastCurve::SetOutRange((FastCurve *)local_40,(float)(iVar5 / 2),(float)iVar8);
  lVar23 = 0;
  StandaloneEffect::SetScreenSpaceOrigin(pSVar24,(SexyVector2 *)local_40,900000);
  Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0x170),true);
  StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x170),false);
  std::string::string((string *)local_40,"POPANIM_EFFECTS_PLANTBACK_LIGHT_WHITE");
  GetPAMByName((string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  pRVar15 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_90);
  pEVar14 = GameObject::CreateOutsideTable<Effect_PopAnim>();
  *(Effect_PopAnim **)(this + 0x178) = pEVar14;
  Effect_PopAnim::CreatePopAnimRig(pEVar14,(PopAnim *)pRVar15,(RtClass *)0x0);
  pSVar24 = *(StandaloneEffect **)(this + 0x178);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)local_40,(float)*(int *)(this + 0x198),(float)*(int *)(this + 0x19c));
  StandaloneEffect::SetScreenSpaceOrigin(pSVar24,(SexyVector2 *)local_40,900000);
  Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0x178),true);
  StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x178),false);
  (**(code **)(**(long **)(this + 0x178) + 0x80))(0x3e99999a,*(long **)(this + 0x178));
  uVar25 = *(undefined8 *)(this + 0x178);
  std::string::string((string *)local_40,"anim");
  Effect_PopAnim::PlayLoopingAnimation(pEVar27._0_4_,uVar25,(string *)local_40,0);
  std::string::~string((string *)local_40);
  nop();
  if (0 < *(int *)(this + 0x138)) {
    do {
      while( true ) {
        plVar17 = (long *)FUN_04a313fc(*(undefined8 *)(this + 0x120),lVar23);
        bVar2 = std::operator==((string *)(*plVar17 + 0x10),"avatar");
        iVar8 = (int)lVar23;
        if (!bVar2) break;
LAB_04a33cf4:
        local_40[0] = GameObject::CreateOutsideTable<Effect_PopAnim>();
        Effect_PopAnim::CreatePopAnimRig(local_40[0],(PopAnim *)pRVar15,(RtClass *)0x0);
        Effect_PopAnim::SetCentered(local_40[0],true);
        StandaloneEffect::SetVisibility((StandaloneEffect *)local_40[0],false);
        std::vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>>::push_back
                  ((vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>> *)(this + 0x180),
                   local_40);
        lVar23 = lVar23 + 1;
        if (*(int *)(this + 0x138) <= iVar8 + 1) goto LAB_04a33db4;
      }
      plVar17 = (long *)FUN_04a313fc(*(undefined8 *)(this + 0x120),lVar23);
      bVar2 = std::operator==((string *)(*plVar17 + 0x10),"new_avatar");
      plVar17 = (long *)FUN_04a313fc(*(undefined8 *)(this + 0x120),lVar23);
      if ((bVar2) || (*(char *)(*plVar17 + 0x2d) != '\0')) goto LAB_04a33cf4;
      lVar23 = lVar23 + 1;
    } while (iVar8 + 1 < *(int *)(this + 0x138));
  }
LAB_04a33db4:
  Sexy::LazySingleton<SecretGachaMgr>::GetInstance();
  cVar3 = SecretGachaMgr::IsUIActive();
  uVar4 = 0;
  if (cVar3 == '\0') {
    uVar4 = 0x42c80000;
  }
  pBVar1 = (ButtonListener *)(this + 0xd8);
  FUN_05478178(asStack_78,L"[BUTTON_OK]",auStack_80);
  Sexy::Color::Color((Color *)local_40,1);
  pPVar18 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar18,0,pBVar1,(wstring *)asStack_78,(Color *)local_40);
  *(PVZ2UIButton **)(this + 0x100) = pPVar18;
  FUN_05476c50(asStack_78);
  nop();
  iVar8 = *(int *)(this + 0x50);
  plVar17 = *(long **)(this + 0x100);
  pcVar22 = *(code **)(*plVar17 + 0x198);
  pLVar13 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79c90);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
  fVar26 = (float)FUN_04a3150c(uVar4);
  uVar4 = FUN_04a314f8(500);
  pLVar13 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79c90);
  uVar9 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
  pSVar19 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79c90);
  uVar10 = SalesProgressBar::GetCurrentLevel(pSVar19);
  (*pcVar22)(plVar17,(int)((float)((iVar8 - iVar5) / 2) + fVar26),uVar4,uVar9,uVar10);
  plVar17 = *(long **)(this + 0x100);
  pcVar22 = *(code **)(*plVar17 + 800);
  uVar25 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
  (*pcVar22)(plVar17,uVar25);
  pPVar18 = *(PVZ2UIButton **)(this + 0x100);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06b79c90,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06b79bb0,3);
  PVZ2UIButton::SetDialogStates(pPVar18,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)local_40);
  (**(code **)(**(long **)(this + 0x100) + 0x158))(*(long **)(this + 0x100),0);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x100));
  Sexy::LazySingleton<SecretGachaMgr>::GetInstance();
  cVar3 = SecretGachaMgr::IsUIActive();
  if (cVar3 == '\0') {
    FUN_05476574(awStack_88);
    bVar2 = std::operator==((string *)(this + 0x110),"gacha_diamond");
    if (bVar2) {
      FUN_054772c4(awStack_88,L"[GACHA_AGAIN_1_TIMES]");
    }
    else {
      FUN_054772c4(awStack_88,L"[GACHA_AGAIN_10_TIMES]");
    }
    Sexy::Color::Color((Color *)local_40,1);
    pPVar18 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton(pPVar18,1,pBVar1,awStack_88,(Color *)local_40);
    *(PVZ2UIButton **)(this + 0x108) = pPVar18;
    pcVar22 = *(code **)(*(long *)pPVar18 + 800);
    uVar25 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
    (*pcVar22)(pPVar18,uVar25);
    FUN_05478178(asStack_78,&DAT_056f11a8,auStack_80);
    Sexy::Color::Color((Color *)local_40,1);
    pPVar18 = ::operator_new(0x300);
    psVar21 = asStack_78;
    PVZ2UIButton::PVZ2UIButton(pPVar18,1,pBVar1,(wstring *)asStack_78,(Color *)local_40);
    iVar8 = (int)psVar21;
    *(PVZ2UIButton **)(this + 0x108) = pPVar18;
    FUN_05476c50(asStack_78);
    nop();
    if (*(uint *)(this + 0x118) < 4) {
      pPVar18 = *(PVZ2UIButton **)(this + 0x108);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06b79c48,1);
      PVZ2UIButton::AddImage(pPVar18,(string *)local_40,0xffffffff);
      pGVar20 = (GachaMgr *)Sexy::LazySingleton<GachaMgr>::GetInstance();
      uVar11 = GachaMgr::GetTargetGachaCost(pGVar20,*(undefined4 *)(this + 0x118),!bVar2);
      FUN_05476574(auStack_80);
      if (bVar2) {
        iVar8 = 0xaa;
        uVar4 = 0xaa;
        std::string::string(asStack_78,"[GACHA_AGAIN_1_TIMES_NEW]");
        StringHelper::ReplaceNumberString
                  ((StringHelper *)asStack_78,(string *)L"{NUMBER}",(wchar_t *)(ulong)uVar11,iVar8);
        FUN_054766c8(auStack_80,(string *)local_40);
        FUN_05476c50((string *)local_40);
        std::string::~string(asStack_78);
        nop();
        pPVar18 = *(PVZ2UIButton **)(this + 0x108);
        uVar25 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
        PVZ2UIButton::AddText(pPVar18,auStack_80,uVar25,0);
      }
      else {
        std::string::string(asStack_78,"[GACHA_AGAIN_10_TIMES_NEW]");
        StringHelper::ReplaceNumberString
                  ((StringHelper *)asStack_78,(string *)L"{NUMBER}",(wchar_t *)(ulong)uVar11,iVar8);
        FUN_054766c8(auStack_80,(string *)local_40);
        FUN_05476c50((string *)local_40);
        std::string::~string(asStack_78);
        nop();
        pPVar18 = *(PVZ2UIButton **)(this + 0x108);
        uVar25 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
        PVZ2UIButton::AddText(pPVar18,auStack_80,uVar25,0);
        uVar4 = 0xb4;
        if (*(int *)(this + 0x118) != 2) {
          uVar4 = 0xaa;
        }
      }
      plVar17 = *(long **)(this + 0x108);
      iVar8 = *(int *)(this + 0x50);
      pcVar22 = *(code **)(*plVar17 + 0x198);
      pLVar13 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79c90);
      iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
      iVar6 = FUN_04a314f8(100);
      uVar9 = FUN_04a314f8(500);
      uVar4 = FUN_04a314f8(uVar4);
      pSVar19 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79c90);
      uVar10 = SalesProgressBar::GetCurrentLevel(pSVar19);
      (*pcVar22)(plVar17,(iVar8 - iVar5) / 2 - iVar6,uVar9,uVar4,uVar10);
      FUN_05476c50(auStack_80);
    }
    else {
      pPVar18 = *(PVZ2UIButton **)(this + 0x108);
      TodStringTranslate(awStack_88);
      uVar25 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
      PVZ2UIButton::AddText(pPVar18,(string *)local_40,uVar25,0);
      FUN_05476c50((string *)local_40);
      iVar8 = *(int *)(this + 0x50);
      plVar17 = *(long **)(this + 0x108);
      pcVar22 = *(code **)(*plVar17 + 0x198);
      pLVar13 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79c90);
      iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
      iVar6 = FUN_04a314f8(100);
      uVar4 = FUN_04a314f8(500);
      uVar9 = FUN_04a314f8(0x78);
      pSVar19 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79c90);
      uVar10 = SalesProgressBar::GetCurrentLevel(pSVar19);
      (*pcVar22)(plVar17,(iVar8 - iVar5) / 2 - iVar6,uVar4,uVar9,uVar10);
    }
    pPVar18 = *(PVZ2UIButton **)(this + 0x108);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06b79c90,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06b79bb0,3);
    PVZ2UIButton::SetDialogStates(pPVar18,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)local_40);
    (**(code **)(**(long **)(this + 0x108) + 0x158))(*(long **)(this + 0x108),0);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x108));
    FUN_05476c50(awStack_88);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
  std::string::~string(asStack_a0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a8);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GachaUI::resetUIDisplay() */

void __thiscall GachaUI::resetUIDisplay(GachaUI *this)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  LotteryResultProgressBar *this_00;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ResourceInfo *pRVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  Effect_PopAnim *pEVar14;
  undefined8 uVar15;
  float fVar16;
  Effect_PopAnim *local_20;
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x13c) = 0;
  *(undefined4 *)(this + 0x140) = 0;
  uVar3 = FUN_04a313f0(*(undefined8 *)(this + 0x120),*(undefined8 *)(this + 0x128));
  this[0x159] = (GachaUI)0x0;
  *(undefined4 *)(this + 0x138) = uVar3;
  this[0x158] = (GachaUI)0x1;
  fVar16 = (float)PVZ_T();
  *(float *)(this + 0x14c) = fVar16 + 2.2;
  uVar3 = PVZ_EOT();
  *(undefined4 *)(this + 0x144) = uVar3;
  *(undefined4 *)(this + 0x148) = uVar3;
  *(undefined4 *)(this + 0x150) = uVar3;
  StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x170),false);
  piVar6 = eastl::min_alt<int>((int *)&DAT_05754e34,(int *)(this + 0x138));
  iVar11 = *piVar6;
  iVar1 = *(int *)(this + 0x50);
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79a90);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  iVar5 = FUN_04a314f8(0x3c);
  pEVar14 = *(Effect_PopAnim **)(this + 0x168);
  *(undefined4 *)(this + 0x1a4) = 0x50;
  *(int *)(this + 0x1a0) =
       (int)((((float)iVar1 - (float)iVar4 * (float)(iVar11 + -1)) - (float)((iVar11 + -1) * iVar5))
            * 0.5);
  std::string::string(asStack_10,"anim2");
  Effect_PopAnim::PlaySingleAnimation(pEVar14,asStack_10,0);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(**(long **)(this + 0x100) + 0x158))(*(long **)(this + 0x100),0);
  plVar7 = *(long **)(this + 0x108);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x158))(plVar7,0);
  }
  uVar15 = *(undefined8 *)(this + 0x180);
  uVar12 = 0;
  uVar8 = FUN_04a31404(uVar15,*(undefined8 *)(this + 0x188));
  if (uVar8 != 0) {
    do {
      plVar7 = (long *)FUN_04a31410(uVar15,uVar12);
      if ((long *)*plVar7 != (long *)0x0) {
        (**(code **)(*(long *)*plVar7 + 0x18))();
        puVar9 = (undefined8 *)FUN_04a31410(*(undefined8 *)(this + 0x180),uVar12);
        *puVar9 = 0;
        uVar15 = *(undefined8 *)(this + 0x180);
        uVar8 = FUN_04a31404(uVar15,*(undefined8 *)(this + 0x188));
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar8);
  }
  lVar13 = 0;
  std::vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>>::clear
            ((vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>> *)(this + 0x180));
  if (0 < *(int *)(this + 0x138)) {
    do {
      while( true ) {
        plVar7 = (long *)FUN_04a313fc(*(undefined8 *)(this + 0x120),lVar13);
        bVar2 = std::operator==((string *)(*plVar7 + 0x10),"avatar");
        iVar11 = (int)lVar13;
        if (!bVar2) break;
LAB_04a346dc:
        lVar13 = lVar13 + 1;
        if (*(int *)(this + 0x138) <= iVar11 + 1) goto LAB_04a347f8;
      }
      plVar7 = (long *)FUN_04a313fc(*(undefined8 *)(this + 0x120),lVar13);
      bVar2 = std::operator==((string *)(*plVar7 + 0x10),"new_avatar");
      plVar7 = (long *)FUN_04a313fc(*(undefined8 *)(this + 0x120),lVar13);
      if (*(byte *)(*plVar7 + 0x2d) <= bVar2) goto LAB_04a346dc;
      local_20 = GameObject::CreateOutsideTable<Effect_PopAnim>();
      std::string::string(asStack_10,"POPANIM_EFFECTS_PLANTBACK_CARD");
      GetPAMByName(asStack_10);
      std::string::~string(asStack_10);
      nop();
      pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
      Effect_PopAnim::CreatePopAnimRig(local_20,(PopAnim *)pRVar10,(RtClass *)0x0);
      Effect_PopAnim::SetCentered(local_20,true);
      StandaloneEffect::SetVisibility((StandaloneEffect *)local_20,false);
      (**(code **)(*(long *)local_20 + 0x80))(0x3f19999a,local_20);
      std::vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>>::push_back
                ((vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>> *)(this + 0x180),&local_20
                );
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      lVar13 = lVar13 + 1;
    } while (iVar11 + 1 < *(int *)(this + 0x138));
  }
LAB_04a347f8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GachaUI::InitRewardPool() */

void __thiscall GachaUI::InitRewardPool(GachaUI *this)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  GachaRewardUI *pGVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  string asStack_20 [8];
  string asStack_18 [8];
  GachaRewardUI *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)LawnApp::GetGachaConfig();
  iVar3 = FUN_04a313d8(*(undefined4 *)(this_00 + 0x14));
  uVar1 = *(undefined4 *)(this_00 + 0x18);
  *(long *)(this + 0xe0) = (long)iVar3;
  iVar3 = FUN_04a313dc(uVar1);
  *(long *)(this + 0xe8) = (long)iVar3;
  puVar4 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_rightmost(this_00);
  uVar9 = *puVar4;
  uVar11 = 0;
  while( true ) {
    uVar5 = FUN_04a31418(uVar9,puVar4[1]);
    if (uVar5 <= uVar11) break;
    lVar6 = FUN_04a3142c(uVar9,uVar11);
    iVar3 = *(int *)(lVar6 + 0x14) + DAT_06b79c88;
    FUN_05475d88(asStack_20,lVar6);
    lVar6 = FUN_04a3142c(*puVar4,uVar11);
    FUN_05475d88(asStack_18,lVar6 + 8);
    pGVar7 = ::operator_new(0x38);
    GachaRewardUI::GachaRewardUI(pGVar7,DAT_06b79c88,iVar3,asStack_20,asStack_18);
    local_10 = pGVar7;
    std::vector<GachaRewardUI*,std::allocator<GachaRewardUI*>>::push_back
              ((vector<GachaRewardUI*,std::allocator<GachaRewardUI*>> *)&DAT_06b79b10,&local_10);
    std::string::~string(asStack_18);
    std::string::~string(asStack_20);
    plVar8 = (long *)FUN_04a313fc(DAT_06b79b10,uVar11);
    bVar2 = std::operator==((string *)(*plVar8 + 0x10),"plant");
    plVar8 = (long *)FUN_04a313fc(DAT_06b79b10,uVar11);
    lVar10 = *plVar8;
    uVar9 = *puVar4;
    *(bool *)(lVar10 + 0x2d) = bVar2;
    lVar6 = FUN_04a3142c(uVar9,uVar11);
    DAT_06b79c88 = DAT_06b79c88 + *(int *)(lVar6 + 0x14);
    *(undefined4 *)(lVar10 + 0x30) = *(undefined4 *)(lVar6 + 0x10);
    uVar11 = uVar11 + 1;
  }
  puVar4 = (undefined8 *)GachaConfig::GetGachaPlantRewardList((GachaConfig *)this_00);
  uVar9 = *puVar4;
  uVar11 = 0;
  while( true ) {
    uVar5 = FUN_04a31418(uVar9,puVar4[1]);
    if (uVar5 <= uVar11) break;
    lVar6 = FUN_04a3142c(uVar9,uVar11);
    iVar3 = *(int *)(lVar6 + 0x14) + DAT_06b79ab8;
    FUN_05475d88(asStack_20,lVar6);
    lVar6 = FUN_04a3142c(*puVar4,uVar11);
    FUN_05475d88(asStack_18,lVar6 + 8);
    pGVar7 = ::operator_new(0x38);
    GachaRewardUI::GachaRewardUI(pGVar7,DAT_06b79ab8,iVar3,asStack_20,asStack_18);
    local_10 = pGVar7;
    std::vector<GachaRewardUI*,std::allocator<GachaRewardUI*>>::push_back
              ((vector<GachaRewardUI*,std::allocator<GachaRewardUI*>> *)&DAT_06b79ce8,&local_10);
    std::string::~string(asStack_18);
    std::string::~string(asStack_20);
    plVar8 = (long *)FUN_04a313fc(DAT_06b79ce8,uVar11);
    bVar2 = std::operator==((string *)(*plVar8 + 0x10),"plant");
    plVar8 = (long *)FUN_04a313fc(DAT_06b79ce8,uVar11);
    lVar10 = *plVar8;
    uVar9 = *puVar4;
    *(bool *)(lVar10 + 0x2d) = bVar2;
    lVar6 = FUN_04a3142c(uVar9,uVar11);
    DAT_06b79ab8 = DAT_06b79ab8 + *(int *)(lVar6 + 0x14);
    *(undefined4 *)(lVar10 + 0x30) = *(undefined4 *)(lVar6 + 0x10);
    uVar11 = uVar11 + 1;
  }
  puVar4 = (undefined8 *)Reflection::CRefSymbolDb::GetClasses((CRefSymbolDb *)this_00);
  uVar9 = *puVar4;
  uVar11 = 0;
  while( true ) {
    uVar5 = FUN_04a31418(uVar9,puVar4[1]);
    if (uVar5 <= uVar11) break;
    lVar6 = FUN_04a3142c(uVar9,uVar11);
    iVar3 = *(int *)(lVar6 + 0x14) + DAT_06b79ba8;
    FUN_05475d88(asStack_20,lVar6);
    lVar6 = FUN_04a3142c(*puVar4,uVar11);
    FUN_05475d88(asStack_18,lVar6 + 8);
    pGVar7 = ::operator_new(0x38);
    GachaRewardUI::GachaRewardUI(pGVar7,DAT_06b79ba8,iVar3,asStack_20,asStack_18);
    local_10 = pGVar7;
    std::vector<GachaRewardUI*,std::allocator<GachaRewardUI*>>::push_back
              ((vector<GachaRewardUI*,std::allocator<GachaRewardUI*>> *)&DAT_06b79c70,&local_10);
    std::string::~string(asStack_18);
    std::string::~string(asStack_20);
    plVar8 = (long *)FUN_04a313fc(DAT_06b79c70,uVar11);
    bVar2 = std::operator==((string *)(*plVar8 + 0x10),"plant");
    plVar8 = (long *)FUN_04a313fc(DAT_06b79c70,uVar11);
    lVar10 = *plVar8;
    uVar9 = *puVar4;
    *(bool *)(lVar10 + 0x2d) = bVar2;
    lVar6 = FUN_04a3142c(uVar9,uVar11);
    DAT_06b79ba8 = DAT_06b79ba8 + *(int *)(lVar6 + 0x14);
    *(undefined4 *)(lVar10 + 0x30) = *(undefined4 *)(lVar6 + 0x10);
    uVar11 = uVar11 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GachaUI::addRewardName(std::vector<RewardItemData, std::allocator<RewardItemData> >&) */

void __thiscall GachaUI::addRewardName(GachaUI *this,vector *param_1)

{
  undefined1 uVar1;
  UILimitedGacha *pUVar2;
  LawnApp *pLVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  undefined4 uVar7;
  uint uVar8;
  GachaRewardUI *pGVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  ResourceInfo *pRVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  Effect_PopAnim *local_30;
  string asStack_28 [8];
  GachaRewardUI *local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ClearGachaResult(this);
  uVar15 = 0;
  while( true ) {
    uVar17 = *(undefined8 *)param_1;
    uVar10 = FUN_04a31438(uVar17,*(undefined8 *)(param_1 + 8));
    if (uVar10 <= uVar15) break;
    uVar17 = FUN_04a3144c(uVar17,uVar15);
    FUN_05475d88((string *)&local_30,uVar17);
    lVar16 = FUN_04a3144c(*(undefined8 *)param_1,uVar15);
    FUN_05475d88(asStack_28,lVar16 + 8);
    lVar16 = FUN_04a3144c(*(undefined8 *)param_1,uVar15);
    uVar7 = *(undefined4 *)(lVar16 + 0x10);
    uVar5 = *(undefined1 *)(lVar16 + 0x14);
    uVar1 = *(undefined1 *)(lVar16 + 0x15);
    pGVar9 = ::operator_new(0x38);
    GachaRewardUI::GachaRewardUI(pGVar9,(string *)&local_30,asStack_28,uVar5,uVar7,uVar1);
    local_20[0] = pGVar9;
    std::vector<GachaRewardUI*,std::allocator<GachaRewardUI*>>::push_back
              ((vector<GachaRewardUI*,std::allocator<GachaRewardUI*>> *)(this + 0x120),local_20);
    std::string::~string(asStack_28);
    std::string::~string((string *)&local_30);
    uVar15 = uVar15 + 1;
  }
  uVar15 = 0;
  uVar7 = FUN_04a313f0(*(undefined8 *)(this + 0x120),*(undefined8 *)(this + 0x128));
  uVar17 = *(undefined8 *)(this + 0x180);
  *(undefined4 *)(this + 0x138) = uVar7;
  uVar10 = FUN_04a31404(uVar17,*(undefined8 *)(this + 0x188));
  if (uVar10 != 0) {
    do {
      plVar11 = (long *)FUN_04a31410(uVar17,uVar15);
      if ((long *)*plVar11 != (long *)0x0) {
        (**(code **)(*(long *)*plVar11 + 0x18))();
        puVar12 = (undefined8 *)FUN_04a31410(*(undefined8 *)(this + 0x180),uVar15);
        *puVar12 = 0;
        uVar17 = *(undefined8 *)(this + 0x180);
        uVar10 = FUN_04a31404(uVar17,*(undefined8 *)(this + 0x188));
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < uVar10);
  }
  lVar16 = 0;
  std::vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>>::clear
            ((vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>> *)(this + 0x180));
  if (0 < *(int *)(this + 0x138)) {
    do {
      while( true ) {
        plVar11 = (long *)FUN_04a313fc(*(undefined8 *)(this + 0x120),lVar16);
        bVar4 = std::operator==((string *)(*plVar11 + 0x10),"avatar");
        iVar14 = (int)lVar16;
        if (!bVar4) break;
LAB_04a35034:
        local_30 = GameObject::CreateOutsideTable<Effect_PopAnim>();
        std::string::string((string *)local_20,"POPANIM_EFFECTS_PLANTBACK_CARD");
        GetPAMByName((string *)local_20);
        std::string::~string((string *)local_20);
        nop();
        pRVar13 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_28);
        Effect_PopAnim::CreatePopAnimRig(local_30,(PopAnim *)pRVar13,(RtClass *)0x0);
        Effect_PopAnim::SetCentered(local_30,true);
        StandaloneEffect::SetVisibility((StandaloneEffect *)local_30,false);
        (**(code **)(*(long *)local_30 + 0x80))(0x3f19999a,local_30);
        std::vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>>::push_back
                  ((vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>> *)(this + 0x180),
                   &local_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28)
        ;
        lVar16 = lVar16 + 1;
        if (*(int *)(this + 0x138) <= iVar14 + 1) goto LAB_04a35150;
      }
      plVar11 = (long *)FUN_04a313fc(*(undefined8 *)(this + 0x120),lVar16);
      bVar4 = std::operator==((string *)(*plVar11 + 0x10),"new_avatar");
      plVar11 = (long *)FUN_04a313fc(*(undefined8 *)(this + 0x120),lVar16);
      if ((bVar4) || (*(char *)(*plVar11 + 0x2d) != '\0')) goto LAB_04a35034;
      lVar16 = lVar16 + 1;
    } while (iVar14 + 1 < *(int *)(this + 0x138));
  }
LAB_04a35150:
  pLVar3 = gLawnApp;
  std::vector<GachaRewardUI*,std::allocator<GachaRewardUI*>>::vector
            ((vector<GachaRewardUI*,std::allocator<GachaRewardUI*>> *)local_20,
             (vector *)(this + 0x120));
  LawnApp::GatherGachaLogInfo(pLVar3,(string *)local_20);
  std::vector<GachaRewardUI*,std::allocator<GachaRewardUI*>>::~vector
            ((vector<GachaRewardUI*,std::allocator<GachaRewardUI*>> *)local_20);
  lVar16 = FUN_04a31438(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
  if (lVar16 == 0) goto LAB_04a3518c;
  bVar4 = std::operator==((string *)(this + 0x110),"gacha_diamond10");
  pUVar2 = UILimitedGacha::s_pWidgetHandler;
  if (bVar4) {
    if (UILimitedGacha::s_pWidgetHandler != (UILimitedGacha *)0x0) {
      uVar5 = FUN_04a313e4(UILimitedGacha::s_pWidgetHandler[0x141]);
      UILimitedGacha::showGacha10Flag(pUVar2,false);
      uVar8 = 10;
      goto LAB_04a35214;
    }
    uVar8 = 10;
  }
  else {
    bVar6 = std::operator==((string *)(this + 0x110),"gacha_diamond");
    pUVar2 = UILimitedGacha::s_pWidgetHandler;
    uVar8 = (uint)bVar6;
    uVar5 = false;
    if (bVar6) {
      uVar8 = (uint)(byte)this[0x11c];
      if (UILimitedGacha::s_pWidgetHandler == (UILimitedGacha *)0x0) goto LAB_04a35244;
      uVar5 = FUN_04a313e0(UILimitedGacha::s_pWidgetHandler[0x140]);
      UILimitedGacha::showGacha1Flag(pUVar2,bVar4);
    }
LAB_04a35214:
    if (UILimitedGacha::s_pWidgetHandler != (UILimitedGacha *)0x0) {
      MessageRouter::Post<int,bool,int,bool>
                ((MessageRouter *)gMessageRouter,Message::GetLimitedGachaReward,uVar8,(bool)uVar5);
      goto LAB_04a3518c;
    }
  }
LAB_04a35244:
  MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::GetNewGachaReward,uVar8);
LAB_04a3518c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* GachaUI::dealGacha1Time() */

void __thiscall GachaUI::dealGacha1Time(GachaUI *this)

{
  int iVar1;
  ulong uVar2;
  GachaRewardUI **ppGVar3;
  
  uVar2 = time((time_t *)0x0);
  Sexy::SRand(uVar2);
  if (UILimitedGacha::s_pWidgetHandler == 0) {
    ClearGachaResult(this);
  }
  iVar1 = getGachaGlobalResult();
  ppGVar3 = (GachaRewardUI **)FUN_04a313fc(DAT_06b79b10,(long)iVar1);
  std::vector<GachaRewardUI*,std::allocator<GachaRewardUI*>>::push_back
            ((vector<GachaRewardUI*,std::allocator<GachaRewardUI*>> *)(this + 0x120),ppGVar3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GachaUI::PushGachaResult(GachaRewardUI*) */

void __thiscall GachaUI::PushGachaResult(GachaUI *this,GachaRewardUI *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  GachaRewardUI GVar4;
  GachaRewardUI GVar5;
  GachaRewardUI GVar6;
  GachaRewardUI *this_00;
  GachaRewardUI *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = ::operator_new(0x38);
  GachaRewardUI::GachaRewardUI(this_00);
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)param_1;
  *(undefined4 *)(this_00 + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this_00 + 4) = uVar1;
  *(undefined4 *)this_00 = uVar3;
  local_10 = this_00;
  thunk_FUN_05475e00(this_00 + 0x18,param_1 + 0x18);
  thunk_FUN_05475e00(local_10 + 0x10,param_1 + 0x10);
  GVar4 = param_1[0x2c];
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  GVar5 = param_1[0x2d];
  uVar3 = *(undefined4 *)(param_1 + 0x30);
  GVar6 = param_1[0x2e];
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(local_10 + 0x24) = *(undefined4 *)(param_1 + 0x24);
  local_10[0x2c] = GVar4;
  local_10[0x2d] = GVar5;
  *(undefined4 *)(local_10 + 0x30) = uVar3;
  local_10[0x2e] = GVar6;
  *(undefined4 *)(local_10 + 0x20) = uVar2;
  *(undefined4 *)(local_10 + 0x28) = uVar1;
  std::vector<GachaRewardUI*,std::allocator<GachaRewardUI*>>::push_back
            ((vector<GachaRewardUI*,std::allocator<GachaRewardUI*>> *)(this + 0x120),&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GachaUI::dealGacha10Times() */

void __thiscall GachaUI::dealGacha10Times(GachaUI *this)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  GachaRewardUI *pGVar9;
  long lVar10;
  
  uVar5 = time((time_t *)0x0);
  Sexy::SRand(uVar5);
  if (UILimitedGacha::s_pWidgetHandler == 0) {
    ClearGachaResult(this);
  }
  iVar4 = 9;
  bVar1 = false;
  do {
    iVar3 = getGachaGlobalResult();
    lVar10 = (long)iVar3;
    plVar6 = (long *)FUN_04a313fc(DAT_06b79b10,lVar10);
    bVar2 = std::operator==((string *)(*plVar6 + 0x10),"avatar");
    if (bVar2) {
      bVar1 = true;
      puVar7 = (undefined8 *)FUN_04a313fc(DAT_06b79b10,lVar10);
      pGVar9 = (GachaRewardUI *)*puVar7;
LAB_04a35560:
      PushGachaResult(this,pGVar9);
    }
    else {
      plVar6 = (long *)FUN_04a313fc(DAT_06b79b10,lVar10);
      bVar2 = std::operator==((string *)(*plVar6 + 0x10),"new_avatar");
      puVar7 = (undefined8 *)FUN_04a313fc(DAT_06b79b10,lVar10);
      pGVar9 = (GachaRewardUI *)*puVar7;
      if ((!bVar2) && (pGVar9[0x2d] == (GachaRewardUI)0x0)) goto LAB_04a35560;
      bVar1 = true;
      PushGachaResult(this,pGVar9);
    }
    iVar4 = iVar4 + -1;
    if (iVar4 == 0) {
      if ((bVar1) || (-1 < *(int *)(gLawnApp + 0x2a04))) {
        iVar4 = getGachaGlobalResult();
        uVar8 = DAT_06b79b10;
      }
      else {
        iVar4 = getGachaPlantResult();
        uVar8 = DAT_06b79ce8;
      }
      puVar7 = (undefined8 *)FUN_04a313fc(uVar8,(long)iVar4);
      PushGachaResult(this,(GachaRewardUI *)*puVar7);
      return;
    }
  } while( true );
}


/* GachaUI::dealGachaFree(int) */

void __thiscall GachaUI::dealGachaFree(GachaUI *this,int param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  uVar1 = time((time_t *)0x0);
  Sexy::SRand(uVar1);
  if (UILimitedGacha::s_pWidgetHandler == 0) {
    ClearGachaResult(this);
  }
  getGachaFreeResult();
  puVar2 = (undefined8 *)FUN_04a313fc(DAT_06b79c70,(long)param_1);
  PushGachaResult(this,(GachaRewardUI *)*puVar2);
  return;
}


/* GachaUI::dealFirstGacha1Time() */

void __thiscall GachaUI::dealFirstGacha1Time(GachaUI *this)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  uVar2 = time((time_t *)0x0);
  Sexy::SRand(uVar2);
  if (UILimitedGacha::s_pWidgetHandler == 0) {
    ClearGachaResult(this);
  }
  iVar1 = getGachaPlantResult();
  puVar3 = (undefined8 *)FUN_04a313fc(DAT_06b79ce8,(long)iVar1);
  PushGachaResult(this,(GachaRewardUI *)*puVar3);
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x04a35c6c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* GachaUI::Update() */

void __thiscall GachaUI::Update(GachaUI *this)

{
  GachaUI GVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  PopAnimRig *this_00;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  string *psVar12;
  int *piVar13;
  LotteryResultProgressBar *this_01;
  NameMapperBase *pNVar14;
  ulong uVar15;
  int iVar16;
  undefined8 uVar17;
  long lVar18;
  code *pcVar19;
  Effect_PopAnim *pEVar20;
  undefined8 uVar21;
  StandaloneEffect *this_02;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined1 auVar25 [16];
  undefined4 uVar26;
  undefined4 uVar27;
  string asStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  int local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  if (*(StandaloneEffect **)(this + 0x168) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Update(*(StandaloneEffect **)(this + 0x168));
  }
  if (*(StandaloneEffect **)(this + 0x170) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Update(*(StandaloneEffect **)(this + 0x170));
  }
  if (*(StandaloneEffect **)(this + 0x178) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Update(*(StandaloneEffect **)(this + 0x178));
  }
  this_00 = *(PopAnimRig **)(this + 0x160);
  if (this_00 != (PopAnimRig *)0x0) {
    fVar22 = (float)PVZ_RealT();
    fVar23 = (float)PVZ_RealDt();
    PopAnimRig::UpdateAnim(this_00,fVar22,fVar23);
  }
  uVar17 = *(undefined8 *)(this + 0x180);
  uVar15 = 0;
  uVar8 = FUN_04a31404(uVar17,*(undefined8 *)(this + 0x188));
  if (uVar8 != 0) {
    do {
      puVar9 = (undefined8 *)FUN_04a31410(uVar17,uVar15);
      if ((StandaloneEffect *)*puVar9 != (StandaloneEffect *)0x0) {
        StandaloneEffect::Update((StandaloneEffect *)*puVar9);
        uVar17 = *(undefined8 *)(this + 0x180);
        uVar8 = FUN_04a31404(uVar17,*(undefined8 *)(this + 0x188));
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < uVar8);
  }
  lVar10 = FUN_04a313f0(*(undefined8 *)(this + 0x120),*(undefined8 *)(this + 0x128));
  if (lVar10 == 0) goto LAB_04a35818;
  fVar23 = *(float *)(this + 0x14c);
  fVar22 = (float)PVZ_T();
  if (fVar23 < fVar22) {
    this[0x158] = (GachaUI)0x0;
    uVar24 = PVZ_EOT();
    *(undefined4 *)(this + 0x14c) = uVar24;
    uVar24 = PVZ_T();
    *(undefined4 *)(this + 0x144) = uVar24;
    fVar22 = (float)PVZ_T();
    *(float *)(this + 0x148) = fVar22 + 0.3;
    plVar11 = (long *)FUN_04a313fc(*(undefined8 *)(this + 0x120),(long)*(int *)(this + 0x13c));
    bVar2 = std::operator==((string *)(*plVar11 + 0x10),"avatar");
    if (bVar2) {
LAB_04a35da8:
      uVar17 = *(undefined8 *)(this + 0x120);
      bVar2 = true;
      lVar18 = (long)*(int *)(this + 0x13c);
      plVar11 = (long *)FUN_04a313fc(uVar17,lVar18);
      lVar10 = *plVar11;
    }
    else {
      plVar11 = (long *)FUN_04a313fc(*(undefined8 *)(this + 0x120),(long)*(int *)(this + 0x13c));
      bVar2 = std::operator==((string *)(*plVar11 + 0x10),"new_avatar");
      if (bVar2) goto LAB_04a35da8;
      uVar17 = *(undefined8 *)(this + 0x120);
      lVar18 = (long)*(int *)(this + 0x13c);
      plVar11 = (long *)FUN_04a313fc(uVar17,lVar18);
      lVar10 = *plVar11;
      bVar2 = false;
      if (*(char *)(lVar10 + 0x2d) == '\0') goto LAB_04a3585c;
    }
    uVar24 = *(undefined4 *)(this + 0x19c);
    plVar11 = *(long **)(this + 0x160);
    *(undefined4 *)(lVar10 + 0x20) = *(undefined4 *)(this + 0x198);
    *(undefined4 *)(lVar10 + 0x24) = uVar24;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x18))();
      uVar17 = *(undefined8 *)(this + 0x120);
      lVar18 = (long)*(int *)(this + 0x13c);
      *(undefined8 *)(this + 0x160) = 0;
    }
    plVar11 = (long *)FUN_04a313fc(uVar17,lVar18);
    FUN_05475d88(asStack_28,*plVar11 + 0x18);
    if (bVar2) {
      Set8BytesTo0(aRStack_20);
      plVar11 = (long *)FUN_04a313fc(*(undefined8 *)(this + 0x120),(long)*(int *)(this + 0x13c));
      bVar2 = std::operator==((string *)(*plVar11 + 0x10),"avatar");
      if (bVar2) {
        FUN_05475ffc((string *)local_18,asStack_28,7,0xffffffffffffffff);
        FUN_05474278(aRStack_20,(string *)local_18);
        std::string::~string((string *)local_18);
        thunk_FUN_05475e00(asStack_28,aRStack_20);
      }
      else {
        plVar11 = (long *)FUN_04a313fc(*(undefined8 *)(this + 0x120),(long)*(int *)(this + 0x13c));
        bVar2 = std::operator==((string *)(*plVar11 + 0x10),"new_avatar");
        if (bVar2) {
          FUN_05475ffc((string *)local_18,asStack_28,0xb,0xffffffffffffffff);
          FUN_05474278(aRStack_20,(string *)local_18);
          std::string::~string((string *)local_18);
          pNVar14 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
          iVar5 = NameMapperBase::GetIdForName(pNVar14,(string *)aRStack_20);
          NewAvatar::GetPlantNameByAvatarID(iVar5);
          FUN_05474278(asStack_28,(string *)local_18);
          std::string::~string((string *)local_18);
        }
      }
      std::string::~string((string *)aRStack_20);
    }
    psVar12 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar12);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)local_18,(RtWeakPtrBase *)aRStack_20);
    plVar11 = (long *)CreateStandalonePlantAnimRig((RtWeakPtr<Sexy::ResourceInfo> *)local_18,1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    (**(code **)(*plVar11 + 0x1a0))(plVar11,0);
    *(long **)(this + 0x160) = plVar11;
    this[0x159] = (GachaUI)0x1;
    fVar22 = (float)PVZ_T();
    *(float *)(this + 0x150) = fVar22 + 3.2;
    fVar22 = (float)PVZ_T();
    *(float *)(this + 0x154) = fVar22 + 1.3;
    StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x170),true);
    pEVar20 = *(Effect_PopAnim **)(this + 0x170);
    std::string::string((string *)local_18,"anim1");
    Effect_PopAnim::PlaySingleAnimation(pEVar20,(RtWeakPtr<Sexy::ResourceInfo> *)local_18,0);
    std::string::~string((string *)local_18);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    std::string::~string(asStack_28);
  }
LAB_04a3585c:
  fVar23 = *(float *)(this + 0x154);
  fVar22 = (float)PVZ_T();
  if (fVar23 < fVar22) {
    StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x178),true);
    psVar12 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    FUN_04a313fc(*(undefined8 *)(this + 0x120),(long)*(int *)(this + 0x13c));
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar12);
    cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_20);
    if (cVar3 != '\0') {
      plVar11 = *(long **)(this + 0x178);
      pcVar19 = *(code **)(*plVar11 + 0x78);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      PlantType::GetRareColor();
      (*pcVar19)(plVar11,local_18);
    }
    plVar11 = (long *)FUN_04a313fc(*(undefined8 *)(this + 0x120),(long)*(int *)(this + 0x13c));
    bVar2 = std::operator==((string *)(*plVar11 + 0x10),"avatar");
    if (bVar2) {
LAB_04a35d18:
      plVar11 = *(long **)(this + 0x178);
      pcVar19 = *(code **)(*plVar11 + 0x78);
      Sexy::Color::Color((Color *)local_18,0x30,0xf7,0xf5);
      (*pcVar19)(plVar11,(Color *)local_18);
    }
    else {
      plVar11 = (long *)FUN_04a313fc(*(undefined8 *)(this + 0x120),(long)*(int *)(this + 0x13c));
      bVar2 = std::operator==((string *)(*plVar11 + 0x10),"new_avatar");
      if (bVar2) goto LAB_04a35d18;
    }
    ShowCurrentPlant(this);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  }
  fVar23 = *(float *)(this + 0x150);
  fVar22 = (float)PVZ_T();
  if (fVar23 < fVar22) {
    uVar24 = PVZ_EOT();
    *(undefined4 *)(this + 0x150) = uVar24;
    *(undefined4 *)(this + 0x154) = uVar24;
    uVar24 = PVZ_T();
    this[0x15a] = (GachaUI)0x1;
    *(undefined4 *)(this + 0x144) = uVar24;
    fVar22 = (float)PVZ_T();
    *(float *)(this + 0x148) = fVar22 + 0.3;
  }
  if (((this[0x158] != (GachaUI)0x0) || (this[0x159] != (GachaUI)0x0)) ||
     (this[0x15a] != (GachaUI)0x0)) goto LAB_04a35818;
  fVar23 = *(float *)(this + 0x148);
  fVar22 = (float)PVZ_T();
  iVar5 = *(int *)(this + 0x13c);
  iVar4 = *(int *)(this + 0x138);
  if (fVar22 <= fVar23) {
LAB_04a35b98:
    if (iVar4 <= iVar5) goto LAB_04a35818;
    plVar11 = (long *)FUN_04a313fc(*(undefined8 *)(this + 0x120),(long)iVar5);
    lVar10 = *plVar11;
  }
  else {
    if (iVar4 <= iVar5) {
      uVar24 = PVZ_EOT();
      lVar10 = **(long **)(this + 0x100);
      *(undefined4 *)(this + 0x148) = uVar24;
      (**(code **)(lVar10 + 0x158))(*(long **)(this + 0x100),1);
      plVar11 = *(long **)(this + 0x108);
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x158))(plVar11,1);
        lVar10 = Sexy::LazySingleton<GachaMgr>::GetInstance();
        iVar5 = FUN_04a313ec(*(undefined4 *)(lVar10 + 0x44));
        (**(code **)(**(long **)(this + 0x108) + 0x188))(*(long **)(this + 0x108),iVar5 != 0);
      }
      iVar5 = *(int *)(this + 0x13c);
      iVar4 = *(int *)(this + 0x138);
      goto LAB_04a35b98;
    }
    uVar24 = PVZ_T();
    *(undefined4 *)(this + 0x144) = uVar24;
    fVar22 = (float)PVZ_T();
    *(undefined4 *)(this + 0x1b0) = 0x3dcccccd;
    *(float *)(this + 0x148) = fVar22 + 0.3;
    plVar11 = (long *)FUN_04a313fc(*(undefined8 *)(this + 0x120),(long)*(int *)(this + 0x13c));
    lVar10 = *plVar11;
    iVar5 = *(int *)(lVar10 + 0x20);
    iVar4 = *(int *)(lVar10 + 0x24);
    bVar2 = std::operator==((string *)(lVar10 + 0x10),"avatar");
    if (bVar2) {
LAB_04a35904:
      uVar17 = *(undefined8 *)(this + 0x120);
      bVar2 = true;
LAB_04a3590c:
      iVar6 = *(int *)(this + 0x140);
      uVar21 = *(undefined8 *)(this + 0x180);
      uVar15 = FUN_04a31404(uVar21,*(undefined8 *)(this + 0x188));
      if ((ulong)(long)iVar6 < uVar15) {
        puVar9 = (undefined8 *)FUN_04a31410(uVar21,(long)iVar6);
        this_02 = (StandaloneEffect *)*puVar9;
        if (this_02 != (StandaloneEffect *)0x0) {
          Sexy::FastCurve::SetOutRange((FastCurve *)local_18,(float)iVar5,(float)iVar4);
          StandaloneEffect::SetScreenSpaceOrigin(this_02,(SexyVector2 *)local_18,900000);
          puVar9 = (undefined8 *)
                   FUN_04a31410(*(undefined8 *)(this + 0x180),(long)*(int *)(this + 0x140));
          StandaloneEffect::SetVisibility((StandaloneEffect *)*puVar9,true);
          puVar9 = (undefined8 *)
                   FUN_04a31410(*(undefined8 *)(this + 0x180),(long)*(int *)(this + 0x140));
          pEVar20 = (Effect_PopAnim *)*puVar9;
          std::string::string((string *)local_18,"anim");
          PVZ_EOT();
          Effect_PopAnim::PlayLoopingAnimation(pEVar20,(FastCurve *)local_18,0);
          std::string::~string((string *)local_18);
          nop();
          iVar6 = *(int *)(this + 0x140);
          uVar17 = *(undefined8 *)(this + 0x120);
        }
      }
      iVar16 = *(int *)(this + 0x13c);
      *(int *)(this + 0x140) = iVar6 + 1;
      plVar11 = (long *)FUN_04a313fc(uVar17,(long)iVar16);
      if (((bVar2) || (*(char *)(*plVar11 + 0x2d) != '\0')) && (*(char *)(*plVar11 + 0x2e) == '\0'))
      {
        ShowCurrentPlant(this);
        iVar16 = *(int *)(this + 0x13c);
      }
    }
    else {
      plVar11 = (long *)FUN_04a313fc(*(undefined8 *)(this + 0x120),(long)*(int *)(this + 0x13c));
      bVar2 = std::operator==((string *)(*plVar11 + 0x10),"new_avatar");
      if (bVar2) goto LAB_04a35904;
      iVar16 = *(int *)(this + 0x13c);
      uVar17 = *(undefined8 *)(this + 0x120);
      plVar11 = (long *)FUN_04a313fc(uVar17,(long)iVar16);
      bVar2 = false;
      if (*(char *)(*plVar11 + 0x2d) != '\0') goto LAB_04a3590c;
    }
    iVar16 = iVar16 + 1;
    *(int *)(this + 0x13c) = iVar16;
    *(int *)(this + 0x1a0) = *(int *)(this + 0x1a0) + *(int *)(this + 0x1a8);
    if (iVar16 == 5) {
      local_18[0] = *(int *)(this + 0x138) + -5;
      piVar13 = eastl::min_alt<int>((int *)&DAT_05754e34,local_18);
      iVar5 = *piVar13;
      iVar4 = *(int *)(this + 0x50);
      this_01 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79a90);
      iVar6 = LotteryResultProgressBar::GetCurrentLevel(this_01);
      iVar7 = FUN_04a314f8(0x3c);
      iVar16 = *(int *)(this + 0x13c);
      *(int *)(this + 0x1a4) = *(int *)(this + 0x1a4) + *(int *)(this + 0x1ac);
      *(int *)(this + 0x1a0) =
           (int)((((float)iVar4 - (float)iVar6 * (float)(iVar5 + -1)) -
                 (float)((iVar5 + -1) * iVar7)) * 0.5);
    }
    if (*(int *)(this + 0x138) <= iVar16) goto LAB_04a35818;
    plVar11 = (long *)FUN_04a313fc(*(undefined8 *)(this + 0x120),(long)iVar16);
    bVar2 = std::operator==((string *)(*plVar11 + 0x10),"avatar");
    if (bVar2) {
      if (*(int *)(this + 0x138) <= *(int *)(this + 0x13c)) goto LAB_04a35818;
      plVar11 = *(long **)(this + 0x160);
      bVar2 = true;
      if (plVar11 != (long *)0x0) {
LAB_04a35a68:
        (**(code **)(*plVar11 + 0x18))();
        uVar17 = *(undefined8 *)(this + 0x120);
        *(undefined8 *)(this + 0x160) = 0;
        goto LAB_04a35a7c;
      }
      plVar11 = (long *)FUN_04a313fc(*(undefined8 *)(this + 0x120),(long)*(int *)(this + 0x13c));
      FUN_05475d88(asStack_28,*plVar11 + 0x18);
LAB_04a361f0:
      Set8BytesTo0((string *)aRStack_20);
      plVar11 = (long *)FUN_04a313fc(*(undefined8 *)(this + 0x120),(long)*(int *)(this + 0x13c));
      bVar2 = std::operator==((string *)(*plVar11 + 0x10),"avatar");
      if (bVar2) {
        FUN_05475ffc((string *)local_18,asStack_28,7,0xffffffffffffffff);
        FUN_05474278((string *)aRStack_20,(string *)local_18);
        std::string::~string((string *)local_18);
        thunk_FUN_05475e00(asStack_28,(string *)aRStack_20);
      }
      else {
        plVar11 = (long *)FUN_04a313fc(*(undefined8 *)(this + 0x120),(long)*(int *)(this + 0x13c));
        bVar2 = std::operator==((string *)(*plVar11 + 0x10),"new_avatar");
        if (bVar2) {
          FUN_05475ffc((string *)local_18,asStack_28,0xb,0xffffffffffffffff);
          FUN_05474278((string *)aRStack_20,(string *)local_18);
          std::string::~string((string *)local_18);
          pNVar14 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
          iVar5 = NameMapperBase::GetIdForName(pNVar14,(string *)aRStack_20);
          NewAvatar::GetPlantNameByAvatarID(iVar5);
          FUN_05474278(asStack_28,(string *)local_18);
          std::string::~string((string *)local_18);
        }
      }
      std::string::~string((string *)aRStack_20);
LAB_04a35aa8:
      psVar12 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar12);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_18,(RtWeakPtrBase *)aRStack_20);
      plVar11 = (long *)CreateStandalonePlantAnimRig((RtWeakPtr<Sexy::ResourceInfo> *)local_18,1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
      (**(code **)(*plVar11 + 0x1a0))(plVar11,0);
      *(long **)(this + 0x160) = plVar11;
      this[0x159] = (GachaUI)0x1;
      fVar22 = (float)PVZ_T();
      *(float *)(this + 0x150) = fVar22 + 3.2;
      fVar22 = (float)PVZ_T();
      *(undefined4 *)(this + 0x1b0) = 0x3f99999a;
      *(float *)(this + 0x154) = fVar22 + 1.0;
      StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x170),true);
      pEVar20 = *(Effect_PopAnim **)(this + 0x170);
      std::string::string((string *)local_18,"anim1");
      Effect_PopAnim::PlaySingleAnimation(pEVar20,(RtWeakPtr<Sexy::ResourceInfo> *)local_18,0);
      std::string::~string((string *)local_18);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      std::string::~string(asStack_28);
      iVar5 = *(int *)(this + 0x13c);
      iVar4 = *(int *)(this + 0x138);
      goto LAB_04a35b98;
    }
    plVar11 = (long *)FUN_04a313fc(*(undefined8 *)(this + 0x120),(long)*(int *)(this + 0x13c));
    bVar2 = std::operator==((string *)(*plVar11 + 0x10),"new_avatar");
    if (*(int *)(this + 0x138) <= *(int *)(this + 0x13c)) goto LAB_04a35818;
    uVar17 = *(undefined8 *)(this + 0x120);
    plVar11 = (long *)FUN_04a313fc(uVar17,(long)*(int *)(this + 0x13c));
    lVar10 = *plVar11;
    if ((bVar2) || (*(char *)(lVar10 + 0x2d) != '\0')) {
      plVar11 = *(long **)(this + 0x160);
      if (plVar11 != (long *)0x0) goto LAB_04a35a68;
LAB_04a35a7c:
      plVar11 = (long *)FUN_04a313fc(uVar17,(long)*(int *)(this + 0x13c));
      FUN_05475d88(asStack_28,*plVar11 + 0x18);
      if (bVar2 != false) goto LAB_04a361f0;
      goto LAB_04a35aa8;
    }
  }
  uVar27 = *(undefined4 *)(this + 0x144);
  uVar26 = *(undefined4 *)(this + 0x148);
  uVar24 = PVZ_T();
  iVar5 = CurveLerp<int>(uVar27,uVar26,uVar24,this + 0x198,this + 0x1a0,3);
  *(int *)(lVar10 + 0x20) = iVar5;
  plVar11 = (long *)FUN_04a313fc(*(undefined8 *)(this + 0x120),(long)*(int *)(this + 0x13c));
  lVar10 = *plVar11;
  uVar27 = *(undefined4 *)(this + 0x144);
  uVar26 = *(undefined4 *)(this + 0x148);
  uVar24 = PVZ_T();
  iVar5 = CurveLerp<int>(uVar27,uVar26,uVar24,this + 0x19c,this + 0x1a4,3);
  GVar1 = this[0x159];
  *(int *)(lVar10 + 0x24) = iVar5;
  if (GVar1 == (GachaUI)0x0) {
    local_18[0] = 0x3f800000;
    plVar11 = (long *)FUN_04a313fc(*(undefined8 *)(this + 0x120),(long)*(int *)(this + 0x13c));
    lVar10 = *plVar11;
    uVar24 = *(undefined4 *)(this + 0x148);
    auVar25 = PVZ_T();
    fVar22 = CurveLerp<float>(auVar25,uVar24,auVar25._0_4_,this + 0x1b0,local_18,3);
    *(float *)(lVar10 + 0x28) = fVar22;
  }
LAB_04a35818:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GachaUI::Draw(Sexy::Graphics*) */

void GachaUI::Draw(Graphics *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  float *pfVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long *plVar17;
  long lVar18;
  LotteryResultProgressBar *pLVar19;
  LotteryResultProgressBar *this;
  SalesProgressBar *pSVar20;
  string *psVar21;
  NameMapperBase *pNVar22;
  SeedPacketUtils *pSVar23;
  RtWeakPtr *this_00;
  ResourceInfo *pRVar24;
  Graphics *in_x1;
  Insets *in_x4;
  string *psVar25;
  ulong uVar26;
  undefined8 uVar27;
  float fVar28;
  int iVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar32 [16];
  RtMixedPtrBase aRStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  string asStack_30 [8];
  float local_28 [4];
  float local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  if (*(UIWidget **)(param_1 + 0x168) != (UIWidget *)0x0) {
    lVar13 = UIWidget::GetAtlasImage(*(UIWidget **)(param_1 + 0x168));
    if (lVar13 != 0) {
      lVar13 = FUN_04a313d0(*(undefined8 *)(lVar13 + 0x20));
      local_28[0] = 1.0;
      local_18[0] = (float)*(int *)(param_1 + 0x50) /
                    ((float)*(int *)(lVar13 + 0x3c) * *(float *)(lVar13 + 0x28));
      pfVar14 = eastl::max_alt<float>(local_28,local_18);
      (**(code **)(**(long **)(param_1 + 0x168) + 0x80))(*pfVar14,*(long **)(param_1 + 0x168));
    }
    StandaloneEffect::Draw(*(StandaloneEffect **)(param_1 + 0x168),in_x1);
  }
  uVar27 = *(undefined8 *)(param_1 + 0x180);
  uVar26 = 0;
  uVar15 = FUN_04a31404(uVar27,*(undefined8 *)(param_1 + 0x188));
  if (uVar15 != 0) {
    do {
      puVar16 = (undefined8 *)FUN_04a31410(uVar27,uVar26);
      if ((StandaloneEffect *)*puVar16 != (StandaloneEffect *)0x0) {
        StandaloneEffect::Draw((StandaloneEffect *)*puVar16,in_x1);
        uVar27 = *(undefined8 *)(param_1 + 0x180);
        uVar15 = FUN_04a31404(uVar27,*(undefined8 *)(param_1 + 0x188));
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 < uVar15);
  }
  iVar9 = *(int *)(param_1 + 0x138);
  lVar13 = 0;
  if (0 < iVar9) {
    do {
      while( true ) {
        iVar10 = (int)lVar13;
        plVar17 = (long *)FUN_04a313fc(*(undefined8 *)(param_1 + 0x120),lVar13);
        lVar18 = *plVar17;
        iVar11 = *(int *)(lVar18 + 0x20);
        if (-1 < iVar11) break;
LAB_04a364dc:
        lVar13 = lVar13 + 1;
        if (iVar9 <= iVar10 + 1) goto LAB_04a368e8;
      }
      uVar1 = *(uint *)(lVar18 + 0x24);
      psVar25 = (string *)(ulong)uVar1;
      in_x4 = (Insets *)psVar25;
      if ((int)uVar1 < 0) goto LAB_04a364dc;
      iVar8 = (int)param_1;
      if (*(char *)(lVar18 + 0x2d) != '\0') {
        if (*(char *)(lVar18 + 0x2e) != '\0') {
          psVar21 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
          FUN_04a313fc(*(undefined8 *)(param_1 + 0x120),lVar13);
          ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar21);
          cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_50);
          if (cVar2 != '\0') {
            lVar18 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
            FUN_05475ffc(asStack_48,lVar18 + 0x20,0xe,0xffffffffffffffff);
            uVar27 = FUN_0547429c(asStack_48);
            Sexy::StrFormat("%s%s",asStack_40,"IMAGE_UI_PACKETS_",uVar27);
            LawnApp::GetUIImageFromStringId(gLawnApp);
            if ((param_1[0x159] == (Graphics)0x0) ||
               (in_x4 = (Insets *)psVar25, *(int *)(param_1 + 0x13c) != iVar10)) {
              in_x4 = (Insets *)local_18;
              pLVar19 = (LotteryResultProgressBar *)
                        CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79d10);
              iVar9 = LotteryResultProgressBar::GetCurrentLevel(pLVar19);
              plVar17 = (long *)FUN_04a313fc(*(undefined8 *)(param_1 + 0x120),lVar13);
              iVar11 = (int)((float)iVar11 - (float)iVar9 * *(float *)(*plVar17 + 0x28) * 0.5);
              pSVar20 = (SalesProgressBar *)
                        CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79d10);
              iVar9 = SalesProgressBar::GetCurrentLevel(pSVar20);
              plVar17 = (long *)FUN_04a313fc(*(undefined8 *)(param_1 + 0x120),lVar13);
              iVar9 = (int)((float)(int)uVar1 - (float)iVar9 * *(float *)(*plVar17 + 0x28) * 0.5);
              pSVar23 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
              lVar18 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
              lVar18 = SeedPacketUtils::GetPlantPacketRenderData
                                 (pSVar23,(string *)(lVar18 + 8),-1,-1,-1);
              pRVar24 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_
                                  ((RtWeakPtr *)(lVar18 + 0x170));
              Sexy::Insets::Insets
                        (in_x4,iVar11 + *(int *)(lVar18 + 0x30),iVar9 + *(int *)(lVar18 + 0x34),
                         *(int *)(lVar18 + 0x28),*(int *)(lVar18 + 0x2c));
              Sexy::Graphics::DrawImage
                        (in_x1,(Image *)pRVar24,(TRect *)in_x4,(TRect *)(lVar18 + 0x20));
              pRVar24 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_
                                  ((RtWeakPtr *)(lVar18 + 0x170));
              Sexy::Graphics::DrawImage
                        (in_x1,(Image *)pRVar24,iVar11 + *(int *)(lVar18 + 0x18),
                         iVar9 + *(int *)(lVar18 + 0x1c),(TRect *)(lVar18 + 8));
              getGachaRewardName(iVar8);
              uVar27 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
              plVar17 = (long *)FUN_04a313fc(*(undefined8 *)(param_1 + 0x120),lVar13);
              iVar11 = FUN_04a314f8(100);
              iVar9 = *(int *)(*plVar17 + 0x20);
              pSVar20 = (SalesProgressBar *)
                        CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79a90);
              iVar8 = SalesProgressBar::GetCurrentLevel(pSVar20);
              iVar4 = FUN_04a314f8(200);
              FUN_05477b24(local_28,asStack_30);
              Sexy::Color::Color((Color *)in_x4,1);
              Sexy::PrimeTypeface::DrawString_Line
                        ((PrimeTypeface *)(float)(iVar9 - iVar11),
                         (float)(int)uVar1 + (float)iVar8 * 0.5,(float)iVar4,uVar27);
              FUN_05476c50(local_28);
              FUN_05476c50(asStack_30);
            }
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
            std::string::~string(asStack_40);
            std::string::~string(asStack_48);
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
          iVar9 = *(int *)(param_1 + 0x138);
        }
        goto LAB_04a364dc;
      }
      psVar25 = (string *)
                Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
      FUN_04a313fc(*(undefined8 *)(param_1 + 0x120),lVar13);
      ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar25);
      cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_50);
      if (cVar2 == '\0') {
        plVar17 = (long *)FUN_04a313fc(*(undefined8 *)(param_1 + 0x120),lVar13);
        bVar3 = std::operator==((string *)(*plVar17 + 0x18),"gem");
        if (!bVar3) {
          plVar17 = (long *)FUN_04a313fc(*(undefined8 *)(param_1 + 0x120),lVar13);
          FUN_05475d88(asStack_48,*plVar17 + 0x18);
          FUN_05475ffc((string *)local_18,asStack_48,0,7);
          bVar3 = std::operator==((string *)local_18,"avatar_");
          std::string::~string((string *)local_18);
          if (bVar3) {
            FUN_05475ffc((string *)local_18,asStack_48,7,0xffffffffffffffff);
            pNVar22 = (NameMapperBase *)AvatarNameMapperServerID::GetInstance();
LAB_04a36d7c:
            iVar9 = NameMapperBase::GetIdForName(pNVar22,(string *)local_18);
            lVar18 = NewAvatar::GetAvatarTinyImage(iVar9);
            std::string::~string((string *)local_18);
LAB_04a36d94:
            if (lVar18 != 0) {
              plVar17 = (long *)FUN_04a313fc(*(undefined8 *)(param_1 + 0x120),lVar13);
              iVar9 = *(int *)(*plVar17 + 0x20);
              pLVar19 = (LotteryResultProgressBar *)
                        CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79a90);
              iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar19);
              iVar5 = FUN_04a314f8(0x23);
              plVar17 = (long *)FUN_04a313fc(*(undefined8 *)(param_1 + 0x120),lVar13);
              iVar11 = *(int *)(*plVar17 + 0x24);
              pSVar20 = (SalesProgressBar *)
                        CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79a90);
              iVar6 = SalesProgressBar::GetCurrentLevel(pSVar20);
              iVar7 = FUN_04a314f8(0x8c);
              iVar12 = FUN_04a314f8(0x50);
              Sexy::Insets::Insets
                        ((Insets *)local_18,
                         (int)(((float)iVar9 - (float)iVar4 * 0.5) - (float)iVar5),
                         (int)((float)iVar11 - (float)iVar6 * 0.5),iVar7,iVar12);
              DrawAdaptiveImage();
            }
          }
          else {
            FUN_05475ffc((string *)local_18,asStack_48,0,0x11);
            bVar3 = std::operator==((string *)local_18,"new_avatar_piece_");
            std::string::~string((string *)local_18);
            if (bVar3) {
              FUN_05475ffc((string *)local_18,asStack_48,0x11,0xffffffffffffffff);
              pNVar22 = (NameMapperBase *)PlantNewAvatarPieceMapper::GetInstance();
              iVar9 = NameMapperBase::GetIdForName(pNVar22,(string *)local_18);
              lVar18 = NewAvatar::GetNewAvatarPieceImage(iVar9);
              std::string::~string((string *)local_18);
              goto LAB_04a36d94;
            }
            FUN_05475ffc((string *)local_18,asStack_48,0,0xb);
            bVar3 = std::operator==((string *)local_18,"new_avatar_");
            std::string::~string((string *)local_18);
            if (bVar3) {
              FUN_05475ffc((string *)local_18,asStack_48,0xb,0xffffffffffffffff);
              pNVar22 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
              goto LAB_04a36d7c;
            }
          }
          getGachaRewardName(iVar8);
          plVar17 = (long *)FUN_04a313fc(*(undefined8 *)(param_1 + 0x120),lVar13);
          bVar3 = std::operator==((string *)(*plVar17 + 0x10),"new_avatar_piece_");
          if (bVar3) {
            Sexy::Color::Color((Color *)local_28,0xff,0xde,0);
          }
          else {
            Sexy::Color::Color((Color *)local_28,1);
          }
          goto LAB_04a3670c;
        }
        psVar25 = (string *)local_18;
        std::string::string(psVar25,"IMAGE_UI_DIALOG_ASSET_GEM_LARGE");
        lVar18 = StringHelper::ToImage(psVar25,false);
        std::string::~string(psVar25);
        nop();
        if (lVar18 != 0) {
          plVar17 = (long *)FUN_04a313fc(*(undefined8 *)(param_1 + 0x120),lVar13);
          iVar9 = *(int *)(*plVar17 + 0x20);
          pLVar19 = (LotteryResultProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79a90);
          iVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar19);
          iVar4 = FUN_04a314f8(0x23);
          plVar17 = (long *)FUN_04a313fc(*(undefined8 *)(param_1 + 0x120),lVar13);
          iVar11 = *(int *)(*plVar17 + 0x24);
          pSVar20 = (SalesProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79a90);
          iVar5 = SalesProgressBar::GetCurrentLevel(pSVar20);
          iVar6 = FUN_04a314f8(0x8c);
          iVar7 = FUN_04a314f8(0x50);
          Sexy::Insets::Insets
                    ((Insets *)psVar25,(int)(((float)iVar9 - (float)iVar8 * 0.5) - (float)iVar4),
                     (int)((float)iVar11 - (float)iVar5 * 0.5),iVar6,iVar7);
          DrawAdaptiveImage();
        }
        TodStringTranslate(L"[GEM_STORE]");
        uVar27 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
        plVar17 = (long *)FUN_04a313fc(*(undefined8 *)(param_1 + 0x120),lVar13);
        lVar18 = *plVar17;
        iVar8 = FUN_04a314f8(100);
        iVar9 = *(int *)(lVar18 + 0x20);
        iVar11 = *(int *)(lVar18 + 0x24);
        pSVar20 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79a90);
        iVar4 = SalesProgressBar::GetCurrentLevel(pSVar20);
        iVar5 = FUN_04a314f8(10);
        iVar6 = FUN_04a314f8(200);
        FUN_05477b24(local_28,aRStack_38);
        Sexy::Color::Color((Color *)psVar25,1);
        in_x4 = (Insets *)psVar25;
        Sexy::PrimeTypeface::DrawString_Line
                  ((PrimeTypeface *)(float)(iVar9 - iVar8),
                   (float)iVar5 + (float)iVar11 + (float)iVar4 * 0.5,(float)iVar6,uVar27);
        FUN_05476c50(local_28);
        plVar17 = (long *)FUN_04a313fc(*(undefined8 *)(param_1 + 0x120),lVar13);
        if (1 < *(int *)(*plVar17 + 0x30)) {
          Sexy::StrFormat(L"x%d",asStack_30);
          uVar27 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_20)
          ;
          plVar17 = (long *)FUN_04a313fc(*(undefined8 *)(param_1 + 0x120),lVar13);
          lVar18 = *plVar17;
          iVar8 = FUN_04a314f8(0x28);
          iVar9 = *(int *)(lVar18 + 0x20);
          iVar4 = FUN_04a314f8(0x1e);
          iVar11 = *(int *)(lVar18 + 0x24);
          iVar5 = FUN_04a314f8(0xa0);
          FUN_05477b24(local_28,asStack_30);
          Sexy::Color::Color((Color *)psVar25,1);
          Sexy::PrimeTypeface::DrawString_Line
                    ((PrimeTypeface *)(float)(iVar8 + iVar9),(float)(iVar4 + iVar11),(float)iVar5,
                     uVar27);
          FUN_05476c50(local_28);
          FUN_05476c50(asStack_30);
          in_x4 = (Insets *)psVar25;
        }
        FUN_05476c50(aRStack_38);
      }
      else {
        lVar18 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
        FUN_05475d88(asStack_48,lVar18 + 8);
        FUN_05475ffc((string *)local_18,asStack_48,0,0xc);
        bVar3 = std::operator==((string *)local_18,"plant_piece_");
        std::string::~string((string *)local_18);
        if (bVar3) {
          FUN_05475ffc(asStack_30,asStack_48,0xc,0xffffffffffffffff);
          psVar25 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
          ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar25);
          cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)local_28);
          if (cVar2 != '\0') {
            pSVar23 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
            lVar18 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
            this_00 = (RtWeakPtr *)
                      SeedPacketUtils::GetPlantPiecePacketRenderData(pSVar23,(string *)(lVar18 + 8))
            ;
            plVar17 = (long *)FUN_04a313fc(*(undefined8 *)(param_1 + 0x120),lVar13);
            iVar9 = *(int *)(*plVar17 + 0x20);
            pLVar19 = (LotteryResultProgressBar *)
                      CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79b40);
            iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar19);
            plVar17 = (long *)FUN_04a313fc(*(undefined8 *)(param_1 + 0x120),lVar13);
            iVar11 = *(int *)(*plVar17 + 0x24);
            pSVar20 = (SalesProgressBar *)
                      CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79b40);
            iVar12 = SalesProgressBar::GetCurrentLevel(pSVar20);
            plVar17 = (long *)FUN_04a313fc(*(undefined8 *)(param_1 + 0x120),lVar13);
            iVar4 = *(int *)(this_00 + 0x28);
            iVar5 = *(int *)(this_00 + 0x2c);
            fVar31 = *(float *)(*plVar17 + 0x28);
            iVar29 = *(int *)(this_00 + 0x14);
            iVar6 = *(int *)(this_00 + 0x10);
            pRVar24 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00 + 0x170);
            fVar30 = (float)(int)((float)iVar9 - (float)iVar7 * 0.5);
            plVar17 = (long *)FUN_04a313fc(*(undefined8 *)(param_1 + 0x120),lVar13);
            fVar28 = (float)(int)((float)iVar11 - (float)iVar12 * 0.5);
            Sexy::Insets::Insets
                      ((Insets *)local_18,
                       (int)(fVar30 + *(float *)(*plVar17 + 0x28) * (float)*(int *)(this_00 + 0x30))
                       ,(int)(fVar28 + *(float *)(*plVar17 + 0x28) * (float)*(int *)(this_00 + 0x34)
                             ),(int)((float)iVar4 * fVar31),(int)((float)iVar5 * fVar31));
            Sexy::Graphics::DrawImage
                      (in_x1,(Image *)pRVar24,(TRect *)local_18,(TRect *)(this_00 + 0x20));
            bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
            if (bVar3) {
              lVar18 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
              pRVar24 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_
                                  ((RtWeakPtr *)(lVar18 + 0x48));
              plVar17 = (long *)FUN_04a313fc(*(undefined8 *)(param_1 + 0x120),lVar13);
              Sexy::Insets::Insets
                        ((Insets *)local_18,
                         (int)(fVar30 + *(float *)(*plVar17 + 0x28) *
                                        (float)*(int *)(this_00 + 0x18)),
                         (int)(fVar28 + *(float *)(*plVar17 + 0x28) *
                                        (float)*(int *)(this_00 + 0x1c)),
                         (int)((float)iVar6 * fVar31),(int)((float)iVar29 * fVar31));
              Sexy::Graphics::DrawImage
                        (in_x1,(Image *)pRVar24,(TRect *)local_18,(TRect *)(this_00 + 8));
            }
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_28)
          ;
          std::string::~string(asStack_30);
        }
        else {
          lVar18 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
          pLVar19 = (LotteryResultProgressBar *)
                    StringHelper::ToImage((string *)(lVar18 + 0x60),false);
          if (pLVar19 != (LotteryResultProgressBar *)0x0) {
            plVar17 = (long *)FUN_04a313fc(*(undefined8 *)(param_1 + 0x120),lVar13);
            iVar9 = *(int *)(*plVar17 + 0x20);
            this = (LotteryResultProgressBar *)
                   CachedUIResourcePtr<Sexy::Image>::operator->
                             ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79a90);
            iVar4 = LotteryResultProgressBar::GetCurrentLevel(this);
            plVar17 = (long *)FUN_04a313fc(*(undefined8 *)(param_1 + 0x120),lVar13);
            iVar11 = *(int *)(*plVar17 + 0x24);
            pSVar20 = (SalesProgressBar *)
                      CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79a90);
            iVar5 = SalesProgressBar::GetCurrentLevel(pSVar20);
            iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar19);
            plVar17 = (long *)FUN_04a313fc(*(undefined8 *)(param_1 + 0x120),lVar13);
            fVar28 = *(float *)(*plVar17 + 0x28);
            iVar7 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar19);
            plVar17 = (long *)FUN_04a313fc(*(undefined8 *)(param_1 + 0x120),lVar13);
            Sexy::Graphics::DrawImage
                      (in_x1,(Image *)pLVar19,(int)((float)iVar9 - (float)iVar4 * 0.5),
                       (int)((float)iVar11 - (float)iVar5 * 0.5),(int)((float)iVar6 * fVar28),
                       (int)((float)iVar7 * *(float *)(*plVar17 + 0x28)));
          }
        }
        getGachaRewardName(iVar8);
        plVar17 = (long *)FUN_04a313fc(*(undefined8 *)(param_1 + 0x120),lVar13);
        bVar3 = std::operator==((string *)(*plVar17 + 0x10),"avatar_piece");
        if (bVar3) {
          Sexy::Color::Color((Color *)local_28,0xff,0xde,0);
        }
        else {
          Sexy::Color::Color((Color *)local_28,1);
        }
LAB_04a3670c:
        psVar25 = (string *)local_18;
        uVar27 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
        plVar17 = (long *)FUN_04a313fc(*(undefined8 *)(param_1 + 0x120),lVar13);
        lVar18 = *plVar17;
        iVar8 = FUN_04a314f8(100);
        iVar9 = *(int *)(lVar18 + 0x20);
        iVar11 = *(int *)(lVar18 + 0x24);
        pSVar20 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79a90);
        iVar4 = SalesProgressBar::GetCurrentLevel(pSVar20);
        iVar5 = FUN_04a314f8(10);
        iVar6 = FUN_04a314f8(200);
        FUN_05477b24(asStack_30,asStack_40);
        Sexy::Insets::Insets((Insets *)psVar25,(Insets *)local_28);
        in_x4 = (Insets *)psVar25;
        Sexy::PrimeTypeface::DrawString_Line
                  ((PrimeTypeface *)(float)(iVar9 - iVar8),
                   (float)iVar5 + (float)iVar11 + (float)iVar4 * 0.5,(float)iVar6,uVar27);
        FUN_05476c50(asStack_30);
        plVar17 = (long *)FUN_04a313fc(*(undefined8 *)(param_1 + 0x120),lVar13);
        if (1 < *(int *)(*plVar17 + 0x30)) {
          Sexy::StrFormat(L"x%d",aRStack_38);
          uVar27 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_20)
          ;
          plVar17 = (long *)FUN_04a313fc(*(undefined8 *)(param_1 + 0x120),lVar13);
          lVar18 = *plVar17;
          iVar8 = FUN_04a314f8(0x28);
          iVar9 = *(int *)(lVar18 + 0x20);
          iVar4 = FUN_04a314f8(0x1e);
          iVar11 = *(int *)(lVar18 + 0x24);
          iVar5 = FUN_04a314f8(0x14);
          FUN_05477b24(asStack_30,aRStack_38);
          Sexy::Color::Color((Color *)psVar25,1);
          Sexy::PrimeTypeface::DrawString_Line
                    ((PrimeTypeface *)(float)(iVar8 + iVar9),(float)(iVar4 + iVar11),(float)iVar5,
                     uVar27);
          FUN_05476c50(asStack_30);
          FUN_05476c50(aRStack_38);
          in_x4 = (Insets *)psVar25;
        }
        FUN_05476c50(asStack_40);
        std::string::~string(asStack_48);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
      iVar9 = *(int *)(param_1 + 0x138);
      lVar13 = lVar13 + 1;
    } while (iVar10 + 1 < iVar9);
LAB_04a368e8:
    if ((gLawnApp[0x2a00] != (string)0x0) && (0 < iVar9)) {
      lVar13 = 0;
      do {
        puVar16 = (undefined8 *)FUN_04a313fc(*(undefined8 *)(param_1 + 0x120),lVar13);
        DrawPlantID_Debug((GachaUI *)param_1,in_x1,(GachaRewardUI *)*puVar16);
        iVar9 = (int)lVar13;
        lVar13 = lVar13 + 1;
      } while (iVar9 + 1 < *(int *)(param_1 + 0x138));
    }
  }
  if (param_1[0x159] != (Graphics)0x0) {
    Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)local_28,in_x1);
    Sexy::Graphics::ClearClipRect(in_x1);
    *(undefined4 *)(in_x1 + 0x10) = 0;
    *(undefined4 *)(in_x1 + 0x14) = 0;
    Sexy::Insets::Insets((Insets *)local_18,0,0,0,0xb2);
    Sexy::Graphics::SetColor(in_x1,(Color *)local_18);
    in_x4 = (Insets *)(ulong)*(uint *)(param_1 + 0x54);
    Sexy::Graphics::FillRect(in_x1,0,0,*(int *)(param_1 + 0x50),*(uint *)(param_1 + 0x54));
    Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)local_28);
  }
  if (*(StandaloneEffect **)(param_1 + 0x170) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Draw(*(StandaloneEffect **)(param_1 + 0x170),in_x1);
  }
  if (*(StandaloneEffect **)(param_1 + 0x178) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Draw(*(StandaloneEffect **)(param_1 + 0x178),in_x1);
  }
  if (param_1[0x159] == (Graphics)0x0) goto LAB_04a36984;
  plVar17 = (long *)FUN_04a313fc(*(undefined8 *)(param_1 + 0x120),(long)*(int *)(param_1 + 0x13c));
  if (*(char *)(*plVar17 + 0x2e) == '\0') goto LAB_04a36984;
  bVar3 = std::operator==((string *)(*plVar17 + 0x10),"plant");
  if (bVar3) {
    auVar32 = FUN_04a313fc(*(undefined8 *)(param_1 + 0x120),(long)*(int *)(param_1 + 0x13c));
    Sexy::StringToUpper((Sexy *)(*auVar32._0_8_ + 0x18),auVar32._8_8_);
    std::operator+((string *)&PlantHeadshot::PlantBigPrefix,(string *)local_28);
    pLVar19 = (LotteryResultProgressBar *)StringHelper::ToImage((string *)local_18,true);
    std::string::~string((string *)local_18);
    std::string::~string((string *)local_28);
LAB_04a36f94:
    if (pLVar19 != (LotteryResultProgressBar *)0x0) {
      iVar9 = *(int *)(param_1 + 0x50);
      iVar10 = LotteryResultProgressBar::GetCurrentLevel(pLVar19);
      iVar11 = *(int *)(param_1 + 0x54);
      iVar8 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar19);
      iVar4 = FUN_04a314f8(0x32);
      Sexy::Graphics::DrawImage
                (in_x1,(Image *)pLVar19,(iVar9 - iVar10) / 2,iVar4 + (iVar11 - iVar8) / 2);
    }
  }
  else {
    plVar17 = (long *)FUN_04a313fc(*(undefined8 *)(param_1 + 0x120),(long)*(int *)(param_1 + 0x13c))
    ;
    bVar3 = std::operator==((string *)(*plVar17 + 0x10),"avatar");
    if (bVar3) {
      plVar17 = (long *)FUN_04a313fc(*(undefined8 *)(param_1 + 0x120),
                                     (long)*(int *)(param_1 + 0x13c));
      FUN_05475ffc(local_18,*plVar17 + 0x18,7,0xffffffffffffffff);
      pNVar22 = (NameMapperBase *)AvatarNameMapperServerID::GetInstance();
LAB_04a36f7c:
      iVar9 = NameMapperBase::GetIdForName(pNVar22,(string *)local_18);
      pLVar19 = (LotteryResultProgressBar *)NewAvatar::GetAvatarTinyImage(iVar9);
      std::string::~string((string *)local_18);
      goto LAB_04a36f94;
    }
    plVar17 = (long *)FUN_04a313fc(*(undefined8 *)(param_1 + 0x120),(long)*(int *)(param_1 + 0x13c))
    ;
    bVar3 = std::operator==((string *)(*plVar17 + 0x10),"new_avatar");
    if (bVar3) {
      plVar17 = (long *)FUN_04a313fc(*(undefined8 *)(param_1 + 0x120),
                                     (long)*(int *)(param_1 + 0x13c));
      FUN_05475ffc(local_18,*plVar17 + 0x18,0xb,0xffffffffffffffff);
      pNVar22 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
      goto LAB_04a36f7c;
    }
  }
  plVar17 = (long *)FUN_04a313fc(*(undefined8 *)(param_1 + 0x120),(long)*(int *)(param_1 + 0x13c));
  if (*(char *)(*plVar17 + 0x34) == '\0') {
    bVar3 = std::operator==((string *)(*plVar17 + 0x10),"avatar");
    if (!bVar3) {
      plVar17 = (long *)FUN_04a313fc(*(undefined8 *)(param_1 + 0x120),
                                     (long)*(int *)(param_1 + 0x13c));
      bVar3 = std::operator==((string *)(*plVar17 + 0x10),"new_avatar");
      if (!bVar3) {
        std::string::string(asStack_30,"iOS PvZ2 Plant Store");
        std::string::string((string *)local_28,"Plant Pieces");
        std::string::string((string *)local_18,"plant");
        plVar17 = (long *)FUN_04a313fc(*(undefined8 *)(param_1 + 0x120),
                                       (long)*(int *)(param_1 + 0x13c));
        Magento::FindStoreProduct
                  ((Magento *)asStack_30,(string *)local_28,(string *)local_18,
                   (string *)(*plVar17 + 0x18),(string *)in_x4);
        std::string::~string((string *)local_18);
        nop();
        std::string::~string((string *)local_28);
        nop();
        std::string::~string(asStack_30);
        nop();
        cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_38);
        if (cVar2 == '\0') {
          iVar9 = 0;
        }
        else {
          lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
          iVar9 = *(int *)(lVar13 + 0x90);
        }
        TodStringTranslate(L"[GACHA_GOT_PLANT_HINT]");
        TodReplaceNumberString((wstring *)local_18,L"{PIECE_COUNT}",iVar9);
        FUN_05476c50((string *)local_18);
        uVar27 = PrimeText_PotentialTypeface::Typeface
                           (PrimeText_Game::Typeface_FZShaoEr_32_ThickOutline);
        iVar11 = FUN_04a314f8(500);
        iVar9 = *(int *)(param_1 + 0x50);
        FUN_05477b24((string *)local_28,asStack_30);
        Sexy::Color::Color((Color *)local_18,1);
        Sexy::PrimeTypeface::DrawString_Line((PrimeTypeface *)0x0,(float)iVar11,(float)iVar9,uVar27)
        ;
        FUN_05476c50((string *)local_28);
        FUN_05476c50(asStack_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
        goto LAB_04a36984;
      }
    }
    TodStringTranslate(L"[GACHA_GOT_AVATAR_HINT]");
    TodReplaceNumberString((wstring *)local_18,L"{PIECE_COUNT}",0xf);
    FUN_05476c50((wstring *)local_18);
    uVar27 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_FZShaoEr_32_ThickOutline);
    iVar11 = FUN_04a314f8(500);
    iVar9 = *(int *)(param_1 + 0x50);
    FUN_05477b24(local_28,asStack_30);
    Sexy::Color::Color((Color *)local_18,1);
    Sexy::PrimeTypeface::DrawString_Line((PrimeTypeface *)0x0,(float)iVar11,(float)iVar9,uVar27);
    FUN_05476c50(local_28);
    FUN_05476c50(asStack_30);
  }
LAB_04a36984:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GachaUI::dealGachaPoolResult() */

void __thiscall GachaUI::dealGachaPoolResult(GachaUI *this)

{
  vector<GachaRewardUI*,std::allocator<GachaRewardUI*>> *this_00;
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  PlayerInfo *this_01;
  long lVar7;
  WorldMap *this_02;
  ulong uVar8;
  long *plVar9;
  NameMapperBase *this_03;
  char *pcVar10;
  TGALogMgr *pTVar11;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_04;
  string *psVar12;
  ProfileMgr *this_05;
  PlayerInfo *this_06;
  GachaRewardUI *pGVar13;
  ulong uVar14;
  LawnApp *pLVar15;
  undefined8 uVar16;
  TGATenYearsData *local_1c8;
  string asStack_1b8 [8];
  string asStack_1b0 [8];
  TGATenYearsData aTStack_1a8 [8];
  string asStack_1a0 [8];
  undefined1 auStack_198 [8];
  GachaRewardUI *local_190 [3];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (UILimitedGacha::s_pWidgetHandler == 0) {
    ClearGachaResult(this);
  }
  this_01 = (PlayerInfo *)ProfileUtils::Profile();
  lVar7 = Sexy::LazySingleton<GachaMgr>::GetInstance();
  iVar4 = FUN_04a313ec(*(undefined4 *)(lVar7 + 0x44));
  if (iVar4 != 0) {
    ClearGachaResult(this);
    lVar7 = Sexy::LazySingleton<GachaMgr>::GetInstance();
    iVar4 = FUN_04a313ec(*(undefined4 *)(lVar7 + 0x44));
    if (iVar4 == 2) {
      bVar1 = false;
      dealGachaFree(this,1);
      lVar7 = Sexy::LazySingleton<GachaMgr>::GetInstance();
      iVar4 = FUN_04a313ec(*(undefined4 *)(lVar7 + 0x44));
    }
    else {
      lVar7 = Sexy::LazySingleton<GachaMgr>::GetInstance();
      iVar4 = FUN_04a313ec(*(undefined4 *)(lVar7 + 0x44));
      if (iVar4 == 3) {
        bVar1 = true;
        dealGachaFree(this,2);
      }
      else {
        lVar7 = Sexy::LazySingleton<GachaMgr>::GetInstance();
        iVar4 = FUN_04a313ec(*(undefined4 *)(lVar7 + 0x44));
        if (iVar4 == 4) {
          bVar1 = false;
          dealGacha10Times(this);
        }
        else {
          bVar1 = false;
          dealGachaFree(this,0);
        }
      }
      lVar7 = Sexy::LazySingleton<GachaMgr>::GetInstance();
      iVar4 = FUN_04a313ec(*(undefined4 *)(lVar7 + 0x44));
    }
    pLVar15 = gLawnApp;
    if (iVar4 == 2) {
      this_02 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
      if (this_02 != (WorldMap *)0x0) {
        WorldMap::ForceTutorialToFinish(this_02);
        pLVar15 = gLawnApp;
      }
      LawnApp::KillGameMaskUI(pLVar15);
      PlayerInfo::CompleteTutorial(this_01,0x17);
      MessageRouter::Post((_func_void *)gMessageRouter);
      MessageRouter::Post((_func_void *)gMessageRouter);
      MessageRouter::Post<int,TutorialEvent>
                ((MessageRouter *)gMessageRouter,Message::TutorialFTUE,9);
      MessageRouter::Post<int,int,TutorialType,TutorialEventNew>
                ((MessageRouter *)gMessageRouter,Message::Toturi,0,0x19);
      lVar7 = Sexy::LazySingleton<GachaMgr>::GetInstance();
      FUN_04a314ec(lVar7 + 0x61);
      MessageRouter::Post((_func_void *)gMessageRouter);
    }
    else {
      lVar7 = Sexy::LazySingleton<GachaMgr>::GetInstance();
      iVar4 = FUN_04a313ec(*(undefined4 *)(lVar7 + 0x44));
      if (iVar4 == 3) {
        LawnApp::KillGameMaskUI(gLawnApp);
      }
      else {
        lVar7 = Sexy::LazySingleton<GachaMgr>::GetInstance();
        iVar4 = FUN_04a313ec(*(undefined4 *)(lVar7 + 0x44));
        if (iVar4 == 4) {
          LawnApp::KillGameMaskUI(gLawnApp);
        }
      }
    }
    goto LAB_04a37b58;
  }
  psVar12 = (string *)(this + 0x110);
  bVar1 = std::operator==(psVar12,"gacha_diamond10");
  if (bVar1) {
    dealGacha10Times(this);
    if (UILimitedGacha::s_pWidgetHandler == 0) {
      if (this[0x11c] != (GachaUI)0x0) {
        uVar6 = 10;
        DealGachaDayFirstPay(this,2);
        goto LAB_04a37d58;
      }
      uVar6 = 10;
      goto LAB_04a37d64;
    }
  }
  else {
    bVar1 = std::operator==(psVar12,"gacha_diamond");
    if (bVar1) {
      if (this[0x11c] == (GachaUI)0x0) {
        dealGachaFree(this,0);
        uVar6 = 0;
      }
      else {
        if (UILimitedGacha::s_pWidgetHandler == 0) {
          DealGachaDayFirstPay(this,1);
        }
        cVar3 = PlayerInfo::isFirstDiamondGacha(this_01);
        if (cVar3 == '\0') {
          uVar6 = 1;
          dealFirstGacha1Time(this);
          PlayerInfo::setFirstDiamondGacha(this_01,true);
        }
        else {
          uVar6 = 1;
          dealGacha1Time(this);
        }
      }
    }
    else {
      bVar2 = std::operator==(psVar12,"active_nationalday");
      if (bVar2) {
        ClearGachaResult(this);
        this_04 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)NatinalDayRewardMgr::GetInstance();
        psVar12 = (string *)
                  std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_end(this_04);
        this_05 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        this_06 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_05);
        if (*(int *)(psVar12 + 8) == 0) {
          cVar3 = PlayerInfo::GetIsPlantUnlocked(this_06,psVar12);
          if (cVar3 == '\0') {
            FUN_05475d88(asStack_1b0,psVar12);
            std::string::string((string *)aTStack_1a8,"plant");
            pGVar13 = ::operator_new(0x38);
            GachaRewardUI::GachaRewardUI
                      (pGVar13,asStack_1b0,(string *)aTStack_1a8,1,*(undefined4 *)(psVar12 + 0xc),1)
            ;
            local_190[0] = pGVar13;
          }
          else {
            FUN_05475d88(asStack_1b0,psVar12);
            std::string::string((string *)aTStack_1a8,"plant");
            pGVar13 = ::operator_new(0x38);
            GachaRewardUI::GachaRewardUI
                      (pGVar13,asStack_1b0,(string *)aTStack_1a8,1,*(undefined4 *)(psVar12 + 0xc),0)
            ;
            local_190[0] = pGVar13;
          }
          uVar6 = 0;
          std::vector<GachaRewardUI*,std::allocator<GachaRewardUI*>>::push_back
                    ((vector<GachaRewardUI*,std::allocator<GachaRewardUI*>> *)(this + 0x120),
                     local_190);
          std::string::~string((string *)aTStack_1a8);
          nop();
          std::string::~string(asStack_1b0);
        }
        else if (*(int *)(psVar12 + 8) == 1) {
          FUN_031f5e7c(asStack_1b8,"plant_piece_",psVar12);
          FUN_05475d88(asStack_1b0,asStack_1b8);
          std::string::string((string *)aTStack_1a8,"plant_piece");
          pGVar13 = ::operator_new(0x38);
          GachaRewardUI::GachaRewardUI
                    (pGVar13,asStack_1b0,(string *)aTStack_1a8,bVar1,*(undefined4 *)(psVar12 + 0xc),
                     bVar1);
          local_190[0] = pGVar13;
          std::vector<GachaRewardUI*,std::allocator<GachaRewardUI*>>::push_back
                    ((vector<GachaRewardUI*,std::allocator<GachaRewardUI*>> *)(this + 0x120),
                     local_190);
          std::string::~string((string *)aTStack_1a8);
          nop();
          std::string::~string(asStack_1b0);
          std::string::~string(asStack_1b8);
          uVar6 = 0;
        }
        else {
          uVar6 = (uint)bVar1;
        }
      }
      else {
        std::string::string(asStack_1b0,"avatar_piece_torchwood");
        this_00 = (vector<GachaRewardUI*,std::allocator<GachaRewardUI*>> *)(this + 0x120);
        std::string::string((string *)aTStack_1a8,"avatar_piece");
        pGVar13 = ::operator_new(0x38);
        GachaRewardUI::GachaRewardUI(pGVar13,asStack_1b0,(string *)aTStack_1a8,bVar2,1,bVar2);
        local_190[0] = pGVar13;
        std::vector<GachaRewardUI*,std::allocator<GachaRewardUI*>>::push_back(this_00,local_190);
        std::string::~string((string *)aTStack_1a8);
        nop();
        std::string::~string(asStack_1b0);
        nop();
        std::string::string(asStack_1b0,"avatar_piece_torchwood");
        std::string::string((string *)aTStack_1a8,"avatar_piece");
        pGVar13 = ::operator_new(0x38);
        GachaRewardUI::GachaRewardUI(pGVar13,asStack_1b0,(string *)aTStack_1a8,bVar2,2,bVar2);
        local_190[0] = pGVar13;
        std::vector<GachaRewardUI*,std::allocator<GachaRewardUI*>>::push_back(this_00,local_190);
        std::string::~string((string *)aTStack_1a8);
        nop();
        std::string::~string(asStack_1b0);
        nop();
        std::string::string(asStack_1b0,"avatar_piece_torchwood");
        std::string::string((string *)aTStack_1a8,"avatar_piece");
        pGVar13 = ::operator_new(0x38);
        GachaRewardUI::GachaRewardUI(pGVar13,asStack_1b0,(string *)aTStack_1a8,bVar2,3,bVar2);
        local_190[0] = pGVar13;
        std::vector<GachaRewardUI*,std::allocator<GachaRewardUI*>>::push_back(this_00,local_190);
        std::string::~string((string *)aTStack_1a8);
        nop();
        std::string::~string(asStack_1b0);
        nop();
        std::string::string(asStack_1b0,"avatar_piece_torchwood");
        std::string::string((string *)aTStack_1a8,"avatar_piece");
        pGVar13 = ::operator_new(0x38);
        GachaRewardUI::GachaRewardUI(pGVar13,asStack_1b0,(string *)aTStack_1a8,bVar2,4,bVar2);
        local_190[0] = pGVar13;
        std::vector<GachaRewardUI*,std::allocator<GachaRewardUI*>>::push_back(this_00,local_190);
        std::string::~string((string *)aTStack_1a8);
        nop();
        std::string::~string(asStack_1b0);
        nop();
        std::string::string(asStack_1b0,"plant_piece_wintermelon");
        std::string::string((string *)aTStack_1a8,"plant_piece");
        pGVar13 = ::operator_new(0x38);
        GachaRewardUI::GachaRewardUI(pGVar13,asStack_1b0,(string *)aTStack_1a8,bVar2,5,bVar2);
        local_190[0] = pGVar13;
        std::vector<GachaRewardUI*,std::allocator<GachaRewardUI*>>::push_back(this_00,local_190);
        std::string::~string((string *)aTStack_1a8);
        nop();
        std::string::~string(asStack_1b0);
        nop();
        std::string::string(asStack_1b0,"plant_piece_kernelpult");
        std::string::string((string *)aTStack_1a8,"plant_piece");
        pGVar13 = ::operator_new(0x38);
        GachaRewardUI::GachaRewardUI(pGVar13,asStack_1b0,(string *)aTStack_1a8,bVar2,1,bVar2);
        local_190[0] = pGVar13;
        std::vector<GachaRewardUI*,std::allocator<GachaRewardUI*>>::push_back(this_00,local_190);
        std::string::~string((string *)aTStack_1a8);
        nop();
        std::string::~string(asStack_1b0);
        nop();
        std::string::string(asStack_1b0,"plant_piece_wintermelon");
        std::string::string((string *)aTStack_1a8,"plant_piece");
        pGVar13 = ::operator_new(0x38);
        GachaRewardUI::GachaRewardUI(pGVar13,asStack_1b0,(string *)aTStack_1a8,bVar2,5,bVar2);
        local_190[0] = pGVar13;
        std::vector<GachaRewardUI*,std::allocator<GachaRewardUI*>>::push_back(this_00,local_190);
        std::string::~string((string *)aTStack_1a8);
        nop();
        std::string::~string(asStack_1b0);
        nop();
        std::string::string(asStack_1b0,"plant_piece_kernelpult");
        std::string::string((string *)aTStack_1a8,"plant_piece");
        pGVar13 = ::operator_new(0x38);
        GachaRewardUI::GachaRewardUI(pGVar13,asStack_1b0,(string *)aTStack_1a8,bVar2,7,bVar2);
        local_190[0] = pGVar13;
        std::vector<GachaRewardUI*,std::allocator<GachaRewardUI*>>::push_back(this_00,local_190);
        std::string::~string((string *)aTStack_1a8);
        nop();
        std::string::~string(asStack_1b0);
        nop();
        std::string::string(asStack_1b0,"cabbagepult");
        std::string::string((string *)aTStack_1a8,"plant");
        pGVar13 = ::operator_new(0x38);
        GachaRewardUI::GachaRewardUI(pGVar13,asStack_1b0,(string *)aTStack_1a8,1,7,1);
        local_190[0] = pGVar13;
        std::vector<GachaRewardUI*,std::allocator<GachaRewardUI*>>::push_back(this_00,local_190);
        std::string::~string((string *)aTStack_1a8);
        nop();
        std::string::~string(asStack_1b0);
        nop();
        std::string::string(asStack_1b0,"plant_piece_kernelpult");
        std::string::string((string *)aTStack_1a8,"avatar_piece");
        pGVar13 = ::operator_new(0x38);
        GachaRewardUI::GachaRewardUI(pGVar13,asStack_1b0,(string *)aTStack_1a8,bVar2,8,bVar2);
        local_190[0] = pGVar13;
        std::vector<GachaRewardUI*,std::allocator<GachaRewardUI*>>::push_back(this_00,local_190);
        std::string::~string((string *)aTStack_1a8);
        nop();
        std::string::~string(asStack_1b0);
        nop();
        uVar6 = 0;
      }
    }
LAB_04a37d58:
    if (UILimitedGacha::s_pWidgetHandler == 0) {
LAB_04a37d64:
      pLVar15 = gLawnApp;
      bVar1 = false;
      std::vector<GachaRewardUI*,std::allocator<GachaRewardUI*>>::vector
                ((vector<GachaRewardUI*,std::allocator<GachaRewardUI*>> *)local_190,
                 (vector *)(this + 0x120));
      LawnApp::GatherGachaLogInfo
                (pLVar15,(vector<GachaRewardUI*,std::allocator<GachaRewardUI*>> *)local_190);
      std::vector<GachaRewardUI*,std::allocator<GachaRewardUI*>>::~vector
                ((vector<GachaRewardUI*,std::allocator<GachaRewardUI*>> *)local_190);
      MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::GetGachaReward,uVar6);
      goto LAB_04a37b58;
    }
  }
  bVar1 = false;
LAB_04a37b58:
  local_1c8 = aTStack_1a8;
  uVar5 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar5);
  psVar12 = (string *)local_1c8;
  std::string::string((string *)local_190,"");
  FUN_05462980(auStack_178,(string *)local_190);
  std::string::~string((string *)local_190);
  nop();
  uVar14 = 0;
  while( true ) {
    uVar16 = *(undefined8 *)(this + 0x120);
    uVar8 = FUN_04a313f0(uVar16,*(undefined8 *)(this + 0x128));
    if (uVar8 <= uVar14) break;
    plVar9 = (long *)FUN_04a313fc(uVar16,uVar14);
    bVar2 = std::operator==((string *)(*plVar9 + 0x10),"plant");
    if (bVar2) {
      plVar9 = (long *)FUN_04a313fc(*(undefined8 *)(this + 0x120),uVar14);
      cVar3 = PlayerInfo::GetIsPlantUnlocked(this_01,(string *)(*plVar9 + 0x18));
      if (cVar3 == '\0') {
        plVar9 = (long *)FUN_04a313fc(*(undefined8 *)(this + 0x120),uVar14);
        lVar7 = *plVar9;
        *(undefined1 *)(lVar7 + 0x34) = 1;
      }
      else {
        plVar9 = (long *)FUN_04a313fc(*(undefined8 *)(this + 0x120),uVar14);
        lVar7 = *plVar9;
      }
      uVar16 = FUN_0545ec84(auStack_168,lVar7 + 0x18);
      uVar16 = FUN_054603b8(uVar16,&DAT_05593348);
      plVar9 = (long *)FUN_04a313fc(*(undefined8 *)(this + 0x120),uVar14);
      uVar16 = FUN_0546065c(uVar16,*(undefined4 *)(*plVar9 + 0x30));
      FUN_054603b8(uVar16,&DAT_05594620);
    }
    plVar9 = (long *)FUN_04a313fc(*(undefined8 *)(this + 0x120),uVar14);
    bVar2 = std::operator==((string *)(*plVar9 + 0x10),"avatar");
    if (bVar2) {
      plVar9 = (long *)FUN_04a313fc(*(undefined8 *)(this + 0x120),uVar14);
      FUN_05475ffc((string *)local_190,*plVar9 + 0x18,7,0xffffffffffffffff);
      cVar3 = PlayerInfo::IsPlantAvatarUnLocked(this_01,(string *)local_190,0,0);
      if (cVar3 == '\0') {
        plVar9 = (long *)FUN_04a313fc(*(undefined8 *)(this + 0x120),uVar14);
        lVar7 = *plVar9;
        *(undefined1 *)(lVar7 + 0x34) = 1;
      }
      else {
        plVar9 = (long *)FUN_04a313fc(*(undefined8 *)(this + 0x120),uVar14);
        lVar7 = *plVar9;
      }
      uVar16 = FUN_0545ec84(auStack_168,lVar7 + 0x18);
      uVar16 = FUN_054603b8(uVar16,&DAT_05593348);
      plVar9 = (long *)FUN_04a313fc(*(undefined8 *)(this + 0x120),uVar14);
      uVar16 = FUN_0546065c(uVar16,*(undefined4 *)(*plVar9 + 0x30));
      FUN_054603b8(uVar16,&DAT_05594620);
      std::string::~string((string *)local_190);
    }
    plVar9 = (long *)FUN_04a313fc(*(undefined8 *)(this + 0x120),uVar14);
    bVar2 = std::operator==((string *)(*plVar9 + 0x10),"new_avatar");
    if (bVar2) {
      plVar9 = (long *)FUN_04a313fc(*(undefined8 *)(this + 0x120),uVar14);
      FUN_05475ffc((string *)local_190,*plVar9 + 0x18,0xb,0xffffffffffffffff);
      this_03 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
      iVar4 = NameMapperBase::GetIdForName(this_03,(string *)local_190);
      cVar3 = PlayerInfo::IsPlantNewAvatarUnLocked(this_01,iVar4);
      if (cVar3 == '\0') {
        plVar9 = (long *)FUN_04a313fc(*(undefined8 *)(this + 0x120),uVar14);
        lVar7 = *plVar9;
        *(undefined1 *)(lVar7 + 0x34) = 1;
      }
      else {
        plVar9 = (long *)FUN_04a313fc(*(undefined8 *)(this + 0x120),uVar14);
        lVar7 = *plVar9;
      }
      uVar16 = FUN_0545ec84(auStack_168,lVar7 + 0x18);
      uVar16 = FUN_054603b8(uVar16,&DAT_05593348);
      plVar9 = (long *)FUN_04a313fc(*(undefined8 *)(this + 0x120),uVar14);
      uVar16 = FUN_0546065c(uVar16,*(undefined4 *)(*plVar9 + 0x30));
      FUN_054603b8(uVar16,&DAT_05594620);
      std::string::~string((string *)local_190);
    }
    plVar9 = (long *)FUN_04a313fc(*(undefined8 *)(this + 0x120),uVar14);
    lVar7 = *plVar9;
    psVar12 = (string *)(lVar7 + 0x18);
    PlayerInfo::AddRewardByTypeName
              (this_01,(string *)(lVar7 + 0x10),psVar12,*(int *)(lVar7 + 0x30),bVar1);
    uVar14 = uVar14 + 1;
  }
  iVar4 = FUN_04a313d4(*(undefined4 *)(this_01 + 0x40));
  if (iVar4 != 0) {
    TGATenYearsData::TGATenYearsData(local_1c8);
    DString::DString((DString *)local_190,3);
    pcVar10 = (char *)DString::c_str((DString *)local_190);
    std::string::append((string *)local_1c8,pcVar10,(size_t)psVar12);
    DString::~DString((DString *)local_190);
    DString::DString((DString *)local_190,iVar4);
    pcVar10 = (char *)DString::c_str((DString *)local_190);
    std::string::append(asStack_1a0,pcVar10,(size_t)psVar12);
    DString::~DString((DString *)local_190);
    FUN_05462824((string *)local_190,auStack_178);
    FUN_05474278(auStack_198,(string *)local_190);
    std::string::~string((string *)local_190);
    pTVar11 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    DownloadUnit::DownloadUnit((DownloadUnit *)local_190,(DownloadUnit *)local_1c8);
    TGALogMgr::LogTutorial(pTVar11,(string *)local_190);
    Lua::DownloadInfo::~DownloadInfo((DownloadInfo *)local_190);
    Lua::DownloadInfo::~DownloadInfo((DownloadInfo *)local_1c8);
  }
  MessageRouter::Post((_func_void *)gMessageRouter);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GachaUI::Init() */

void __thiscall GachaUI::Init(GachaUI *this)

{
  int iVar1;
  long lVar2;
  
  addRewardName(this,(vector *)s_rewardItemList);
  InitRewardPool(this);
  lVar2 = ProfileUtils::Profile();
  if (lVar2 != 0) {
    lVar2 = Sexy::LazySingleton<GachaMgr>::GetInstance();
    iVar1 = FUN_04a313ec(*(undefined4 *)(lVar2 + 0x44));
    if ((iVar1 != 0) && (UILimitedGacha::s_pWidgetHandler == 0)) {
      lVar2 = Sexy::LazySingleton<GachaMgr>::GetInstance();
      iVar1 = FUN_04a313ec(*(undefined4 *)(lVar2 + 0x44));
      if (iVar1 != 4) {
        dealGachaPoolResult(this);
        InitView(this);
        return;
      }
    }
  }
  InitView(this);
  return;
}

