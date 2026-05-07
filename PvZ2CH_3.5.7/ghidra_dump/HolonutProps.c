// Class: HolonutProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HolonutProps::StaticClassInit() */

void HolonutProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"HolonutProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03f923a8,0x2e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HolonutProps::HolonutProps() */

void __thiscall HolonutProps::HolonutProps(HolonutProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067a3fc0;
  Set8BytesTo0(this + 0x2c8);
  this[0x2b8] = (HolonutProps)0x1;
  this[0x2c0] = (HolonutProps)0x1;
  *(undefined4 *)(this + 700) = 0x40a00000;
  *(undefined4 *)(this + 0x2d0) = 0x45dac000;
  *(undefined4 *)(this + 0x2c4) = 0x41700000;
  *(undefined4 *)(this + 0x2d4) = 0x45fa0000;
  *(undefined4 *)(this + 0x2d8) = 0x447a0000;
  *(undefined4 *)(this + 0x2dc) = 0x461c4000;
  return;
}


/* HolonutProps::StaticNew() */

HolonutProps * HolonutProps::StaticNew(void)

{
  HolonutProps *this;
  
  this = ::operator_new(0x2e0);
  HolonutProps(this);
  return this;
}


/* HolonutProps::~HolonutProps() */

void __thiscall HolonutProps::~HolonutProps(HolonutProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067a3fc0;
  std::string::~string((string *)(this + 0x2c8));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* HolonutProps::~HolonutProps() */

void __thiscall HolonutProps::~HolonutProps(HolonutProps *this)

{
  ~HolonutProps(this);
  AK::FreeHook(this);
  return;
}


/* HolonutProps::StaticGetClass() */

long * HolonutProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HolonutProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HolonutProps::GetClass() const */

long * HolonutProps::GetClass(void)

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
  (*pcVar3)(plVar1,"HolonutProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

