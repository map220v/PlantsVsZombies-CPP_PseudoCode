// Class: RankAvatarMapper


/* RankAvatarMapper::GetInstance() */

undefined1 * RankAvatarMapper::GetInstance(void)

{
  int iVar1;
  
  if (((GetInstance()::instance & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&GetInstance()::instance), iVar1 != 0)) {
    RankAvatarMapper((RankAvatarMapper *)GetInstance()::instance);
    __cxa_guard_release(&GetInstance()::instance);
    __cxa_atexit(~RankAvatarMapper,GetInstance()::instance,&DAT_06a88000);
    return GetInstance()::instance;
  }
  return GetInstance()::instance;
}


/* RankAvatarMapper::~RankAvatarMapper() */

void __thiscall RankAvatarMapper::~RankAvatarMapper(RankAvatarMapper *this)

{
  *(undefined ***)this = &PTR__RankAvatarMapper_066119f0;
  NameMapperBase::~NameMapperBase((NameMapperBase *)this);
  return;
}


/* RankAvatarMapper::~RankAvatarMapper() */

void __thiscall RankAvatarMapper::~RankAvatarMapper(RankAvatarMapper *this)

{
  ~RankAvatarMapper(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RankAvatarMapper::RankAvatarMapper() */

void __thiscall RankAvatarMapper::RankAvatarMapper(RankAvatarMapper *this)

{
  undefined4 *puVar1;
  string asStack_40 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  NameMapperBase::NameMapperBase((NameMapperBase *)this);
  *(undefined ***)this = &PTR__RankAvatarMapper_066119f0;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  std::string::string(asStack_40,"rank_avatar_diy_1");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 61000;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"rank_avatar_diy_2");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0xee49;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"rank_avatar_diy_3");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0xee4a;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"rank_avatar_diy_4");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0xee4b;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"rank_avatar_diy_5");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0xee4c;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"rank_avatar_diy_6");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0xee4d;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"rank_avatar_diy_7");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0xee4e;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"rank_avatar_diy_8");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0xee4f;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"rank_avatar_diy_9");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0xee50;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"rank_avatar_diy_10");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0xee51;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"rank_avatar_diy_11");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0xee52;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"rank_avatar_diy_12");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0xee53;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"rank_avatar_diy_13");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0xee54;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"rank_avatar_diy_14");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0xee55;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"rank_avatar_diy_15");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0xee56;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"rank_avatar_diy_16");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0xee57;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"rank_avatar_diy_17");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0xee58;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"rank_avatar_diy_18");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0xee59;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"rank_avatar_diy_19");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0xee5a;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"rank_avatar_diy_20");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0xee5b;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"rank_avatar_diy_21");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0xee5c;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"rank_avatar_diy_22");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0xee5d;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"rank_avatar_diy_23");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0xee5e;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"rank_avatar_diy_24");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0xee5f;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"rank_avatar_diy_25");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0xee60;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"rank_avatar_diy_26");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0xee61;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"rank_avatar_diy_27");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0xee62;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"rank_avatar_diy_28");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0xee63;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"rank_avatar_diy_29");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0xee64;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"rank_avatar_diy_30");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0xee65;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"rank_avatar_diy_31");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0xee66;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"rank_avatar_diy_32");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0xee67;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"rank_avatar_diy_33");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0xee68;
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

