// Class: PlantAnimRig_Sunflower


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Sunflower::getSpecialAnimName() */

void __thiscall PlantAnimRig_Sunflower::getSpecialAnimName(PlantAnimRig_Sunflower *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"special");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_Sunflower::~PlantAnimRig_Sunflower() */

void __thiscall PlantAnimRig_Sunflower::~PlantAnimRig_Sunflower(PlantAnimRig_Sunflower *this)

{
  *(undefined ***)this = &PTR_GetClass_0679d820;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Sunflower_0679daa0;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Sunflower::~PlantAnimRig_Sunflower() */

void __thiscall PlantAnimRig_Sunflower::~PlantAnimRig_Sunflower(PlantAnimRig_Sunflower *this)

{
  ~PlantAnimRig_Sunflower(this + -0x10);
  return;
}


/* PlantAnimRig_Sunflower::~PlantAnimRig_Sunflower() */

void __thiscall PlantAnimRig_Sunflower::~PlantAnimRig_Sunflower(PlantAnimRig_Sunflower *this)

{
  ~PlantAnimRig_Sunflower(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Sunflower::~PlantAnimRig_Sunflower() */

void __thiscall PlantAnimRig_Sunflower::~PlantAnimRig_Sunflower(PlantAnimRig_Sunflower *this)

{
  ~PlantAnimRig_Sunflower(this + -0x10);
  return;
}


/* PlantAnimRig_Sunflower::PlantAnimRig_Sunflower() */

void __thiscall PlantAnimRig_Sunflower::PlantAnimRig_Sunflower(PlantAnimRig_Sunflower *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0679d820;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Sunflower_0679daa0;
  return;
}


/* PlantAnimRig_Sunflower::StaticNew() */

PlantAnimRig_Sunflower * PlantAnimRig_Sunflower::StaticNew(void)

{
  PlantAnimRig_Sunflower *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_Sunflower(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Sunflower::StaticClassInit() */

void PlantAnimRig_Sunflower::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Sunflower");
    (*pcVar2)(plVar1,asStack_10,FUN_03f5e850,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Sunflower::StaticGetClass() */

long * PlantAnimRig_Sunflower::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Sunflower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Sunflower::GetClass() const */

long * PlantAnimRig_Sunflower::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Sunflower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Sunflower::PlaySunSpawn() */

void __thiscall PlantAnimRig_Sunflower::PlaySunSpawn(PlantAnimRig_Sunflower *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x268))(asStack_40);
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 0xe;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Sunflower::PlayGoToSleep() */

void __thiscall PlantAnimRig_Sunflower::PlayGoToSleep(PlantAnimRig_Sunflower *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"sleep");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 0xf;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Sunflower::onAnimStopped() */

void __thiscall PlantAnimRig_Sunflower::onAnimStopped(PlantAnimRig_Sunflower *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x218) == 0xe) {
    (**(code **)(*(long *)this + 0x118))();
  }
  else if (*(int *)(this + 0x218) == 0xf) {
    std::string::string(asStack_40,"sleep2");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    *(undefined4 *)(this + 0x218) = 0x10;
  }
  else {
    PlantAnimRig::onAnimStopped((PlantAnimRig *)this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

