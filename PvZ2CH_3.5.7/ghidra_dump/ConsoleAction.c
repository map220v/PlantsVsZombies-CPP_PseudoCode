// Class: ConsoleAction


/* ConsoleAction::TEMPNAMEPLACEHOLDERVALUE(ConsoleAction const&) */

ConsoleAction * __thiscall ConsoleAction::operator=(ConsoleAction *this,ConsoleAction *param_1)

{
  fastdelegate::
  FastDelegate2<std::wstring_const&,std::vector<std::wstring,std::allocator<std::wstring>>const&,void>
  ::operator=((FastDelegate2<std::wstring_const&,std::vector<std::wstring,std::allocator<std::wstring>>const&,void>
               *)this,(FastDelegate2 *)param_1);
  thunk_FUN_05477b9c(this + 0x18,param_1 + 0x18);
  this[0x20] = param_1[0x20];
  return this;
}


/* ConsoleAction::ConsoleAction() */

void __thiscall ConsoleAction::ConsoleAction(ConsoleAction *this)

{
  fastdelegate::
  FastDelegate2<std::wstring_const&,std::vector<std::wstring,std::allocator<std::wstring>>const&,void>
  ::FastDelegate2((FastDelegate2<std::wstring_const&,std::vector<std::wstring,std::allocator<std::wstring>>const&,void>
                   *)this);
  FUN_05476574(this + 0x18);
  return;
}


/* ConsoleAction::ConsoleAction(ConsoleAction const&) */

void __thiscall ConsoleAction::ConsoleAction(ConsoleAction *this,ConsoleAction *param_1)

{
  fastdelegate::
  FastDelegate2<std::wstring_const&,std::vector<std::wstring,std::allocator<std::wstring>>const&,void>
  ::FastDelegate2((FastDelegate2<std::wstring_const&,std::vector<std::wstring,std::allocator<std::wstring>>const&,void>
                   *)this,(FastDelegate2 *)param_1);
  FUN_05477b24(this + 0x18,param_1 + 0x18);
  this[0x20] = param_1[0x20];
  return;
}

