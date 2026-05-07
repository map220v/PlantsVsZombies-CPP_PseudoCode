// Class: AgaveProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AgaveProps::StaticClassInit() */

void AgaveProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"AgaveProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03f9862c,0x2c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AgaveProps::AgaveProps() */

void __thiscall AgaveProps::AgaveProps(AgaveProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 700) = 0x40400000;
  *(undefined ***)this = &PTR_GetClass_067a55a0;
  *(undefined4 *)(this + 0x2b8) = 0x3f99999a;
  *(undefined4 *)(this + 0x2c0) = 0x3fc00000;
  return;
}


/* AgaveProps::StaticNew() */

AgaveProps * AgaveProps::StaticNew(void)

{
  AgaveProps *this;
  
  this = ::operator_new(0x2c8);
  AgaveProps(this);
  return this;
}


/* AgaveProps::~AgaveProps() */

void __thiscall AgaveProps::~AgaveProps(AgaveProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067a55a0;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* AgaveProps::~AgaveProps() */

void __thiscall AgaveProps::~AgaveProps(AgaveProps *this)

{
  ~AgaveProps(this);
  AK::FreeHook(this);
  return;
}


/* AgaveProps::StaticGetClass() */

long * AgaveProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AgaveProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AgaveProps::GetClass() const */

long * AgaveProps::GetClass(void)

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
  (*pcVar3)(plVar1,"AgaveProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

