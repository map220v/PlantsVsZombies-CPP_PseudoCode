// Class: GeneralTaskPlayNormalOrUnchartLevelListener


/* GeneralTaskPlayNormalOrUnchartLevelListener::onLevelEnded(LevelDefinitionForTask*) */

void __thiscall
GeneralTaskPlayNormalOrUnchartLevelListener::onLevelEnded
          (GeneralTaskPlayNormalOrUnchartLevelListener *this,LevelDefinitionForTask *param_1)

{
  char cVar1;
  
  if ((param_1[0x22] == (LevelDefinitionForTask)0x0) &&
     (cVar1 = PVZ2UnchartedModeUtils::IsPlayingPVZ2UnchartedModeLevel(), cVar1 == '\0')) {
    return;
  }
  (**(code **)(*(long *)this + 0x58))(this,1);
  return;
}


/* GeneralTaskPlayNormalOrUnchartLevelListener::~GeneralTaskPlayNormalOrUnchartLevelListener() */

void __thiscall
GeneralTaskPlayNormalOrUnchartLevelListener::~GeneralTaskPlayNormalOrUnchartLevelListener
          (GeneralTaskPlayNormalOrUnchartLevelListener *this)

{
  *(undefined ***)this = &PTR_GetClass_0670fff0;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* GeneralTaskPlayNormalOrUnchartLevelListener::~GeneralTaskPlayNormalOrUnchartLevelListener() */

void __thiscall
GeneralTaskPlayNormalOrUnchartLevelListener::~GeneralTaskPlayNormalOrUnchartLevelListener
          (GeneralTaskPlayNormalOrUnchartLevelListener *this)

{
  ~GeneralTaskPlayNormalOrUnchartLevelListener(this);
  AK::FreeHook(this);
  return;
}


/* GeneralTaskPlayNormalOrUnchartLevelListener::GeneralTaskPlayNormalOrUnchartLevelListener() */

void __thiscall
GeneralTaskPlayNormalOrUnchartLevelListener::GeneralTaskPlayNormalOrUnchartLevelListener
          (GeneralTaskPlayNormalOrUnchartLevelListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_0670fff0;
  return;
}


/* GeneralTaskPlayNormalOrUnchartLevelListener::StaticNew() */

GeneralTaskPlayNormalOrUnchartLevelListener *
GeneralTaskPlayNormalOrUnchartLevelListener::StaticNew(void)

{
  GeneralTaskPlayNormalOrUnchartLevelListener *this;
  
  this = ::operator_new(0x18);
  GeneralTaskPlayNormalOrUnchartLevelListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskPlayNormalOrUnchartLevelListener::StaticClassInit() */

void GeneralTaskPlayNormalOrUnchartLevelListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"GeneralTaskPlayNormalOrUnchartLevelListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a8b484,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeneralTaskPlayNormalOrUnchartLevelListener::StaticGetClass() */

long * GeneralTaskPlayNormalOrUnchartLevelListener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskPlayNormalOrUnchartLevelListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskPlayNormalOrUnchartLevelListener::GetClass() const */

long * GeneralTaskPlayNormalOrUnchartLevelListener::GetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskPlayNormalOrUnchartLevelListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskPlayNormalOrUnchartLevelListener::RegisterListener(GeneralTask*) */

void __thiscall
GeneralTaskPlayNormalOrUnchartLevelListener::RegisterListener
          (GeneralTaskPlayNormalOrUnchartLevelListener *this,GeneralTask *param_1)

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
            ((ReceivedDataCallback *)this,onLevelEnded);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<LevelDefinitionForTask*,Sexy::CBMemberTranslatorX<GeneralTaskPlayNormalOrUnchartLevelListener,void(GeneralTaskPlayNormalOrUnchartLevelListener::*)(LevelDefinitionForTask*)>>
            ((MessageRouter *)puVar1,Message::LevelEndForTask,&local_40);
  this[8] = (GeneralTaskPlayNormalOrUnchartLevelListener)0x1;
  return;
}

