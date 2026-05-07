// Class: PlantAnimRig_FireGourd


/* PlantAnimRig_FireGourd::~PlantAnimRig_FireGourd() */

void __thiscall PlantAnimRig_FireGourd::~PlantAnimRig_FireGourd(PlantAnimRig_FireGourd *this)

{
  *(undefined ***)this = &PTR_GetClass_0679eb20;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_FireGourd_0679ed88;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_FireGourd::~PlantAnimRig_FireGourd() */

void __thiscall PlantAnimRig_FireGourd::~PlantAnimRig_FireGourd(PlantAnimRig_FireGourd *this)

{
  ~PlantAnimRig_FireGourd(this + -0x10);
  return;
}


/* PlantAnimRig_FireGourd::~PlantAnimRig_FireGourd() */

void __thiscall PlantAnimRig_FireGourd::~PlantAnimRig_FireGourd(PlantAnimRig_FireGourd *this)

{
  ~PlantAnimRig_FireGourd(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_FireGourd::~PlantAnimRig_FireGourd() */

void __thiscall PlantAnimRig_FireGourd::~PlantAnimRig_FireGourd(PlantAnimRig_FireGourd *this)

{
  ~PlantAnimRig_FireGourd(this + -0x10);
  return;
}


/* PlantAnimRig_FireGourd::PlantAnimRig_FireGourd() */

void __thiscall PlantAnimRig_FireGourd::PlantAnimRig_FireGourd(PlantAnimRig_FireGourd *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0679eb20;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_FireGourd_0679ed88;
  return;
}


/* PlantAnimRig_FireGourd::StaticNew() */

PlantAnimRig_FireGourd * PlantAnimRig_FireGourd::StaticNew(void)

{
  PlantAnimRig_FireGourd *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_FireGourd(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_FireGourd::StaticClassInit() */

void PlantAnimRig_FireGourd::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_FireGourd");
    (*pcVar2)(plVar1,asStack_10,FUN_03f61e10,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_FireGourd::StaticGetClass() */

long * PlantAnimRig_FireGourd::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_FireGourd",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_FireGourd::GetClass() const */

long * PlantAnimRig_FireGourd::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_FireGourd",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_FireGourd::PlayIdleLooped() */

void __thiscall PlantAnimRig_FireGourd::PlayIdleLooped(PlantAnimRig_FireGourd *this)

{
  long lVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"idle3");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x218) = 1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

