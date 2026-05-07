// Class: GeneralTaskCollectAvatarPiecesListener


/* GeneralTaskCollectAvatarPiecesListener::onObtainAvatarPieces(int) */

void GeneralTaskCollectAvatarPiecesListener::onObtainAvatarPieces(int param_1)

{
  (**(code **)(*(long *)(ulong)(uint)param_1 + 0x58))();
  return;
}


/* GeneralTaskCollectAvatarPiecesListener::OnObtainAccessoryPiece(int, int) */

void __thiscall
GeneralTaskCollectAvatarPiecesListener::OnObtainAccessoryPiece
          (GeneralTaskCollectAvatarPiecesListener *this,int param_1,int param_2)

{
  (**(code **)(*(long *)this + 0x58))(this,param_2);
  return;
}


/* GeneralTaskCollectAvatarPiecesListener::~GeneralTaskCollectAvatarPiecesListener() */

void __thiscall
GeneralTaskCollectAvatarPiecesListener::~GeneralTaskCollectAvatarPiecesListener
          (GeneralTaskCollectAvatarPiecesListener *this)

{
  *(undefined ***)this = &PTR_GetClass_0670e3f0;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* GeneralTaskCollectAvatarPiecesListener::~GeneralTaskCollectAvatarPiecesListener() */

void __thiscall
GeneralTaskCollectAvatarPiecesListener::~GeneralTaskCollectAvatarPiecesListener
          (GeneralTaskCollectAvatarPiecesListener *this)

{
  ~GeneralTaskCollectAvatarPiecesListener(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskCollectAvatarPiecesListener::StaticClassInit() */

void GeneralTaskCollectAvatarPiecesListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"GeneralTaskCollectAvatarPiecesListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a82b80,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeneralTaskCollectAvatarPiecesListener::StaticGetClass() */

long * GeneralTaskCollectAvatarPiecesListener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskCollectAvatarPiecesListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskCollectAvatarPiecesListener::GetClass() const */

long * GeneralTaskCollectAvatarPiecesListener::GetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskCollectAvatarPiecesListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskCollectAvatarPiecesListener::GeneralTaskCollectAvatarPiecesListener() */

void __thiscall
GeneralTaskCollectAvatarPiecesListener::GeneralTaskCollectAvatarPiecesListener
          (GeneralTaskCollectAvatarPiecesListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_0670e3f0;
  return;
}


/* GeneralTaskCollectAvatarPiecesListener::StaticNew() */

GeneralTaskCollectAvatarPiecesListener * GeneralTaskCollectAvatarPiecesListener::StaticNew(void)

{
  GeneralTaskCollectAvatarPiecesListener *this;
  
  this = ::operator_new(0x18);
  GeneralTaskCollectAvatarPiecesListener(this);
  return this;
}


/* GeneralTaskCollectAvatarPiecesListener::RegisterListener(GeneralTask*) */

void __thiscall
GeneralTaskCollectAvatarPiecesListener::RegisterListener
          (GeneralTaskCollectAvatarPiecesListener *this,GeneralTask *param_1)

{
  undefined *puVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::Mesh::SetListener((Mesh *)this,(MeshListener *)param_1);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onObtainAvatarPieces);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<GeneralTaskCollectAvatarPiecesListener,void(GeneralTaskCollectAvatarPiecesListener::*)(int)>>
            ((MessageRouter *)puVar1,Message::ObtainAvatarPieces,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnObtainAccessoryPiece);
  local_60 = local_8;
  local_70 = local_18;
  uStack_68 = uStack_10;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<GeneralTaskCollectAvatarPiecesListener,void(GeneralTaskCollectAvatarPiecesListener::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::ObtainAccessoryPieces,&local_70);
  this[8] = (GeneralTaskCollectAvatarPiecesListener)0x1;
  return;
}

