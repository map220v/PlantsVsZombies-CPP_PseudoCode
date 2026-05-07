// Class: PlantAnimRig_Egretflower


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Egretflower::getAttackAnimationName() */

void PlantAnimRig_Egretflower::getAttackAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(int *)(in_x0 + 0x3b8) == 1) {
    __s = "attack2";
  }
  else {
    __s = "attack";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_Egretflower::~PlantAnimRig_Egretflower() */

void __thiscall PlantAnimRig_Egretflower::~PlantAnimRig_Egretflower(PlantAnimRig_Egretflower *this)

{
  *(undefined ***)this = &PTR_GetClass_0681d500;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Egretflower_0681d768;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Egretflower::~PlantAnimRig_Egretflower() */

void __thiscall PlantAnimRig_Egretflower::~PlantAnimRig_Egretflower(PlantAnimRig_Egretflower *this)

{
  ~PlantAnimRig_Egretflower(this + -0x10);
  return;
}


/* PlantAnimRig_Egretflower::~PlantAnimRig_Egretflower() */

void __thiscall PlantAnimRig_Egretflower::~PlantAnimRig_Egretflower(PlantAnimRig_Egretflower *this)

{
  ~PlantAnimRig_Egretflower(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Egretflower::~PlantAnimRig_Egretflower() */

void __thiscall PlantAnimRig_Egretflower::~PlantAnimRig_Egretflower(PlantAnimRig_Egretflower *this)

{
  ~PlantAnimRig_Egretflower(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Egretflower::StaticClassInit() */

void PlantAnimRig_Egretflower::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Egretflower");
    (*pcVar2)(plVar1,asStack_10,FUN_04262670,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Egretflower::StaticGetClass() */

long * PlantAnimRig_Egretflower::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Egretflower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Egretflower::GetClass() const */

long * PlantAnimRig_Egretflower::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Egretflower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Egretflower::PlantAnimRig_Egretflower() */

void __thiscall PlantAnimRig_Egretflower::PlantAnimRig_Egretflower(PlantAnimRig_Egretflower *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined4 *)(this + 0x3b8) = 0;
  *(undefined ***)this = &PTR_GetClass_0681d500;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Egretflower_0681d768;
  return;
}


/* PlantAnimRig_Egretflower::StaticNew() */

PlantAnimRig_Egretflower * PlantAnimRig_Egretflower::StaticNew(void)

{
  PlantAnimRig_Egretflower *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_Egretflower(this);
  return this;
}


/* PlantAnimRig_Egretflower::onAnimStopped() */

void __thiscall PlantAnimRig_Egretflower::onAnimStopped(PlantAnimRig_Egretflower *this)

{
  char cVar1;
  int iVar2;
  RtInvokeVariant *pRVar3;
  
  *(int *)(this + 0x21c) = *(int *)(this + 0x21c) + 1;
  switch(*(int *)(this + 0x218)) {
  case 3:
    PlantAnimRig::onPlantfoodLooped((PlantAnimRig *)this);
    cVar1 = (**(code **)(*(long *)this + 400))(this);
    if (cVar1 != '\0') {
      iVar2 = ::RtReflectionDelegate::operator_cast_to_int((RtReflectionDelegate *)(this + 0x298));
      if (iVar2 != 0) {
        pRVar3 = (RtInvokeVariant *)
                 RtReflectionDelegate<Sexy::Delegate0>::GetDelegate
                           ((RtReflectionDelegate<Sexy::Delegate0> *)(this + 0x298));
        Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn(pRVar3);
      }
      *(undefined4 *)(this + 0x218) = 4;
    }
    break;
  case 4:
    iVar2 = *(int *)(this + 0x228);
    if (0 < iVar2) {
      *(int *)(this + 0x228) = iVar2 + -1;
      PlantAnimRig::onPlantfoodLooped((PlantAnimRig *)this);
      iVar2 = *(int *)(this + 0x228);
    }
    if ((iVar2 < 1) && (iVar2 != -1)) {
      *(undefined4 *)(this + 0x218) = 0;
      iVar2 = ::RtReflectionDelegate::operator_cast_to_int((RtReflectionDelegate *)(this + 0x328));
      if (iVar2 != 0) {
        pRVar3 = (RtInvokeVariant *)
                 RtReflectionDelegate<Sexy::Delegate0>::GetDelegate
                           ((RtReflectionDelegate<Sexy::Delegate0> *)(this + 0x328));
        Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn(pRVar3);
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
    nop();
    return;
  case 10:
    break;
  case 0xc:
    (**(code **)(*(long *)this + 0x180))(this);
    nop();
    return;
  }
  nop();
  return;
}

