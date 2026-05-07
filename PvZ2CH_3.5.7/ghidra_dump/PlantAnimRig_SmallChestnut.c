// Class: PlantAnimRig_SmallChestnut


/* PlantAnimRig_SmallChestnut::~PlantAnimRig_SmallChestnut() */

void __thiscall
PlantAnimRig_SmallChestnut::~PlantAnimRig_SmallChestnut(PlantAnimRig_SmallChestnut *this)

{
  *(undefined ***)this = &PTR_GetClass_067d9000;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_SmallChestnut_067d9268;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_SmallChestnut::~PlantAnimRig_SmallChestnut() */

void __thiscall
PlantAnimRig_SmallChestnut::~PlantAnimRig_SmallChestnut(PlantAnimRig_SmallChestnut *this)

{
  ~PlantAnimRig_SmallChestnut(this + -0x10);
  return;
}


/* PlantAnimRig_SmallChestnut::~PlantAnimRig_SmallChestnut() */

void __thiscall
PlantAnimRig_SmallChestnut::~PlantAnimRig_SmallChestnut(PlantAnimRig_SmallChestnut *this)

{
  ~PlantAnimRig_SmallChestnut(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_SmallChestnut::~PlantAnimRig_SmallChestnut() */

void __thiscall
PlantAnimRig_SmallChestnut::~PlantAnimRig_SmallChestnut(PlantAnimRig_SmallChestnut *this)

{
  ~PlantAnimRig_SmallChestnut(this + -0x10);
  return;
}


/* PlantAnimRig_SmallChestnut::PlantAnimRig_SmallChestnut() */

void __thiscall
PlantAnimRig_SmallChestnut::PlantAnimRig_SmallChestnut(PlantAnimRig_SmallChestnut *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067d9000;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_SmallChestnut_067d9268;
  return;
}


/* PlantAnimRig_SmallChestnut::StaticNew() */

PlantAnimRig_SmallChestnut * PlantAnimRig_SmallChestnut::StaticNew(void)

{
  PlantAnimRig_SmallChestnut *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_SmallChestnut(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_SmallChestnut::StaticClassInit() */

void PlantAnimRig_SmallChestnut::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_SmallChestnut");
    (*pcVar2)(plVar1,asStack_10,FUN_040c6660,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_SmallChestnut::StaticGetClass() */

long * PlantAnimRig_SmallChestnut::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_SmallChestnut",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_SmallChestnut::GetClass() const */

long * PlantAnimRig_SmallChestnut::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_SmallChestnut",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_SmallChestnut::PlayRunLooped() */

void __thiscall PlantAnimRig_SmallChestnut::PlayRunLooped(PlantAnimRig_SmallChestnut *this)

{
  long lVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"walk");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x218) = 0xe;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

