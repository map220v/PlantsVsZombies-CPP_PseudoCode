// Class: ThymeWarpProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ThymeWarpProps::StaticClassInit() */

void ThymeWarpProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ThymeWarpProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04173d54,0x2f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ThymeWarpProps::StaticGetClass() */

long * ThymeWarpProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ThymeWarpProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ThymeWarpProps::GetClass() const */

long * ThymeWarpProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ThymeWarpProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ThymeWarpProps::ThymeWarpProps() */

void __thiscall ThymeWarpProps::ThymeWarpProps(ThymeWarpProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2c8) = 5;
  *(undefined ***)this = &PTR_GetClass_067f5680;
  *(undefined4 *)(this + 0x2cc) = 1;
  *(undefined4 *)(this + 0x2b8) = 0;
  *(undefined4 *)(this + 700) = 0;
  *(undefined4 *)(this + 0x2c0) = 0;
  *(undefined4 *)(this + 0x2c4) = 0;
  *(undefined4 *)(this + 0x2d0) = 0x3f19999a;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2d8));
  return;
}


/* ThymeWarpProps::StaticNew() */

ThymeWarpProps * ThymeWarpProps::StaticNew(void)

{
  ThymeWarpProps *this;
  
  this = ::operator_new(0x2f0);
  ThymeWarpProps(this);
  return this;
}


/* ThymeWarpProps::~ThymeWarpProps() */

void __thiscall ThymeWarpProps::~ThymeWarpProps(ThymeWarpProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067f5680;
  std::vector<ZombieConditions,std::allocator<ZombieConditions>>::~vector
            ((vector<ZombieConditions,std::allocator<ZombieConditions>> *)(this + 0x2d8));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* ThymeWarpProps::~ThymeWarpProps() */

void __thiscall ThymeWarpProps::~ThymeWarpProps(ThymeWarpProps *this)

{
  ~ThymeWarpProps(this);
  AK::FreeHook(this);
  return;
}

