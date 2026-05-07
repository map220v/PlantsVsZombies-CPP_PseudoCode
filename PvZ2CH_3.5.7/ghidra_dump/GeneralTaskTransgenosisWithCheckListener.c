// Class: GeneralTaskTransgenosisWithCheckListener


/* GeneralTaskTransgenosisWithCheckListener::FinishPlantTransgenic(int) */

void GeneralTaskTransgenosisWithCheckListener::FinishPlantTransgenic(int param_1)

{
  (**(code **)(*(long *)(ulong)(uint)param_1 + 0x58))();
  return;
}


/* GeneralTaskTransgenosisWithCheckListener::FinishAvatarTransgenic() */

void __thiscall
GeneralTaskTransgenosisWithCheckListener::FinishAvatarTransgenic
          (GeneralTaskTransgenosisWithCheckListener *this)

{
  (**(code **)(*(long *)this + 0x58))(this,1);
  return;
}


/* GeneralTaskTransgenosisWithCheckListener::~GeneralTaskTransgenosisWithCheckListener() */

void __thiscall
GeneralTaskTransgenosisWithCheckListener::~GeneralTaskTransgenosisWithCheckListener
          (GeneralTaskTransgenosisWithCheckListener *this)

{
  *(undefined ***)this = &PTR_GetClass_0670f1f0;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* GeneralTaskTransgenosisWithCheckListener::~GeneralTaskTransgenosisWithCheckListener() */

void __thiscall
GeneralTaskTransgenosisWithCheckListener::~GeneralTaskTransgenosisWithCheckListener
          (GeneralTaskTransgenosisWithCheckListener *this)

{
  ~GeneralTaskTransgenosisWithCheckListener(this);
  AK::FreeHook(this);
  return;
}


/* GeneralTaskTransgenosisWithCheckListener::GeneralTaskTransgenosisWithCheckListener() */

void __thiscall
GeneralTaskTransgenosisWithCheckListener::GeneralTaskTransgenosisWithCheckListener
          (GeneralTaskTransgenosisWithCheckListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_0670f1f0;
  return;
}


/* GeneralTaskTransgenosisWithCheckListener::StaticNew() */

GeneralTaskTransgenosisWithCheckListener * GeneralTaskTransgenosisWithCheckListener::StaticNew(void)

{
  GeneralTaskTransgenosisWithCheckListener *this;
  
  this = ::operator_new(0x18);
  GeneralTaskTransgenosisWithCheckListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskTransgenosisWithCheckListener::StaticClassInit() */

void GeneralTaskTransgenosisWithCheckListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"GeneralTaskTransgenosisWithCheckListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a87044,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeneralTaskTransgenosisWithCheckListener::StaticGetClass() */

long * GeneralTaskTransgenosisWithCheckListener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskTransgenosisWithCheckListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskTransgenosisWithCheckListener::GetClass() const */

long * GeneralTaskTransgenosisWithCheckListener::GetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskTransgenosisWithCheckListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskTransgenosisWithCheckListener::JumpToTargetTask() */

bool GeneralTaskTransgenosisWithCheckListener::JumpToTargetTask(void)

{
  char cVar1;
  
  cVar1 = GetSecondWorldLevelCompleted(3);
  if (cVar1 != '\0') {
    Sexy::LazySingleton<QuickJumpUtil>::GetInstancePtr();
    PVZCheats::ShowTransGenosis();
  }
  return cVar1 != '\0';
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskTransgenosisWithCheckListener::RegisterListener(GeneralTask*) */

void __thiscall
GeneralTaskTransgenosisWithCheckListener::RegisterListener
          (GeneralTaskTransgenosisWithCheckListener *this,GeneralTask *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  CBMemberTranslatorX aCStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Mesh::SetListener((Mesh *)this,(MeshListener *)param_1);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,FinishPlantTransgenic);
  local_90 = local_50;
  uStack_88 = uStack_48;
  local_80 = local_40;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<GeneralTaskTransgenosisWithCheckListener,void(GeneralTaskTransgenosisWithCheckListener::*)(int)>>
            ((MessageRouter *)puVar1,Message::PlantTransgenic,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,FinishAvatarTransgenic);
  Sexy::Delegate0::
  Delegate0<GeneralTaskTransgenosisWithCheckListener,void(GeneralTaskTransgenosisWithCheckListener::*)()>
            (aDStack_38,aCStack_68);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::AvatarTransgenic,aDStack_38);
  lVar2 = ___stack_chk_guard;
  this[8] = (GeneralTaskTransgenosisWithCheckListener)0x1;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

