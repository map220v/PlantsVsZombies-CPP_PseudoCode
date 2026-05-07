// Class: MiniGamePerkGameDurationIncreasedProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerkGameDurationIncreasedProperties::GetDescriptionForLevel(int) */

void MiniGamePerkGameDurationIncreasedProperties::GetDescriptionForLevel(int param_1)

{
  float *pfVar1;
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
    pfVar1 = (float *)FUN_03896040(*(undefined8 *)(uVar2 + 0x48),(long)in_w1);
    uVar2 = (ulong)(uint)(int)*pfVar1;
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
/* MiniGamePerkGameDurationIncreasedProperties::StaticClassInit() */

void MiniGamePerkGameDurationIncreasedProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"MiniGamePerkGameDurationIncreasedProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_0389fe64,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGamePerkGameDurationIncreasedProperties::MiniGamePerkGameDurationIncreasedProperties() */

void __thiscall
MiniGamePerkGameDurationIncreasedProperties::MiniGamePerkGameDurationIncreasedProperties
          (MiniGamePerkGameDurationIncreasedProperties *this)

{
  MiniGamePerkProperties::MiniGamePerkProperties((MiniGamePerkProperties *)this);
  *(undefined ***)this = &PTR_GetClass_066b0230;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  return;
}


/* MiniGamePerkGameDurationIncreasedProperties::StaticNew() */

MiniGamePerkGameDurationIncreasedProperties *
MiniGamePerkGameDurationIncreasedProperties::StaticNew(void)

{
  MiniGamePerkGameDurationIncreasedProperties *this;
  
  this = ::operator_new(0x60);
  MiniGamePerkGameDurationIncreasedProperties(this);
  return this;
}


/* MiniGamePerkGameDurationIncreasedProperties::~MiniGamePerkGameDurationIncreasedProperties() */

void __thiscall
MiniGamePerkGameDurationIncreasedProperties::~MiniGamePerkGameDurationIncreasedProperties
          (MiniGamePerkGameDurationIncreasedProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_066b0230;
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x48));
  MiniGamePerkProperties::~MiniGamePerkProperties((MiniGamePerkProperties *)this);
  return;
}


/* MiniGamePerkGameDurationIncreasedProperties::~MiniGamePerkGameDurationIncreasedProperties() */

void __thiscall
MiniGamePerkGameDurationIncreasedProperties::~MiniGamePerkGameDurationIncreasedProperties
          (MiniGamePerkGameDurationIncreasedProperties *this)

{
  ~MiniGamePerkGameDurationIncreasedProperties(this);
  AK::FreeHook(this);
  return;
}


/* MiniGamePerkGameDurationIncreasedProperties::StaticGetClass() */

long * MiniGamePerkGameDurationIncreasedProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MiniGamePerkGameDurationIncreasedProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGamePerkGameDurationIncreasedProperties::GetClass() const */

long * MiniGamePerkGameDurationIncreasedProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"MiniGamePerkGameDurationIncreasedProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

