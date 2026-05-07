// Class: GeneralTaskEvaluateCustomLevelListener


/* GeneralTaskEvaluateCustomLevelListener::onEvaluateCustomLevel(bool) */

void GeneralTaskEvaluateCustomLevelListener::onEvaluateCustomLevel(bool param_1)

{
  (**(code **)(*(long *)(ulong)param_1 + 0x58))((long *)(ulong)param_1,1);
  return;
}


/* GeneralTaskEvaluateCustomLevelListener::~GeneralTaskEvaluateCustomLevelListener() */

void __thiscall
GeneralTaskEvaluateCustomLevelListener::~GeneralTaskEvaluateCustomLevelListener
          (GeneralTaskEvaluateCustomLevelListener *this)

{
  *(undefined ***)this = &PTR_GetClass_0670fe70;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* GeneralTaskEvaluateCustomLevelListener::~GeneralTaskEvaluateCustomLevelListener() */

void __thiscall
GeneralTaskEvaluateCustomLevelListener::~GeneralTaskEvaluateCustomLevelListener
          (GeneralTaskEvaluateCustomLevelListener *this)

{
  ~GeneralTaskEvaluateCustomLevelListener(this);
  AK::FreeHook(this);
  return;
}


/* GeneralTaskEvaluateCustomLevelListener::GeneralTaskEvaluateCustomLevelListener() */

void __thiscall
GeneralTaskEvaluateCustomLevelListener::GeneralTaskEvaluateCustomLevelListener
          (GeneralTaskEvaluateCustomLevelListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_0670fe70;
  return;
}


/* GeneralTaskEvaluateCustomLevelListener::StaticNew() */

GeneralTaskEvaluateCustomLevelListener * GeneralTaskEvaluateCustomLevelListener::StaticNew(void)

{
  GeneralTaskEvaluateCustomLevelListener *this;
  
  this = ::operator_new(0x18);
  GeneralTaskEvaluateCustomLevelListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskEvaluateCustomLevelListener::StaticClassInit() */

void GeneralTaskEvaluateCustomLevelListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"GeneralTaskEvaluateCustomLevelListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a8ad34,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeneralTaskEvaluateCustomLevelListener::StaticGetClass() */

long * GeneralTaskEvaluateCustomLevelListener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskEvaluateCustomLevelListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskEvaluateCustomLevelListener::GetClass() const */

long * GeneralTaskEvaluateCustomLevelListener::GetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskEvaluateCustomLevelListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskEvaluateCustomLevelListener::RegisterListener(GeneralTask*) */

void __thiscall
GeneralTaskEvaluateCustomLevelListener::RegisterListener
          (GeneralTaskEvaluateCustomLevelListener *this,GeneralTask *param_1)

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
            ((ReceivedDataCallback *)this,onEvaluateCustomLevel);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<GeneralTaskEvaluateCustomLevelListener,void(GeneralTaskEvaluateCustomLevelListener::*)(bool)>>
            ((MessageRouter *)puVar1,Message::EvaluateCustomLevel,&local_40);
  this[8] = (GeneralTaskEvaluateCustomLevelListener)0x1;
  return;
}

