// Class: JoustProgressiveRewardDefinition


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustProgressiveRewardDefinition::StaticClassInit() */

void JoustProgressiveRewardDefinition::StaticClassInit(void)

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
    std::string::string(asStack_10,"JoustProgressiveRewardDefinition");
    (*pcVar2)(plVar1,asStack_10,FUN_0388c678,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JoustProgressiveRewardDefinition::StaticGetClass() */

long * JoustProgressiveRewardDefinition::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"JoustProgressiveRewardDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* JoustProgressiveRewardDefinition::GetClass() const */

long * JoustProgressiveRewardDefinition::GetClass(void)

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
  (*pcVar3)(plVar1,"JoustProgressiveRewardDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* JoustProgressiveRewardDefinition::JoustProgressiveRewardDefinition() */

void __thiscall
JoustProgressiveRewardDefinition::JoustProgressiveRewardDefinition
          (JoustProgressiveRewardDefinition *this)

{
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_066af1f0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* JoustProgressiveRewardDefinition::StaticNew() */

JoustProgressiveRewardDefinition * JoustProgressiveRewardDefinition::StaticNew(void)

{
  JoustProgressiveRewardDefinition *this;
  
  this = ::operator_new(0x28);
  JoustProgressiveRewardDefinition(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustProgressiveRewardDefinition::GetProperties(std::string const&) */

void JoustProgressiveRewardDefinition::GetProperties(string *param_1)

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
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_20,auVar2._0_8_,0x70,aRStack_18);
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


/* JoustProgressiveRewardDefinition::~JoustProgressiveRewardDefinition() */

void __thiscall
JoustProgressiveRewardDefinition::~JoustProgressiveRewardDefinition
          (JoustProgressiveRewardDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_066af1f0;
  std::vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>>::~vector
            ((vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>> *)
             (this + 0x10));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* JoustProgressiveRewardDefinition::~JoustProgressiveRewardDefinition() */

void __thiscall
JoustProgressiveRewardDefinition::~JoustProgressiveRewardDefinition
          (JoustProgressiveRewardDefinition *this)

{
  ~JoustProgressiveRewardDefinition(this);
  AK::FreeHook(this);
  return;
}

