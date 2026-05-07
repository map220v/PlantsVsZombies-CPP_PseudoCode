// Class: CheatToggle


/* CheatToggle::GetValue() const */

CheatToggle __thiscall CheatToggle::GetValue(CheatToggle *this)

{
  return this[0x15];
}


/* CheatToggle::Toggle() */

void __thiscall CheatToggle::Toggle(CheatToggle *this)

{
  byte bVar1;
  
  bVar1 = (**(code **)(*(long *)this + 0x48))();
  (**(code **)(*(long *)this + 0x50))(this,bVar1 ^ 1);
  (**(code **)(*(long *)this + 0x48))(this);
  return;
}


/* CheatToggle::~CheatToggle() */

void __thiscall CheatToggle::~CheatToggle(CheatToggle *this)

{
  *(undefined ***)this = &PTR_GetClass_06753870;
  Cheat::~Cheat((Cheat *)this);
  return;
}


/* CheatToggle::~CheatToggle() */

void __thiscall CheatToggle::~CheatToggle(CheatToggle *this)

{
  ~CheatToggle(this);
  AK::FreeHook(this);
  return;
}


/* CheatToggle::CheatToggle() */

void __thiscall CheatToggle::CheatToggle(CheatToggle *this)

{
  Cheat::Cheat((Cheat *)this);
  this[0x15] = (CheatToggle)0x0;
  *(undefined ***)this = &PTR_GetClass_06753870;
  return;
}


/* CheatToggle::StaticNew() */

CheatToggle * CheatToggle::StaticNew(void)

{
  CheatToggle *this;
  
  this = ::operator_new(0x18);
  CheatToggle(this);
  return this;
}


/* CheatToggle::CheatToggle(std::string const&, bool) */

void __thiscall CheatToggle::CheatToggle(CheatToggle *this,string *param_1,bool param_2)

{
  Cheat::Cheat((Cheat *)this,param_1);
  this[0x15] = (CheatToggle)param_2;
  *(undefined ***)this = &PTR_GetClass_06753870;
  return;
}


/* CheatToggle::StaticGetClass() */

long * CheatToggle::StaticGetClass(void)

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
  uVar2 = Cheat::StaticGetClass();
  (*pcVar3)(plVar1,"CheatToggle",uVar2,StaticNew);
  return sClass;
}


/* CheatToggle::GetClass() const */

long * CheatToggle::GetClass(void)

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
  uVar2 = Cheat::StaticGetClass();
  (*pcVar3)(plVar1,"CheatToggle",uVar2,StaticNew);
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CheatToggle::SetValue(bool) */

void __thiscall CheatToggle::SetValue(CheatToggle *this,bool param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  char *pcVar3;
  float fVar4;
  string asStack_10 [8];
  long local_8;
  
  this[0x15] = (CheatToggle)param_1;
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_end((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this);
  FUN_05475d88(asStack_10,uVar2);
  MessageRouter::Broadcast<std::string_const&,std::string>
            ((MessageRouter *)puVar1,Message::CheatActivated,asStack_10);
  std::string::~string(asStack_10);
  fVar4 = (float)PVZ_T();
  uVar2 = FUN_0547429c(uVar2);
  if (this[0x15] == (CheatToggle)0x0) {
    pcVar3 = "false";
  }
  else {
    pcVar3 = "true";
  }
  Sexy::StrFormat("PVZ_T: %f - [CHEAT] Cheat Toggled: %s with Value: %s",asStack_10,(double)fVar4,
                  uVar2,pcVar3);
  nop();
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

