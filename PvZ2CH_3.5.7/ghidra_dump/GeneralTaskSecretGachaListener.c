// Class: GeneralTaskSecretGachaListener


/* GeneralTaskSecretGachaListener::onFinishSecretGacha(int) */

void GeneralTaskSecretGachaListener::onFinishSecretGacha(int param_1)

{
  (**(code **)(*(long *)(ulong)(uint)param_1 + 0x58))();
  return;
}


/* GeneralTaskSecretGachaListener::~GeneralTaskSecretGachaListener() */

void __thiscall
GeneralTaskSecretGachaListener::~GeneralTaskSecretGachaListener
          (GeneralTaskSecretGachaListener *this)

{
  *(undefined ***)this = &PTR_GetClass_06710170;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* GeneralTaskSecretGachaListener::~GeneralTaskSecretGachaListener() */

void __thiscall
GeneralTaskSecretGachaListener::~GeneralTaskSecretGachaListener
          (GeneralTaskSecretGachaListener *this)

{
  ~GeneralTaskSecretGachaListener(this);
  AK::FreeHook(this);
  return;
}


/* GeneralTaskSecretGachaListener::GeneralTaskSecretGachaListener() */

void __thiscall
GeneralTaskSecretGachaListener::GeneralTaskSecretGachaListener(GeneralTaskSecretGachaListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_06710170;
  return;
}


/* GeneralTaskSecretGachaListener::StaticNew() */

GeneralTaskSecretGachaListener * GeneralTaskSecretGachaListener::StaticNew(void)

{
  GeneralTaskSecretGachaListener *this;
  
  this = ::operator_new(0x18);
  GeneralTaskSecretGachaListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskSecretGachaListener::StaticClassInit() */

void GeneralTaskSecretGachaListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"GeneralTaskSecretGachaListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a8bbd4,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeneralTaskSecretGachaListener::StaticGetClass() */

long * GeneralTaskSecretGachaListener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskSecretGachaListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskSecretGachaListener::GetClass() const */

long * GeneralTaskSecretGachaListener::GetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskSecretGachaListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskSecretGachaListener::RegisterListener(GeneralTask*) */

void __thiscall
GeneralTaskSecretGachaListener::RegisterListener
          (GeneralTaskSecretGachaListener *this,GeneralTask *param_1)

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
            ((ReceivedDataCallback *)this,onFinishSecretGacha);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<GeneralTaskSecretGachaListener,void(GeneralTaskSecretGachaListener::*)(int)>>
            ((MessageRouter *)puVar1,Message::FinishSecretGacha,&local_40);
  this[8] = (GeneralTaskSecretGachaListener)0x1;
  return;
}

