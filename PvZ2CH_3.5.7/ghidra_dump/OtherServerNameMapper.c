// Class: OtherServerNameMapper


/* OtherServerNameMapper::GetInstance() */

undefined1 * OtherServerNameMapper::GetInstance(void)

{
  int iVar1;
  
  if (((GetInstance()::instance & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&GetInstance()::instance), iVar1 != 0)) {
    OtherServerNameMapper((OtherServerNameMapper *)GetInstance()::instance);
    __cxa_guard_release(&GetInstance()::instance);
    __cxa_atexit(~OtherServerNameMapper,GetInstance()::instance,&DAT_06a88000);
    return GetInstance()::instance;
  }
  return GetInstance()::instance;
}


/* OtherServerNameMapper::~OtherServerNameMapper() */

void __thiscall OtherServerNameMapper::~OtherServerNameMapper(OtherServerNameMapper *this)

{
  *(undefined ***)this = &PTR__OtherServerNameMapper_06608b30;
  NameMapperBase::~NameMapperBase((NameMapperBase *)this);
  return;
}


/* OtherServerNameMapper::~OtherServerNameMapper() */

void __thiscall OtherServerNameMapper::~OtherServerNameMapper(OtherServerNameMapper *this)

{
  ~OtherServerNameMapper(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OtherServerNameMapper::OtherServerNameMapper() */

void __thiscall OtherServerNameMapper::OtherServerNameMapper(OtherServerNameMapper *this)

{
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  NameMapperBase::NameMapperBase((NameMapperBase *)this);
  *(undefined ***)this = &PTR__OtherServerNameMapper_06608b30;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::operator=((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
               *)(this + 8),(map *)amStack_38);
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::~map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
          *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

