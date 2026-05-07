// Class: GeneralTaskPlayCustomLevelListener


/* GeneralTaskPlayCustomLevelListener::onLevelEnded(LevelDefinitionForTask*) */

void GeneralTaskPlayCustomLevelListener::onLevelEnded(LevelDefinitionForTask *param_1)

{
  char cVar1;
  
  cVar1 = CustomLevelUtils::IsCustomLevel();
  if (cVar1 != '\0') {
    (**(code **)(*(long *)param_1 + 0x58))(param_1,1);
  }
  return;
}


/* GeneralTaskPlayCustomLevelListener::~GeneralTaskPlayCustomLevelListener() */

void __thiscall
GeneralTaskPlayCustomLevelListener::~GeneralTaskPlayCustomLevelListener
          (GeneralTaskPlayCustomLevelListener *this)

{
  *(undefined ***)this = &PTR_GetClass_0670fdf0;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* GeneralTaskPlayCustomLevelListener::~GeneralTaskPlayCustomLevelListener() */

void __thiscall
GeneralTaskPlayCustomLevelListener::~GeneralTaskPlayCustomLevelListener
          (GeneralTaskPlayCustomLevelListener *this)

{
  ~GeneralTaskPlayCustomLevelListener(this);
  AK::FreeHook(this);
  return;
}


/* GeneralTaskPlayCustomLevelListener::GeneralTaskPlayCustomLevelListener() */

void __thiscall
GeneralTaskPlayCustomLevelListener::GeneralTaskPlayCustomLevelListener
          (GeneralTaskPlayCustomLevelListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_0670fdf0;
  return;
}


/* GeneralTaskPlayCustomLevelListener::StaticNew() */

GeneralTaskPlayCustomLevelListener * GeneralTaskPlayCustomLevelListener::StaticNew(void)

{
  GeneralTaskPlayCustomLevelListener *this;
  
  this = ::operator_new(0x18);
  GeneralTaskPlayCustomLevelListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskPlayCustomLevelListener::StaticClassInit() */

void GeneralTaskPlayCustomLevelListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"GeneralTaskPlayCustomLevelListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a8aac4,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeneralTaskPlayCustomLevelListener::StaticGetClass() */

long * GeneralTaskPlayCustomLevelListener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskPlayCustomLevelListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskPlayCustomLevelListener::GetClass() const */

long * GeneralTaskPlayCustomLevelListener::GetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskPlayCustomLevelListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskPlayCustomLevelListener::RegisterListener(GeneralTask*) */

void __thiscall
GeneralTaskPlayCustomLevelListener::RegisterListener
          (GeneralTaskPlayCustomLevelListener *this,GeneralTask *param_1)

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
  Subscribe<LevelDefinitionForTask*,Sexy::CBMemberTranslatorX<GeneralTaskPlayCustomLevelListener,void(GeneralTaskPlayCustomLevelListener::*)(LevelDefinitionForTask*)>>
            ((MessageRouter *)puVar1,Message::LevelEndForTask,&local_40);
  this[8] = (GeneralTaskPlayCustomLevelListener)0x1;
  return;
}

