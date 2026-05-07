// Class: CypripediumProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CypripediumProps::StaticClassInit() */

void CypripediumProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"CypripediumProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04271d40,0x2c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CypripediumProps::StaticGetClass() */

long * CypripediumProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CypripediumProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CypripediumProps::GetClass() const */

long * CypripediumProps::GetClass(void)

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
  (*pcVar3)(plVar1,"CypripediumProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CypripediumProps::CypripediumProps() */

void __thiscall CypripediumProps::CypripediumProps(CypripediumProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2b8) = 0x3f99999a;
  *(undefined ***)this = &PTR_GetClass_06820540;
  *(undefined4 *)(this + 0x2c0) = 0x3f000000;
  *(undefined4 *)(this + 700) = 0x43af0000;
  return;
}


/* CypripediumProps::StaticNew() */

CypripediumProps * CypripediumProps::StaticNew(void)

{
  CypripediumProps *this;
  
  this = ::operator_new(0x2c8);
  CypripediumProps(this);
  return this;
}


/* CypripediumProps::~CypripediumProps() */

void __thiscall CypripediumProps::~CypripediumProps(CypripediumProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06820540;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* CypripediumProps::~CypripediumProps() */

void __thiscall CypripediumProps::~CypripediumProps(CypripediumProps *this)

{
  ~CypripediumProps(this);
  AK::FreeHook(this);
  return;
}

