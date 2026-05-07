// Class: LevelEditorSingleHandedWaveZombie


/* LevelEditorSingleHandedWaveZombie::~LevelEditorSingleHandedWaveZombie() */

void __thiscall
LevelEditorSingleHandedWaveZombie::~LevelEditorSingleHandedWaveZombie
          (LevelEditorSingleHandedWaveZombie *this)

{
  *(undefined ***)this = &PTR_GetClass_06967bf0;
  LevelEditorWaveZombie::~LevelEditorWaveZombie((LevelEditorWaveZombie *)this);
  return;
}


/* LevelEditorSingleHandedWaveZombie::~LevelEditorSingleHandedWaveZombie() */

void __thiscall
LevelEditorSingleHandedWaveZombie::~LevelEditorSingleHandedWaveZombie
          (LevelEditorSingleHandedWaveZombie *this)

{
  ~LevelEditorSingleHandedWaveZombie(this);
  AK::FreeHook(this);
  return;
}


/* LevelEditorSingleHandedWaveZombie::LevelEditorSingleHandedWaveZombie(int, int) */

void __thiscall
LevelEditorSingleHandedWaveZombie::LevelEditorSingleHandedWaveZombie
          (LevelEditorSingleHandedWaveZombie *this,int param_1,int param_2)

{
  LevelEditorWaveZombie::LevelEditorWaveZombie((LevelEditorWaveZombie *)this,param_1,param_2);
  *(undefined ***)this = &PTR_GetClass_06967bf0;
  return;
}


/* LevelEditorSingleHandedWaveZombie::OnSlotAccept(Sexy::Point const&, std::string const&) */

void __thiscall
LevelEditorSingleHandedWaveZombie::OnSlotAccept
          (LevelEditorSingleHandedWaveZombie *this,Point *param_1,string *param_2)

{
  bool bVar1;
  CustomLevelMgr *this_00;
  
  bVar1 = std::operator==((string *)(this + 0xe8),"");
  if (bVar1) {
    (**(code **)(*(long *)this + 0x328))(this,param_2);
    this_00 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    CustomLevelMgr::AddSingleHandedWaveZombie
              (this_00,*(int *)(this + 0xe4),(string *)(this + 0xe8),*(int *)(this + 0xd8),
               *(int *)(this + 0xdc));
    (**(code **)(*(long *)this + 800))(this);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorSingleHandedWaveZombie::TouchEnded(Sexy::Touch const&) */

void __thiscall
LevelEditorSingleHandedWaveZombie::TouchEnded
          (LevelEditorSingleHandedWaveZombie *this,Touch *param_1)

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
     (bVar2 = std::operator!=((string *)(this + 0xe8),""), bVar2)) {
    this_00 = ::operator_new(0x120);
    LevelEditorMultifunctionAssembly::LevelEditorMultifunctionAssembly(this_00);
    (**(code **)(*(long *)this + 0xd0))(&local_48,this);
    iVar1 = *(int *)(this + 0x50);
    iVar3 = FUN_04b54f08(10);
    iVar4 = FUN_04b54f08(0x28);
    Sexy::Insets::Insets
              (aIStack_38,local_48 + iVar1 + iVar3,local_44 + (*(int *)(this + 0x54) - iVar4) / 2,
               iVar4,iVar4);
    FUN_04b54c28(afStack_28,this_00,this);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorSingleHandedWaveZombie::Reload() */

void __thiscall LevelEditorSingleHandedWaveZombie::Reload(LevelEditorSingleHandedWaveZombie *this)

{
  bool bVar1;
  int iVar2;
  code *pcVar3;
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long **)(this + 0xf0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xf0) + 0x18))();
    *(undefined8 *)(this + 0xf0) = 0;
  }
  iVar2 = Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  CustomLevelMgr::GetSingleHandedWaveZombie(iVar2,*(int *)(this + 0xe4),*(int *)(this + 0xd8));
  bVar1 = std::operator!=(asStack_18,"");
  if (bVar1) {
    (**(code **)(*(long *)this + 0x328))(this,asStack_18);
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

