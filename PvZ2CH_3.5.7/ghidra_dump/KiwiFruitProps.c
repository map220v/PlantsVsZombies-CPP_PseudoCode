// Class: KiwiFruitProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* KiwiFruitProps::StaticClassInit() */

void KiwiFruitProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"KiwiFruitProps");
    (*pcVar2)(plVar1,asStack_10,FUN_040eef74,0x2f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* KiwiFruitProps::StaticGetClass() */

long * KiwiFruitProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"KiwiFruitProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* KiwiFruitProps::GetClass() const */

long * KiwiFruitProps::GetClass(void)

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
  (*pcVar3)(plVar1,"KiwiFruitProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* KiwiFruitProps::KiwiFruitProps() */

void __thiscall KiwiFruitProps::KiwiFruitProps(KiwiFruitProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067df7e0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2d0));
  *(undefined4 *)(this + 0x2b8) = 0x40400000;
  *(undefined4 *)(this + 0x2c4) = 0x3eaa7efa;
  *(undefined4 *)(this + 700) = 0x40a00000;
  *(undefined4 *)(this + 0x2cc) = 0x40c00000;
  *(undefined4 *)(this + 0x2c0) = 0x3f000000;
  *(undefined4 *)(this + 0x2e8) = 0x40c00000;
  *(undefined4 *)(this + 0x2c8) = 0x40800000;
  *(undefined4 *)(this + 0x2ec) = 0x3e4ccccd;
  return;
}


/* KiwiFruitProps::StaticNew() */

KiwiFruitProps * KiwiFruitProps::StaticNew(void)

{
  KiwiFruitProps *this;
  
  this = ::operator_new(0x2f0);
  KiwiFruitProps(this);
  return this;
}


/* KiwiFruitProps::~KiwiFruitProps() */

void __thiscall KiwiFruitProps::~KiwiFruitProps(KiwiFruitProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067df7e0;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x2d0));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* KiwiFruitProps::~KiwiFruitProps() */

void __thiscall KiwiFruitProps::~KiwiFruitProps(KiwiFruitProps *this)

{
  ~KiwiFruitProps(this);
  AK::FreeHook(this);
  return;
}

