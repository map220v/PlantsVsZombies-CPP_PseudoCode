// Class: HappyVaseBreakerData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HappyVaseBreakerData::StaticClassInit() */

void HappyVaseBreakerData::StaticClassInit(void)

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
    std::string::string(asStack_10,"HappyVaseBreakerData");
    (*pcVar2)(plVar1,asStack_10,FUN_03a12eec,0x138,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HappyVaseBreakerData::StaticGetClass() */

long * HappyVaseBreakerData::StaticGetClass(void)

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
  uVar2 = INetworkData::StaticGetClass();
  (*pcVar3)(plVar1,"HappyVaseBreakerData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HappyVaseBreakerData::GetClass() const */

long * HappyVaseBreakerData::GetClass(void)

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
  uVar2 = INetworkData::StaticGetClass();
  (*pcVar3)(plVar1,"HappyVaseBreakerData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HappyVaseBreakerData::HappyVaseBreakerData() */

void __thiscall HappyVaseBreakerData::HappyVaseBreakerData(HappyVaseBreakerData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_066fc1f0;
  *(undefined ***)(this + 8) = &PTR__HappyVaseBreakerData_066fc258;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x68));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x80));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x98));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xb0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 200));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x110));
  return;
}


/* HappyVaseBreakerData::StaticNew() */

HappyVaseBreakerData * HappyVaseBreakerData::StaticNew(void)

{
  HappyVaseBreakerData *this;
  
  this = ::operator_new(0x138);
  HappyVaseBreakerData(this);
  return this;
}


/* HappyVaseBreakerData::~HappyVaseBreakerData() */

void __thiscall HappyVaseBreakerData::~HappyVaseBreakerData(HappyVaseBreakerData *this)

{
  *(undefined ***)this = &PTR_GetClass_066fc1f0;
  *(undefined ***)(this + 8) = &PTR__HappyVaseBreakerData_066fc258;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x110));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0xf8));
  std::vector<HappyVaseSpecialTaskItem,std::allocator<HappyVaseSpecialTaskItem>>::~vector
            ((vector<HappyVaseSpecialTaskItem,std::allocator<HappyVaseSpecialTaskItem>> *)
             (this + 0xe0));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 200));
  std::vector<HappyVaseSpecialTaskItem,std::allocator<HappyVaseSpecialTaskItem>>::~vector
            ((vector<HappyVaseSpecialTaskItem,std::allocator<HappyVaseSpecialTaskItem>> *)
             (this + 0xb0));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x98));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x80));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x68));
  std::vector<HappyVaseItem,std::allocator<HappyVaseItem>>::~vector
            ((vector<HappyVaseItem,std::allocator<HappyVaseItem>> *)(this + 0x50));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x38));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x20));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to HappyVaseBreakerData::~HappyVaseBreakerData() */

void __thiscall HappyVaseBreakerData::~HappyVaseBreakerData(HappyVaseBreakerData *this)

{
  ~HappyVaseBreakerData(this + -8);
  return;
}


/* HappyVaseBreakerData::~HappyVaseBreakerData() */

void __thiscall HappyVaseBreakerData::~HappyVaseBreakerData(HappyVaseBreakerData *this)

{
  ~HappyVaseBreakerData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to HappyVaseBreakerData::~HappyVaseBreakerData() */

void __thiscall HappyVaseBreakerData::~HappyVaseBreakerData(HappyVaseBreakerData *this)

{
  ~HappyVaseBreakerData(this + -8);
  return;
}

