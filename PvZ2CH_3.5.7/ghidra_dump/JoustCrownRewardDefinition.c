// Class: JoustCrownRewardDefinition


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustCrownRewardDefinition::StaticClassInit() */

void JoustCrownRewardDefinition::StaticClassInit(void)

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
    std::string::string(asStack_10,"JoustCrownRewardDefinition");
    (*pcVar2)(plVar1,asStack_10,FUN_0388b8f0,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JoustCrownRewardDefinition::StaticGetClass() */

long * JoustCrownRewardDefinition::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"JoustCrownRewardDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* JoustCrownRewardDefinition::GetClass() const */

long * JoustCrownRewardDefinition::GetClass(void)

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
  (*pcVar3)(plVar1,"JoustCrownRewardDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* JoustCrownRewardDefinition::JoustCrownRewardDefinition() */

void __thiscall
JoustCrownRewardDefinition::JoustCrownRewardDefinition(JoustCrownRewardDefinition *this)

{
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_066af0d0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  return;
}


/* JoustCrownRewardDefinition::StaticNew() */

JoustCrownRewardDefinition * JoustCrownRewardDefinition::StaticNew(void)

{
  JoustCrownRewardDefinition *this;
  
  this = ::operator_new(0x30);
  JoustCrownRewardDefinition(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustCrownRewardDefinition::GetProperties(std::string const&) */

void JoustCrownRewardDefinition::GetProperties(string *param_1)

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
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_20,auVar2._0_8_,0x6f,aRStack_18);
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


/* JoustCrownRewardDefinition::~JoustCrownRewardDefinition() */

void __thiscall
JoustCrownRewardDefinition::~JoustCrownRewardDefinition(JoustCrownRewardDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_066af0d0;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x18));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* JoustCrownRewardDefinition::~JoustCrownRewardDefinition() */

void __thiscall
JoustCrownRewardDefinition::~JoustCrownRewardDefinition(JoustCrownRewardDefinition *this)

{
  ~JoustCrownRewardDefinition(this);
  AK::FreeHook(this);
  return;
}

