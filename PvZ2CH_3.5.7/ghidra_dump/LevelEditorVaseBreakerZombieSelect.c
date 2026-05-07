// Class: LevelEditorVaseBreakerZombieSelect


/* LevelEditorVaseBreakerZombieSelect::SetFunc(std::function<void (LevelEditorCardInfo const&)>) */

void __thiscall
LevelEditorVaseBreakerZombieSelect::SetFunc
          (LevelEditorVaseBreakerZombieSelect *this,function *param_2)

{
  std::function<void(int,int,int,int,int,int,int,int)>::operator=
            ((function<void(int,int,int,int,int,int,int,int)> *)(this + 0x100),param_2);
  return;
}


/* LevelEditorVaseBreakerZombieSelect::~LevelEditorVaseBreakerZombieSelect() */

void __thiscall
LevelEditorVaseBreakerZombieSelect::~LevelEditorVaseBreakerZombieSelect
          (LevelEditorVaseBreakerZombieSelect *this)

{
  *(undefined ***)this = &PTR_GetClass_0696d240;
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x100));
  LevelEditorZombieDraggable::~LevelEditorZombieDraggable((LevelEditorZombieDraggable *)this);
  return;
}


/* LevelEditorVaseBreakerZombieSelect::~LevelEditorVaseBreakerZombieSelect() */

void __thiscall
LevelEditorVaseBreakerZombieSelect::~LevelEditorVaseBreakerZombieSelect
          (LevelEditorVaseBreakerZombieSelect *this)

{
  ~LevelEditorVaseBreakerZombieSelect(this);
  AK::FreeHook(this);
  return;
}


/* LevelEditorVaseBreakerZombieSelect::LevelEditorVaseBreakerZombieSelect() */

void __thiscall
LevelEditorVaseBreakerZombieSelect::LevelEditorVaseBreakerZombieSelect
          (LevelEditorVaseBreakerZombieSelect *this)

{
  LevelEditorZombieDraggable::LevelEditorZombieDraggable((LevelEditorZombieDraggable *)this);
  *(undefined ***)this = &PTR_GetClass_0696d240;
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x100));
  FUN_04b65658((function<void(Sexy::Graphics*)> *)(this + 0x100));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorVaseBreakerZombieSelect::TouchEnded(Sexy::Touch const&) */

void LevelEditorVaseBreakerZombieSelect::TouchEnded(Touch *param_1)

{
  bool bVar1;
  undefined4 local_18 [2];
  undefined1 auStack_10 [8];
  long local_8;
  
  param_1[0xf0] = (Touch)0x0;
  local_8 = ___stack_chk_guard;
  bVar1 = std::function::operator_cast_to_bool((function *)(param_1 + 0x100));
  if (bVar1) {
    LevelEditorCardInfo::LevelEditorCardInfo((LevelEditorCardInfo *)local_18);
    local_18[0] = 3;
    thunk_FUN_05475e00(auStack_10,param_1 + 0xe8);
    std::function<void(LevelEditorCardInfo_const&)>::operator()
              ((function<void(LevelEditorCardInfo_const&)> *)(param_1 + 0x100),
               (LevelEditorCardInfo *)local_18);
    PakRecord::~PakRecord((PakRecord *)local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

