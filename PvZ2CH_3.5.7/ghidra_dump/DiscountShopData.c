// Class: DiscountShopData


/* DiscountShopData::DiscountShopData(DiscountShopData const&) */

void __thiscall DiscountShopData::DiscountShopData(DiscountShopData *this,DiscountShopData *param_1)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0698ba30;
  std::vector<DiscountShopContentData,std::allocator<DiscountShopContentData>>::vector
            ((vector<DiscountShopContentData,std::allocator<DiscountShopContentData>> *)(this + 8),
             (vector *)(param_1 + 8));
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  FUN_05475d88(this + 0x28,param_1 + 0x28);
  return;
}


/* DiscountShopData::~DiscountShopData() */

void __thiscall DiscountShopData::~DiscountShopData(DiscountShopData *this)

{
  *(undefined ***)this = &PTR_GetClass_0698ba30;
  std::string::~string((string *)(this + 0x28));
  std::vector<DiscountShopContentData,std::allocator<DiscountShopContentData>>::~vector
            ((vector<DiscountShopContentData,std::allocator<DiscountShopContentData>> *)(this + 8));
  nop();
  return;
}


/* DiscountShopData::~DiscountShopData() */

void __thiscall DiscountShopData::~DiscountShopData(DiscountShopData *this)

{
  ~DiscountShopData(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DiscountShopData::StaticClassInit() */

void DiscountShopData::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"DiscountShopContentData");
    (*pcVar3)(plVar2,asStack_10,FUN_04c52fdc,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"DiscountShopData");
    (*pcVar3)(plVar2,asStack_10,FUN_04c550b8,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DiscountShopData::StaticGetClass() */

long * DiscountShopData::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"DiscountShopData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DiscountShopData::GetClass() const */

long * DiscountShopData::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"DiscountShopData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DiscountShopData::DiscountShopData() */

void __thiscall DiscountShopData::DiscountShopData(DiscountShopData *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0698ba30;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  Set8BytesTo0(this + 0x28);
  std::vector<DiscountShopContentData,std::allocator<DiscountShopContentData>>::clear
            ((vector<DiscountShopContentData,std::allocator<DiscountShopContentData>> *)(this + 8));
  *(undefined4 *)(this + 0x20) = 0;
  return;
}


/* DiscountShopData::StaticNew() */

DiscountShopData * DiscountShopData::StaticNew(void)

{
  DiscountShopData *this;
  
  this = ::operator_new(0x30);
  DiscountShopData(this);
  return this;
}

