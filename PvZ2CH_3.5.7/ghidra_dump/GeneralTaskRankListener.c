// Class: GeneralTaskRankListener


/* GeneralTaskRankListener::onRefreshTaskInfo(int) */

void __thiscall
GeneralTaskRankListener::onRefreshTaskInfo(GeneralTaskRankListener *this,int param_1)

{
  if (1 < param_1) {
    (**(code **)(*(long *)this + 0x58))(this,1);
  }
  return;
}


/* GeneralTaskRankListener::~GeneralTaskRankListener() */

void __thiscall GeneralTaskRankListener::~GeneralTaskRankListener(GeneralTaskRankListener *this)

{
  *(undefined ***)this = &PTR_GetClass_06711510;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* GeneralTaskRankListener::~GeneralTaskRankListener() */

void __thiscall GeneralTaskRankListener::~GeneralTaskRankListener(GeneralTaskRankListener *this)

{
  ~GeneralTaskRankListener(this);
  AK::FreeHook(this);
  return;
}


/* GeneralTaskRankListener::GeneralTaskRankListener() */

void __thiscall GeneralTaskRankListener::GeneralTaskRankListener(GeneralTaskRankListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_06711510;
  return;
}


/* GeneralTaskRankListener::StaticNew() */

GeneralTaskRankListener * GeneralTaskRankListener::StaticNew(void)

{
  GeneralTaskRankListener *this;
  
  this = ::operator_new(0x18);
  GeneralTaskRankListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskRankListener::StaticClassInit() */

void GeneralTaskRankListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"GeneralTaskRankListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a91a2c,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeneralTaskRankListener::StaticGetClass() */

long * GeneralTaskRankListener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskRankListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskRankListener::GetClass() const */

long * GeneralTaskRankListener::GetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskRankListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskRankListener::RegisterListener(GeneralTask*) */

void __thiscall
GeneralTaskRankListener::RegisterListener(GeneralTaskRankListener *this,GeneralTask *param_1)

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
            ((ReceivedDataCallback *)this,onRefreshTaskInfo);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<GeneralTaskRankListener,void(GeneralTaskRankListener::*)(int)>>
            ((MessageRouter *)puVar1,Message::NewPVPEndDuan,&local_40);
  this[8] = (GeneralTaskRankListener)0x1;
  return;
}

