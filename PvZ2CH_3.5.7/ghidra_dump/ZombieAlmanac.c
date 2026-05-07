// Class: ZombieAlmanac


/* ZombieAlmanac::~ZombieAlmanac() */

void __thiscall ZombieAlmanac::~ZombieAlmanac(ZombieAlmanac *this)

{
  *(undefined ***)this = &PTR__ZombieAlmanac_06608b50;
  NameMapperBase::~NameMapperBase((NameMapperBase *)this);
  return;
}


/* ZombieAlmanac::~ZombieAlmanac() */

void __thiscall ZombieAlmanac::~ZombieAlmanac(ZombieAlmanac *this)

{
  ~ZombieAlmanac(this);
  AK::FreeHook(this);
  return;
}


/* ZombieAlmanac::GetInstance() */

undefined1 * ZombieAlmanac::GetInstance(void)

{
  int iVar1;
  
  if (((GetInstance()::k_EmptyKilled & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&GetInstance()::k_EmptyKilled), iVar1 != 0)) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)
               GetInstance()::k_EmptyKilled);
    __cxa_guard_release(&GetInstance()::k_EmptyKilled);
    __cxa_atexit(std::vector<int,std::allocator<int>>::~vector,GetInstance()::k_EmptyKilled,
                 &DAT_06a88000);
  }
  if (((GetInstance()::instance & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&GetInstance()::instance), iVar1 != 0)) {
    ZombieAlmanac((ZombieAlmanac *)GetInstance()::instance,(vector *)GetInstance()::k_EmptyKilled);
    __cxa_guard_release(&GetInstance()::instance);
    __cxa_atexit(~ZombieAlmanac,GetInstance()::instance,&DAT_06a88000);
    return GetInstance()::instance;
  }
  return GetInstance()::instance;
}


/* ZombieAlmanac::ZombieAlmanac(ZombieAlmanac const&) */

void __thiscall ZombieAlmanac::ZombieAlmanac(ZombieAlmanac *this,ZombieAlmanac *param_1)

{
  NameMapperBase::NameMapperBase((NameMapperBase *)this,(NameMapperBase *)param_1);
  *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_1 + 0x40);
  *(undefined ***)this = &PTR__ZombieAlmanac_06608b50;
  return;
}


/* ZombieAlmanac::TEMPNAMEPLACEHOLDERVALUE(ZombieAlmanac const&) */

ZombieAlmanac * __thiscall ZombieAlmanac::operator=(ZombieAlmanac *this,ZombieAlmanac *param_1)

{
  NameMapperBase::operator=((NameMapperBase *)this,(NameMapperBase *)param_1);
  *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_1 + 0x40);
  return this;
}


/* ZombieAlmanac::AssignKilledZombiesCollection(std::vector<int, std::allocator<int> >&) */

void __thiscall ZombieAlmanac::AssignKilledZombiesCollection(ZombieAlmanac *this,vector *param_1)

{
  *(vector **)(this + 0x40) = param_1;
  return;
}


/* ZombieAlmanac::IsKilledZombie(std::string const&) */

undefined8 __thiscall ZombieAlmanac::IsKilledZombie(ZombieAlmanac *this,string *param_1)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  
  iVar1 = NameMapperBase::GetIdForName((NameMapperBase *)this,param_1);
  uVar5 = **(undefined8 **)(this + 0x40);
  lVar2 = FUN_045e8fb4(uVar5,(*(undefined8 **)(this + 0x40))[1]);
  lVar4 = 0;
  do {
    if (lVar4 == lVar2) {
      return 0;
    }
    piVar3 = (int *)FUN_045e8fc0(uVar5,lVar4);
    lVar4 = lVar4 + 1;
  } while (iVar1 != *piVar3);
  return 1;
}


/* ZombieAlmanac::isCamelType(std::string const&) */

bool __thiscall ZombieAlmanac::isCamelType(ZombieAlmanac *this,string *param_1)

{
  int iVar1;
  
  iVar1 = NameMapperBase::GetIdForName((NameMapperBase *)this,param_1);
  return iVar1 - 10U < 8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAlmanac::ZombieAlmanac(std::vector<int, std::allocator<int> >&) */

void __thiscall ZombieAlmanac::ZombieAlmanac(ZombieAlmanac *this,vector *param_1)

{
  map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  *this_00;
  char cVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 local_10 [2];
  long local_8;
  
  this_00 = (map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
             *)(this + 8);
  local_8 = ___stack_chk_guard;
  NameMapperBase::NameMapperBase((NameMapperBase *)this);
  *(undefined ***)this = &PTR__ZombieAlmanac_06608b50;
  AssignKilledZombiesCollection(this,param_1);
  std::string::string((string *)local_10,"tutorial");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 1;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"tutorial_armor1");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 2;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"tutorial_armor2");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 3;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"tutorial_flag");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 4;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"mummy");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 5;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"mummy_armor1");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 6;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"mummy_armor2");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 7;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"mummy_flag");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 8;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"camel_almanac");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 9;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"camel_onehump");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 10;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"camel_twohump");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xb;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"camel_manyhump");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xc;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"camel_segment");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xd;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"camel_onehump_touch");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xe;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"camel_twohump_touch");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xf;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"camel_manyhump_touch");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x10;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"camel_segment_touch");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x11;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"pharaoh");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x12;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"ra");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x13;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"tomb_raiser");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x14;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"explorer");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x15;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"pirate");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x16;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"pirate_armor1");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x17;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"pirate_armor2");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x18;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"pirate_flag");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x19;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"barrelroller");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x1a;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"cannon");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x1b;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"pirate_imp");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x1c;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"seagull");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x1d;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"pirate_captain");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x1e;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"pirate_captain_parrot");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x1f;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"swashbuckler");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x20;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"pirate_barrel");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x21;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"cowboy");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x22;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"cowboy_armor1");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x23;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"cowboy_armor2");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x24;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"cowboy_flag");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x25;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"prospector");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x26;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"west_bullrider");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x27;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"west_bull");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x28;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"poncho");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x29;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"poncho_no_plate");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x2a;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"poncho_plate");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x2b;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"piano");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x2c;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"chicken_farmer");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x2d;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"chicken");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x2e;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"mech_cone");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x2f;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"football_mech");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x30;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"disco_mech");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x31;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"future");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x32;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"future_armor1");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x33;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"future_armor2");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x34;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"future_flag");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x35;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"future_jetpack");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x36;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"future_gargantuar");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x37;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"future_imp");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x38;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"cleopatra");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x39;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"treasureyeti");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x3a;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"kongfu_basic");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x3b;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"kongfu_basic_armor1");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x3c;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"kongfu_basic_armor2");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x3d;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"kongfu_hammer");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x3e;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"kongfu_selfexplode");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x3f;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"kongfu_flag");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x40;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"kongfu_torch");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x41;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"kongfu_gong");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x42;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"kongfu_basic_armor3");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x43;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"kongfu_qigong");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x44;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"kongfu_rocket");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x45;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"kongfu_drink");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x46;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"kongfu_monk_cone");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x47;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"kongfu_monk_bucket");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x48;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"kongfu_monk_basic");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x49;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"kongfu_monk_flag");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x4a;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"kongfu_strong_bronze");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x4b;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"tutorial_gargantuar");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x4c;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"tutorial_imp");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x4d;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"egypt_gargantuar");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x4e;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"egypt_imp");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x4f;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"pirate_gargantuar");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x50;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"cowboy_gargantuar");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x51;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"kongfu_magic_bronze");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x52;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"kongfu_agile_bronze");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x53;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"kongfu_monk_drink");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x54;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"kongfu_monk_blade");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x55;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"kongfu_monk_imp");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x56;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"kongfu_monk_torch");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x57;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"kongfu_monk_nunchaku");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x58;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"kongfu_zomboss_qigong");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x59;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"kongfu_zomboss_blade");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x5a;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"kongfu_zomboss_explosive");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x5b;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"zomboss_ice_ball");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x5c;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"zombossmech_egypt");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x5d;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"zombossmech_pirate");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x5e;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"zombossmech_cowboy");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x5f;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"future_protector");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x60;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"future_jetpack_disco");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"dark");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 99;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"dark_armor1");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 100;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"dark_armor2");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x65;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"dark_flag");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x66;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"dark_armor3");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x67;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"dark_wizard");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x68;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"dark_juggler");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x69;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"dark_gargantuar");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x6a;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"dark_imp");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x6b;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"dark_imp_dragon");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x6c;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"dark_king");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x6d;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"zombossmech_dark");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x6e;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"zombie_target_bottle");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x6f;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"zombie_target_arrow_yellow");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x70;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"zombie_target_arrow_blue");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x71;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"dark_archmage");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x72;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"dark_cavalry");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x73;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"dark_cavalry_rider");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x74;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"zombie_towerdefend_normal");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x75;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"zombie_towerdefend_wolf_fire");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x76;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"zombie_towerdefend_wolf_imp");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x77;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"zombie_towerdefend_boss");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x78;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"zombie_towerdefend_bucket");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x79;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"zombie_towerdefend_helmet");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x7a;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"zombie_towerdefend_knight");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x7b;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"zombie_towerdefend_jester");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x7c;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"zombie_towerdefend_gargantuar");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x7d;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"zombie_towerdefend_wizard");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x7e;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"dark_rogue");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x7f;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"zombie_target_archmage");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x80;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"zombie_target_wizard");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x81;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"zombie_target_gargantuar");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x82;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"zombie_target_arrow_purple");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x83;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"beach");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x84;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"beach_armor1");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x85;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"beach_armor2");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x86;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"beach_flag");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x87;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"beach_fem");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x88;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"beach_fem_armor1");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x89;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"beach_fem_armor2");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x8a;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"beach_snorkel");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x8b;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"beach_surfer");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x8c;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"beach_imp");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x8d;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"beach_gargantuar");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x8e;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"beach_fisherman");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x8f;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"beach_octopus");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x90;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"zombossmech_beach");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x91;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"beach_shell");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x92;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"lion_dance");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x93;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"wealth_god");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x94;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"iceage");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x95;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"iceage_armor1");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x96;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"iceage_armor2");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x97;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"iceage_armor3");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x98;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"iceage_flag");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x99;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"iceage_imp");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x9a;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"iceage_gargantuar");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x9b;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"iceage_hunter");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x9c;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"iceage_dodo");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x9d;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"iceage_weaselhoarder");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x9e;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"iceage_weasel");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x9f;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"iceage_troglobite");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xa0;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"zombossmech_iceage");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xa1;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"iceage_walrus");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xa2;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"iceage_ski");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xa3;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"iceage_chief");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xa4;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"zombossmech_iceage_eliminate");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xa5;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"skycity");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xa6;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"skycity_armor1");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xa7;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"skycity_armor2");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xa8;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"skycity_armor3");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xa9;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"skycity_flag");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xaa;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"skycity_battleplane");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xab;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"skycity_ggtimp");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xac;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"skycity_gargantuar");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xad;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"skycity_twinsplane");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xae;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"skycity_electric");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xaf;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"invisible_plane");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xb0;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"air_missile");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xb1;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"air_missile_launcher");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xb2;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"zombossmech_skycity");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xb3;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"pvpskill_bomb");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 500;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"pvpskill_aid");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x1f5;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"pvpskill_sleep");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x1f6;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"pvpskill_invisible");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x1f7;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"pvpskill_zombiefood");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x1f8;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"pvp_change");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x1f9;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"pvp_dead");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x1fa;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"pvp_wizard");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x1fb;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"pvp_imp");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x1fc;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"pvp_shadowimp");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x1fd;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"pvp_gargantuar");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x1fe;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"pvpskill_rage");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x1ff;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"pvp_nurse");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x200;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"pvp_cannon");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x201;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"pvp_seagull");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x202;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"pvp_hammer");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x203;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"pvp_monk_drink");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x204;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"pvp_cannonimp");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x205;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"pvp_pirate_captain");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x206;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"pvp_chicken_farmer");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x207;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"pvp_football_mech");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x208;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"pvp_chicken");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x209;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_tutorial");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 400000;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_chicken");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61a81;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_beghouled_newspaper");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61a82;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_zombie_gatlingpea");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61a83;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_modern_allstar");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61a84;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_future_protector");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61a85;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_beach_octopus");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61a86;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_kongfu_strong_bronze");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61a87;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_tutorial_armor2");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61a88;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_modern_miner");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61a89;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_iceage_weasel");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61a8a;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_roman_ballista");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61a8b;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_tutorial_armor1");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61a8c;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_explorer");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61a8d;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_west_bullrider");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61a8e;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_west_bull");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61a8f;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_dark_wizard");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61a90;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_modern_balloon");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61a91;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_renai_gliding");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61a92;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_zombie_explodenut");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61a93;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_tutorial_gargantuar");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61a94;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_iceage_armor3");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61a95;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_zombie_snowpea");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61a96;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_beach_shell");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61a97;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_dino_bully");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61a98;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_lostcity_excavator");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61a99;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_children_ballon");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61a9a;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_iceage_dodo");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61a9b;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_beach_surfer");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61a9c;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_zombie_jalapeno");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61a9d;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_heian_onmyoji");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61a9e;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_kongfu_drink");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61a9f;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_dark_rogue");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61aa0;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_children_toycar");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61aa1;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_kongfu_selfexplode");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61aa2;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_roman_healer");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61aa3;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_heian_ninja");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61aa4;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_iceage_hunter");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61aa5;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_newspaper_veteran");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61aa6;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_lostcity_jane");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61aa7;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_iceage_chief");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61aa8;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_mech_cone");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61aa9;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_lostcity_crystalskull");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61aaa;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_steam_gentleman");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61aab;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_iceage_troglobite");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61aac;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_eighties_glitter");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61aad;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_kongfu_monk_blade");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61aae;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_kongfu_monk_torch");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61aaf;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_chicken_farmer");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61ab0;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_dark_juggler");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61ab1;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_eighties_punk");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61ab2;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_roman_armor4");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61ab3;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_dark_imp_dragon");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61ab4;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_heian_hanabi");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61ab5;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_kongfu_gong");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61ab6;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_dark_cavalry");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61ab7;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_lostcity_bug");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61ab8;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_pirate_captain");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61ab9;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_kongfu_hammer");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61aba;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_lostcity_doctor");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61abb;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_kongfu_qigong");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61abc;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_dark");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61abd;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_tomb_raiser");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61abe;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_barrelroller");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61abf;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_prospector");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61ac0;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"new_pvp_eighties_breakdancer");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x61ac1;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"lostcity");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xc3;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"lostcity_armor1");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xc4;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"lostcity_armor2");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xc5;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"lostcity_flag");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xc6;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"lostcity_excavator");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 199;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"lostcity_jane");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 200;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"lostcity_gargantuar");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xc9;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"lostcity_imp");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xca;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"lostcity_lostpilot");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xcb;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"lostcity_bug");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xcc;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"lostcity_bug_armor1");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xcd;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"lostcity_bug_armor2");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xce;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"lostcity_relichunter");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xcf;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"lostcity_crystalskull");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xd0;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"lostcity_impporter");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xd1;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"zombossmech_lostcity");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xd2;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"lostcity_guide");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xd3;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"lostcity_doctor");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xd4;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"feastivus");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xdc;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"feastivus_armor1");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xdd;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"feastivus_armor2");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xde;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"feastivus_flag");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xdf;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"feastivus_imp");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xe0;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"feastivus_gargantuar");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xe1;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"feastivus_camel_onehump");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xe2;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"feastivus_camel_twohump");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xe3;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"feastivus_camel_manyhump");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xe4;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"feastivus_camel_segment");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xe5;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"feastivus_swashbuckler");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xe6;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"feastivus_poncho");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xe7;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"feastivus_piano");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xe8;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"eighties");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xf0;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"eighties_armor1");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xf1;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"eighties_armor2");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xf2;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"eighties_imp");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xf3;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"eighties_punk");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xf4;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"eighties_mc");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xf5;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"eighties_breakdancer");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xf6;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"eighties_glitter");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xf7;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"eighties_boombox");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xf8;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"eighties_arcade");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xf9;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"eighties_bass");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xfa;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"eighties_gargantuar");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xfb;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"eighties_flag");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xfc;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"eighties_8bit");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xfd;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"zombossmech_eighties");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0xfe;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"dino");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x104;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"dino_armor1");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x105;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"dino_armor2");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x106;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"dino_armor3");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x107;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"dino_bully");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x108;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"dino_flag");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x109;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"dino_imp");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x10a;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"dino_gargantuar");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x10b;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"dino_pushegg");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x10c;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"dino_stealegg");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x10d;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"dino_eggshell");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x10e;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"dino_eggshell");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x10f;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"zombossmech_dino");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x110;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"modern_solar_truck");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x118;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"modern_miner");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x119;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"explosion_proof");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x11a;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"newspaper_veteran");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x11b;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"modern_superfanimp");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x11c;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"modern_balloon");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x11d;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"modern_allstar");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x11e;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"beghouled_newspaper");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x11f;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"modern_newspaper");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x120;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"steam_stove");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 300;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"steam_coal_miner");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x12d;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"modern_miner");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x121;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"steam_gentleman");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x122;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"renai_carver");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x136;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"renai_gargantuar");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x137;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"renai_perfumer");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x138;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"renai_ballet");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x139;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"renai_gliding");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x13a;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"roman");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x13b;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"roman_armor1");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x13c;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"roman_armor2");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x13d;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"roman_armor3");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x13e;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"roman_armor4");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x13f;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"roman_flag");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x140;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"roman_medusa");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x141;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"children_ballon");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x3e9;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"children_schoolbag");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x3ea;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"children_toycar");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x3eb;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"children_toygun");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x3ec;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"children_airbubble");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x3ed;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"children_lollipops");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x3ee;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"roman_imp");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x3ef;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"roman_gargantuar");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x3f0;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"roman_shield_almanac");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x3f1;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"roman_shield_triad");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x3f2;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"roman_shield_pair");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x3f3;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"roman_healer");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x3f4;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"zombie_snowpea");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x3f5;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"zombie_gatlingpea");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x3f6;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"heian_worker");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x3fc;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"heian_armor1");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x3fd;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"heian_armor2");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x3fe;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"heian_flag");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x3ff;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"heian_gargantuar");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x400;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"heian_hanabi");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x401;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"heian_ninja");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x402;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"spring");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x403;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"spring_armor1");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x404;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"spring_armor2");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x405;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"spring_flag");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x406;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"spring_camel_onehump");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x407;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"spring_camel_twohump");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x408;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"spring_camel_manyhump");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x409;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"spring_camel_segment");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x40a;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"spring_poncho");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x40b;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"spring_wizard");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x40c;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"spring_gargantuar");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x40d;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"spring_gargantuar_af");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x40e;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"spring_imp");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x40f;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"spring_imp_af");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x410;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"heian_onmyoji");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x411;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"heian_akinndo");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x412;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"lny");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x413;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"lny_flag");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x414;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"lny_armor1");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x415;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"lny_armor2");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x416;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"lny_camel_onehump");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x417;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"lny_camel_twohump");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x418;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"lny_camel_manyhump");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x419;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"lny_camel_segment");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x41a;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"lny_imp");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x41b;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"general_caesar_phase1");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x41c;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"general_caesar_phase2");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x41d;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"general_caesar_phase3");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x41e;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"fairy_tale");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x41f;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"fairy_tale_armor1");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x420;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"fairy_tale_armor2");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x421;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"fairy_tale_flag");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x422;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"fairy_tale_gargantuar");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x423;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"fairy_tale_armed_gargantuar");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x424;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"fairy_tale_imp");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x425;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"fairy_tale_knight");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x426;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"fairy_tale_witch");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x427;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"fairy_tale_knight");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x428;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"fairy_tale_knight_rider");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x429;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"mirror_queen_phase1");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x42a;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"mirror_queen_phase2");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x42b;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"mirror_queen_phase3");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x42c;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"birthday");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x42d;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"birthday_flag");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x42e;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"birthday_barrel");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x42f;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"birthday_barrelroller");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x430;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"birthday_gargantuar");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x431;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"birthday_pharaoh");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x432;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"birthday_juggler");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x433;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"birthday_troglobite");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x434;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"birthday_jetpack");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x435;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"zombossmech_pvz1_robot_1");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x436;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"zombossmech_pvz1_robot_2");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x437;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"zombossmech_pvz1_robot_3");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x438;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"zombossmech_pvz1_robot_4");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x439;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"zombossmech_pvz1_robot_5");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x43a;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"zombossmech_pvz1_robot_6");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x43b;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"zombossmech_pvz1_robot_7");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x43c;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"zombossmech_pvz1_robot_8");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x43d;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"zombossmech_pvz1_robot_9");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x43e;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"pumpkin_knight");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x43f;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"halloween");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x441;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"halloween_armor1");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x442;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"halloween_armor2");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x443;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"halloween_flag");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x444;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"halloween_gargantuar");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x445;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"halloween_imp");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x446;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"zombie_moneytree");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x447;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"zombie_yearmonster");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x448;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"childrensday");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x449;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"childrensday_armor1");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x44a;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"childrensday_armor2");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 1099;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"childrensday_flag");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x44c;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"childrensday_gargantuar");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x44d;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"childrensday_imp");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x44e;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"bumpercar");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x44f;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"parkour_runner");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x450;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"parkour");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x451;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"parkour_armor1");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x452;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"parkour_armor2");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x453;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"parkour_flag");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x454;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"parkour_gargantuar");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x455;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"parkour_imp");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x456;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"Neuropathy");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x457;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"pvz1_bungee");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x458;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"iceage_armor3_elite");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x459;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"iceage_hunter_elite");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x45a;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"iceage_weasel_elite");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x45b;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"iceage_weaselhoarder_elite");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x45c;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"iceage_chief_elite");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x45d;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"catapult");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x45e;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"IceYearMonster");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x45f;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"needforspeed_basic");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x460;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"needforspeed_armor1");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x461;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"needforspeed_armor2");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x462;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"needforspeed_flag");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x463;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"needforspeed_gargantuar");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x464;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"needforspeed_imp");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x465;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"izombie_zombie_gatlingpea");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x466;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"izombie_zombie_wallnut");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x467;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"izombie_zombie_jalapeno");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x468;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"izombie_chicken_farmer");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x469;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"izombie_tutorial_gargantuar");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x46a;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"izombie_lostcity_doctor");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x46b;
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"izombie_sunflower");
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[](this_00,(string *)local_10);
  *puVar2 = 0x46c;
  std::string::~string((string *)local_10);
  nop();
  if (((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) &&
      (lVar3 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)), lVar3 != 0)) &&
     (lVar3 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)),
     *(char *)(lVar3 + 0x114) == '\0')) {
    std::string::string((string *)local_10,"tutorial");
    cVar1 = IsKilledZombie(this,(string *)local_10);
    std::string::~string((string *)local_10);
    nop();
    if (cVar1 == '\0') {
      local_10[0] = 1;
      std::vector<int,std::allocator<int>>::push_back
                (*(vector<int,std::allocator<int>> **)(this + 0x40),(int *)local_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAlmanac::SetKilledZombie(std::string const&) */

void __thiscall ZombieAlmanac::SetKilledZombie(ZombieAlmanac *this,string *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  vector<int,std::allocator<int>> *this_00;
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = NameMapperBase::GetIdForName((NameMapperBase *)this,param_1);
  if ((DAT_06a88764 == '\0') || (2 < iVar3 - 0x3f1U)) {
LAB_045efafc:
    cVar1 = IsKilledZombie(this,param_1);
  }
  else {
    std::string::string((string *)local_10,"roman_shield_almanac");
    cVar1 = IsKilledZombie(this,(string *)local_10);
    std::string::~string((string *)local_10);
    nop();
    if (cVar1 != '\0') goto LAB_045efafc;
    local_10[0] = 0x3f1;
    std::vector<int,std::allocator<int>>::push_back
              (*(vector<int,std::allocator<int>> **)(this + 0x40),(int *)local_10);
    DAT_06a88764 = cVar1;
    cVar1 = IsKilledZombie(this,param_1);
  }
  cVar2 = '\0';
  if (cVar1 == '\0') {
    cVar2 = isCamelType(this,param_1);
    if (cVar2 != '\0') {
      std::string::string((string *)local_10,"camel_almanac");
      cVar1 = IsKilledZombie(this,(string *)local_10);
      std::string::~string((string *)local_10);
      nop();
      if (cVar1 == '\0') {
        std::vector<int,std::allocator<int>>::push_back
                  (*(vector<int,std::allocator<int>> **)(this + 0x40),&ID_CAMEL_ALMANAC);
        goto LAB_045efb14;
      }
    }
    if (iVar3 - 0x407U < 4) {
      std::string::string((string *)local_10,"spring_camel_segment");
      cVar1 = IsKilledZombie(this,(string *)local_10);
      std::string::~string((string *)local_10);
      nop();
      if (cVar1 == '\0') {
        cVar2 = '\x01';
        local_10[0] = 0x40a;
        std::vector<int,std::allocator<int>>::push_back
                  (*(vector<int,std::allocator<int>> **)(this + 0x40),(int *)local_10);
        goto LAB_045efb14;
      }
    }
    if (iVar3 - 0x40dU < 2) {
      std::string::string((string *)local_10,"spring_gargantuar");
      cVar1 = IsKilledZombie(this,(string *)local_10);
      std::string::~string((string *)local_10);
      nop();
      if (cVar1 == '\0') {
        cVar2 = '\x01';
        local_10[0] = 0x40d;
        std::vector<int,std::allocator<int>>::push_back
                  (*(vector<int,std::allocator<int>> **)(this + 0x40),(int *)local_10);
        goto LAB_045efb14;
      }
    }
    if (iVar3 - 0x40fU < 2) {
      std::string::string((string *)local_10,"spring_imp");
      cVar1 = IsKilledZombie(this,(string *)local_10);
      std::string::~string((string *)local_10);
      nop();
      if (cVar1 == '\0') {
        cVar2 = '\x01';
        local_10[0] = 0x40f;
        std::vector<int,std::allocator<int>>::push_back
                  (*(vector<int,std::allocator<int>> **)(this + 0x40),(int *)local_10);
        goto LAB_045efb14;
      }
    }
    if (iVar3 - 0x41cU < 3) {
      std::string::string((string *)local_10,"general_caesar_phase1");
      cVar1 = IsKilledZombie(this,(string *)local_10);
      std::string::~string((string *)local_10);
      nop();
      if (cVar1 == '\0') {
        cVar2 = '\x01';
        local_10[0] = 0x41c;
        std::vector<int,std::allocator<int>>::push_back
                  (*(vector<int,std::allocator<int>> **)(this + 0x40),(int *)local_10);
        goto LAB_045efb14;
      }
    }
    if (iVar3 - 0x42aU < 3) {
      std::string::string((string *)local_10,"mirror_queen_phase1");
      cVar1 = IsKilledZombie(this,(string *)local_10);
      std::string::~string((string *)local_10);
      nop();
      if (cVar1 == '\0') {
        cVar2 = '\x01';
        local_10[0] = 0x42a;
        std::vector<int,std::allocator<int>>::push_back
                  (*(vector<int,std::allocator<int>> **)(this + 0x40),(int *)local_10);
        goto LAB_045efb14;
      }
    }
    if (iVar3 - 0x436U < 9) {
      std::string::string((string *)local_10,"zombossmech_pvz1_robot_1");
      cVar1 = IsKilledZombie(this,(string *)local_10);
      std::string::~string((string *)local_10);
      nop();
      if (cVar1 == '\0') {
        cVar2 = '\x01';
        local_10[0] = 0x436;
        std::vector<int,std::allocator<int>>::push_back
                  (*(vector<int,std::allocator<int>> **)(this + 0x40),(int *)local_10);
        goto LAB_045efb14;
      }
    }
    this_00 = *(vector<int,std::allocator<int>> **)(this + 0x40);
    cVar2 = '\x01';
    local_10[0] = NameMapperBase::GetIdForName((NameMapperBase *)this,param_1);
    std::vector<int,std::allocator<int>>::push_back(this_00,(int *)local_10);
  }
LAB_045efb14:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar2);
  }
  return;
}

