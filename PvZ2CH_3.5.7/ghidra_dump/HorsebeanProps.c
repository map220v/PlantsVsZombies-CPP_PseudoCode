// Class: HorsebeanProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HorsebeanProps::StaticClassInit() */

void HorsebeanProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"HorsebeanProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04223428,0x2d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HorsebeanProps::StaticGetClass() */

long * HorsebeanProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HorsebeanProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HorsebeanProps::GetClass() const */

long * HorsebeanProps::GetClass(void)

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
  (*pcVar3)(plVar1,"HorsebeanProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HorsebeanProps::HorsebeanProps() */

void __thiscall HorsebeanProps::HorsebeanProps(HorsebeanProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2c4) = 0x41a00000;
  *(undefined4 *)(this + 0x2b8) = 3;
  *(undefined ***)this = &PTR_GetClass_0680eee0;
  *(undefined4 *)(this + 700) = 6;
  *(undefined4 *)(this + 0x2c8) = 0x41700000;
  *(undefined4 *)(this + 0x2c0) = 0x42700000;
  *(undefined4 *)(this + 0x2cc) = 0x41200000;
  return;
}


/* HorsebeanProps::StaticNew() */

HorsebeanProps * HorsebeanProps::StaticNew(void)

{
  HorsebeanProps *this;
  
  this = ::operator_new(0x2d0);
  HorsebeanProps(this);
  return this;
}


/* HorsebeanProps::~HorsebeanProps() */

void __thiscall HorsebeanProps::~HorsebeanProps(HorsebeanProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0680eee0;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* HorsebeanProps::~HorsebeanProps() */

void __thiscall HorsebeanProps::~HorsebeanProps(HorsebeanProps *this)

{
  ~HorsebeanProps(this);
  AK::FreeHook(this);
  return;
}

