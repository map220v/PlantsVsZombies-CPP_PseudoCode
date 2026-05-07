// Class: StarRateProps


/* StarRateProps::StarRateProps() */

void __thiscall StarRateProps::StarRateProps(StarRateProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067a3170;
  StarRateInfo::StarRateInfo((StarRateInfo *)(this + 0x2b8));
  return;
}


/* StarRateProps::~StarRateProps() */

void __thiscall StarRateProps::~StarRateProps(StarRateProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067a3170;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* StarRateProps::~StarRateProps() */

void __thiscall StarRateProps::~StarRateProps(StarRateProps *this)

{
  ~StarRateProps(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarRateProps::StaticClassInit() */

void StarRateProps::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"StarRateInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_03f81310,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"StarRateProps");
    (*pcVar3)(plVar2,asStack_10,FUN_03f8d30c,0x2c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarRateProps::StaticNew() */

StarRateProps * StarRateProps::StaticNew(void)

{
  StarRateProps *this;
  
  this = ::operator_new(0x2c0);
  StarRateProps(this);
  return this;
}


/* StarRateProps::StaticGetClass() */

long * StarRateProps::StaticGetClass(void)

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
  uVar2 = PlantPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"StarRateProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarRateProps::GetClass() const */

long * StarRateProps::GetClass(void)

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
  uVar2 = PlantPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"StarRateProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

