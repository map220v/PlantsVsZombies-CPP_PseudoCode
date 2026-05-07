// Class: PlantAloesProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAloesProps::StaticClassInit() */

void PlantAloesProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAloesProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04cc0c70,0x2c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAloesProps::StaticGetClass() */

long * PlantAloesProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAloesProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAloesProps::GetClass() const */

long * PlantAloesProps::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAloesProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAloesProps::PlantAloesProps() */

void __thiscall PlantAloesProps::PlantAloesProps(PlantAloesProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2b8) = 0x3d4ccccd;
  *(undefined ***)this = &PTR_GetClass_0699b6c0;
  *(undefined4 *)(this + 700) = 0x41200000;
  *(undefined4 *)(this + 0x2c0) = 0x3dcccccd;
  return;
}


/* PlantAloesProps::StaticNew() */

PlantAloesProps * PlantAloesProps::StaticNew(void)

{
  PlantAloesProps *this;
  
  this = ::operator_new(0x2c8);
  PlantAloesProps(this);
  return this;
}


/* PlantAloesProps::~PlantAloesProps() */

void __thiscall PlantAloesProps::~PlantAloesProps(PlantAloesProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0699b6c0;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* PlantAloesProps::~PlantAloesProps() */

void __thiscall PlantAloesProps::~PlantAloesProps(PlantAloesProps *this)

{
  ~PlantAloesProps(this);
  AK::FreeHook(this);
  return;
}

