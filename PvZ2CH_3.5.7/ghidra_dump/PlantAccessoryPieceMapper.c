// Class: PlantAccessoryPieceMapper


/* PlantAccessoryPieceMapper::GetInstance() */

undefined1 * PlantAccessoryPieceMapper::GetInstance(void)

{
  int iVar1;
  
  if (((GetInstance()::instance & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&GetInstance()::instance), iVar1 != 0)) {
    PlantAccessoryPieceMapper((PlantAccessoryPieceMapper *)GetInstance()::instance);
    __cxa_guard_release(&GetInstance()::instance);
    __cxa_atexit(~PlantAccessoryPieceMapper,GetInstance()::instance,&DAT_06a88000);
    return GetInstance()::instance;
  }
  return GetInstance()::instance;
}


/* PlantAccessoryPieceMapper::~PlantAccessoryPieceMapper() */

void __thiscall
PlantAccessoryPieceMapper::~PlantAccessoryPieceMapper(PlantAccessoryPieceMapper *this)

{
  *(undefined ***)this = &PTR__PlantAccessoryPieceMapper_06608510;
  NameMapperBase::~NameMapperBase((NameMapperBase *)this);
  return;
}


/* PlantAccessoryPieceMapper::~PlantAccessoryPieceMapper() */

void __thiscall
PlantAccessoryPieceMapper::~PlantAccessoryPieceMapper(PlantAccessoryPieceMapper *this)

{
  ~PlantAccessoryPieceMapper(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAccessoryPieceMapper::PlantAccessoryPieceMapper() */

void __thiscall
PlantAccessoryPieceMapper::PlantAccessoryPieceMapper(PlantAccessoryPieceMapper *this)

{
  undefined4 *puVar1;
  string asStack_40 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  NameMapperBase::NameMapperBase((NameMapperBase *)this);
  *(undefined ***)this = &PTR__PlantAccessoryPieceMapper_06608510;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  std::string::string(asStack_40,"unique_fertilizer");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x55f1;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"unique_drum");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x55f2;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"unique_accelerate");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x55f3;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"unique_regeneration");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x55f4;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"unique_sunmoney");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x55f5;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"unique_clock");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x55f6;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"unique_cost");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x55f7;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"unique_explode");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x55f8;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"unique_torch");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x55f9;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"unique_snowflake");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x55fa;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"unique_pole");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x55fb;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"unique_duck");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x55fc;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"epic_fertilizer");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x55fd;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"epic_drum");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x55fe;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"epic_regeneration");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x55ff;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"epic_clock");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x5600;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"epic_explode");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x5601;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"epic_torch");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x5602;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"epic_snowflake");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x5603;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"epic_pole");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x5604;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"magic_fertilizer");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x5605;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"magic_drum");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x5606;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"magic_regeneration");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x5607;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"magic_torch");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x5608;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"magic_snowflake");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x5609;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"magic_pole");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x560a;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"normal_fertilizer");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x560b;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"normal_drum");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x560c;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"normal_regeneration");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x560d;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"epic_cost");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x560e;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"super_clock");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x5622;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"super_clock_1");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x5623;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"super_clock_2");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x5624;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"super_clock_3");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x5625;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"super_clock_4");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x5626;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"super_clock_5");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x5627;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"super_clock_6");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x5628;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"super_clock_7");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x5629;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"super_clock_8");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x562a;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"super_clock_9");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x562b;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"super_clock_10");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x562c;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"super_clock_11");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x562d;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"super_clock_12");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x562e;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"super_clock_13");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x562f;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"super_clock_14");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x5630;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"super_clock_15");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x5631;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"super_clock_16");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x5632;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"super_clock_17");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x5633;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"painkiller_1");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x5634;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"painkiller_2");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x5635;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"slingshot_1");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x5636;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"slingshot_2");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x5637;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"magic_book_1");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x5638;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"magic_book_2");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x5639;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"sun_gear_1");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x563a;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"travel_together_1");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_38,asStack_40);
  *puVar1 = 0x563b;
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

