// Class: VolcanoSnowBattleModule


/* VolcanoSnowBattleModule::OnErrorOK() */

void __thiscall VolcanoSnowBattleModule::OnErrorOK(VolcanoSnowBattleModule *this)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  *(undefined4 *)(this + 0x18) = 6;
  return;
}


/* VolcanoSnowBattleModule::Draw(Sexy::Graphics*) */

void __thiscall VolcanoSnowBattleModule::Draw(VolcanoSnowBattleModule *this,Graphics *param_1)

{
  if (*(int *)(this + 0x18) != 1) {
    return;
  }
  LawnApp::DrawDarkeningLayer(gLawnApp,param_1,0.5);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VolcanoSnowBattleModule::StaticClassInit() */

void VolcanoSnowBattleModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"VolcanoSnowBattleModule");
    (*pcVar2)(plVar1,asStack_10,FUN_04ba62dc,0x168,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VolcanoSnowBattleModule::StaticGetClass() */

long * VolcanoSnowBattleModule::StaticGetClass(void)

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
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"VolcanoSnowBattleModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VolcanoSnowBattleModule::IsFinish() */

bool __thiscall VolcanoSnowBattleModule::IsFinish(VolcanoSnowBattleModule *this)

{
  return *(int *)(this + 0x18) == 6;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VolcanoSnowBattleModule::DropLoot(VacationMaterialItem const&) */

void __thiscall
VolcanoSnowBattleModule::DropLoot(VolcanoSnowBattleModule *this,VacationMaterialItem *param_1)

{
  int iVar1;
  Collectable *this_00;
  int iVar2;
  string asStack_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  float local_28 [2];
  float local_20;
  DVec3 aDStack_18 [8];
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (0 < *(int *)(param_1 + 0x18)) {
    iVar2 = 0;
    do {
      iVar1 = MaterialItemMapper::GetInstance();
      iVar2 = iVar2 + 1;
      NameMapperBase::GetNameForId(iVar1);
      this_00 = (Collectable *)Board::AddCollectable(*(string **)(gLawnApp + 0x9f0));
      Collectable::SetIsEndOfLevelReward(this_00,true);
      Collectable::SetNeverExpire(this_00,true);
      local_38 = *(undefined8 *)(this + 0x158);
      local_30 = *(undefined4 *)(this + 0x160);
      iVar1 = Sexy::Rand(100);
      local_38._0_4_ = (float)(iVar1 + -0x32) + (float)local_38;
      iVar1 = Sexy::Rand(0x32);
      local_38 = CONCAT44(local_38._4_4_ - (float)iVar1,(float)local_38);
      (**(code **)(*(long *)this_00 + 0x78))(this_00,&local_38);
      DVec3::DVec3((DVec3 *)local_28);
      local_28[0] = (float)Sexy::Rand(100.0);
      local_28[0] = local_28[0] - 50.0;
      local_20 = (float)Sexy::Rand(50.0);
      local_20 = local_20 + 150.0;
      DVec3::DVec3(aDStack_18);
      local_10 = 0xc3960000;
      Collectable::SetMotionNewtonian
                (this_00,(SexyVector3 *)local_28,(SexyVector3 *)aDStack_18,true);
      Collectable::StartCollectAfterMotion(this_00);
      std::string::~string(asStack_40);
    } while (iVar2 < *(int *)(param_1 + 0x18));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VolcanoSnowBattleModule::VolcanoSnowBattleModule() */

void __thiscall VolcanoSnowBattleModule::VolcanoSnowBattleModule(VolcanoSnowBattleModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06975a60;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x20));
  ActiveSummeryConfig::ActiveSummeryConfig((ActiveSummeryConfig *)(this + 0x28));
  DVec3::DVec3((DVec3 *)(this + 0x158));
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  ActiveSummeryConfig::Init((ActiveSummeryConfig *)(this + 0x28));
  return;
}


/* VolcanoSnowBattleModule::StaticNew() */

VolcanoSnowBattleModule * VolcanoSnowBattleModule::StaticNew(void)

{
  VolcanoSnowBattleModule *this;
  
  this = ::operator_new(0x168);
  VolcanoSnowBattleModule(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VolcanoSnowBattleModule::OnCollectableTryToCollect(Collectable*) */

void __thiscall
VolcanoSnowBattleModule::OnCollectableTryToCollect
          (VolcanoSnowBattleModule *this,Collectable *param_1)

{
  int iVar1;
  long lVar2;
  NameMapperBase *this_00;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  string asStack_28 [8];
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TwinsAssistPerson::GetPopAnimRig();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  FUN_05475d88(asStack_28,lVar2 + 8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  this_00 = (NameMapperBase *)MaterialItemMapper::GetInstance();
  iVar1 = NameMapperBase::GetIdForName(this_00,asStack_28);
  if (0 < iVar1) {
    fVar4 = (float)Sexy::Rand(0.2);
    fVar5 = (float)Sexy::Rand(0.2);
    DVec3::DVec3((DVec3 *)&local_18);
    iVar1 = *(int *)(gLawnApp + 0x724);
    Board::GetBoardBaseOffset();
    local_18 = FUN_04ba43ac((fVar4 + 0.4) * (float)iVar1 - (float)local_20);
    iVar1 = *(int *)(gLawnApp + 0x728);
    Board::GetBoardBaseOffset();
    local_14 = FUN_04ba43ac((fVar5 + 0.4) * (float)iVar1 - (float)local_1c);
    uVar3 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)param_1);
    Collectable::SetMotionInterpolateAndScale
              ((Collectable *)0x3f800000,0x3f8ccccd,0x40a00000,param_1,uVar3,
               (RtWeakPtr<Sexy::ResourceInfo> *)&local_18,5);
  }
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VolcanoSnowBattleModule::OnBattleResultFinish(StandaloneEffect*) */

void VolcanoSnowBattleModule::OnBattleResultFinish(StandaloneEffect *param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x18) = 5;
  uVar1 = PVZ_T();
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VolcanoSnowBattleModule::ShowErrorDialog(std::wstring const&) */

void __thiscall
VolcanoSnowBattleModule::ShowErrorDialog(VolcanoSnowBattleModule *this,wstring *param_1)

{
  LawnApp *this_00;
  PVZ2UIDialog *pPVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::KillPVZ2Dialog(gLawnApp);
  this_00 = gLawnApp;
  FUN_05478178(awStack_50,L"[SUMMARY_NOTICE]",auStack_58);
  pPVar1 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_50,param_1);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05478178(auStack_58,L"[BUTTON_OK]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnErrorOK);
  Sexy::Delegate0::Delegate0<VolcanoSnowBattleModule,void(VolcanoSnowBattleModule::*)()>
            (aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(pPVar1,auStack_58,aDStack_38,1);
  FUN_05476c50(auStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VolcanoSnowBattleModule::onNetworkError(int) */

void VolcanoSnowBattleModule::onNetworkError(int param_1)

{
  VolcanoSnowBattleModule *this;
  undefined1 auStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  this = (VolcanoSnowBattleModule *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x18) == 2) {
    *(undefined4 *)(this + 0x18) = 4;
    FUN_04ba3fa8(*(long *)(gLawnApp + 0x9f0) + 0x880);
    FUN_05478178(awStack_10,L"[ACTIVITY_SUMMERY_LEVEL_ERROR_DESC]",auStack_18);
    ShowErrorDialog(this,awStack_10);
    FUN_05476c50(awStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VolcanoSnowBattleModule::GameplayStarted() */

void __thiscall VolcanoSnowBattleModule::GameplayStarted(VolcanoSnowBattleModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if (0 < *(int *)(pRVar1 + 0x40)) {
    FUN_04ba3ef4(*(long *)(gLawnApp + 0x9f0) + 0x887,1);
    return;
  }
  return;
}


/* VolcanoSnowBattleModule::RequestBattleEnd() */

void __thiscall VolcanoSnowBattleModule::RequestBattleEnd(VolcanoSnowBattleModule *this)

{
  int iVar1;
  int iVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  iVar1 = *(int *)(pRVar3 + 0x44);
  iVar2 = *(int *)(pRVar3 + 0x40);
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
  INetworkMsgProcess::RequestActivityLevelEnd(this_01,(uint)(iVar1 != 0),iVar2 + 1);
  return;
}


/* VolcanoSnowBattleModule::GetBattleResultNameAndLabel(std::string&, std::string&) */

void __thiscall
VolcanoSnowBattleModule::GetBattleResultNameAndLabel
          (VolcanoSnowBattleModule *this,string *param_1,string *param_2)

{
  int iVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  string *__n;
  
  __n = param_2;
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if (*(int *)(pRVar2 + 0x44) == 0) {
    std::string::append(param_1,"POPANIM_EFFECTS_VOLCANO_LEVEL_END",(size_t)__n);
    iVar1 = *(int *)(pRVar2 + 0x40);
    if (iVar1 == 1) {
      std::string::append(param_2,"p2",(size_t)__n);
      return;
    }
    if (iVar1 == 2) {
      std::string::append(param_2,"p3",(size_t)__n);
      return;
    }
    if (iVar1 == 0) {
      std::string::append(param_2,"p1",(size_t)__n);
      return;
    }
  }
  else if (*(int *)(pRVar2 + 0x44) == 1) {
    std::string::append(param_1,"POPANIM_EFFECTS_SNOW_LEVEL_END",(size_t)__n);
    iVar1 = *(int *)(pRVar2 + 0x40);
    if (iVar1 == 1) {
      std::string::append(param_2,"g2",(size_t)__n);
      return;
    }
    if (iVar1 == 2) {
      std::string::append(param_2,"g3",(size_t)__n);
      return;
    }
    if (iVar1 == 0) {
      std::string::append(param_2,"g1",(size_t)__n);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VolcanoSnowBattleModule::OnPlantAdded(Plant*) */

void __thiscall VolcanoSnowBattleModule::OnPlantAdded(VolcanoSnowBattleModule *this,Plant *param_1)

{
  char cVar1;
  int iVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  VolcanoSnowBattleModule *pVVar4;
  undefined8 *puVar5;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar6;
  char *__s;
  undefined4 uVar7;
  undefined4 uVar8;
  string asStack_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  Vec3 aVStack_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if (*(int *)(pRVar3 + 0x44) == 0) {
    pVVar4 = this + 0xc0;
  }
  else {
    if (*(int *)(pRVar3 + 0x44) != 1) goto LAB_04ba5928;
    pVVar4 = this + 0x98;
  }
  if (pVVar4 != (VolcanoSnowBattleModule *)0x0) {
    cVar1 = PlantRestrictionSet::IsIncluded((Plant *)pVVar4);
    if (cVar1 == '\0') {
      Plant::SetExtraLevelDamge(param_1,*(float *)(this + 0x34));
      __s = "POPANIM_EFFECTS_ACTIVE_SUMMERY_POWER_DOWN";
    }
    else {
      Plant::SetExtraLevelDamge(param_1,*(float *)(this + 0x30));
      __s = "POPANIM_EFFECTS_ACTIVE_SUMMERY_POWER_UP";
    }
    std::string::string(asStack_40,__s);
    nop();
    iVar2 = (**(code **)(*(long *)param_1 + 200))(param_1);
    puVar5 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)param_1);
    uVar7 = 0xc1a00000;
    local_38 = *puVar5;
    local_30 = *(undefined4 *)(puVar5 + 1);
    uVar8 = 0;
    EATextSquish::Vec3::Vec3(aVStack_28,0.0,-20.0,0.0);
    this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    GetPAMByName(asStack_40);
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
    Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar6,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    local_18 = Sexy::SexyVector3::operator+((SexyVector3 *)&local_38,(SexyVector3 *)aVStack_28);
    local_14 = uVar7;
    local_10 = uVar8;
    StandaloneEffect::SetBoardSpaceOrigin
              ((StandaloneEffect *)this_00,(SexyVector3 *)&local_18,iVar2 + 1);
    Effect_PopAnim::SetCentered(this_00,true);
    std::string::string((string *)&local_18,"fire");
    Effect_PopAnim::PlaySingleAnimation(this_00,(RtWeakPtr *)&local_18,0);
    std::string::~string((string *)&local_18);
    nop();
    std::string::~string(asStack_40);
  }
LAB_04ba5928:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VolcanoSnowBattleModule::ShowBossProgress() */

void __thiscall VolcanoSnowBattleModule::ShowBossProgress(VolcanoSnowBattleModule *this)

{
  int iVar1;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar2;
  undefined4 uVar3;
  string asStack_38 [8];
  string asStack_30 [8];
  Point aPStack_28 [8];
  int local_20;
  int local_1c;
  Point aPStack_18 [16];
  long local_8;
  
  *(undefined4 *)(this + 0x18) = 7;
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_38);
  Set8BytesTo0(asStack_30);
  GetBattleResultNameAndLabel(this,asStack_38,asStack_30);
  iVar1 = FUN_04ba43bc();
  Sexy::Point::Point(aPStack_28,iVar1,0);
  Sexy::Point::Point(aPStack_18,3,1);
  BoardTransforms::GridToBoardSpace(aPStack_18);
  Sexy::TPoint<int>::operator+=((TPoint<int> *)&local_20,(TPoint *)aPStack_28);
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  GetPAMByName(asStack_38);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aPStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_18);
  EATextSquish::Vec3::Vec3((Vec3 *)aPStack_18,(float)local_20,(float)local_1c,0.0);
  StandaloneEffect::SetBoardSpaceOrigin
            ((StandaloneEffect *)this_00,(SexyVector3 *)aPStack_18,0xdbba1);
  Effect_PopAnim::SetCentered(this_00,true);
  StandaloneEffect::SetKeepAlive((StandaloneEffect *)this_00,true);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x20),(RtWeakPtrBase *)aPStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_18);
  uVar3 = PVZ_T();
  *(undefined4 *)(this + 0x1c) = uVar3;
  std::string::~string(asStack_30);
  std::string::~string(asStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VolcanoSnowBattleModule::AddToRenderQueue(RenderQueue*) */

void __thiscall
VolcanoSnowBattleModule::AddToRenderQueue(VolcanoSnowBattleModule *this,RenderQueue *param_1)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,Draw);
  Sexy::Delegate1<Sexy::Graphics*>::
  Delegate1<VolcanoSnowBattleModule,void(VolcanoSnowBattleModule::*)(Sexy::Graphics*)>
            (aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,900000,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VolcanoSnowBattleModule::AddAnimationEvent(AnimationMgr*, float*) */

void __thiscall
VolcanoSnowBattleModule::AddAnimationEvent
          (VolcanoSnowBattleModule *this,AnimationMgr *param_1,float *param_2)

{
  ResilienceTutorialIntroProperties *pRVar1;
  AnimationController *pAVar2;
  float fVar3;
  RtMixedPtr aRStack_20 [8];
  RtId aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if (*(int *)(pRVar1 + 0x40) == 0) {
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_20);
    std::string::string(asStack_10,"ShowBossProgress");
    pAVar2 = (AnimationController *)TimeEvent::Create(aRStack_18,asStack_10);
    AnimationMgr::Add(param_1,pAVar2,*param_2,param_2);
    std::string::~string(asStack_10);
    nop();
    Sexy::RtId::~RtId(aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    fVar3 = (float)BossKillTimeChallengeModule::GetBossProgressShowTime();
    *param_2 = *param_2 + fVar3;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VolcanoSnowBattleModule::StoredPlantInfos() */

void __thiscall VolcanoSnowBattleModule::StoredPlantInfos(VolcanoSnowBattleModule *this)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  ResourceInfo *pRVar4;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  int iVar5;
  Board *this_00;
  int iVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  DangerRoomPlantInfo aDStack_20 [8];
  int local_18;
  int local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  iVar6 = 0;
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  if (0 < *(int *)(this_00 + 0xf8)) {
    do {
      iVar5 = 0;
      if (0 < *(int *)(this_00 + 0xfc)) {
        do {
          std::string::string((string *)aDStack_20,"");
          lVar2 = Board::GetPlantAt(this_00,iVar6,iVar5,(string *)aDStack_20);
          std::string::~string((string *)aDStack_20);
          nop();
          if (lVar2 != 0) {
            Plant::GetType();
            plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                       ((RtWeakPtr<Sexy::ResourceInfo> *)aDStack_20);
            if (*(code **)(*plVar3 + 0xa0) == PlantType::IsVine) {
              cVar1 = PlantType::IsVine();
            }
            else {
              cVar1 = (**(code **)(*plVar3 + 0xa0))();
            }
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aDStack_20);
            if ((cVar1 != '\0') &&
               (lVar2 = Board::FindPlantGroup(*(Plant **)(gLawnApp + 0x9f0)), lVar2 != 0)) {
              PlantGroup::GetPlantAtLayer(aDStack_20,lVar2,1);
              pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aDStack_20);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aDStack_20);
              if (pRVar4 != (ResourceInfo *)0x0) {
                DangerRoomPlantInfo::DangerRoomPlantInfo(aDStack_20);
                Plant::GetType();
                Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                          ((RtWeakPtr<PowerPropertySheet> *)aDStack_20,(RtWeakPtr *)aRStack_28);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
                local_18 = iVar5;
                local_14 = iVar6;
                std::vector<DangerRoomPlantInfo,std::allocator<DangerRoomPlantInfo>>::push_back
                          ((vector<DangerRoomPlantInfo,std::allocator<DangerRoomPlantInfo>> *)in_x8,
                           aDStack_20);
                std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aDStack_20);
              }
            }
            DangerRoomPlantInfo::DangerRoomPlantInfo(aDStack_20);
            Plant::GetType();
            Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                      ((RtWeakPtr<PowerPropertySheet> *)aDStack_20,(RtWeakPtr *)aRStack_28);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
            local_18 = iVar5;
            local_14 = iVar6;
            std::vector<DangerRoomPlantInfo,std::allocator<DangerRoomPlantInfo>>::push_back
                      ((vector<DangerRoomPlantInfo,std::allocator<DangerRoomPlantInfo>> *)in_x8,
                       aDStack_20);
            std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aDStack_20);
          }
          iVar5 = iVar5 + 1;
          this_00 = *(Board **)(gLawnApp + 0x9f0);
        } while (iVar5 < *(int *)(this_00 + 0xfc));
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(this_00 + 0xf8));
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VolcanoSnowBattleModule::ShowBattleResult() */

void __thiscall VolcanoSnowBattleModule::ShowBattleResult(VolcanoSnowBattleModule *this)

{
  int iVar1;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar2;
  char *pcVar3;
  string asStack_90 [8];
  string asStack_88 [8];
  Point aPStack_80 [8];
  int local_78;
  int local_74;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  Point aPStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x18) = 1;
  Set8BytesTo0(asStack_90);
  Set8BytesTo0(asStack_88);
  GetBattleResultNameAndLabel(this,asStack_90,asStack_88);
  iVar1 = FUN_04ba43bc();
  Sexy::Point::Point(aPStack_80,iVar1,0);
  Sexy::Point::Point(aPStack_60,3,1);
  BoardTransforms::GridToBoardSpace(aPStack_60);
  Sexy::TPoint<int>::operator+=((TPoint<int> *)&local_78,(TPoint *)aPStack_80);
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  GetPAMByName(asStack_90);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aPStack_60);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_60);
  EATextSquish::Vec3::Vec3((Vec3 *)aPStack_60,(float)local_78,(float)local_74,0.0);
  StandaloneEffect::SetBoardSpaceOrigin
            ((StandaloneEffect *)this_00,(SexyVector3 *)aPStack_60,0xdbba1);
  Effect_PopAnim::SetCentered(this_00,true);
  Effect_PopAnim::PlaySingleAnimation(this_00,asStack_88,0);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string((string *)aPStack_60,"OnBattleResultFinish");
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,aRStack_68,
             aPStack_60);
  StandaloneEffect::SetCompletionCallback((StandaloneEffect *)this_00,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)aPStack_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  StandaloneEffect::SetKeepAlive((StandaloneEffect *)this_00,true);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x20),(RtWeakPtrBase *)aPStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_60);
  pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar3,"Play_FoodArm");
  std::string::~string(asStack_88);
  std::string::~string(asStack_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VolcanoSnowBattleModule::Update() */

void __thiscall VolcanoSnowBattleModule::Update(VolcanoSnowBattleModule *this)

{
  RtMixedPtrBase *pRVar1;
  char cVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  switch(*(undefined4 *)(this + 0x18)) {
  case 3:
    fVar4 = (float)PVZ_T();
    if (6.0 < fVar4 - *(float *)(this + 0x1c)) {
      *(undefined4 *)(this + 0x18) = 1;
      ShowBattleResult(this);
      return;
    }
    break;
  case 5:
    fVar4 = (float)PVZ_T();
    if (2.0 < fVar4 - *(float *)(this + 0x1c)) {
      *(undefined4 *)(this + 0x18) = 6;
    }
    break;
  case 6:
    pRVar1 = (RtMixedPtrBase *)(this + 0x20);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(pRVar1);
    if (cVar2 != '\0') {
      plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      (**(code **)(*plVar3 + 0x48))();
      Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)pRVar1);
      return;
    }
    break;
  case 7:
    fVar4 = (float)PVZ_T();
    fVar6 = *(float *)(this + 0x1c);
    fVar5 = (float)BossKillTimeChallengeModule::GetBossProgressShowTime();
    if (fVar5 < fVar4 - fVar6) {
      pRVar1 = (RtMixedPtrBase *)(this + 0x20);
      *(undefined4 *)(this + 0x18) = 0;
      cVar2 = Sexy::RtMixedPtrBase::IsValid(pRVar1);
      if (cVar2 != '\0') {
        plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
        (**(code **)(*plVar3 + 0x48))();
        Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)pRVar1);
        return;
      }
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VolcanoSnowBattleModule::StoreBossPostion() */

void VolcanoSnowBattleModule::StoreBossPostion(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long in_x0;
  vector *pvVar4;
  undefined8 *puVar5;
  SexyVector3 *pSVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 in_s1;
  undefined8 local_38;
  undefined8 local_30;
  vector<Zombie*,std::allocator<Zombie*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pvVar4 = (vector *)Board::GetZombies(*(Board **)(gLawnApp + 0x9f0));
  std::vector<Zombie*,std::allocator<Zombie*>>::vector(avStack_20,pvVar4);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_30);
    if (!bVar2) {
      uVar7 = Board::GetFinalDestroyedZombiePosition(*(Board **)(gLawnApp + 0x9f0));
      local_30 = CONCAT44(in_s1,uVar7);
      fVar8 = (float)Sexy::SexyVector3::MagnitudeSquared((SexyVector3 *)&local_30);
      if (fVar8 <= 0.0) {
        iVar3 = BoardTransforms::GridToBoardSpaceX(4);
        *(float *)(in_x0 + 0x158) = (float)iVar3;
        iVar3 = BoardTransforms::GridToBoardSpaceY(3);
        *(float *)(in_x0 + 0x15c) = (float)iVar3;
      }
      else {
        Sexy::SexyVector3::operator=((SexyVector3 *)(in_x0 + 0x158),(SexyVector3 *)&local_30);
      }
      std::vector<Zombie*,std::allocator<Zombie*>>::~vector(avStack_20);
LAB_04ba74a0:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    cVar1 = Zombie::IsBoss((Zombie *)*puVar5);
    if (cVar1 != '\0') {
      pSVar6 = (SexyVector3 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)*puVar5);
      Sexy::SexyVector3::operator=((SexyVector3 *)(in_x0 + 0x158),pSVar6);
      std::vector<Zombie*,std::allocator<Zombie*>>::~vector(avStack_20);
      goto LAB_04ba74a0;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  } while( true );
}


/* VolcanoSnowBattleModule::OnBattleEnd() */

void __thiscall VolcanoSnowBattleModule::OnBattleEnd(VolcanoSnowBattleModule *this)

{
  if (*(int *)(this + 0x18) != 0) {
    return;
  }
  *(undefined4 *)(this + 0x18) = 2;
  RequestBattleEnd(this);
  StoreBossPostion();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VolcanoSnowBattleModule::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall
VolcanoSnowBattleModule::AddResourceRequirements(VolcanoSnowBattleModule *this,set *param_1)

{
  ResilienceTutorialIntroProperties *pRVar1;
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModule::AddResourceRequirements((LevelModule *)this,param_1);
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if (*(int *)(pRVar1 + 0x44) == 0) {
    std::string::string(asStack_10,"VolcanoEffect");
    std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
              ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
               asStack_10);
    std::string::~string(asStack_10);
    nop();
    __s = "VolcanoLevelEnd";
  }
  else {
    if (*(int *)(pRVar1 + 0x44) != 1) goto LAB_04ba7604;
    std::string::string(asStack_10,"SnowEffect");
    std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
              ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
               asStack_10);
    std::string::~string(asStack_10);
    nop();
    __s = "SnowLevelEnd";
  }
  std::string::string(asStack_10,__s);
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
LAB_04ba7604:
  std::string::string(asStack_10,"ActiveSummeryEffect");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UI_ActiveSummery");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PlantKernelpultAudio");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  BossKillTimeChallengeModule::AddStorePlantGroup((BossKillTimeChallengeModule *)this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VolcanoSnowBattleModule::InitSeedBank(DangerRoomInfo const&) */

void __thiscall
VolcanoSnowBattleModule::InitSeedBank(VolcanoSnowBattleModule *this,DangerRoomInfo *param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  string asStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar4 = 0;
  while( true ) {
    uVar2 = FUN_04ba3f00(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
    if (uVar2 <= uVar4) break;
    iVar1 = PlantNameMapper::GetInstance();
    FUN_04ba3f0c(*(undefined8 *)(param_1 + 0x18),uVar4);
    NameMapperBase::GetNameForId(iVar1);
    std::vector<std::string,std::allocator<std::string>>::push_back
              ((vector<std::string,std::allocator<std::string>> *)avStack_20,asStack_28);
    std::string::~string(asStack_28);
    uVar4 = uVar4 + 1;
  }
  plVar3 = (long *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  (**(code **)(*plVar3 + 0x1b0))(plVar3,avStack_20);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VolcanoSnowBattleModule::OnLoadComplete() */

void __thiscall VolcanoSnowBattleModule::OnLoadComplete(VolcanoSnowBattleModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  PlayerInfo *this_00;
  DangerRoomInfo *pDVar2;
  DangerRoomInfo aDStack_b0 [16];
  byte local_a0;
  int local_28;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if (*(int *)(pRVar1 + 0x44) == 0) {
    BossKillTimeChallengeModule::InitVolcanoBackgroundEffect();
  }
  else if (*(int *)(pRVar1 + 0x44) == 1) {
    BossKillTimeChallengeModule::InitSnowBackgroundEffect();
  }
  if (0 < *(int *)(pRVar1 + 0x40)) {
    this_00 = (PlayerInfo *)ProfileUtils::Profile();
    pDVar2 = (DangerRoomInfo *)PlayerInfo::GetVacationLevelInfo(this_00);
    DangerRoomInfo::DangerRoomInfo(aDStack_b0,pDVar2);
    Board::SetSunMoney(*(Board **)(gLawnApp + 0x9f0),local_28);
    Board::SetPlantfoodCount(*(Board **)(gLawnApp + 0x9f0),(uint)local_a0);
    BossKillTimeChallengeModule::InitStoredPlants((BossKillTimeChallengeModule *)this,aDStack_b0);
    InitSeedBank(this,aDStack_b0);
    DangerRoomInfo::~DangerRoomInfo(aDStack_b0);
  }
  FUN_04ba3ef4(*(long *)(gLawnApp + 0x9f0) + 0x887,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VolcanoSnowBattleModule::StoreSeedBank() */

void __thiscall VolcanoSnowBattleModule::StoreSeedBank(VolcanoSnowBattleModule *this)

{
  char cVar1;
  UINewPVPTopZombieQueue *this_00;
  NameMapperBase *this_01;
  long lVar2;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  int iVar3;
  int local_1c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  for (iVar3 = 0; cVar1 = FUN_04ba3efc(this_00[0x199]), iVar3 < cVar1; iVar3 = iVar3 + 1) {
    UINewPVPTopZombieQueue::gettItem(this_00,iVar3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    SeedPacket::GetPlantType();
    this_01 = (NameMapperBase *)PlantNameMapper::GetInstance();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    local_1c = NameMapperBase::GetIdForName(this_01,(string *)(lVar2 + 8));
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)in_x8,&local_1c);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VolcanoSnowBattleModule::OnLevelEnded() */

void __thiscall VolcanoSnowBattleModule::OnLevelEnded(VolcanoSnowBattleModule *this)

{
  int iVar1;
  PlayerInfo *this_00;
  Board *this_01;
  vector<DangerRoomPlantInfo,std::allocator<DangerRoomPlantInfo>> avStack_c8 [24];
  DangerRoomInfo aDStack_b0 [16];
  undefined1 local_a0;
  vector<int,std::allocator<int>> avStack_98 [64];
  vector<DangerRoomPlantInfo,std::allocator<DangerRoomPlantInfo>> avStack_58 [48];
  undefined4 local_28;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = Board::GetBoardResult(*(Board **)(gLawnApp + 0x9f0));
  if (iVar1 == 1) {
    DangerRoomInfo::DangerRoomInfo(aDStack_b0);
    this_01 = *(Board **)(gLawnApp + 0x9f0);
    local_28 = Board::GetSunCurrency(this_01);
    local_a0 = Board::GetPlantfoodCount(this_01);
    StoredPlantInfos(this);
    std::vector<DangerRoomPlantInfo,std::allocator<DangerRoomPlantInfo>>::operator=
              (avStack_58,(vector *)avStack_c8);
    std::vector<DangerRoomPlantInfo,std::allocator<DangerRoomPlantInfo>>::~vector(avStack_c8);
    StoreSeedBank(this);
    std::vector<int,std::allocator<int>>::operator=(avStack_98,(vector *)avStack_c8);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_c8);
    this_00 = (PlayerInfo *)ProfileUtils::Profile();
    PlayerInfo::SetVacationLevelInfo(this_00,aDStack_b0);
    DangerRoomInfo::~DangerRoomInfo(aDStack_b0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VolcanoSnowBattleModule::registerForEvents() */

void __thiscall VolcanoSnowBattleModule::registerForEvents(VolcanoSnowBattleModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnLoadComplete);
  Sexy::Delegate0::Delegate0<VolcanoSnowBattleModule,void(VolcanoSnowBattleModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,GameplayStarted);
  Sexy::Delegate0::Delegate0<VolcanoSnowBattleModule,void(VolcanoSnowBattleModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,AddToRenderQueue);
  Sexy::Delegate1<RenderQueue*>::
  Delegate1<VolcanoSnowBattleModule,void(VolcanoSnowBattleModule::*)(RenderQueue*)>
            ((Delegate1<RenderQueue*> *)aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterAddToRenderQueue(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,Update);
  Sexy::Delegate0::Delegate0<VolcanoSnowBattleModule,void(VolcanoSnowBattleModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnLevelEnded);
  Sexy::Delegate0::Delegate0<VolcanoSnowBattleModule,void(VolcanoSnowBattleModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLevelEnded(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnPlantAdded);
  local_d0 = local_b0;
  uStack_c8 = uStack_a8;
  local_c0 = local_a0;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<VolcanoSnowBattleModule,void(VolcanoSnowBattleModule::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantAdded,&local_d0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnRequestActivityLevelEnd);
  local_f0 = local_98;
  uStack_e8 = uStack_90;
  local_e0 = local_88;
  MessageRouter::
  Subscribe<int,S2C_VacationLevelEndData*,Sexy::CBMemberTranslatorX<VolcanoSnowBattleModule,void(VolcanoSnowBattleModule::*)(int,S2C_VacationLevelEndData*)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityLevelEnd,&local_f0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNetworkError);
  local_110 = local_80;
  uStack_108 = uStack_78;
  local_100 = local_70;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<VolcanoSnowBattleModule,void(VolcanoSnowBattleModule::*)(int)>>
            ((MessageRouter *)puVar1,Message::MsgError,&local_110);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,AddAnimationEvent);
  local_130 = local_68;
  uStack_128 = uStack_60;
  local_120 = local_58;
  MessageRouter::
  Subscribe<AnimationMgr*,float*,Sexy::CBMemberTranslatorX<VolcanoSnowBattleModule,void(VolcanoSnowBattleModule::*)(AnimationMgr*,float*)>>
            ((MessageRouter *)puVar1,Message::AddAnimationEvent,&local_130);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnCollectableTryToCollect);
  local_150 = local_50;
  uStack_148 = uStack_48;
  local_140 = local_40;
  MessageRouter::
  Subscribe<Collectable*,Sexy::CBMemberTranslatorX<VolcanoSnowBattleModule,void(VolcanoSnowBattleModule::*)(Collectable*)>>
            ((MessageRouter *)puVar1,Message::CollectableTryToCollect,&local_150);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VolcanoSnowBattleModule::OnRequestActivityLevelEnd(int, S2C_VacationLevelEndData*) */

void __thiscall
VolcanoSnowBattleModule::OnRequestActivityLevelEnd
          (VolcanoSnowBattleModule *this,int param_1,S2C_VacationLevelEndData *param_2)

{
  bool bVar1;
  char cVar2;
  MetricsCollector *this_00;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  NameMapperBase *this_03;
  VacationMaterialItem *pVVar3;
  wchar_t *pwVar4;
  undefined4 uVar5;
  undefined8 local_38;
  undefined8 local_30;
  VacationMaterialItem aVStack_28 [20];
  int local_14;
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 != (S2C_VacationLevelEndData *)0x0) {
    if (param_1 == 0) {
      *(undefined4 *)(this + 0x18) = 3;
      uVar5 = PVZ_T();
      *(undefined4 *)(this + 0x1c) = uVar5;
      DropLoot(this,(VacationMaterialItem *)(param_2 + 0x18));
      this_00 = (MetricsCollector *)LawnApp::GetMetricsCollector(gLawnApp);
      MetricsCollector::SendBattleResultVolcanoSnow(this_00,param_2);
      this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
      this_03 = (NameMapperBase *)MaterialItemMapper::GetInstance();
      local_38 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(param_2 + 0x38));
      local_30 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(param_2 + 0x38));
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30),
            bVar1) {
        pVVar3 = (VacationMaterialItem *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
        VacationMaterialItem::VacationMaterialItem(aVStack_28,pVVar3);
        cVar2 = NameMapperBase::ContainsId(this_03,local_14);
        if (cVar2 != '\0') {
          PlayerInfo::SetMaterialNum(this_02,local_14,local_10);
        }
        VacationMaterialItem::~VacationMaterialItem(aVStack_28);
        std::move_iterator<SexyURL::KeyedValue*>::operator++
                  ((move_iterator<SexyURL::KeyedValue*> *)&local_38);
      }
      ActiveSummery::RequestDatas();
    }
    else {
      *(undefined4 *)(this + 0x18) = 4;
      FUN_04ba3fa8(*(long *)(gLawnApp + 0x9f0) + 0x880);
      if (param_1 == 0x6d69) {
        pwVar4 = L"[ACTIVITY_SUMMERY_LEVEL_COUNT_MAX_DESC]";
      }
      else {
        pwVar4 = L"[ACTIVITY_SUMMERY_LEVEL_ERROR_DESC]";
      }
      FUN_05478178((wstring *)aVStack_28,pwVar4,&local_30);
      nop();
      ShowErrorDialog(this,(wstring *)aVStack_28);
      FUN_05476c50((wstring *)aVStack_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VolcanoSnowBattleModule::~VolcanoSnowBattleModule() */

void __thiscall VolcanoSnowBattleModule::~VolcanoSnowBattleModule(VolcanoSnowBattleModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06975a60;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  ActiveSummeryConfig::~ActiveSummeryConfig((ActiveSummeryConfig *)(this + 0x28));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* VolcanoSnowBattleModule::~VolcanoSnowBattleModule() */

void __thiscall VolcanoSnowBattleModule::~VolcanoSnowBattleModule(VolcanoSnowBattleModule *this)

{
  ~VolcanoSnowBattleModule(this);
  AK::FreeHook(this);
  return;
}

