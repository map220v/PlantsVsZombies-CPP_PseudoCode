// Class: PlantAnimRig_BirthSunflower


/* PlantAnimRig_BirthSunflower::~PlantAnimRig_BirthSunflower() */

void __thiscall
PlantAnimRig_BirthSunflower::~PlantAnimRig_BirthSunflower(PlantAnimRig_BirthSunflower *this)

{
  *(undefined ***)this = &PTR_GetClass_067dcda0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_BirthSunflower_067dd008;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_BirthSunflower::~PlantAnimRig_BirthSunflower() */

void __thiscall
PlantAnimRig_BirthSunflower::~PlantAnimRig_BirthSunflower(PlantAnimRig_BirthSunflower *this)

{
  ~PlantAnimRig_BirthSunflower(this + -0x10);
  return;
}


/* PlantAnimRig_BirthSunflower::~PlantAnimRig_BirthSunflower() */

void __thiscall
PlantAnimRig_BirthSunflower::~PlantAnimRig_BirthSunflower(PlantAnimRig_BirthSunflower *this)

{
  ~PlantAnimRig_BirthSunflower(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_BirthSunflower::~PlantAnimRig_BirthSunflower() */

void __thiscall
PlantAnimRig_BirthSunflower::~PlantAnimRig_BirthSunflower(PlantAnimRig_BirthSunflower *this)

{
  ~PlantAnimRig_BirthSunflower(this + -0x10);
  return;
}


/* PlantAnimRig_BirthSunflower::PlantAnimRig_BirthSunflower() */

void __thiscall
PlantAnimRig_BirthSunflower::PlantAnimRig_BirthSunflower(PlantAnimRig_BirthSunflower *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067dcda0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_BirthSunflower_067dd008;
  return;
}


/* PlantAnimRig_BirthSunflower::StaticNew() */

PlantAnimRig_BirthSunflower * PlantAnimRig_BirthSunflower::StaticNew(void)

{
  PlantAnimRig_BirthSunflower *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_BirthSunflower(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_BirthSunflower::StaticClassInit() */

void PlantAnimRig_BirthSunflower::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_BirthSunflower");
    (*pcVar2)(plVar1,asStack_10,FUN_040dc790,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_BirthSunflower::StaticGetClass() */

long * PlantAnimRig_BirthSunflower::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_BirthSunflower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_BirthSunflower::GetClass() const */

long * PlantAnimRig_BirthSunflower::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_BirthSunflower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_BirthSunflower::PlaySing() */

void __thiscall PlantAnimRig_BirthSunflower::PlaySing(PlantAnimRig_BirthSunflower *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"special");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
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
/* PlantAnimRig_BirthSunflower::PlayAccompaniment() */

void __thiscall PlantAnimRig_BirthSunflower::PlayAccompaniment(PlantAnimRig_BirthSunflower *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"plantfood2");
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


/* PlantAnimRig_BirthSunflower::onAnimStopped() */

void __thiscall PlantAnimRig_BirthSunflower::onAnimStopped(PlantAnimRig_BirthSunflower *this)

{
  PlantAnimRig::onAnimStopped((PlantAnimRig *)this);
  if (*(int *)(this + 0x218) - 0xeU < 2) {
    (**(code **)(*(long *)this + 0x118))(this);
  }
  return;
}

