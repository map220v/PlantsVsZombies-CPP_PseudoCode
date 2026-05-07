// Class: TravelLogTaskPassLevel


/* TravelLogTaskPassLevel::GetClass() const */

long * TravelLogTaskPassLevel::GetClass(void)

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
  uVar2 = TravelLogTask::StaticGetClass();
  (*pcVar3)(plVar1,"TravelLogTaskPassLevel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TravelLogTaskPassLevel::StaticClassInit() */

void TravelLogTaskPassLevel::StaticClassInit(void)

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
    std::string::string(asStack_10,"TravelLogTaskPassLevel");
    (*pcVar2)(plVar1,asStack_10,FUN_039e965c,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TravelLogTaskPassLevel::StaticGetClass() */

long * TravelLogTaskPassLevel::StaticGetClass(void)

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
  uVar2 = TravelLogTask::StaticGetClass();
  (*pcVar3)(plVar1,"TravelLogTaskPassLevel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TravelLogTaskPassLevel::TravelLogTaskPassLevel() */

void __thiscall TravelLogTaskPassLevel::TravelLogTaskPassLevel(TravelLogTaskPassLevel *this)

{
  TravelLogTask::TravelLogTask((TravelLogTask *)this);
  *(undefined ***)this = &PTR_GetClass_066f5f50;
  return;
}


/* TravelLogTaskPassLevel::StaticNew() */

TravelLogTaskPassLevel * TravelLogTaskPassLevel::StaticNew(void)

{
  TravelLogTaskPassLevel *this;
  
  this = ::operator_new(0x30);
  TravelLogTaskPassLevel(this);
  return this;
}


/* TravelLogTaskPassLevel::~TravelLogTaskPassLevel() */

void __thiscall TravelLogTaskPassLevel::~TravelLogTaskPassLevel(TravelLogTaskPassLevel *this)

{
  *(undefined ***)this = &PTR_GetClass_066f5f50;
  TravelLogTaskWorldTask::RemoveListener((TravelLogTaskWorldTask *)this);
  TravelLogTask::~TravelLogTask((TravelLogTask *)this);
  return;
}


/* TravelLogTaskPassLevel::~TravelLogTaskPassLevel() */

void __thiscall TravelLogTaskPassLevel::~TravelLogTaskPassLevel(TravelLogTaskPassLevel *this)

{
  ~TravelLogTaskPassLevel(this);
  AK::FreeHook(this);
  return;
}


/* TravelLogTaskPassLevel::AddListener() */

void __thiscall TravelLogTaskPassLevel::AddListener(TravelLogTaskPassLevel *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLevelEnded);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<LevelDefinitionForTask*,Sexy::CBMemberTranslatorX<TravelLogTaskPassLevel,void(TravelLogTaskPassLevel::*)(LevelDefinitionForTask*)>>
            ((MessageRouter *)puVar1,Message::LevelEndForTask,&local_40);
  this[0x28] = (TravelLogTaskPassLevel)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TravelLogTaskPassLevel::onLevelEnded(LevelDefinitionForTask*) */

void __thiscall
TravelLogTaskPassLevel::onLevelEnded(TravelLogTaskPassLevel *this,LevelDefinitionForTask *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  LevelDefinitionForTask LVar4;
  ProfileMgr *this_01;
  undefined8 uVar5;
  RtObject *pRVar6;
  TravelLogPassLevelData *pTVar7;
  long lVar8;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_01);
  Sexy::OutputDebugStrF((wchar_t *)"TravelLog Task : LevelEnded Msg START");
  PlantAnimRig_HoyaCordata::getIdleAnimationName();
  uVar5 = FUN_0547429c(asStack_10);
  Sexy::OutputDebugStrF((wchar_t *)"MissionName %s",uVar5);
  std::string::~string(asStack_10);
  uVar5 = FUN_0547429c(param_1);
  Sexy::OutputDebugStrF((wchar_t *)"levelName %s",uVar5);
  Sexy::OutputDebugStrF((wchar_t *)"levelNumber %d",(ulong)*(uint *)(param_1 + 8));
  if (param_1[0xc] == (LevelDefinitionForTask)0x0) {
    Sexy::OutputDebugStrF((wchar_t *)"isHard %s","false");
    LVar4 = param_1[0xd];
  }
  else {
    Sexy::OutputDebugStrF((wchar_t *)"isHard %s",&DAT_0559f690);
    LVar4 = param_1[0xd];
  }
  if (LVar4 == (LevelDefinitionForTask)0x0) {
    Sexy::OutputDebugStrF((wchar_t *)"isBoss %s","false");
    LVar4 = param_1[0xe];
  }
  else {
    Sexy::OutputDebugStrF((wchar_t *)"isBoss %s",&DAT_0559f690);
    LVar4 = param_1[0xe];
  }
  if (LVar4 == (LevelDefinitionForTask)0x0) {
    Sexy::OutputDebugStrF((wchar_t *)"isBattleZ %s","false");
    LVar4 = param_1[0xf];
  }
  else {
    Sexy::OutputDebugStrF((wchar_t *)"isBattleZ %s",&DAT_0559f690);
    LVar4 = param_1[0xf];
  }
  if (LVar4 == (LevelDefinitionForTask)0x0) {
    Sexy::OutputDebugStrF((wchar_t *)"isPvP %s","false");
    LVar4 = param_1[0x10];
  }
  else {
    Sexy::OutputDebugStrF((wchar_t *)"isPvP %s",&DAT_0559f690);
    LVar4 = param_1[0x10];
  }
  if (LVar4 == (LevelDefinitionForTask)0x0) {
    Sexy::OutputDebugStrF((wchar_t *)"isEpicTask %s","false");
    LVar4 = param_1[0x11];
  }
  else {
    Sexy::OutputDebugStrF((wchar_t *)"isEpicTask %s",&DAT_0559f690);
    LVar4 = param_1[0x11];
  }
  if (LVar4 == (LevelDefinitionForTask)0x0) {
    Sexy::OutputDebugStrF((wchar_t *)"isChallenge %s","false");
    LVar4 = param_1[0x21];
  }
  else {
    Sexy::OutputDebugStrF((wchar_t *)"isChallenge %s",&DAT_0559f690);
    LVar4 = param_1[0x21];
  }
  if (LVar4 == (LevelDefinitionForTask)0x0) {
    Sexy::OutputDebugStrF((wchar_t *)"isWin %s","false");
    LVar4 = param_1[0x22];
  }
  else {
    Sexy::OutputDebugStrF((wchar_t *)"isWin %s",&DAT_0559f690);
    LVar4 = param_1[0x22];
  }
  if (LVar4 == (LevelDefinitionForTask)0x0) {
    Sexy::OutputDebugStrF((wchar_t *)"isNormalLevel %s","false");
    Sexy::OutputDebugStrF((wchar_t *)"TravelLog Task : LevelEnded Msg END");
    LVar4 = param_1[0x22];
  }
  else {
    Sexy::OutputDebugStrF((wchar_t *)"isNormalLevel %s",&DAT_0559f690);
    Sexy::OutputDebugStrF((wchar_t *)"TravelLog Task : LevelEnded Msg END");
    LVar4 = param_1[0x22];
  }
  if (LVar4 != (LevelDefinitionForTask)0x0) {
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20);
    pRVar6 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    pTVar7 = Sexy::RtObject::Cast<TravelLogPassLevelData>(pRVar6);
    if ((pTVar7[0x48] == (TravelLogPassLevelData)0x0) ||
       (param_1[0x21] != (LevelDefinitionForTask)0x0)) {
      iVar1 = *(int *)(this + 0x10);
      *(undefined4 *)(this + 0x14) = 1;
      *(int *)(this + 0x10) = iVar1 + 1;
      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      if (*(int *)(lVar8 + 0x40) <= iVar1 + 1) {
        *(undefined4 *)(this + 0x14) = 2;
        (**(code **)(*(long *)this + 0x88))(this);
      }
      (**(code **)(*(long *)this + 0x50))(this);
    }
    uVar2 = *(undefined4 *)(this + 0xc);
    uVar3 = *(undefined4 *)(this + 8);
    FUN_05475d88(asStack_10,param_1);
    LVar4 = param_1[0x21];
    pRVar6 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    pTVar7 = Sexy::RtObject::Cast<TravelLogPassLevelData>(pRVar6);
    LogTravelLogResultData(uVar2,uVar3,asStack_10,LVar4,pTVar7);
    std::string::~string(asStack_10);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

