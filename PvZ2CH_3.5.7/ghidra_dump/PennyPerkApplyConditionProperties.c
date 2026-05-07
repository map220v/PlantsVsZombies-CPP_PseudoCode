// Class: PennyPerkApplyConditionProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkApplyConditionProperties::GetDescriptionForLevel(int) */

void PennyPerkApplyConditionProperties::GetDescriptionForLevel(int param_1)

{
  ulong uVar1;
  float *pfVar2;
  uint *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  int in_w1;
  string *extraout_x1;
  ulong uVar7;
  wstring awStack_48 [8];
  wstring awStack_40 [8];
  wstring awStack_38 [8];
  wstring awStack_30 [8];
  Sexy aSStack_28 [8];
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  uVar1 = (ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  Sexy::ToWString((string *)(uVar1 + 0x20));
  if (in_w1 < 0) {
    in_w1 = 0;
  }
  uVar7 = (ulong)in_w1;
  pfVar2 = (float *)FUN_036be178(*(undefined8 *)(uVar1 + 0x60),uVar7);
  Sexy::StrFormat(L"%d",asStack_10,(ulong)(uint)(int)*pfVar2);
  TodReplaceString(awStack_18,L"{TIME}",(wstring *)asStack_10);
  FUN_05476c50(asStack_10);
  FUN_05476c50(awStack_18);
  pfVar2 = (float *)FUN_036be178(*(undefined8 *)(uVar1 + 0x90),uVar7);
  Sexy::StrFormat(L"%d",asStack_10,(ulong)(uint)(int)*pfVar2);
  TodReplaceString(awStack_48,L"{DURATION}",(wstring *)asStack_10);
  FUN_05476c50(asStack_10);
  puVar3 = (uint *)FUN_036bdf94(*(undefined8 *)(uVar1 + 0x78),uVar7);
  Sexy::StrFormat(L"%d",asStack_10,(ulong)*puVar3);
  TodReplaceString(awStack_40,L"{DAMAGE}",(wstring *)asStack_10);
  FUN_05476c50(asStack_10);
  FUN_05477b24(awStack_30,awStack_38);
  uVar4 = *(undefined8 *)(uVar1 + 0xc0);
  uVar5 = FUN_036bdf7c(uVar4,*(undefined8 *)(uVar1 + 200));
  if ((uVar7 < uVar5) &&
     (uVar5 = FUN_036bdf7c(*(undefined8 *)(uVar1 + 0xd8),*(undefined8 *)(uVar1 + 0xe0)),
     uVar7 < uVar5)) {
    puVar3 = (uint *)FUN_036bdf94(uVar4,uVar7);
    Sexy::StrFormat(L"%d",awStack_18,(ulong)*puVar3);
    TodReplaceString(awStack_38,L"{NUMBER}",awStack_18);
    FUN_054766c8(awStack_30,asStack_10);
    FUN_05476c50(asStack_10);
    FUN_05476c50(awStack_18);
  }
  puVar6 = (undefined4 *)FUN_036be328(*(undefined8 *)(uVar1 + 0xa8),0);
  ConvertZombieConditionToString(aSStack_28,*puVar6);
  Sexy::StringToUpper(aSStack_28,extraout_x1);
  uVar4 = FUN_0547429c(awStack_18);
  Sexy::StrFormat("[%s]",asStack_10,uVar4);
  Sexy::ToWString(asStack_10);
  std::string::~string(asStack_10);
  std::string::~string((string *)awStack_18);
  TodReplaceString(awStack_30,L"{CONDITION}",awStack_20);
  FUN_05476c50(awStack_20);
  std::string::~string((string *)aSStack_28);
  FUN_05476c50(awStack_30);
  FUN_05476c50(awStack_38);
  FUN_05476c50(awStack_40);
  FUN_05476c50(awStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkApplyConditionProperties::TranslatePerkName() */

void PennyPerkApplyConditionProperties::TranslatePerkName(void)

{
  long in_x0;
  undefined4 *puVar1;
  undefined8 uVar2;
  string *extraout_x1;
  wstring awStack_30 [8];
  Sexy aSStack_28 [8];
  wstring awStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_30,L"[PERK_NAME_APPLYCONDITION]",asStack_10);
  nop();
  puVar1 = (undefined4 *)FUN_036be328(*(undefined8 *)(in_x0 + 0xa8),0);
  ConvertZombieConditionToString(aSStack_28,*puVar1);
  Sexy::StringToUpper(aSStack_28,extraout_x1);
  uVar2 = FUN_0547429c(asStack_18);
  Sexy::StrFormat("[%s]",asStack_10,uVar2);
  Sexy::ToWString(asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  TodReplaceString(awStack_30,L"{CONDITION}",awStack_20);
  FUN_05476c50(awStack_20);
  std::string::~string((string *)aSStack_28);
  FUN_05476c50(awStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkApplyConditionProperties::StaticClassInit() */

void PennyPerkApplyConditionProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"PennyPerkApplyConditionProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_036c3b4c,0xf0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PennyPerkApplyConditionProperties::StaticGetClass() */

long * PennyPerkApplyConditionProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PennyPerkApplyConditionProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyPerkApplyConditionProperties::GetClass() const */

long * PennyPerkApplyConditionProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"PennyPerkApplyConditionProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyPerkApplyConditionProperties::PennyPerkApplyConditionProperties() */

void __thiscall
PennyPerkApplyConditionProperties::PennyPerkApplyConditionProperties
          (PennyPerkApplyConditionProperties *this)

{
  PennyPerkProperties::PennyPerkProperties((PennyPerkProperties *)this);
  *(undefined ***)this = &PTR_GetClass_066815e0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x78));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x90));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xa8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xc0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xd8));
  return;
}


/* PennyPerkApplyConditionProperties::StaticNew() */

PennyPerkApplyConditionProperties * PennyPerkApplyConditionProperties::StaticNew(void)

{
  PennyPerkApplyConditionProperties *this;
  
  this = ::operator_new(0xf0);
  PennyPerkApplyConditionProperties(this);
  return this;
}


/* PennyPerkApplyConditionProperties::~PennyPerkApplyConditionProperties() */

void __thiscall
PennyPerkApplyConditionProperties::~PennyPerkApplyConditionProperties
          (PennyPerkApplyConditionProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_066815e0;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0xd8));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0xc0));
  std::vector<ZombieConditions,std::allocator<ZombieConditions>>::~vector
            ((vector<ZombieConditions,std::allocator<ZombieConditions>> *)(this + 0xa8));
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x90));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x78));
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x60));
  PennyPerkProperties::~PennyPerkProperties((PennyPerkProperties *)this);
  return;
}


/* PennyPerkApplyConditionProperties::~PennyPerkApplyConditionProperties() */

void __thiscall
PennyPerkApplyConditionProperties::~PennyPerkApplyConditionProperties
          (PennyPerkApplyConditionProperties *this)

{
  ~PennyPerkApplyConditionProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkApplyConditionProperties::GatherResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) const */

void __thiscall
PennyPerkApplyConditionProperties::GatherResourceRequirements
          (PennyPerkApplyConditionProperties *this,set *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = FUN_036c1cb8(*(undefined8 *)(this + 0xa8));
  uVar3 = FUN_036c1d08(*(undefined8 *)(this + 0xb0));
  local_1c = 0x19;
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<ZombieConditions_const*,std::vector<ZombieConditions,std::allocator<ZombieConditions>>>,ZombieConditions>
                       (uVar2,uVar3,&local_1c);
  local_10 = FUN_036c1d08(*(undefined8 *)(this + 0xb0));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    std::string::string((string *)&local_10,"PlantHypnoShroom");
    std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
              ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
               (string *)&local_10);
    std::string::~string((string *)&local_10);
    nop();
  }
  uVar2 = FUN_036c1cb8(*(undefined8 *)(this + 0xa8));
  uVar3 = FUN_036c1d08(*(undefined8 *)(this + 0xb0));
  local_1c = 0x40;
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<ZombieConditions_const*,std::vector<ZombieConditions,std::allocator<ZombieConditions>>>,ZombieConditions>
                       (uVar2,uVar3,&local_1c);
  local_10 = FUN_036c1d08(*(undefined8 *)(this + 0xb0));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    std::string::string((string *)&local_10,"PlantShrinkingViolet");
    std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
              ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
               (string *)&local_10);
    std::string::~string((string *)&local_10);
    nop();
  }
  uVar2 = FUN_036c1cb8(*(undefined8 *)(this + 0xa8));
  uVar3 = FUN_036c1d08(*(undefined8 *)(this + 0xb0));
  local_1c = 0x2d;
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<ZombieConditions_const*,std::vector<ZombieConditions,std::allocator<ZombieConditions>>>,ZombieConditions>
                       (uVar2,uVar3,&local_1c);
  local_10 = FUN_036c1d08(*(undefined8 *)(this + 0xb0));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    std::string::string((string *)&local_10,"PlantStallia");
    std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
              ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
               (string *)&local_10);
    std::string::~string((string *)&local_10);
    nop();
  }
  uVar2 = FUN_036c1cb8(*(undefined8 *)(this + 0xa8));
  uVar3 = FUN_036c1d08(*(undefined8 *)(this + 0xb0));
  local_1c = 1;
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<ZombieConditions_const*,std::vector<ZombieConditions,std::allocator<ZombieConditions>>>,ZombieConditions>
                       (uVar2,uVar3,&local_1c);
  local_10 = FUN_036c1d08(*(undefined8 *)(this + 0xb0));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    std::string::string((string *)&local_10,"FreezonEffectGroup");
    std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
              ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
               (string *)&local_10);
    std::string::~string((string *)&local_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

