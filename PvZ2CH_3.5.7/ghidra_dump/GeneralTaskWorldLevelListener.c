// Class: GeneralTaskWorldLevelListener


/* GeneralTaskWorldLevelListener::~GeneralTaskWorldLevelListener() */

void __thiscall
GeneralTaskWorldLevelListener::~GeneralTaskWorldLevelListener(GeneralTaskWorldLevelListener *this)

{
  *(undefined ***)this = &PTR_GetClass_0670e270;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* GeneralTaskWorldLevelListener::~GeneralTaskWorldLevelListener() */

void __thiscall
GeneralTaskWorldLevelListener::~GeneralTaskWorldLevelListener(GeneralTaskWorldLevelListener *this)

{
  ~GeneralTaskWorldLevelListener(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskWorldLevelListener::StaticClassInit() */

void GeneralTaskWorldLevelListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"GeneralTaskWorldLevelListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a82430,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeneralTaskWorldLevelListener::StaticGetClass() */

long * GeneralTaskWorldLevelListener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskWorldLevelListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskWorldLevelListener::GetClass() const */

long * GeneralTaskWorldLevelListener::GetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskWorldLevelListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskWorldLevelListener::GeneralTaskWorldLevelListener() */

void __thiscall
GeneralTaskWorldLevelListener::GeneralTaskWorldLevelListener(GeneralTaskWorldLevelListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_0670e270;
  return;
}


/* GeneralTaskWorldLevelListener::StaticNew() */

GeneralTaskWorldLevelListener * GeneralTaskWorldLevelListener::StaticNew(void)

{
  GeneralTaskWorldLevelListener *this;
  
  this = ::operator_new(0x18);
  GeneralTaskWorldLevelListener(this);
  return this;
}


/* GeneralTaskWorldLevelListener::onLevelEnded(LevelDefinitionForTask*) */

void __thiscall
GeneralTaskWorldLevelListener::onLevelEnded
          (GeneralTaskWorldLevelListener *this,LevelDefinitionForTask *param_1)

{
  bool bVar1;
  char cVar2;
  RtObject *this_00;
  HappyVaseBreakerTaskWorldLevelData *pHVar3;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(*(long *)(this + 0x10) + 0x20));
  if (bVar1) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x10) + 0x20));
    pHVar3 = Sexy::RtObject::Cast<HappyVaseBreakerTaskWorldLevelData>(this_00);
    if ((((pHVar3 != (HappyVaseBreakerTaskWorldLevelData *)0x0) &&
         (pHVar3[0x66] == *(HappyVaseBreakerTaskWorldLevelData *)(param_1 + 0x21))) &&
        (*(HappyVaseBreakerTaskWorldLevelData *)(param_1 + 0xc) == pHVar3[100])) &&
       (((pHVar3[0x65] == *(HappyVaseBreakerTaskWorldLevelData *)(param_1 + 0xd) &&
         (cVar2 = std::operator==((string *)param_1,(string *)(pHVar3 + 0x58)), cVar2 != '\0')) &&
        ((*(int *)(pHVar3 + 0x60) == 0 || (*(int *)(pHVar3 + 0x60) == *(int *)(param_1 + 8))))))) {
      (**(code **)(*(long *)this + 0x58))(this,1);
      return;
    }
  }
  return;
}


/* GeneralTaskWorldLevelListener::RegisterListener(GeneralTask*) */

void __thiscall
GeneralTaskWorldLevelListener::RegisterListener
          (GeneralTaskWorldLevelListener *this,GeneralTask *param_1)

{
  undefined *puVar1;
  bool bVar2;
  RtObject *this_00;
  HappyVaseBreakerTaskWorldLevelData *pHVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::Mesh::SetListener((Mesh *)this,(MeshListener *)param_1);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(*(long *)(this + 0x10) + 0x20));
  if (bVar2) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x10) + 0x20));
    pHVar3 = Sexy::RtObject::Cast<HappyVaseBreakerTaskWorldLevelData>(this_00);
    puVar1 = gMessageRouter;
    if (pHVar3 != (HappyVaseBreakerTaskWorldLevelData *)0x0) {
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onLevelEnded);
      local_30 = local_8;
      local_40 = local_18;
      uStack_38 = uStack_10;
      MessageRouter::
      Subscribe<LevelDefinitionForTask*,Sexy::CBMemberTranslatorX<GeneralTaskWorldLevelListener,void(GeneralTaskWorldLevelListener::*)(LevelDefinitionForTask*)>>
                ((MessageRouter *)puVar1,Message::LevelEndForTask,&local_40);
      this[8] = (GeneralTaskWorldLevelListener)0x1;
      return;
    }
  }
  return;
}

