// Class: ZombieZoybeanPodGargantuarProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZoybeanPodGargantuarProps::StaticClassInit() */

void ZombieZoybeanPodGargantuarProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieZoybeanPodGargantuarProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0346094c,0x270,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZoybeanPodGargantuarProps::StaticGetClass() */

long * ZombieZoybeanPodGargantuarProps::StaticGetClass(void)

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
  uVar2 = ZombieGargantuarProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZoybeanPodGargantuarProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZoybeanPodGargantuarProps::GetClass() const */

long * ZombieZoybeanPodGargantuarProps::GetClass(void)

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
  uVar2 = ZombieGargantuarProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZoybeanPodGargantuarProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZoybeanPodGargantuarProps::ZombieZoybeanPodGargantuarProps() */

void __thiscall
ZombieZoybeanPodGargantuarProps::ZombieZoybeanPodGargantuarProps
          (ZombieZoybeanPodGargantuarProps *this)

{
  ZombieGargantuarProps::ZombieGargantuarProps((ZombieGargantuarProps *)this);
  *(undefined ***)this = &PTR_GetClass_06637290;
  *(undefined4 *)(this + 0x268) = 0;
  return;
}


/* ZombieZoybeanPodGargantuarProps::StaticNew() */

ZombieZoybeanPodGargantuarProps * ZombieZoybeanPodGargantuarProps::StaticNew(void)

{
  ZombieZoybeanPodGargantuarProps *this;
  
  this = ::operator_new(0x270);
  ZombieZoybeanPodGargantuarProps(this);
  return this;
}


/* ZombieZoybeanPodGargantuarProps::~ZombieZoybeanPodGargantuarProps() */

void __thiscall
ZombieZoybeanPodGargantuarProps::~ZombieZoybeanPodGargantuarProps
          (ZombieZoybeanPodGargantuarProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06637290;
  ZombieGargantuarProps::~ZombieGargantuarProps((ZombieGargantuarProps *)this);
  return;
}


/* ZombieZoybeanPodGargantuarProps::~ZombieZoybeanPodGargantuarProps() */

void __thiscall
ZombieZoybeanPodGargantuarProps::~ZombieZoybeanPodGargantuarProps
          (ZombieZoybeanPodGargantuarProps *this)

{
  ~ZombieZoybeanPodGargantuarProps(this);
  AK::FreeHook(this);
  return;
}

