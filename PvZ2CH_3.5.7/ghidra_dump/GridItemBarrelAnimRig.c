// Class: GridItemBarrelAnimRig


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBarrelAnimRig::PlayRoll() */

void __thiscall GridItemBarrelAnimRig::PlayRoll(GridItemBarrelAnimRig *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"roll");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemBarrelAnimRig::~GridItemBarrelAnimRig() */

void __thiscall GridItemBarrelAnimRig::~GridItemBarrelAnimRig(GridItemBarrelAnimRig *this)

{
  *(undefined ***)this = &PTR_GetClass_06992370;
  *(undefined ***)(this + 0x10) = &PTR__GridItemBarrelAnimRig_06992490;
  PopAnimRig::~PopAnimRig((PopAnimRig *)this);
  return;
}


/* non-virtual thunk to GridItemBarrelAnimRig::~GridItemBarrelAnimRig() */

void __thiscall GridItemBarrelAnimRig::~GridItemBarrelAnimRig(GridItemBarrelAnimRig *this)

{
  ~GridItemBarrelAnimRig(this + -0x10);
  return;
}


/* GridItemBarrelAnimRig::~GridItemBarrelAnimRig() */

void __thiscall GridItemBarrelAnimRig::~GridItemBarrelAnimRig(GridItemBarrelAnimRig *this)

{
  ~GridItemBarrelAnimRig(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemBarrelAnimRig::~GridItemBarrelAnimRig() */

void __thiscall GridItemBarrelAnimRig::~GridItemBarrelAnimRig(GridItemBarrelAnimRig *this)

{
  ~GridItemBarrelAnimRig(this + -0x10);
  return;
}


/* GridItemBarrelAnimRig::GridItemBarrelAnimRig() */

void __thiscall GridItemBarrelAnimRig::GridItemBarrelAnimRig(GridItemBarrelAnimRig *this)

{
  PopAnimRig::PopAnimRig((PopAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06992370;
  *(undefined ***)(this + 0x10) = &PTR__GridItemBarrelAnimRig_06992490;
  return;
}


/* GridItemBarrelAnimRig::StaticNew() */

GridItemBarrelAnimRig * GridItemBarrelAnimRig::StaticNew(void)

{
  GridItemBarrelAnimRig *this;
  
  this = ::operator_new(0x210);
  GridItemBarrelAnimRig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBarrelAnimRig::StaticClassInit() */

void GridItemBarrelAnimRig::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemBarrelAnimRig");
    (*pcVar2)(plVar1,asStack_10,FUN_04c77814,0x210,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemBarrelAnimRig::StaticGetClass() */

long * GridItemBarrelAnimRig::StaticGetClass(void)

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
  uVar2 = PopAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemBarrelAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemBarrelAnimRig::GetClass() const */

long * GridItemBarrelAnimRig::GetClass(void)

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
  uVar2 = PopAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemBarrelAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

