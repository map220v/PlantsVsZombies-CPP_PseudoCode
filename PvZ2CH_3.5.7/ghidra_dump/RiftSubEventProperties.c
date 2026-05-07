// Class: RiftSubEventProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftSubEventProperties::StaticClassInit() */

void RiftSubEventProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftLevelDefinition");
    (*pcVar3)(plVar2,asStack_10,FUN_036add68,4,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"RiftSubEventProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_036aee18,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftSubEventProperties::StaticGetClass() */

long * RiftSubEventProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RiftSubEventProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftSubEventProperties::GetClass() const */

long * RiftSubEventProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"RiftSubEventProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftSubEventProperties::ToString() const */

void RiftSubEventProperties::ToString(void)

{
  long in_x0;
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0();
  uVar1 = FUN_0547429c(in_x0 + 0x18);
  Sexy::StrFormat("Featured Plant: %s\n",asStack_10,uVar1);
  thunk_FUN_054757c0();
  std::string::~string(asStack_10);
  Sexy::StrFormat("Penny Tech earned per bonus objective: %d\n",asStack_10,
                  (ulong)*(uint *)(in_x0 + 0x20));
  thunk_FUN_054757c0();
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftSubEventProperties::RiftSubEventProperties() */

void __thiscall RiftSubEventProperties::RiftSubEventProperties(RiftSubEventProperties *this)

{
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_06680ab0;
  Set8BytesTo0(this + 0x10);
  Set8BytesTo0(this + 0x18);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  *(undefined4 *)(this + 0x20) = 1;
  return;
}


/* RiftSubEventProperties::StaticNew() */

RiftSubEventProperties * RiftSubEventProperties::StaticNew(void)

{
  RiftSubEventProperties *this;
  
  this = ::operator_new(0x40);
  RiftSubEventProperties(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftSubEventProperties::GetProperties(std::string const&) */

void RiftSubEventProperties::GetProperties(string *param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  wstring awStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  auVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::UTF8StringToWString((Sexy *)param_1,auVar2._8_8_);
  Sexy::RtName::RtName(aRStack_18,awStack_28);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_20,auVar2._0_8_,0x77,aRStack_18);
  uVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  Sexy::RtName::~RtName(aRStack_18);
  FUN_05476c50(awStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* RiftSubEventProperties::~RiftSubEventProperties() */

void __thiscall RiftSubEventProperties::~RiftSubEventProperties(RiftSubEventProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06680ab0;
  std::vector<Sexy::RtId,std::allocator<Sexy::RtId>>::~vector
            ((vector<Sexy::RtId,std::allocator<Sexy::RtId>> *)(this + 0x28));
  std::string::~string((string *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* RiftSubEventProperties::~RiftSubEventProperties() */

void __thiscall RiftSubEventProperties::~RiftSubEventProperties(RiftSubEventProperties *this)

{
  ~RiftSubEventProperties(this);
  AK::FreeHook(this);
  return;
}

