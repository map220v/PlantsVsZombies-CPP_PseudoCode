// Class: HomingThistleProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HomingThistleProps::StaticClassInit() */

void HomingThistleProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"HomingThistleProps");
    (*pcVar2)(plVar1,asStack_10,FUN_041e4478,0x2d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HomingThistleProps::StaticGetClass() */

long * HomingThistleProps::StaticGetClass(void)

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
  uVar2 = PlantPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"HomingThistleProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HomingThistleProps::GetClass() const */

long * HomingThistleProps::GetClass(void)

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
  uVar2 = PlantPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"HomingThistleProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HomingThistleProps::HomingThistleProps() */

void __thiscall HomingThistleProps::HomingThistleProps(HomingThistleProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2b8) = 10;
  *(undefined ***)this = &PTR_GetClass_06803b70;
  *(undefined4 *)(this + 0x2c0) = 0xfffffff8;
  *(undefined4 *)(this + 700) = 5;
  *(undefined4 *)(this + 0x2c4) = 0xfffffffc;
  *(undefined4 *)(this + 0x2c8) = 0xf;
  return;
}


/* HomingThistleProps::StaticNew() */

HomingThistleProps * HomingThistleProps::StaticNew(void)

{
  HomingThistleProps *this;
  
  this = ::operator_new(0x2d0);
  HomingThistleProps(this);
  return this;
}


/* HomingThistleProps::~HomingThistleProps() */

void __thiscall HomingThistleProps::~HomingThistleProps(HomingThistleProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06803b70;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* HomingThistleProps::~HomingThistleProps() */

void __thiscall HomingThistleProps::~HomingThistleProps(HomingThistleProps *this)

{
  ~HomingThistleProps(this);
  AK::FreeHook(this);
  return;
}

