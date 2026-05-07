// Class: NullHttpTransaction


/* NullHttpTransaction::NullHttpTransaction() */

void __thiscall NullHttpTransaction::NullHttpTransaction(NullHttpTransaction *this)

{
  Sexy::IHttpTransaction::IHttpTransaction((IHttpTransaction *)this);
  *(undefined ***)this = &PTR_nop_067924d0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  return;
}


/* NullHttpTransaction::~NullHttpTransaction() */

void __thiscall NullHttpTransaction::~NullHttpTransaction(NullHttpTransaction *this)

{
  *(undefined ***)this = &PTR_nop_067924d0;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x38));
  std::vector<std::pair<std::string,std::string>,std::allocator<std::pair<std::string,std::string>>>
  ::~vector((vector<std::pair<std::string,std::string>,std::allocator<std::pair<std::string,std::string>>>
             *)(this + 0x20));
  std::vector<void*,std::allocator<void*>>::~vector
            ((vector<void*,std::allocator<void*>> *)(this + 8));
  return;
}


/* NullHttpTransaction::~NullHttpTransaction() */

void __thiscall NullHttpTransaction::~NullHttpTransaction(NullHttpTransaction *this)

{
  ~NullHttpTransaction(this);
  AK::FreeHook(this);
  return;
}


/* NullHttpTransaction::SetUserData(void*) */

void __thiscall NullHttpTransaction::SetUserData(NullHttpTransaction *this,void *param_1)

{
  void *local_8;
  
  local_8 = param_1;
  std::vector<void*,std::allocator<void*>>::push_back
            ((vector<void*,std::allocator<void*>> *)(this + 8),&local_8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NullHttpTransaction::SetRequestBody(void const*, unsigned long) */

void __thiscall
NullHttpTransaction::SetRequestBody(NullHttpTransaction *this,void *param_1,ulong param_2)

{
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05476128(asStack_10,param_1,param_2,auStack_18);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x38),asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NullHttpTransaction::SetRequestHeader(std::string const&, std::string const&) */

void NullHttpTransaction::SetRequestHeader(string *param_1,string *param_2)

{
  PACommand aPStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ProfileConversionResults::LevelChange::LevelChange((LevelChange *)aPStack_18);
  std::vector<std::pair<std::string,std::string>,std::allocator<std::pair<std::string,std::string>>>
  ::push_back((vector<std::pair<std::string,std::string>,std::allocator<std::pair<std::string,std::string>>>
               *)(param_1 + 0x20),(pair *)aPStack_18);
  Sexy::PACommand::~PACommand(aPStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

