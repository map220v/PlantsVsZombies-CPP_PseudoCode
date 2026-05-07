// Class: PVZ1ModePropertySheet


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModePropertySheet::StaticClassInit() */

void PVZ1ModePropertySheet::StaticClassInit(void)

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
    std::string::string(asStack_10,"PVZ1ModePropertySheet");
    (*pcVar2)(plVar1,asStack_10,FUN_04c66b18,400,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ1ModePropertySheet::StaticGetClass() */

long * PVZ1ModePropertySheet::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PVZ1ModePropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZ1ModePropertySheet::GetClass() const */

long * PVZ1ModePropertySheet::GetClass(void)

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
  (*pcVar3)(plVar1,"PVZ1ModePropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZ1ModePropertySheet::PVZ1ModePropertySheet() */

void __thiscall PVZ1ModePropertySheet::PVZ1ModePropertySheet(PVZ1ModePropertySheet *this)

{
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_06991370;
  HowToPlayScreenData::HowToPlayScreenData((HowToPlayScreenData *)(this + 0x10));
  HowToPlayScreenData::HowToPlayScreenData((HowToPlayScreenData *)(this + 0x40));
  HowToPlayScreenData::HowToPlayScreenData((HowToPlayScreenData *)(this + 0x70));
  HowToPlayScreenData::HowToPlayScreenData((HowToPlayScreenData *)(this + 0xa0));
  HowToPlayScreenData::HowToPlayScreenData((HowToPlayScreenData *)(this + 0xd0));
  HowToPlayScreenData::HowToPlayScreenData((HowToPlayScreenData *)(this + 0x100));
  HowToPlayScreenData::HowToPlayScreenData((HowToPlayScreenData *)(this + 0x130));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x160));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x178));
  return;
}


/* PVZ1ModePropertySheet::StaticNew() */

PVZ1ModePropertySheet * PVZ1ModePropertySheet::StaticNew(void)

{
  PVZ1ModePropertySheet *this;
  
  this = ::operator_new(400);
  PVZ1ModePropertySheet(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModePropertySheet::GetProperties() */

void PVZ1ModePropertySheet::GetProperties(void)

{
  undefined8 uVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::RtName::RtName(aRStack_18,L"PVZ1Config");
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_20,uVar1,0x8b,aRStack_18);
  uVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  Sexy::RtName::~RtName(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* PVZ1ModePropertySheet::~PVZ1ModePropertySheet() */

void __thiscall PVZ1ModePropertySheet::~PVZ1ModePropertySheet(PVZ1ModePropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_06991370;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x178));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x160));
  HowToPlayScreenData::~HowToPlayScreenData((HowToPlayScreenData *)(this + 0x130));
  HowToPlayScreenData::~HowToPlayScreenData((HowToPlayScreenData *)(this + 0x100));
  HowToPlayScreenData::~HowToPlayScreenData((HowToPlayScreenData *)(this + 0xd0));
  HowToPlayScreenData::~HowToPlayScreenData((HowToPlayScreenData *)(this + 0xa0));
  HowToPlayScreenData::~HowToPlayScreenData((HowToPlayScreenData *)(this + 0x70));
  HowToPlayScreenData::~HowToPlayScreenData((HowToPlayScreenData *)(this + 0x40));
  HowToPlayScreenData::~HowToPlayScreenData((HowToPlayScreenData *)(this + 0x10));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* PVZ1ModePropertySheet::~PVZ1ModePropertySheet() */

void __thiscall PVZ1ModePropertySheet::~PVZ1ModePropertySheet(PVZ1ModePropertySheet *this)

{
  ~PVZ1ModePropertySheet(this);
  AK::FreeHook(this);
  return;
}

