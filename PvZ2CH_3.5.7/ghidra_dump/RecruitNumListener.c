// Class: RecruitNumListener


/* RecruitNumListener::~RecruitNumListener() */

void __thiscall RecruitNumListener::~RecruitNumListener(RecruitNumListener *this)

{
  *(undefined ***)this = &PTR_GetClass_06710f70;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* RecruitNumListener::~RecruitNumListener() */

void __thiscall RecruitNumListener::~RecruitNumListener(RecruitNumListener *this)

{
  ~RecruitNumListener(this);
  AK::FreeHook(this);
  return;
}


/* RecruitNumListener::RecruitNumListener() */

void __thiscall RecruitNumListener::RecruitNumListener(RecruitNumListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_06710f70;
  return;
}


/* RecruitNumListener::StaticNew() */

RecruitNumListener * RecruitNumListener::StaticNew(void)

{
  RecruitNumListener *this;
  
  this = ::operator_new(0x18);
  RecruitNumListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RecruitNumListener::StaticClassInit() */

void RecruitNumListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"RecruitNumListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a90014,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RecruitNumListener::StaticGetClass() */

long * RecruitNumListener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RecruitNumListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RecruitNumListener::GetClass() const */

long * RecruitNumListener::GetClass(void)

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
  (*pcVar3)(plVar1,"RecruitNumListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RecruitNumListener::onAddRecruitNum() */

void __thiscall RecruitNumListener::onAddRecruitNum(RecruitNumListener *this)

{
  char cVar1;
  int iVar2;
  ActiveItem aAStack_140 [8];
  undefined4 local_138;
  char local_128;
  InvitationData aIStack_c0 [112];
  undefined4 local_50;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_03a79ca4(local_138);
  if ((cVar1 != '\0') && (local_128 != '\0')) {
    InvitationData::InvitationData(aIStack_c0);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_140,(RtObject *)aIStack_c0);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)this + 0x60))(this,local_50);
    }
    InvitationData::~InvitationData(aIStack_c0);
  }
  ActiveItem::~ActiveItem(aAStack_140);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RecruitNumListener::RegisterListener(GeneralTask*) */

void __thiscall RecruitNumListener::RegisterListener(RecruitNumListener *this,GeneralTask *param_1)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Mesh::SetListener((Mesh *)this,(MeshListener *)param_1);
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAddRecruitNum);
  Sexy::Delegate0::Delegate0<RecruitNumListener,void(RecruitNumListener::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::RecruitNum,aDStack_38);
  onAddRecruitNum(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

