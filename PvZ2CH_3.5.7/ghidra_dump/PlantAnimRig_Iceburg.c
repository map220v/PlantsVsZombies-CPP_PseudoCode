// Class: PlantAnimRig_Iceburg


/* PlantAnimRig_Iceburg::~PlantAnimRig_Iceburg() */

void __thiscall PlantAnimRig_Iceburg::~PlantAnimRig_Iceburg(PlantAnimRig_Iceburg *this)

{
  *(undefined ***)this = &PTR_GetClass_0679edd0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Iceburg_0679f038;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Iceburg::~PlantAnimRig_Iceburg() */

void __thiscall PlantAnimRig_Iceburg::~PlantAnimRig_Iceburg(PlantAnimRig_Iceburg *this)

{
  ~PlantAnimRig_Iceburg(this + -0x10);
  return;
}


/* PlantAnimRig_Iceburg::~PlantAnimRig_Iceburg() */

void __thiscall PlantAnimRig_Iceburg::~PlantAnimRig_Iceburg(PlantAnimRig_Iceburg *this)

{
  ~PlantAnimRig_Iceburg(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Iceburg::~PlantAnimRig_Iceburg() */

void __thiscall PlantAnimRig_Iceburg::~PlantAnimRig_Iceburg(PlantAnimRig_Iceburg *this)

{
  ~PlantAnimRig_Iceburg(this + -0x10);
  return;
}


/* PlantAnimRig_Iceburg::PlantAnimRig_Iceburg() */

void __thiscall PlantAnimRig_Iceburg::PlantAnimRig_Iceburg(PlantAnimRig_Iceburg *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0679edd0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Iceburg_0679f038;
  return;
}


/* PlantAnimRig_Iceburg::StaticNew() */

PlantAnimRig_Iceburg * PlantAnimRig_Iceburg::StaticNew(void)

{
  PlantAnimRig_Iceburg *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_Iceburg(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Iceburg::StaticClassInit() */

void PlantAnimRig_Iceburg::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Iceburg");
    (*pcVar2)(plVar1,asStack_10,FUN_03f622a8,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Iceburg::StaticGetClass() */

long * PlantAnimRig_Iceburg::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Iceburg",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Iceburg::GetClass() const */

long * PlantAnimRig_Iceburg::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Iceburg",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Iceburg::PlayShootAnimation() */

void __thiscall PlantAnimRig_Iceburg::PlayShootAnimation(PlantAnimRig_Iceburg *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"attack_02");
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

