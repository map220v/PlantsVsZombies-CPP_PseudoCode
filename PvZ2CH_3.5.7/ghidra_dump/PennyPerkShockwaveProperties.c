// Class: PennyPerkShockwaveProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkShockwaveProperties::TranslatePerkName() */

void __thiscall PennyPerkShockwaveProperties::TranslatePerkName(PennyPerkShockwaveProperties *this)

{
  string asStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"[PERK_NAME_SHOCKWAVE]");
  Sexy::ToWString(asStack_18);
  TodStringTranslate(awStack_10);
  FUN_05476c50(awStack_10);
  std::string::~string(asStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkShockwaveProperties::GetDescriptionForLevel(int) */

void PennyPerkShockwaveProperties::GetDescriptionForLevel(int param_1)

{
  ulong uVar1;
  float *pfVar2;
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
  pfVar2 = (float *)FUN_036c7d80(*(undefined8 *)(uVar1 + 0x60),(long)in_w1);
  Sexy::StrFormat(L"%d",awStack_10,(ulong)(uint)(int)*pfVar2);
  TodReplaceString(awStack_18,L"{TIME}",awStack_10);
  FUN_05476c50(awStack_10);
  FUN_05476c50(awStack_18);
  pfVar2 = (float *)FUN_036c7d80(*(undefined8 *)(uVar1 + 0x78),(long)in_w1);
  Sexy::StrFormat(L"%d",awStack_10,(ulong)(uint)(int)*pfVar2);
  TodReplaceString(awStack_20,L"{DISTANCE}",awStack_10);
  FUN_05476c50(awStack_10);
  FUN_05476c50(awStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkShockwaveProperties::StaticClassInit() */

void PennyPerkShockwaveProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"PennyPerkShockwaveProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_036c8808,0x90,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PennyPerkShockwaveProperties::StaticGetClass() */

long * PennyPerkShockwaveProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PennyPerkShockwaveProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyPerkShockwaveProperties::GetClass() const */

long * PennyPerkShockwaveProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"PennyPerkShockwaveProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyPerkShockwaveProperties::PennyPerkShockwaveProperties() */

void __thiscall
PennyPerkShockwaveProperties::PennyPerkShockwaveProperties(PennyPerkShockwaveProperties *this)

{
  PennyPerkProperties::PennyPerkProperties((PennyPerkProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06681e80;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x78));
  return;
}


/* PennyPerkShockwaveProperties::StaticNew() */

PennyPerkShockwaveProperties * PennyPerkShockwaveProperties::StaticNew(void)

{
  PennyPerkShockwaveProperties *this;
  
  this = ::operator_new(0x90);
  PennyPerkShockwaveProperties(this);
  return this;
}


/* PennyPerkShockwaveProperties::~PennyPerkShockwaveProperties() */

void __thiscall
PennyPerkShockwaveProperties::~PennyPerkShockwaveProperties(PennyPerkShockwaveProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06681e80;
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x78));
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x60));
  PennyPerkProperties::~PennyPerkProperties((PennyPerkProperties *)this);
  return;
}


/* PennyPerkShockwaveProperties::~PennyPerkShockwaveProperties() */

void __thiscall
PennyPerkShockwaveProperties::~PennyPerkShockwaveProperties(PennyPerkShockwaveProperties *this)

{
  ~PennyPerkShockwaveProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkShockwaveProperties::GatherResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) const */

void __thiscall
PennyPerkShockwaveProperties::GatherResourceRequirements
          (PennyPerkShockwaveProperties *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"ZombieEightiesGargantuarGroup");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

