// Class: JoustPropertySheet


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustPropertySheet::StaticClassInit() */

void JoustPropertySheet::StaticClassInit(void)

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
    std::string::string(asStack_10,"PredefinedLoadoutEntry");
    (*pcVar3)(plVar2,asStack_10,FUN_038889d8,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"JoustPropertySheet");
    (*pcVar3)(plVar2,asStack_10,FUN_038891a0,0xd8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JoustPropertySheet::StaticGetClass() */

long * JoustPropertySheet::StaticGetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"JoustPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* JoustPropertySheet::GetClass() const */

long * JoustPropertySheet::GetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"JoustPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* JoustPropertySheet::JoustPropertySheet() */

void __thiscall JoustPropertySheet::JoustPropertySheet(JoustPropertySheet *this)

{
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_066aeec0;
  Set8BytesTo0(this + 0x30);
  Set8BytesTo0(this + 0x38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x70));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x88));
  JoustHowToPlayScreenData::JoustHowToPlayScreenData((JoustHowToPlayScreenData *)(this + 0xa0));
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0xd0) = 999;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x10) = 0x40000000;
  *(undefined4 *)(this + 0x18) = 0x45610000;
  *(undefined4 *)(this + 0x14) = 0x40800000;
  *(undefined4 *)(this + 0x20) = 0x43fa0000;
  *(undefined4 *)(this + 0x1c) = 0x40a00000;
  *(undefined4 *)(this + 0x24) = 0x44fa0000;
  return;
}


/* JoustPropertySheet::StaticNew() */

JoustPropertySheet * JoustPropertySheet::StaticNew(void)

{
  JoustPropertySheet *this;
  
  this = ::operator_new(0xd8);
  JoustPropertySheet(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustPropertySheet::GetProperties() */

void JoustPropertySheet::GetProperties(void)

{
  undefined8 uVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::RtName::RtName(aRStack_18,L"JoustConfig");
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_20,uVar1,0x6b,aRStack_18);
  uVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  Sexy::RtName::~RtName(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* JoustPropertySheet::~JoustPropertySheet() */

void __thiscall JoustPropertySheet::~JoustPropertySheet(JoustPropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_066aeec0;
  JoustHowToPlayScreenData::~JoustHowToPlayScreenData((JoustHowToPlayScreenData *)(this + 0xa0));
  std::
  vector<std::vector<PredefinedLoadoutEntry,std::allocator<PredefinedLoadoutEntry>>,std::allocator<std::vector<PredefinedLoadoutEntry,std::allocator<PredefinedLoadoutEntry>>>>
  ::~vector((vector<std::vector<PredefinedLoadoutEntry,std::allocator<PredefinedLoadoutEntry>>,std::allocator<std::vector<PredefinedLoadoutEntry,std::allocator<PredefinedLoadoutEntry>>>>
             *)(this + 0x88));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x70));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x58));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x40));
  std::string::~string((string *)(this + 0x38));
  std::string::~string((string *)(this + 0x30));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* JoustPropertySheet::~JoustPropertySheet() */

void __thiscall JoustPropertySheet::~JoustPropertySheet(JoustPropertySheet *this)

{
  ~JoustPropertySheet(this);
  AK::FreeHook(this);
  return;
}

