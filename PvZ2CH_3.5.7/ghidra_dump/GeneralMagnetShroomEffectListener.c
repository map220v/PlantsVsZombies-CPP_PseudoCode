// Class: GeneralMagnetShroomEffectListener


/* GeneralMagnetShroomEffectListener::~GeneralMagnetShroomEffectListener() */

void __thiscall
GeneralMagnetShroomEffectListener::~GeneralMagnetShroomEffectListener
          (GeneralMagnetShroomEffectListener *this)

{
  *(undefined ***)this = &PTR_GetClass_0670f970;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* GeneralMagnetShroomEffectListener::~GeneralMagnetShroomEffectListener() */

void __thiscall
GeneralMagnetShroomEffectListener::~GeneralMagnetShroomEffectListener
          (GeneralMagnetShroomEffectListener *this)

{
  ~GeneralMagnetShroomEffectListener(this);
  AK::FreeHook(this);
  return;
}


/* GeneralMagnetShroomEffectListener::GeneralMagnetShroomEffectListener() */

void __thiscall
GeneralMagnetShroomEffectListener::GeneralMagnetShroomEffectListener
          (GeneralMagnetShroomEffectListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_0670f970;
  return;
}


/* GeneralMagnetShroomEffectListener::StaticNew() */

GeneralMagnetShroomEffectListener * GeneralMagnetShroomEffectListener::StaticNew(void)

{
  GeneralMagnetShroomEffectListener *this;
  
  this = ::operator_new(0x18);
  GeneralMagnetShroomEffectListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralMagnetShroomEffectListener::StaticClassInit() */

void GeneralMagnetShroomEffectListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"GeneralMagnetShroomEffectListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a894d4,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeneralMagnetShroomEffectListener::StaticGetClass() */

long * GeneralMagnetShroomEffectListener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GeneralMagnetShroomEffectListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralMagnetShroomEffectListener::GetClass() const */

long * GeneralMagnetShroomEffectListener::GetClass(void)

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
  (*pcVar3)(plVar1,"GeneralMagnetShroomEffectListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralMagnetShroomEffectListener::onMagnetShroomPullHelm(Plant*, BoardEntity*) */

void GeneralMagnetShroomEffectListener::onMagnetShroomPullHelm(Plant *param_1,BoardEntity *param_2)

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


/* GeneralMagnetShroomEffectListener::RegisterListener(GeneralTask*) */

void __thiscall
GeneralMagnetShroomEffectListener::RegisterListener
          (GeneralMagnetShroomEffectListener *this,GeneralTask *param_1)

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
            ((ReceivedDataCallback *)this,onMagnetShroomPullHelm);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Plant*,BoardEntity*,Sexy::CBMemberTranslatorX<GeneralMagnetShroomEffectListener,void(GeneralMagnetShroomEffectListener::*)(Plant*,BoardEntity*)>>
            ((MessageRouter *)puVar1,Message::MagnetShroomPullHelm,&local_40);
  this[8] = (GeneralMagnetShroomEffectListener)0x1;
  return;
}

