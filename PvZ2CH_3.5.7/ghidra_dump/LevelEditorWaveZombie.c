// Class: LevelEditorWaveZombie


/* LevelEditorWaveZombie::Init(int) */

void __thiscall LevelEditorWaveZombie::Init(LevelEditorWaveZombie *this,int param_1)

{
  *(int *)(this + 0xe4) = param_1;
  (**(code **)(*(long *)this + 800))();
  return;
}


/* LevelEditorWaveZombie::ChangeZombieType(std::string const&) */

void __thiscall LevelEditorWaveZombie::ChangeZombieType(LevelEditorWaveZombie *this,string *param_1)

{
  if (*(long **)(this + 0xf0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xf0) + 0x18))();
    *(undefined8 *)(this + 0xf0) = 0;
  }
  thunk_FUN_05475e00(this + 0xe8,param_1);
  return;
}


/* LevelEditorWaveZombie::~LevelEditorWaveZombie() */

void __thiscall LevelEditorWaveZombie::~LevelEditorWaveZombie(LevelEditorWaveZombie *this)

{
  *(undefined ***)this = &PTR_GetClass_06967570;
  if (*(long **)(this + 0xf0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xf0) + 0x18))();
    *(undefined8 *)(this + 0xf0) = 0;
  }
  std::string::~string((string *)(this + 0xe8));
  LevelEditorZombieCursorSlot::~LevelEditorZombieCursorSlot((LevelEditorZombieCursorSlot *)this);
  return;
}


/* LevelEditorWaveZombie::~LevelEditorWaveZombie() */

void __thiscall LevelEditorWaveZombie::~LevelEditorWaveZombie(LevelEditorWaveZombie *this)

{
  ~LevelEditorWaveZombie(this);
  AK::FreeHook(this);
  return;
}


/* LevelEditorWaveZombie::LevelEditorWaveZombie(int, int) */

void __thiscall
LevelEditorWaveZombie::LevelEditorWaveZombie(LevelEditorWaveZombie *this,int param_1,int param_2)

{
  LevelEditorZombieCursorSlot::LevelEditorZombieCursorSlot((LevelEditorZombieCursorSlot *)this);
  *(int *)(this + 0xd8) = param_1;
  *(int *)(this + 0xdc) = param_2;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined ***)this = &PTR_GetClass_06967570;
  Set8BytesTo0(this + 0xe8);
  *(undefined8 *)(this + 0xf0) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorWaveZombie::Reload() */

void __thiscall LevelEditorWaveZombie::Reload(LevelEditorWaveZombie *this)

{
  bool bVar1;
  int iVar2;
  code *pcVar3;
  string asStack_20 [8];
  string asStack_18 [12];
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long **)(this + 0xf0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xf0) + 0x18))();
    *(undefined8 *)(this + 0xf0) = 0;
  }
  iVar2 = Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  CustomLevelMgr::GetWaveZombie(iVar2,*(int *)(this + 0xe4),*(int *)(this + 0xd8));
  bVar1 = std::operator!=(asStack_18,"");
  if (bVar1) {
    (**(code **)(*(long *)this + 0x328))(this,asStack_18);
    *(undefined4 *)(this + 0xe0) = local_c;
  }
  else {
    pcVar3 = *(code **)(*(long *)this + 0x328);
    std::string::string(asStack_20,"");
    (*pcVar3)(this,asStack_20);
    std::string::~string(asStack_20);
    nop();
  }
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorWaveZombie::TouchEnded(Sexy::Touch const&) */

void __thiscall LevelEditorWaveZombie::TouchEnded(LevelEditorWaveZombie *this,Touch *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  LevelEditorMultifunctionAssembly *this_00;
  long *plVar4;
  int local_48;
  int local_44;
  string asStack_40 [8];
  Insets aIStack_38 [16];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(this + 0xd4) == (int)*(undefined8 *)param_1) &&
     (bVar2 = std::operator!=((string *)(this + 0xe8),""), bVar2)) {
    this_00 = ::operator_new(0x120);
    LevelEditorMultifunctionAssembly::LevelEditorMultifunctionAssembly(this_00);
    (**(code **)(*(long *)this + 0xd0))(&local_48,this);
    iVar1 = local_48 + *(int *)(this + 0x50);
    iVar3 = FUN_04b54f08(0x28);
    Sexy::Insets::Insets(aIStack_38,iVar1 - iVar3 / 2,local_44 - iVar3,iVar3,iVar3);
    FUN_04b54ab8(afStack_28,this_00,this);
    std::string::string(asStack_40,"add");
    plVar4 = (long *)LevelEditorMultifunctionAssembly::AttachButton
                               (this_00,1,aIStack_38,afStack_28,asStack_40);
    (**(code **)(*plVar4 + 0x188))(plVar4,9 < *(int *)(this + 0xe0));
    std::string::~string(asStack_40);
    nop();
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
    iVar1 = local_48 + *(int *)(this + 0x50);
    iVar3 = FUN_04b54f08(0x28);
    Sexy::Insets::Insets
              (aIStack_38,iVar1 + iVar3 / 2,local_44 + (*(int *)(this + 0x54) - iVar3) / 2,iVar3,
               iVar3);
    FUN_04b54b14(afStack_28,this_00,this);
    std::string::string(asStack_40,"subtract");
    plVar4 = (long *)LevelEditorMultifunctionAssembly::AttachButton
                               (this_00,2,aIStack_38,afStack_28,asStack_40);
    (**(code **)(*plVar4 + 0x188))(plVar4,*(int *)(this + 0xe0) < 2);
    std::string::~string(asStack_40);
    nop();
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
    iVar1 = *(int *)(this + 0x50);
    iVar3 = FUN_04b54f08(0x28);
    Sexy::Insets::Insets
              (aIStack_38,(local_48 + iVar1) - iVar3 / 2,local_44 + *(int *)(this + 0x54),iVar3,
               iVar3);
    FUN_04b54b70(afStack_28,this_00,this);
    std::string::string(asStack_40,"delete");
    LevelEditorMultifunctionAssembly::AttachButton(this_00,3,aIStack_38,afStack_28,asStack_40);
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


/* LevelEditorWaveZombie::OnSlotAccept(Sexy::Point const&, std::string const&) */

void __thiscall
LevelEditorWaveZombie::OnSlotAccept(LevelEditorWaveZombie *this,Point *param_1,string *param_2)

{
  bool bVar1;
  int iVar2;
  ProfileMgr *pPVar3;
  long lVar4;
  CustomLevelMgr *this_00;
  
  bVar1 = std::operator==((string *)(this + 0xe8),"");
  if (bVar1) {
    (**(code **)(*(long *)this + 0x328))(this,param_2);
    this_00 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    CustomLevelMgr::AddWaveZombie
              (this_00,*(int *)(this + 0xe4),(string *)(this + 0xe8),*(int *)(this + 0xd8),
               *(int *)(this + 0xdc),1);
    (**(code **)(*(long *)this + 800))(this);
    pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar4 = ProfileMgr::GetCurrentProfile(pPVar3);
    iVar2 = FUN_04b534f4(*(undefined4 *)(lVar4 + 0x40));
  }
  else {
    pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar4 = ProfileMgr::GetCurrentProfile(pPVar3);
    iVar2 = FUN_04b534f4(*(undefined4 *)(lVar4 + 0x40));
  }
  if (iVar2 != 0x3c) {
    return;
  }
  LawnApp::KillGameMaskUI(gLawnApp);
  MessageRouter::Broadcast((_func_void *)gMessageRouter);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorWaveZombie::Draw(Sexy::Graphics*) */

void __thiscall LevelEditorWaveZombie::Draw(LevelEditorWaveZombie *this,Graphics *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  SeedPacketUtils *this_00;
  PacketRenderData *pPVar6;
  DeviceImage *pDVar7;
  CachedUIResourcePtr<Sexy::Image> *this_01;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b86410);
  Draw9SliceImage(param_1,aIStack_18,uVar5);
  bVar2 = std::operator!=((string *)(this + 0xe8),"");
  if (!bVar2) goto LAB_04b5ecd4;
  if (*(long *)(this + 0xf0) == 0) {
    this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
    std::string::string((string *)aIStack_18,"IMAGE_UI_ZOMBIE_PVP1_PACKETS_");
    pPVar6 = (PacketRenderData *)
             SeedPacketUtils::GetZombiePacketRenderData
                       (this_00,(string *)(this + 0xe8),(string *)aIStack_18,-1);
    std::string::~string((string *)aIStack_18);
    nop();
    pDVar7 = (DeviceImage *)SeedPacketUtils::CreateDeviceImageForSeedPacket(this_00,pPVar6,0,0);
    *(DeviceImage **)(this + 0xf0) = pDVar7;
    SeedPacketUtils::DrawPacketToDeviceImage(this_00,pDVar7,pPVar6,false,-1,false,false);
    if (*(long *)(this + 0xf0) != 0) goto LAB_04b5ec58;
  }
  else {
LAB_04b5ec58:
    Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    DrawAdaptiveImage(param_1,aIStack_18,*(undefined8 *)(this + 0xf0));
  }
  iVar1 = *(int *)(this + 0xe0);
  if (iVar1 == 1) {
    iVar3 = FUN_04b54f08(0x1e);
    iVar1 = *(int *)(this + 0x50);
    iVar4 = FUN_04b54f08(0);
    Sexy::Insets::Insets(aIStack_18,iVar1 - iVar3,iVar4,iVar3,iVar3);
    this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b865b8;
  }
  else if (iVar1 == 2) {
    iVar3 = FUN_04b54f08(0x1e);
    iVar1 = *(int *)(this + 0x50);
    iVar4 = FUN_04b54f08(0);
    Sexy::Insets::Insets(aIStack_18,iVar1 - iVar3,iVar4,iVar3,iVar3);
    this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b86460;
  }
  else if (iVar1 == 3) {
    iVar3 = FUN_04b54f08(0x1e);
    iVar1 = *(int *)(this + 0x50);
    iVar4 = FUN_04b54f08(0);
    Sexy::Insets::Insets(aIStack_18,iVar1 - iVar3,iVar4,iVar3,iVar3);
    this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b863e8;
  }
  else if (iVar1 == 4) {
    iVar3 = FUN_04b54f08(0x1e);
    iVar1 = *(int *)(this + 0x50);
    iVar4 = FUN_04b54f08(0);
    Sexy::Insets::Insets(aIStack_18,iVar1 - iVar3,iVar4,iVar3,iVar3);
    this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b862e8;
  }
  else if (iVar1 == 5) {
    iVar3 = FUN_04b54f08(0x1e);
    iVar1 = *(int *)(this + 0x50);
    iVar4 = FUN_04b54f08(0);
    Sexy::Insets::Insets(aIStack_18,iVar1 - iVar3,iVar4,iVar3,iVar3);
    this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b86268;
  }
  else if (iVar1 == 6) {
    iVar3 = FUN_04b54f08(0x1e);
    iVar1 = *(int *)(this + 0x50);
    iVar4 = FUN_04b54f08(0);
    Sexy::Insets::Insets(aIStack_18,iVar1 - iVar3,iVar4,iVar3,iVar3);
    this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b86170;
  }
  else if (iVar1 == 7) {
    iVar3 = FUN_04b54f08(0x1e);
    iVar1 = *(int *)(this + 0x50);
    iVar4 = FUN_04b54f08(0);
    Sexy::Insets::Insets(aIStack_18,iVar1 - iVar3,iVar4,iVar3,iVar3);
    this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85fc0;
  }
  else if (iVar1 == 8) {
    iVar3 = FUN_04b54f08(0x1e);
    iVar1 = *(int *)(this + 0x50);
    iVar4 = FUN_04b54f08(0);
    Sexy::Insets::Insets(aIStack_18,iVar1 - iVar3,iVar4,iVar3,iVar3);
    this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b86388;
  }
  else if (iVar1 == 9) {
    iVar3 = FUN_04b54f08(0x1e);
    iVar1 = *(int *)(this + 0x50);
    iVar4 = FUN_04b54f08(0);
    Sexy::Insets::Insets(aIStack_18,iVar1 - iVar3,iVar4,iVar3,iVar3);
    this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b86530;
  }
  else {
    if (iVar1 != 10) goto LAB_04b5ecd4;
    iVar3 = FUN_04b54f08(0x1e);
    iVar1 = *(int *)(this + 0x50);
    iVar4 = FUN_04b54f08(0);
    Sexy::Insets::Insets(aIStack_18,iVar1 - iVar3,iVar4,iVar3,iVar3);
    this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b860e8;
  }
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->(this_01);
  DrawAdaptiveImage(param_1,aIStack_18,uVar5);
LAB_04b5ecd4:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

