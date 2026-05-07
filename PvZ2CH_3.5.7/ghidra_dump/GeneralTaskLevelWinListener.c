// Class: GeneralTaskLevelWinListener


/* GeneralTaskLevelWinListener::onFinishEndlessLevel(bool) */

void __thiscall
GeneralTaskLevelWinListener::onFinishEndlessLevel(GeneralTaskLevelWinListener *this,bool param_1)

{
  if (param_1) {
    (**(code **)(*(long *)this + 0x58))(this,1);
  }
  return;
}


/* GeneralTaskLevelWinListener::onLevelEnded(LevelDefinitionForTask*) */

void __thiscall
GeneralTaskLevelWinListener::onLevelEnded
          (GeneralTaskLevelWinListener *this,LevelDefinitionForTask *param_1)

{
  char cVar1;
  
  if ((((param_1[0x21] != (LevelDefinitionForTask)0x0) &&
       (cVar1 = CustomLevelUtils::IsCustomLevel(), cVar1 == '\0')) &&
      (param_1[0xe] == (LevelDefinitionForTask)0x0)) &&
     (param_1[0x20] == (LevelDefinitionForTask)0x0)) {
    (**(code **)(*(long *)this + 0x58))(this,1);
  }
  return;
}


/* GeneralTaskLevelWinListener::~GeneralTaskLevelWinListener() */

void __thiscall
GeneralTaskLevelWinListener::~GeneralTaskLevelWinListener(GeneralTaskLevelWinListener *this)

{
  *(undefined ***)this = &PTR_GetClass_06711390;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* GeneralTaskLevelWinListener::~GeneralTaskLevelWinListener() */

void __thiscall
GeneralTaskLevelWinListener::~GeneralTaskLevelWinListener(GeneralTaskLevelWinListener *this)

{
  ~GeneralTaskLevelWinListener(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskLevelWinListener::StaticClassInit() */

void GeneralTaskLevelWinListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"GeneralTaskLevelWinListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a91280,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeneralTaskLevelWinListener::StaticGetClass() */

long * GeneralTaskLevelWinListener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskLevelWinListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskLevelWinListener::GetClass() const */

long * GeneralTaskLevelWinListener::GetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskLevelWinListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskLevelWinListener::GeneralTaskLevelWinListener() */

void __thiscall
GeneralTaskLevelWinListener::GeneralTaskLevelWinListener(GeneralTaskLevelWinListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_06711390;
  return;
}


/* GeneralTaskLevelWinListener::StaticNew() */

GeneralTaskLevelWinListener * GeneralTaskLevelWinListener::StaticNew(void)

{
  GeneralTaskLevelWinListener *this;
  
  this = ::operator_new(0x18);
  GeneralTaskLevelWinListener(this);
  return this;
}


/* GeneralTaskLevelWinListener::RegisterListener(GeneralTask*) */

void __thiscall
GeneralTaskLevelWinListener::RegisterListener
          (GeneralTaskLevelWinListener *this,GeneralTask *param_1)

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
  Subscribe<bool,Sexy::CBMemberTranslatorX<GeneralTaskLevelWinListener,void(GeneralTaskLevelWinListener::*)(bool)>>
            ((MessageRouter *)puVar1,Message::FinishEndlessLevel,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLevelEnded);
  local_60 = local_8;
  local_70 = local_18;
  uStack_68 = uStack_10;
  MessageRouter::
  Subscribe<LevelDefinitionForTask*,Sexy::CBMemberTranslatorX<GeneralTaskLevelWinListener,void(GeneralTaskLevelWinListener::*)(LevelDefinitionForTask*)>>
            ((MessageRouter *)puVar1,Message::LevelEndForTask,&local_70);
  this[8] = (GeneralTaskLevelWinListener)0x1;
  return;
}

