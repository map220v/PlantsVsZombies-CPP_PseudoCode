// Class: PvZ1FinishHardLevelOlnyPvZ1Listener


/* PvZ1FinishHardLevelOlnyPvZ1Listener::~PvZ1FinishHardLevelOlnyPvZ1Listener() */

void __thiscall
PvZ1FinishHardLevelOlnyPvZ1Listener::~PvZ1FinishHardLevelOlnyPvZ1Listener
          (PvZ1FinishHardLevelOlnyPvZ1Listener *this)

{
  *(undefined ***)this = &PTR_GetClass_0670f870;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* PvZ1FinishHardLevelOlnyPvZ1Listener::~PvZ1FinishHardLevelOlnyPvZ1Listener() */

void __thiscall
PvZ1FinishHardLevelOlnyPvZ1Listener::~PvZ1FinishHardLevelOlnyPvZ1Listener
          (PvZ1FinishHardLevelOlnyPvZ1Listener *this)

{
  ~PvZ1FinishHardLevelOlnyPvZ1Listener(this);
  AK::FreeHook(this);
  return;
}


/* PvZ1FinishHardLevelOlnyPvZ1Listener::PvZ1FinishHardLevelOlnyPvZ1Listener() */

void __thiscall
PvZ1FinishHardLevelOlnyPvZ1Listener::PvZ1FinishHardLevelOlnyPvZ1Listener
          (PvZ1FinishHardLevelOlnyPvZ1Listener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_0670f870;
  return;
}


/* PvZ1FinishHardLevelOlnyPvZ1Listener::StaticNew() */

PvZ1FinishHardLevelOlnyPvZ1Listener * PvZ1FinishHardLevelOlnyPvZ1Listener::StaticNew(void)

{
  PvZ1FinishHardLevelOlnyPvZ1Listener *this;
  
  this = ::operator_new(0x18);
  PvZ1FinishHardLevelOlnyPvZ1Listener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PvZ1FinishHardLevelOlnyPvZ1Listener::StaticClassInit() */

void PvZ1FinishHardLevelOlnyPvZ1Listener::StaticClassInit(void)

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
    std::string::string(asStack_10,"PvZ1FinishHardLevelOlnyPvZ1Listener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a88ff4,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PvZ1FinishHardLevelOlnyPvZ1Listener::StaticGetClass() */

long * PvZ1FinishHardLevelOlnyPvZ1Listener::StaticGetClass(void)

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
  uVar2 = GeneralTaskListener::StaticGetClass();
  (*pcVar3)(plVar1,"PvZ1FinishHardLevelOlnyPvZ1Listener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PvZ1FinishHardLevelOlnyPvZ1Listener::GetClass() const */

long * PvZ1FinishHardLevelOlnyPvZ1Listener::GetClass(void)

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
  uVar2 = GeneralTaskListener::StaticGetClass();
  (*pcVar3)(plVar1,"PvZ1FinishHardLevelOlnyPvZ1Listener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PvZ1FinishHardLevelOlnyPvZ1Listener::RegisterListener(GeneralTask*) */

void __thiscall
PvZ1FinishHardLevelOlnyPvZ1Listener::RegisterListener
          (PvZ1FinishHardLevelOlnyPvZ1Listener *this,GeneralTask *param_1)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::Mesh::SetListener((Mesh *)this,(MeshListener *)param_1);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPvZ1FinishLevel);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,bool,Sexy::CBMemberTranslatorX<PvZ1FinishHardLevelOlnyPvZ1Listener,void(PvZ1FinishHardLevelOlnyPvZ1Listener::*)(int,bool)>>
            ((MessageRouter *)puVar1,Message::PvZ1FinishLevel,&local_40);
  this[8] = (PvZ1FinishHardLevelOlnyPvZ1Listener)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PvZ1FinishHardLevelOlnyPvZ1Listener::onPvZ1FinishLevel(int, bool) */

void PvZ1FinishHardLevelOlnyPvZ1Listener::onPvZ1FinishLevel(int param_1,bool param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  ProfileMgr *this;
  PlayerInfo *this_00;
  vector *pvVar4;
  long lVar5;
  uint *puVar6;
  uint uVar7;
  long lVar8;
  undefined8 local_68;
  undefined8 local_60;
  uint local_50 [18];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = PVZ1ModeUtils::IsPlayingPVZ1Level();
  if (cVar2 != '\0') {
    local_50[0] = 0;
    local_50[1] = 0;
    local_50[2] = 0;
    local_50[3] = 0;
    local_50[4] = 0;
    local_50[5] = 0;
    local_50[6] = 0;
    local_50[7] = 0;
    local_50[8] = 0;
    local_50[9] = 0;
    local_50[10] = 0;
    local_50[0xb] = 0;
    local_50[0xc] = 0;
    local_50[0xd] = 0;
    local_50[0xe] = 0;
    local_50[0xf] = 0;
    local_50[0x10] = 0;
    uVar3 = PVZ1ModeUtils::GetCurrentStage();
    this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar8 = 0;
    this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
    pvVar4 = (vector *)PlayerInfo::GetPvZ1HardLevelFinishInfoForAchievement(this_00);
    std::vector<PvZ1LevelCompleteInfo,std::allocator<PvZ1LevelCompleteInfo>>::vector
              ((vector<PvZ1LevelCompleteInfo,std::allocator<PvZ1LevelCompleteInfo>> *)&local_68,
               pvVar4);
    lVar5 = FUN_03a79d1c(local_68,local_60);
    if (lVar5 != 0) {
      do {
        puVar6 = (uint *)FUN_03a79d30(local_68,lVar8);
        if ((uVar3 == puVar6[2]) && (uVar1 = *puVar6, uVar1 < 0x11)) {
          uVar7 = 1;
          if (local_50[(int)uVar1] == 0) {
            uVar7 = (uint)(byte)puVar6[1];
          }
          local_50[(int)uVar1] = uVar7;
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 != lVar5);
    }
    if (((((((local_50[0] == 0) || (local_50[1] == 0)) || (local_50[2] == 0)) ||
          ((local_50[3] == 0 || (local_50[4] == 0)))) ||
         ((local_50[5] == 0 || ((local_50[6] == 0 || (local_50[7] == 0)))))) || (local_50[8] == 0))
       || ((((local_50[9] == 0 || (local_50[10] == 0)) || (local_50[0xb] == 0)) ||
           (((local_50[0xc] == 0 || (local_50[0xd] == 0)) ||
            ((local_50[0xe] == 0 || ((local_50[0xf] == 0 || (local_50[0x10] == 0)))))))))) {
      std::vector<PvZ1LevelCompleteInfo,std::allocator<PvZ1LevelCompleteInfo>>::~vector
                ((vector<PvZ1LevelCompleteInfo,std::allocator<PvZ1LevelCompleteInfo>> *)&local_68);
    }
    else {
      (**(code **)(*(long *)(ulong)(uint)param_1 + 0x58))((long *)(ulong)(uint)param_1,1);
      std::vector<PvZ1LevelCompleteInfo,std::allocator<PvZ1LevelCompleteInfo>>::~vector
                ((vector<PvZ1LevelCompleteInfo,std::allocator<PvZ1LevelCompleteInfo>> *)&local_68);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

