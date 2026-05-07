// Class: CabbagepultProps


/* CabbagepultProps::CabbagepultProps() */

void __thiscall CabbagepultProps::CabbagepultProps(CabbagepultProps *this)

{
  StarRateProps::StarRateProps((StarRateProps *)this);
  *(undefined4 *)(this + 0x2c0) = 0x3f99999a;
  *(undefined ***)this = &PTR_GetClass_067a3660;
  *(undefined4 *)(this + 0x2c4) = 0x43af0000;
  return;
}


/* CabbagepultProps::~CabbagepultProps() */

void __thiscall CabbagepultProps::~CabbagepultProps(CabbagepultProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067a3660;
  StarRateProps::~StarRateProps((StarRateProps *)this);
  return;
}


/* CabbagepultProps::~CabbagepultProps() */

void __thiscall CabbagepultProps::~CabbagepultProps(CabbagepultProps *this)

{
  ~CabbagepultProps(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CabbagepultProps::StaticClassInit() */

void CabbagepultProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"CabbagepultProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03f8d4f0,0x2c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CabbagepultProps::StaticNew() */

CabbagepultProps * CabbagepultProps::StaticNew(void)

{
  CabbagepultProps *this;
  
  this = ::operator_new(0x2c8);
  CabbagepultProps(this);
  return this;
}


/* CabbagepultProps::StaticGetClass() */

long * CabbagepultProps::StaticGetClass(void)

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
  uVar2 = StarRateProps::StaticGetClass();
  (*pcVar3)(plVar1,"CabbagepultProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CabbagepultProps::GetClass() const */

long * CabbagepultProps::GetClass(void)

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
  uVar2 = StarRateProps::StaticGetClass();
  (*pcVar3)(plVar1,"CabbagepultProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

