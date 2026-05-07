// Class: NoviceSevenDaysTaskEndlessListener


/* NoviceSevenDaysTaskEndlessListener::~NoviceSevenDaysTaskEndlessListener() */

void __thiscall
NoviceSevenDaysTaskEndlessListener::~NoviceSevenDaysTaskEndlessListener
          (NoviceSevenDaysTaskEndlessListener *this)

{
  *(undefined ***)this = &PTR_GetClass_0670eef0;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* NoviceSevenDaysTaskEndlessListener::~NoviceSevenDaysTaskEndlessListener() */

void __thiscall
NoviceSevenDaysTaskEndlessListener::~NoviceSevenDaysTaskEndlessListener
          (NoviceSevenDaysTaskEndlessListener *this)

{
  ~NoviceSevenDaysTaskEndlessListener(this);
  AK::FreeHook(this);
  return;
}


/* NoviceSevenDaysTaskEndlessListener::NoviceSevenDaysTaskEndlessListener() */

void __thiscall
NoviceSevenDaysTaskEndlessListener::NoviceSevenDaysTaskEndlessListener
          (NoviceSevenDaysTaskEndlessListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_0670eef0;
  return;
}


/* NoviceSevenDaysTaskEndlessListener::StaticNew() */

NoviceSevenDaysTaskEndlessListener * NoviceSevenDaysTaskEndlessListener::StaticNew(void)

{
  NoviceSevenDaysTaskEndlessListener *this;
  
  this = ::operator_new(0x18);
  NoviceSevenDaysTaskEndlessListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NoviceSevenDaysTaskEndlessListener::StaticClassInit() */

void NoviceSevenDaysTaskEndlessListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"NoviceSevenDaysTaskEndlessListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a861a4,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NoviceSevenDaysTaskEndlessListener::StaticGetClass() */

long * NoviceSevenDaysTaskEndlessListener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NoviceSevenDaysTaskEndlessListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NoviceSevenDaysTaskEndlessListener::GetClass() const */

long * NoviceSevenDaysTaskEndlessListener::GetClass(void)

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
  (*pcVar3)(plVar1,"NoviceSevenDaysTaskEndlessListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NoviceSevenDaysTaskEndlessListener::onLevelEnded(LevelDefinitionForTask*) */

void __thiscall
NoviceSevenDaysTaskEndlessListener::onLevelEnded
          (NoviceSevenDaysTaskEndlessListener *this,LevelDefinitionForTask *param_1)

{
  bool bVar1;
  char cVar2;
  RtObject *this_00;
  NoviceSevenDaysTaskWorldLevelData *pNVar3;
  PlantCthulhuActinia *this_01;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(*(long *)(this + 0x10) + 0x20));
  if (bVar1) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x10) + 0x20));
    pNVar3 = Sexy::RtObject::Cast<NoviceSevenDaysTaskWorldLevelData>(this_00);
    if (pNVar3 == (NoviceSevenDaysTaskWorldLevelData *)0x0) goto LAB_03a95b48;
    if (param_1[0x20] == (LevelDefinitionForTask)0x0) {
      return;
    }
    if (pNVar3[0x8e] == (NoviceSevenDaysTaskWorldLevelData)0x0) goto LAB_03a95b80;
  }
  else {
LAB_03a95b48:
    if (param_1[0x20] == (LevelDefinitionForTask)0x0) {
      return;
    }
  }
  this_01 = (PlantCthulhuActinia *)Sexy::LazySingleton<DaveTaskManager>::GetInstancePtr();
  cVar2 = PlantCthulhuActinia::GetEyeballStatus(this_01);
  if (cVar2 == '\0') {
    return;
  }
LAB_03a95b80:
  (**(code **)(*(long *)this + 0x58))(this,1);
  return;
}


/* NoviceSevenDaysTaskEndlessListener::RegisterListener(GeneralTask*) */

void __thiscall
NoviceSevenDaysTaskEndlessListener::RegisterListener
          (NoviceSevenDaysTaskEndlessListener *this,GeneralTask *param_1)

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
  Subscribe<LevelDefinitionForTask*,Sexy::CBMemberTranslatorX<NoviceSevenDaysTaskEndlessListener,void(NoviceSevenDaysTaskEndlessListener::*)(LevelDefinitionForTask*)>>
            ((MessageRouter *)puVar1,Message::LevelEndForTask,&local_40);
  this[8] = (NoviceSevenDaysTaskEndlessListener)0x1;
  return;
}

