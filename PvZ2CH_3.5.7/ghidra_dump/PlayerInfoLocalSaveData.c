// Class: PlayerInfoLocalSaveData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlayerInfoLocalSaveData::StaticClassInit() */

void PlayerInfoLocalSaveData::StaticClassInit(void)

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
    std::string::string(asStack_10,"Lv5Switch");
    (*pcVar3)(plVar2,asStack_10,FUN_042e9654,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlantWarsLevelTeamData");
    (*pcVar3)(plVar2,asStack_10,FUN_042ea0b0,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlantWarsWorldTeamData");
    (*pcVar3)(plVar2,asStack_10,FUN_042eb2f0,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlayerInfoLocalSaveData");
    (*pcVar3)(plVar2,asStack_10,FUN_042eb638,0x160,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlayerInfoLocalSaveData::StaticGetClass() */

long * PlayerInfoLocalSaveData::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"PlayerInfoLocalSaveData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlayerInfoLocalSaveData::GetClass() const */

long * PlayerInfoLocalSaveData::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"PlayerInfoLocalSaveData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlayerInfoLocalSaveData::PlayerInfoLocalSaveData() */

void __thiscall PlayerInfoLocalSaveData::PlayerInfoLocalSaveData(PlayerInfoLocalSaveData *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_068311c0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xa8));
  Network_ArtifactImprovedPropertySheet::Network_ArtifactImprovedPropertySheet
            ((Network_ArtifactImprovedPropertySheet *)(this + 0xc0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x110));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x128));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x148));
  *(undefined4 *)(this + 0x10) = 0;
  this[0x14] = (PlayerInfoLocalSaveData)0x0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  this[0x1c] = (PlayerInfoLocalSaveData)0x0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  this[0x78] = (PlayerInfoLocalSaveData)0x0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xa4) = 0;
  this[0x108] = (PlayerInfoLocalSaveData)0x0;
  return;
}


/* PlayerInfoLocalSaveData::StaticNew() */

PlayerInfoLocalSaveData * PlayerInfoLocalSaveData::StaticNew(void)

{
  PlayerInfoLocalSaveData *this;
  
  this = ::operator_new(0x160);
  PlayerInfoLocalSaveData(this);
  return this;
}


/* PlayerInfoLocalSaveData::~PlayerInfoLocalSaveData() */

void __thiscall PlayerInfoLocalSaveData::~PlayerInfoLocalSaveData(PlayerInfoLocalSaveData *this)

{
  *(undefined ***)this = &PTR_GetClass_068311c0;
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 0x18))();
  }
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x148));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x128));
  std::vector<PlantWarsWorldTeamData,std::allocator<PlantWarsWorldTeamData>>::~vector
            ((vector<PlantWarsWorldTeamData,std::allocator<PlantWarsWorldTeamData>> *)(this + 0x110)
            );
  Network_ArtifactImprovedPropertySheet::~Network_ArtifactImprovedPropertySheet
            ((Network_ArtifactImprovedPropertySheet *)(this + 0xc0));
  std::vector<Lv5Switch,std::allocator<Lv5Switch>>::~vector
            ((vector<Lv5Switch,std::allocator<Lv5Switch>> *)(this + 0xa8));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x58));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x40));
  std::vector<ArcadeLastPlayData,std::allocator<ArcadeLastPlayData>>::~vector
            ((vector<ArcadeLastPlayData,std::allocator<ArcadeLastPlayData>> *)(this + 0x28));
  nop();
  return;
}


/* PlayerInfoLocalSaveData::~PlayerInfoLocalSaveData() */

void __thiscall PlayerInfoLocalSaveData::~PlayerInfoLocalSaveData(PlayerInfoLocalSaveData *this)

{
  ~PlayerInfoLocalSaveData(this);
  AK::FreeHook(this);
  return;
}

