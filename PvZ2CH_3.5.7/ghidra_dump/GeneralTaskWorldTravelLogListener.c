// Class: GeneralTaskWorldTravelLogListener


/* GeneralTaskWorldTravelLogListener::OnFinishTravelogWorildTask() */

void __thiscall
GeneralTaskWorldTravelLogListener::OnFinishTravelogWorildTask
          (GeneralTaskWorldTravelLogListener *this)

{
  (**(code **)(*(long *)this + 0x58))(this,1);
  return;
}


/* GeneralTaskWorldTravelLogListener::~GeneralTaskWorldTravelLogListener() */

void __thiscall
GeneralTaskWorldTravelLogListener::~GeneralTaskWorldTravelLogListener
          (GeneralTaskWorldTravelLogListener *this)

{
  *(undefined ***)this = &PTR_GetClass_0670f070;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* GeneralTaskWorldTravelLogListener::~GeneralTaskWorldTravelLogListener() */

void __thiscall
GeneralTaskWorldTravelLogListener::~GeneralTaskWorldTravelLogListener
          (GeneralTaskWorldTravelLogListener *this)

{
  ~GeneralTaskWorldTravelLogListener(this);
  AK::FreeHook(this);
  return;
}


/* GeneralTaskWorldTravelLogListener::GeneralTaskWorldTravelLogListener() */

void __thiscall
GeneralTaskWorldTravelLogListener::GeneralTaskWorldTravelLogListener
          (GeneralTaskWorldTravelLogListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_0670f070;
  return;
}


/* GeneralTaskWorldTravelLogListener::StaticNew() */

GeneralTaskWorldTravelLogListener * GeneralTaskWorldTravelLogListener::StaticNew(void)

{
  GeneralTaskWorldTravelLogListener *this;
  
  this = ::operator_new(0x18);
  GeneralTaskWorldTravelLogListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskWorldTravelLogListener::StaticClassInit() */

void GeneralTaskWorldTravelLogListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"GeneralTaskWorldTravelLogListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a868f4,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeneralTaskWorldTravelLogListener::StaticGetClass() */

long * GeneralTaskWorldTravelLogListener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskWorldTravelLogListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskWorldTravelLogListener::GetClass() const */

long * GeneralTaskWorldTravelLogListener::GetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskWorldTravelLogListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskWorldTravelLogListener::RegisterListener(GeneralTask*) */

void __thiscall
GeneralTaskWorldTravelLogListener::RegisterListener
          (GeneralTaskWorldTravelLogListener *this,GeneralTask *param_1)

{
  undefined *this_00;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  vector *pvVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 local_68;
  undefined8 local_60;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  lVar4 = 0;
  local_8 = ___stack_chk_guard;
  Sexy::Mesh::SetListener((Mesh *)this,(MeshListener *)param_1);
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  pvVar1 = (vector *)PlayerInfo::GetAllTravelLogSaveInfo(this_02);
  std::vector<TravelLogTaskSaveInfo,std::allocator<TravelLogTaskSaveInfo>>::vector
            ((vector<TravelLogTaskSaveInfo,std::allocator<TravelLogTaskSaveInfo>> *)&local_68,pvVar1
            );
  lVar2 = FUN_03a79cfc(local_68,local_60);
  if (lVar2 != 0) {
    do {
      lVar3 = FUN_03a79d10(local_68,lVar4);
      if ((*(int *)(lVar3 + 4) == 2) && (*(int *)(lVar3 + 0xc) == 3)) {
        (**(code **)(*(long *)this + 0x58))(this,1);
        this[8] = (GeneralTaskWorldTravelLogListener)0x0;
        goto LAB_03aa0bd4;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != lVar2);
  }
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnFinishTravelogWorildTask);
  Sexy::Delegate0::
  Delegate0<GeneralTaskWorldTravelLogListener,void(GeneralTaskWorldTravelLogListener::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::FinishTravelogWorildTask,aDStack_38);
  this[8] = (GeneralTaskWorldTravelLogListener)0x1;
LAB_03aa0bd4:
  std::vector<TravelLogTaskSaveInfo,std::allocator<TravelLogTaskSaveInfo>>::~vector
            ((vector<TravelLogTaskSaveInfo,std::allocator<TravelLogTaskSaveInfo>> *)&local_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

