// Class: CthulhuActiniaProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CthulhuActiniaProps::StaticClassInit() */

void CthulhuActiniaProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"CthulhuActiniaProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04d59e3c,0x358,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CthulhuActiniaProps::StaticGetClass() */

long * CthulhuActiniaProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CthulhuActiniaProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CthulhuActiniaProps::GetClass() const */

long * CthulhuActiniaProps::GetClass(void)

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
  (*pcVar3)(plVar1,"CthulhuActiniaProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CthulhuActiniaProps::~CthulhuActiniaProps() */

void __thiscall CthulhuActiniaProps::~CthulhuActiniaProps(CthulhuActiniaProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069b3250;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x340));
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x310));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x2f0));
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x2d8));
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x2c0));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* CthulhuActiniaProps::~CthulhuActiniaProps() */

void __thiscall CthulhuActiniaProps::~CthulhuActiniaProps(CthulhuActiniaProps *this)

{
  ~CthulhuActiniaProps(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CthulhuActiniaProps::CthulhuActiniaProps() */

void __thiscall CthulhuActiniaProps::CthulhuActiniaProps(CthulhuActiniaProps *this)

{
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_069b3250;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2c0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2d8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2f0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x310));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x340));
  *(undefined4 *)(this + 0x2b8) = 0x42200000;
  std::vector<float,std::allocator<float>>::operator=
            ((vector<float,std::allocator<float>> *)(this + 0x2c0),&DAT_057559c0,5);
  std::vector<float,std::allocator<float>>::operator=
            ((vector<float,std::allocator<float>> *)(this + 0x2d8),&DAT_057559e0,5);
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x2f0),&DAT_057559a0,5);
  *(undefined4 *)(this + 0x308) = 2;
  std::vector<float,std::allocator<float>>::operator=
            ((vector<float,std::allocator<float>> *)(this + 0x310),&DAT_05755a00,5);
  *(undefined4 *)(this + 0x338) = 5;
  *(undefined4 *)(this + 0x328) = 100;
  *(undefined4 *)(this + 0x32c) = 100;
  *(undefined4 *)(this + 0x330) = 100;
  *(undefined4 *)(this + 0x334) = 4;
  *(undefined4 *)(this + 0x33c) = 1;
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x340),auStack_10,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CthulhuActiniaProps::StaticNew() */

CthulhuActiniaProps * CthulhuActiniaProps::StaticNew(void)

{
  CthulhuActiniaProps *this;
  
  this = ::operator_new(0x358);
  CthulhuActiniaProps(this);
  return this;
}

