// Class: RoseSwordmanProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RoseSwordmanProps::StaticClassInit() */

void RoseSwordmanProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"RoseSwordmanProps");
    (*pcVar2)(plVar1,asStack_10,FUN_040ce720,0x2f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RoseSwordmanProps::StaticGetClass() */

long * RoseSwordmanProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RoseSwordmanProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RoseSwordmanProps::GetClass() const */

long * RoseSwordmanProps::GetClass(void)

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
  (*pcVar3)(plVar1,"RoseSwordmanProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RoseSwordmanProps::RoseSwordmanProps() */

void __thiscall RoseSwordmanProps::RoseSwordmanProps(RoseSwordmanProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067da750;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2c0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2d8));
  *(undefined4 *)(this + 0x2b8) = 0x3e4ccccd;
  return;
}


/* RoseSwordmanProps::StaticNew() */

RoseSwordmanProps * RoseSwordmanProps::StaticNew(void)

{
  RoseSwordmanProps *this;
  
  this = ::operator_new(0x2f0);
  RoseSwordmanProps(this);
  return this;
}


/* RoseSwordmanProps::~RoseSwordmanProps() */

void __thiscall RoseSwordmanProps::~RoseSwordmanProps(RoseSwordmanProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067da750;
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x2d8));
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x2c0));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* RoseSwordmanProps::~RoseSwordmanProps() */

void __thiscall RoseSwordmanProps::~RoseSwordmanProps(RoseSwordmanProps *this)

{
  ~RoseSwordmanProps(this);
  AK::FreeHook(this);
  return;
}

