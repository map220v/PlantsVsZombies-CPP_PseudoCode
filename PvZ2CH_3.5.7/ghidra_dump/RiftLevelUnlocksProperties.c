// Class: RiftLevelUnlocksProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftLevelUnlocksProperties::StaticClassInit() */

void RiftLevelUnlocksProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftLevelUnlocksProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_036b0b60,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftLevelUnlocksProperties::StaticGetClass() */

long * RiftLevelUnlocksProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RiftLevelUnlocksProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftLevelUnlocksProperties::GetClass() const */

long * RiftLevelUnlocksProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"RiftLevelUnlocksProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftLevelUnlocksProperties::RiftLevelUnlocksProperties() */

void __thiscall
RiftLevelUnlocksProperties::RiftLevelUnlocksProperties(RiftLevelUnlocksProperties *this)

{
  size_t in_x2;
  
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_06680b40;
  Set8BytesTo0((string *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::string::append((string *)(this + 0x10),"DefaultConfig",in_x2);
  return;
}


/* RiftLevelUnlocksProperties::StaticNew() */

RiftLevelUnlocksProperties * RiftLevelUnlocksProperties::StaticNew(void)

{
  RiftLevelUnlocksProperties *this;
  
  this = ::operator_new(0x30);
  RiftLevelUnlocksProperties(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftLevelUnlocksProperties::GetProperties(std::string const&) */

void RiftLevelUnlocksProperties::GetProperties(string *param_1)

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
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_20,auVar2._0_8_,0x7a,aRStack_18);
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


/* RiftLevelUnlocksProperties::~RiftLevelUnlocksProperties() */

void __thiscall
RiftLevelUnlocksProperties::~RiftLevelUnlocksProperties(RiftLevelUnlocksProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06680b40;
  std::vector<RiftLevelDefinition,std::allocator<RiftLevelDefinition>>::~vector
            ((vector<RiftLevelDefinition,std::allocator<RiftLevelDefinition>> *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* RiftLevelUnlocksProperties::~RiftLevelUnlocksProperties() */

void __thiscall
RiftLevelUnlocksProperties::~RiftLevelUnlocksProperties(RiftLevelUnlocksProperties *this)

{
  ~RiftLevelUnlocksProperties(this);
  AK::FreeHook(this);
  return;
}

