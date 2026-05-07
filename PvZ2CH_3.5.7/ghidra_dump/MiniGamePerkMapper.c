// Class: MiniGamePerkMapper


/* MiniGamePerkMapper::GetInstance() */

undefined1 * MiniGamePerkMapper::GetInstance(void)

{
  int iVar1;
  
  if (((GetInstance()::instance & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&GetInstance()::instance), iVar1 != 0)) {
    MiniGamePerkMapper((MiniGamePerkMapper *)GetInstance()::instance);
    __cxa_guard_release(&GetInstance()::instance);
    __cxa_atexit(~MiniGamePerkMapper,GetInstance()::instance,&DAT_06a88000);
    return GetInstance()::instance;
  }
  return GetInstance()::instance;
}


/* MiniGamePerkMapper::~MiniGamePerkMapper() */

void __thiscall MiniGamePerkMapper::~MiniGamePerkMapper(MiniGamePerkMapper *this)

{
  *(undefined ***)this = &PTR__MiniGamePerkMapper_066afd10;
  NameMapperBase::~NameMapperBase((NameMapperBase *)this);
  return;
}


/* MiniGamePerkMapper::~MiniGamePerkMapper() */

void __thiscall MiniGamePerkMapper::~MiniGamePerkMapper(MiniGamePerkMapper *this)

{
  ~MiniGamePerkMapper(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerkMapper::MiniGamePerkMapper() */

void __thiscall MiniGamePerkMapper::MiniGamePerkMapper(MiniGamePerkMapper *this)

{
  undefined4 *puVar1;
  string asStack_40 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  NameMapperBase::NameMapperBase((NameMapperBase *)this);
  *(undefined ***)this = &PTR__MiniGamePerkMapper_066afd10;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  std::string::string(asStack_40,"zombie_speed_reduced");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 1;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"plant_stats_increased");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 2;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"zombie_global_stuck");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 3;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"mini_game_duration_increased");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 4;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"mini_game_coin_increased");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 5;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"item_kill_all_zombies");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 6;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"special_item_x_ray");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 7;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"special_item_bowling");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 8;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"special_item_refresh_card");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 9;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"special_item_time_back");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 10;
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

