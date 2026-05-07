// Class: JackfruitPropertySheet


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JackfruitPropertySheet::StaticClassInit() */

void JackfruitPropertySheet::StaticClassInit(void)

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
    std::string::string(asStack_10,"JackfruitPropertySheet");
    (*pcVar2)(plVar1,asStack_10,FUN_049a9014,0x2c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JackfruitPropertySheet::StaticGetClass() */

long * JackfruitPropertySheet::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"JackfruitPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* JackfruitPropertySheet::GetClass() const */

long * JackfruitPropertySheet::GetClass(void)

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
  (*pcVar3)(plVar1,"JackfruitPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* JackfruitPropertySheet::JackfruitPropertySheet() */

void __thiscall JackfruitPropertySheet::JackfruitPropertySheet(JackfruitPropertySheet *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2c0) = 100;
  *(undefined ***)this = &PTR_GetClass_06924610;
  *(undefined4 *)(this + 0x2b8) = 0x42200000;
  *(undefined4 *)(this + 700) = 0x42200000;
  return;
}


/* JackfruitPropertySheet::StaticNew() */

JackfruitPropertySheet * JackfruitPropertySheet::StaticNew(void)

{
  JackfruitPropertySheet *this;
  
  this = ::operator_new(0x2c8);
  JackfruitPropertySheet(this);
  return this;
}


/* JackfruitPropertySheet::~JackfruitPropertySheet() */

void __thiscall JackfruitPropertySheet::~JackfruitPropertySheet(JackfruitPropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_06924610;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* JackfruitPropertySheet::~JackfruitPropertySheet() */

void __thiscall JackfruitPropertySheet::~JackfruitPropertySheet(JackfruitPropertySheet *this)

{
  ~JackfruitPropertySheet(this);
  AK::FreeHook(this);
  return;
}

