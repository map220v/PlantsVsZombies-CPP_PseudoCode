// Class: WintersweetProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WintersweetProps::StaticClassInit() */

void WintersweetProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"WintersweetProps");
    (*pcVar2)(plVar1,asStack_10,FUN_040f1a30,0x2c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WintersweetProps::StaticGetClass() */

long * WintersweetProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WintersweetProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WintersweetProps::GetClass() const */

long * WintersweetProps::GetClass(void)

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
  (*pcVar3)(plVar1,"WintersweetProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WintersweetProps::WintersweetProps() */

void __thiscall WintersweetProps::WintersweetProps(WintersweetProps *this)

{
  StarRateProps::StarRateProps((StarRateProps *)this);
  *(undefined4 *)(this + 0x2c0) = 0xf;
  *(undefined4 *)(this + 0x2c4) = 0x19;
  *(undefined ***)this = &PTR_GetClass_067e0070;
  return;
}


/* WintersweetProps::StaticNew() */

WintersweetProps * WintersweetProps::StaticNew(void)

{
  WintersweetProps *this;
  
  this = ::operator_new(0x2c8);
  WintersweetProps(this);
  return this;
}


/* WintersweetProps::~WintersweetProps() */

void __thiscall WintersweetProps::~WintersweetProps(WintersweetProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067e0070;
  StarRateProps::~StarRateProps((StarRateProps *)this);
  return;
}


/* WintersweetProps::~WintersweetProps() */

void __thiscall WintersweetProps::~WintersweetProps(WintersweetProps *this)

{
  ~WintersweetProps(this);
  AK::FreeHook(this);
  return;
}

