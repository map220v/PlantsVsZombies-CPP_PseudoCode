// Class: PvZ1FinishAllHardLevelListener


/* PvZ1FinishAllHardLevelListener::~PvZ1FinishAllHardLevelListener() */

void __thiscall
PvZ1FinishAllHardLevelListener::~PvZ1FinishAllHardLevelListener
          (PvZ1FinishAllHardLevelListener *this)

{
  *(undefined ***)this = &PTR_GetClass_0670f770;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* PvZ1FinishAllHardLevelListener::~PvZ1FinishAllHardLevelListener() */

void __thiscall
PvZ1FinishAllHardLevelListener::~PvZ1FinishAllHardLevelListener
          (PvZ1FinishAllHardLevelListener *this)

{
  ~PvZ1FinishAllHardLevelListener(this);
  AK::FreeHook(this);
  return;
}


/* PvZ1FinishAllHardLevelListener::PvZ1FinishAllHardLevelListener() */

void __thiscall
PvZ1FinishAllHardLevelListener::PvZ1FinishAllHardLevelListener(PvZ1FinishAllHardLevelListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_0670f770;
  return;
}


/* PvZ1FinishAllHardLevelListener::StaticNew() */

PvZ1FinishAllHardLevelListener * PvZ1FinishAllHardLevelListener::StaticNew(void)

{
  PvZ1FinishAllHardLevelListener *this;
  
  this = ::operator_new(0x18);
  PvZ1FinishAllHardLevelListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PvZ1FinishAllHardLevelListener::StaticClassInit() */

void PvZ1FinishAllHardLevelListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"PvZ1FinishAllHardLevelListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a88b14,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PvZ1FinishAllHardLevelListener::StaticGetClass() */

long * PvZ1FinishAllHardLevelListener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PvZ1FinishAllHardLevelListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PvZ1FinishAllHardLevelListener::GetClass() const */

long * PvZ1FinishAllHardLevelListener::GetClass(void)

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
  (*pcVar3)(plVar1,"PvZ1FinishAllHardLevelListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PvZ1FinishAllHardLevelListener::onPvZ1FinishLevel(int, bool) */

void PvZ1FinishAllHardLevelListener::onPvZ1FinishLevel(int param_1,bool param_2)

{
  int iVar1;
  char cVar2;
  ProfileMgr *this;
  PlayerInfo *this_00;
  int iVar3;
  
  cVar2 = PVZ1ModeUtils::IsPlayingPVZ1Level();
  if (cVar2 != '\0') {
    this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
    iVar3 = 0;
    while( true ) {
      iVar1 = iVar3 + 1;
      cVar2 = PlayerInfo::HasCompletedPVZ1Level(this_00,iVar3,true);
      if (cVar2 == '\0') break;
      iVar3 = iVar1;
      if (iVar1 == 0x11) {
        (**(code **)(*(long *)(ulong)(uint)param_1 + 0x58))((long *)(ulong)(uint)param_1,1);
        return;
      }
    }
  }
  return;
}


/* PvZ1FinishAllHardLevelListener::RegisterListener(GeneralTask*) */

void __thiscall
PvZ1FinishAllHardLevelListener::RegisterListener
          (PvZ1FinishAllHardLevelListener *this,GeneralTask *param_1)

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
  Subscribe<int,bool,Sexy::CBMemberTranslatorX<PvZ1FinishAllHardLevelListener,void(PvZ1FinishAllHardLevelListener::*)(int,bool)>>
            ((MessageRouter *)puVar1,Message::PvZ1FinishLevel,&local_40);
  this[8] = (PvZ1FinishAllHardLevelListener)0x1;
  return;
}

