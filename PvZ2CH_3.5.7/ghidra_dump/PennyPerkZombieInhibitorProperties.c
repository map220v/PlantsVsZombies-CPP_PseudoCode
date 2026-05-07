// Class: PennyPerkZombieInhibitorProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkZombieInhibitorProperties::TranslatePerkName() */

void PennyPerkZombieInhibitorProperties::TranslatePerkName(void)

{
  long in_x0;
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::ToWString((string *)(in_x0 + 0x80));
  TodStringTranslate(awStack_10);
  FUN_05476c50(awStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkZombieInhibitorProperties::GetDescriptionForLevel(int) */

void PennyPerkZombieInhibitorProperties::GetDescriptionForLevel(int param_1)

{
  MiniGamePerkProperties *this;
  ulong uVar1;
  string *psVar2;
  int in_w1;
  undefined8 uVar3;
  wstring awStack_10 [8];
  long local_8;
  
  this = (MiniGamePerkProperties *)(ulong)(uint)param_1;
  if (in_w1 < 0) {
    in_w1 = 0;
  }
  uVar3 = *(undefined8 *)(this + 0x88);
  local_8 = ___stack_chk_guard;
  uVar1 = FUN_036be248(uVar3,*(undefined8 *)(this + 0x90));
  if ((ulong)(long)in_w1 < uVar1) {
    psVar2 = (string *)FUN_036be254(uVar3,(long)in_w1);
    Sexy::ToWString(psVar2);
    TodStringTranslate(awStack_10);
    FUN_05476c50(awStack_10);
  }
  else {
    MiniGamePerkProperties::GetDescriptionForLevel(this,in_w1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkZombieInhibitorProperties::StaticClassInit() */

void PennyPerkZombieInhibitorProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"PennyPerkZombieInhibitorProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_036c388c,0xa0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PennyPerkZombieInhibitorProperties::StaticGetClass() */

long * PennyPerkZombieInhibitorProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PennyPerkZombieInhibitorProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyPerkZombieInhibitorProperties::GetClass() const */

long * PennyPerkZombieInhibitorProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"PennyPerkZombieInhibitorProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyPerkZombieInhibitorProperties::PennyPerkZombieInhibitorProperties() */

void __thiscall
PennyPerkZombieInhibitorProperties::PennyPerkZombieInhibitorProperties
          (PennyPerkZombieInhibitorProperties *this)

{
  PennyPerkProperties::PennyPerkProperties((PennyPerkProperties *)this);
  *(undefined ***)this = &PTR_GetClass_066814a0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  Set8BytesTo0(this + 0x78);
  Set8BytesTo0(this + 0x80);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x88));
  return;
}


/* PennyPerkZombieInhibitorProperties::StaticNew() */

PennyPerkZombieInhibitorProperties * PennyPerkZombieInhibitorProperties::StaticNew(void)

{
  PennyPerkZombieInhibitorProperties *this;
  
  this = ::operator_new(0xa0);
  PennyPerkZombieInhibitorProperties(this);
  return this;
}


/* PennyPerkZombieInhibitorProperties::~PennyPerkZombieInhibitorProperties() */

void __thiscall
PennyPerkZombieInhibitorProperties::~PennyPerkZombieInhibitorProperties
          (PennyPerkZombieInhibitorProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_066814a0;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x88));
  std::string::~string((string *)(this + 0x80));
  std::string::~string((string *)(this + 0x78));
  std::vector<ClassRestrictionSet,std::allocator<ClassRestrictionSet>>::~vector
            ((vector<ClassRestrictionSet,std::allocator<ClassRestrictionSet>> *)(this + 0x60));
  PennyPerkProperties::~PennyPerkProperties((PennyPerkProperties *)this);
  return;
}


/* PennyPerkZombieInhibitorProperties::~PennyPerkZombieInhibitorProperties() */

void __thiscall
PennyPerkZombieInhibitorProperties::~PennyPerkZombieInhibitorProperties
          (PennyPerkZombieInhibitorProperties *this)

{
  ~PennyPerkZombieInhibitorProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkZombieInhibitorProperties::GatherResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) const */

void __thiscall
PennyPerkZombieInhibitorProperties::GatherResourceRequirements
          (PennyPerkZombieInhibitorProperties *this,set *param_1)

{
  string *psVar1;
  ZombieType *this_00;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  this_00 = (ZombieType *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  ZombieType::AddInGameResourceRequirements(this_00,param_1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

