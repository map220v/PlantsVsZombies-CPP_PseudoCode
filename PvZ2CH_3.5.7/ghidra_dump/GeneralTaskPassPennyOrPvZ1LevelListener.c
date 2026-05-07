// Class: GeneralTaskPassPennyOrPvZ1LevelListener


/* GeneralTaskPassPennyOrPvZ1LevelListener::onLevelEnded(LevelDefinitionForTask*) */

void __thiscall
GeneralTaskPassPennyOrPvZ1LevelListener::onLevelEnded
          (GeneralTaskPassPennyOrPvZ1LevelListener *this,LevelDefinitionForTask *param_1)

{
  if ((param_1[0x18] != (LevelDefinitionForTask)0x0) &&
     (param_1[0x21] != (LevelDefinitionForTask)0x0)) {
    (**(code **)(*(long *)this + 0x58))(this,1);
    return;
  }
  return;
}


/* GeneralTaskPassPennyOrPvZ1LevelListener::onPvZ1FinishLevel(int, bool) */

void GeneralTaskPassPennyOrPvZ1LevelListener::onPvZ1FinishLevel(int param_1,bool param_2)

{
  char cVar1;
  
  cVar1 = PVZ1ModeUtils::IsPlayingPVZ1Level();
  if (cVar1 != '\0') {
    (**(code **)(*(long *)(ulong)(uint)param_1 + 0x58))((long *)(ulong)(uint)param_1,1);
  }
  return;
}


/* GeneralTaskPassPennyOrPvZ1LevelListener::~GeneralTaskPassPennyOrPvZ1LevelListener() */

void __thiscall
GeneralTaskPassPennyOrPvZ1LevelListener::~GeneralTaskPassPennyOrPvZ1LevelListener
          (GeneralTaskPassPennyOrPvZ1LevelListener *this)

{
  *(undefined ***)this = &PTR_GetClass_06711070;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* GeneralTaskPassPennyOrPvZ1LevelListener::~GeneralTaskPassPennyOrPvZ1LevelListener() */

void __thiscall
GeneralTaskPassPennyOrPvZ1LevelListener::~GeneralTaskPassPennyOrPvZ1LevelListener
          (GeneralTaskPassPennyOrPvZ1LevelListener *this)

{
  ~GeneralTaskPassPennyOrPvZ1LevelListener(this);
  AK::FreeHook(this);
  return;
}


/* GeneralTaskPassPennyOrPvZ1LevelListener::GeneralTaskPassPennyOrPvZ1LevelListener() */

void __thiscall
GeneralTaskPassPennyOrPvZ1LevelListener::GeneralTaskPassPennyOrPvZ1LevelListener
          (GeneralTaskPassPennyOrPvZ1LevelListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_06711070;
  return;
}


/* GeneralTaskPassPennyOrPvZ1LevelListener::StaticNew() */

GeneralTaskPassPennyOrPvZ1LevelListener * GeneralTaskPassPennyOrPvZ1LevelListener::StaticNew(void)

{
  GeneralTaskPassPennyOrPvZ1LevelListener *this;
  
  this = ::operator_new(0x18);
  GeneralTaskPassPennyOrPvZ1LevelListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskPassPennyOrPvZ1LevelListener::StaticClassInit() */

void GeneralTaskPassPennyOrPvZ1LevelListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"GeneralTaskPassPennyOrPvZ1LevelListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a904f4,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeneralTaskPassPennyOrPvZ1LevelListener::StaticGetClass() */

long * GeneralTaskPassPennyOrPvZ1LevelListener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskPassPennyOrPvZ1LevelListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskPassPennyOrPvZ1LevelListener::GetClass() const */

long * GeneralTaskPassPennyOrPvZ1LevelListener::GetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskPassPennyOrPvZ1LevelListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskPassPennyOrPvZ1LevelListener::RegisterListener(GeneralTask*) */

void __thiscall
GeneralTaskPassPennyOrPvZ1LevelListener::RegisterListener
          (GeneralTaskPassPennyOrPvZ1LevelListener *this,GeneralTask *param_1)

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
            ((ReceivedDataCallback *)this,onLevelEnded);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<LevelDefinitionForTask*,Sexy::CBMemberTranslatorX<GeneralTaskPassPennyOrPvZ1LevelListener,void(GeneralTaskPassPennyOrPvZ1LevelListener::*)(LevelDefinitionForTask*)>>
            ((MessageRouter *)puVar1,Message::LevelEndForTask,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPvZ1FinishLevel);
  local_60 = local_8;
  local_70 = local_18;
  uStack_68 = uStack_10;
  MessageRouter::
  Subscribe<int,bool,Sexy::CBMemberTranslatorX<GeneralTaskPassPennyOrPvZ1LevelListener,void(GeneralTaskPassPennyOrPvZ1LevelListener::*)(int,bool)>>
            ((MessageRouter *)puVar1,Message::PvZ1FinishLevel,&local_70);
  this[8] = (GeneralTaskPassPennyOrPvZ1LevelListener)0x1;
  return;
}

