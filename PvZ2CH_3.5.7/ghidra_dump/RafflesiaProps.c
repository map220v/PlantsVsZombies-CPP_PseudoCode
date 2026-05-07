// Class: RafflesiaProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RafflesiaProps::StaticClassInit() */

void RafflesiaProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"RafflesiaProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03f8e250,0x2c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RafflesiaProps::RafflesiaProps() */

void __thiscall RafflesiaProps::RafflesiaProps(RafflesiaProps *this)

{
  StarRateProps::StarRateProps((StarRateProps *)this);
  *(undefined4 *)(this + 0x2c0) = 0x3f000000;
  *(undefined ***)this = &PTR_GetClass_067a3840;
  *(undefined4 *)(this + 0x2c4) = 0;
  return;
}


/* RafflesiaProps::StaticNew() */

RafflesiaProps * RafflesiaProps::StaticNew(void)

{
  RafflesiaProps *this;
  
  this = ::operator_new(0x2c8);
  RafflesiaProps(this);
  return this;
}


/* RafflesiaProps::~RafflesiaProps() */

void __thiscall RafflesiaProps::~RafflesiaProps(RafflesiaProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067a3840;
  StarRateProps::~StarRateProps((StarRateProps *)this);
  return;
}


/* RafflesiaProps::~RafflesiaProps() */

void __thiscall RafflesiaProps::~RafflesiaProps(RafflesiaProps *this)

{
  ~RafflesiaProps(this);
  AK::FreeHook(this);
  return;
}


/* RafflesiaProps::StaticGetClass() */

long * RafflesiaProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RafflesiaProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RafflesiaProps::GetClass() const */

long * RafflesiaProps::GetClass(void)

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
  (*pcVar3)(plVar1,"RafflesiaProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

