// Class: LevelEditorWaveEventStormZombie


/* LevelEditorWaveEventStormZombie::~LevelEditorWaveEventStormZombie() */

void __thiscall
LevelEditorWaveEventStormZombie::~LevelEditorWaveEventStormZombie
          (LevelEditorWaveEventStormZombie *this)

{
  *(undefined ***)this = &PTR_GetClass_06968990;
  if (*(long **)(this + 0xe8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xe8) + 0x18))();
    *(undefined8 *)(this + 0xe8) = 0;
  }
  std::string::~string((string *)(this + 0xe0));
  LevelEditorZombieCursorSlot::~LevelEditorZombieCursorSlot((LevelEditorZombieCursorSlot *)this);
  return;
}


/* LevelEditorWaveEventStormZombie::~LevelEditorWaveEventStormZombie() */

void __thiscall
LevelEditorWaveEventStormZombie::~LevelEditorWaveEventStormZombie
          (LevelEditorWaveEventStormZombie *this)

{
  ~LevelEditorWaveEventStormZombie(this);
  AK::FreeHook(this);
  return;
}


/* LevelEditorWaveEventStormZombie::LevelEditorWaveEventStormZombie() */

void __thiscall
LevelEditorWaveEventStormZombie::LevelEditorWaveEventStormZombie
          (LevelEditorWaveEventStormZombie *this)

{
  LevelEditorZombieCursorSlot::LevelEditorZombieCursorSlot((LevelEditorZombieCursorSlot *)this);
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined ***)this = &PTR_GetClass_06968990;
  Set8BytesTo0(this + 0xe0);
  *(undefined8 *)(this + 0xe8) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorWaveEventStormZombie::Reload() */

void __thiscall LevelEditorWaveEventStormZombie::Reload(LevelEditorWaveEventStormZombie *this)

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
  CustomLevelMgr::GetWaveEventSandStormZombie(iVar1,*(int *)(this + 0xd8));
  FUN_05474278(this + 0xe0,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditorWaveEventStormZombie::Init(int, int) */

void __thiscall
LevelEditorWaveEventStormZombie::Init(LevelEditorWaveEventStormZombie *this,int param_1,int param_2)

{
  *(int *)(this + 0xd8) = param_1;
  *(int *)(this + 0xdc) = param_2;
  Reload(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorWaveEventStormZombie::TouchEnded(Sexy::Touch const&) */

void __thiscall
LevelEditorWaveEventStormZombie::TouchEnded(LevelEditorWaveEventStormZombie *this,Touch *param_1)

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
    FUN_04b54d3c(afStack_28,this_00,this);
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


/* LevelEditorWaveEventStormZombie::OnSlotAccept(Sexy::Point const&, std::string const&) */

void __thiscall
LevelEditorWaveEventStormZombie::OnSlotAccept
          (LevelEditorWaveEventStormZombie *this,Point *param_1,string *param_2)

{
  string *psVar1;
  bool bVar2;
  int iVar3;
  ProfileMgr *pPVar4;
  long lVar5;
  CustomLevelMgr *this_00;
  
  psVar1 = (string *)(this + 0xe0);
  bVar2 = std::operator==(psVar1,"");
  if (bVar2) {
    thunk_FUN_05475e00(psVar1,param_2);
    this_00 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    CustomLevelMgr::AddWaveEventSandStorm
              (this_00,*(int *)(this + 0xd8),*(int *)(this + 0xdc),psVar1);
    Reload(this);
    pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar5 = ProfileMgr::GetCurrentProfile(pPVar4);
    iVar3 = FUN_04b534f4(*(undefined4 *)(lVar5 + 0x40));
  }
  else {
    pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar5 = ProfileMgr::GetCurrentProfile(pPVar4);
    iVar3 = FUN_04b534f4(*(undefined4 *)(lVar5 + 0x40));
  }
  if (iVar3 != 0x3c) {
    return;
  }
  LawnApp::KillGameMaskUI(gLawnApp);
  MessageRouter::Broadcast((_func_void *)gMessageRouter);
  return;
}

