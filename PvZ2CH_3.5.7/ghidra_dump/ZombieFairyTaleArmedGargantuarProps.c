// Class: ZombieFairyTaleArmedGargantuarProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieFairyTaleArmedGargantuarProps::StaticClassInit() */

void ZombieFairyTaleArmedGargantuarProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieFairyTaleArmedGargantuarProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04ed37ec,0x278,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieFairyTaleArmedGargantuarProps::StaticGetClass() */

long * ZombieFairyTaleArmedGargantuarProps::StaticGetClass(void)

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
  uVar2 = ZombieFairyTaleGargantuarProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieFairyTaleArmedGargantuarProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieFairyTaleArmedGargantuarProps::GetClass() const */

long * ZombieFairyTaleArmedGargantuarProps::GetClass(void)

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
  uVar2 = ZombieFairyTaleGargantuarProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieFairyTaleArmedGargantuarProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieFairyTaleArmedGargantuarProps::ZombieFairyTaleArmedGargantuarProps() */

void __thiscall
ZombieFairyTaleArmedGargantuarProps::ZombieFairyTaleArmedGargantuarProps
          (ZombieFairyTaleArmedGargantuarProps *this)

{
  ZombieFairyTaleGargantuarProps::ZombieFairyTaleGargantuarProps
            ((ZombieFairyTaleGargantuarProps *)this);
  *(undefined ***)this = &PTR_GetClass_069f9ed0;
  return;
}


/* ZombieFairyTaleArmedGargantuarProps::StaticNew() */

ZombieFairyTaleArmedGargantuarProps * ZombieFairyTaleArmedGargantuarProps::StaticNew(void)

{
  ZombieFairyTaleArmedGargantuarProps *this;
  
  this = ::operator_new(0x278);
  ZombieFairyTaleArmedGargantuarProps(this);
  return this;
}


/* ZombieFairyTaleArmedGargantuarProps::~ZombieFairyTaleArmedGargantuarProps() */

void __thiscall
ZombieFairyTaleArmedGargantuarProps::~ZombieFairyTaleArmedGargantuarProps
          (ZombieFairyTaleArmedGargantuarProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069f9ed0;
  ZombieFairyTaleGargantuarProps::~ZombieFairyTaleGargantuarProps
            ((ZombieFairyTaleGargantuarProps *)this);
  return;
}


/* ZombieFairyTaleArmedGargantuarProps::~ZombieFairyTaleArmedGargantuarProps() */

void __thiscall
ZombieFairyTaleArmedGargantuarProps::~ZombieFairyTaleArmedGargantuarProps
          (ZombieFairyTaleArmedGargantuarProps *this)

{
  ~ZombieFairyTaleArmedGargantuarProps(this);
  AK::FreeHook(this);
  return;
}

