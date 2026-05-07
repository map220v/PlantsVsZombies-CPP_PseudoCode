// Class: GeneralTaskPlantWarsStarListener


/* GeneralTaskPlantWarsStarListener::onRefreshTaskInfo() */

void __thiscall
GeneralTaskPlantWarsStarListener::onRefreshTaskInfo(GeneralTaskPlantWarsStarListener *this)

{
  (**(code **)(*(long *)this + 0x58))(this,1);
  return;
}


/* GeneralTaskPlantWarsStarListener::~GeneralTaskPlantWarsStarListener() */

void __thiscall
GeneralTaskPlantWarsStarListener::~GeneralTaskPlantWarsStarListener
          (GeneralTaskPlantWarsStarListener *this)

{
  *(undefined ***)this = &PTR_GetClass_06711690;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* GeneralTaskPlantWarsStarListener::~GeneralTaskPlantWarsStarListener() */

void __thiscall
GeneralTaskPlantWarsStarListener::~GeneralTaskPlantWarsStarListener
          (GeneralTaskPlantWarsStarListener *this)

{
  ~GeneralTaskPlantWarsStarListener(this);
  AK::FreeHook(this);
  return;
}


/* GeneralTaskPlantWarsStarListener::GeneralTaskPlantWarsStarListener() */

void __thiscall
GeneralTaskPlantWarsStarListener::GeneralTaskPlantWarsStarListener
          (GeneralTaskPlantWarsStarListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_06711690;
  return;
}


/* GeneralTaskPlantWarsStarListener::StaticNew() */

GeneralTaskPlantWarsStarListener * GeneralTaskPlantWarsStarListener::StaticNew(void)

{
  GeneralTaskPlantWarsStarListener *this;
  
  this = ::operator_new(0x18);
  GeneralTaskPlantWarsStarListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskPlantWarsStarListener::StaticClassInit() */

void GeneralTaskPlantWarsStarListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"GeneralTaskPlantWarsStarListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a9217c,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeneralTaskPlantWarsStarListener::StaticGetClass() */

long * GeneralTaskPlantWarsStarListener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskPlantWarsStarListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskPlantWarsStarListener::GetClass() const */

long * GeneralTaskPlantWarsStarListener::GetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskPlantWarsStarListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskPlantWarsStarListener::RegisterListener(GeneralTask*) */

void __thiscall
GeneralTaskPlantWarsStarListener::RegisterListener
          (GeneralTaskPlantWarsStarListener *this,GeneralTask *param_1)

{
  undefined *this_00;
  long lVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Mesh::SetListener((Mesh *)this,(MeshListener *)param_1);
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRefreshTaskInfo);
  Sexy::Delegate0::
  Delegate0<GeneralTaskPlantWarsStarListener,void(GeneralTaskPlantWarsStarListener::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::PlantWarsStarTask,aDStack_38);
  lVar1 = ___stack_chk_guard;
  this[8] = (GeneralTaskPlantWarsStarListener)0x1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

