// Class: NightshadeProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NightshadeProps::StaticClassInit() */

void NightshadeProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"NightshadeProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0423c16c,0x318,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NightshadeProps::StaticGetClass() */

long * NightshadeProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NightshadeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NightshadeProps::GetClass() const */

long * NightshadeProps::GetClass(void)

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
  (*pcVar3)(plVar1,"NightshadeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NightshadeProps::NightshadeProps() */

void __thiscall NightshadeProps::NightshadeProps(NightshadeProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_06814090;
  *(undefined4 *)(this + 0x2c0) = 0;
  *(undefined4 *)(this + 0x2c4) = 0;
  *(undefined4 *)(this + 0x2c8) = 0;
  TargetInfoProps::TargetInfoProps((TargetInfoProps *)(this + 0x2d0));
  return;
}


/* NightshadeProps::StaticNew() */

NightshadeProps * NightshadeProps::StaticNew(void)

{
  NightshadeProps *this;
  
  this = ::operator_new(0x318);
  NightshadeProps(this);
  return this;
}


/* NightshadeProps::~NightshadeProps() */

void __thiscall NightshadeProps::~NightshadeProps(NightshadeProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06814090;
  TargetInfoProps::~TargetInfoProps((TargetInfoProps *)(this + 0x2d0));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* NightshadeProps::~NightshadeProps() */

void __thiscall NightshadeProps::~NightshadeProps(NightshadeProps *this)

{
  ~NightshadeProps(this);
  AK::FreeHook(this);
  return;
}

