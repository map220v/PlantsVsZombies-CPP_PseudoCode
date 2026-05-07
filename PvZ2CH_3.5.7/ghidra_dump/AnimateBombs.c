// Class: AnimateBombs


/* AnimateBombs::~AnimateBombs() */

void __thiscall AnimateBombs::~AnimateBombs(AnimateBombs *this)

{
  *(undefined ***)this = &PTR_GetClass_06732720;
  AnimationController::~AnimationController((AnimationController *)this);
  return;
}


/* AnimateBombs::~AnimateBombs() */

void __thiscall AnimateBombs::~AnimateBombs(AnimateBombs *this)

{
  ~AnimateBombs(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimateBombs::StaticClassInit() */

void AnimateBombs::StaticClassInit(void)

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
    std::string::string(asStack_10,"AnimateBombs");
    (*pcVar2)(plVar1,asStack_10,FUN_03b4dad0,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AnimateBombs::StaticGetClass() */

long * AnimateBombs::StaticGetClass(void)

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
  uVar2 = AnimationController::StaticGetClass();
  (*pcVar3)(plVar1,"AnimateBombs",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AnimateBombs::GetClass() const */

long * AnimateBombs::GetClass(void)

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
  uVar2 = AnimationController::StaticGetClass();
  (*pcVar3)(plVar1,"AnimateBombs",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AnimateBombs::AnimateBombs() */

void __thiscall AnimateBombs::AnimateBombs(AnimateBombs *this)

{
  AnimationController::AnimationController((AnimationController *)this,0.0,true);
  *(undefined ***)this = &PTR_GetClass_06732720;
  return;
}


/* AnimateBombs::StaticNew() */

AnimateBombs * AnimateBombs::StaticNew(void)

{
  AnimateBombs *this;
  
  this = ::operator_new(0x28);
  AnimateBombs(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimateBombs::Update(float) */

void __thiscall AnimateBombs::Update(AnimateBombs *this,float param_1)

{
  int iVar1;
  float fVar2;
  char cVar3;
  Bomb *pBVar4;
  undefined8 extraout_x1;
  undefined8 uVar5;
  undefined8 extraout_x1_00;
  int iVar6;
  float fVar7;
  
  fVar7 = (float)FUN_03b4cd90(*(undefined4 *)(this + 0x10));
  fVar2 = _FUN_03b4fb98;
  uVar5 = extraout_x1;
  for (iVar6 = 0; iVar1 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc), iVar6 < iVar1;
      iVar6 = iVar6 + 1) {
    pBVar4 = (Bomb *)FUN_03b4f9f4(iVar6,uVar5);
    uVar5 = 0;
    if (pBVar4 != (Bomb *)0x0) {
      cVar3 = Bomb::isInState();
      uVar5 = 1;
      if ((cVar3 != '\0') && (fVar7 + fVar2 * (float)(iVar1 - iVar6) <= param_1)) {
        Bomb::setState(pBVar4);
        uVar5 = extraout_x1_00;
      }
    }
  }
  return;
}

