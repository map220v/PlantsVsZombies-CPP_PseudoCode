// Class: PlantAnimRig_SmallCactus


/* PlantAnimRig_SmallCactus::~PlantAnimRig_SmallCactus() */

void __thiscall PlantAnimRig_SmallCactus::~PlantAnimRig_SmallCactus(PlantAnimRig_SmallCactus *this)

{
  *(undefined ***)this = &PTR_GetClass_067f7a10;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_SmallCactus_067f7c78;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_SmallCactus::~PlantAnimRig_SmallCactus() */

void __thiscall PlantAnimRig_SmallCactus::~PlantAnimRig_SmallCactus(PlantAnimRig_SmallCactus *this)

{
  ~PlantAnimRig_SmallCactus(this + -0x10);
  return;
}


/* PlantAnimRig_SmallCactus::~PlantAnimRig_SmallCactus() */

void __thiscall PlantAnimRig_SmallCactus::~PlantAnimRig_SmallCactus(PlantAnimRig_SmallCactus *this)

{
  ~PlantAnimRig_SmallCactus(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_SmallCactus::~PlantAnimRig_SmallCactus() */

void __thiscall PlantAnimRig_SmallCactus::~PlantAnimRig_SmallCactus(PlantAnimRig_SmallCactus *this)

{
  ~PlantAnimRig_SmallCactus(this + -0x10);
  return;
}


/* PlantAnimRig_SmallCactus::PlantAnimRig_SmallCactus() */

void __thiscall PlantAnimRig_SmallCactus::PlantAnimRig_SmallCactus(PlantAnimRig_SmallCactus *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067f7a10;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_SmallCactus_067f7c78;
  return;
}


/* PlantAnimRig_SmallCactus::StaticNew() */

PlantAnimRig_SmallCactus * PlantAnimRig_SmallCactus::StaticNew(void)

{
  PlantAnimRig_SmallCactus *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_SmallCactus(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_SmallCactus::StaticClassInit() */

void PlantAnimRig_SmallCactus::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_SmallCactus");
    (*pcVar2)(plVar1,asStack_10,FUN_0417f500,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_SmallCactus::StaticGetClass() */

long * PlantAnimRig_SmallCactus::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_SmallCactus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_SmallCactus::GetClass() const */

long * PlantAnimRig_SmallCactus::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_SmallCactus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_SmallCactus::PlayOnceCommon(SMALLCACTUSANIMSTATE, std::string const&) */

void __thiscall
PlantAnimRig_SmallCactus::PlayOnceCommon
          (PlantAnimRig_SmallCactus *this,undefined4 param_2,undefined8 param_3)

{
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,param_3,0,aDStack_38);
  *(undefined4 *)(this + 0x218) = param_2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_SmallCactus::PlayUnderAttack() */

void __thiscall PlantAnimRig_SmallCactus::PlayUnderAttack(PlantAnimRig_SmallCactus *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x218) != 0x12) {
    std::string::string(asStack_10,"idle2");
    PlayOnceCommon(this,0x12,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_SmallCactus::PlayNormalRun() */

void __thiscall PlantAnimRig_SmallCactus::PlayNormalRun(PlantAnimRig_SmallCactus *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"idle1");
  PlantAnimRig_Jackfruit::PlayLoopCommon((PlantAnimRig_Jackfruit *)this,0xf,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_SmallCactus::onAnimStopped() */

void __thiscall PlantAnimRig_SmallCactus::onAnimStopped(PlantAnimRig_SmallCactus *this)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(this + 0x218);
  PlantAnimRig::onAnimStopped((PlantAnimRig *)this);
  switch(uVar1) {
  default:
    (**(code **)(*(long *)this + 0x118))(this);
    return;
  case 0xf:
    PlayNormalRun(this);
    return;
  }
}

