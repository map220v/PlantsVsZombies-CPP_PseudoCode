// Class: GeneralTaskSetDangerRoomMaxLevelWithCheckListener


/* GeneralTaskSetDangerRoomMaxLevelWithCheckListener::~GeneralTaskSetDangerRoomMaxLevelWithCheckListener()
    */

void __thiscall
GeneralTaskSetDangerRoomMaxLevelWithCheckListener::
~GeneralTaskSetDangerRoomMaxLevelWithCheckListener
          (GeneralTaskSetDangerRoomMaxLevelWithCheckListener *this)

{
  *(undefined ***)this = &PTR_GetClass_0670f370;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* GeneralTaskSetDangerRoomMaxLevelWithCheckListener::~GeneralTaskSetDangerRoomMaxLevelWithCheckListener()
    */

void __thiscall
GeneralTaskSetDangerRoomMaxLevelWithCheckListener::
~GeneralTaskSetDangerRoomMaxLevelWithCheckListener
          (GeneralTaskSetDangerRoomMaxLevelWithCheckListener *this)

{
  ~GeneralTaskSetDangerRoomMaxLevelWithCheckListener(this);
  AK::FreeHook(this);
  return;
}


/* GeneralTaskSetDangerRoomMaxLevelWithCheckListener::GeneralTaskSetDangerRoomMaxLevelWithCheckListener()
    */

void __thiscall
GeneralTaskSetDangerRoomMaxLevelWithCheckListener::GeneralTaskSetDangerRoomMaxLevelWithCheckListener
          (GeneralTaskSetDangerRoomMaxLevelWithCheckListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_0670f370;
  return;
}


/* GeneralTaskSetDangerRoomMaxLevelWithCheckListener::StaticNew() */

GeneralTaskSetDangerRoomMaxLevelWithCheckListener *
GeneralTaskSetDangerRoomMaxLevelWithCheckListener::StaticNew(void)

{
  GeneralTaskSetDangerRoomMaxLevelWithCheckListener *this;
  
  this = ::operator_new(0x18);
  GeneralTaskSetDangerRoomMaxLevelWithCheckListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskSetDangerRoomMaxLevelWithCheckListener::StaticClassInit() */

void GeneralTaskSetDangerRoomMaxLevelWithCheckListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"GeneralTaskSetDangerRoomMaxLevelWithCheckListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a87794,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeneralTaskSetDangerRoomMaxLevelWithCheckListener::StaticGetClass() */

long * GeneralTaskSetDangerRoomMaxLevelWithCheckListener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskSetDangerRoomMaxLevelWithCheckListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskSetDangerRoomMaxLevelWithCheckListener::GetClass() const */

long * GeneralTaskSetDangerRoomMaxLevelWithCheckListener::GetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskSetDangerRoomMaxLevelWithCheckListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskSetDangerRoomMaxLevelWithCheckListener::OnSetDangerRoomMaxLevel(int) */

void __thiscall
GeneralTaskSetDangerRoomMaxLevelWithCheckListener::OnSetDangerRoomMaxLevel
          (GeneralTaskSetDangerRoomMaxLevelWithCheckListener *this,int param_1)

{
  long lVar1;
  
  if (param_1 <= *(int *)(*(long *)(this + 0x10) + 0x10)) {
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x10) + 0x20));
    if (param_1 < *(int *)(lVar1 + 0x28)) {
      return;
    }
  }
  (**(code **)(*(long *)this + 0x60))(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskSetDangerRoomMaxLevelWithCheckListener::JumpToTargetTask() */

void GeneralTaskSetDangerRoomMaxLevelWithCheckListener::JumpToTargetTask(void)

{
  char cVar1;
  ProfileMgr *this;
  PlayerInfo *pPVar2;
  QuickJumpUtil *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"egypt13");
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  cVar1 = ProfileUtils::HasCompletedLevel(asStack_10,false,pPVar2);
  std::string::~string(asStack_10);
  nop();
  if (cVar1 != '\0') {
    this_00 = (QuickJumpUtil *)Sexy::LazySingleton<QuickJumpUtil>::GetInstancePtr();
    QuickJumpUtil::ShowEndLess(this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1 != '\0');
}


/* GeneralTaskSetDangerRoomMaxLevelWithCheckListener::RegisterListener(GeneralTask*) */

void __thiscall
GeneralTaskSetDangerRoomMaxLevelWithCheckListener::RegisterListener
          (GeneralTaskSetDangerRoomMaxLevelWithCheckListener *this,GeneralTask *param_1)

{
  undefined *puVar1;
  int iVar2;
  ImageFont *this_00;
  long lVar3;
  code *pcVar4;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::Mesh::SetListener((Mesh *)this,(MeshListener *)param_1);
  this_00 = (ImageFont *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  iVar2 = Sexy::ImageFont::GetPointSize(this_00);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x10) + 0x20));
  puVar1 = gMessageRouter;
  if (iVar2 < *(int *)(lVar3 + 0x28)) {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnSetDangerRoomMaxLevel);
    local_30 = local_8;
    local_40 = local_18;
    uStack_38 = uStack_10;
    MessageRouter::
    Subscribe<int,Sexy::CBMemberTranslatorX<GeneralTaskSetDangerRoomMaxLevelWithCheckListener,void(GeneralTaskSetDangerRoomMaxLevelWithCheckListener::*)(int)>>
              ((MessageRouter *)puVar1,Message::SetDangerRoomMaxLevel,&local_40);
    this[8] = (GeneralTaskSetDangerRoomMaxLevelWithCheckListener)0x1;
    return;
  }
  pcVar4 = *(code **)(*(long *)this + 0x60);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x10) + 0x20));
  (*pcVar4)(this,*(undefined4 *)(lVar3 + 0x28));
  this[8] = (GeneralTaskSetDangerRoomMaxLevelWithCheckListener)0x0;
  return;
}

