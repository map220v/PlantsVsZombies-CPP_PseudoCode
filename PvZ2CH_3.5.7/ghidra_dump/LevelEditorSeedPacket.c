// Class: LevelEditorSeedPacket


/* LevelEditorSeedPacket::~LevelEditorSeedPacket() */

void __thiscall LevelEditorSeedPacket::~LevelEditorSeedPacket(LevelEditorSeedPacket *this)

{
  *(undefined ***)this = &PTR_GetClass_0695d040;
  if (*(long **)(this + 0xf8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xf8) + 0x18))();
    *(undefined8 *)(this + 0xf8) = 0;
  }
  PakRecord::~PakRecord((PakRecord *)(this + 0xe8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LevelEditorSeedPacket::~LevelEditorSeedPacket() */

void __thiscall LevelEditorSeedPacket::~LevelEditorSeedPacket(LevelEditorSeedPacket *this)

{
  ~LevelEditorSeedPacket(this);
  AK::FreeHook(this);
  return;
}


/* LevelEditorSeedPacket::LevelEditorSeedPacket() */

void __thiscall LevelEditorSeedPacket::LevelEditorSeedPacket(LevelEditorSeedPacket *this)

{
  Sexy::Widget::Widget((Widget *)this);
  this[0xe0] = (LevelEditorSeedPacket)0x0;
  *(undefined ***)this = &PTR_GetClass_0695d040;
  LevelEditorCardInfo::LevelEditorCardInfo((LevelEditorCardInfo *)(this + 0xe8));
  *(undefined8 *)(this + 0xf8) = 0;
  return;
}


/* LevelEditorSeedPacket::Init(int) */

void __thiscall LevelEditorSeedPacket::Init(LevelEditorSeedPacket *this,int param_1)

{
  *(int *)(this + 0xd4) = param_1;
  *(undefined4 *)(this + 0xd8) = 0xffffffff;
  *(undefined4 *)(this + 0xe8) = 0;
  std::string::append((string *)(this + 0xf0),"",0xffffffff);
  (**(code **)(*(long *)this + 0x310))(this);
  return;
}


/* LevelEditorSeedPacket::ChangeCardInfo(LevelEditorCardInfo const&) */

void __thiscall
LevelEditorSeedPacket::ChangeCardInfo(LevelEditorSeedPacket *this,LevelEditorCardInfo *param_1)

{
  if (*(long **)(this + 0xf8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xf8) + 0x18))();
    *(undefined8 *)(this + 0xf8) = 0;
  }
  GriditemBarrelZombieDes::operator=
            ((GriditemBarrelZombieDes *)(this + 0xe8),(GriditemBarrelZombieDes *)param_1);
  (**(code **)(*(long *)this + 0x318))(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorSeedPacket::ClearCardInfo() */

void __thiscall LevelEditorSeedPacket::ClearCardInfo(LevelEditorSeedPacket *this)

{
  string asStack_20 [8];
  PakRecord aPStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_20,"");
  LevelEditorCardInfo::LevelEditorCardInfo((LevelEditorCardInfo *)aPStack_18,0,asStack_20);
  ChangeCardInfo(this,(LevelEditorCardInfo *)aPStack_18);
  PakRecord::~PakRecord(aPStack_18);
  std::string::~string(asStack_20);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditorSeedPacket::ChangeLevel(int) */

void __thiscall LevelEditorSeedPacket::ChangeLevel(LevelEditorSeedPacket *this,int param_1)

{
  *(int *)(this + 0xd8) = param_1;
  (**(code **)(*(long *)this + 800))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorSeedPacket::Draw(Sexy::Graphics*) */

void __thiscall LevelEditorSeedPacket::Draw(LevelEditorSeedPacket *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  SeedPacketUtils *pSVar5;
  PacketRenderData *pPVar6;
  DeviceImage *pDVar7;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  Image *pIVar8;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b856f0);
  Draw9SliceImage(param_1,aIStack_18,uVar4);
  pIVar8 = *(Image **)(this + 0xf8);
  if (pIVar8 == (Image *)0x0) {
    iVar1 = *(int *)(this + 0xe8);
    if (iVar1 == 1) {
      pSVar5 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
      pPVar6 = (PacketRenderData *)
               SeedPacketUtils::GetPlantPacketRenderData(pSVar5,(string *)(this + 0xf0),-1,-1,-1);
LAB_04b3c61c:
      pDVar7 = (DeviceImage *)SeedPacketUtils::CreateDeviceImageForSeedPacket(pSVar5,pPVar6,0,0);
      *(DeviceImage **)(this + 0xf8) = pDVar7;
      SeedPacketUtils::DrawPacketToDeviceImage(pSVar5,pDVar7,pPVar6,false,-1,false,false);
LAB_04b3c4d0:
      pIVar8 = *(Image **)(this + 0xf8);
      if (pIVar8 != (Image *)0x0) goto LAB_04b3c308;
      iVar1 = *(int *)(this + 0xe8);
    }
    else {
      if (iVar1 == 2) {
        pSVar5 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
        pPVar6 = (PacketRenderData *)
                 SeedPacketUtils::GetToolPacketRenderData(pSVar5,(string *)(this + 0xf0));
        goto LAB_04b3c61c;
      }
      if (iVar1 == 3) {
        pSVar5 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
        std::string::string((string *)aIStack_18,"IMAGE_UI_ZOMBIE_PVP1_PACKETS_");
        nop();
        pPVar6 = (PacketRenderData *)
                 SeedPacketUtils::GetZombiePacketRenderData
                           (pSVar5,(string *)(this + 0xf0),(string *)aIStack_18,-1);
        pDVar7 = (DeviceImage *)SeedPacketUtils::CreateDeviceImageForSeedPacket(pSVar5,pPVar6,0,0);
        *(DeviceImage **)(this + 0xf8) = pDVar7;
        SeedPacketUtils::DrawPacketToDeviceImageNoBackground(pSVar5,pDVar7,pPVar6,false,-1);
        std::string::~string((string *)aIStack_18);
        goto LAB_04b3c4d0;
      }
    }
  }
  else {
LAB_04b3c308:
    if (*(int *)(this + 0xe8) == 3) {
      Sexy::Graphics::DrawImage(param_1,pIVar8,0,0,*(int *)(this + 0x54),*(int *)(this + 0x54));
      iVar1 = *(int *)(this + 0xe8);
    }
    else {
      Sexy::Graphics::DrawImage(param_1,pIVar8,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
      iVar1 = *(int *)(this + 0xe8);
    }
  }
  if (iVar1 != 0) {
    iVar1 = *(int *)(this + 0xd8);
    if (iVar1 == 1) {
      iVar2 = FUN_04b334ec(0x1e);
      iVar1 = *(int *)(this + 0x50);
      iVar3 = FUN_04b334ec(0);
      Sexy::Insets::Insets(aIStack_18,iVar1 - iVar2,iVar3,iVar2,iVar2);
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85890;
    }
    else if (iVar1 == 2) {
      iVar2 = FUN_04b334ec(0x1e);
      iVar1 = *(int *)(this + 0x50);
      iVar3 = FUN_04b334ec(0);
      Sexy::Insets::Insets(aIStack_18,iVar1 - iVar2,iVar3,iVar2,iVar2);
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85748;
    }
    else if (iVar1 == 3) {
      iVar2 = FUN_04b334ec(0x1e);
      iVar1 = *(int *)(this + 0x50);
      iVar3 = FUN_04b334ec(0);
      Sexy::Insets::Insets(aIStack_18,iVar1 - iVar2,iVar3,iVar2,iVar2);
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85770;
    }
    else if (iVar1 == 4) {
      iVar2 = FUN_04b334ec(0x1e);
      iVar1 = *(int *)(this + 0x50);
      iVar3 = FUN_04b334ec(0);
      Sexy::Insets::Insets(aIStack_18,iVar1 - iVar2,iVar3,iVar2,iVar2);
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b855d8;
    }
    else {
      if (iVar1 != 5) goto LAB_04b3c364;
      iVar2 = FUN_04b334ec(0x1e);
      iVar1 = *(int *)(this + 0x50);
      iVar3 = FUN_04b334ec(0);
      Sexy::Insets::Insets(aIStack_18,iVar1 - iVar2,iVar3,iVar2,iVar2);
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b854e8;
    }
    uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
    DrawAdaptiveImage(param_1,aIStack_18,uVar4);
  }
LAB_04b3c364:
  if (this[0xe0] != (LevelEditorSeedPacket)0x0) {
    pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85588);
    Sexy::Graphics::DrawImage(param_1,pIVar8,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditorSeedPacket::GetCardInfo() */

GriditemBarrelZombieDes * LevelEditorSeedPacket::GetCardInfo(void)

{
  long in_x0;
  GriditemBarrelZombieDes *in_x8;
  
  GriditemBarrelZombieDes::GriditemBarrelZombieDes(in_x8,(GriditemBarrelZombieDes *)(in_x0 + 0xe8));
  return in_x8;
}

