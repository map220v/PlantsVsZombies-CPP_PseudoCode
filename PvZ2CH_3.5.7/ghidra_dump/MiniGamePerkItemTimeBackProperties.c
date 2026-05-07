// Class: MiniGamePerkItemTimeBackProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerkItemTimeBackProperties::GetDescriptionForLevel(int) */

void MiniGamePerkItemTimeBackProperties::GetDescriptionForLevel(int param_1)

{
  uint *puVar1;
  int in_w1;
  ulong uVar2;
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  uVar2 = (ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  if (in_w1 < 0) {
    Sexy::ToWString((string *)(uVar2 + 0x20));
    uVar2 = 0;
  }
  else {
    Sexy::ToWString((string *)(uVar2 + 0x20));
    puVar1 = (uint *)FUN_03896768(*(undefined8 *)(uVar2 + 0x48),(long)in_w1);
    uVar2 = (ulong)*puVar1;
  }
  Sexy::StrFormat(L"%d",awStack_10,uVar2);
  TodReplaceString(awStack_18,L"{NUMBER}",awStack_10);
  FUN_05476c50(awStack_10);
  FUN_05476c50(awStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerkItemTimeBackProperties::StaticClassInit() */

void MiniGamePerkItemTimeBackProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"MiniGamePerkItemTimeBackProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_038a0a84,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGamePerkItemTimeBackProperties::MiniGamePerkItemTimeBackProperties() */

void __thiscall
MiniGamePerkItemTimeBackProperties::MiniGamePerkItemTimeBackProperties
          (MiniGamePerkItemTimeBackProperties *this)

{
  MiniGamePerkItemProperties::MiniGamePerkItemProperties((MiniGamePerkItemProperties *)this);
  *(undefined ***)this = &PTR_GetClass_066b0b40;
  return;
}


/* MiniGamePerkItemTimeBackProperties::StaticNew() */

MiniGamePerkItemTimeBackProperties * MiniGamePerkItemTimeBackProperties::StaticNew(void)

{
  MiniGamePerkItemTimeBackProperties *this;
  
  this = ::operator_new(0x68);
  MiniGamePerkItemTimeBackProperties(this);
  return this;
}


/* MiniGamePerkItemTimeBackProperties::~MiniGamePerkItemTimeBackProperties() */

void __thiscall
MiniGamePerkItemTimeBackProperties::~MiniGamePerkItemTimeBackProperties
          (MiniGamePerkItemTimeBackProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_066b0b40;
  MiniGamePerkItemProperties::~MiniGamePerkItemProperties((MiniGamePerkItemProperties *)this);
  return;
}


/* MiniGamePerkItemTimeBackProperties::~MiniGamePerkItemTimeBackProperties() */

void __thiscall
MiniGamePerkItemTimeBackProperties::~MiniGamePerkItemTimeBackProperties
          (MiniGamePerkItemTimeBackProperties *this)

{
  ~MiniGamePerkItemTimeBackProperties(this);
  AK::FreeHook(this);
  return;
}


/* MiniGamePerkItemTimeBackProperties::StaticGetClass() */

long * MiniGamePerkItemTimeBackProperties::StaticGetClass(void)

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
  uVar2 = MiniGamePerkItemProperties::StaticGetClass();
  (*pcVar3)(plVar1,"MiniGamePerkItemTimeBackProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGamePerkItemTimeBackProperties::GetClass() const */

long * MiniGamePerkItemTimeBackProperties::GetClass(void)

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
  uVar2 = MiniGamePerkItemProperties::StaticGetClass();
  (*pcVar3)(plVar1,"MiniGamePerkItemTimeBackProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

