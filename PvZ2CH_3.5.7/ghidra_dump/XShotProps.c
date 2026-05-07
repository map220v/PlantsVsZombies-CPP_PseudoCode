// Class: XShotProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* XShotProps::StaticClassInit() */

void XShotProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"XShotProps");
    (*pcVar2)(plVar1,asStack_10,FUN_040b9d88,0x2e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* XShotProps::StaticGetClass() */

long * XShotProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"XShotProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* XShotProps::GetClass() const */

long * XShotProps::GetClass(void)

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
  (*pcVar3)(plVar1,"XShotProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* XShotProps::XShotProps() */

void __thiscall XShotProps::XShotProps(XShotProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067d6300;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2c8));
  *(undefined4 *)(this + 0x2b8) = 1;
  *(undefined4 *)(this + 700) = 0x40a00000;
  *(undefined4 *)(this + 0x2c0) = 0x3ea3d70a;
  return;
}


/* XShotProps::StaticNew() */

XShotProps * XShotProps::StaticNew(void)

{
  XShotProps *this;
  
  this = ::operator_new(0x2e0);
  XShotProps(this);
  return this;
}


/* XShotProps::~XShotProps() */

void __thiscall XShotProps::~XShotProps(XShotProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067d6300;
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x2c8));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* XShotProps::~XShotProps() */

void __thiscall XShotProps::~XShotProps(XShotProps *this)

{
  ~XShotProps(this);
  AK::FreeHook(this);
  return;
}

