// Class: PlantAnimRig_ArmamintPeashooter


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_ArmamintPeashooter::getAttackAnimationName() */

void PlantAnimRig_ArmamintPeashooter::getAttackAnimationName(void)

{
  int iVar1;
  long in_x0;
  undefined1 *__n;
  string *in_x8;
  undefined1 auStack_10 [8];
  long local_8;
  
  __n = auStack_10;
  local_8 = ___stack_chk_guard;
  std::string::string(in_x8,"attack");
  nop();
  iVar1 = *(int *)(in_x0 + 0x3b8);
  if (iVar1 == 1) {
    std::string::append(in_x8,"attack2",(size_t)__n);
  }
  else if ((iVar1 == 0) || (iVar1 != 2)) {
    std::string::append(in_x8,"attack",(size_t)__n);
  }
  else {
    std::string::append(in_x8,"attack5",(size_t)__n);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_ArmamintPeashooter::~PlantAnimRig_ArmamintPeashooter() */

void __thiscall
PlantAnimRig_ArmamintPeashooter::~PlantAnimRig_ArmamintPeashooter
          (PlantAnimRig_ArmamintPeashooter *this)

{
  *(undefined ***)this = &PTR_GetClass_06827670;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_ArmamintPeashooter_068278d8;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_ArmamintPeashooter::~PlantAnimRig_ArmamintPeashooter() */

void __thiscall
PlantAnimRig_ArmamintPeashooter::~PlantAnimRig_ArmamintPeashooter
          (PlantAnimRig_ArmamintPeashooter *this)

{
  ~PlantAnimRig_ArmamintPeashooter(this + -0x10);
  return;
}


/* PlantAnimRig_ArmamintPeashooter::~PlantAnimRig_ArmamintPeashooter() */

void __thiscall
PlantAnimRig_ArmamintPeashooter::~PlantAnimRig_ArmamintPeashooter
          (PlantAnimRig_ArmamintPeashooter *this)

{
  ~PlantAnimRig_ArmamintPeashooter(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_ArmamintPeashooter::~PlantAnimRig_ArmamintPeashooter() */

void __thiscall
PlantAnimRig_ArmamintPeashooter::~PlantAnimRig_ArmamintPeashooter
          (PlantAnimRig_ArmamintPeashooter *this)

{
  ~PlantAnimRig_ArmamintPeashooter(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_ArmamintPeashooter::StaticClassInit() */

void PlantAnimRig_ArmamintPeashooter::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_ArmamintPeashooter");
    (*pcVar2)(plVar1,asStack_10,FUN_042972c0,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_ArmamintPeashooter::StaticGetClass() */

long * PlantAnimRig_ArmamintPeashooter::StaticGetClass(void)

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
  uVar2 = PlantAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_ArmamintPeashooter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_ArmamintPeashooter::GetClass() const */

long * PlantAnimRig_ArmamintPeashooter::GetClass(void)

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
  uVar2 = PlantAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_ArmamintPeashooter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_ArmamintPeashooter::PlantAnimRig_ArmamintPeashooter() */

void __thiscall
PlantAnimRig_ArmamintPeashooter::PlantAnimRig_ArmamintPeashooter
          (PlantAnimRig_ArmamintPeashooter *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined4 *)(this + 0x3b8) = 0;
  *(undefined ***)this = &PTR_GetClass_06827670;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_ArmamintPeashooter_068278d8;
  return;
}


/* PlantAnimRig_ArmamintPeashooter::StaticNew() */

PlantAnimRig_ArmamintPeashooter * PlantAnimRig_ArmamintPeashooter::StaticNew(void)

{
  PlantAnimRig_ArmamintPeashooter *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_ArmamintPeashooter(this);
  return this;
}


/* PlantAnimRig_ArmamintPeashooter::onAnimStopped() */

void __thiscall
PlantAnimRig_ArmamintPeashooter::onAnimStopped(PlantAnimRig_ArmamintPeashooter *this)

{
  int iVar1;
  RtInvokeVariant *pRVar2;
  
  *(int *)(this + 0x21c) = *(int *)(this + 0x21c) + 1;
  switch(*(int *)(this + 0x218)) {
  case 3:
    PlantAnimRig::onPlantfoodLooped((PlantAnimRig *)this);
    iVar1 = ::RtReflectionDelegate::operator_cast_to_int((RtReflectionDelegate *)(this + 0x298));
    if (iVar1 != 0) {
      pRVar2 = (RtInvokeVariant *)
               RtReflectionDelegate<Sexy::Delegate0>::GetDelegate
                         ((RtReflectionDelegate<Sexy::Delegate0> *)(this + 0x298));
      Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn(pRVar2);
    }
    *(undefined4 *)(this + 0x218) = 4;
    PlantAnimRig::onAnimStopped((PlantAnimRig *)this);
    return;
  case 4:
    iVar1 = *(int *)(this + 0x228);
    if (0 < iVar1) {
      *(int *)(this + 0x228) = iVar1 + -1;
      PlantAnimRig::onPlantfoodLooped((PlantAnimRig *)this);
      iVar1 = *(int *)(this + 0x228);
    }
    if ((iVar1 < 1) && (iVar1 != -1)) {
      *(undefined4 *)(this + 0x218) = 0;
      iVar1 = ::RtReflectionDelegate::operator_cast_to_int((RtReflectionDelegate *)(this + 0x328));
      if (iVar1 != 0) {
        pRVar2 = (RtInvokeVariant *)
                 RtReflectionDelegate<Sexy::Delegate0>::GetDelegate
                           ((RtReflectionDelegate<Sexy::Delegate0> *)(this + 0x328));
        Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn(pRVar2);
      }
    }
    else {
      (**(code **)(*(long *)this + 400))(this);
    }
    break;
  default:
    if (*(int *)(this + 0x218) < 0xe) {
      (**(code **)(*(long *)this + 0x118))(this);
    }
    break;
  case 9:
    (**(code **)(*(long *)this + 0x170))(this);
    PlantAnimRig::onAnimStopped((PlantAnimRig *)this);
    return;
  case 10:
    break;
  case 0xc:
    (**(code **)(*(long *)this + 0x180))(this);
    PlantAnimRig::onAnimStopped((PlantAnimRig *)this);
    return;
  }
  PlantAnimRig::onAnimStopped((PlantAnimRig *)this);
  return;
}

