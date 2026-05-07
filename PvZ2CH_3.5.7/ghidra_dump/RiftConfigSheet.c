// Class: RiftConfigSheet


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftConfigSheet::StaticClassInit() */

void RiftConfigSheet::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"LeagueFrameRange");
    (*pcVar3)(plVar2,asStack_10,FUN_036aa470,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"RiftConfigSheet");
    (*pcVar3)(plVar2,asStack_10,FUN_036ab048,0x200,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftConfigSheet::StaticGetClass() */

long * RiftConfigSheet::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RiftConfigSheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftConfigSheet::GetClass() const */

long * RiftConfigSheet::GetClass(void)

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
  (*pcVar3)(plVar1,"RiftConfigSheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftConfigSheet::ToString() */

void RiftConfigSheet::ToString(void)

{
  long in_x0;
  uint *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0();
  Sexy::StrFormat("Threshold to unlock Zomboss: %d\n",asStack_10,(ulong)*(uint *)(in_x0 + 0x10));
  thunk_FUN_054757c0();
  std::string::~string(asStack_10);
  Sexy::StrFormat("ZPS reset value: %d\n",asStack_10,(ulong)*(uint *)(in_x0 + 0x14));
  thunk_FUN_054757c0();
  std::string::~string(asStack_10);
  Sexy::StrFormat("ZPS max value: %d\n",asStack_10,(ulong)*(uint *)(in_x0 + 0x18));
  thunk_FUN_054757c0();
  std::string::~string(asStack_10);
  Sexy::StrFormat("Penny Fuel max value (refill): %d\n",asStack_10,(ulong)*(uint *)(in_x0 + 0x68));
  thunk_FUN_054757c0();
  std::string::~string(asStack_10);
  Sexy::StrFormat("Zomboss cycle length: %d hours\n",asStack_10,(ulong)*(uint *)(in_x0 + 0xa0));
  thunk_FUN_054757c0();
  std::string::~string(asStack_10);
  Sexy::StrFormat("Zomboss fights per cycle: %d\n",asStack_10,(ulong)*(uint *)(in_x0 + 0xa4));
  thunk_FUN_054757c0();
  std::string::~string(asStack_10);
  FUN_05475ad8();
  puVar1 = (uint *)FUN_036aa6a4(*(undefined8 *)(in_x0 + 0x30),0);
  Sexy::StrFormat("   New: %d\n",asStack_10,(ulong)*puVar1);
  thunk_FUN_054757c0();
  std::string::~string(asStack_10);
  uVar3 = 1;
  while( true ) {
    uVar4 = *(undefined8 *)(in_x0 + 0x30);
    uVar2 = FUN_036aa6ac(uVar4,*(undefined8 *)(in_x0 + 0x38));
    if (uVar2 <= uVar3) break;
    puVar1 = (uint *)FUN_036aa6a4(uVar4,uVar3);
    Sexy::StrFormat("   Play %d: %d\n",asStack_10,uVar3 & 0xffffffff,(ulong)*puVar1);
    thunk_FUN_054757c0();
    std::string::~string(asStack_10);
    uVar3 = uVar3 + 1;
  }
  FUN_05475ad8();
  FUN_05475ad8();
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(in_x0 + 0x70);
    uVar2 = FUN_036aa6ac(uVar4,*(undefined8 *)(in_x0 + 0x78));
    if (uVar2 <= uVar3) break;
    puVar1 = (uint *)FUN_036aa6a4(uVar4,uVar3);
    Sexy::StrFormat("   %d Perks: %d\n",asStack_10,uVar3 + 1 & 0xffffffff,(ulong)*puVar1);
    thunk_FUN_054757c0();
    std::string::~string(asStack_10);
    uVar3 = uVar3 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftConfigSheet::GetProperties(std::string const&) */

void RiftConfigSheet::GetProperties(string *param_1)

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
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_20,auVar2._0_8_,0x76,aRStack_18);
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


/* RiftConfigSheet::~RiftConfigSheet() */

void __thiscall RiftConfigSheet::~RiftConfigSheet(RiftConfigSheet *this)

{
  *(undefined ***)this = &PTR_GetClass_06680850;
  std::
  vector<std::vector<LeagueFrameRange,std::allocator<LeagueFrameRange>>,std::allocator<std::vector<LeagueFrameRange,std::allocator<LeagueFrameRange>>>>
  ::~vector((vector<std::vector<LeagueFrameRange,std::allocator<LeagueFrameRange>>,std::allocator<std::vector<LeagueFrameRange,std::allocator<LeagueFrameRange>>>>
             *)(this + 0x1e8));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x1d0));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x1b8));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x1a0));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x188));
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x170));
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x158));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x138));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x120));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x108));
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0xe0));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0xc0));
  std::vector<ZombieLevelStat,std::allocator<ZombieLevelStat>>::~vector
            ((vector<ZombieLevelStat,std::allocator<ZombieLevelStat>> *)(this + 0xa8));
  std::vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>>::~vector
            ((vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>> *)
             (this + 0x88));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x70));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x48));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x30));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* RiftConfigSheet::~RiftConfigSheet() */

void __thiscall RiftConfigSheet::~RiftConfigSheet(RiftConfigSheet *this)

{
  ~RiftConfigSheet(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftConfigSheet::RiftConfigSheet() */

void __thiscall RiftConfigSheet::RiftConfigSheet(RiftConfigSheet *this)

{
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *this_00;
  char cVar1;
  LevelOfTheDay_RewardItemType aLStack_48 [16];
  undefined4 local_38;
  undefined4 local_20;
  long local_8;
  
  this_00 = (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x88);
  local_8 = ___stack_chk_guard;
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_06680850;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x70));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(this_00);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xa8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xc0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x108));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x120));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x138));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x158));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x170));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x188));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1a0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1b8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1d0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1e8));
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x10) = 100;
  *(undefined4 *)(this + 0x18) = 0x96;
  *(undefined4 *)(this + 0x14) = 5;
  *(undefined4 *)(this + 0x28) = 0x18;
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x30),&DAT_057518f0,3);
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x48),&DAT_05751900,3);
  *(undefined8 *)(this + 0x60) = 0x3c;
  *(undefined4 *)(this + 0x68) = 400;
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x70),&DAT_057518e0,3);
  *(undefined4 *)(this + 0xa0) = 0x18;
  *(undefined4 *)(this + 0xa4) = 1;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0x100) = 0;
  cVar1 = std::vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>>::
          empty((vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>> *
                )this_00);
  if (cVar1 != '\0') {
    LevelOfTheDay_RewardItemType::LevelOfTheDay_RewardItemType(aLStack_48);
    local_38 = 0xb;
    local_20 = 500;
    std::vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>>::
    push_back((vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>> *)
              this_00,aLStack_48);
    LevelOfTheDay_RewardItemType::~LevelOfTheDay_RewardItemType(aLStack_48);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftConfigSheet::StaticNew() */

RiftConfigSheet * RiftConfigSheet::StaticNew(void)

{
  RiftConfigSheet *this;
  
  this = ::operator_new(0x200);
  RiftConfigSheet(this);
  return this;
}

