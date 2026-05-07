// Class: PowerPropsStrawburstGrowth


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerPropsStrawburstGrowth::StaticClassInit() */

void PowerPropsStrawburstGrowth::StaticClassInit(void)

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
    std::string::string(asStack_10,"PowerPropsStrawburstGrowth");
    (*pcVar2)(plVar1,asStack_10,FUN_03fa29d8,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerPropsStrawburstGrowth::PowerPropsStrawburstGrowth() */

void __thiscall
PowerPropsStrawburstGrowth::PowerPropsStrawburstGrowth(PowerPropsStrawburstGrowth *this)

{
  PowerPropertySheet::PowerPropertySheet((PowerPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067a5f80;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* PowerPropsStrawburstGrowth::StaticNew() */

PowerPropsStrawburstGrowth * PowerPropsStrawburstGrowth::StaticNew(void)

{
  PowerPropsStrawburstGrowth *this;
  
  this = ::operator_new(0x30);
  PowerPropsStrawburstGrowth(this);
  return this;
}


/* PowerPropsStrawburstGrowth::~PowerPropsStrawburstGrowth() */

void __thiscall
PowerPropsStrawburstGrowth::~PowerPropsStrawburstGrowth(PowerPropsStrawburstGrowth *this)

{
  *(undefined ***)this = &PTR_GetClass_067a5f80;
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x18));
  PowerPropertySheet::~PowerPropertySheet((PowerPropertySheet *)this);
  return;
}


/* PowerPropsStrawburstGrowth::~PowerPropsStrawburstGrowth() */

void __thiscall
PowerPropsStrawburstGrowth::~PowerPropsStrawburstGrowth(PowerPropsStrawburstGrowth *this)

{
  ~PowerPropsStrawburstGrowth(this);
  AK::FreeHook(this);
  return;
}


/* PowerPropsStrawburstGrowth::StaticGetClass() */

long * PowerPropsStrawburstGrowth::StaticGetClass(void)

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
  uVar2 = PowerPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"PowerPropsStrawburstGrowth",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PowerPropsStrawburstGrowth::GetClass() const */

long * PowerPropsStrawburstGrowth::GetClass(void)

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
  uVar2 = PowerPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"PowerPropsStrawburstGrowth",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

