// Class: CheatToggleAction


/* CheatToggleAction::~CheatToggleAction() */

void __thiscall CheatToggleAction::~CheatToggleAction(CheatToggleAction *this)

{
  *(undefined ***)this = &PTR_GetClass_067538e0;
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x18));
  CheatToggle::~CheatToggle((CheatToggle *)this);
  return;
}


/* CheatToggleAction::~CheatToggleAction() */

void __thiscall CheatToggleAction::~CheatToggleAction(CheatToggleAction *this)

{
  ~CheatToggleAction(this);
  AK::FreeHook(this);
  return;
}


/* CheatToggleAction::StaticGetClass() */

long * CheatToggleAction::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = CheatToggle::StaticGetClass();
  (*pcVar3)(plVar1,"CheatToggleAction",uVar2,StaticNew);
  return sClass;
}


/* CheatToggleAction::GetClass() const */

long * CheatToggleAction::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = CheatToggle::StaticGetClass();
  (*pcVar3)(plVar1,"CheatToggleAction",uVar2,StaticNew);
  return sClass;
}


/* CheatToggleAction::Toggle() */

CheatToggleAction __thiscall CheatToggleAction::Toggle(CheatToggleAction *this)

{
  CheatToggleAction CVar1;
  CheatToggleAction CVar2;
  
  CVar1 = this[0x15];
  CVar2 = (CheatToggleAction)CheatToggle::Toggle((CheatToggle *)this);
  if (CVar1 != CVar2) {
    std::function<void(bool)>::operator()((function<void(bool)> *)(this + 0x18),(bool)CVar2);
  }
  return this[0x15];
}


/* CheatToggleAction::CheatToggleAction(std::string const&, std::function<void (bool)>&&, bool) */

void __thiscall
CheatToggleAction::CheatToggleAction
          (CheatToggleAction *this,string *param_1,function *param_2,bool param_3)

{
  function *extraout_x0;
  
  CheatToggle::CheatToggle((CheatToggle *)this,param_1,param_3);
  *(undefined ***)this = &PTR_GetClass_067538e0;
  nop();
  std::function<void(Zombie*)>::function((function<void(Zombie*)> *)(this + 0x18),extraout_x0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CheatToggleAction::CheatToggleAction() */

void __thiscall CheatToggleAction::CheatToggleAction(CheatToggleAction *this)

{
  string asStack_30 [8];
  function<void(Sexy::Graphics*)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_30);
  std::function<void(Sexy::Graphics*)>::function(afStack_28);
  CheatToggleAction(this,asStack_30,(function *)afStack_28,false);
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)afStack_28);
  std::string::~string(asStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CheatToggleAction::StaticNew() */

CheatToggleAction * CheatToggleAction::StaticNew(void)

{
  CheatToggleAction *this;
  
  this = ::operator_new(0x38);
  CheatToggleAction(this);
  return this;
}

