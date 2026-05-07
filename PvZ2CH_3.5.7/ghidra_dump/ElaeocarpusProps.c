// Class: ElaeocarpusProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElaeocarpusProps::StaticClassInit() */

void ElaeocarpusProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ElaeocarpusProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04259160,0x2d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ElaeocarpusProps::StaticGetClass() */

long * ElaeocarpusProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ElaeocarpusProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ElaeocarpusProps::GetClass() const */

long * ElaeocarpusProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ElaeocarpusProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ElaeocarpusProps::ElaeocarpusProps() */

void __thiscall ElaeocarpusProps::ElaeocarpusProps(ElaeocarpusProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 700) = 0x41200000;
  *(undefined ***)this = &PTR_GetClass_0681afa0;
  *(undefined4 *)(this + 0x2c8) = 0x3f99999a;
  *(undefined4 *)(this + 0x2cc) = 0x43af0000;
  *(undefined4 *)(this + 0x2c0) = 0x3dcccccd;
  *(undefined4 *)(this + 0x2c4) = 0x3e4ccccd;
  *(undefined4 *)(this + 0x2b8) = 0x42480000;
  return;
}


/* ElaeocarpusProps::StaticNew() */

ElaeocarpusProps * ElaeocarpusProps::StaticNew(void)

{
  ElaeocarpusProps *this;
  
  this = ::operator_new(0x2d0);
  ElaeocarpusProps(this);
  return this;
}


/* ElaeocarpusProps::~ElaeocarpusProps() */

void __thiscall ElaeocarpusProps::~ElaeocarpusProps(ElaeocarpusProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0681afa0;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* ElaeocarpusProps::~ElaeocarpusProps() */

void __thiscall ElaeocarpusProps::~ElaeocarpusProps(ElaeocarpusProps *this)

{
  ~ElaeocarpusProps(this);
  AK::FreeHook(this);
  return;
}

