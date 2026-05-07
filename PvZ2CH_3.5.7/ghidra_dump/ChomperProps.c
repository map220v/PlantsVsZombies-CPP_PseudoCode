// Class: ChomperProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChomperProps::StaticClassInit() */

void ChomperProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ChomperProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03f973f4,0x310,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ChomperProps::ChomperProps() */

void __thiscall ChomperProps::ChomperProps(ChomperProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067a51e0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2c0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2e0));
  *(undefined4 *)(this + 0x2b8) = 5;
  *(undefined4 *)(this + 0x2f8) = 0x43480000;
  *(undefined4 *)(this + 0x2fc) = 0x447a0000;
  *(undefined4 *)(this + 0x2d8) = 0x3f800000;
  *(undefined4 *)(this + 0x300) = 0x3f800000;
  *(undefined4 *)(this + 0x304) = 0x3f800000;
  *(undefined4 *)(this + 0x308) = 0x3f4ccccd;
  *(undefined4 *)(this + 0x30c) = 0x447a0000;
  return;
}


/* ChomperProps::StaticNew() */

ChomperProps * ChomperProps::StaticNew(void)

{
  ChomperProps *this;
  
  this = ::operator_new(0x310);
  ChomperProps(this);
  return this;
}


/* ChomperProps::~ChomperProps() */

void __thiscall ChomperProps::~ChomperProps(ChomperProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067a51e0;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x2e0));
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x2c0));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* ChomperProps::~ChomperProps() */

void __thiscall ChomperProps::~ChomperProps(ChomperProps *this)

{
  ~ChomperProps(this);
  AK::FreeHook(this);
  return;
}


/* ChomperProps::StaticGetClass() */

long * ChomperProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ChomperProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ChomperProps::GetClass() const */

long * ChomperProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ChomperProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

