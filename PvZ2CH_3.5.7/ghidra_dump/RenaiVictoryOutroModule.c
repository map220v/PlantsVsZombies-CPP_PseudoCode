// Class: RenaiVictoryOutroModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenaiVictoryOutroModule::StaticClassInit() */

void RenaiVictoryOutroModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"RenaiVictoryOutroModule");
    (*pcVar2)(plVar1,asStack_10,FUN_03d06c14,0x90,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RenaiVictoryOutroModule::StaticGetClass() */

long * RenaiVictoryOutroModule::StaticGetClass(void)

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
  uVar2 = VictoryOutroModule::StaticGetClass();
  (*pcVar3)(plVar1,"RenaiVictoryOutroModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RenaiVictoryOutroModule::giveCustomRewards() */

void RenaiVictoryOutroModule::giveCustomRewards(void)

{
  string *psVar1;
  char cVar2;
  long lVar3;
  ProfileMgr *this;
  PlayerInfo *this_00;
  
  lVar3 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
  if ((lVar3 != 0) && (*(int *)(lVar3 + 0xc4) == 3)) {
    this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    psVar1 = (string *)(lVar3 + 200);
    this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
    cVar2 = PlayerInfo::GetIsPlantUnlocked(this_00,psVar1);
    if (cVar2 == '\0') {
      PlayerInfo::UnlockPlant(this_00,psVar1,false);
      PlayerInfo::AddPlantStartLevel(this_00,psVar1,0);
      return;
    }
  }
  return;
}


/* RenaiVictoryOutroModule::RenaiVictoryOutroModule() */

void __thiscall RenaiVictoryOutroModule::RenaiVictoryOutroModule(RenaiVictoryOutroModule *this)

{
  VictoryOutroModule::VictoryOutroModule((VictoryOutroModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06763410;
  return;
}


/* RenaiVictoryOutroModule::StaticNew() */

RenaiVictoryOutroModule * RenaiVictoryOutroModule::StaticNew(void)

{
  RenaiVictoryOutroModule *this;
  
  this = ::operator_new(0x90);
  RenaiVictoryOutroModule(this);
  return this;
}


/* RenaiVictoryOutroModule::~RenaiVictoryOutroModule() */

void __thiscall RenaiVictoryOutroModule::~RenaiVictoryOutroModule(RenaiVictoryOutroModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06763410;
  VictoryOutroModule::~VictoryOutroModule((VictoryOutroModule *)this);
  return;
}


/* RenaiVictoryOutroModule::~RenaiVictoryOutroModule() */

void __thiscall RenaiVictoryOutroModule::~RenaiVictoryOutroModule(RenaiVictoryOutroModule *this)

{
  ~RenaiVictoryOutroModule(this);
  AK::FreeHook(this);
  return;
}

