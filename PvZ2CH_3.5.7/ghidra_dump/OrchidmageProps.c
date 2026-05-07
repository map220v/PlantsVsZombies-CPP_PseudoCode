// Class: OrchidmageProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OrchidmageProps::StaticClassInit() */

void OrchidmageProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"OrchidmageProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03465478,0x2f8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* OrchidmageProps::StaticGetClass() */

long * OrchidmageProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"OrchidmageProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* OrchidmageProps::GetClass() const */

long * OrchidmageProps::GetClass(void)

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
  (*pcVar3)(plVar1,"OrchidmageProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* OrchidmageProps::OrchidmageProps() */

void __thiscall OrchidmageProps::OrchidmageProps(OrchidmageProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_06638b20;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x2c8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2e0));
  *(undefined4 *)(this + 0x2b8) = 4;
  *(undefined4 *)(this + 0x2c8) = 0;
  *(undefined4 *)(this + 0x2cc) = 0;
  *(undefined4 *)(this + 0x2c0) = 0x43610000;
  *(undefined4 *)(this + 0x2d0) = 0x41200000;
  *(undefined4 *)(this + 0x2c4) = 0x3e800000;
  *(undefined4 *)(this + 0x2d4) = 0x40800000;
  *(undefined4 *)(this + 700) = 0x43e10000;
  return;
}


/* OrchidmageProps::StaticNew() */

OrchidmageProps * OrchidmageProps::StaticNew(void)

{
  OrchidmageProps *this;
  
  this = ::operator_new(0x2f8);
  OrchidmageProps(this);
  return this;
}


/* OrchidmageProps::~OrchidmageProps() */

void __thiscall OrchidmageProps::~OrchidmageProps(OrchidmageProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06638b20;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x2e0));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* OrchidmageProps::~OrchidmageProps() */

void __thiscall OrchidmageProps::~OrchidmageProps(OrchidmageProps *this)

{
  ~OrchidmageProps(this);
  AK::FreeHook(this);
  return;
}

