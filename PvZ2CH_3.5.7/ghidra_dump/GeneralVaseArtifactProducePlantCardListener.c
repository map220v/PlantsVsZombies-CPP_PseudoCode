// Class: GeneralVaseArtifactProducePlantCardListener


/* GeneralVaseArtifactProducePlantCardListener::~GeneralVaseArtifactProducePlantCardListener() */

void __thiscall
GeneralVaseArtifactProducePlantCardListener::~GeneralVaseArtifactProducePlantCardListener
          (GeneralVaseArtifactProducePlantCardListener *this)

{
  *(undefined ***)this = &PTR_GetClass_0670fb70;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* GeneralVaseArtifactProducePlantCardListener::~GeneralVaseArtifactProducePlantCardListener() */

void __thiscall
GeneralVaseArtifactProducePlantCardListener::~GeneralVaseArtifactProducePlantCardListener
          (GeneralVaseArtifactProducePlantCardListener *this)

{
  ~GeneralVaseArtifactProducePlantCardListener(this);
  AK::FreeHook(this);
  return;
}


/* GeneralVaseArtifactProducePlantCardListener::GeneralVaseArtifactProducePlantCardListener() */

void __thiscall
GeneralVaseArtifactProducePlantCardListener::GeneralVaseArtifactProducePlantCardListener
          (GeneralVaseArtifactProducePlantCardListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_0670fb70;
  return;
}


/* GeneralVaseArtifactProducePlantCardListener::StaticNew() */

GeneralVaseArtifactProducePlantCardListener *
GeneralVaseArtifactProducePlantCardListener::StaticNew(void)

{
  GeneralVaseArtifactProducePlantCardListener *this;
  
  this = ::operator_new(0x18);
  GeneralVaseArtifactProducePlantCardListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralVaseArtifactProducePlantCardListener::StaticClassInit() */

void GeneralVaseArtifactProducePlantCardListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"GeneralVaseArtifactProducePlantCardListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a89e94,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeneralVaseArtifactProducePlantCardListener::StaticGetClass() */

long * GeneralVaseArtifactProducePlantCardListener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GeneralVaseArtifactProducePlantCardListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralVaseArtifactProducePlantCardListener::GetClass() const */

long * GeneralVaseArtifactProducePlantCardListener::GetClass(void)

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
  (*pcVar3)(plVar1,"GeneralVaseArtifactProducePlantCardListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralVaseArtifactProducePlantCardListener::onVaseArtifactProducePlantCard(std::string const&)
    */

void GeneralVaseArtifactProducePlantCardListener::onVaseArtifactProducePlantCard(string *param_1)

{
  bool bVar1;
  char cVar2;
  RtObject *this;
  PvZ1AchievementData *pPVar3;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(*(long *)(param_1 + 0x10) + 0x20));
  if (bVar1) {
    this = (RtObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(param_1 + 0x10) + 0x20));
    pPVar3 = Sexy::RtObject::Cast<PvZ1AchievementData>(this);
    if ((pPVar3 != (PvZ1AchievementData *)0x0) &&
       (cVar2 = PVZ1ModeUtils::IsPlayingPVZ1Level(), cVar2 != '\0')) {
      (**(code **)(*(long *)param_1 + 0x58))(param_1,1);
      return;
    }
  }
  return;
}


/* GeneralVaseArtifactProducePlantCardListener::RegisterListener(GeneralTask*) */

void __thiscall
GeneralVaseArtifactProducePlantCardListener::RegisterListener
          (GeneralVaseArtifactProducePlantCardListener *this,GeneralTask *param_1)

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
            ((ReceivedDataCallback *)this,onVaseArtifactProducePlantCard);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<std::string_const&,Sexy::CBMemberTranslatorX<GeneralVaseArtifactProducePlantCardListener,void(GeneralVaseArtifactProducePlantCardListener::*)(std::string_const&)>>
            ((MessageRouter *)puVar1,Message::VaseArtifactProducePlantCard,&local_40);
  this[8] = (GeneralVaseArtifactProducePlantCardListener)0x1;
  return;
}

