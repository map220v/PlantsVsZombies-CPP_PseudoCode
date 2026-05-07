// Class: AdsData


/* AdsData::AdsData() */

void __thiscall AdsData::AdsData(AdsData *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0xffffffff;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR_GetClass_0660b3d0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* AdsData::AdsData(AdsData const&) */

void __thiscall AdsData::AdsData(AdsData *this,AdsData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  Sexy::RtObject::RtObject((RtObject *)this);
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined ***)this = &PTR_GetClass_0660b3d0;
  *(undefined4 *)(this + 0xc) = uVar2;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  return;
}


/* AdsData::~AdsData() */

void __thiscall AdsData::~AdsData(AdsData *this)

{
  *(undefined ***)this = &PTR_GetClass_0660b3d0;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x18));
  nop();
  return;
}


/* AdsData::~AdsData() */

void __thiscall AdsData::~AdsData(AdsData *this)

{
  ~AdsData(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdsData::StaticClassInit() */

void AdsData::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_BonusInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_031ffe3c,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"AdsData");
    (*pcVar3)(plVar2,asStack_10,FUN_032218b0,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdsData::StaticGetClass() */

long * AdsData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AdsData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdsData::GetClass() const */

long * AdsData::GetClass(void)

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
  (*pcVar3)(plVar1,"AdsData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdsData::StaticNew() */

AdsData * AdsData::StaticNew(void)

{
  AdsData *this;
  
  this = ::operator_new(0x30);
  AdsData(this);
  return this;
}

