// Class: GeneralTaskPlantLevelUpListener


/* GeneralTaskPlantLevelUpListener::OnPlantLevelUp() */

void __thiscall
GeneralTaskPlantLevelUpListener::OnPlantLevelUp(GeneralTaskPlantLevelUpListener *this)

{
  (**(code **)(*(long *)this + 0x58))(this,1);
  return;
}


/* GeneralTaskPlantLevelUpListener::~GeneralTaskPlantLevelUpListener() */

void __thiscall
GeneralTaskPlantLevelUpListener::~GeneralTaskPlantLevelUpListener
          (GeneralTaskPlantLevelUpListener *this)

{
  *(undefined ***)this = &PTR_GetClass_0670e9f0;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* GeneralTaskPlantLevelUpListener::~GeneralTaskPlantLevelUpListener() */

void __thiscall
GeneralTaskPlantLevelUpListener::~GeneralTaskPlantLevelUpListener
          (GeneralTaskPlantLevelUpListener *this)

{
  ~GeneralTaskPlantLevelUpListener(this);
  AK::FreeHook(this);
  return;
}


/* GeneralTaskPlantLevelUpListener::GeneralTaskPlantLevelUpListener() */

void __thiscall
GeneralTaskPlantLevelUpListener::GeneralTaskPlantLevelUpListener
          (GeneralTaskPlantLevelUpListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_0670e9f0;
  return;
}


/* GeneralTaskPlantLevelUpListener::StaticNew() */

GeneralTaskPlantLevelUpListener * GeneralTaskPlantLevelUpListener::StaticNew(void)

{
  GeneralTaskPlantLevelUpListener *this;
  
  this = ::operator_new(0x18);
  GeneralTaskPlantLevelUpListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskPlantLevelUpListener::StaticClassInit() */

void GeneralTaskPlantLevelUpListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"GeneralTaskPlantLevelUpListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a84944,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeneralTaskPlantLevelUpListener::StaticGetClass() */

long * GeneralTaskPlantLevelUpListener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskPlantLevelUpListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskPlantLevelUpListener::GetClass() const */

long * GeneralTaskPlantLevelUpListener::GetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskPlantLevelUpListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskPlantLevelUpListener::JumpToTargetTask() */

void GeneralTaskPlantLevelUpListener::JumpToTargetTask(void)

{
  char cVar1;
  ProfileMgr *this;
  PlayerInfo *pPVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"egypt7");
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  cVar1 = ProfileUtils::HasCompletedLevel(asStack_10,false,pPVar2);
  std::string::~string(asStack_10);
  nop();
  if (cVar1 != '\0') {
    Sexy::LazySingleton<QuickJumpUtil>::GetInstancePtr();
    QuickJumpUtil::ShowPlantLevelUp();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1 != '\0');
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskPlantLevelUpListener::RegisterListener(GeneralTask*) */

void __thiscall
GeneralTaskPlantLevelUpListener::RegisterListener
          (GeneralTaskPlantLevelUpListener *this,GeneralTask *param_1)

{
  undefined *this_00;
  long lVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Mesh::SetListener((Mesh *)this,(MeshListener *)param_1);
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnPlantLevelUp);
  Sexy::Delegate0::
  Delegate0<GeneralTaskPlantLevelUpListener,void(GeneralTaskPlantLevelUpListener::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::PlantLevelUp,aDStack_38);
  lVar1 = ___stack_chk_guard;
  this[8] = (GeneralTaskPlantLevelUpListener)0x1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

