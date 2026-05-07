// Class: ZombieAnimRig_SkyCityGgtImp


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_SkyCityGgtImp::getDieAnimationName() */

void ZombieAnimRig_SkyCityGgtImp::getDieAnimationName(void)

{
  int iVar1;
  long lVar2;
  GridItemMagicMirrorRig *in_x0;
  string *in_x8;
  
  lVar2 = ___stack_chk_guard;
  iVar1 = *(int *)(in_x0 + 0x240);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      std::string::string(in_x8,"skee");
      nop();
      goto LAB_047a9314;
    }
    if (iVar1 == 2) {
      std::string::string(in_x8,"skee02");
      nop();
      goto LAB_047a9314;
    }
  }
  GridItemMagicMirrorRig::getDisAppearingAnimLabel(in_x0);
LAB_047a9314:
  if (lVar2 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_SkyCityGgtImp::~ZombieAnimRig_SkyCityGgtImp() */

void __thiscall
ZombieAnimRig_SkyCityGgtImp::~ZombieAnimRig_SkyCityGgtImp(ZombieAnimRig_SkyCityGgtImp *this)

{
  *(undefined ***)this = &PTR_GetClass_068e1eb0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_SkyCityGgtImp_068e2150;
  ZombieAnimRig_Imp::~ZombieAnimRig_Imp((ZombieAnimRig_Imp *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_SkyCityGgtImp::~ZombieAnimRig_SkyCityGgtImp() */

void __thiscall
ZombieAnimRig_SkyCityGgtImp::~ZombieAnimRig_SkyCityGgtImp(ZombieAnimRig_SkyCityGgtImp *this)

{
  ~ZombieAnimRig_SkyCityGgtImp(this + -0x10);
  return;
}


/* ZombieAnimRig_SkyCityGgtImp::~ZombieAnimRig_SkyCityGgtImp() */

void __thiscall
ZombieAnimRig_SkyCityGgtImp::~ZombieAnimRig_SkyCityGgtImp(ZombieAnimRig_SkyCityGgtImp *this)

{
  ~ZombieAnimRig_SkyCityGgtImp(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_SkyCityGgtImp::~ZombieAnimRig_SkyCityGgtImp() */

void __thiscall
ZombieAnimRig_SkyCityGgtImp::~ZombieAnimRig_SkyCityGgtImp(ZombieAnimRig_SkyCityGgtImp *this)

{
  ~ZombieAnimRig_SkyCityGgtImp(this + -0x10);
  return;
}


/* ZombieAnimRig_SkyCityGgtImp::ZombieAnimRig_SkyCityGgtImp() */

void __thiscall
ZombieAnimRig_SkyCityGgtImp::ZombieAnimRig_SkyCityGgtImp(ZombieAnimRig_SkyCityGgtImp *this)

{
  ZombieAnimRig_Imp::ZombieAnimRig_Imp((ZombieAnimRig_Imp *)this);
  *(undefined4 *)(this + 0x240) = 0;
  *(undefined ***)this = &PTR_GetClass_068e1eb0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_SkyCityGgtImp_068e2150;
  return;
}


/* ZombieAnimRig_SkyCityGgtImp::StaticNew() */

ZombieAnimRig_SkyCityGgtImp * ZombieAnimRig_SkyCityGgtImp::StaticNew(void)

{
  ZombieAnimRig_SkyCityGgtImp *this;
  
  this = ::operator_new(0x248);
  ZombieAnimRig_SkyCityGgtImp(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_SkyCityGgtImp::StaticClassInit() */

void ZombieAnimRig_SkyCityGgtImp::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_SkyCityGgtImp");
    (*pcVar2)(plVar1,asStack_10,FUN_047a987c,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_SkyCityGgtImp::StaticGetClass() */

long * ZombieAnimRig_SkyCityGgtImp::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig_Imp::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_SkyCityGgtImp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_SkyCityGgtImp::GetClass() const */

long * ZombieAnimRig_SkyCityGgtImp::GetClass(void)

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
  uVar2 = ZombieAnimRig_Imp::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_SkyCityGgtImp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

