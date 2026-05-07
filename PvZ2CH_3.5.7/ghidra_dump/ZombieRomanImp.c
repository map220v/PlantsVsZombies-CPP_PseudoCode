// Class: ZombieRomanImp


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRomanImp::StaticClassInit() */

void ZombieRomanImp::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieRomanImp");
    (*pcVar2)(plVar1,asStack_10,FUN_04657fb4,0x820,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieRomanImp::StaticGetClass() */

long * ZombieRomanImp::StaticGetClass(void)

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
  uVar2 = ZombieImp::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieRomanImp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieRomanImp::GetClass() const */

long * ZombieRomanImp::GetClass(void)

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
  uVar2 = ZombieImp::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieRomanImp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieRomanImp::~ZombieRomanImp() */

void __thiscall ZombieRomanImp::~ZombieRomanImp(ZombieRomanImp *this)

{
  *(undefined ***)this = &PTR_GetClass_06889790;
  *(undefined ***)(this + 0x10) = &PTR__ZombieRomanImp_0688a250;
  ZombieImp::~ZombieImp((ZombieImp *)this);
  return;
}


/* non-virtual thunk to ZombieRomanImp::~ZombieRomanImp() */

void __thiscall ZombieRomanImp::~ZombieRomanImp(ZombieRomanImp *this)

{
  ~ZombieRomanImp(this + -0x10);
  return;
}


/* ZombieRomanImp::~ZombieRomanImp() */

void __thiscall ZombieRomanImp::~ZombieRomanImp(ZombieRomanImp *this)

{
  ~ZombieRomanImp(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieRomanImp::~ZombieRomanImp() */

void __thiscall ZombieRomanImp::~ZombieRomanImp(ZombieRomanImp *this)

{
  ~ZombieRomanImp(this + -0x10);
  return;
}


/* ZombieRomanImp::ZombieRomanImp() */

void __thiscall ZombieRomanImp::ZombieRomanImp(ZombieRomanImp *this)

{
  ZombieImp::ZombieImp((ZombieImp *)this);
  this[0x818] = (ZombieRomanImp)0x0;
  *(undefined ***)this = &PTR_GetClass_06889790;
  *(undefined ***)(this + 0x10) = &PTR__ZombieRomanImp_0688a250;
  return;
}


/* ZombieRomanImp::StaticNew() */

ZombieRomanImp * ZombieRomanImp::StaticNew(void)

{
  ZombieRomanImp *this;
  
  this = ::operator_new(0x820);
  ZombieRomanImp(this);
  return this;
}


/* ZombieRomanImp::LaunchedByGargantuar() */

void __thiscall ZombieRomanImp::LaunchedByGargantuar(ZombieRomanImp *this)

{
  ZombieHydraHeadAnimRig *this_00;
  
  this[0x818] = (ZombieRomanImp)0x1;
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  ZombieAnimRig_RomanImp::SetHasNet((ZombieAnimRig_RomanImp *)this_00,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRomanImp::onLandingSuccess() */

void __thiscall ZombieRomanImp::onLandingSuccess(ZombieRomanImp *this)

{
  ZombieHydraHeadAnimRig *this_00;
  long lVar1;
  ZombieRomanImpProps *pZVar2;
  Board *this_01;
  int local_18;
  int local_14;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x818] != (ZombieRomanImp)0x0) {
    this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
    ZombieAnimRig_RomanImp::SetHasNet((ZombieAnimRig_RomanImp *)this_00,false);
    this[0x818] = (ZombieRomanImp)0x0;
    BoardEntity::CalcGridPosition();
    this_01 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_10,"");
    lVar1 = Board::GetPlantAt(this_01,local_18,local_14,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (lVar1 != 0) {
      pZVar2 = Zombie::GetProps<ZombieRomanImpProps>((Zombie *)this);
      Plant::ApplyCondition((float)*(int *)(pZVar2 + 0x210),0,lVar1,0x18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

