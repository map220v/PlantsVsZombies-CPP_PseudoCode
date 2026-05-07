// Class: PowerupTacticalCuke


/* PowerupTacticalCuke::updateState_Selected() */

void __thiscall PowerupTacticalCuke::updateState_Selected(PowerupTacticalCuke *this)

{
  if (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) {
    Board::IsDangerRoom(*(Board **)(gLawnApp + 0x9f0));
  }
  BasePowerup::Activate((BasePowerup *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupTacticalCuke::StaticClassInit() */

void PowerupTacticalCuke::StaticClassInit(void)

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
    std::string::string(asStack_10,"PowerupTacticalCuke");
    (*pcVar2)(plVar1,asStack_10,FUN_0431a0f4,0xd8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerupTacticalCuke::StaticGetClass() */

long * PowerupTacticalCuke::StaticGetClass(void)

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
  uVar2 = BasePowerup::StaticGetClass();
  (*pcVar3)(plVar1,"PowerupTacticalCuke",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PowerupTacticalCuke::GetClass() const */

long * PowerupTacticalCuke::GetClass(void)

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
  uVar2 = BasePowerup::StaticGetClass();
  (*pcVar3)(plVar1,"PowerupTacticalCuke",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PowerupTacticalCuke::OnNotifyPowerupUsesChanged(PowerupRecord*) */

void __thiscall
PowerupTacticalCuke::OnNotifyPowerupUsesChanged(PowerupTacticalCuke *this,PowerupRecord *param_1)

{
  char cVar1;
  
  if ((param_1 != (PowerupRecord *)0x0) &&
     (((cVar1 = std::operator==((string *)param_1,(string *)&DAT_06af9800), cVar1 != '\0' ||
       (cVar1 = std::operator==((string *)param_1,(string *)&DAT_06af9918), cVar1 != '\0')) &&
      (0 < *(int *)(param_1 + 8))))) {
    FUN_0431903c(this + 0x1a,1);
    return;
  }
  return;
}


/* PowerupTacticalCuke::Draw(Sexy::Graphics*) */

void __thiscall PowerupTacticalCuke::Draw(PowerupTacticalCuke *this,Graphics *param_1)

{
  bool bVar1;
  TacticalCukeGameObject *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 200));
  if (!bVar1) {
    return;
  }
  this_00 = (TacticalCukeGameObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 200));
  TacticalCukeGameObject::Draw(this_00,param_1);
  return;
}


/* PowerupTacticalCuke::onExitState_Activated(PowerupState) */

void PowerupTacticalCuke::onExitState_Activated(long param_1)

{
  bool bVar1;
  long *plVar2;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 200));
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 200));
    (**(code **)(*plVar2 + 0x48))();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupTacticalCuke::~PowerupTacticalCuke() */

void __thiscall PowerupTacticalCuke::~PowerupTacticalCuke(PowerupTacticalCuke *this)

{
  LawnApp *this_00;
  bool bVar1;
  long *plVar2;
  RtWeakPtr *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (RtWeakPtr *)(this + 200);
  *(undefined ***)this = &PTR_GetClass_068334d0;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
    (**(code **)(*plVar2 + 0x48))();
  }
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  this_00 = gLawnApp;
  std::string::string(asStack_10,"TacticalCuke");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  BasePowerup::~BasePowerup((BasePowerup *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerupTacticalCuke::~PowerupTacticalCuke() */

void __thiscall PowerupTacticalCuke::~PowerupTacticalCuke(PowerupTacticalCuke *this)

{
  ~PowerupTacticalCuke(this);
  AK::FreeHook(this);
  return;
}


/* PowerupTacticalCuke::onInitialized() */

void __thiscall PowerupTacticalCuke::onInitialized(PowerupTacticalCuke *this)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  DangerRoomManager *this_02;
  
  BasePowerup::Deselect((BasePowerup *)this);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  cVar1 = Board::IsDangerRoom(*(Board **)(gLawnApp + 0x9f0));
  if (cVar1 != '\0') {
    this_02 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
    iVar2 = DangerRoomManager::GetCukeCount(this_02);
    FUN_0431903c(this + 0x1a,0 < iVar2);
    return;
  }
  iVar2 = PlayerInfo::GetPowerupUsesLeft(this_01,(string *)&DAT_06af9800);
  if ((iVar2 < 1) && (iVar2 = PlayerInfo::GetMonthlyCukeUsesLeft(this_01), iVar2 < 1)) {
    return;
  }
  FUN_0431903c(this + 0x1a,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupTacticalCuke::PowerupTacticalCuke() */

void __thiscall PowerupTacticalCuke::PowerupTacticalCuke(PowerupTacticalCuke *this)

{
  undefined *puVar1;
  LawnApp *this_00;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BasePowerup::BasePowerup((BasePowerup *)this);
  *(undefined ***)this = &PTR_GetClass_068334d0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 200));
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  this_00 = gLawnApp;
  std::string::string((string *)&local_20,"TacticalCuke");
  LawnApp::LoadGroup(this_00,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyPowerupUsesChanged);
  local_50 = local_20;
  uStack_48 = uStack_18;
  local_40 = local_10;
  MessageRouter::
  Subscribe<PowerupRecord*,Sexy::CBMemberTranslatorX<PowerupTacticalCuke,void(PowerupTacticalCuke::*)(PowerupRecord*)>>
            ((MessageRouter *)puVar1,Message::NotifyPowerupUsesChanged,&local_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerupTacticalCuke::StaticNew() */

PowerupTacticalCuke * PowerupTacticalCuke::StaticNew(void)

{
  PowerupTacticalCuke *this;
  
  this = ::operator_new(0xd8);
  PowerupTacticalCuke(this);
  return this;
}


/* PowerupTacticalCuke::onEnterState_Selected(PowerupState) */

void __thiscall
PowerupTacticalCuke::onEnterState_Selected(PowerupTacticalCuke *this,undefined4 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  uVar2 = PlayerInfo::GetNumGems(this_01,false);
  *(undefined4 *)(this + 0xd0) = uVar2;
  uVar2 = NewPVPMgr::GetSeasonEndTime((NewPVPMgr *)this_01);
  *(undefined4 *)(this + 0xd4) = uVar2;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,LaunchCuke);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<PowerupTacticalCuke,void(PowerupTacticalCuke::*)(bool)>>
            ((MessageRouter *)puVar1,Message::UseGemFinish,&local_40);
  BasePowerup::onEnterState_Selected(this,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupTacticalCuke::updateState_Idle() */

void __thiscall PowerupTacticalCuke::updateState_Idle(PowerupTacticalCuke *this)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntities
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2);
  uVar3 = FUN_04319058(local_20,local_18);
  bVar1 = true;
  if (uVar3 < 0xf) {
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_20);
    while( true ) {
      local_28 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_20);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
      if (!bVar1) break;
      puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30)
      ;
      iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)*puVar4);
      if (iVar2 < 3) {
        bVar1 = true;
        break;
      }
      FUN_043199d0((exception_ptr *)&local_30);
    }
  }
  BasePowerup::SetIsInWarning((BasePowerup *)this,bVar1);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupTacticalCuke::CreateCukeObjectAndRefreshStatus() */

void __thiscall PowerupTacticalCuke::CreateCukeObjectAndRefreshStatus(PowerupTacticalCuke *this)

{
  int iVar1;
  PowerupManager *this_00;
  undefined8 uVar2;
  TacticalCukeGameObject *this_01;
  long lVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PowerupManager *)Board::GetPowerupManager(*(Board **)(gLawnApp + 0x9f0));
  iVar1 = PowerupManager::GetCurrentPowerAdditionDamage(this_00,(BasePowerup *)this);
  uVar2 = TacticalCukeGameObject::StaticGetClass();
  GameObject::Create(uVar2,0x27);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 200),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  this_01 = (TacticalCukeGameObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 200));
  lVar3 = BasePowerup::GetType((BasePowerup *)this);
  TacticalCukeGameObject::Activate(this_01,true,*(float *)(lVar3 + 0x68),iVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupTacticalCuke::LaunchCuke(bool) */

void __thiscall PowerupTacticalCuke::LaunchCuke(PowerupTacticalCuke *this,bool param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  TGALogMgr *this_02;
  PowerupManager *pPVar6;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = BasePowerup::getPowerupStateSerialization((BasePowerup *)this);
  if ((iVar3 == 2) ||
     (iVar3 = BasePowerup::getPowerupStateSerialization((BasePowerup *)this), iVar3 == 1)) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    iVar4 = PlayerInfo::GetNumGems(this_01,false);
    iVar3 = *(int *)(this + 0xd0);
    iVar5 = NewPVPMgr::GetSeasonEndTime((NewPVPMgr *)this_01);
    iVar1 = *(int *)(this + 0xd4);
    this_02 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    std::string::string((string *)&local_20,"powerupdangerroomtacticalcuke");
    TGALogMgr::UseLevelItem(this_02,(string *)&local_20,0,iVar4 - iVar3);
    std::string::~string((string *)&local_20);
    nop();
    MessageRouter::Post<bool,int,int,bool,int,int>
              ((MessageRouter *)gMessageRouter,Message::LaunchCuke,param_1,iVar4 - iVar3,
               iVar5 - iVar1);
    puVar2 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,LaunchCuke);
    local_50 = local_20;
    uStack_48 = uStack_18;
    local_40 = local_10;
    MessageRouter::
    Unsubscribe<bool,Sexy::CBMemberTranslatorX<PowerupTacticalCuke,void(PowerupTacticalCuke::*)(bool)>>
              ((MessageRouter *)puVar2,Message::UseGemFinish,&local_50);
    if (param_1) {
      CreateCukeObjectAndRefreshStatus(this);
      pPVar6 = (PowerupManager *)Board::GetPowerupManager(*(Board **)(gLawnApp + 0x9f0));
      PowerupManager::onUseGemFinished(pPVar6,true);
    }
    else {
      pPVar6 = (PowerupManager *)Board::GetPowerupManager(*(Board **)(gLawnApp + 0x9f0));
      PowerupManager::onUseGemFinished(pPVar6,false);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerupTacticalCuke::updateState_Activated() */

void __thiscall PowerupTacticalCuke::updateState_Activated(PowerupTacticalCuke *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  TacticalCukeGameObject *this_01;
  long lVar3;
  char *pcVar4;
  
  this_00 = (RtWeakPtr *)(this + 200);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    this_01 = (TacticalCukeGameObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    TacticalCukeGameObject::Update(this_01);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    cVar2 = FUN_04319044(*(undefined1 *)(lVar3 + 0x11));
    if (cVar2 == '\0') {
      pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar4,"Play_UI_PowerUp_Menu_TimeUp");
      BasePowerup::Deactivate((BasePowerup *)this);
      return;
    }
  }
  return;
}

