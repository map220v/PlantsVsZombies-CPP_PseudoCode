// Class: FestivalGoldenEggData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalGoldenEggData::StaticClassInit() */

void FestivalGoldenEggData::StaticClassInit(void)

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
    std::string::string(asStack_10,"FestivalGoldenEggData");
    (*pcVar2)(plVar1,asStack_10,FUN_03a1ccf8,200,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FestivalGoldenEggData::StaticGetClass() */

long * FestivalGoldenEggData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"FestivalGoldenEggData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FestivalGoldenEggData::GetClass() const */

long * FestivalGoldenEggData::GetClass(void)

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
  (*pcVar3)(plVar1,"FestivalGoldenEggData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FestivalGoldenEggData::FestivalGoldenEggData() */

void __thiscall FestivalGoldenEggData::FestivalGoldenEggData(FestivalGoldenEggData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_066fe410;
  *(undefined ***)(this + 8) = &PTR__FestivalGoldenEggData_066fe478;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x60));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x90));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xa8));
  return;
}


/* FestivalGoldenEggData::StaticNew() */

FestivalGoldenEggData * FestivalGoldenEggData::StaticNew(void)

{
  FestivalGoldenEggData *this;
  
  this = ::operator_new(200);
  FestivalGoldenEggData(this);
  return this;
}


/* FestivalGoldenEggData::~FestivalGoldenEggData() */

void __thiscall FestivalGoldenEggData::~FestivalGoldenEggData(FestivalGoldenEggData *this)

{
  *(undefined ***)this = &PTR_GetClass_066fe410;
  *(undefined ***)(this + 8) = &PTR__FestivalGoldenEggData_066fe478;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0xa8));
  std::
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::~vector((vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
             *)(this + 0x90));
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::~map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
          *)(this + 0x60));
  std::
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::~vector((vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
             *)(this + 0x48));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x30));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to FestivalGoldenEggData::~FestivalGoldenEggData() */

void __thiscall FestivalGoldenEggData::~FestivalGoldenEggData(FestivalGoldenEggData *this)

{
  ~FestivalGoldenEggData(this + -8);
  return;
}


/* FestivalGoldenEggData::~FestivalGoldenEggData() */

void __thiscall FestivalGoldenEggData::~FestivalGoldenEggData(FestivalGoldenEggData *this)

{
  ~FestivalGoldenEggData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to FestivalGoldenEggData::~FestivalGoldenEggData() */

void __thiscall FestivalGoldenEggData::~FestivalGoldenEggData(FestivalGoldenEggData *this)

{
  ~FestivalGoldenEggData(this + -8);
  return;
}

