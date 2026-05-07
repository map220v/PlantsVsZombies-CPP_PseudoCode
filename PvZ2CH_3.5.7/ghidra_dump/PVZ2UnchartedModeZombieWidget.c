// Class: PVZ2UnchartedModeZombieWidget


/* PVZ2UnchartedModeZombieWidget::~PVZ2UnchartedModeZombieWidget() */

void __thiscall
PVZ2UnchartedModeZombieWidget::~PVZ2UnchartedModeZombieWidget(PVZ2UnchartedModeZombieWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_069d0e40;
  if (*(long **)(this + 0xe8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xe8) + 0x18))();
    *(undefined8 *)(this + 0xe8) = 0;
  }
  std::string::~string((string *)(this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PVZ2UnchartedModeZombieWidget::~PVZ2UnchartedModeZombieWidget() */

void __thiscall
PVZ2UnchartedModeZombieWidget::~PVZ2UnchartedModeZombieWidget(PVZ2UnchartedModeZombieWidget *this)

{
  ~PVZ2UnchartedModeZombieWidget(this);
  AK::FreeHook(this);
  return;
}


/* PVZ2UnchartedModeZombieWidget::PVZ2UnchartedModeZombieWidget(std::string, int) */

void __thiscall
PVZ2UnchartedModeZombieWidget::PVZ2UnchartedModeZombieWidget
          (PVZ2UnchartedModeZombieWidget *this,undefined8 param_2,undefined4 param_3)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_069d0e40;
  Set8BytesTo0(this + 0xd8);
  *(undefined8 *)(this + 0xe8) = 0;
  thunk_FUN_05475e00(this + 0xd8,param_2);
  *(undefined4 *)(this + 0xe0) = param_3;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeZombieWidget::Draw(Sexy::Graphics*) */

void __thiscall
PVZ2UnchartedModeZombieWidget::Draw(PVZ2UnchartedModeZombieWidget *this,Graphics *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  SeedPacketUtils *this_01;
  PacketRenderData *pPVar6;
  DeviceImage *pDVar7;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar2 = std::operator!=((string *)(this + 0xd8),"");
  if (!bVar2) goto LAB_04dfb86c;
  if (*(long *)(this + 0xe8) == 0) {
    this_01 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
    std::string::string((string *)aIStack_18,"IMAGE_UI_ZOMBIE_PVP1_PACKETS_");
    pPVar6 = (PacketRenderData *)
             SeedPacketUtils::GetZombiePacketRenderData
                       (this_01,(string *)(this + 0xd8),(string *)aIStack_18,-1);
    std::string::~string((string *)aIStack_18);
    nop();
    pDVar7 = (DeviceImage *)SeedPacketUtils::CreateDeviceImageForSeedPacket(this_01,pPVar6,0,0);
    *(DeviceImage **)(this + 0xe8) = pDVar7;
    SeedPacketUtils::DrawPacketToDeviceImage(this_01,pDVar7,pPVar6,false,-1,false,false);
    if (*(long *)(this + 0xe8) != 0) goto LAB_04dfb820;
  }
  else {
LAB_04dfb820:
    Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    DrawAdaptiveImage(param_1,aIStack_18,*(undefined8 *)(this + 0xe8));
  }
  iVar1 = *(int *)(this + 0xe0);
  if (iVar1 == 1) {
    iVar3 = FUN_04df99bc(0x1e);
    iVar1 = *(int *)(this + 0x50);
    iVar4 = FUN_04df99bc(0);
    Sexy::Insets::Insets(aIStack_18,iVar1 - iVar3,iVar4,iVar3,iVar3);
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9d410;
  }
  else if (iVar1 == 2) {
    iVar3 = FUN_04df99bc(0x1e);
    iVar1 = *(int *)(this + 0x50);
    iVar4 = FUN_04df99bc(0);
    Sexy::Insets::Insets(aIStack_18,iVar1 - iVar3,iVar4,iVar3,iVar3);
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9ced0;
  }
  else if (iVar1 == 3) {
    iVar3 = FUN_04df99bc(0x1e);
    iVar1 = *(int *)(this + 0x50);
    iVar4 = FUN_04df99bc(0);
    Sexy::Insets::Insets(aIStack_18,iVar1 - iVar3,iVar4,iVar3,iVar3);
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9cf98;
  }
  else {
    if (iVar1 != 4) goto LAB_04dfb86c;
    iVar3 = FUN_04df99bc(0x1e);
    iVar1 = *(int *)(this + 0x50);
    iVar4 = FUN_04df99bc(0);
    Sexy::Insets::Insets(aIStack_18,iVar1 - iVar3,iVar4,iVar3,iVar3);
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9d318;
  }
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
  DrawAdaptiveImage(param_1,aIStack_18,uVar5);
LAB_04dfb86c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

