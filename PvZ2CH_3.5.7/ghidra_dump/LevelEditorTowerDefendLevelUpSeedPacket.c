// Class: LevelEditorTowerDefendLevelUpSeedPacket


/* LevelEditorTowerDefendLevelUpSeedPacket::~LevelEditorTowerDefendLevelUpSeedPacket() */

void __thiscall
LevelEditorTowerDefendLevelUpSeedPacket::~LevelEditorTowerDefendLevelUpSeedPacket
          (LevelEditorTowerDefendLevelUpSeedPacket *this)

{
  *(undefined ***)this = &PTR_GetClass_06960a60;
  LevelEditorSeedPacket::~LevelEditorSeedPacket((LevelEditorSeedPacket *)this);
  return;
}


/* LevelEditorTowerDefendLevelUpSeedPacket::~LevelEditorTowerDefendLevelUpSeedPacket() */

void __thiscall
LevelEditorTowerDefendLevelUpSeedPacket::~LevelEditorTowerDefendLevelUpSeedPacket
          (LevelEditorTowerDefendLevelUpSeedPacket *this)

{
  ~LevelEditorTowerDefendLevelUpSeedPacket(this);
  AK::FreeHook(this);
  return;
}


/* LevelEditorTowerDefendLevelUpSeedPacket::LevelEditorTowerDefendLevelUpSeedPacket() */

void __thiscall
LevelEditorTowerDefendLevelUpSeedPacket::LevelEditorTowerDefendLevelUpSeedPacket
          (LevelEditorTowerDefendLevelUpSeedPacket *this)

{
  LevelEditorSeedPacket::LevelEditorSeedPacket((LevelEditorSeedPacket *)this);
  *(undefined ***)this = &PTR_GetClass_06960a60;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorTowerDefendLevelUpSeedPacket::Draw(Sexy::Graphics*) */

void __thiscall
LevelEditorTowerDefendLevelUpSeedPacket::Draw
          (LevelEditorTowerDefendLevelUpSeedPacket *this,Graphics *param_1)

{
  undefined8 uVar1;
  SeedPacketUtils *this_00;
  PacketRenderData *pPVar2;
  DeviceImage *pDVar3;
  Image *pIVar4;
  Insets aIStack_18 [16];
  long local_8;
  
  pIVar4 = *(Image **)(this + 0xf8);
  local_8 = ___stack_chk_guard;
  if (pIVar4 == (Image *)0x0) {
    Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b856f0);
    Draw9SliceImage(param_1,aIStack_18,uVar1);
    pIVar4 = *(Image **)(this + 0xf8);
    if (pIVar4 == (Image *)0x0) {
      if (*(int *)(this + 0xe8) != 1) goto LAB_04b3cb68;
      this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
      pPVar2 = (PacketRenderData *)
               SeedPacketUtils::GetPlantPacketRenderData(this_00,(string *)(this + 0xf0),-1,-1,-1);
      pDVar3 = (DeviceImage *)SeedPacketUtils::CreateDeviceImageForSeedPacket(this_00,pPVar2,0,0);
      *(DeviceImage **)(this + 0xf8) = pDVar3;
      SeedPacketUtils::DrawPacketToDeviceImage(this_00,pDVar3,pPVar2,false,-1,false,false);
      pIVar4 = *(Image **)(this + 0xf8);
      if (pIVar4 == (Image *)0x0) goto LAB_04b3cb68;
    }
  }
  Sexy::Graphics::DrawImage(param_1,pIVar4,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
LAB_04b3cb68:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorTowerDefendLevelUpSeedPacket::TouchEnded(Sexy::Touch const&) */

void __thiscall
LevelEditorTowerDefendLevelUpSeedPacket::TouchEnded
          (LevelEditorTowerDefendLevelUpSeedPacket *this,Touch *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  LevelEditorPlantSetting *this_00;
  undefined8 uVar4;
  int local_30;
  undefined4 local_2c;
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xdc) == (int)*(undefined8 *)param_1) {
    this_00 = ::operator_new(0x158);
    LevelEditorPlantSetting::LevelEditorPlantSetting(this_00);
    (**(code **)(*(long *)this + 0xd0))(&local_30,this);
    iVar1 = *(int *)(this + 0x50);
    uVar2 = FUN_04b334ec(500);
    uVar3 = FUN_04b334ec(0x168);
    (**(code **)(*(long *)this_00 + 0x198))(this_00,local_30 + iVar1,local_2c,uVar2,uVar3);
    FUN_04b33500(this_00);
    uVar4 = LevelEditorUtil::ShowDialogWithTouchClose((Widget *)this_00,true);
    FUN_04b330f0(afStack_28,this,uVar4);
    LevelEditorPlantSetting::Init(this_00,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

