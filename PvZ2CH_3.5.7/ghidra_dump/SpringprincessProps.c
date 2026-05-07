// Class: SpringprincessProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringprincessProps::StaticClassInit() */

void SpringprincessProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"SpringprincessProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04002380,0x2d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SpringprincessProps::StaticGetClass() */

long * SpringprincessProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SpringprincessProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SpringprincessProps::GetClass() const */

long * SpringprincessProps::GetClass(void)

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
  (*pcVar3)(plVar1,"SpringprincessProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SpringprincessProps::SpringprincessProps() */

void __thiscall SpringprincessProps::SpringprincessProps(SpringprincessProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2d0) = 0x40a00000;
  *(undefined4 *)(this + 0x2b8) = 0;
  *(undefined ***)this = &PTR_GetClass_067b4090;
  *(undefined4 *)(this + 0x2c4) = 0x40000000;
  *(undefined4 *)(this + 700) = 0x3f99999a;
  *(undefined4 *)(this + 0x2c0) = 0x43af0000;
  *(undefined4 *)(this + 0x2c8) = 0x43480000;
  *(undefined4 *)(this + 0x2cc) = 0x43960000;
  return;
}


/* SpringprincessProps::StaticNew() */

SpringprincessProps * SpringprincessProps::StaticNew(void)

{
  SpringprincessProps *this;
  
  this = ::operator_new(0x2d8);
  SpringprincessProps(this);
  return this;
}


/* SpringprincessProps::~SpringprincessProps() */

void __thiscall SpringprincessProps::~SpringprincessProps(SpringprincessProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067b4090;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* SpringprincessProps::~SpringprincessProps() */

void __thiscall SpringprincessProps::~SpringprincessProps(SpringprincessProps *this)

{
  ~SpringprincessProps(this);
  AK::FreeHook(this);
  return;
}

