// Class: MiniGamePerkZombieGlobalStuckProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerkZombieGlobalStuckProperties::GetDescriptionForLevel(int) */

void MiniGamePerkZombieGlobalStuckProperties::GetDescriptionForLevel(int param_1)

{
  ulong uVar1;
  long lVar2;
  int in_w1;
  double dVar3;
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  uVar1 = (ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  if (in_w1 < 0) {
    Sexy::ToWString((string *)(uVar1 + 0x20));
    dVar3 = 0.0;
  }
  else {
    Sexy::ToWString((string *)(uVar1 + 0x20));
    lVar2 = FUN_0389638c(*(undefined8 *)(uVar1 + 0x48),(long)in_w1);
    dVar3 = (double)*(float *)(lVar2 + 4);
  }
  Sexy::StrFormat(L"%0.2f",awStack_10,dVar3);
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
/* MiniGamePerkZombieGlobalStuckProperties::StaticClassInit() */

void MiniGamePerkZombieGlobalStuckProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"MiniGamePerkZombieGlobalStuckData");
    (*pcVar3)(plVar2,asStack_10,FUN_03896238,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"MiniGamePerkZombieGlobalStuckProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_0389faac,0x88,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGamePerkZombieGlobalStuckProperties::MiniGamePerkZombieGlobalStuckProperties() */

void __thiscall
MiniGamePerkZombieGlobalStuckProperties::MiniGamePerkZombieGlobalStuckProperties
          (MiniGamePerkZombieGlobalStuckProperties *this)

{
  MiniGamePerkProperties::MiniGamePerkProperties((MiniGamePerkProperties *)this);
  *(undefined ***)this = &PTR_GetClass_066affb0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  ZombieRestrictionSet::ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x60));
  return;
}


/* MiniGamePerkZombieGlobalStuckProperties::StaticNew() */

MiniGamePerkZombieGlobalStuckProperties * MiniGamePerkZombieGlobalStuckProperties::StaticNew(void)

{
  MiniGamePerkZombieGlobalStuckProperties *this;
  
  this = ::operator_new(0x88);
  MiniGamePerkZombieGlobalStuckProperties(this);
  return this;
}


/* MiniGamePerkZombieGlobalStuckProperties::StaticGetClass() */

long * MiniGamePerkZombieGlobalStuckProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MiniGamePerkZombieGlobalStuckProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGamePerkZombieGlobalStuckProperties::GetClass() const */

long * MiniGamePerkZombieGlobalStuckProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"MiniGamePerkZombieGlobalStuckProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGamePerkZombieGlobalStuckProperties::~MiniGamePerkZombieGlobalStuckProperties() */

void __thiscall
MiniGamePerkZombieGlobalStuckProperties::~MiniGamePerkZombieGlobalStuckProperties
          (MiniGamePerkZombieGlobalStuckProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_066affb0;
  ZombieRestrictionSet::~ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x60));
  std::vector<MiniGamePerkZombieGlobalStuckData,std::allocator<MiniGamePerkZombieGlobalStuckData>>::
  ~vector((vector<MiniGamePerkZombieGlobalStuckData,std::allocator<MiniGamePerkZombieGlobalStuckData>>
           *)(this + 0x48));
  MiniGamePerkProperties::~MiniGamePerkProperties((MiniGamePerkProperties *)this);
  return;
}


/* MiniGamePerkZombieGlobalStuckProperties::~MiniGamePerkZombieGlobalStuckProperties() */

void __thiscall
MiniGamePerkZombieGlobalStuckProperties::~MiniGamePerkZombieGlobalStuckProperties
          (MiniGamePerkZombieGlobalStuckProperties *this)

{
  ~MiniGamePerkZombieGlobalStuckProperties(this);
  AK::FreeHook(this);
  return;
}

