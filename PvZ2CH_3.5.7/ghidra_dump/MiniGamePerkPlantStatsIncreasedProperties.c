// Class: MiniGamePerkPlantStatsIncreasedProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerkPlantStatsIncreasedProperties::GetDescriptionForLevel(int) */

void MiniGamePerkPlantStatsIncreasedProperties::GetDescriptionForLevel(int param_1)

{
  string *psVar1;
  ulong uVar2;
  long lVar3;
  float *pfVar4;
  int in_w1;
  long lVar5;
  double dVar6;
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  uVar2 = (ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  if (in_w1 < 0) {
    psVar1 = (string *)(uVar2 + 0x20);
    Sexy::ToWString(psVar1);
    Sexy::StrFormat(L"%0.2f",awStack_10,0);
    TodReplaceString(awStack_18,L"{NUMBER1}",awStack_10);
    FUN_05476c50(awStack_10);
    FUN_05476c50(awStack_18);
    Sexy::ToWString(psVar1);
    Sexy::StrFormat(L"%0.2f",awStack_18,0);
    TodReplaceString(awStack_20,L"{NUMBER2}",awStack_18);
    FUN_054766c8(auStack_28,awStack_10);
    FUN_05476c50(awStack_10);
    FUN_05476c50(awStack_18);
    FUN_05476c50(awStack_20);
    Sexy::ToWString(psVar1);
    dVar6 = 0.0;
  }
  else {
    psVar1 = (string *)(uVar2 + 0x20);
    lVar5 = (long)in_w1;
    Sexy::ToWString(psVar1);
    lVar3 = FUN_03896484(*(undefined8 *)(uVar2 + 0x30),0);
    pfVar4 = (float *)FUN_03896040(*(undefined8 *)(lVar3 + 0x30),lVar5);
    Sexy::StrFormat(L"%0.2f",awStack_10,(double)(*pfVar4 * 100.0));
    TodReplaceString(awStack_18,L"{NUMBER1}",awStack_10);
    FUN_05476c50(awStack_10);
    FUN_05476c50(awStack_18);
    Sexy::ToWString(psVar1);
    lVar3 = FUN_03896484(*(undefined8 *)(uVar2 + 0x30),0);
    pfVar4 = (float *)FUN_03896040(*(undefined8 *)(lVar3 + 0x30),lVar5);
    Sexy::StrFormat(L"%0.2f",awStack_18,(double)(*pfVar4 * 100.0));
    TodReplaceString(awStack_20,L"{NUMBER2}",awStack_18);
    FUN_054766c8(auStack_28,awStack_10);
    FUN_05476c50(awStack_10);
    FUN_05476c50(awStack_18);
    FUN_05476c50(awStack_20);
    Sexy::ToWString(psVar1);
    lVar3 = FUN_03896484(*(undefined8 *)(uVar2 + 0x30),0);
    pfVar4 = (float *)FUN_03896040(*(undefined8 *)(lVar3 + 0x30),lVar5);
    dVar6 = (double)(*pfVar4 * 100.0);
  }
  Sexy::StrFormat(L"%0.2f",awStack_18,dVar6);
  TodReplaceString(awStack_20,L"{NUMBER3}",awStack_18);
  FUN_054766c8(auStack_28,awStack_10);
  FUN_05476c50(awStack_10);
  FUN_05476c50(awStack_18);
  FUN_05476c50(awStack_20);
  FUN_05476584();
  FUN_05476c50(auStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerkPlantStatsIncreasedProperties::StaticClassInit() */

void MiniGamePerkPlantStatsIncreasedProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"MiniGamePerkPlantStatsIncreasedProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_0389fd04,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGamePerkPlantStatsIncreasedProperties::MiniGamePerkPlantStatsIncreasedProperties() */

void __thiscall
MiniGamePerkPlantStatsIncreasedProperties::MiniGamePerkPlantStatsIncreasedProperties
          (MiniGamePerkPlantStatsIncreasedProperties *this)

{
  MiniGamePerkProperties::MiniGamePerkProperties((MiniGamePerkProperties *)this);
  *(undefined ***)this = &PTR_GetClass_066b00f0;
  return;
}


/* MiniGamePerkPlantStatsIncreasedProperties::StaticNew() */

MiniGamePerkPlantStatsIncreasedProperties *
MiniGamePerkPlantStatsIncreasedProperties::StaticNew(void)

{
  MiniGamePerkPlantStatsIncreasedProperties *this;
  
  this = ::operator_new(0x48);
  MiniGamePerkPlantStatsIncreasedProperties(this);
  return this;
}


/* MiniGamePerkPlantStatsIncreasedProperties::~MiniGamePerkPlantStatsIncreasedProperties() */

void __thiscall
MiniGamePerkPlantStatsIncreasedProperties::~MiniGamePerkPlantStatsIncreasedProperties
          (MiniGamePerkPlantStatsIncreasedProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_066b00f0;
  MiniGamePerkProperties::~MiniGamePerkProperties((MiniGamePerkProperties *)this);
  return;
}


/* MiniGamePerkPlantStatsIncreasedProperties::~MiniGamePerkPlantStatsIncreasedProperties() */

void __thiscall
MiniGamePerkPlantStatsIncreasedProperties::~MiniGamePerkPlantStatsIncreasedProperties
          (MiniGamePerkPlantStatsIncreasedProperties *this)

{
  ~MiniGamePerkPlantStatsIncreasedProperties(this);
  AK::FreeHook(this);
  return;
}


/* MiniGamePerkPlantStatsIncreasedProperties::StaticGetClass() */

long * MiniGamePerkPlantStatsIncreasedProperties::StaticGetClass(void)

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
  uVar2 = MiniGamePerkProperties::StaticGetClass();
  (*pcVar3)(plVar1,"MiniGamePerkPlantStatsIncreasedProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGamePerkPlantStatsIncreasedProperties::GetClass() const */

long * MiniGamePerkPlantStatsIncreasedProperties::GetClass(void)

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
  uVar2 = MiniGamePerkProperties::StaticGetClass();
  (*pcVar3)(plVar1,"MiniGamePerkPlantStatsIncreasedProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

