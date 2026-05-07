// Class: GeneralTaskPanneyGachaListener


/* GeneralTaskPanneyGachaListener::onFinishGacha(int, int) */

void __thiscall
GeneralTaskPanneyGachaListener::onFinishGacha
          (GeneralTaskPanneyGachaListener *this,int param_1,int param_2)

{
  (**(code **)(*(long *)this + 0x58))(this,param_2);
  return;
}


/* GeneralTaskPanneyGachaListener::~GeneralTaskPanneyGachaListener() */

void __thiscall
GeneralTaskPanneyGachaListener::~GeneralTaskPanneyGachaListener
          (GeneralTaskPanneyGachaListener *this)

{
  *(undefined ***)this = &PTR_GetClass_0670e470;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* GeneralTaskPanneyGachaListener::~GeneralTaskPanneyGachaListener() */

void __thiscall
GeneralTaskPanneyGachaListener::~GeneralTaskPanneyGachaListener
          (GeneralTaskPanneyGachaListener *this)

{
  ~GeneralTaskPanneyGachaListener(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskPanneyGachaListener::StaticClassInit() */

void GeneralTaskPanneyGachaListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"GeneralTaskPanneyGachaListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a82df0,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeneralTaskPanneyGachaListener::StaticGetClass() */

long * GeneralTaskPanneyGachaListener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskPanneyGachaListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskPanneyGachaListener::GetClass() const */

long * GeneralTaskPanneyGachaListener::GetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskPanneyGachaListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskPanneyGachaListener::GeneralTaskPanneyGachaListener() */

void __thiscall
GeneralTaskPanneyGachaListener::GeneralTaskPanneyGachaListener(GeneralTaskPanneyGachaListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_0670e470;
  return;
}


/* GeneralTaskPanneyGachaListener::StaticNew() */

GeneralTaskPanneyGachaListener * GeneralTaskPanneyGachaListener::StaticNew(void)

{
  GeneralTaskPanneyGachaListener *this;
  
  this = ::operator_new(0x18);
  GeneralTaskPanneyGachaListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskPanneyGachaListener::JumpToTargetTask() */

void GeneralTaskPanneyGachaListener::JumpToTargetTask(void)

{
  char cVar1;
  ProfileMgr *this;
  PlayerInfo *pPVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"egypt4");
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  cVar1 = ProfileUtils::HasCompletedLevel(asStack_10,false,pPVar2);
  std::string::~string(asStack_10);
  nop();
  if (cVar1 != '\0') {
    Sexy::LazySingleton<QuickJumpUtil>::GetInstancePtr();
    QuickJumpUtil::ShowGachaStore();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1 != '\0');
}


/* GeneralTaskPanneyGachaListener::RegisterListener(GeneralTask*) */

void __thiscall
GeneralTaskPanneyGachaListener::RegisterListener
          (GeneralTaskPanneyGachaListener *this,GeneralTask *param_1)

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
            ((ReceivedDataCallback *)this,onFinishGacha);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<GeneralTaskPanneyGachaListener,void(GeneralTaskPanneyGachaListener::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::FinishPennyGacha,&local_40);
  this[8] = (GeneralTaskPanneyGachaListener)0x1;
  return;
}

