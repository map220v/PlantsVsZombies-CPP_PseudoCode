// Class: RiftPropertySheet


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftPropertySheet::StaticClassInit() */

void RiftPropertySheet::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftLocalNoteConfig");
    (*pcVar3)(plVar2,asStack_10,FUN_036e509c,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"RiftPropertySheet");
    (*pcVar3)(plVar2,asStack_10,FUN_036e5388,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftPropertySheet::StaticGetClass() */

long * RiftPropertySheet::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RiftPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftPropertySheet::GetClass() const */

long * RiftPropertySheet::GetClass(void)

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
  (*pcVar3)(plVar1,"RiftPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftPropertySheet::RiftPropertySheet() */

void __thiscall RiftPropertySheet::RiftPropertySheet(RiftPropertySheet *this)

{
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_06685dd0;
  HowToPlayScreenData::HowToPlayScreenData((HowToPlayScreenData *)(this + 0x10));
  *(undefined4 *)(this + 0x40) = 0xc;
  return;
}


/* RiftPropertySheet::StaticNew() */

RiftPropertySheet * RiftPropertySheet::StaticNew(void)

{
  RiftPropertySheet *this;
  
  this = ::operator_new(0x60);
  RiftPropertySheet(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftPropertySheet::GetProperties() */

void RiftPropertySheet::GetProperties(void)

{
  undefined8 uVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::RtName::RtName(aRStack_18,L"RiftConfig");
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_20,uVar1,0x78,aRStack_18);
  uVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  Sexy::RtName::~RtName(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* RiftPropertySheet::~RiftPropertySheet() */

void __thiscall RiftPropertySheet::~RiftPropertySheet(RiftPropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_06685dd0;
  HowToPlayScreenData::~HowToPlayScreenData((HowToPlayScreenData *)(this + 0x10));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* RiftPropertySheet::~RiftPropertySheet() */

void __thiscall RiftPropertySheet::~RiftPropertySheet(RiftPropertySheet *this)

{
  ~RiftPropertySheet(this);
  AK::FreeHook(this);
  return;
}

