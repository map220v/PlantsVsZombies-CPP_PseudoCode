// Class: ZombieEightiesGargantuarProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEightiesGargantuarProps::StaticClassInit() */

void ZombieEightiesGargantuarProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieEightiesGargantuarProps");
    (*pcVar2)(plVar1,asStack_10,FUN_047e7e20,0x280,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieEightiesGargantuarProps::StaticGetClass() */

long * ZombieEightiesGargantuarProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieEightiesGargantuarProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieEightiesGargantuarProps::GetClass() const */

long * ZombieEightiesGargantuarProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieEightiesGargantuarProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEightiesGargantuarProps::ZombieEightiesGargantuarProps() */

void __thiscall
ZombieEightiesGargantuarProps::ZombieEightiesGargantuarProps(ZombieEightiesGargantuarProps *this)

{
  long lVar1;
  size_t in_x2;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieGargantuarProps::ZombieGargantuarProps((ZombieGargantuarProps *)this);
  *(undefined ***)this = &PTR_GetClass_068f1fe0;
  Set8BytesTo0((string *)(this + 0x268));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x278));
  std::string::append((string *)(this + 0x268),"",in_x2);
  *(undefined4 *)(this + 0x270) = 0;
  *(undefined4 *)(this + 0x274) = 0;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,0.0,0.0);
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x278) = local_10;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieEightiesGargantuarProps::StaticNew() */

ZombieEightiesGargantuarProps * ZombieEightiesGargantuarProps::StaticNew(void)

{
  ZombieEightiesGargantuarProps *this;
  
  this = ::operator_new(0x280);
  ZombieEightiesGargantuarProps(this);
  return this;
}


/* ZombieEightiesGargantuarProps::~ZombieEightiesGargantuarProps() */

void __thiscall
ZombieEightiesGargantuarProps::~ZombieEightiesGargantuarProps(ZombieEightiesGargantuarProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068f1fe0;
  std::string::~string((string *)(this + 0x268));
  ZombieGargantuarProps::~ZombieGargantuarProps((ZombieGargantuarProps *)this);
  return;
}


/* ZombieEightiesGargantuarProps::~ZombieEightiesGargantuarProps() */

void __thiscall
ZombieEightiesGargantuarProps::~ZombieEightiesGargantuarProps(ZombieEightiesGargantuarProps *this)

{
  ~ZombieEightiesGargantuarProps(this);
  AK::FreeHook(this);
  return;
}

