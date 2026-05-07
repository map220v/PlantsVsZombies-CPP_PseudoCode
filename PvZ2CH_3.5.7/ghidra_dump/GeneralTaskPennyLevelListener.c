// Class: GeneralTaskPennyLevelListener


/* GeneralTaskPennyLevelListener::onLevelEnded(LevelDefinitionForTask*) */

void __thiscall
GeneralTaskPennyLevelListener::onLevelEnded
          (GeneralTaskPennyLevelListener *this,LevelDefinitionForTask *param_1)

{
  if (param_1[0x18] != (LevelDefinitionForTask)0x0) {
    (**(code **)(*(long *)this + 0x58))(this,1);
  }
  return;
}


/* GeneralTaskPennyLevelListener::~GeneralTaskPennyLevelListener() */

void __thiscall
GeneralTaskPennyLevelListener::~GeneralTaskPennyLevelListener(GeneralTaskPennyLevelListener *this)

{
  *(undefined ***)this = &PTR_GetClass_0670eff0;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* GeneralTaskPennyLevelListener::~GeneralTaskPennyLevelListener() */

void __thiscall
GeneralTaskPennyLevelListener::~GeneralTaskPennyLevelListener(GeneralTaskPennyLevelListener *this)

{
  ~GeneralTaskPennyLevelListener(this);
  AK::FreeHook(this);
  return;
}


/* GeneralTaskPennyLevelListener::GeneralTaskPennyLevelListener() */

void __thiscall
GeneralTaskPennyLevelListener::GeneralTaskPennyLevelListener(GeneralTaskPennyLevelListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_0670eff0;
  return;
}


/* GeneralTaskPennyLevelListener::StaticNew() */

GeneralTaskPennyLevelListener * GeneralTaskPennyLevelListener::StaticNew(void)

{
  GeneralTaskPennyLevelListener *this;
  
  this = ::operator_new(0x18);
  GeneralTaskPennyLevelListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskPennyLevelListener::StaticClassInit() */

void GeneralTaskPennyLevelListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"GeneralTaskPennyLevelListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a86684,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeneralTaskPennyLevelListener::StaticGetClass() */

long * GeneralTaskPennyLevelListener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskPennyLevelListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskPennyLevelListener::GetClass() const */

long * GeneralTaskPennyLevelListener::GetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskPennyLevelListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskPennyLevelListener::JumpToTargetTask() */

bool GeneralTaskPennyLevelListener::JumpToTargetTask(void)

{
  char cVar1;
  
  cVar1 = GetSecondWorldLevelCompleted(4);
  if (cVar1 != '\0') {
    Sexy::LazySingleton<QuickJumpUtil>::GetInstancePtr();
    QuickJumpUtil::ShowPennyRift();
  }
  return cVar1 != '\0';
}


/* GeneralTaskPennyLevelListener::RegisterListener(GeneralTask*) */

void __thiscall
GeneralTaskPennyLevelListener::RegisterListener
          (GeneralTaskPennyLevelListener *this,GeneralTask *param_1)

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
  Subscribe<LevelDefinitionForTask*,Sexy::CBMemberTranslatorX<GeneralTaskPennyLevelListener,void(GeneralTaskPennyLevelListener::*)(LevelDefinitionForTask*)>>
            ((MessageRouter *)puVar1,Message::LevelEndForTask,&local_40);
  this[8] = (GeneralTaskPennyLevelListener)0x1;
  return;
}

