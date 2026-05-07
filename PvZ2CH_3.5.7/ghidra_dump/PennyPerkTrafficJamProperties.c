// Class: PennyPerkTrafficJamProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkTrafficJamProperties::StaticClassInit() */

void PennyPerkTrafficJamProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"PennyPerkTrafficJamProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_036c1518,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PennyPerkTrafficJamProperties::StaticGetClass() */

long * PennyPerkTrafficJamProperties::StaticGetClass(void)

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
  uVar2 = PennyPerkProperties::StaticGetClass();
  (*pcVar3)(plVar1,"PennyPerkTrafficJamProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyPerkTrafficJamProperties::GetClass() const */

long * PennyPerkTrafficJamProperties::GetClass(void)

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
  uVar2 = PennyPerkProperties::StaticGetClass();
  (*pcVar3)(plVar1,"PennyPerkTrafficJamProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyPerkTrafficJamProperties::PennyPerkTrafficJamProperties() */

void __thiscall
PennyPerkTrafficJamProperties::PennyPerkTrafficJamProperties(PennyPerkTrafficJamProperties *this)

{
  PennyPerkProperties::PennyPerkProperties((PennyPerkProperties *)this);
  *(undefined ***)this = &PTR_GetClass_066810e0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  return;
}


/* PennyPerkTrafficJamProperties::StaticNew() */

PennyPerkTrafficJamProperties * PennyPerkTrafficJamProperties::StaticNew(void)

{
  PennyPerkTrafficJamProperties *this;
  
  this = ::operator_new(0x78);
  PennyPerkTrafficJamProperties(this);
  return this;
}


/* PennyPerkTrafficJamProperties::~PennyPerkTrafficJamProperties() */

void __thiscall
PennyPerkTrafficJamProperties::~PennyPerkTrafficJamProperties(PennyPerkTrafficJamProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_066810e0;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x60));
  PennyPerkProperties::~PennyPerkProperties((PennyPerkProperties *)this);
  return;
}


/* PennyPerkTrafficJamProperties::~PennyPerkTrafficJamProperties() */

void __thiscall
PennyPerkTrafficJamProperties::~PennyPerkTrafficJamProperties(PennyPerkTrafficJamProperties *this)

{
  ~PennyPerkTrafficJamProperties(this);
  AK::FreeHook(this);
  return;
}

