// Class: ZombieEightiesGlitterProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEightiesGlitterProps::StaticClassInit() */

void ZombieEightiesGlitterProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieEightiesGlitterProps");
    (*pcVar2)(plVar1,asStack_10,FUN_047e8ed8,0x220,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieEightiesGlitterProps::StaticGetClass() */

long * ZombieEightiesGlitterProps::StaticGetClass(void)

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
  uVar2 = ZombiePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieEightiesGlitterProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieEightiesGlitterProps::GetClass() const */

long * ZombieEightiesGlitterProps::GetClass(void)

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
  uVar2 = ZombiePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieEightiesGlitterProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEightiesGlitterProps::ZombieEightiesGlitterProps() */

void __thiscall
ZombieEightiesGlitterProps::ZombieEightiesGlitterProps(ZombieEightiesGlitterProps *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = ___stack_chk_guard;
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_068f3810;
  std::string::string((string *)(this + 0x210),"jam_pop");
  nop();
  lVar2 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x218) = 200;
  if (lVar1 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieEightiesGlitterProps::StaticNew() */

ZombieEightiesGlitterProps * ZombieEightiesGlitterProps::StaticNew(void)

{
  ZombieEightiesGlitterProps *this;
  
  this = ::operator_new(0x220);
  ZombieEightiesGlitterProps(this);
  return this;
}


/* ZombieEightiesGlitterProps::~ZombieEightiesGlitterProps() */

void __thiscall
ZombieEightiesGlitterProps::~ZombieEightiesGlitterProps(ZombieEightiesGlitterProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068f3810;
  std::string::~string((string *)(this + 0x210));
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieEightiesGlitterProps::~ZombieEightiesGlitterProps() */

void __thiscall
ZombieEightiesGlitterProps::~ZombieEightiesGlitterProps(ZombieEightiesGlitterProps *this)

{
  ~ZombieEightiesGlitterProps(this);
  AK::FreeHook(this);
  return;
}

