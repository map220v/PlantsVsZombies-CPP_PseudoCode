// Class: PVZManifest


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZManifest::StaticClassInit() */

void PVZManifest::StaticClassInit(void)

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
    std::string::string(asStack_10,"PVZManifestFile");
    (*pcVar3)(plVar2,asStack_10,FUN_043f097c,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PVZManifest");
    (*pcVar3)(plVar2,asStack_10,FUN_043f0e5c,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZManifest::StaticGetClass() */

long * PVZManifest::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PVZManifest",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZManifest::GetClass() const */

long * PVZManifest::GetClass(void)

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
  (*pcVar3)(plVar1,"PVZManifest",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZManifest::PVZManifest() */

void __thiscall PVZManifest::PVZManifest(PVZManifest *this)

{
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_068475a0;
  Set8BytesTo0(this + 0x10);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  AccessoryPieceUIInfo::AccessoryPieceUIInfo((AccessoryPieceUIInfo *)(this + 0x30));
  return;
}


/* PVZManifest::StaticNew() */

PVZManifest * PVZManifest::StaticNew(void)

{
  PVZManifest *this;
  
  this = ::operator_new(0x48);
  PVZManifest(this);
  return this;
}


/* PVZManifest::~PVZManifest() */

void __thiscall PVZManifest::~PVZManifest(PVZManifest *this)

{
  *(undefined ***)this = &PTR_GetClass_068475a0;
  AccessoryPieceUIInfo::~AccessoryPieceUIInfo((AccessoryPieceUIInfo *)(this + 0x30));
  std::vector<PVZManifestFile,std::allocator<PVZManifestFile>>::~vector
            ((vector<PVZManifestFile,std::allocator<PVZManifestFile>> *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* PVZManifest::~PVZManifest() */

void __thiscall PVZManifest::~PVZManifest(PVZManifest *this)

{
  ~PVZManifest(this);
  AK::FreeHook(this);
  return;
}

