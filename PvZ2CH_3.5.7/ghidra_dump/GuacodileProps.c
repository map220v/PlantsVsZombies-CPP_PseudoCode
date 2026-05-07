// Class: GuacodileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GuacodileProps::StaticClassInit() */

void GuacodileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GuacodileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03f979c4,0x2b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GuacodileProps::GuacodileProps() */

void __thiscall GuacodileProps::GuacodileProps(GuacodileProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067a5280;
  return;
}


/* GuacodileProps::StaticNew() */

GuacodileProps * GuacodileProps::StaticNew(void)

{
  GuacodileProps *this;
  
  this = ::operator_new(0x2b8);
  GuacodileProps(this);
  return this;
}


/* GuacodileProps::~GuacodileProps() */

void __thiscall GuacodileProps::~GuacodileProps(GuacodileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067a5280;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* GuacodileProps::~GuacodileProps() */

void __thiscall GuacodileProps::~GuacodileProps(GuacodileProps *this)

{
  ~GuacodileProps(this);
  AK::FreeHook(this);
  return;
}


/* GuacodileProps::StaticGetClass() */

long * GuacodileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GuacodileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GuacodileProps::GetClass() const */

long * GuacodileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GuacodileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

