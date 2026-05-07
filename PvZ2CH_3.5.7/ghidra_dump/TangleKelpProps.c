// Class: TangleKelpProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TangleKelpProps::StaticClassInit() */

void TangleKelpProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"TangleKelpProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03f97048,0x2e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TangleKelpProps::TangleKelpProps() */

void __thiscall TangleKelpProps::TangleKelpProps(TangleKelpProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067a5140;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2c8));
  *(undefined4 *)(this + 0x2b8) = 3;
  *(undefined4 *)(this + 700) = 5;
  *(undefined4 *)(this + 0x2c0) = 0x43480000;
  *(undefined4 *)(this + 0x2c4) = 0x42c80000;
  return;
}


/* TangleKelpProps::StaticNew() */

TangleKelpProps * TangleKelpProps::StaticNew(void)

{
  TangleKelpProps *this;
  
  this = ::operator_new(0x2e0);
  TangleKelpProps(this);
  return this;
}


/* TangleKelpProps::~TangleKelpProps() */

void __thiscall TangleKelpProps::~TangleKelpProps(TangleKelpProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067a5140;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x2c8));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* TangleKelpProps::~TangleKelpProps() */

void __thiscall TangleKelpProps::~TangleKelpProps(TangleKelpProps *this)

{
  ~TangleKelpProps(this);
  AK::FreeHook(this);
  return;
}


/* TangleKelpProps::StaticGetClass() */

long * TangleKelpProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"TangleKelpProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TangleKelpProps::GetClass() const */

long * TangleKelpProps::GetClass(void)

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
  (*pcVar3)(plVar1,"TangleKelpProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

