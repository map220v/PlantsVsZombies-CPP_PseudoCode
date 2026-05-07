// Class: GeneralTaskConsumeGemsListener


/* GeneralTaskConsumeGemsListener::~GeneralTaskConsumeGemsListener() */

void __thiscall
GeneralTaskConsumeGemsListener::~GeneralTaskConsumeGemsListener
          (GeneralTaskConsumeGemsListener *this)

{
  *(undefined ***)this = &PTR_GetClass_06710670;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* GeneralTaskConsumeGemsListener::~GeneralTaskConsumeGemsListener() */

void __thiscall
GeneralTaskConsumeGemsListener::~GeneralTaskConsumeGemsListener
          (GeneralTaskConsumeGemsListener *this)

{
  ~GeneralTaskConsumeGemsListener(this);
  AK::FreeHook(this);
  return;
}


/* GeneralTaskConsumeGemsListener::GeneralTaskConsumeGemsListener() */

void __thiscall
GeneralTaskConsumeGemsListener::GeneralTaskConsumeGemsListener(GeneralTaskConsumeGemsListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_06710670;
  return;
}


/* GeneralTaskConsumeGemsListener::StaticNew() */

GeneralTaskConsumeGemsListener * GeneralTaskConsumeGemsListener::StaticNew(void)

{
  GeneralTaskConsumeGemsListener *this;
  
  this = ::operator_new(0x18);
  GeneralTaskConsumeGemsListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskConsumeGemsListener::StaticClassInit() */

void GeneralTaskConsumeGemsListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"GeneralTaskConsumeGemsListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a8d434,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeneralTaskConsumeGemsListener::StaticGetClass() */

long * GeneralTaskConsumeGemsListener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskConsumeGemsListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskConsumeGemsListener::GetClass() const */

long * GeneralTaskConsumeGemsListener::GetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskConsumeGemsListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskConsumeGemsListener::onRefreshTaskInfo() */

void __thiscall
GeneralTaskConsumeGemsListener::onRefreshTaskInfo(GeneralTaskConsumeGemsListener *this)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  ulong uVar5;
  long lVar6;
  RtObject *pRVar7;
  long *plVar8;
  long local_90;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  string asStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  uVar5 = LawnApp::GetRealBeijingTime(gLawnApp);
  if (uVar5 == 0) {
    uVar5 = Sexy::SexyTime((Sexy *)0x0);
    uVar5 = uVar5 / 1000;
  }
  local_90 = FUN_03a79cd0(uVar5);
  lVar6 = LawnApp::BeijingTime(gLawnApp,&local_90);
  uVar1 = *(int *)(lVar6 + 0x10) * 100 + 100 + (*(int *)(lVar6 + 0x14) + 0x76c) * 10000 +
          *(int *)(lVar6 + 0xc);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(*(long *)(this + 0x10) + 0x20));
  if (bVar2) {
    pRVar7 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x10) + 0x20));
    Sexy::RtObject::Cast<BattleOrderTaskData>(pRVar7);
  }
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(*(long *)(this + 0x10) + 0x20));
  if (bVar2) {
    pRVar7 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x10) + 0x20));
    Sexy::RtObject::Cast<GiftFoReturnTaskData>(pRVar7);
  }
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(*(long *)(this + 0x10) + 0x20));
  if (bVar2) {
    pRVar7 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x10) + 0x20));
    Sexy::RtObject::Cast<NFSLinkageGradeTaskData>(pRVar7);
  }
  iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  uVar5 = 0;
  ActivityManager::GetActiveItem(iVar4);
  cVar3 = FUN_03a79ca4(local_80);
  if ((cVar3 != '\0') && (local_70 != '\0')) {
    iVar4 = StringHelper::ToInt(asStack_68);
    uVar5 = PlayerInfo::GetNumGemConsumeRecordedBetween(this_01,iVar4,uVar1);
    uVar5 = uVar5 & 0xffffffff;
  }
  Sexy::OutputDebugStrF
            ((wchar_t *)"Gem Consume Currency, date is %d, gems are %d",(ulong)uVar1,uVar5);
  lVar6 = *(long *)(this + 0x10);
  *(int *)(lVar6 + 0x10) = (int)uVar5;
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(lVar6 + 0x20));
  plVar8 = *(long **)(this + 0x10);
  if ((*(int *)(lVar6 + 0x28) <= (int)uVar5) && (*(int *)((long)plVar8 + 0x14) != 3)) {
    *(undefined4 *)((long)plVar8 + 0x14) = 2;
    GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
    plVar8 = *(long **)(this + 0x10);
  }
  (**(code **)(*plVar8 + 0x60))(plVar8);
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskConsumeGemsListener::RegisterListener(GeneralTask*) */

void __thiscall
GeneralTaskConsumeGemsListener::RegisterListener
          (GeneralTaskConsumeGemsListener *this,GeneralTask *param_1)

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
            ((ReceivedDataCallback *)this,onRefreshTaskInfo);
  Sexy::Delegate0::
  Delegate0<GeneralTaskConsumeGemsListener,void(GeneralTaskConsumeGemsListener::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::RefreshSomeTasksData,aDStack_38);
  this[8] = (GeneralTaskConsumeGemsListener)0x1;
  onRefreshTaskInfo(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

