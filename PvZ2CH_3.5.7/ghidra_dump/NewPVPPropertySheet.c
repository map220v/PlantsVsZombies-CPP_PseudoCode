// Class: NewPVPPropertySheet


/* NewPVPPropertySheet::NewPVPPropertySheet() */

void __thiscall NewPVPPropertySheet::NewPVPPropertySheet(NewPVPPropertySheet *this)

{
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_06647680;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x88));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xa0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xb8));
  JoustHowToPlayScreenData::JoustHowToPlayScreenData((JoustHowToPlayScreenData *)(this + 0xd0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x100));
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)(this + 0x118));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x130));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x148));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x160));
  stMiniGame_rank::stMiniGame_rank((stMiniGame_rank *)(this + 0x178));
  *(undefined4 *)(this + 0x1c) = 200;
  *(undefined4 *)(this + 0x20) = 10000;
  *(undefined4 *)(this + 0x24) = 100;
  *(undefined4 *)(this + 0x28) = 10;
  *(undefined4 *)(this + 0x10) = 0x40000000;
  *(undefined4 *)(this + 0x14) = 5;
  *(undefined4 *)(this + 0x7c) = 0x40000000;
  *(undefined4 *)(this + 0x18) = 1;
  *(undefined4 *)(this + 0x78) = 0x41a00000;
  *(undefined4 *)(this + 0x80) = 0x3f800000;
  return;
}


/* NewPVPPropertySheet::StaticNew() */

NewPVPPropertySheet * NewPVPPropertySheet::StaticNew(void)

{
  NewPVPPropertySheet *this;
  
  this = ::operator_new(0x198);
  NewPVPPropertySheet(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPPropertySheet::StaticClassInit() */

void NewPVPPropertySheet::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  undefined4 local_38 [2];
  pair<std::string,unsigned_int> apStack_30 [16];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (pCVar1 != (CRefSymbolDb *)0x0) {
    plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1);
    if (plVar2 != (long *)0x0) {
      pcVar3 = *(code **)(*plVar2 + 0x18);
      std::string::string(asStack_20,"NewPVPZombieLevelInfo");
      (*pcVar3)(plVar2,asStack_20,FUN_034adfc8,0x10,0);
      std::string::~string(asStack_20);
      nop();
    }
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_20,"NewPVPZombiePacketInfo");
    (*pcVar3)(plVar2,asStack_20,FUN_034dc700,0x20,0);
    std::string::~string(asStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_20,"NewPVPPlantPacketInfo");
    (*pcVar3)(plVar2,asStack_20,FUN_034ade74,8,0);
    std::string::~string(asStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_20,"NewPVPZombieSkillInfo");
    (*pcVar3)(plVar2,asStack_20,FUN_034afaf0,0xc,0);
    std::string::~string(asStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_20,"NewPVPZombieUpgradeInfo");
    (*pcVar3)(plVar2,asStack_20,FUN_034af8c0,0x10,0);
    std::string::~string(asStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_20,"NewPVPSunUpgradeInfo");
    (*pcVar3)(plVar2,asStack_20,FUN_034af624,0x14,0);
    std::string::~string(asStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_20,"NewPVPZombieLevelUpValueData");
    (*pcVar3)(plVar2,asStack_20,FUN_034af3f4,0x10,0);
    std::string::~string(asStack_20);
    nop();
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_20);
  local_38[0] = 0;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"melee",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)asStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 1;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"range",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)asStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 2;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"special",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)asStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
    std::string::string((string *)apStack_30,"NewPVPZombieBattleType");
    (*pcVar3)(plVar2,apStack_30,asStack_20,0);
    std::string::~string((string *)apStack_30);
    nop();
  }
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  ~vector((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
           *)asStack_20);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_20,"NewPVPZombieLevelUpData");
    (*pcVar3)(plVar2,asStack_20,FUN_034dc8f8,0x28,0);
    std::string::~string(asStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_20,"NewPVPZombieLevelUpPropertySheet");
    (*pcVar3)(plVar2,asStack_20,FUN_034dcbd4,0x18,0);
    std::string::~string(asStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_20,"NewPVPCPULevelInfo");
    (*pcVar3)(plVar2,asStack_20,FUN_034b0188,0x14,0);
    std::string::~string(asStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_20,"NewPVPTutorialPlantInfo");
    (*pcVar3)(plVar2,asStack_20,FUN_034afeec,0x14,0);
    std::string::~string(asStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_20,"NewPVPTutorialInfo");
    (*pcVar3)(plVar2,asStack_20,FUN_034dcd5c,0x20,0);
    std::string::~string(asStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_20,"NewPVPPropertySheet");
    (*pcVar3)(plVar2,asStack_20,FUN_034f776c,0x198,0);
    std::string::~string(asStack_20);
    nop();
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* NewPVPPropertySheet::StaticGetClass() */

long * NewPVPPropertySheet::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPPropertySheet::GetClass() const */

long * NewPVPPropertySheet::GetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPPropertySheet::Copy(NewPVPPropertySheet const&) */

void __thiscall NewPVPPropertySheet::Copy(NewPVPPropertySheet *this,NewPVPPropertySheet *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  uVar4 = *(undefined4 *)(param_1 + 0x1c);
  uVar5 = *(undefined4 *)(param_1 + 0x20);
  uVar6 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x18) = uVar2;
  *(undefined4 *)(this + 0x14) = uVar3;
  *(undefined4 *)(this + 0x1c) = uVar4;
  *(undefined4 *)(this + 0x20) = uVar5;
  *(undefined4 *)(this + 0x24) = uVar6;
  *(undefined4 *)(this + 0x10) = uVar1;
  std::vector<ZombieLevelStat,std::allocator<ZombieLevelStat>>::operator=
            ((vector<ZombieLevelStat,std::allocator<ZombieLevelStat>> *)(this + 0x30),
             (vector *)(param_1 + 0x30));
  std::vector<NewPVPZombiePacketInfo,std::allocator<NewPVPZombiePacketInfo>>::operator=
            ((vector<NewPVPZombiePacketInfo,std::allocator<NewPVPZombiePacketInfo>> *)(this + 0x48),
             (vector *)(param_1 + 0x48));
  std::vector<NewPVPPlantPacketInfo,std::allocator<NewPVPPlantPacketInfo>>::operator=
            ((vector<NewPVPPlantPacketInfo,std::allocator<NewPVPPlantPacketInfo>> *)(this + 0x60),
             (vector *)(param_1 + 0x60));
  uVar1 = *(undefined4 *)(param_1 + 0x7c);
  uVar2 = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(this + 0x7c) = uVar1;
  *(undefined4 *)(this + 0x80) = uVar2;
  std::vector<NewPVPZombieSkillInfo,std::allocator<NewPVPZombieSkillInfo>>::operator=
            ((vector<NewPVPZombieSkillInfo,std::allocator<NewPVPZombieSkillInfo>> *)(this + 0x88),
             (vector *)(param_1 + 0x88));
  std::vector<NewPVPZombieUpgradeInfo,std::allocator<NewPVPZombieUpgradeInfo>>::operator=
            ((vector<NewPVPZombieUpgradeInfo,std::allocator<NewPVPZombieUpgradeInfo>> *)
             (this + 0xa0),(vector *)(param_1 + 0xa0));
  std::vector<NewPVPSunUpgradeInfo,std::allocator<NewPVPSunUpgradeInfo>>::operator=
            ((vector<NewPVPSunUpgradeInfo,std::allocator<NewPVPSunUpgradeInfo>> *)(this + 0xb8),
             (vector *)(param_1 + 0xb8));
  JoustHowToPlayScreenData::operator=
            ((JoustHowToPlayScreenData *)(this + 0xd0),(JoustHowToPlayScreenData *)(param_1 + 0xd0))
  ;
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x100),(vector *)(param_1 + 0x100));
  NewPVPZombieLevelUpPropertySheet::operator=
            ((NewPVPZombieLevelUpPropertySheet *)(this + 0x118),
             (NewPVPZombieLevelUpPropertySheet *)(param_1 + 0x118));
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x130),(vector *)(param_1 + 0x130));
  std::
  vector<std::vector<NewPVPCPULevelInfo,std::allocator<NewPVPCPULevelInfo>>,std::allocator<std::vector<NewPVPCPULevelInfo,std::allocator<NewPVPCPULevelInfo>>>>
  ::operator=((vector<std::vector<NewPVPCPULevelInfo,std::allocator<NewPVPCPULevelInfo>>,std::allocator<std::vector<NewPVPCPULevelInfo,std::allocator<NewPVPCPULevelInfo>>>>
               *)(this + 0x148),(vector *)(param_1 + 0x148));
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x160),(vector *)(param_1 + 0x160));
  NewPVPTutorialInfo::operator=
            ((NewPVPTutorialInfo *)(this + 0x178),(NewPVPTutorialInfo *)(param_1 + 0x178));
  return;
}


/* NewPVPPropertySheet::~NewPVPPropertySheet() */

void __thiscall NewPVPPropertySheet::~NewPVPPropertySheet(NewPVPPropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_06647680;
  NewPVPTutorialInfo::~NewPVPTutorialInfo((NewPVPTutorialInfo *)(this + 0x178));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x160));
  std::
  vector<std::vector<NewPVPCPULevelInfo,std::allocator<NewPVPCPULevelInfo>>,std::allocator<std::vector<NewPVPCPULevelInfo,std::allocator<NewPVPCPULevelInfo>>>>
  ::~vector((vector<std::vector<NewPVPCPULevelInfo,std::allocator<NewPVPCPULevelInfo>>,std::allocator<std::vector<NewPVPCPULevelInfo,std::allocator<NewPVPCPULevelInfo>>>>
             *)(this + 0x148));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x130));
  NewPVPZombieLevelUpPropertySheet::~NewPVPZombieLevelUpPropertySheet
            ((NewPVPZombieLevelUpPropertySheet *)(this + 0x118));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x100));
  JoustHowToPlayScreenData::~JoustHowToPlayScreenData((JoustHowToPlayScreenData *)(this + 0xd0));
  std::vector<NewPVPSunUpgradeInfo,std::allocator<NewPVPSunUpgradeInfo>>::~vector
            ((vector<NewPVPSunUpgradeInfo,std::allocator<NewPVPSunUpgradeInfo>> *)(this + 0xb8));
  std::vector<NewPVPZombieUpgradeInfo,std::allocator<NewPVPZombieUpgradeInfo>>::~vector
            ((vector<NewPVPZombieUpgradeInfo,std::allocator<NewPVPZombieUpgradeInfo>> *)
             (this + 0xa0));
  std::vector<NewPVPZombieSkillInfo,std::allocator<NewPVPZombieSkillInfo>>::~vector
            ((vector<NewPVPZombieSkillInfo,std::allocator<NewPVPZombieSkillInfo>> *)(this + 0x88));
  std::vector<NewPVPPlantPacketInfo,std::allocator<NewPVPPlantPacketInfo>>::~vector
            ((vector<NewPVPPlantPacketInfo,std::allocator<NewPVPPlantPacketInfo>> *)(this + 0x60));
  std::vector<NewPVPZombiePacketInfo,std::allocator<NewPVPZombiePacketInfo>>::~vector
            ((vector<NewPVPZombiePacketInfo,std::allocator<NewPVPZombiePacketInfo>> *)(this + 0x48))
  ;
  std::vector<ZombieLevelStat,std::allocator<ZombieLevelStat>>::~vector
            ((vector<ZombieLevelStat,std::allocator<ZombieLevelStat>> *)(this + 0x30));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* NewPVPPropertySheet::~NewPVPPropertySheet() */

void __thiscall NewPVPPropertySheet::~NewPVPPropertySheet(NewPVPPropertySheet *this)

{
  ~NewPVPPropertySheet(this);
  AK::FreeHook(this);
  return;
}

