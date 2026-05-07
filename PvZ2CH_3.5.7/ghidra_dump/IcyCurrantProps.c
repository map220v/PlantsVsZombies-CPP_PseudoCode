// Class: IcyCurrantProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IcyCurrantProps::StaticClassInit() */

void IcyCurrantProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"IcyCurrantProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03c23934,0x2c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IcyCurrantProps::StaticGetClass() */

long * IcyCurrantProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"IcyCurrantProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* IcyCurrantProps::GetClass() const */

long * IcyCurrantProps::GetClass(void)

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
  (*pcVar3)(plVar1,"IcyCurrantProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* IcyCurrantProps::IcyCurrantProps() */

void __thiscall IcyCurrantProps::IcyCurrantProps(IcyCurrantProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2b8) = 0x3f800000;
  *(undefined4 *)(this + 700) = 0x3f800000;
  *(undefined4 *)(this + 0x2c0) = 0x3f800000;
  *(undefined ***)this = &PTR_GetClass_0674a3b0;
  *(undefined4 *)(this + 0x2c4) = 0x41200000;
  return;
}


/* IcyCurrantProps::StaticNew() */

IcyCurrantProps * IcyCurrantProps::StaticNew(void)

{
  IcyCurrantProps *this;
  
  this = ::operator_new(0x2c8);
  IcyCurrantProps(this);
  return this;
}


/* IcyCurrantProps::~IcyCurrantProps() */

void __thiscall IcyCurrantProps::~IcyCurrantProps(IcyCurrantProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0674a3b0;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* IcyCurrantProps::~IcyCurrantProps() */

void __thiscall IcyCurrantProps::~IcyCurrantProps(IcyCurrantProps *this)

{
  ~IcyCurrantProps(this);
  AK::FreeHook(this);
  return;
}

