// Class: GeneralTaskPassWorldLevelListener


/* GeneralTaskPassWorldLevelListener::onLevelEnded(LevelDefinitionForTask*) */

void __thiscall
GeneralTaskPassWorldLevelListener::onLevelEnded
          (GeneralTaskPassWorldLevelListener *this,LevelDefinitionForTask *param_1)

{
  if (((param_1[0x22] != (LevelDefinitionForTask)0x0) &&
      (param_1[0x18] == (LevelDefinitionForTask)0x0)) &&
     (param_1[0x21] != (LevelDefinitionForTask)0x0)) {
    (**(code **)(*(long *)this + 0x58))(this,1);
    return;
  }
  return;
}


/* GeneralTaskPassWorldLevelListener::~GeneralTaskPassWorldLevelListener() */

void __thiscall
GeneralTaskPassWorldLevelListener::~GeneralTaskPassWorldLevelListener
          (GeneralTaskPassWorldLevelListener *this)

{
  *(undefined ***)this = &PTR_GetClass_0670e2f0;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* GeneralTaskPassWorldLevelListener::~GeneralTaskPassWorldLevelListener() */

void __thiscall
GeneralTaskPassWorldLevelListener::~GeneralTaskPassWorldLevelListener
          (GeneralTaskPassWorldLevelListener *this)

{
  ~GeneralTaskPassWorldLevelListener(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskPassWorldLevelListener::StaticClassInit() */

void GeneralTaskPassWorldLevelListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"GeneralTaskPassWorldLevelListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a826a0,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeneralTaskPassWorldLevelListener::StaticGetClass() */

long * GeneralTaskPassWorldLevelListener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskPassWorldLevelListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskPassWorldLevelListener::GetClass() const */

long * GeneralTaskPassWorldLevelListener::GetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskPassWorldLevelListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskPassWorldLevelListener::GeneralTaskPassWorldLevelListener() */

void __thiscall
GeneralTaskPassWorldLevelListener::GeneralTaskPassWorldLevelListener
          (GeneralTaskPassWorldLevelListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_0670e2f0;
  return;
}


/* GeneralTaskPassWorldLevelListener::StaticNew() */

GeneralTaskPassWorldLevelListener * GeneralTaskPassWorldLevelListener::StaticNew(void)

{
  GeneralTaskPassWorldLevelListener *this;
  
  this = ::operator_new(0x18);
  GeneralTaskPassWorldLevelListener(this);
  return this;
}


/* GeneralTaskPassWorldLevelListener::RegisterListener(GeneralTask*) */

void __thiscall
GeneralTaskPassWorldLevelListener::RegisterListener
          (GeneralTaskPassWorldLevelListener *this,GeneralTask *param_1)

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
  Subscribe<LevelDefinitionForTask*,Sexy::CBMemberTranslatorX<GeneralTaskPassWorldLevelListener,void(GeneralTaskPassWorldLevelListener::*)(LevelDefinitionForTask*)>>
            ((MessageRouter *)puVar1,Message::LevelEndForTask,&local_40);
  this[8] = (GeneralTaskPassWorldLevelListener)0x1;
  return;
}

