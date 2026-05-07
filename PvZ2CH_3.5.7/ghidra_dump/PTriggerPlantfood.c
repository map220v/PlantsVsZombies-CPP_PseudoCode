// Class: PTriggerPlantfood


/* PTriggerPlantfood::~PTriggerPlantfood() */

void __thiscall PTriggerPlantfood::~PTriggerPlantfood(PTriggerPlantfood *this)

{
  *(undefined ***)this = &PTR_GetClass_06948d50;
  PTrigger::~PTrigger((PTrigger *)this);
  return;
}


/* PTriggerPlantfood::~PTriggerPlantfood() */

void __thiscall PTriggerPlantfood::~PTriggerPlantfood(PTriggerPlantfood *this)

{
  ~PTriggerPlantfood(this);
  AK::FreeHook(this);
  return;
}


/* PTriggerPlantfood::SetPlant(Plant*) */

void __thiscall PTriggerPlantfood::SetPlant(PTriggerPlantfood *this,Plant *param_1)

{
  undefined4 uVar1;
  
  if (param_1 != (Plant *)0x0) {
    uVar1 = *(undefined4 *)(param_1 + 0x114);
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x110);
    *(undefined4 *)(this + 0xc) = uVar1;
  }
  return;
}


/* PTriggerPlantfood::PTriggerPlantfood() */

void __thiscall PTriggerPlantfood::PTriggerPlantfood(PTriggerPlantfood *this)

{
  PTrigger::PTrigger((PTrigger *)this,0x745f7066);
  *(undefined ***)this = &PTR_GetClass_06948d50;
  Sexy::Point::Point((Point *)(this + 0xc));
  return;
}


/* PTriggerPlantfood::StaticNew() */

PTriggerPlantfood * PTriggerPlantfood::StaticNew(void)

{
  PTriggerPlantfood *this;
  
  this = ::operator_new(0x18);
  PTriggerPlantfood(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PTriggerPlantfood::DoTrigger() */

void __thiscall PTriggerPlantfood::DoTrigger(PTriggerPlantfood *this)

{
  int iVar1;
  int iVar2;
  Plant *pPVar3;
  ArenaBattleModule *this_00;
  Board *this_01;
  string asStack_10 [8];
  long local_8;
  
  iVar1 = *(int *)(this + 0x10);
  iVar2 = *(int *)(this + 0xc);
  local_8 = ___stack_chk_guard;
  this_01 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"");
  pPVar3 = (Plant *)Board::GetPlantAt(this_01,iVar2,iVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if ((pPVar3 != (Plant *)0x0) &&
     (this_00 = (ArenaBattleModule *)
                FUN_04abc284(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8)),
     this_00 != (ArenaBattleModule *)0x0)) {
    ArenaBattleModule::UsePlantfoodForPlayback(this_00,pPVar3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PTriggerPlantfood::StaticClassInit() */

void PTriggerPlantfood::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  string *this_00;
  code *in_x2;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"PTriggerPlantfood");
    in_x2 = FUN_04abf690;
    (*pcVar2)(plVar1,asStack_10,FUN_04abf690,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  this_00 = (string *)
            std::
            map<unsigned_int,std::string,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::string>>>
            ::operator[]((map<unsigned_int,std::string,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::string>>>
                          *)k_TriggerTypeToString,&TypeValue);
  std::string::append(this_00,"PTriggerPlantfood",(size_t)in_x2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PTriggerPlantfood::StaticGetClass() */

long * PTriggerPlantfood::StaticGetClass(void)

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
  uVar2 = PTrigger::StaticGetClass();
  (*pcVar3)(plVar1,"PTriggerPlantfood",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PTriggerPlantfood::GetClass() const */

long * PTriggerPlantfood::GetClass(void)

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
  uVar2 = PTrigger::StaticGetClass();
  (*pcVar3)(plVar1,"PTriggerPlantfood",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

