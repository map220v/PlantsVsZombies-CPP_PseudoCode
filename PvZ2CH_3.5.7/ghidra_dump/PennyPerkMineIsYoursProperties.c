// Class: PennyPerkMineIsYoursProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkMineIsYoursProperties::GetDescriptionForLevel(int) */

void PennyPerkMineIsYoursProperties::GetDescriptionForLevel(int param_1)

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
  puVar2 = (uint *)FUN_036c62e8(*(undefined8 *)(uVar1 + 0x60),(long)in_w1);
  Sexy::StrFormat(L"%d",awStack_10,(ulong)*puVar2);
  TodReplaceString(awStack_18,L"{COUNT}",awStack_10);
  FUN_05476c50(awStack_10);
  FUN_05476c50(awStack_18);
  puVar2 = (uint *)FUN_036c62e8(*(undefined8 *)(uVar1 + 0x78),(long)in_w1);
  Sexy::StrFormat(L"%d",awStack_10,(ulong)*puVar2);
  TodReplaceString(awStack_20,L"{TIME}",awStack_10);
  FUN_05476c50(awStack_10);
  FUN_05476c50(awStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkMineIsYoursProperties::StaticClassInit() */

void PennyPerkMineIsYoursProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"PennyPerkMineIsYoursProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_036c68f0,0xa0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PennyPerkMineIsYoursProperties::StaticGetClass() */

long * PennyPerkMineIsYoursProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PennyPerkMineIsYoursProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyPerkMineIsYoursProperties::GetClass() const */

long * PennyPerkMineIsYoursProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"PennyPerkMineIsYoursProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyPerkMineIsYoursProperties::PennyPerkMineIsYoursProperties() */

void __thiscall
PennyPerkMineIsYoursProperties::PennyPerkMineIsYoursProperties(PennyPerkMineIsYoursProperties *this)

{
  PennyPerkProperties::PennyPerkProperties((PennyPerkProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06681ba0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x78));
  Set8BytesTo0(this + 0x98);
  return;
}


/* PennyPerkMineIsYoursProperties::StaticNew() */

PennyPerkMineIsYoursProperties * PennyPerkMineIsYoursProperties::StaticNew(void)

{
  PennyPerkMineIsYoursProperties *this;
  
  this = ::operator_new(0xa0);
  PennyPerkMineIsYoursProperties(this);
  return this;
}


/* PennyPerkMineIsYoursProperties::~PennyPerkMineIsYoursProperties() */

void __thiscall
PennyPerkMineIsYoursProperties::~PennyPerkMineIsYoursProperties
          (PennyPerkMineIsYoursProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06681ba0;
  std::string::~string((string *)(this + 0x98));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x78));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x60));
  PennyPerkProperties::~PennyPerkProperties((PennyPerkProperties *)this);
  return;
}


/* PennyPerkMineIsYoursProperties::~PennyPerkMineIsYoursProperties() */

void __thiscall
PennyPerkMineIsYoursProperties::~PennyPerkMineIsYoursProperties
          (PennyPerkMineIsYoursProperties *this)

{
  ~PennyPerkMineIsYoursProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkMineIsYoursProperties::GatherResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) const */

void __thiscall
PennyPerkMineIsYoursProperties::GatherResourceRequirements
          (PennyPerkMineIsYoursProperties *this,set *param_1)

{
  bool bVar1;
  string *psVar2;
  long *plVar3;
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_10,"potatomine");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  if (bVar1) {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    (**(code **)(*plVar3 + 0x48))(plVar3,param_1);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

