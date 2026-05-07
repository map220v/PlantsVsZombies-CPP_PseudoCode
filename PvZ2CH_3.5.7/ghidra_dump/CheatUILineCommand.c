// Class: CheatUILineCommand


/* CheatUILineCommand::~CheatUILineCommand() */

void __thiscall CheatUILineCommand::~CheatUILineCommand(CheatUILineCommand *this)

{
  *(undefined ***)this = &PTR_GetClass_06753ad0;
  CheatUILine::~CheatUILine((CheatUILine *)this);
  return;
}


/* CheatUILineCommand::~CheatUILineCommand() */

void __thiscall CheatUILineCommand::~CheatUILineCommand(CheatUILineCommand *this)

{
  ~CheatUILineCommand(this);
  AK::FreeHook(this);
  return;
}


/* CheatUILineCommand::StaticGetClass() */

long * CheatUILineCommand::StaticGetClass(void)

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
  uVar2 = CheatUILine::StaticGetClass();
  (*pcVar3)(plVar1,"CheatUILineCommand",uVar2,StaticNew);
  return sClass;
}


/* CheatUILineCommand::GetClass() const */

long * CheatUILineCommand::GetClass(void)

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
  uVar2 = CheatUILine::StaticGetClass();
  (*pcVar3)(plVar1,"CheatUILineCommand",uVar2,StaticNew);
  return sClass;
}


/* CheatUILineCommand::CheatUILineCommand() */

void __thiscall CheatUILineCommand::CheatUILineCommand(CheatUILineCommand *this)

{
  CheatUILine::CheatUILine((CheatUILine *)this);
  *(undefined ***)this = &PTR_GetClass_06753ad0;
  *(undefined4 *)(this + 0x4c) = 0;
  return;
}


/* CheatUILineCommand::StaticNew() */

CheatUILineCommand * CheatUILineCommand::StaticNew(void)

{
  CheatUILineCommand *this;
  
  this = ::operator_new(0x50);
  CheatUILineCommand(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CheatUILineCommand::getLabelColor() const */

void CheatUILineCommand::getLabelColor(void)

{
  uint uVar1;
  int iVar2;
  CheatUILine *in_x0;
  Insets *in_x8;
  float fVar3;
  float fVar4;
  Insets aIStack_38 [16];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  CheatUILine::getLabelColor(in_x0);
  uVar1 = (uint)DAT_06ad0ae0;
  if (((DAT_06ad0ae0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ad0ae0), iVar2 != 0)) {
    Sexy::Insets::Insets((Insets *)&DAT_06ad0aa0,0xff,0xad,uVar1 & 1,0xff);
    __cxa_guard_release(&DAT_06ad0ae0);
  }
  fVar3 = (float)PVZ_RealT();
  fVar4 = *(float *)(in_x0 + 0x4c);
  if (0.2 < fVar3 - fVar4) {
    Sexy::Insets::Insets(in_x8,aIStack_38);
  }
  else {
    Sexy::Insets::Insets(aIStack_28,(Insets *)&DAT_06ad0aa0);
    Sexy::Insets::Insets(aIStack_18,aIStack_38);
    Sexy::ColorLerp((Sexy *)((fVar3 - fVar4) * 5.0),aIStack_28,aIStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CheatUILineCommand::onTap(Sexy::Point const&) */

void CheatUILineCommand::onTap(Point *param_1)

{
  long lVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  undefined8 uVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  function<void()> *this_01;
  float fVar3;
  undefined4 uVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar3 = (float)PVZ_T();
  this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          *)Sexy::ProfileManager::GetListener((ProfileManager *)param_1);
  std::
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  ::_M_end(this);
  uVar2 = FUN_0547429c();
  Sexy::StrFormat("PVZ_T: %f - [CHEAT] CheatCommand %s Activated.",asStack_10,(double)fVar3,uVar2);
  nop();
  std::string::~string(asStack_10);
  Sexy::ProfileManager::GetListener((ProfileManager *)param_1);
  nop();
  this_01 = (function<void()> *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(this_00);
  std::function<void()>::operator()(this_01);
  uVar4 = PVZ_RealT();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(param_1 + 0x4c) = uVar4;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

