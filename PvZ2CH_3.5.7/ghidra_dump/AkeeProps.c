// Class: AkeeProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AkeeProps::StaticClassInit() */

void AkeeProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"AkeeProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0410f0f8,0x2c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AkeeProps::StaticGetClass() */

long * AkeeProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AkeeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AkeeProps::GetClass() const */

long * AkeeProps::GetClass(void)

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
  (*pcVar3)(plVar1,"AkeeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AkeeProps::AkeeProps() */

void __thiscall AkeeProps::AkeeProps(AkeeProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 700) = 0x3f99999a;
  *(undefined4 *)(this + 0x2b8) = 0;
  *(undefined ***)this = &PTR_GetClass_067e5590;
  *(undefined4 *)(this + 0x2c0) = 0x43af0000;
  return;
}


/* AkeeProps::StaticNew() */

AkeeProps * AkeeProps::StaticNew(void)

{
  AkeeProps *this;
  
  this = ::operator_new(0x2c8);
  AkeeProps(this);
  return this;
}


/* AkeeProps::~AkeeProps() */

void __thiscall AkeeProps::~AkeeProps(AkeeProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067e5590;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* AkeeProps::~AkeeProps() */

void __thiscall AkeeProps::~AkeeProps(AkeeProps *this)

{
  ~AkeeProps(this);
  AK::FreeHook(this);
  return;
}

