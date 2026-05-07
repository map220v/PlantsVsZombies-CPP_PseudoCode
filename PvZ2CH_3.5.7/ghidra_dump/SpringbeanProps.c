// Class: SpringbeanProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringbeanProps::StaticClassInit() */

void SpringbeanProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"SpringbeanProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03f8e7dc,0x2e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SpringbeanProps::SpringbeanProps() */

void __thiscall SpringbeanProps::SpringbeanProps(SpringbeanProps *this)

{
  StarRateProps::StarRateProps((StarRateProps *)this);
  *(undefined ***)this = &PTR_GetClass_067a3ac0;
  Sexy::Insets::Insets((Insets *)(this + 0x2d4));
  *(undefined4 *)(this + 0x2c0) = 0x3f800000;
  *(undefined4 *)(this + 0x2c4) = 0x42480000;
  *(undefined4 *)(this + 0x2d0) = 0x40400000;
  *(undefined4 *)(this + 0x2c8) = 0x42c00000;
  *(undefined4 *)(this + 0x2cc) = 0x3f8ccccd;
  return;
}


/* SpringbeanProps::StaticNew() */

SpringbeanProps * SpringbeanProps::StaticNew(void)

{
  SpringbeanProps *this;
  
  this = ::operator_new(0x2e8);
  SpringbeanProps(this);
  return this;
}


/* SpringbeanProps::~SpringbeanProps() */

void __thiscall SpringbeanProps::~SpringbeanProps(SpringbeanProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067a3ac0;
  StarRateProps::~StarRateProps((StarRateProps *)this);
  return;
}


/* SpringbeanProps::~SpringbeanProps() */

void __thiscall SpringbeanProps::~SpringbeanProps(SpringbeanProps *this)

{
  ~SpringbeanProps(this);
  AK::FreeHook(this);
  return;
}


/* SpringbeanProps::StaticGetClass() */

long * SpringbeanProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SpringbeanProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SpringbeanProps::GetClass() const */

long * SpringbeanProps::GetClass(void)

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
  (*pcVar3)(plVar1,"SpringbeanProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

