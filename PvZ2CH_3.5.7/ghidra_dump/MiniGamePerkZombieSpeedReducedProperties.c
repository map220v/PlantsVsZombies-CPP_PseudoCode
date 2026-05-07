// Class: MiniGamePerkZombieSpeedReducedProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerkZombieSpeedReducedProperties::GetDescriptionForLevel(int) */

void MiniGamePerkZombieSpeedReducedProperties::GetDescriptionForLevel(int param_1)

{
  ulong uVar1;
  float *pfVar2;
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
    pfVar2 = (float *)FUN_03896040(*(undefined8 *)(uVar1 + 0x48),(long)in_w1);
    dVar3 = (double)(*pfVar2 * 100.0);
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
/* MiniGamePerkZombieSpeedReducedProperties::StaticClassInit() */

void MiniGamePerkZombieSpeedReducedProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"MiniGamePerkZombieSpeedReducedProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_0389f854,0x88,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGamePerkZombieSpeedReducedProperties::MiniGamePerkZombieSpeedReducedProperties() */

void __thiscall
MiniGamePerkZombieSpeedReducedProperties::MiniGamePerkZombieSpeedReducedProperties
          (MiniGamePerkZombieSpeedReducedProperties *this)

{
  MiniGamePerkProperties::MiniGamePerkProperties((MiniGamePerkProperties *)this);
  *(undefined ***)this = &PTR_GetClass_066afe70;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  ZombieRestrictionSet::ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x60));
  return;
}


/* MiniGamePerkZombieSpeedReducedProperties::StaticNew() */

MiniGamePerkZombieSpeedReducedProperties * MiniGamePerkZombieSpeedReducedProperties::StaticNew(void)

{
  MiniGamePerkZombieSpeedReducedProperties *this;
  
  this = ::operator_new(0x88);
  MiniGamePerkZombieSpeedReducedProperties(this);
  return this;
}


/* MiniGamePerkZombieSpeedReducedProperties::StaticGetClass() */

long * MiniGamePerkZombieSpeedReducedProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MiniGamePerkZombieSpeedReducedProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGamePerkZombieSpeedReducedProperties::GetClass() const */

long * MiniGamePerkZombieSpeedReducedProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"MiniGamePerkZombieSpeedReducedProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGamePerkZombieSpeedReducedProperties::~MiniGamePerkZombieSpeedReducedProperties() */

void __thiscall
MiniGamePerkZombieSpeedReducedProperties::~MiniGamePerkZombieSpeedReducedProperties
          (MiniGamePerkZombieSpeedReducedProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_066afe70;
  ZombieRestrictionSet::~ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x60));
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x48));
  MiniGamePerkProperties::~MiniGamePerkProperties((MiniGamePerkProperties *)this);
  return;
}


/* MiniGamePerkZombieSpeedReducedProperties::~MiniGamePerkZombieSpeedReducedProperties() */

void __thiscall
MiniGamePerkZombieSpeedReducedProperties::~MiniGamePerkZombieSpeedReducedProperties
          (MiniGamePerkZombieSpeedReducedProperties *this)

{
  ~MiniGamePerkZombieSpeedReducedProperties(this);
  AK::FreeHook(this);
  return;
}

