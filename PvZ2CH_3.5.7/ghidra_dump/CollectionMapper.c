// Class: CollectionMapper


/* CollectionMapper::GetInstance() */

undefined1 * CollectionMapper::GetInstance(void)

{
  int iVar1;
  
  if (((GetInstance()::instance & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&GetInstance()::instance), iVar1 != 0)) {
    CollectionMapper((CollectionMapper *)GetInstance()::instance);
    __cxa_guard_release(&GetInstance()::instance);
    __cxa_atexit(~CollectionMapper,GetInstance()::instance,&DAT_06a88000);
    return GetInstance()::instance;
  }
  return GetInstance()::instance;
}


/* CollectionMapper::~CollectionMapper() */

void __thiscall CollectionMapper::~CollectionMapper(CollectionMapper *this)

{
  *(undefined ***)this = &PTR__CollectionMapper_0664fe40;
  NameMapperBase::~NameMapperBase((NameMapperBase *)this);
  return;
}


/* CollectionMapper::~CollectionMapper() */

void __thiscall CollectionMapper::~CollectionMapper(CollectionMapper *this)

{
  ~CollectionMapper(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectionMapper::CollectionMapper() */

void __thiscall CollectionMapper::CollectionMapper(CollectionMapper *this)

{
  undefined4 *puVar1;
  string asStack_40 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  NameMapperBase::NameMapperBase((NameMapperBase *)this);
  *(undefined ***)this = &PTR__CollectionMapper_0664fe40;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  std::string::string(asStack_40,"collection_fairytale");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0xf231;
  std::string::~string(asStack_40);
  nop();
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::operator=((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
               *)(this + 8),(map *)amStack_38);
  NameMapperBase::CreateMD5Check((NameMapperBase *)this);
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::~map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
          *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

