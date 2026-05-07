// Class: GeneralTaskallLevelWinListener


/* GeneralTaskallLevelWinListener::onLevelEnded(LevelDefinitionForTask*) */

void __thiscall
GeneralTaskallLevelWinListener::onLevelEnded
          (GeneralTaskallLevelWinListener *this,LevelDefinitionForTask *param_1)

{
  if ((param_1[0x21] != (LevelDefinitionForTask)0x0) &&
     (param_1[0x20] == (LevelDefinitionForTask)0x0)) {
    (**(code **)(*(long *)this + 0x58))(this,1);
    return;
  }
  return;
}


/* GeneralTaskallLevelWinListener::onFinishEndlessLevel(bool) */

void __thiscall
GeneralTaskallLevelWinListener::onFinishEndlessLevel
          (GeneralTaskallLevelWinListener *this,bool param_1)

{
  if (param_1) {
    (**(code **)(*(long *)this + 0x58))(this,1);
  }
  return;
}


/* GeneralTaskallLevelWinListener::~GeneralTaskallLevelWinListener() */

void __thiscall
GeneralTaskallLevelWinListener::~GeneralTaskallLevelWinListener
          (GeneralTaskallLevelWinListener *this)

{
  *(undefined ***)this = &PTR_GetClass_06711490;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* GeneralTaskallLevelWinListener::~GeneralTaskallLevelWinListener() */

void __thiscall
GeneralTaskallLevelWinListener::~GeneralTaskallLevelWinListener
          (GeneralTaskallLevelWinListener *this)

{
  ~GeneralTaskallLevelWinListener(this);
  AK::FreeHook(this);
  return;
}


/* GeneralTaskallLevelWinListener::GeneralTaskallLevelWinListener() */

void __thiscall
GeneralTaskallLevelWinListener::GeneralTaskallLevelWinListener(GeneralTaskallLevelWinListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_06711490;
  return;
}


/* GeneralTaskallLevelWinListener::StaticNew() */

GeneralTaskallLevelWinListener * GeneralTaskallLevelWinListener::StaticNew(void)

{
  GeneralTaskallLevelWinListener *this;
  
  this = ::operator_new(0x18);
  GeneralTaskallLevelWinListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskallLevelWinListener::StaticClassInit() */

void GeneralTaskallLevelWinListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"GeneralTaskallLevelWinListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a917bc,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeneralTaskallLevelWinListener::StaticGetClass() */

long * GeneralTaskallLevelWinListener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskallLevelWinListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskallLevelWinListener::GetClass() const */

long * GeneralTaskallLevelWinListener::GetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskallLevelWinListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskallLevelWinListener::RegisterListener(GeneralTask*) */

void __thiscall
GeneralTaskallLevelWinListener::RegisterListener
          (GeneralTaskallLevelWinListener *this,GeneralTask *param_1)

{
  undefined *puVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::Mesh::SetListener((Mesh *)this,(MeshListener *)param_1);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onFinishEndlessLevel);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<GeneralTaskallLevelWinListener,void(GeneralTaskallLevelWinListener::*)(bool)>>
            ((MessageRouter *)puVar1,Message::FinishEndlessLevel,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLevelEnded);
  local_60 = local_8;
  local_70 = local_18;
  uStack_68 = uStack_10;
  MessageRouter::
  Subscribe<LevelDefinitionForTask*,Sexy::CBMemberTranslatorX<GeneralTaskallLevelWinListener,void(GeneralTaskallLevelWinListener::*)(LevelDefinitionForTask*)>>
            ((MessageRouter *)puVar1,Message::LevelEndForTask,&local_70);
  this[8] = (GeneralTaskallLevelWinListener)0x1;
  return;
}

