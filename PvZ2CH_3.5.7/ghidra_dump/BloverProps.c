// Class: BloverProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BloverProps::StaticClassInit() */

void BloverProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"BloverProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03f91d38,0x2c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BloverProps::BloverProps() */

void __thiscall BloverProps::BloverProps(BloverProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067a3e80;
  *(undefined4 *)(this + 0x2b8) = 0x42c80000;
  *(undefined4 *)(this + 700) = 0;
  return;
}


/* BloverProps::StaticNew() */

BloverProps * BloverProps::StaticNew(void)

{
  BloverProps *this;
  
  this = ::operator_new(0x2c0);
  BloverProps(this);
  return this;
}


/* BloverProps::~BloverProps() */

void __thiscall BloverProps::~BloverProps(BloverProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067a3e80;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* BloverProps::~BloverProps() */

void __thiscall BloverProps::~BloverProps(BloverProps *this)

{
  ~BloverProps(this);
  AK::FreeHook(this);
  return;
}


/* BloverProps::StaticGetClass() */

long * BloverProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BloverProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BloverProps::GetClass() const */

long * BloverProps::GetClass(void)

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
  (*pcVar3)(plVar1,"BloverProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

