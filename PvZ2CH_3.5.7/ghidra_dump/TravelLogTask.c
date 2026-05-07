// Class: TravelLogTask


/* TravelLogTask::StaticNew() */

undefined8 TravelLogTask::StaticNew(void)

{
  return 0;
}


/* TravelLogTask::SetTaskState(int) */

void __thiscall TravelLogTask::SetTaskState(TravelLogTask *this,int param_1)

{
  *(int *)(this + 0x14) = param_1;
  (**(code **)(*(long *)this + 0x50))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TravelLogTask::StaticClassInit() */

void TravelLogTask::StaticClassInit(void)

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
    std::string::string(asStack_10,"TravelLogTask");
    (*pcVar2)(plVar1,asStack_10,FUN_039ec830,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TravelLogTask::StaticGetClass() */

long * TravelLogTask::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"TravelLogTask",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TravelLogTask::GetClass() const */

long * TravelLogTask::GetClass(void)

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
  (*pcVar3)(plVar1,"TravelLogTask",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TravelLogTask::TravelLogTask() */

void __thiscall TravelLogTask::TravelLogTask(TravelLogTask *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_066f5af0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x20));
  this[0x28] = (TravelLogTask)0x0;
  return;
}


/* TravelLogTask::~TravelLogTask() */

void __thiscall TravelLogTask::~TravelLogTask(TravelLogTask *this)

{
  *(undefined ***)this = &PTR_GetClass_066f5af0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  nop();
  return;
}


/* TravelLogTask::~TravelLogTask() */

void __thiscall TravelLogTask::~TravelLogTask(TravelLogTask *this)

{
  ~TravelLogTask(this);
  AK::FreeHook(this);
  return;
}


/* TravelLogTask::Init(Sexy::RtWeakPtr<TravelLogData>) */

void __thiscall TravelLogTask::Init(TravelLogTask *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  long lVar1;
  
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  *(undefined4 *)(this + 8) = *(undefined4 *)(lVar1 + 8);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(lVar1 + 0xc);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x20),(RtWeakPtr *)param_2);
  (**(code **)(*(long *)this + 0x58))(this);
  if (1 < *(uint *)(this + 0x14)) {
    return;
  }
  (**(code **)(*(long *)this + 0x80))(this);
  return;
}


/* TravelLogTask::SaveState() */

void __thiscall TravelLogTask::SaveState(TravelLogTask *this)

{
  ProfileMgr *this_00;
  PlayerInfo *pPVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 local_c;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar1 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  local_c = *(undefined4 *)(this + 0x14);
  local_18 = *(undefined4 *)(this + 8);
  uStack_14 = *(undefined4 *)(this + 0xc);
  local_40 = *(undefined8 *)(this + 8);
  local_10 = *(undefined4 *)(this + 0x10);
  uStack_38 = *(undefined8 *)(this + 0x10);
  local_30 = *(undefined8 *)(this + 0x18);
  PlayerInfo::UpdateTravelLogSaveInfo(pPVar1,&local_40);
  return;
}


/* TravelLogTask::LoadState() */

void __thiscall TravelLogTask::LoadState(TravelLogTask *this)

{
  int iVar1;
  ProfileMgr *this_00;
  undefined8 uVar2;
  int local_18;
  undefined4 local_10;
  undefined4 local_c;
  undefined8 local_8;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  iVar1 = ProfileMgr::GetCurrentProfile(this_00);
  PlayerInfo::GetTravelLogSaveInfo(iVar1);
  if (local_18 != *(int *)(this + 8)) {
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined4 *)(this + 0x14) = 0;
    uVar2 = LawnApp::GetRealServerTime(gLawnApp);
    *(undefined8 *)(this + 0x18) = uVar2;
    return;
  }
  *(undefined4 *)(this + 0x10) = local_10;
  *(undefined4 *)(this + 0x14) = local_c;
  *(undefined8 *)(this + 0x18) = local_8;
  return;
}


/* TravelLogTask::GetRemainTime() */

long __thiscall TravelLogTask::GetRemainTime(TravelLogTask *this)

{
  int iVar1;
  char cVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar3;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = *(int *)(this + 0xc);
  if (iVar1 == 1) {
    cVar2 = PlayerInfo::IsInThisWeek(this_01,*(long *)(this + 0x18));
    if (cVar2 != '\0') {
      lVar3 = LawnApp::GetRealServerTime(gLawnApp);
      return ((((int)lVar3 + -0x4d580) / 0x93a80) * 0x93a80 + 0xe1000) - lVar3;
    }
  }
  else {
    if (iVar1 == 2) {
      return 0x7fffffff;
    }
    if ((iVar1 == 0) &&
       (cVar2 = ActivityCollectionLuckyChest::IsToday
                          ((ActivityCollectionLuckyChest *)this_01,*(long *)(this + 0x18)),
       cVar2 != '\0')) {
      lVar3 = LawnApp::GetRealServerTime(gLawnApp);
      return ((((int)lVar3 + 0x7080) / 0x15180) * 0x15180 + 0xe100) - lVar3;
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TravelLogTask::TaskCompleted() */

void __thiscall TravelLogTask::TaskCompleted(TravelLogTask *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  undefined *this_01;
  long lVar1;
  int *piVar2;
  ulong uVar3;
  ulong uVar4;
  GAME_ITEM_INFO aGStack_38 [48];
  long local_8;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20);
  uVar4 = 0;
  local_8 = ___stack_chk_guard;
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  lVar1 = FUN_039e8138(*(undefined8 *)(lVar1 + 0x28),*(undefined8 *)(lVar1 + 0x30));
  if (lVar1 != 0) {
    do {
      lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      piVar2 = (int *)FUN_039e8144(*(undefined8 *)(lVar1 + 0x28),uVar4);
      this_01 = gMessageRouter;
      if (*piVar2 == 0) {
        lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        lVar1 = FUN_039e8144(*(undefined8 *)(lVar1 + 0x28),uVar4);
        MessageRouter::Post<int,int>
                  ((MessageRouter *)this_01,Message::ObtainIntegral,*(int *)(lVar1 + 4));
      }
      else {
        lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        piVar2 = (int *)FUN_039e8144(*(undefined8 *)(lVar1 + 0x28),uVar4);
        if (*piVar2 == 1) {
          lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
          lVar1 = FUN_039e8144(*(undefined8 *)(lVar1 + 0x28),uVar4);
          ProfileChangeItemAmount(0xfad,*(int *)(lVar1 + 4),false);
          GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_38);
        }
      }
      uVar4 = uVar4 + 1;
      lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      uVar3 = FUN_039e8138(*(undefined8 *)(lVar1 + 0x28),*(undefined8 *)(lVar1 + 0x30));
    } while (uVar4 < uVar3);
  }
  *(undefined4 *)(this + 0x14) = 3;
  (**(code **)(*(long *)this + 0x50))(this);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  if (*(int *)(lVar1 + 0xc) == 0) {
    MessageRouter::Post((_func_void *)gMessageRouter);
  }
  else {
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    if (*(int *)(lVar1 + 0xc) == 1) {
      MessageRouter::Post((_func_void *)gMessageRouter);
    }
    else {
      lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      if (*(int *)(lVar1 + 0xc) == 2) {
        MessageRouter::Post((_func_void *)gMessageRouter);
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

