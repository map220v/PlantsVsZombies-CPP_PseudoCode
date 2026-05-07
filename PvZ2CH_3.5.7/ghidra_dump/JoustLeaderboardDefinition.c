// Class: JoustLeaderboardDefinition


/* JoustLeaderboardDefinition::~JoustLeaderboardDefinition() */

void __thiscall
JoustLeaderboardDefinition::~JoustLeaderboardDefinition(JoustLeaderboardDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_066af040;
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* JoustLeaderboardDefinition::~JoustLeaderboardDefinition() */

void __thiscall
JoustLeaderboardDefinition::~JoustLeaderboardDefinition(JoustLeaderboardDefinition *this)

{
  ~JoustLeaderboardDefinition(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustLeaderboardDefinition::StaticClassInit() */

void JoustLeaderboardDefinition::StaticClassInit(void)

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
    std::string::string(asStack_10,"JoustLeaderboardDefinition");
    (*pcVar2)(plVar1,asStack_10,FUN_0388abc4,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JoustLeaderboardDefinition::StaticGetClass() */

long * JoustLeaderboardDefinition::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"JoustLeaderboardDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* JoustLeaderboardDefinition::GetClass() const */

long * JoustLeaderboardDefinition::GetClass(void)

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
  (*pcVar3)(plVar1,"JoustLeaderboardDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* JoustLeaderboardDefinition::JoustLeaderboardDefinition() */

void __thiscall
JoustLeaderboardDefinition::JoustLeaderboardDefinition(JoustLeaderboardDefinition *this)

{
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined4 *)(this + 0x10) = 8;
  *(undefined ***)this = &PTR_GetClass_066af040;
  *(undefined4 *)(this + 0x14) = 0xf;
  *(undefined4 *)(this + 0x20) = 10;
  *(undefined4 *)(this + 0x18) = 3;
  *(undefined4 *)(this + 0x1c) = 3;
  *(undefined4 *)(this + 0x24) = 2;
  return;
}


/* JoustLeaderboardDefinition::StaticNew() */

JoustLeaderboardDefinition * JoustLeaderboardDefinition::StaticNew(void)

{
  JoustLeaderboardDefinition *this;
  
  this = ::operator_new(0x28);
  JoustLeaderboardDefinition(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustLeaderboardDefinition::GetProperties(std::string const&) */

void JoustLeaderboardDefinition::GetProperties(string *param_1)

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
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_20,auVar2._0_8_,0x6e,aRStack_18);
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

