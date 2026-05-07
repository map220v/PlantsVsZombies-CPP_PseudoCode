// Class: GeneralTaskVaseBreakerPassWorldPacketListener


/* GeneralTaskVaseBreakerPassWorldPacketListener::~GeneralTaskVaseBreakerPassWorldPacketListener()
    */

void __thiscall
GeneralTaskVaseBreakerPassWorldPacketListener::~GeneralTaskVaseBreakerPassWorldPacketListener
          (GeneralTaskVaseBreakerPassWorldPacketListener *this)

{
  *(undefined ***)this = &PTR_GetClass_06710370;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* GeneralTaskVaseBreakerPassWorldPacketListener::~GeneralTaskVaseBreakerPassWorldPacketListener()
    */

void __thiscall
GeneralTaskVaseBreakerPassWorldPacketListener::~GeneralTaskVaseBreakerPassWorldPacketListener
          (GeneralTaskVaseBreakerPassWorldPacketListener *this)

{
  ~GeneralTaskVaseBreakerPassWorldPacketListener(this);
  AK::FreeHook(this);
  return;
}


/* GeneralTaskVaseBreakerPassWorldPacketListener::GeneralTaskVaseBreakerPassWorldPacketListener() */

void __thiscall
GeneralTaskVaseBreakerPassWorldPacketListener::GeneralTaskVaseBreakerPassWorldPacketListener
          (GeneralTaskVaseBreakerPassWorldPacketListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_06710370;
  return;
}


/* GeneralTaskVaseBreakerPassWorldPacketListener::StaticNew() */

GeneralTaskVaseBreakerPassWorldPacketListener *
GeneralTaskVaseBreakerPassWorldPacketListener::StaticNew(void)

{
  GeneralTaskVaseBreakerPassWorldPacketListener *this;
  
  this = ::operator_new(0x18);
  GeneralTaskVaseBreakerPassWorldPacketListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskVaseBreakerPassWorldPacketListener::StaticClassInit() */

void GeneralTaskVaseBreakerPassWorldPacketListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"GeneralTaskVaseBreakerPassWorldPacketListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a8c594,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeneralTaskVaseBreakerPassWorldPacketListener::StaticGetClass() */

long * GeneralTaskVaseBreakerPassWorldPacketListener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskVaseBreakerPassWorldPacketListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskVaseBreakerPassWorldPacketListener::GetClass() const */

long * GeneralTaskVaseBreakerPassWorldPacketListener::GetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskVaseBreakerPassWorldPacketListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskVaseBreakerPassWorldPacketListener::onLevelEnded(LevelDefinitionForTask*) */

void __thiscall
GeneralTaskVaseBreakerPassWorldPacketListener::onLevelEnded
          (GeneralTaskVaseBreakerPassWorldPacketListener *this,LevelDefinitionForTask *param_1)

{
  bool bVar1;
  long lVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1[0x21] != (LevelDefinitionForTask)0x0) && (*(long *)(gLawnApp + 0x9f0) != 0)) {
    Board::GetLevelDefinitionPtr();
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (bVar1) {
      Board::GetLevelDefinitionPtr();
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      if (*(char *)(lVar2 + 0x111) == '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      }
      else {
        Board::GetLevelDefinitionPtr();
        lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
        bVar1 = std::operator==((string *)(lVar2 + 200),"powerupvasebreakerbutter");
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
        if (bVar1) {
          (**(code **)(*(long *)this + 0x58))(this,1);
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeneralTaskVaseBreakerPassWorldPacketListener::RegisterListener(GeneralTask*) */

void __thiscall
GeneralTaskVaseBreakerPassWorldPacketListener::RegisterListener
          (GeneralTaskVaseBreakerPassWorldPacketListener *this,GeneralTask *param_1)

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
  Subscribe<LevelDefinitionForTask*,Sexy::CBMemberTranslatorX<GeneralTaskVaseBreakerPassWorldPacketListener,void(GeneralTaskVaseBreakerPassWorldPacketListener::*)(LevelDefinitionForTask*)>>
            ((MessageRouter *)puVar1,Message::LevelEndForTask,&local_40);
  this[8] = (GeneralTaskVaseBreakerPassWorldPacketListener)0x1;
  return;
}

