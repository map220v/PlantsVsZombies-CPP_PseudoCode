// Class: ZombieFairyTaleGargantuarProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieFairyTaleGargantuarProps::StaticClassInit() */

void ZombieFairyTaleGargantuarProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieFairyTaleGargantuarProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04ed305c,0x278,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieFairyTaleGargantuarProps::StaticGetClass() */

long * ZombieFairyTaleGargantuarProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieFairyTaleGargantuarProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieFairyTaleGargantuarProps::GetClass() const */

long * ZombieFairyTaleGargantuarProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieFairyTaleGargantuarProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieFairyTaleGargantuarProps::ZombieFairyTaleGargantuarProps() */

void __thiscall
ZombieFairyTaleGargantuarProps::ZombieFairyTaleGargantuarProps(ZombieFairyTaleGargantuarProps *this)

{
  size_t in_x2;
  
  ZombieGargantuarProps::ZombieGargantuarProps((ZombieGargantuarProps *)this);
  *(undefined ***)this = &PTR_GetClass_069f90f0;
  Set8BytesTo0((string *)(this + 0x270));
  this[0x268] = (ZombieFairyTaleGargantuarProps)0x0;
  std::string::append((string *)(this + 0x270),"heavy_shield",in_x2);
  return;
}


/* ZombieFairyTaleGargantuarProps::StaticNew() */

ZombieFairyTaleGargantuarProps * ZombieFairyTaleGargantuarProps::StaticNew(void)

{
  ZombieFairyTaleGargantuarProps *this;
  
  this = ::operator_new(0x278);
  ZombieFairyTaleGargantuarProps(this);
  return this;
}


/* ZombieFairyTaleGargantuarProps::~ZombieFairyTaleGargantuarProps() */

void __thiscall
ZombieFairyTaleGargantuarProps::~ZombieFairyTaleGargantuarProps
          (ZombieFairyTaleGargantuarProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069f90f0;
  std::string::~string((string *)(this + 0x270));
  ZombieGargantuarProps::~ZombieGargantuarProps((ZombieGargantuarProps *)this);
  return;
}


/* ZombieFairyTaleGargantuarProps::~ZombieFairyTaleGargantuarProps() */

void __thiscall
ZombieFairyTaleGargantuarProps::~ZombieFairyTaleGargantuarProps
          (ZombieFairyTaleGargantuarProps *this)

{
  ~ZombieFairyTaleGargantuarProps(this);
  AK::FreeHook(this);
  return;
}

