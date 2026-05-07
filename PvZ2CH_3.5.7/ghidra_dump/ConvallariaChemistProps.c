// Class: ConvallariaChemistProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConvallariaChemistProps::StaticClassInit() */

void ConvallariaChemistProps::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"ConvallariaChemistProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03c05ec0,0x2d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ConvallariaChemistProps::StaticGetClass() */

long * ConvallariaChemistProps::StaticGetClass(void)

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
  uVar2 = CabbagepultProps::StaticGetClass();
  (*pcVar3)(plVar1,"ConvallariaChemistProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ConvallariaChemistProps::GetClass() const */

long * ConvallariaChemistProps::GetClass(void)

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
  uVar2 = CabbagepultProps::StaticGetClass();
  (*pcVar3)(plVar1,"ConvallariaChemistProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ConvallariaChemistProps::ConvallariaChemistProps() */

void __thiscall ConvallariaChemistProps::ConvallariaChemistProps(ConvallariaChemistProps *this)

{
  CabbagepultProps::CabbagepultProps((CabbagepultProps *)this);
  *(undefined4 *)(this + 0x2cc) = 0x3f800000;
  *(undefined ***)this = &PTR_GetClass_06744df0;
  *(undefined4 *)(this + 0x2c8) = 0x3ea8f5c3;
  return;
}


/* ConvallariaChemistProps::StaticNew() */

ConvallariaChemistProps * ConvallariaChemistProps::StaticNew(void)

{
  ConvallariaChemistProps *this;
  
  this = ::operator_new(0x2d0);
  ConvallariaChemistProps(this);
  return this;
}


/* ConvallariaChemistProps::~ConvallariaChemistProps() */

void __thiscall ConvallariaChemistProps::~ConvallariaChemistProps(ConvallariaChemistProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06744df0;
  CabbagepultProps::~CabbagepultProps((CabbagepultProps *)this);
  return;
}


/* ConvallariaChemistProps::~ConvallariaChemistProps() */

void __thiscall ConvallariaChemistProps::~ConvallariaChemistProps(ConvallariaChemistProps *this)

{
  ~ConvallariaChemistProps(this);
  AK::FreeHook(this);
  return;
}

