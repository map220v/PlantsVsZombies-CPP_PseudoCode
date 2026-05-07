// Class: NarrationEventNameMapper


/* NarrationEventNameMapper::GetInstance() */

undefined1 * NarrationEventNameMapper::GetInstance(void)

{
  int iVar1;
  
  if (((GetInstance()::instance & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&GetInstance()::instance), iVar1 != 0)) {
    NarrationEventNameMapper((NarrationEventNameMapper *)GetInstance()::instance);
    __cxa_guard_release(&GetInstance()::instance);
    __cxa_atexit(~NarrationEventNameMapper,GetInstance()::instance,&DAT_06a88000);
    return GetInstance()::instance;
  }
  return GetInstance()::instance;
}


/* NarrationEventNameMapper::~NarrationEventNameMapper() */

void __thiscall NarrationEventNameMapper::~NarrationEventNameMapper(NarrationEventNameMapper *this)

{
  *(undefined ***)this = &PTR__NarrationEventNameMapper_066119b0;
  NameMapperBase::~NameMapperBase((NameMapperBase *)this);
  return;
}


/* NarrationEventNameMapper::~NarrationEventNameMapper() */

void __thiscall NarrationEventNameMapper::~NarrationEventNameMapper(NarrationEventNameMapper *this)

{
  ~NarrationEventNameMapper(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NarrationEventNameMapper::NarrationEventNameMapper() */

void __thiscall NarrationEventNameMapper::NarrationEventNameMapper(NarrationEventNameMapper *this)

{
  undefined4 *puVar1;
  string asStack_40 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  NameMapperBase::NameMapperBase((NameMapperBase *)this);
  *(undefined ***)this = &PTR__NarrationEventNameMapper_066119b0;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  std::string::string(asStack_40,"nar_pirate_worldmap_intro");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 1;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"nar_egypt_worldmap_intro");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 2;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"nar_almanac_intro");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 3;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"nar_challenge_branch_intro");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 4;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"nar_store_intro");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 5;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"nar_cowboy_worldmap_intro");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 6;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"nar_yeti_intro");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 7;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"nar_stargate_intro");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 8;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"nar_dgr_egypt");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 9;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"nar_dgr_cowboy");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 10;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"nar_dgr_pirate");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0xb;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"nar_egypt_star_intro");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0xc;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"nar_dgr_powerups");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0xd;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"nar_star_task_intro");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0xe;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"nar_sunbomb_tutorial");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0xf;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"nar_dgr_festival");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x10;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"nar_vasebreaker_first_time_tutorial");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x11;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"nar_dgr_festival_level_one");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x12;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"nar_dgr_festival_level_two");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x13;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"nar_dgr_festival_level_three");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x14;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"nar_dgr_festival_level_four");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x15;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"nar_worldmap_plantbox_intro");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x16;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"nar_worldmap_plantgj_intro");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x17;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"nar_dgr_festival_level_endless");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x18;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"nar_map_pvp_intro");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x19;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"nar_pvp_trainzb_intro");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x1a;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"nar_star_intro");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x1b;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"nar_star_touchwood");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x1c;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"nar_activity_levels_intro");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x1d;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"nar_activity_bosschallenge_intro");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x1e;
  std::string::~string(asStack_40);
  nop();
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

