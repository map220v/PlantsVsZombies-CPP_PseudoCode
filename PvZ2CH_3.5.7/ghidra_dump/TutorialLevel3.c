// Class: TutorialLevel3


/* TutorialLevel3::onGameWon() */

void TutorialLevel3::onGameWon(void)

{
  ProfileUtils::TriggerTutorialFunnelEventForCurrentProfile(0x14);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialLevel3::StaticClassInit() */

void TutorialLevel3::StaticClassInit(void)

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
    std::string::string(asStack_10,"TutorialLevel3");
    (*pcVar2)(plVar1,asStack_10,FUN_044c69b0,0x90,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TutorialLevel3::StaticGetClass() */

long * TutorialLevel3::StaticGetClass(void)

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
  uVar2 = IntroModule::StaticGetClass();
  (*pcVar3)(plVar1,"TutorialLevel3",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TutorialLevel3::onEndLevel() */

void __thiscall TutorialLevel3::onEndLevel(TutorialLevel3 *this)

{
  long lVar1;
  char cVar2;
  AnimationMgr *this_00;
  RtMixedPtrBase *this_01;
  RtWeakPtrBase *this_02;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar3;
  long *plVar4;
  long lVar5;
  
  pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  this_00 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
  AnimationMgr::Clear(this_00);
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)pRVar3);
  if (cVar2 == '\0') {
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)pRVar3);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x68));
  }
  else {
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
    (**(code **)(*plVar4 + 0x48))();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)pRVar3);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x68));
  }
  if (cVar2 != '\0') {
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68));
    (**(code **)(*plVar4 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0x68));
  lVar5 = 0;
  do {
    this_01 = (RtMixedPtrBase *)FUN_044c570c(*(undefined8 *)(this + 0x70),lVar5);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this_01);
    if (cVar2 != '\0') {
      pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_044c570c(*(undefined8 *)(this + 0x70),lVar5);
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
      (**(code **)(*plVar4 + 0x48))();
    }
    lVar1 = lVar5 + 1;
    this_02 = (RtWeakPtrBase *)FUN_044c570c(*(undefined8 *)(this + 0x70),lVar5);
    Sexy::RtWeakPtrBase::ClearId(this_02);
    lVar5 = lVar1;
  } while (lVar1 != 3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialLevel3::showShovelArrow() */

void __thiscall TutorialLevel3::showShovelArrow(TutorialLevel3 *this)

{
  int iVar1;
  UIWidget *this_00;
  StandaloneEffect *pSVar2;
  TPoint aTStack_38 [8];
  Point aPStack_30 [8];
  int local_28;
  int local_24;
  FastCurve aFStack_20 [8];
  int local_18;
  int local_14;
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_18,"UIShovel");
  UIWidget::GetWidgetBySheetName((string *)&local_18);
  nop();
  std::string::~string((string *)&local_18);
  nop();
  UIWidget::SetVisible(this_00,true);
  FUN_044c56ec(this_00 + 0x163,1);
  ResilienceTutorialIntro::getBoard();
  Board::GetBoardBaseOffset();
  UIWidget::GetDrawRect();
  iVar1 = FUN_044c59c0(0x10);
  Sexy::Point::Point(aPStack_30,local_18 + local_10 / 2,local_14 - iVar1);
  Sexy::TPoint<int>::operator-((TPoint<int> *)aPStack_30,aTStack_38);
  Sexy::Point::Point((Point *)&local_28,(TPoint *)aFStack_20);
  pSVar2 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68));
  Sexy::FastCurve::SetOutRange(aFStack_20,(float)local_28,(float)local_24);
  StandaloneEffect::SetScreenSpaceOrigin(pSVar2,(SexyVector2 *)aFStack_20,900000);
  pSVar2 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68));
  StandaloneEffect::SetVisibility(pSVar2,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialLevel3::showUI(bool) */

void __thiscall TutorialLevel3::showUI(TutorialLevel3 *this,bool param_1)

{
  bool bVar1;
  Board *this_00;
  UIWidget *pUVar2;
  long extraout_x0;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  string *extraout_x1_02;
  string *extraout_x1_03;
  string *extraout_x1_04;
  string *extraout_x1_05;
  string *extraout_x1_06;
  RtWeakPtr aRStack_48 [8];
  RtWeakPtr aRStack_40 [8];
  RtWeakPtr aRStack_38 [8];
  RtWeakPtr aRStack_30 [8];
  RtWeakPtr aRStack_28 [8];
  RtWeakPtr aRStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (Board *)ResilienceTutorialIntro::getBoard();
  pUVar2 = (UIWidget *)Board::GetSeedBank(this_00);
  UIWidget::SetVisible(pUVar2,param_1);
  std::string::string(asStack_10,"UIPlantfood");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_48);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_10,"UIShovel");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1_00);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_40);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    UIWidget::SetVisible(pUVar2,8 < *(int *)(this + 0x48));
  }
  std::string::string(asStack_10,"UICoinBank");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1_01);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_38);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_10,"UIGemBank");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1_02);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_30);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_18,"UISunBank");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_18,extraout_x1_03);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  std::string::~string(asStack_18);
  nop();
  if (extraout_x0 != 0) {
    FUN_044c5790(extraout_x0 + 0x179);
  }
  std::string::string(asStack_10,"UIChangeSpeedButton");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1_04);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_28);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_10,"UIPauseButton");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1_05);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_20);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    UIWidget::SetVisible(pUVar2,param_1);
  }
  std::string::string(asStack_10,"UISunBank");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1_06);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)asStack_18);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    UIWidget::SetVisible(pUVar2,param_1);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TutorialLevel3::startGame() */

void __thiscall TutorialLevel3::startGame(TutorialLevel3 *this)

{
  Board *this_00;
  
  this_00 = (Board *)ResilienceTutorialIntro::getBoard();
  Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
  Board::DestroyCutsceneZombies();
  Board::StartLevel(this_00);
  showUI(this,true);
  return;
}


/* TutorialLevel3::onGameplayEnded() */

void __thiscall TutorialLevel3::onGameplayEnded(TutorialLevel3 *this)

{
  bool bVar1;
  StandaloneEffect *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x68));
  if (!bVar1) {
    return;
  }
  this_00 = (StandaloneEffect *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68))
  ;
  StandaloneEffect::SetVisibility(this_00,false);
  return;
}


/* TutorialLevel3::setupSodRollout() */

void __thiscall TutorialLevel3::setupSodRollout(TutorialLevel3 *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x58) = fVar1;
  *(float *)(this + 0x5c) = fVar1 + 1.75;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialLevel3::addToRenderQueue(RenderQueue*) */

void __thiscall TutorialLevel3::addToRenderQueue(TutorialLevel3 *this,RenderQueue *param_1)

{
  AnimationMgr *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (AnimationMgr *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50))
  ;
  AnimationMgr::AddToRenderQueue(this_00,param_1);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,drawLawnOverlays);
  Sexy::Delegate1<Sexy::Graphics*>::
  Delegate1<TutorialLevel3,void(TutorialLevel3::*)(Sexy::Graphics*)>(aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,0x493e1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TutorialLevel3::TutorialLevel3() */

void __thiscall TutorialLevel3::TutorialLevel3(TutorialLevel3 *this)

{
  IntroModule::IntroModule((IntroModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06854110;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x50));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x68));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x70));
  return;
}


/* TutorialLevel3::StaticNew() */

TutorialLevel3 * TutorialLevel3::StaticNew(void)

{
  TutorialLevel3 *this;
  
  this = ::operator_new(0x90);
  TutorialLevel3(this);
  return this;
}


/* TutorialLevel3::drawLawnOverlays(Sexy::Graphics*) */

void __thiscall TutorialLevel3::drawLawnOverlays(TutorialLevel3 *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  Image *pIVar3;
  
  pIVar3 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                              ((CachedResourcePtr<Sexy::Image> *)&DAT_06b0d368);
  iVar1 = FUN_044c59c0(200);
  iVar2 = FUN_044c59c0(0xe0);
  Sexy::Graphics::DrawImage(param_1,pIVar3,iVar1,iVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialLevel3::showPlantArrows(bool) */

void __thiscall TutorialLevel3::showPlantArrows(TutorialLevel3 *this,bool param_1)

{
  int iVar1;
  ulong uVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  float *pfVar3;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar4;
  StandaloneEffect *pSVar5;
  ulong uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  int local_30;
  int local_2c;
  FastCurve aFStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar6 = 0;
  while( true ) {
    uVar7 = *(undefined8 *)(this + 0x70);
    uVar2 = FUN_044c5700(uVar7,*(undefined8 *)(this + 0x78));
    if (uVar2 <= uVar6) break;
    pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_044c570c(uVar7,uVar6);
    pSVar5 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
    StandaloneEffect::SetVisibility(pSVar5,false);
    uVar6 = uVar6 + 1;
  }
  if (param_1) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    EntityFinder::GetEntities
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,1);
    uVar6 = 0;
    while( true ) {
      uVar7 = local_20;
      uVar2 = FUN_044c5714(local_20,local_18);
      if (uVar2 <= uVar6) break;
      FUN_044c5720(uVar7,uVar6);
      nop();
      pfVar3 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(this_00);
      fVar9 = *pfVar3;
      iVar1 = Plant::GetWidth();
      fVar9 = (float)FUN_044c59d4(fVar9 + -35.0 + (float)(iVar1 / 2));
      fVar8 = (float)FUN_044c59d4(pfVar3[1] - 70.0);
      Sexy::Point::Point((Point *)&local_30,(int)fVar9,(int)fVar8);
      pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_044c570c(*(undefined8 *)(this + 0x70),uVar6);
      pSVar5 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
      Sexy::FastCurve::SetOutRange(aFStack_28,(float)local_30,(float)local_2c);
      StandaloneEffect::SetScreenSpaceOrigin(pSVar5,(SexyVector2 *)aFStack_28,900000);
      pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_044c570c(*(undefined8 *)(this + 0x70),uVar6);
      pSVar5 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
      StandaloneEffect::SetVisibility(pSVar5,true);
      uVar6 = uVar6 + 1;
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TutorialLevel3::~TutorialLevel3() */

void __thiscall TutorialLevel3::~TutorialLevel3(TutorialLevel3 *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06854110;
  std::
  vector<Sexy::RtWeakPtr<Effect_BouncingArrow>,std::allocator<Sexy::RtWeakPtr<Effect_BouncingArrow>>>
  ::~vector((vector<Sexy::RtWeakPtr<Effect_BouncingArrow>,std::allocator<Sexy::RtWeakPtr<Effect_BouncingArrow>>>
             *)(this + 0x70));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50));
  IntroModule::~IntroModule((IntroModule *)this);
  return;
}


/* TutorialLevel3::~TutorialLevel3() */

void __thiscall TutorialLevel3::~TutorialLevel3(TutorialLevel3 *this)

{
  ~TutorialLevel3(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialLevel3::setupTutorialAdvice() */

void __thiscall TutorialLevel3::setupTutorialAdvice(TutorialLevel3 *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *pRVar1;
  int iVar2;
  int iVar3;
  AnimationMgr *pAVar4;
  long lVar5;
  AnimationController *pAVar6;
  Board *this_00;
  UINewPVPTopZombieQueue *this_01;
  SeedPacket *this_02;
  StandaloneEffect *pSVar7;
  Effect_FloatingText *this_03;
  ResourceInfo *pRVar8;
  char *pcVar9;
  code *pcVar10;
  float fVar11;
  TPoint aTStack_70 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  int local_60;
  int local_5c;
  float local_58 [2];
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  pRVar1 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50);
  local_8 = ___stack_chk_guard;
  pAVar4 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
  AnimationMgr::Clear(pAVar4);
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
  FUN_044c56dc(lVar5 + 0x10);
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
  fVar11 = (float)FUN_044c56e8(*(undefined4 *)(lVar5 + 0x10));
  switch(*(undefined4 *)(this + 0x48)) {
  case 2:
    pAVar4 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    FUN_05478178(&local_50,L"[ADVICE_WAIT]",local_58);
    pAVar6 = (AnimationController *)ShowAdvice::Create(&local_50,2);
    AnimationMgr::Add(pAVar4,pAVar6,fVar11);
    FUN_05476c50(&local_50);
    nop();
    pcVar9 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar9,"Play_UI_Game_Wave_Wait");
    fVar11 = (float)PVZ_T();
    *(float *)(this + 0x60) = fVar11 + 3.0;
    break;
  case 3:
    pAVar4 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    FUN_05478178(&local_50,L"[ADVICE_CLICK_SHOVEL]",local_58);
    pAVar6 = (AnimationController *)ShowAdvice::Create(&local_50,2);
    AnimationMgr::Add(pAVar4,pAVar6,fVar11);
    FUN_05476c50(&local_50);
    nop();
    showShovelArrow(this);
    break;
  case 4:
    pAVar4 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    FUN_05478178(&local_50,L"[ADVICE_CLICK_PLANT]",local_58);
    pAVar6 = (AnimationController *)ShowAdvice::Create(&local_50,2);
    AnimationMgr::Add(pAVar4,pAVar6,fVar11);
    FUN_05476c50(&local_50);
    nop();
    showPlantArrows(this,true);
    break;
  case 5:
    showShovelArrow(this);
  case 7:
    pAVar4 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    FUN_05478178(&local_50,L"[ADVICE_KEEP_DIGGING]",local_58);
    pAVar6 = (AnimationController *)ShowAdvice::Create(&local_50,2);
    AnimationMgr::Add(pAVar4,pAVar6,fVar11);
    FUN_05476c50(&local_50);
    nop();
    showPlantArrows(this,false);
    break;
  case 6:
  case 8:
    pAVar4 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    FUN_05478178(&local_50,L"[ADVICE_KEEP_DIGGING]",local_58);
    pAVar6 = (AnimationController *)ShowAdvice::Create(&local_50,2);
    AnimationMgr::Add(pAVar4,pAVar6,fVar11);
    FUN_05476c50(&local_50);
    nop();
    break;
  case 9:
    showPlantArrows(this,false);
    pSVar7 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68));
    StandaloneEffect::SetVisibility(pSVar7,false);
    pAVar4 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    FUN_05478178(&local_50,L"[ADVICE_DONE_DIGGING]",local_58);
    pAVar6 = (AnimationController *)ShowAdvice::Create(&local_50,2);
    AnimationMgr::Add(pAVar4,pAVar6,fVar11);
    FUN_05476c50(&local_50);
    nop();
    local_58[0] = fVar11 + 3.5;
    pcVar10 = *(code **)(*(long *)this + 0xa0);
    pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)pRVar1);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,startGame);
    Sexy::Delegate0::Delegate0<TutorialLevel3,void(TutorialLevel3::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    (*pcVar10)(this,pRVar8,local_58,aDStack_38,0);
    break;
  case 0xb:
    pAVar4 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    FUN_05478178(&local_50,L"[ADVICE_PLANT_SUNFLOWER4]",(FastCurve *)local_58);
    pRVar1 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68);
    pAVar6 = (AnimationController *)ShowAdvice::Create(&local_50,2);
    AnimationMgr::Add(pAVar4,pAVar6,fVar11);
    FUN_05476c50(&local_50);
    nop();
    ResilienceTutorialIntro::getBoard();
    Board::GetBoardBaseOffset();
    this_00 = (Board *)ResilienceTutorialIntro::getBoard();
    this_01 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(this_00);
    UINewPVPTopZombieQueue::gettItem(this_01,1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    UIWidget::GetDrawRect();
    this_02 = (SeedPacket *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    SeedPacket::SetIsFlashing(this_02,true);
    iVar2 = FUN_044c59c0(0x1e);
    iVar3 = FUN_044c59c0(0);
    Sexy::Point::Point((Point *)&local_60,local_50 + local_48 + iVar2,
                       local_4c + local_44 / 2 + iVar3);
    Sexy::TPoint<int>::operator-=((TPoint<int> *)&local_60,aTStack_70);
    pSVar7 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    Sexy::FastCurve::SetOutRange((FastCurve *)local_58,(float)local_60,(float)local_5c);
    StandaloneEffect::SetScreenSpaceOrigin(pSVar7,(SexyVector2 *)local_58,900000);
    this_03 = (Effect_FloatingText *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    fVar11 = (float)Sexy::SexyMath::DegToRad(270.0);
    Effect_FloatingText::SetFadeInDuration(this_03,fVar11);
    pSVar7 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    StandaloneEffect::SetVisibility(pSVar7,true);
    fVar11 = (float)PVZ_T();
    *(float *)(this + 0x60) = fVar11 + 5.0;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialLevel3::setupLawnPreview() */

void __thiscall TutorialLevel3::setupLawnPreview(TutorialLevel3 *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  long lVar2;
  AnimationController *pAVar3;
  AnimationController *pAVar4;
  AnimationController *pAVar5;
  AnimationController *pAVar6;
  AnimationMgr *pAVar7;
  AnimationController *pAVar8;
  ResourceInfo *pRVar9;
  code *pcVar10;
  float fVar11;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  RtWeakPtr<Sexy::SoundResource> aRStack_68 [8];
  RtMixedPtr aRStack_60 [8];
  float local_58 [2];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  lVar2 = ResilienceTutorialIntro::getBoard();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)(lVar2 + 0x898));
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  fVar11 = (float)FUN_044c56e8(*(undefined4 *)(lVar2 + 0x10));
  StandardLevelIntro::GetPanLocations(0,&local_78,&local_74);
  pAVar3 = (AnimationController *)
           MoveBoard::Create(*(undefined4 *)(pRVar1 + 0x48),local_78,local_74,0,0,4);
  std::string::string(asStack_50,"Play_UI_Game_Intro_Cam_Pan");
  pAVar4 = (AnimationController *)AnimMgrSendAudioEvent::Create(asStack_50);
  std::string::~string(asStack_50);
  nop();
  StandardLevelIntro::GetPanLocations(3,&local_70,&local_6c);
  pAVar5 = (AnimationController *)
           MoveBoard::Create(*(undefined4 *)(pRVar1 + 0x4c),local_70,local_6c,0,0,4);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_60);
  std::string::string(asStack_50,"setupSodRollout");
  pAVar6 = (AnimationController *)TimeEvent::Create((RtId *)local_58,asStack_50);
  std::string::~string(asStack_50);
  nop();
  Sexy::RtId::~RtId((RtId *)local_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
  pAVar7 = (AnimationMgr *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::string(asStack_50,"PlaceLawnItems");
  pAVar8 = (AnimationController *)IntroBoardDispatch::Create(asStack_50);
  AnimationMgr::Add(pAVar7,pAVar8,fVar11);
  std::string::~string(asStack_50);
  nop();
  pAVar7 = (AnimationMgr *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::string(asStack_50,"PlaceStreetZombies");
  pAVar8 = (AnimationController *)IntroBoardDispatch::Create(asStack_50);
  AnimationMgr::Add(pAVar7,pAVar8,fVar11);
  std::string::~string(asStack_50);
  nop();
  pAVar7 = (AnimationMgr *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  pAVar8 = (AnimationController *)StandardLevelIntro::CreateLevelNameStringAdvice();
  AnimationMgr::Add(pAVar7,pAVar8,fVar11 + 1.0);
  pAVar7 = (AnimationMgr *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  AnimationMgr::Add(pAVar7,pAVar3,fVar11 + 2.0,local_58);
  pAVar7 = (AnimationMgr *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  AnimationMgr::Add(pAVar7,pAVar4,fVar11 + 2.0);
  pAVar7 = (AnimationMgr *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::string(asStack_50,"EnableGridItems");
  pAVar3 = (AnimationController *)IntroBoardDispatch::Create(asStack_50);
  AnimationMgr::Add(pAVar7,pAVar3,fVar11 + 2.5);
  std::string::~string(asStack_50);
  nop();
  pAVar7 = (AnimationMgr *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  AnimationMgr::Add(pAVar7,pAVar5,local_58[0],local_58);
  pAVar7 = (AnimationMgr *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  AnimationMgr::Add(pAVar7,pAVar6,local_58[0],local_58);
  pAVar7 = (AnimationMgr *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::string(asStack_50,"ShowLawnItems");
  pAVar3 = (AnimationController *)IntroBoardDispatch::Create(asStack_50);
  AnimationMgr::Add(pAVar7,pAVar3,local_58[0],local_58);
  std::string::~string(asStack_50);
  nop();
  pcVar10 = *(code **)(*(long *)this + 0xa0);
  pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_68);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLawnPreviewComplete);
  Sexy::Delegate0::Delegate0<TutorialLevel3,void(TutorialLevel3::*)()>(aDStack_38,asStack_50);
  (*pcVar10)(this,pRVar9,(RtId *)local_58,aDStack_38,1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialLevel3::setState(TutorialLevel3::State) */

void __thiscall TutorialLevel3::setState(TutorialLevel3 *this,int param_2)

{
  Board *this_00;
  UINewPVPTopZombieQueue *this_01;
  SeedPacket *this_02;
  StandaloneEffect *pSVar1;
  long extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x48) == param_2) goto switchD_044c7c14_caseD_a;
  this_00 = (Board *)ResilienceTutorialIntro::getBoard();
  this_01 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(this_00);
  if (*(int *)(this + 0x48) == 3) {
    std::string::string((string *)aRStack_10,"UIShovel");
    UIWidget::GetWidgetBySheetName((string *)aRStack_10);
    nop();
    std::string::~string((string *)aRStack_10);
    nop();
    FUN_044c56ec(extraout_x0 + 0x163,0);
    pSVar1 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68));
    StandaloneEffect::SetVisibility(pSVar1,false);
LAB_044c7bb8:
    UINewPVPTopZombieQueue::gettItem(this_01,1);
    this_02 = (SeedPacket *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    SeedPacket::SetIsFlashing(this_02,false);
    pSVar1 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68));
    StandaloneEffect::SetVisibility(pSVar1,false);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  else if (*(int *)(this + 0x48) == 0xb) goto LAB_044c7bb8;
  *(int *)(this + 0x48) = param_2;
  switch(param_2) {
  case 1:
    setupLawnPreview(this);
    break;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 0xb:
    setupTutorialAdvice(this);
  }
switchD_044c7c14_caseD_a:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialLevel3::startIntro() */

void __thiscall TutorialLevel3::startIntro(TutorialLevel3 *this)

{
  uint uVar1;
  Board *this_00;
  int *piVar2;
  Board *pBVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (Board *)ResilienceTutorialIntro::getBoard();
  piVar2 = (int *)Board::GetBoardPanLocations(this_00);
  (**(code **)(*(long *)this_00 + 0x1a8))(this_00,-*piVar2,0);
  iVar5 = *(int *)(this_00 + 0xf8);
  if (0 < iVar5) {
    iVar6 = *(int *)(this_00 + 0xfc);
    iVar8 = 0;
    do {
      if (0 < iVar6) {
        if (iVar8 == 0) {
          pBVar3 = this_00 + 0x1c0;
          uVar7 = 0;
          do {
            while( true ) {
              if ((uVar7 & 0xfffffffb) != 0) break;
              uVar1 = uVar7 + 1;
              Board::SetGridSquareType(this_00,uVar7 & 0xfffffffb,uVar7,2);
              iVar6 = *(int *)(this_00 + 0xfc);
              *(uint *)pBVar3 = uVar7 & 0xfffffffb;
              pBVar3 = pBVar3 + 4;
              uVar7 = uVar1;
              if (iVar6 <= (int)uVar1) goto LAB_044c7d84;
            }
            uVar7 = uVar7 + 1;
            pBVar3 = pBVar3 + 4;
          } while ((int)uVar7 < iVar6);
        }
        else {
          uVar7 = 0;
          do {
            if ((uVar7 & 0xfffffffb) == 0) {
              Board::SetGridSquareType(this_00,iVar8,uVar7,2);
              iVar6 = *(int *)(this_00 + 0xfc);
            }
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < iVar6);
        }
LAB_044c7d84:
        iVar5 = *(int *)(this_00 + 0xf8);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar5);
  }
  pBVar3 = (Board *)ResilienceTutorialIntro::getBoard();
  Board::PutIntoTutorialMode(pBVar3);
  showUI(this,false);
  std::string::string(asStack_10,"peashooter");
  lVar4 = Board::AddPlant(this_00,2,1,asStack_10,-1,false,false,false,false);
  std::string::~string(asStack_10);
  nop();
  *(undefined1 *)(lVar4 + 0x14c) = 1;
  std::string::string(asStack_10,"peashooter");
  lVar4 = Board::AddPlant(this_00,3,2,asStack_10,-1,false,false,false,false);
  std::string::~string(asStack_10);
  nop();
  *(undefined1 *)(lVar4 + 0x14c) = 1;
  std::string::string(asStack_10,"peashooter");
  lVar4 = Board::AddPlant(this_00,5,1,asStack_10,-1,false,false,false,false);
  std::string::~string(asStack_10);
  nop();
  *(undefined1 *)(lVar4 + 0x14c) = 1;
  setState(this,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialLevel3::onUpdate() */

void __thiscall TutorialLevel3::onUpdate(TutorialLevel3 *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  bool bVar1;
  AnimationMgr *pAVar2;
  AnimationController *this_01;
  long lVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50);
  local_8 = ___stack_chk_guard;
  iVar5 = *(int *)(this + 0x48);
  do {
    if (iVar5 == 2) {
      fVar6 = (float)PVZ_T();
      if (*(float *)(this + 0x60) < fVar6) {
        setState(this,3);
      }
LAB_044c7fd4:
      iVar4 = *(int *)(this + 0x48);
    }
    else if (iVar5 == 0xb) {
      fVar6 = (float)PVZ_T();
      if (fVar6 < *(float *)(this + 0x60)) goto LAB_044c7fd4;
      FUN_05478178(auStack_10,L"[ADVICE_PLANT_SUNFLOWER3]",auStack_18);
      this_01 = (AnimationController *)ShowAdvice::Create(auStack_10,1);
      FUN_05476c50(auStack_10);
      nop();
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      fVar6 = (float)FUN_044c56e8(*(undefined4 *)(lVar3 + 0x10));
      fVar7 = (float)FUN_044c56d8(*(undefined4 *)(this_01 + 0x18));
      AnimationController::SetDuration(this_01,fVar7 + fVar6);
      pAVar2 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      AnimationMgr::Add(pAVar2,this_01);
      uVar8 = PVZ_EOT();
      iVar4 = *(int *)(this + 0x48);
      *(undefined4 *)(this + 0x60) = uVar8;
    }
    else {
      if (iVar5 != 0) break;
      setState(this,1);
      iVar4 = *(int *)(this + 0x48);
    }
    bVar1 = iVar5 != iVar4;
    iVar5 = iVar4;
  } while (bVar1);
  pAVar2 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  AnimationMgr::Update(pAVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialLevel3::onPlantDied(Plant*) */

void TutorialLevel3::onPlantDied(Plant *param_1)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetType();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  bVar2 = std::operator==((string *)(lVar3 + 8),"peashooter");
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if ((bVar2) && (*(int *)(param_1 + 0x48) - 4U < 6)) {
    showPlantArrows((TutorialLevel3 *)param_1,false);
  }
  Plant::GetType();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  bVar2 = std::operator==((string *)(lVar3 + 8),"sunflower");
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (((bVar2) &&
      (iVar1 = *(int *)(param_1 + 0x88), *(int *)(param_1 + 0x88) = iVar1 + -1, iVar1 + -1 < 3)) &&
     (*(int *)(param_1 + 0x48) == 10)) {
    setState((TutorialLevel3 *)param_1,0xb);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialLevel3::onPlantShoveled(Plant*) */

void TutorialLevel3::onPlantShoveled(Plant *param_1)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetType();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  bVar2 = std::operator==((string *)(lVar3 + 8),"peashooter");
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (bVar2) {
    uVar1 = *(uint *)(param_1 + 0x48);
    if ((uVar1 & 0xfffffffd) == 4) {
      *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + -1;
      setState((TutorialLevel3 *)param_1,uVar1 + 1);
      ProfileUtils::TriggerTutorialFunnelEventForCurrentProfile(0x13);
    }
    else if (uVar1 == 8) {
      *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + -1;
      setState((TutorialLevel3 *)param_1,9);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialLevel3::onPlantPlanted(Plant*) */

void TutorialLevel3::onPlantPlanted(Plant *param_1)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetType();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  bVar2 = std::operator==((string *)(lVar3 + 8),"sunflower");
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (((bVar2) &&
      (iVar1 = *(int *)(param_1 + 0x88), *(int *)(param_1 + 0x88) = iVar1 + 1, 2 < iVar1 + 1)) &&
     ((*(uint *)(param_1 + 0x48) & 0xfffffffd) == 9)) {
    setState((TutorialLevel3 *)param_1,10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TutorialLevel3::onCursorAdded(BaseCursor*) */

void __thiscall TutorialLevel3::onCursorAdded(TutorialLevel3 *this,BaseCursor *param_1)

{
  bool bVar1;
  
  if (((((*(uint *)(this + 0x48) & 0xfffffffb) == 3) || (*(uint *)(this + 0x48) == 5)) &&
      (param_1 != (BaseCursor *)0x0)) &&
     (bVar1 = Sexy::RtObject::IsA<ShovelCursor>((RtObject *)param_1), bVar1)) {
    setState(this,*(int *)(this + 0x48) + 1);
    ProfileUtils::TriggerTutorialFunnelEventForCurrentProfile(0x12);
    return;
  }
  return;
}


/* TutorialLevel3::onCursorDestroyed(BaseCursor*) */

void __thiscall TutorialLevel3::onCursorDestroyed(TutorialLevel3 *this,BaseCursor *param_1)

{
  bool bVar1;
  
  if (((((*(uint *)(this + 0x48) & 0xfffffffd) == 4) || (*(uint *)(this + 0x48) == 8)) &&
      (param_1 != (BaseCursor *)0x0)) &&
     (bVar1 = Sexy::RtObject::IsA<ShovelCursor>((RtObject *)param_1), bVar1)) {
    setState(this,*(int *)(this + 0x48) + -1);
    return;
  }
  return;
}


/* TutorialLevel3::onLawnPreviewComplete() */

void __thiscall TutorialLevel3::onLawnPreviewComplete(TutorialLevel3 *this)

{
  setState(this,2);
  ProfileUtils::TriggerTutorialFunnelEventForCurrentProfile(0x11);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialLevel3::initializeModule() */

void __thiscall TutorialLevel3::initializeModule(TutorialLevel3 *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  Effect_BouncingArrow *pEVar1;
  StandaloneEffect *this_01;
  int iVar2;
  undefined4 uVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x68);
  *(undefined4 *)(this + 0x48) = 0xffffffff;
  iVar2 = 3;
  local_8 = ___stack_chk_guard;
  Board::AddEffect<Effect_BouncingArrow>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  pEVar1 = (Effect_BouncingArrow *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  CachedResourcePtr::operator_cast_to_RtWeakPtr((CachedResourcePtr *)&DAT_06b0d3e0);
  Effect_BouncingArrow::SetArrowImage(pEVar1,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  this_01 = (StandaloneEffect *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  StandaloneEffect::SetVisibility(this_01,false);
  do {
    pEVar1 = Board::AddEffect<Effect_BouncingArrow>(*(Board **)(gLawnApp + 0x9f0));
    CachedResourcePtr::operator_cast_to_RtWeakPtr((CachedResourcePtr *)&DAT_06b0d3e0);
    Effect_BouncingArrow::SetArrowImage(pEVar1,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    StandaloneEffect::SetVisibility((StandaloneEffect *)pEVar1,false);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_18);
    std::
    vector<Sexy::RtWeakPtr<Effect_BouncingArrow>,std::allocator<Sexy::RtWeakPtr<Effect_BouncingArrow>>>
    ::push_back((vector<Sexy::RtWeakPtr<Effect_BouncingArrow>,std::allocator<Sexy::RtWeakPtr<Effect_BouncingArrow>>>
                 *)(this + 0x70),(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  AnimationMgr::Create();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x50),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  uVar3 = PVZ_EOT();
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x8c) = 3;
  *(undefined4 *)(this + 0x5c) = uVar3;
  *(undefined4 *)(this + 0x60) = uVar3;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialLevel3::registerForEvents() */

void __thiscall TutorialLevel3::registerForEvents(TutorialLevel3 *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  CBMemberTranslatorX aCStack_c8 [24];
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
  IntroModule::registerForEvents();
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,startIntro);
  Sexy::Delegate0::Delegate0<TutorialLevel3,void(TutorialLevel3::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnIntroStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onEndLevel);
  Sexy::Delegate0::Delegate0<TutorialLevel3,void(TutorialLevel3::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLevelEnded(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<TutorialLevel3,void(TutorialLevel3::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,addToRenderQueue);
  Sexy::Delegate1<RenderQueue*>::Delegate1<TutorialLevel3,void(TutorialLevel3::*)(RenderQueue*)>
            ((Delegate1<RenderQueue*> *)aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterAddToRenderQueue(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCursorAdded);
  local_f0 = local_b0;
  uStack_e8 = uStack_a8;
  local_e0 = local_a0;
  MessageRouter::
  Subscribe<BaseCursor*,Sexy::CBMemberTranslatorX<TutorialLevel3,void(TutorialLevel3::*)(BaseCursor*)>>
            ((MessageRouter *)puVar1,Message::CursorAdded,&local_f0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCursorDestroyed);
  local_e0 = local_88;
  local_f0 = local_98;
  uStack_e8 = uStack_90;
  MessageRouter::
  Subscribe<BaseCursor*,Sexy::CBMemberTranslatorX<TutorialLevel3,void(TutorialLevel3::*)(BaseCursor*)>>
            ((MessageRouter *)puVar1,Message::CursorDestroyed,&local_f0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantPlanted);
  local_110 = local_80;
  uStack_108 = uStack_78;
  local_100 = local_70;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<TutorialLevel3,void(TutorialLevel3::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantPlanted,&local_110);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantShoveled);
  local_100 = local_58;
  local_110 = local_68;
  uStack_108 = uStack_60;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<TutorialLevel3,void(TutorialLevel3::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantShoveled,&local_110);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantDied);
  local_110 = local_50;
  uStack_108 = uStack_48;
  local_100 = local_40;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<TutorialLevel3,void(TutorialLevel3::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantDied,&local_110);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayEnded);
  Sexy::Delegate0::Delegate0<TutorialLevel3,void(TutorialLevel3::*)()>(aDStack_38,aCStack_c8);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameplayEnded,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameWon);
  Sexy::Delegate0::Delegate0<TutorialLevel3,void(TutorialLevel3::*)()>(aDStack_38,aCStack_c8);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameWon,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

