// Class: ByttneriaMeteorHammerProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ByttneriaMeteorHammerProps::StaticClassInit() */

void ByttneriaMeteorHammerProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ByttneriaMeteorHammerProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03b2c2b4,0x2d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ByttneriaMeteorHammerProps::StaticGetClass() */

long * ByttneriaMeteorHammerProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ByttneriaMeteorHammerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ByttneriaMeteorHammerProps::GetClass() const */

long * ByttneriaMeteorHammerProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ByttneriaMeteorHammerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ByttneriaMeteorHammerProps::ByttneriaMeteorHammerProps() */

void __thiscall
ByttneriaMeteorHammerProps::ByttneriaMeteorHammerProps(ByttneriaMeteorHammerProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2b8) = 0x41200000;
  *(undefined ***)this = &PTR_GetClass_0672e940;
  *(undefined4 *)(this + 0x2c8) = 0x44160000;
  *(undefined4 *)(this + 700) = 0x41100000;
  *(undefined4 *)(this + 0x2c4) = 0x42480000;
  *(undefined4 *)(this + 0x2c0) = 0x41000000;
  *(undefined4 *)(this + 0x2d0) = 0x44160000;
  *(undefined4 *)(this + 0x2cc) = 0x44480000;
  *(undefined4 *)(this + 0x2d4) = 0x40000000;
  return;
}


/* ByttneriaMeteorHammerProps::StaticNew() */

ByttneriaMeteorHammerProps * ByttneriaMeteorHammerProps::StaticNew(void)

{
  ByttneriaMeteorHammerProps *this;
  
  this = ::operator_new(0x2d8);
  ByttneriaMeteorHammerProps(this);
  return this;
}


/* ByttneriaMeteorHammerProps::~ByttneriaMeteorHammerProps() */

void __thiscall
ByttneriaMeteorHammerProps::~ByttneriaMeteorHammerProps(ByttneriaMeteorHammerProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0672e940;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* ByttneriaMeteorHammerProps::~ByttneriaMeteorHammerProps() */

void __thiscall
ByttneriaMeteorHammerProps::~ByttneriaMeteorHammerProps(ByttneriaMeteorHammerProps *this)

{
  ~ByttneriaMeteorHammerProps(this);
  AK::FreeHook(this);
  return;
}

