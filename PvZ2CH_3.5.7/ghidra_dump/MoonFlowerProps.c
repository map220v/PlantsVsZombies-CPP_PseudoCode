// Class: MoonFlowerProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MoonFlowerProps::StaticClassInit() */

void MoonFlowerProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"MoonFlowerProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0404bd08,0x390,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MoonFlowerProps::StaticGetClass() */

long * MoonFlowerProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MoonFlowerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MoonFlowerProps::GetClass() const */

long * MoonFlowerProps::GetClass(void)

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
  (*pcVar3)(plVar1,"MoonFlowerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MoonFlowerProps::MoonFlowerProps() */

void __thiscall MoonFlowerProps::MoonFlowerProps(MoonFlowerProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067bee30;
  ComponentConditionRadiusProps::ComponentConditionRadiusProps
            ((ComponentConditionRadiusProps *)(this + 0x2b8));
  *(undefined4 *)(this + 0x358) = 0;
  *(undefined4 *)(this + 0x35c) = 0;
  PlantRestrictionSet::PlantRestrictionSet((PlantRestrictionSet *)(this + 0x368));
  return;
}


/* MoonFlowerProps::StaticNew() */

MoonFlowerProps * MoonFlowerProps::StaticNew(void)

{
  MoonFlowerProps *this;
  
  this = ::operator_new(0x390);
  MoonFlowerProps(this);
  return this;
}


/* MoonFlowerProps::~MoonFlowerProps() */

void __thiscall MoonFlowerProps::~MoonFlowerProps(MoonFlowerProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067bee30;
  PlantRestrictionSet::~PlantRestrictionSet((PlantRestrictionSet *)(this + 0x368));
  ComponentConditionRadiusProps::~ComponentConditionRadiusProps
            ((ComponentConditionRadiusProps *)(this + 0x2b8));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* MoonFlowerProps::~MoonFlowerProps() */

void __thiscall MoonFlowerProps::~MoonFlowerProps(MoonFlowerProps *this)

{
  ~MoonFlowerProps(this);
  AK::FreeHook(this);
  return;
}

