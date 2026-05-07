// Class: LevelEditorTowerDefendSeedPacket


/* LevelEditorTowerDefendSeedPacket::~LevelEditorTowerDefendSeedPacket() */

void __thiscall
LevelEditorTowerDefendSeedPacket::~LevelEditorTowerDefendSeedPacket
          (LevelEditorTowerDefendSeedPacket *this)

{
  *(undefined ***)this = &PTR_GetClass_06960720;
  LevelEditorSeedPacket::~LevelEditorSeedPacket((LevelEditorSeedPacket *)this);
  return;
}


/* LevelEditorTowerDefendSeedPacket::~LevelEditorTowerDefendSeedPacket() */

void __thiscall
LevelEditorTowerDefendSeedPacket::~LevelEditorTowerDefendSeedPacket
          (LevelEditorTowerDefendSeedPacket *this)

{
  ~LevelEditorTowerDefendSeedPacket(this);
  AK::FreeHook(this);
  return;
}


/* LevelEditorTowerDefendSeedPacket::LevelEditorTowerDefendSeedPacket(LevelEditorTowerDefendSeedBank*)
    */

void __thiscall
LevelEditorTowerDefendSeedPacket::LevelEditorTowerDefendSeedPacket
          (LevelEditorTowerDefendSeedPacket *this,LevelEditorTowerDefendSeedBank *param_1)

{
  LevelEditorSeedPacket::LevelEditorSeedPacket((LevelEditorSeedPacket *)this);
  *(LevelEditorTowerDefendSeedBank **)(this + 0x100) = param_1;
  *(undefined ***)this = &PTR_GetClass_06960720;
  return;
}


/* LevelEditorTowerDefendSeedPacket::AddUpgradeTree(int, std::string, int) */

void __thiscall
LevelEditorTowerDefendSeedPacket::AddUpgradeTree
          (undefined8 param_1_00,int param_1,string *param_3,int param_4)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  CustomLevelMgr::AddUpgradeTree(this,param_1,param_3,param_4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorTowerDefendSeedPacket::onChangeCardInfo() */

void __thiscall
LevelEditorTowerDefendSeedPacket::onChangeCardInfo(LevelEditorTowerDefendSeedPacket *this)

{
  CustomLevelMgr *this_00;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  plVar1 = *(long **)(this + 0x100);
  local_8 = ___stack_chk_guard;
  if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x328);
    FUN_05475d88(asStack_10,this + 0xf0);
    (*pcVar2)(plVar1,asStack_10);
    std::string::~string(asStack_10);
  }
  this_00 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  CustomLevelMgr::AddTowerDefendPresetSeedBankPlant
            (this_00,(string *)(this + 0xf0),*(int *)(this + 0xd4));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorTowerDefendSeedPacket::onClearCardInfo() */

void __thiscall
LevelEditorTowerDefendSeedPacket::onClearCardInfo(LevelEditorTowerDefendSeedPacket *this)

{
  CustomLevelMgr *this_00;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  plVar1 = *(long **)(this + 0x100);
  local_8 = ___stack_chk_guard;
  if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x330);
    FUN_05475d88(asStack_10,this + 0xf0);
    (*pcVar2)(plVar1,asStack_10);
    std::string::~string(asStack_10);
  }
  this_00 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  CustomLevelMgr::RemoveTowerDefendPresetSeedBankPlant(this_00,*(int *)(this + 0xd4));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorTowerDefendSeedPacket::Reload() */

void __thiscall LevelEditorTowerDefendSeedPacket::Reload(LevelEditorTowerDefendSeedPacket *this)

{
  bool bVar1;
  CustomLevelMgr *this_00;
  undefined8 uVar2;
  long *plVar3;
  code *pcVar4;
  string asStack_20 [8];
  PakRecord aPStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  uVar2 = CustomLevelMgr::GetTowerDefendPresetSeedBankPlant(this_00,*(int *)(this + 0xd4));
  FUN_05475d88(asStack_20,uVar2);
  bVar1 = std::operator!=(asStack_20,"");
  if (bVar1) {
    LevelEditorCardInfo::LevelEditorCardInfo((LevelEditorCardInfo *)aPStack_18,1,asStack_20);
    LevelEditorCardInfo::operator=
              ((LevelEditorCardInfo *)(this + 0xe8),(LevelEditorCardInfo *)aPStack_18);
    PakRecord::~PakRecord(aPStack_18);
    plVar3 = *(long **)(this + 0x100);
    pcVar4 = *(code **)(*plVar3 + 0x328);
    FUN_05475d88(aPStack_18,asStack_20);
    (*pcVar4)(plVar3,aPStack_18);
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
/* LevelEditorTowerDefendSeedPacket::Draw(Sexy::Graphics*) */

void __thiscall
LevelEditorTowerDefendSeedPacket::Draw(LevelEditorTowerDefendSeedPacket *this,Graphics *param_1)

{
  undefined8 uVar1;
  SeedPacketUtils *this_00;
  PacketRenderData *pPVar2;
  DeviceImage *pDVar3;
  Image *pIVar4;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b856f0);
  Draw9SliceImage(param_1,aIStack_18,uVar1);
  pIVar4 = *(Image **)(this + 0xf8);
  if (pIVar4 == (Image *)0x0) {
    if (*(int *)(this + 0xe8) != 1) goto LAB_04b3ce1c;
    this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
    pPVar2 = (PacketRenderData *)
             SeedPacketUtils::GetPlantPacketRenderData(this_00,(string *)(this + 0xf0),-1,-1,-1);
    pDVar3 = (DeviceImage *)SeedPacketUtils::CreateDeviceImageForSeedPacket(this_00,pPVar2,0,0);
    *(DeviceImage **)(this + 0xf8) = pDVar3;
    SeedPacketUtils::DrawPacketToDeviceImage(this_00,pDVar3,pPVar2,false,-1,false,false);
    pIVar4 = *(Image **)(this + 0xf8);
    if (pIVar4 == (Image *)0x0) goto LAB_04b3ce1c;
  }
  Sexy::Graphics::DrawImage(param_1,pIVar4,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
LAB_04b3ce1c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorTowerDefendSeedPacket::TouchEnded(Sexy::Touch const&) */

void __thiscall
LevelEditorTowerDefendSeedPacket::TouchEnded(LevelEditorTowerDefendSeedPacket *this,Touch *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  LevelEditorMultifunctionAssembly *this_00;
  LevelEditorPlantSetting *this_01;
  undefined8 uVar8;
  int local_48;
  int local_44;
  string asStack_40 [8];
  int local_38;
  undefined4 local_34;
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xdc) == (int)*(undefined8 *)param_1) {
    if (*(int *)(this + 0xe8) == 0) {
      this_01 = ::operator_new(0x158);
      LevelEditorPlantSetting::LevelEditorPlantSetting(this_01);
      (**(code **)(*(long *)this + 0xd0))(&local_38,this);
      iVar1 = *(int *)(this + 0x50);
      uVar6 = FUN_04b334ec(500);
      uVar7 = FUN_04b334ec(0x168);
      (**(code **)(*(long *)this_01 + 0x198))(this_01,local_38 + iVar1,local_34,uVar6,uVar7);
      FUN_04b33500(this_01);
      uVar8 = LevelEditorUtil::ShowDialogWithTouchClose((Widget *)this_01,true);
      FUN_04b33094(afStack_28,this,uVar8);
      LevelEditorPlantSetting::Init(this_01,afStack_28);
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
    }
    else {
      this_00 = ::operator_new(0x120);
      LevelEditorMultifunctionAssembly::LevelEditorMultifunctionAssembly(this_00);
      (**(code **)(*(long *)this + 0xd0))(&local_48,this);
      iVar5 = local_44;
      iVar1 = local_48 + *(int *)(this + 0x50);
      iVar2 = FUN_04b334ec(0x1e);
      iVar3 = FUN_04b334ec(0x50);
      iVar4 = FUN_04b334ec(0x3c);
      Sexy::Insets::Insets((Insets *)&local_38,iVar1,iVar5 - iVar2,iVar3,iVar4);
      FUN_04b32b8c(afStack_28,this_00,this);
      std::string::string(asStack_40,"set");
      LevelEditorMultifunctionAssembly::AttachButton
                (this_00,1,(Insets *)&local_38,afStack_28,asStack_40);
      std::string::~string(asStack_40);
      nop();
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
      iVar1 = *(int *)(this + 0x50);
      iVar5 = FUN_04b334ec(0x1e);
      iVar2 = FUN_04b334ec(0x50);
      iVar3 = FUN_04b334ec(0x3c);
      Sexy::Insets::Insets((Insets *)&local_38,local_48 + iVar1,local_44 + iVar5,iVar2,iVar3);
      FUN_04b32be8(afStack_28,this_00,this);
      std::string::string(asStack_40,"delete");
      LevelEditorMultifunctionAssembly::AttachButton
                (this_00,2,(Insets *)&local_38,afStack_28,asStack_40);
      std::string::~string(asStack_40);
      nop();
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
      UIUtil::ShowDialog((Widget *)this_00);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

