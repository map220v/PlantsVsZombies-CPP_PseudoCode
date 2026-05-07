// Class: ChallengeModule


/* ChallengeModule::ChallengeModule() */

void __thiscall ChallengeModule::ChallengeModule(ChallengeModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06739190;
  return;
}


/* ChallengeModule::~ChallengeModule() */

void __thiscall ChallengeModule::~ChallengeModule(ChallengeModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06739190;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* ChallengeModule::~ChallengeModule() */

void __thiscall ChallengeModule::~ChallengeModule(ChallengeModule *this)

{
  ~ChallengeModule(this);
  AK::FreeHook(this);
  return;
}


/* ChallengeModule::saveChallengeStateToProfile() */

void __thiscall ChallengeModule::saveChallengeStateToProfile(ChallengeModule *this)

{
  (**(code **)(*(long *)this + 0xa8))();
  MessageRouter::Broadcast((_func_void *)gMessageRouter);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChallengeModule::StaticClassInit() */

void ChallengeModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"ChallengeModule");
    (*pcVar2)(plVar1,asStack_10,FUN_03bc0a74,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ChallengeModule::StaticGetClass() */

long * ChallengeModule::StaticGetClass(void)

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
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"ChallengeModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ChallengeModule::setActiveChallengesCompletedAtIndex(int) */

void ChallengeModule::setActiveChallengesCompletedAtIndex(int param_1)

{
  *(undefined1 *)((ulong)(uint)param_1 + 0x18) = 1;
  return;
}


/* ChallengeModule::SetActiveChallengesCompleted() */

void __thiscall ChallengeModule::SetActiveChallengesCompleted(ChallengeModule *this)

{
  setActiveChallengesCompletedAtIndex((int)this);
  return;
}


/* ChallengeModule::StaticNew() */

ChallengeModule * ChallengeModule::StaticNew(void)

{
  ChallengeModule *this;
  
  this = ::operator_new(0x20);
  ChallengeModule(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChallengeModule::GetLowThreatPosition() */

void __thiscall ChallengeModule::GetLowThreatPosition(ChallengeModule *this)

{
  float fVar1;
  char cVar2;
  ulong uVar3;
  undefined8 *puVar4;
  float *pfVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float local_28;
  float local_24;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar6 = 0;
  local_28 = 0.0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  (**(code **)(*(long *)this + 0xb0))
            (this,(vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  uVar9 = local_18;
  uVar8 = local_20;
  uVar3 = FUN_03bc0688(local_20,local_18);
  if (uVar3 != 0) {
    do {
      puVar4 = (undefined8 *)FUN_03bc0694(uVar8,uVar6);
      plVar7 = (long *)*puVar4;
      cVar2 = FUN_03bc0670(*(undefined4 *)((long)plVar7 + 0x1c));
      if (cVar2 == '\0') {
        if (*(code **)(*plVar7 + 0xa0) == Challenge::GetLowThreatPosition) {
          local_24 = (float)Challenge::GetLowThreatPosition();
        }
        else {
          local_24 = (float)(**(code **)(*plVar7 + 0xa0))(plVar7);
          uVar8 = local_20;
          uVar9 = local_18;
        }
        pfVar5 = eastl::max_alt<float>(&local_28,&local_24);
        local_28 = *pfVar5;
        uVar3 = FUN_03bc0688(uVar8,uVar9);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar3);
  }
  fVar1 = local_28;
  std::vector<Challenge*,std::allocator<Challenge*>>::~vector
            ((vector<Challenge*,std::allocator<Challenge*>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(fVar1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChallengeModule::GetHighThreatPosition() */

void __thiscall ChallengeModule::GetHighThreatPosition(ChallengeModule *this)

{
  float fVar1;
  char cVar2;
  ulong uVar3;
  undefined8 *puVar4;
  float *pfVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float local_28;
  float local_24;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar6 = 0;
  local_28 = 0.0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  (**(code **)(*(long *)this + 0xb0))
            (this,(vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  uVar9 = local_18;
  uVar8 = local_20;
  uVar3 = FUN_03bc0688(local_20,local_18);
  if (uVar3 != 0) {
    do {
      puVar4 = (undefined8 *)FUN_03bc0694(uVar8,uVar6);
      plVar7 = (long *)*puVar4;
      cVar2 = FUN_03bc0670(*(undefined4 *)((long)plVar7 + 0x1c));
      if (cVar2 == '\0') {
        if (*(code **)(*plVar7 + 0xa8) == Challenge::GetHighThreatPosition) {
          local_24 = (float)Challenge::GetHighThreatPosition();
        }
        else {
          local_24 = (float)(**(code **)(*plVar7 + 0xa8))(plVar7);
          uVar8 = local_20;
          uVar9 = local_18;
        }
        pfVar5 = eastl::max_alt<float>(&local_28,&local_24);
        local_28 = *pfVar5;
        uVar3 = FUN_03bc0688(uVar8,uVar9);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar3);
  }
  fVar1 = local_28;
  std::vector<Challenge*,std::allocator<Challenge*>>::~vector
            ((vector<Challenge*,std::allocator<Challenge*>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(fVar1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChallengeModule::GetThreatTargetPosition() */

void __thiscall ChallengeModule::GetThreatTargetPosition(ChallengeModule *this)

{
  float fVar1;
  char cVar2;
  ulong uVar3;
  undefined8 *puVar4;
  float *pfVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float local_28;
  float local_24;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar6 = 0;
  local_28 = 0.0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  (**(code **)(*(long *)this + 0xb0))
            (this,(vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  uVar9 = local_18;
  uVar8 = local_20;
  uVar3 = FUN_03bc0688(local_20,local_18);
  if (uVar3 != 0) {
    do {
      puVar4 = (undefined8 *)FUN_03bc0694(uVar8,uVar6);
      plVar7 = (long *)*puVar4;
      cVar2 = FUN_03bc0670(*(undefined4 *)((long)plVar7 + 0x1c));
      if (cVar2 == '\0') {
        if (*(code **)(*plVar7 + 0xb0) == Challenge::GetThreatTargetPosition) {
          local_24 = (float)Challenge::GetThreatTargetPosition();
        }
        else {
          local_24 = (float)(**(code **)(*plVar7 + 0xb0))(plVar7);
          uVar8 = local_20;
          uVar9 = local_18;
        }
        pfVar5 = eastl::max_alt<float>(&local_28,&local_24);
        local_28 = *pfVar5;
        uVar3 = FUN_03bc0688(uVar8,uVar9);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar3);
  }
  fVar1 = local_28;
  std::vector<Challenge*,std::allocator<Challenge*>>::~vector
            ((vector<Challenge*,std::allocator<Challenge*>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(fVar1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChallengeModule::FailAllChallenges() */

void __thiscall ChallengeModule::FailAllChallenges(ChallengeModule *this)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  (**(code **)(*(long *)this + 0xb0))
            (this,(vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  uVar3 = 0;
  while( true ) {
    uVar1 = local_20;
    uVar2 = FUN_03bc0688(local_20,local_18);
    if (uVar2 <= uVar3) break;
    FUN_03bc0694(uVar1,uVar3);
    Challenge::Fail();
    uVar3 = uVar3 + 1;
  }
  std::vector<Challenge*,std::allocator<Challenge*>>::~vector
            ((vector<Challenge*,std::allocator<Challenge*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChallengeModule::onChallengeFailed(Challenge*) */

void __thiscall ChallengeModule::onChallengeFailed(ChallengeModule *this,Challenge *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Challenge *local_38;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_38 = param_1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  (**(code **)(*(long *)this + 0xb8))(this,avStack_20);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_20);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_20);
  local_30 = std::
             find<__gnu_cxx::__normal_iterator<Challenge**,std::vector<Challenge*,std::allocator<Challenge*>>>,Challenge*>
                       (uVar2,uVar3,&local_38);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
  if (bVar1) {
    MessageRouter::Broadcast<Challenge*,Challenge*>
              ((MessageRouter *)gMessageRouter,Message::ChallengeFailed,local_38);
  }
  std::vector<Challenge*,std::allocator<Challenge*>>::~vector
            ((vector<Challenge*,std::allocator<Challenge*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChallengeModule::registerForEvents() */

void __thiscall ChallengeModule::registerForEvents(ChallengeModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,saveChallengeStateToProfile);
  Sexy::Delegate0::Delegate0<ChallengeModule,void(ChallengeModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnWinOutroStarted(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0xc0);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::
  Subscribe<Challenge*,Sexy::CBMemberTranslatorX<ChallengeModule,void(ChallengeModule::*)(Challenge*)>>
            ((MessageRouter *)puVar1,Message::ObjectiveFailed,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChallengeModule::getActiveChallenges(std::vector<Challenge*, std::allocator<Challenge*> >&) */

void __thiscall ChallengeModule::getActiveChallenges(ChallengeModule *this,vector *param_1)

{
  ResilienceTutorialIntroProperties *pRVar1;
  undefined8 *puVar2;
  LevelModuleManager *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long *plVar3;
  RtClass *pRVar4;
  ulong uVar5;
  ulong uVar6;
  Challenge *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  puVar2 = (undefined8 *)FUN_03bc07f4(*(undefined8 *)(pRVar1 + 0x40));
  uVar6 = 0;
  while( true ) {
    uVar5 = FUN_03bc069c(*puVar2,puVar2[1]);
    if (uVar5 <= uVar6) break;
    this_00 = (LevelModuleManager *)LevelModule::getManager();
    this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03bc06a8(*puVar2,uVar6);
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
    pRVar4 = (RtClass *)(**(code **)(*plVar3 + 0x80))();
    local_10 = (Challenge *)LevelModuleManager::GetModuleByClass(this_00,pRVar4);
    std::vector<Challenge*,std::allocator<Challenge*>>::push_back
              ((vector<Challenge*,std::allocator<Challenge*>> *)param_1,&local_10);
    uVar6 = uVar6 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChallengeModule::GetActiveChallengeDescriptions(std::vector<std::wstring,
   std::allocator<std::wstring > >&) */

void __thiscall
ChallengeModule::GetActiveChallengeDescriptions(ChallengeModule *this,vector *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  wstring awStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  (**(code **)(*(long *)this + 0xb8))
            (this,(vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  uVar4 = 0;
  while( true ) {
    uVar1 = local_20;
    uVar3 = FUN_03bc0688(local_20,local_18);
    if (uVar3 <= uVar4) break;
    puVar2 = (undefined8 *)FUN_03bc0694(uVar1,uVar4);
    (**(code **)(*(long *)*puVar2 + 0xb8))(awStack_28,(long *)*puVar2);
    std::vector<std::wstring,std::allocator<std::wstring>>::push_back
              ((vector<std::wstring,std::allocator<std::wstring>> *)param_1,awStack_28);
    FUN_05476c50(awStack_28);
    uVar4 = uVar4 + 1;
  }
  std::vector<Challenge*,std::allocator<Challenge*>>::~vector
            ((vector<Challenge*,std::allocator<Challenge*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

