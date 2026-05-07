// Class: DangerRoomHydraZombossBattleModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomHydraZombossBattleModule::StaticClassInit() */

void DangerRoomHydraZombossBattleModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"DangerRoomHydraZombossBattleModule");
    (*pcVar2)(plVar1,asStack_10,FUN_04750e10,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomHydraZombossBattleModule::StaticGetClass() */

long * DangerRoomHydraZombossBattleModule::StaticGetClass(void)

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
  uVar2 = ZombossBattleModule::StaticGetClass();
  (*pcVar3)(plVar1,"DangerRoomHydraZombossBattleModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DangerRoomHydraZombossBattleModule::~DangerRoomHydraZombossBattleModule() */

void __thiscall
DangerRoomHydraZombossBattleModule::~DangerRoomHydraZombossBattleModule
          (DangerRoomHydraZombossBattleModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_068cc3d0;
  ZombossBattleModule::~ZombossBattleModule((ZombossBattleModule *)this);
  return;
}


/* DangerRoomHydraZombossBattleModule::~DangerRoomHydraZombossBattleModule() */

void __thiscall
DangerRoomHydraZombossBattleModule::~DangerRoomHydraZombossBattleModule
          (DangerRoomHydraZombossBattleModule *this)

{
  ~DangerRoomHydraZombossBattleModule(this);
  AK::FreeHook(this);
  return;
}


/* DangerRoomHydraZombossBattleModule::DangerRoomHydraZombossBattleModule() */

void __thiscall
DangerRoomHydraZombossBattleModule::DangerRoomHydraZombossBattleModule
          (DangerRoomHydraZombossBattleModule *this)

{
  ZombossBattleModule::ZombossBattleModule((ZombossBattleModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_068cc3d0;
  return;
}


/* DangerRoomHydraZombossBattleModule::StaticNew() */

DangerRoomHydraZombossBattleModule * DangerRoomHydraZombossBattleModule::StaticNew(void)

{
  DangerRoomHydraZombossBattleModule *this;
  
  this = ::operator_new(0x38);
  DangerRoomHydraZombossBattleModule(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomHydraZombossBattleModule::HandleSuperFSMAction_ZombossBattleState(ZombossBattleState,
   StateAction) */

void __thiscall
DangerRoomHydraZombossBattleModule::HandleSuperFSMAction_ZombossBattleState
          (DangerRoomHydraZombossBattleModule *this,uint param_2,uint param_3)

{
  char cVar1;
  string *psVar2;
  SexyVector3 *pSVar3;
  ResilienceTutorialIntroProperties *pRVar4;
  RtObject *this_00;
  ZombieZombossMech *this_01;
  ZombieZombossMech *this_02;
  ZombieZombossMech *this_03;
  Zombie *this_04;
  long *plVar5;
  code *pcVar6;
  float fVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  int iStack_58;
  int iStack_54;
  string asStack_50 [24];
  Delegate2<ZombossBattleState,StateAction> aDStack_38 [48];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,
             ZombossBattleModule::HandleSuperFSMAction_ZombossBattleState);
  Sexy::Delegate2<ZombossBattleState,StateAction>::
  Delegate2<ZombossBattleModule,void(ZombossBattleModule::*)(ZombossBattleState,StateAction)>
            (aDStack_38,asStack_50);
  switch(param_2) {
  case 0:
    if (1 < param_3) {
      if (param_3 == 2) {
        if ((this[0x31] == (DangerRoomHydraZombossBattleModule)0x0) &&
           (fVar7 = (float)PVZ_T(), *(float *)(this + 0x18) < fVar7)) {
          ZombossBattleModule::spawnZomboss((ZombossBattleModule *)this);
        }
      }
      else {
        Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)0x0);
      }
    }
    break;
  case 1:
    if (param_3 != 0) {
      if (param_3 == 1) {
        nop();
        psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
        (**(code **)(*(long *)this + 0xb0))(asStack_50,this);
        ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
        std::string::~string(asStack_50);
        plVar5 = *(long **)(gLawnApp + 0x9f0);
        pcVar6 = *(code **)(*plVar5 + 0x318);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)asStack_50,(RtWeakPtrBase *)aRStack_60);
        pSVar3 = (SexyVector3 *)(*pcVar6)(plVar5,asStack_50,0xfffffffb,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50)
        ;
        pRVar4 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
        BoardTransforms::GridToBoardSpace((Point *)(pRVar4 + 0x40));
        EATextSquish::Vec3::Vec3((Vec3 *)asStack_50,(float)(iStack_58 + 1000),(float)iStack_54,0.0);
        BoardEntity::PlaceOnBoard(pSVar3);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                  ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x20),(RtWeakPtrBase *)asStack_50
                  );
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50)
        ;
        this_00 = (RtObject *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
        this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
        pRVar4 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
        ZombieZombossMech::setStageIndex(this_01,*(int *)(pRVar4 + 0x60));
        ZombossBattleModule::setState_ZombossBattleState((ZombossBattleModule *)this,2);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
      }
      else {
        Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)0x1);
      }
    }
    break;
  case 2:
    if (param_3 != 0) {
      if (param_3 == 2) {
        ZombossBattleModule::updateProgressMeter((ZombossBattleModule *)this);
        cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x20));
        if (cVar1 != '\0') {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
          nop();
          cVar1 = ZombieZombossMech::IsDead(this_02);
          if ((cVar1 == '\0') &&
             (cVar1 = ZombieZombossMech::IsRunningDeathSequence(this_02), cVar1 == '\0')) break;
        }
        ZombossBattleModule::setState_ZombossBattleState((ZombossBattleModule *)this,3);
      }
      else {
        Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)0x2);
      }
    }
    break;
  case 3:
    if (param_3 == 1) {
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x20));
      if (cVar1 != '\0') {
        this_04 = (Zombie *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
        Zombie::SetIsControlled(this_04,true);
      }
      ZombossBattleModule::hideProgressMeter((ZombossBattleModule *)this);
      MessageRouter::Broadcast((_func_void *)gMessageRouter);
    }
    else if (param_3 != 0) {
      if (param_3 == 2) {
        cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x20));
        if (cVar1 != '\0') {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
          nop();
          cVar1 = ZombieZombossMech::IsDead(this_03);
          if (cVar1 == '\0') break;
        }
        ZombossBattleModule::setState_ZombossBattleState((ZombossBattleModule *)this,4);
      }
      else {
        Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)0x3);
      }
    }
    break;
  case 4:
    if (param_3 != 0) {
      if (param_3 == 2) {
        cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x20));
        if (cVar1 == '\0') {
          ZombossBattleModule::setState_ZombossBattleState((ZombossBattleModule *)this,5);
        }
      }
      else {
        Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,&DAT_00000004);
      }
    }
    break;
  case 5:
    if (param_3 != 0) {
      Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)0x5);
    }
    break;
  case 0xffffffff:
    if (param_3 != 0) {
      Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)0xffffffff);
    }
    break;
  default:
    Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)(ulong)param_2);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomHydraZombossBattleModule::HandleStateMachine_ZombossBattleState(ZombossBattleState,
   StateAction) */

void __thiscall
DangerRoomHydraZombossBattleModule::HandleStateMachine_ZombossBattleState
          (DangerRoomHydraZombossBattleModule *this,uint param_2,uint param_3)

{
  char cVar1;
  string *psVar2;
  SexyVector3 *pSVar3;
  ResilienceTutorialIntroProperties *pRVar4;
  RtObject *this_00;
  ZombieZombossMech *this_01;
  ZombieZombossMech *this_02;
  ZombieZombossMech *this_03;
  Zombie *this_04;
  long *plVar5;
  code *pcVar6;
  float fVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  int local_58;
  int local_54;
  string asStack_50 [24];
  Delegate2<ZombossBattleState,StateAction> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,HandleSuperFSMAction_ZombossBattleState);
  Sexy::Delegate2<ZombossBattleState,StateAction>::
  Delegate2<DangerRoomHydraZombossBattleModule,void(DangerRoomHydraZombossBattleModule::*)(ZombossBattleState,StateAction)>
            (aDStack_38,asStack_50);
  switch(param_2) {
  case 0:
    if (1 < param_3) {
      if (param_3 == 2) {
        if ((this[0x31] == (DangerRoomHydraZombossBattleModule)0x0) &&
           (fVar7 = (float)PVZ_T(), *(float *)(this + 0x18) < fVar7)) {
          ZombossBattleModule::spawnZomboss((ZombossBattleModule *)this);
        }
      }
      else {
        Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)0x0);
      }
    }
    break;
  case 1:
    if (param_3 != 0) {
      if (param_3 == 1) {
        nop();
        psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
        (**(code **)(*(long *)this + 0xb0))(asStack_50,this);
        ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
        std::string::~string(asStack_50);
        plVar5 = *(long **)(gLawnApp + 0x9f0);
        pcVar6 = *(code **)(*plVar5 + 0x318);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)asStack_50,(RtWeakPtrBase *)aRStack_60);
        pSVar3 = (SexyVector3 *)(*pcVar6)(plVar5,asStack_50,0xfffffffb,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50)
        ;
        pRVar4 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
        BoardTransforms::GridToBoardSpace((Point *)(pRVar4 + 0x40));
        EATextSquish::Vec3::Vec3((Vec3 *)asStack_50,(float)(local_58 + 1000),(float)local_54,0.0);
        BoardEntity::PlaceOnBoard(pSVar3);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                  ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x20),(RtWeakPtrBase *)asStack_50
                  );
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50)
        ;
        this_00 = (RtObject *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
        this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
        pRVar4 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
        ZombieZombossMech::setStageIndex(this_01,*(int *)(pRVar4 + 0x60));
        ZombossBattleModule::setState_ZombossBattleState((ZombossBattleModule *)this,2);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
      }
      else {
        Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)0x1);
      }
    }
    break;
  case 2:
    if (param_3 != 0) {
      if (param_3 == 2) {
        ZombossBattleModule::updateProgressMeter((ZombossBattleModule *)this);
        cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x20));
        if (cVar1 != '\0') {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
          nop();
          cVar1 = ZombieZombossMech::IsDead(this_02);
          if ((cVar1 == '\0') &&
             (cVar1 = ZombieZombossMech::IsRunningDeathSequence(this_02), cVar1 == '\0')) break;
        }
        ZombossBattleModule::setState_ZombossBattleState((ZombossBattleModule *)this,3);
      }
      else {
        Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)0x2);
      }
    }
    break;
  case 3:
    if (param_3 == 1) {
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x20));
      if (cVar1 != '\0') {
        this_04 = (Zombie *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
        Zombie::SetIsControlled(this_04,true);
      }
      ZombossBattleModule::hideProgressMeter((ZombossBattleModule *)this);
      MessageRouter::Broadcast((_func_void *)gMessageRouter);
    }
    else if (param_3 != 0) {
      if (param_3 == 2) {
        cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x20));
        if (cVar1 != '\0') {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
          nop();
          cVar1 = ZombieZombossMech::IsDead(this_03);
          if (cVar1 == '\0') break;
        }
        ZombossBattleModule::setState_ZombossBattleState((ZombossBattleModule *)this,4);
      }
      else {
        Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)0x3);
      }
    }
    break;
  case 4:
    if (param_3 != 0) {
      if (param_3 == 2) {
        cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x20));
        if ((cVar1 == '\0') &&
           (cVar1 = Board::IsDangerRoom(*(Board **)(gLawnApp + 0x9f0)), cVar1 == '\0')) {
          ZombossBattleModule::setState_ZombossBattleState((ZombossBattleModule *)this,5);
        }
      }
      else {
        Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,&DAT_00000004);
      }
    }
    break;
  case 5:
    if (param_3 != 0) {
      Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)0x5);
    }
    break;
  case 0xffffffff:
    if (param_3 != 0) {
      Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)0xffffffff);
    }
    break;
  default:
    Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)(ulong)param_2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

