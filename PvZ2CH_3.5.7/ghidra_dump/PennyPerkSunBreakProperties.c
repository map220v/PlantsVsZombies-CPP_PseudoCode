// Class: PennyPerkSunBreakProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkSunBreakProperties::GetDescriptionForLevel(int) */

void PennyPerkSunBreakProperties::GetDescriptionForLevel(int param_1)

{
  ulong uVar1;
  uint *puVar2;
  int in_w1;
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  uVar1 = (ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  Sexy::ToWString((string *)(uVar1 + 0x20));
  if (in_w1 < 0) {
    in_w1 = 0;
  }
  puVar2 = (uint *)FUN_036bdf94(*(undefined8 *)(uVar1 + 0x60),(long)in_w1);
  Sexy::StrFormat(L"%d",awStack_10,(ulong)*puVar2);
  TodReplaceString(awStack_18,L"{BURSTS}",awStack_10);
  FUN_05476c50(awStack_10);
  FUN_05476c50(awStack_18);
  puVar2 = (uint *)FUN_036bdf94(*(undefined8 *)(uVar1 + 0x78),(long)in_w1);
  Sexy::StrFormat(L"%d",awStack_10,(ulong)*puVar2);
  TodReplaceString(awStack_20,L"{SUN}",awStack_10);
  FUN_05476c50(awStack_10);
  FUN_05476c50(awStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkSunBreakProperties::StaticClassInit() */

void PennyPerkSunBreakProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"PennyPerkSunBreakProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_036c167c,0x90,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PennyPerkSunBreakProperties::StaticGetClass() */

long * PennyPerkSunBreakProperties::StaticGetClass(void)

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
  uVar2 = PennyPerkProperties::StaticGetClass();
  (*pcVar3)(plVar1,"PennyPerkSunBreakProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyPerkSunBreakProperties::GetClass() const */

long * PennyPerkSunBreakProperties::GetClass(void)

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
  uVar2 = PennyPerkProperties::StaticGetClass();
  (*pcVar3)(plVar1,"PennyPerkSunBreakProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyPerkSunBreakProperties::PennyPerkSunBreakProperties() */

void __thiscall
PennyPerkSunBreakProperties::PennyPerkSunBreakProperties(PennyPerkSunBreakProperties *this)

{
  PennyPerkProperties::PennyPerkProperties((PennyPerkProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06681360;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x78));
  return;
}


/* PennyPerkSunBreakProperties::StaticNew() */

PennyPerkSunBreakProperties * PennyPerkSunBreakProperties::StaticNew(void)

{
  PennyPerkSunBreakProperties *this;
  
  this = ::operator_new(0x90);
  PennyPerkSunBreakProperties(this);
  return this;
}


/* PennyPerkSunBreakProperties::~PennyPerkSunBreakProperties() */

void __thiscall
PennyPerkSunBreakProperties::~PennyPerkSunBreakProperties(PennyPerkSunBreakProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06681360;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x78));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x60));
  PennyPerkProperties::~PennyPerkProperties((PennyPerkProperties *)this);
  return;
}


/* PennyPerkSunBreakProperties::~PennyPerkSunBreakProperties() */

void __thiscall
PennyPerkSunBreakProperties::~PennyPerkSunBreakProperties(PennyPerkSunBreakProperties *this)

{
  ~PennyPerkSunBreakProperties(this);
  AK::FreeHook(this);
  return;
}

