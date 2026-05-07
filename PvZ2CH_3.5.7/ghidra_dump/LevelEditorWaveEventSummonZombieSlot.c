// Class: LevelEditorWaveEventSummonZombieSlot


/* LevelEditorWaveEventSummonZombieSlot::~LevelEditorWaveEventSummonZombieSlot() */

void __thiscall
LevelEditorWaveEventSummonZombieSlot::~LevelEditorWaveEventSummonZombieSlot
          (LevelEditorWaveEventSummonZombieSlot *this)

{
  *(undefined ***)this = &PTR_GetClass_0696ac10;
  if (*(long **)(this + 0xe8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xe8) + 0x18))();
    *(undefined8 *)(this + 0xe8) = 0;
  }
  std::string::~string((string *)(this + 0xe0));
  LevelEditorZombieCursorSlot::~LevelEditorZombieCursorSlot((LevelEditorZombieCursorSlot *)this);
  return;
}


/* LevelEditorWaveEventSummonZombieSlot::~LevelEditorWaveEventSummonZombieSlot() */

void __thiscall
LevelEditorWaveEventSummonZombieSlot::~LevelEditorWaveEventSummonZombieSlot
          (LevelEditorWaveEventSummonZombieSlot *this)

{
  ~LevelEditorWaveEventSummonZombieSlot(this);
  AK::FreeHook(this);
  return;
}


/* LevelEditorWaveEventSummonZombieSlot::LevelEditorWaveEventSummonZombieSlot() */

void __thiscall
LevelEditorWaveEventSummonZombieSlot::LevelEditorWaveEventSummonZombieSlot
          (LevelEditorWaveEventSummonZombieSlot *this)

{
  LevelEditorZombieCursorSlot::LevelEditorZombieCursorSlot((LevelEditorZombieCursorSlot *)this);
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined ***)this = &PTR_GetClass_0696ac10;
  Set8BytesTo0(this + 0xe0);
  *(undefined8 *)(this + 0xe8) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorWaveEventSummonZombieSlot::Reload() */

void __thiscall
LevelEditorWaveEventSummonZombieSlot::Reload(LevelEditorWaveEventSummonZombieSlot *this)

{
  int iVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long **)(this + 0xe8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xe8) + 0x18))();
    *(undefined8 *)(this + 0xe8) = 0;
  }
  iVar1 = Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  CustomLevelMgr::GetSummonZombieTypeName(iVar1);
  FUN_05474278(this + 0xe0,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditorWaveEventSummonZombieSlot::Init(int) */

void __thiscall
LevelEditorWaveEventSummonZombieSlot::Init(LevelEditorWaveEventSummonZombieSlot *this,int param_1)

{
  *(int *)(this + 0xd8) = param_1;
  Reload(this);
  return;
}


/* LevelEditorWaveEventSummonZombieSlot::OnSlotAccept(Sexy::Point const&, std::string const&) */

void __thiscall
LevelEditorWaveEventSummonZombieSlot::OnSlotAccept
          (LevelEditorWaveEventSummonZombieSlot *this,Point *param_1,string *param_2)

{
  bool bVar1;
  CustomLevelMgr *this_00;
  
  bVar1 = std::operator==((string *)(this + 0xe0),"");
  if (!bVar1) {
    return;
  }
  thunk_FUN_05475e00((string *)(this + 0xe0),param_2);
  this_00 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  CustomLevelMgr::SetSummonZombieTypeName(this_00,*(int *)(this + 0xd8),param_2);
  Reload(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorWaveEventSummonZombieSlot::TouchEnded(Sexy::Touch const&) */

void __thiscall
LevelEditorWaveEventSummonZombieSlot::TouchEnded
          (LevelEditorWaveEventSummonZombieSlot *this,Touch *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  LevelEditorMultifunctionAssembly *this_00;
  int local_48;
  int local_44;
  string asStack_40 [8];
  Insets aIStack_38 [16];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(this + 0xd4) == (int)*(undefined8 *)param_1) &&
     (bVar2 = std::operator!=((string *)(this + 0xe0),""), bVar2)) {
    this_00 = ::operator_new(0x120);
    LevelEditorMultifunctionAssembly::LevelEditorMultifunctionAssembly(this_00);
    (**(code **)(*(long *)this + 0xd0))(&local_48,this);
    iVar1 = *(int *)(this + 0x50);
    iVar3 = FUN_04b54f08(10);
    iVar4 = FUN_04b54f08(0x28);
    Sexy::Insets::Insets
              (aIStack_38,local_48 + iVar1 + iVar3,local_44 + (*(int *)(this + 0x54) - iVar4) / 2,
               iVar4,iVar4);
    FUN_04b54d98(afStack_28,this_00,this);
    std::string::string(asStack_40,"delete");
    LevelEditorMultifunctionAssembly::AttachButton(this_00,1,aIStack_38,afStack_28,asStack_40);
    std::string::~string(asStack_40);
    nop();
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
    UIUtil::ShowDialog((Widget *)this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorWaveEventSummonZombieSlot::Draw(Sexy::Graphics*) */

void __thiscall
LevelEditorWaveEventSummonZombieSlot::Draw
          (LevelEditorWaveEventSummonZombieSlot *this,Graphics *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  SeedPacketUtils *this_00;
  PacketRenderData *pPVar3;
  DeviceImage *pDVar4;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b86338);
  Draw9SliceImage(param_1,aIStack_18,uVar2);
  bVar1 = std::operator!=((string *)(this + 0xe0),"");
  if (bVar1) {
    if (*(long *)(this + 0xe8) == 0) {
      this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
      std::string::string((string *)aIStack_18,"IMAGE_UI_ZOMBIE_PVP1_PACKETS_");
      pPVar3 = (PacketRenderData *)
               SeedPacketUtils::GetZombiePacketRenderData
                         (this_00,(string *)(this + 0xe0),(string *)aIStack_18,-1);
      std::string::~string((string *)aIStack_18);
      nop();
      pDVar4 = (DeviceImage *)SeedPacketUtils::CreateDeviceImageForSeedPacket(this_00,pPVar3,0,0);
      *(DeviceImage **)(this + 0xe8) = pDVar4;
      SeedPacketUtils::DrawPacketToDeviceImage(this_00,pDVar4,pPVar3,false,-1,false,false);
      if (*(long *)(this + 0xe8) == 0) goto LAB_04b5f460;
    }
    Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    DrawAdaptiveImage(param_1,aIStack_18,*(undefined8 *)(this + 0xe8));
  }
LAB_04b5f460:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

