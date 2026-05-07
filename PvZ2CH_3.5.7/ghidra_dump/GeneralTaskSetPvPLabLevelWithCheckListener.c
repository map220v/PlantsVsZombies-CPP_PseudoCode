// Class: GeneralTaskSetPvPLabLevelWithCheckListener


/* GeneralTaskSetPvPLabLevelWithCheckListener::OnSetPvPLabLevel(int, int) */

void __thiscall
GeneralTaskSetPvPLabLevelWithCheckListener::OnSetPvPLabLevel
          (GeneralTaskSetPvPLabLevelWithCheckListener *this,int param_1,int param_2)

{
  if (param_1 != 1) {
    return;
  }
  (**(code **)(*(long *)this + 0x60))(this,param_2);
  return;
}


/* GeneralTaskSetPvPLabLevelWithCheckListener::~GeneralTaskSetPvPLabLevelWithCheckListener() */

void __thiscall
GeneralTaskSetPvPLabLevelWithCheckListener::~GeneralTaskSetPvPLabLevelWithCheckListener
          (GeneralTaskSetPvPLabLevelWithCheckListener *this)

{
  *(undefined ***)this = &PTR_GetClass_0670f270;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* GeneralTaskSetPvPLabLevelWithCheckListener::~GeneralTaskSetPvPLabLevelWithCheckListener() */

void __thiscall
GeneralTaskSetPvPLabLevelWithCheckListener::~GeneralTaskSetPvPLabLevelWithCheckListener
          (GeneralTaskSetPvPLabLevelWithCheckListener *this)

{
  ~GeneralTaskSetPvPLabLevelWithCheckListener(this);
  AK::FreeHook(this);
  return;
}


/* GeneralTaskSetPvPLabLevelWithCheckListener::GeneralTaskSetPvPLabLevelWithCheckListener() */

void __thiscall
GeneralTaskSetPvPLabLevelWithCheckListener::GeneralTaskSetPvPLabLevelWithCheckListener
          (GeneralTaskSetPvPLabLevelWithCheckListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_0670f270;
  return;
}


/* GeneralTaskSetPvPLabLevelWithCheckListener::StaticNew() */

GeneralTaskSetPvPLabLevelWithCheckListener *
GeneralTaskSetPvPLabLevelWithCheckListener::StaticNew(void)

{
  GeneralTaskSetPvPLabLevelWithCheckListener *this;
  
  this = ::operator_new(0x18);
  GeneralTaskSetPvPLabLevelWithCheckListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskSetPvPLabLevelWithCheckListener::StaticClassInit() */

void GeneralTaskSetPvPLabLevelWithCheckListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"GeneralTaskSetPvPLabLevelWithCheckListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a872b4,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeneralTaskSetPvPLabLevelWithCheckListener::StaticGetClass() */

long * GeneralTaskSetPvPLabLevelWithCheckListener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskSetPvPLabLevelWithCheckListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskSetPvPLabLevelWithCheckListener::GetClass() const */

long * GeneralTaskSetPvPLabLevelWithCheckListener::GetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskSetPvPLabLevelWithCheckListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskSetPvPLabLevelWithCheckListener::RegisterListener(GeneralTask*) */

void __thiscall
GeneralTaskSetPvPLabLevelWithCheckListener::RegisterListener
          (GeneralTaskSetPvPLabLevelWithCheckListener *this,GeneralTask *param_1)

{
  undefined *puVar1;
  int iVar2;
  AssetsManagerManifest *this_00;
  PVPLabData *pPVar3;
  long lVar4;
  code *pcVar5;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::Mesh::SetListener((Mesh *)this,(MeshListener *)param_1);
  this_00 = (AssetsManagerManifest *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  pPVar3 = (PVPLabData *)AssetsManagerManifest::getAssets(this_00);
  iVar2 = PVPLabData::GetLabItemLevel(pPVar3,1);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x10) + 0x20));
  puVar1 = gMessageRouter;
  if (iVar2 < *(int *)(lVar4 + 0x28)) {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnSetPvPLabLevel);
    local_30 = local_8;
    local_40 = local_18;
    uStack_38 = uStack_10;
    MessageRouter::
    Subscribe<int,int,Sexy::CBMemberTranslatorX<GeneralTaskSetPvPLabLevelWithCheckListener,void(GeneralTaskSetPvPLabLevelWithCheckListener::*)(int,int)>>
              ((MessageRouter *)puVar1,Message::SetPvPLabLevel,&local_40);
    this[8] = (GeneralTaskSetPvPLabLevelWithCheckListener)0x1;
    return;
  }
  pcVar5 = *(code **)(*(long *)this + 0x60);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x10) + 0x20));
  (*pcVar5)(this,*(undefined4 *)(lVar4 + 0x28));
  this[8] = (GeneralTaskSetPvPLabLevelWithCheckListener)0x0;
  return;
}

