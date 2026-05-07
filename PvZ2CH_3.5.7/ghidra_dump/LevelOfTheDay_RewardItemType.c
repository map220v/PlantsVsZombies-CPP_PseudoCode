// Class: LevelOfTheDay_RewardItemType


/* LevelOfTheDay_RewardItemType::LevelOfTheDay_RewardItemType(LevelOfTheDay_RewardItemType const&)
    */

void __thiscall
LevelOfTheDay_RewardItemType::LevelOfTheDay_RewardItemType
          (LevelOfTheDay_RewardItemType *this,LevelOfTheDay_RewardItemType *param_1)

{
  undefined4 uVar1;
  
  ObjectTypeDescriptor::ObjectTypeDescriptor
            ((ObjectTypeDescriptor *)this,(ObjectTypeDescriptor *)param_1);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined ***)this = &PTR_GetClass_06926d10;
  FUN_05475d88(this + 0x18,param_1 + 0x18);
  FUN_05475d88(this + 0x20,param_1 + 0x20);
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x28) = uVar1;
  FUN_05475d88(this + 0x30,param_1 + 0x30);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  return;
}


/* LevelOfTheDay_RewardItemType::TEMPNAMEPLACEHOLDERVALUE(LevelOfTheDay_RewardItemType const&) */

LevelOfTheDay_RewardItemType * __thiscall
LevelOfTheDay_RewardItemType::operator=
          (LevelOfTheDay_RewardItemType *this,LevelOfTheDay_RewardItemType *param_1)

{
  undefined4 uVar1;
  
  DIniItem::operator=((DIniItem *)this,(DIniItem *)param_1);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  thunk_FUN_05475e00(this + 0x18,param_1 + 0x18);
  thunk_FUN_05475e00(this + 0x20,param_1 + 0x20);
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x28) = uVar1;
  thunk_FUN_05475e00(this + 0x30,param_1 + 0x30);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  return this;
}


/* LevelOfTheDay_RewardItemType::LevelOfTheDay_RewardItemType() */

void __thiscall
LevelOfTheDay_RewardItemType::LevelOfTheDay_RewardItemType(LevelOfTheDay_RewardItemType *this)

{
  size_t in_x2;
  
  ObjectTypeDescriptor::ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  *(undefined ***)this = &PTR_GetClass_06926d10;
  Set8BytesTo0((string *)(this + 0x18));
  Set8BytesTo0((string *)(this + 0x20));
  Set8BytesTo0((string *)(this + 0x30));
  *(undefined4 *)(this + 0x10) = 0;
  std::string::append((string *)(this + 0x18),"",in_x2);
  std::string::append((string *)(this + 0x20),"",in_x2);
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  std::string::append((string *)(this + 0x30),"",in_x2);
  *(undefined4 *)(this + 0x38) = 0;
  return;
}


/* LevelOfTheDay_RewardItemType::LevelOfTheDay_RewardItemType(LevelOfTheDay_RewardItemType&&) */

void __thiscall
LevelOfTheDay_RewardItemType::LevelOfTheDay_RewardItemType
          (LevelOfTheDay_RewardItemType *this,LevelOfTheDay_RewardItemType *param_1)

{
  undefined4 uVar1;
  
  ObjectTypeDescriptor::ObjectTypeDescriptor
            ((ObjectTypeDescriptor *)this,(ObjectTypeDescriptor *)param_1);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined ***)this = &PTR_GetClass_06926d10;
  FUN_05474148(this + 0x18,param_1 + 0x18);
  FUN_05474148(this + 0x20,param_1 + 0x20);
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x28) = uVar1;
  FUN_05474148(this + 0x30,param_1 + 0x30);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  return;
}


/* LevelOfTheDay_RewardItemType::~LevelOfTheDay_RewardItemType() */

void __thiscall
LevelOfTheDay_RewardItemType::~LevelOfTheDay_RewardItemType(LevelOfTheDay_RewardItemType *this)

{
  *(undefined ***)this = &PTR_GetClass_06926d10;
  std::string::~string((string *)(this + 0x30));
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  ObjectTypeDescriptor::~ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  return;
}


/* LevelOfTheDay_RewardItemType::~LevelOfTheDay_RewardItemType() */

void __thiscall
LevelOfTheDay_RewardItemType::~LevelOfTheDay_RewardItemType(LevelOfTheDay_RewardItemType *this)

{
  ~LevelOfTheDay_RewardItemType(this);
  AK::FreeHook(this);
  return;
}


/* LevelOfTheDay_RewardItemType::StaticNew() */

LevelOfTheDay_RewardItemType * LevelOfTheDay_RewardItemType::StaticNew(void)

{
  LevelOfTheDay_RewardItemType *this;
  
  this = ::operator_new(0x40);
  LevelOfTheDay_RewardItemType(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDay_RewardItemType::StaticClassInit() */

void LevelOfTheDay_RewardItemType::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelOfTheDay_RewardItemType");
    (*pcVar2)(plVar1,asStack_10,FUN_049c35c4,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelOfTheDay_RewardItemType::StaticGetClass() */

long * LevelOfTheDay_RewardItemType::StaticGetClass(void)

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
  uVar2 = ObjectTypeDescriptor::StaticGetClass();
  (*pcVar3)(plVar1,"LevelOfTheDay_RewardItemType",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelOfTheDay_RewardItemType::GetClass() const */

long * LevelOfTheDay_RewardItemType::GetClass(void)

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
  uVar2 = ObjectTypeDescriptor::StaticGetClass();
  (*pcVar3)(plVar1,"LevelOfTheDay_RewardItemType",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelOfTheDay_RewardItemType::IsCommonReward() const */

undefined1 __thiscall
LevelOfTheDay_RewardItemType::IsCommonReward(LevelOfTheDay_RewardItemType *this)

{
  string *psVar1;
  bool bVar2;
  undefined1 uVar3;
  
  psVar1 = (string *)(this + 0x30);
  bVar2 = std::operator==(psVar1,"Common");
  if (((bVar2) || (bVar2 = std::operator==(psVar1,"Fallback"), bVar2)) ||
     (bVar2 = std::operator==(psVar1,"FallbackSenor"), uVar3 = 0, bVar2)) {
    uVar3 = 1;
  }
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDay_RewardItemType::GetAwardSoundForCategory() const */

void LevelOfTheDay_RewardItemType::GetAwardSoundForCategory(void)

{
  long lVar1;
  bool bVar2;
  long in_x0;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  bVar2 = std::operator==((string *)(in_x0 + 0x30),"Common");
  if (bVar2) {
    std::string::string(in_x8,"");
    nop();
  }
  else {
    std::string::string(in_x8,"Play_UI_LOD_Prem_Plant_Win");
    nop();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDay_RewardItemType::GetDisplayText() const */

void LevelOfTheDay_RewardItemType::GetDisplayText(void)

{
  long in_x0;
  string *psVar1;
  undefined8 uVar2;
  int *piVar3;
  string *extraout_x1;
  char *__s;
  string *extraout_x1_00;
  string *extraout_x1_01;
  string *extraout_x1_02;
  string *extraout_x1_03;
  undefined1 auVar4 [16];
  string asStack_30 [8];
  undefined4 local_28 [2];
  wstring awStack_20 [8];
  undefined4 local_18 [2];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(*(undefined4 *)(in_x0 + 0x10)) {
  case 3:
    psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar1);
    Plant::GetFormattedNameString((Plant *)asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    break;
  default:
    std::string::string(asStack_10,"");
    Sexy::UTF8StringToWString((Sexy *)asStack_10,extraout_x1);
    std::string::~string(asStack_10);
    nop();
    break;
  case 0xb:
    __s = "[PINATA_PARTY_COIN_REWARD_TEXT]";
    goto LAB_049c3a80;
  case 0xc:
    __s = "[PINATA_PARTY_GEM_REWARD_TEXT]";
LAB_049c3a80:
    std::string::string((string *)local_18,__s);
    Sexy::UTF8StringToWString((Sexy *)local_18,extraout_x1_00);
    TodStringTranslate((wstring *)asStack_10);
    FUN_05476c50((wstring *)asStack_10);
    std::string::~string((string *)local_18);
    nop();
    local_18[0] = 0;
    piVar3 = eastl::max_alt<int>((int *)(in_x0 + 0x28),(int *)local_18);
    Sexy::CommaSeparate(*piVar3);
    TodReplaceString(awStack_20,L"{NUMBER}",(wstring *)asStack_10);
    FUN_05476c50((wstring *)asStack_10);
    FUN_05476c50(awStack_20);
    break;
  case 0xd:
    FUN_05475d88(asStack_30,in_x0 + 0x18);
    std::string::string((string *)awStack_20,"zombie");
    std::string::string((string *)local_18,"");
    TodReplaceString(asStack_30,(string *)awStack_20,(string *)local_18);
    FUN_05474278(asStack_30,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string((string *)local_18);
    nop();
    std::string::~string((string *)awStack_20);
    nop();
    std::string::string((string *)awStack_20,"vasebreaker");
    std::string::string((string *)local_18,"vasebreaker_");
    TodReplaceString(asStack_30,(string *)awStack_20,(string *)local_18);
    FUN_05474278(asStack_30,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string((string *)local_18);
    nop();
    std::string::~string((string *)awStack_20);
    nop();
    std::string::string((string *)local_28,"powerup");
    std::string::string((string *)awStack_20,"powerup_");
    TodReplaceString(asStack_30,(string *)local_28,(string *)awStack_20);
    Sexy::StringToUpper((Sexy *)local_18,extraout_x1_01);
    FUN_05474278(asStack_30,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string((string *)local_18);
    std::string::~string((string *)awStack_20);
    nop();
    std::string::~string((string *)local_28);
    nop();
    uVar2 = FUN_0547429c(asStack_30);
    Sexy::StrFormat("[%s]",(string *)local_18,uVar2);
    Sexy::UTF8StringToWString((Sexy *)local_18,extraout_x1_02);
    TodStringTranslate((wstring *)asStack_10);
    FUN_05476c50(asStack_10);
    std::string::~string((string *)local_18);
    local_28[0] = 0;
    piVar3 = eastl::max_alt<int>((int *)(in_x0 + 0x28),(int *)local_28);
    Sexy::CommaSeparate(*piVar3);
    uVar2 = FUN_054766ec(asStack_10);
    Sexy::StrFormat(L" x%ls",(string *)local_18,uVar2);
    FUN_05476c50(asStack_10);
    FUN_0342e660((string *)awStack_20,(string *)local_18);
    FUN_05476c50((string *)local_18);
    FUN_05476c50((string *)awStack_20);
    std::string::~string(asStack_30);
    break;
  case 0xe:
    WorldMapUtils::GetLocalizedWorldName((WorldMapUtils *)(in_x0 + 0x18),(string *)local_28);
    std::string::string((string *)local_18,"[PINATA_PARTY_KEY_REWARD_TEXT]");
    Sexy::UTF8StringToWString((Sexy *)local_18,extraout_x1_03);
    TodStringTranslate((wstring *)asStack_10);
    FUN_05476c50((wstring *)asStack_10);
    std::string::~string((string *)local_18);
    nop();
    TodReplaceString(awStack_20,L"{WorldName}",(wstring *)local_28);
    FUN_05476c50(awStack_20);
    FUN_05476c50((string *)local_28);
    break;
  case 0xf:
    FUN_05475d88(asStack_10,in_x0 + 0x18);
    GameFeatureType::GetGameFeatureTypeFromUnlockString((GameFeatureType *)local_18,asStack_10);
    std::string::~string(asStack_10);
    auVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    Sexy::UTF8StringToWString((Sexy *)(auVar4._0_8_ + 0x10),auVar4._8_8_);
    TodStringTranslate((wstring *)asStack_10);
    FUN_05476c50(asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    break;
  case 0x11:
    TodStringTranslate(L"[PINATA_PARTY_COSTUME_REWARD_TEXT]");
    break;
  case 0x14:
    TodStringTranslate(L"[PINATA_PARTY_SPROUT_REWARD_TEXT]");
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

