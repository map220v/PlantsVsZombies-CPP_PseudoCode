// Class: EMPeaProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EMPeaProps::StaticClassInit() */

void EMPeaProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"EMPeaProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03f91f90,0x2e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EMPeaProps::EMPeaProps() */

void __thiscall EMPeaProps::EMPeaProps(EMPeaProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067a3f20;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2b8));
  this[0x2d1] = (EMPeaProps)0x0;
  this[0x2d0] = (EMPeaProps)0x0;
  *(undefined4 *)(this + 0x2d8) = 0x41200000;
  *(undefined4 *)(this + 0x2d4) = 0x43480000;
  *(undefined4 *)(this + 0x2dc) = 0x41800000;
  return;
}


/* EMPeaProps::StaticNew() */

EMPeaProps * EMPeaProps::StaticNew(void)

{
  EMPeaProps *this;
  
  this = ::operator_new(0x2e0);
  EMPeaProps(this);
  return this;
}


/* EMPeaProps::~EMPeaProps() */

void __thiscall EMPeaProps::~EMPeaProps(EMPeaProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067a3f20;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x2b8));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* EMPeaProps::~EMPeaProps() */

void __thiscall EMPeaProps::~EMPeaProps(EMPeaProps *this)

{
  ~EMPeaProps(this);
  AK::FreeHook(this);
  return;
}


/* EMPeaProps::StaticGetClass() */

long * EMPeaProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EMPeaProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EMPeaProps::GetClass() const */

long * EMPeaProps::GetClass(void)

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
  (*pcVar3)(plVar1,"EMPeaProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

