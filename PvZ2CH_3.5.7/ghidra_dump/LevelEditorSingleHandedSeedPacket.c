// Class: LevelEditorSingleHandedSeedPacket


/* LevelEditorSingleHandedSeedPacket::SetDisabled(bool) */

void __thiscall
LevelEditorSingleHandedSeedPacket::SetDisabled(LevelEditorSingleHandedSeedPacket *this,bool param_1)

{
  this[0x108] = (LevelEditorSingleHandedSeedPacket)param_1;
  return;
}


/* LevelEditorSingleHandedSeedPacket::~LevelEditorSingleHandedSeedPacket() */

void __thiscall
LevelEditorSingleHandedSeedPacket::~LevelEditorSingleHandedSeedPacket
          (LevelEditorSingleHandedSeedPacket *this)

{
  *(undefined ***)this = &PTR_GetClass_0695f990;
  LevelEditorSeedPacket::~LevelEditorSeedPacket((LevelEditorSeedPacket *)this);
  return;
}


/* LevelEditorSingleHandedSeedPacket::~LevelEditorSingleHandedSeedPacket() */

void __thiscall
LevelEditorSingleHandedSeedPacket::~LevelEditorSingleHandedSeedPacket
          (LevelEditorSingleHandedSeedPacket *this)

{
  ~LevelEditorSingleHandedSeedPacket(this);
  AK::FreeHook(this);
  return;
}


/* LevelEditorSingleHandedSeedPacket::LevelEditorSingleHandedSeedPacket(LevelEditorSingleHandedSeedBank*)
    */

void __thiscall
LevelEditorSingleHandedSeedPacket::LevelEditorSingleHandedSeedPacket
          (LevelEditorSingleHandedSeedPacket *this,LevelEditorSingleHandedSeedBank *param_1)

{
  LevelEditorSeedPacket::LevelEditorSeedPacket((LevelEditorSeedPacket *)this);
  *(LevelEditorSingleHandedSeedBank **)(this + 0x100) = param_1;
  this[0x108] = (LevelEditorSingleHandedSeedPacket)0x0;
  *(undefined ***)this = &PTR_GetClass_0695f990;
  return;
}


/* LevelEditorSingleHandedSeedPacket::AddUpgradePlant(int, std::string, std::string, int) */

void __thiscall
LevelEditorSingleHandedSeedPacket::AddUpgradePlant
          (undefined8 param_1_00,int param_1,string *param_3,string *param_4,int param_5)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  CustomLevelMgr::AddUpgradePlant(this,param_1,param_3,param_4,param_5);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorSingleHandedSeedPacket::onChangeCardInfo() */

void __thiscall
LevelEditorSingleHandedSeedPacket::onChangeCardInfo(LevelEditorSingleHandedSeedPacket *this)

{
  string *psVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  plVar2 = *(long **)(this + 0x100);
  local_8 = ___stack_chk_guard;
  if (plVar2 != (long *)0x0) {
    pcVar3 = *(code **)(*plVar2 + 0x328);
    FUN_05475d88(asStack_10,this + 0xf0);
    (*pcVar3)(plVar2,asStack_10,*(undefined4 *)(this + 0xd4));
    std::string::~string(asStack_10);
  }
  if (*(int *)(this + 0xd4) == 0) {
    psVar1 = (string *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    CustomLevelMgr::AddStartingPlant(psVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorSingleHandedSeedPacket::onClearCardInfo() */

void __thiscall
LevelEditorSingleHandedSeedPacket::onClearCardInfo(LevelEditorSingleHandedSeedPacket *this)

{
  CustomLevelMgr *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  plVar2 = *(long **)(this + 0x100);
  local_8 = ___stack_chk_guard;
  if (plVar2 != (long *)0x0) {
    pcVar3 = *(code **)(*plVar2 + 0x330);
    FUN_05475d88(asStack_10,this + 0xf0);
    (*pcVar3)(plVar2,asStack_10,*(undefined4 *)(this + 0xd4));
    std::string::~string(asStack_10);
    if (*(int *)(this + 0xd4) == 0) {
      pCVar1 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
      CustomLevelMgr::RemoveStartingPlant(pCVar1);
    }
    else {
      pCVar1 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
      CustomLevelMgr::RemoveUpgradePlant(pCVar1,*(int *)(this + 0xd4) + -1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorSingleHandedSeedPacket::ManualReload() */

void __thiscall
LevelEditorSingleHandedSeedPacket::ManualReload(LevelEditorSingleHandedSeedPacket *this)

{
  bool bVar1;
  ActivityConfig *this_00;
  undefined8 uVar2;
  CustomLevelMgr *this_01;
  long *plVar3;
  code *pcVar4;
  int local_24;
  string asStack_20 [8];
  PakRecord aPStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_24 = 0;
  std::string::string(asStack_20,"");
  nop();
  if (*(int *)(this + 0xd4) == 0) {
    this_00 = (ActivityConfig *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    uVar2 = ActivityConfig::GetChristmasProtectData(this_00);
    thunk_FUN_05475e00(asStack_20,uVar2);
  }
  else {
    this_01 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    CustomLevelMgr::GetUpgradePlant(this_01,*(int *)(this + 0xd4) + -1,asStack_20,&local_24);
  }
  bVar1 = std::operator!=(asStack_20,"");
  if (bVar1) {
    LevelEditorCardInfo::LevelEditorCardInfo((LevelEditorCardInfo *)aPStack_18,1,asStack_20);
    LevelEditorCardInfo::operator=
              ((LevelEditorCardInfo *)(this + 0xe8),(LevelEditorCardInfo *)aPStack_18);
    PakRecord::~PakRecord(aPStack_18);
    plVar3 = *(long **)(this + 0x100);
    pcVar4 = *(code **)(*plVar3 + 0x328);
    FUN_05475d88(aPStack_18,asStack_20);
    (*pcVar4)(plVar3,aPStack_18,*(undefined4 *)(this + 0xd4));
    std::string::~string((string *)aPStack_18);
  }
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorSingleHandedSeedPacket::Draw(Sexy::Graphics*) */

void __thiscall
LevelEditorSingleHandedSeedPacket::Draw(LevelEditorSingleHandedSeedPacket *this,Graphics *param_1)

{
  undefined8 uVar1;
  SeedPacketUtils *this_00;
  PacketRenderData *pPVar2;
  DeviceImage *pDVar3;
  Image *pIVar4;
  string asStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x108] != (LevelEditorSingleHandedSeedPacket)0x0) {
    Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85418);
    Draw9SliceImage(param_1,aIStack_18,uVar1);
    goto LAB_04b3c9a0;
  }
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b856f0);
  Draw9SliceImage(param_1,aIStack_18,uVar1);
  pIVar4 = *(Image **)(this + 0xf8);
  if (pIVar4 == (Image *)0x0) {
    if (*(int *)(this + 0xe8) == 1) {
      this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
      pPVar2 = (PacketRenderData *)
               SeedPacketUtils::GetPlantPacketRenderData(this_00,(string *)(this + 0xf0),-1,-1,-1);
      pDVar3 = (DeviceImage *)SeedPacketUtils::CreateDeviceImageForSeedPacket(this_00,pPVar2,0,0);
      *(DeviceImage **)(this + 0xf8) = pDVar3;
      SeedPacketUtils::DrawPacketToDeviceImage(this_00,pDVar3,pPVar2,false,-1,false,false);
      pIVar4 = *(Image **)(this + 0xf8);
      if (pIVar4 != (Image *)0x0) goto LAB_04b3c984;
    }
    Sexy::StrFormat("[LEVEL_EDITOR_SINGLE_HANDED_PACKET_%d]",asStack_38,
                    (ulong)(*(int *)(this + 0xd4) + 1));
    StringHelper::ToStringValue(asStack_38);
    Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline)
    ;
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar1,aIStack_18,5,1);
    FUN_05476c50(auStack_30);
    std::string::~string(asStack_38);
  }
  else {
LAB_04b3c984:
    Sexy::Graphics::DrawImage(param_1,pIVar4,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
LAB_04b3c9a0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorSingleHandedSeedPacket::TouchEnded(Sexy::Touch const&) */

void __thiscall
LevelEditorSingleHandedSeedPacket::TouchEnded
          (LevelEditorSingleHandedSeedPacket *this,Touch *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  LevelEditorSingleHandedPlantSetting *this_00;
  undefined8 uVar8;
  LevelEditorMultifunctionAssembly *pLVar9;
  int local_48;
  int local_44;
  string asStack_40 [8];
  int local_38;
  undefined4 local_34;
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(this + 0xdc) == (int)*(undefined8 *)param_1) &&
     (this[0x108] == (LevelEditorSingleHandedSeedPacket)0x0)) {
    if (*(int *)(this + 0xd4) == 0) {
      if (*(int *)(this + 0xe8) == 0) {
        this_00 = ::operator_new(0x158);
        LevelEditorSingleHandedPlantSetting::LevelEditorSingleHandedPlantSetting(this_00);
        (**(code **)(*(long *)this + 0xd0))(&local_38,this);
        iVar1 = *(int *)(this + 0x50);
        uVar2 = FUN_04b334ec(500);
        uVar3 = FUN_04b334ec(0x168);
        (**(code **)(*(long *)this_00 + 0x198))(this_00,local_38 + iVar1,local_34,uVar2,uVar3);
        FUN_04b33500(this_00);
        uVar8 = LevelEditorUtil::ShowDialogWithTouchClose((Widget *)this_00,true);
        FUN_04b32fdc(afStack_28,this,uVar8);
        LevelEditorPlantSetting::Init((LevelEditorPlantSetting *)this_00,afStack_28);
        std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
      }
      else {
        pLVar9 = ::operator_new(0x120);
        LevelEditorMultifunctionAssembly::LevelEditorMultifunctionAssembly(pLVar9);
        (**(code **)(*(long *)this + 0xd0))(&local_48,this);
        iVar1 = *(int *)(this + 0x50);
        iVar5 = FUN_04b334ec(0x1e);
        iVar6 = FUN_04b334ec(0x50);
        iVar7 = FUN_04b334ec(0x3c);
        Sexy::Insets::Insets((Insets *)&local_38,local_48 + iVar1,local_44 - iVar5,iVar6,iVar7);
        FUN_04b32a18(afStack_28,pLVar9,this);
        std::string::string(asStack_40,"delete");
        LevelEditorMultifunctionAssembly::AttachButton
                  (pLVar9,1,(Insets *)&local_38,afStack_28,asStack_40);
        std::string::~string(asStack_40);
        nop();
        std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
        UIUtil::ShowDialog((Widget *)pLVar9);
      }
    }
    else {
      pLVar9 = ::operator_new(0x120);
      LevelEditorMultifunctionAssembly::LevelEditorMultifunctionAssembly(pLVar9);
      (**(code **)(*(long *)this + 0xd0))(&local_48,this);
      iVar5 = local_44;
      iVar1 = local_48 + *(int *)(this + 0x50);
      iVar6 = FUN_04b334ec(0x1e);
      iVar7 = FUN_04b334ec(0x50);
      iVar4 = FUN_04b334ec(0x3c);
      Sexy::Insets::Insets((Insets *)&local_38,iVar1,iVar5 - iVar6,iVar7,iVar4);
      FUN_04b32a74(afStack_28,pLVar9,this);
      std::string::string(asStack_40,"set");
      LevelEditorMultifunctionAssembly::AttachButton
                (pLVar9,1,(Insets *)&local_38,afStack_28,asStack_40);
      std::string::~string(asStack_40);
      nop();
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
      if (*(int *)(this + 0xe8) != 0) {
        iVar1 = *(int *)(this + 0x50);
        iVar5 = FUN_04b334ec(0x1e);
        iVar6 = FUN_04b334ec(0x50);
        iVar7 = FUN_04b334ec(0x3c);
        Sexy::Insets::Insets((Insets *)&local_38,local_48 + iVar1,local_44 + iVar5,iVar6,iVar7);
        FUN_04b32ad0(afStack_28,pLVar9,this);
        std::string::string(asStack_40,"delete");
        LevelEditorMultifunctionAssembly::AttachButton
                  (pLVar9,2,(Insets *)&local_38,afStack_28,asStack_40);
        std::string::~string(asStack_40);
        nop();
        std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
      }
      UIUtil::ShowDialog((Widget *)pLVar9);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

