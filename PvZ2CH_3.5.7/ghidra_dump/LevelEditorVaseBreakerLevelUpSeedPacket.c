// Class: LevelEditorVaseBreakerLevelUpSeedPacket


/* LevelEditorVaseBreakerLevelUpSeedPacket::~LevelEditorVaseBreakerLevelUpSeedPacket() */

void __thiscall
LevelEditorVaseBreakerLevelUpSeedPacket::~LevelEditorVaseBreakerLevelUpSeedPacket
          (LevelEditorVaseBreakerLevelUpSeedPacket *this)

{
  *(undefined ***)this = &PTR_GetClass_0696cb70;
  LevelEditorSeedPacket::~LevelEditorSeedPacket((LevelEditorSeedPacket *)this);
  return;
}


/* LevelEditorVaseBreakerLevelUpSeedPacket::~LevelEditorVaseBreakerLevelUpSeedPacket() */

void __thiscall
LevelEditorVaseBreakerLevelUpSeedPacket::~LevelEditorVaseBreakerLevelUpSeedPacket
          (LevelEditorVaseBreakerLevelUpSeedPacket *this)

{
  ~LevelEditorVaseBreakerLevelUpSeedPacket(this);
  AK::FreeHook(this);
  return;
}


/* LevelEditorVaseBreakerLevelUpSeedPacket::LevelEditorVaseBreakerLevelUpSeedPacket() */

void __thiscall
LevelEditorVaseBreakerLevelUpSeedPacket::LevelEditorVaseBreakerLevelUpSeedPacket
          (LevelEditorVaseBreakerLevelUpSeedPacket *this)

{
  LevelEditorSeedPacket::LevelEditorSeedPacket((LevelEditorSeedPacket *)this);
  this[0x100] = (LevelEditorVaseBreakerLevelUpSeedPacket)0x1;
  *(undefined ***)this = &PTR_GetClass_0696cb70;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorVaseBreakerLevelUpSeedPacket::TouchEnded(Sexy::Touch const&) */

void __thiscall
LevelEditorVaseBreakerLevelUpSeedPacket::TouchEnded
          (LevelEditorVaseBreakerLevelUpSeedPacket *this,Touch *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  LevelEditorVaseBreakerZombieSelectList *this_00;
  undefined8 uVar4;
  LevelEditorPlantSetting *this_01;
  int local_30;
  undefined4 local_2c;
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xdc) == (int)*(undefined8 *)param_1) {
    if (this[0x100] == (LevelEditorVaseBreakerLevelUpSeedPacket)0x0) {
      this_00 = ::operator_new(0x140);
      LevelEditorVaseBreakerZombieSelectList::LevelEditorVaseBreakerZombieSelectList(this_00);
      iVar1 = FUN_04b665cc(0x2ee);
      uVar2 = FUN_04b665cc(0x19);
      uVar3 = FUN_04b665cc(100);
      (**(code **)(*(long *)this_00 + 0x198))
                (this_00,(*(int *)(gLawnApp + 0xd4) - iVar1) / 2,uVar2,iVar1,uVar3);
      uVar4 = LevelEditorUtil::ShowDialogWithTouchClose((Widget *)this_00,true);
      FUN_04b66570(afStack_28,this,uVar4);
      LevelEditorVaseBreakerZombieSelectList::SetFunc(this_00,afStack_28);
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
      (**(code **)(*(long *)this_00 + 0x318))(this_00);
    }
    else {
      this_01 = ::operator_new(0x158);
      LevelEditorPlantSetting::LevelEditorPlantSetting(this_01);
      (**(code **)(*(long *)this + 0xd0))(&local_30,this);
      iVar1 = *(int *)(this + 0x50);
      uVar2 = FUN_04b665cc(500);
      uVar3 = FUN_04b665cc(0x168);
      (**(code **)(*(long *)this_01 + 0x198))(this_01,local_30 + iVar1,local_2c,uVar2,uVar3);
      FUN_04b665e0(this_01);
      uVar4 = LevelEditorUtil::ShowDialogWithTouchClose((Widget *)this_01,true);
      FUN_04b66514(afStack_28,this,uVar4);
      LevelEditorPlantSetting::Init(this_01,afStack_28);
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorVaseBreakerLevelUpSeedPacket::Draw(Sexy::Graphics*) */

void __thiscall
LevelEditorVaseBreakerLevelUpSeedPacket::Draw
          (LevelEditorVaseBreakerLevelUpSeedPacket *this,Graphics *param_1)

{
  undefined8 uVar1;
  SeedPacketUtils *pSVar2;
  PacketRenderData *pPVar3;
  DeviceImage *pDVar4;
  Image *pIVar5;
  Insets aIStack_18 [16];
  long local_8;
  
  pIVar5 = *(Image **)(this + 0xf8);
  local_8 = ___stack_chk_guard;
  if (pIVar5 == (Image *)0x0) {
    Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b86838);
    Draw9SliceImage(param_1,aIStack_18,uVar1);
    pIVar5 = *(Image **)(this + 0xf8);
    if (pIVar5 == (Image *)0x0) {
      if (*(int *)(this + 0xe8) == 1) {
        pSVar2 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
        pPVar3 = (PacketRenderData *)
                 SeedPacketUtils::GetPlantPacketRenderData(pSVar2,(string *)(this + 0xf0),-1,-1,-1);
        pDVar4 = (DeviceImage *)SeedPacketUtils::CreateDeviceImageForSeedPacket(pSVar2,pPVar3,0,0);
        *(DeviceImage **)(this + 0xf8) = pDVar4;
        SeedPacketUtils::DrawPacketToDeviceImage(pSVar2,pDVar4,pPVar3,false,-1,false,false);
        pIVar5 = *(Image **)(this + 0xf8);
      }
      else {
        if (*(int *)(this + 0xe8) != 3) goto LAB_04b690b4;
        pSVar2 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
        std::string::string((string *)aIStack_18,"IMAGE_UI_ZOMBIE_PVP1_PACKETS_");
        nop();
        pPVar3 = (PacketRenderData *)
                 SeedPacketUtils::GetZombiePacketRenderData
                           (pSVar2,(string *)(this + 0xf0),(string *)aIStack_18,-1);
        pDVar4 = (DeviceImage *)SeedPacketUtils::CreateDeviceImageForSeedPacket(pSVar2,pPVar3,0,0);
        *(DeviceImage **)(this + 0xf8) = pDVar4;
        SeedPacketUtils::DrawPacketToDeviceImageNoBackground(pSVar2,pDVar4,pPVar3,false,-1);
        std::string::~string((string *)aIStack_18);
        pIVar5 = *(Image **)(this + 0xf8);
      }
      if (pIVar5 == (Image *)0x0) goto LAB_04b690b4;
    }
  }
  if (*(int *)(this + 0xe8) == 3) {
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b86b20);
    Sexy::Graphics::DrawImage(param_1,pIVar5,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0xf8),0,0,*(int *)(this + 0x54),*(int *)(this + 0x54));
  }
  else {
    Sexy::Graphics::DrawImage(param_1,pIVar5,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
LAB_04b690b4:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

