// Class: GeneralTaskObtainAccessoryPieceListener


/* GeneralTaskObtainAccessoryPieceListener::OnObtainAccessoryPiece(int, int) */

void __thiscall
GeneralTaskObtainAccessoryPieceListener::OnObtainAccessoryPiece
          (GeneralTaskObtainAccessoryPieceListener *this,int param_1,int param_2)

{
  (**(code **)(*(long *)this + 0x58))(this,param_2);
  return;
}


/* GeneralTaskObtainAccessoryPieceListener::~GeneralTaskObtainAccessoryPieceListener() */

void __thiscall
GeneralTaskObtainAccessoryPieceListener::~GeneralTaskObtainAccessoryPieceListener
          (GeneralTaskObtainAccessoryPieceListener *this)

{
  *(undefined ***)this = &PTR_GetClass_0670f4f0;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* GeneralTaskObtainAccessoryPieceListener::~GeneralTaskObtainAccessoryPieceListener() */

void __thiscall
GeneralTaskObtainAccessoryPieceListener::~GeneralTaskObtainAccessoryPieceListener
          (GeneralTaskObtainAccessoryPieceListener *this)

{
  ~GeneralTaskObtainAccessoryPieceListener(this);
  AK::FreeHook(this);
  return;
}


/* GeneralTaskObtainAccessoryPieceListener::GeneralTaskObtainAccessoryPieceListener() */

void __thiscall
GeneralTaskObtainAccessoryPieceListener::GeneralTaskObtainAccessoryPieceListener
          (GeneralTaskObtainAccessoryPieceListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_0670f4f0;
  return;
}


/* GeneralTaskObtainAccessoryPieceListener::StaticNew() */

GeneralTaskObtainAccessoryPieceListener * GeneralTaskObtainAccessoryPieceListener::StaticNew(void)

{
  GeneralTaskObtainAccessoryPieceListener *this;
  
  this = ::operator_new(0x18);
  GeneralTaskObtainAccessoryPieceListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskObtainAccessoryPieceListener::StaticClassInit() */

void GeneralTaskObtainAccessoryPieceListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"GeneralTaskObtainAccessoryPieceListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a87ee4,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeneralTaskObtainAccessoryPieceListener::StaticGetClass() */

long * GeneralTaskObtainAccessoryPieceListener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskObtainAccessoryPieceListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskObtainAccessoryPieceListener::GetClass() const */

long * GeneralTaskObtainAccessoryPieceListener::GetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskObtainAccessoryPieceListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskObtainAccessoryPieceListener::RegisterListener(GeneralTask*) */

void __thiscall
GeneralTaskObtainAccessoryPieceListener::RegisterListener
          (GeneralTaskObtainAccessoryPieceListener *this,GeneralTask *param_1)

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
            ((ReceivedDataCallback *)this,OnObtainAccessoryPiece);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<GeneralTaskObtainAccessoryPieceListener,void(GeneralTaskObtainAccessoryPieceListener::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::ObtainAccessoryPieces,&local_40);
  this[8] = (GeneralTaskObtainAccessoryPieceListener)0x1;
  return;
}

