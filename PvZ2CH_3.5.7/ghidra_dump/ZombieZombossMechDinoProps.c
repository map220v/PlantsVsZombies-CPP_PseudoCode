// Class: ZombieZombossMechDinoProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMechDinoProps::StaticClassInit() */

void ZombieZombossMechDinoProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieZombossMechDinoProps");
    (*pcVar2)(plVar1,asStack_10,FUN_047f5ac0,0x2c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMechDinoProps::StaticGetClass() */

long * ZombieZombossMechDinoProps::StaticGetClass(void)

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
  uVar2 = ZombieZombossMechProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZombossMechDinoProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossMechDinoProps::GetClass() const */

long * ZombieZombossMechDinoProps::GetClass(void)

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
  uVar2 = ZombieZombossMechProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZombossMechDinoProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossMechDinoProps::ZombieZombossMechDinoProps() */

void __thiscall
ZombieZombossMechDinoProps::ZombieZombossMechDinoProps(ZombieZombossMechDinoProps *this)

{
  ZombieZombossMechProps::ZombieZombossMechProps((ZombieZombossMechProps *)this);
  *(undefined4 *)(this + 0x2a0) = 0x3f800000;
  *(undefined ***)this = &PTR_GetClass_068f6f60;
  *(undefined4 *)(this + 0x2ac) = 0x3f800000;
  *(undefined4 *)(this + 0x2a4) = 0x42480000;
  *(undefined4 *)(this + 0x2a8) = 0x3dcccccd;
  Sexy::Point::Point((Point *)(this + 0x2b0),0,0);
  *(undefined4 *)(this + 700) = 0;
  *(undefined4 *)(this + 0x2b8) = 5;
  return;
}


/* ZombieZombossMechDinoProps::StaticNew() */

ZombieZombossMechDinoProps * ZombieZombossMechDinoProps::StaticNew(void)

{
  ZombieZombossMechDinoProps *this;
  
  this = ::operator_new(0x2c0);
  ZombieZombossMechDinoProps(this);
  return this;
}


/* ZombieZombossMechDinoProps::~ZombieZombossMechDinoProps() */

void __thiscall
ZombieZombossMechDinoProps::~ZombieZombossMechDinoProps(ZombieZombossMechDinoProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068f6f60;
  ZombieZombossMechProps::~ZombieZombossMechProps((ZombieZombossMechProps *)this);
  return;
}


/* ZombieZombossMechDinoProps::~ZombieZombossMechDinoProps() */

void __thiscall
ZombieZombossMechDinoProps::~ZombieZombossMechDinoProps(ZombieZombossMechDinoProps *this)

{
  ~ZombieZombossMechDinoProps(this);
  AK::FreeHook(this);
  return;
}

