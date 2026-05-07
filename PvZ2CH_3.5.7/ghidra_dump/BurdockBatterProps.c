// Class: BurdockBatterProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BurdockBatterProps::StaticClassInit() */

void BurdockBatterProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"BurdockBatterProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0363716c,0x318,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BurdockBatterProps::StaticGetClass() */

long * BurdockBatterProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BurdockBatterProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BurdockBatterProps::GetClass() const */

long * BurdockBatterProps::GetClass(void)

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
  (*pcVar3)(plVar1,"BurdockBatterProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BurdockBatterProps::BurdockBatterProps() */

void __thiscall BurdockBatterProps::BurdockBatterProps(BurdockBatterProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_0666d680;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2b8));
  *(undefined4 *)(this + 0x2d0) = 0x40000000;
  *(undefined4 *)(this + 0x2f0) = 0x42480000;
  *(undefined4 *)(this + 0x2d4) = 0x40000000;
  *(undefined4 *)(this + 0x2e4) = 0x40000000;
  *(undefined4 *)(this + 0x2f4) = 0x3d4ccccd;
  *(undefined4 *)(this + 0x2e8) = 0x40400000;
  *(undefined4 *)(this + 0x2f8) = 0x3dcccccd;
  *(undefined4 *)(this + 0x2d8) = 0;
  *(undefined4 *)(this + 0x2dc) = 0x3f000000;
  *(undefined4 *)(this + 0x2e0) = 0x3f800000;
  *(undefined4 *)(this + 0x2ec) = 0x40800000;
  *(undefined4 *)(this + 0x2fc) = 0x40a00000;
  *(undefined4 *)(this + 0x300) = 0x40800000;
  *(undefined4 *)(this + 0x304) = 0x3f000000;
  *(undefined4 *)(this + 0x308) = 0x447a0000;
  *(undefined4 *)(this + 0x30c) = 0x40800000;
  *(undefined4 *)(this + 0x310) = 0x3f800000;
  return;
}


/* BurdockBatterProps::StaticNew() */

BurdockBatterProps * BurdockBatterProps::StaticNew(void)

{
  BurdockBatterProps *this;
  
  this = ::operator_new(0x318);
  BurdockBatterProps(this);
  return this;
}


/* BurdockBatterProps::~BurdockBatterProps() */

void __thiscall BurdockBatterProps::~BurdockBatterProps(BurdockBatterProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0666d680;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x2b8));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* BurdockBatterProps::~BurdockBatterProps() */

void __thiscall BurdockBatterProps::~BurdockBatterProps(BurdockBatterProps *this)

{
  ~BurdockBatterProps(this);
  AK::FreeHook(this);
  return;
}

