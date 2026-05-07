// Class: UINewPVPRoundBank


/* UINewPVPRoundBank::~UINewPVPRoundBank() */

void __thiscall UINewPVPRoundBank::~UINewPVPRoundBank(UINewPVPRoundBank *this)

{
  *(undefined ***)this = &PTR_GetClass_0664e140;
  *(undefined ***)(this + 0x10) = &PTR__UINewPVPRoundBank_0664e2e0;
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to UINewPVPRoundBank::~UINewPVPRoundBank() */

void __thiscall UINewPVPRoundBank::~UINewPVPRoundBank(UINewPVPRoundBank *this)

{
  ~UINewPVPRoundBank(this + -0x10);
  return;
}


/* UINewPVPRoundBank::~UINewPVPRoundBank() */

void __thiscall UINewPVPRoundBank::~UINewPVPRoundBank(UINewPVPRoundBank *this)

{
  ~UINewPVPRoundBank(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UINewPVPRoundBank::~UINewPVPRoundBank() */

void __thiscall UINewPVPRoundBank::~UINewPVPRoundBank(UINewPVPRoundBank *this)

{
  ~UINewPVPRoundBank(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPRoundBank::StaticClassInit() */

void UINewPVPRoundBank::StaticClassInit(void)

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
    std::string::string(asStack_10,"UINewPVPRoundBank");
    (*pcVar2)(plVar1,asStack_10,FUN_03518918,0x170,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINewPVPRoundBank::StaticGetClass() */

long * UINewPVPRoundBank::StaticGetClass(void)

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
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"UINewPVPRoundBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UINewPVPRoundBank::GetClass() const */

long * UINewPVPRoundBank::GetClass(void)

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
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"UINewPVPRoundBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UINewPVPRoundBank::UINewPVPRoundBank() */

void __thiscall UINewPVPRoundBank::UINewPVPRoundBank(UINewPVPRoundBank *this)

{
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined4 *)(this + 0x164) = 0x14;
  *(undefined4 *)(this + 0x168) = 0;
  *(undefined ***)this = &PTR_GetClass_0664e140;
  *(undefined ***)(this + 0x10) = &PTR__UINewPVPRoundBank_0664e2e0;
  return;
}


/* UINewPVPRoundBank::StaticNew() */

UINewPVPRoundBank * UINewPVPRoundBank::StaticNew(void)

{
  UINewPVPRoundBank *this;
  
  this = ::operator_new(0x170);
  UINewPVPRoundBank(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPRoundBank::onGameplayStarted() */

void __thiscall UINewPVPRoundBank::onGameplayStarted(UINewPVPRoundBank *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  Effect_PopAnim *pEVar7;
  ResourceInfo *pRVar8;
  string asStack_48 [8];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  Point aPStack_30 [8];
  int local_28;
  int local_24;
  string asStack_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  SecretGachaMgr *local_8;
  
  local_8 = ___stack_chk_guard;
  SecretGachaMgr::GetScreenType(___stack_chk_guard);
  cVar1 = (**(code **)(*gLawnApp + 0x360))(gLawnApp);
  if (cVar1 == '\0') {
    iVar4 = 0;
    iVar3 = 0;
  }
  else {
    (**(code **)(*gLawnApp + 0x368))(gLawnApp);
    iVar3 = FUN_03518468();
    iVar4 = FUN_03518468(10);
    iVar3 = iVar3 - iVar4;
    iVar4 = FUN_03518468(5);
  }
  bVar2 = std::operator==(asStack_48,"Large");
  if (bVar2) {
    iVar3 = FUN_03518468(0x12);
    iVar4 = FUN_03518468(5);
  }
  iVar5 = 6;
  bVar2 = std::operator==(asStack_48,"Large");
  if (!bVar2) {
    bVar2 = std::operator==(asStack_48,"Full");
    iVar5 = 4;
    if (!bVar2) {
      iVar5 = 6;
    }
  }
  Sexy::Point::Point((Point *)&local_40,iVar5,3);
  BoardTransforms::GridToBoardSpaceX(local_40);
  iVar5 = FUN_03518468();
  BoardTransforms::GridToBoardSpaceY(local_3c);
  iVar6 = FUN_03518468();
  Sexy::Point::Point((Point *)&local_38,iVar5,iVar6);
  iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar5 = FUN_03518468(iVar5 / 2);
  local_38 = local_38 - iVar5;
  iVar5 = BoardConstants::GRIDSQUARE_HEIGHT();
  iVar5 = FUN_03518468(iVar5 / 2);
  local_34 = local_34 - iVar5;
  Board::TranslateBoardPositionToScreenPosition((Board *)gLawnApp[0x13e],(Point *)&local_38);
  Board::GetBoardBaseOffset();
  Sexy::TPoint<int>::operator+=((TPoint<int> *)&local_38,(TPoint *)&local_18);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_18,(float)(local_38 - iVar3),(float)(iVar4 + local_34));
  UIWidget::SetPositionOffset(local_18,local_14,this);
  UIWidget::SetVisible((UIWidget *)this,true);
  Sexy::Point::Point(aPStack_30,10,1);
  BoardTransforms::GridToBoardSpace(aPStack_30);
  pEVar7 = Board::AddEffect<Effect_PopAnim>((Board *)gLawnApp[0x13e]);
  std::string::string(asStack_20,"POPANIM_EFFECTS_NEW_PVP_ARROWS");
  GetPAMByName(asStack_20);
  pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
  Effect_PopAnim::CreatePopAnimRig(pEVar7,(PopAnim *)pRVar8,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  std::string::~string(asStack_20);
  nop();
  Effect_PopAnim::SetCentered(pEVar7,true);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_18,(float)(local_28 + 0x1e),(float)(local_24 + -0x14),0.0)
  ;
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar7,(SexyVector3 *)&local_18,700000);
  std::string::string(asStack_20,"idle_blue");
  Effect_PopAnim::PlayLoopingAnimation((Effect_PopAnim *)0x40400000,pEVar7,asStack_20,0);
  std::string::~string(asStack_20);
  nop();
  Sexy::Point::Point(aPStack_30,10,5);
  BoardTransforms::GridToBoardSpace(aPStack_30);
  pEVar7 = Board::AddEffect<Effect_PopAnim>((Board *)gLawnApp[0x13e]);
  std::string::string(asStack_20,"POPANIM_EFFECTS_NEW_PVP_ARROWS");
  GetPAMByName(asStack_20);
  pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
  Effect_PopAnim::CreatePopAnimRig(pEVar7,(PopAnim *)pRVar8,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  std::string::~string(asStack_20);
  nop();
  Effect_PopAnim::SetCentered(pEVar7,true);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_18,(float)(local_28 + 0x1e),(float)(local_24 + -0x14),0.0)
  ;
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar7,(SexyVector3 *)&local_18,700000);
  std::string::string(asStack_20,"idle_red");
  Effect_PopAnim::PlayLoopingAnimation((Effect_PopAnim *)0x40400000,pEVar7,asStack_20,0);
  std::string::~string(asStack_20);
  nop();
  std::string::~string(asStack_48);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPRoundBank::onTurnChanged(int) */

void __thiscall UINewPVPRoundBank::onTurnChanged(UINewPVPRoundBank *this,int param_1)

{
  int iVar1;
  int iVar2;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar3;
  FastCurve aFStack_40 [8];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28 [4];
  RtWeakPtr aRStack_18 [4];
  int local_14;
  long local_8;
  
  *(int *)(this + 0x168) = param_1 + 1;
  local_8 = ___stack_chk_guard;
  UIWidget::GetDrawRect();
  UIWidget::GetDrawRect();
  Sexy::FastCurve::SetOutRange(aFStack_40,(float)local_28[0],(float)local_14);
  Sexy::Point::Point((Point *)&local_38,6,3);
  iVar1 = BoardTransforms::GridToBoardSpaceX(local_38);
  iVar2 = BoardTransforms::GridToBoardSpaceY(local_34);
  Sexy::Point::Point((Point *)&local_30,iVar1,iVar2);
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  local_30 = local_30 - iVar1 / 2;
  iVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
  local_2c = (local_2c - iVar1 / 2) + -0xf;
  local_30 = local_30 + 0x19;
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string((string *)local_28,"POPANIM_EFFECTS_NEW_PVP_NEW_ROUND");
  GetPAMByName((string *)local_28);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string((string *)local_28);
  nop();
  Effect_PopAnim::SetCentered(this_00,true);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,(float)local_30,(float)local_2c,0.0);
  StandaloneEffect::SetBoardSpaceOrigin
            ((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,700000);
  std::string::string((string *)aRStack_18,"idle");
  Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPRoundBank::AddToRenderQueue(RenderQueue*) */

void __thiscall UINewPVPRoundBank::AddToRenderQueue(UINewPVPRoundBank *this,RenderQueue *param_1)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::AddToRenderQueue((UIWidget *)this,param_1);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,drawTipsOfOppoentZombies);
  Sexy::Delegate1<Sexy::Graphics*>::
  Delegate1<UINewPVPRoundBank,void(UINewPVPRoundBank::*)(Sexy::Graphics*)>(aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,700000,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPRoundBank::registerForEvents() */

void __thiscall UINewPVPRoundBank::registerForEvents(UINewPVPRoundBank *this)

{
  undefined *puVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayStarted);
  Sexy::Delegate0::Delegate0<UINewPVPRoundBank,void(UINewPVPRoundBank::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::NotifyGameplayStarted,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onTurnChanged);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<UINewPVPRoundBank,void(UINewPVPRoundBank::*)(int)>>
            ((MessageRouter *)puVar1,Message::NotifyTurnChanged,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPRoundBank::Draw(Sexy::Graphics*) */

void __thiscall UINewPVPRoundBank::Draw(UINewPVPRoundBank *this,Graphics *param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  Image *pIVar4;
  string *extraout_x1;
  string *extraout_x1_00;
  GraphicsAutoState aGStack_70 [8];
  string asStack_68 [8];
  Sexy aSStack_60 [8];
  Insets aIStack_58 [8];
  int local_50;
  int local_4c;
  Insets aIStack_48 [16];
  Sexy aSStack_38 [16];
  Insets aIStack_28 [16];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_70,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  iVar2 = FUN_03517f64(*(undefined4 *)(this + 0x38));
  iVar3 = FUN_03517f70(*(undefined4 *)(this + 0x3c));
  Sexy::Insets::Insets(aIStack_58,0,0,(iVar2 * 5) / 9,iVar3);
  std::string::string(asStack_18,"IMAGE_UI_GENERIC_COUNTER_BG");
  pIVar4 = (Image *)StringHelper::ToImage(asStack_18,true);
  std::string::~string(asStack_18);
  nop();
  Sexy::Graphics::DrawImage(param_1,pIVar4,0,0,local_50,local_4c);
  iVar2 = FUN_03517f64(*(undefined4 *)(this + 0x38));
  iVar3 = FUN_03517f70(*(undefined4 *)(this + 0x3c));
  Sexy::Insets::Insets(aIStack_48,0,0,(iVar2 << 1) / 9,iVar3);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x168));
  Sexy::ToSexyString(aSStack_38,extraout_x1);
  uVar1 = PrimeText_Game::Typeface_FZCuYuan_26_Outline;
  Sexy::Color::Color((Color *)asStack_18,4);
  WriteWordInRect(param_1,aIStack_28,aIStack_48,uVar1,asStack_18,4,1);
  FUN_05476c50(aIStack_28);
  std::string::~string((string *)aSStack_38);
  iVar2 = FUN_03517f64(*(undefined4 *)(this + 0x38));
  iVar3 = FUN_03517f70(*(undefined4 *)(this + 0x3c));
  Sexy::Insets::Insets((Insets *)aSStack_38,(iVar2 << 1) / 9,0,iVar2 / 3,iVar3);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x164));
  std::operator+("/",asStack_68);
  Sexy::ToSexyString(aSStack_60,extraout_x1_00);
  uVar1 = PrimeText_Game::Typeface_FZCuYuan_26_Outline;
  Sexy::Color::Color((Color *)asStack_18,1);
  WriteWordInRect(param_1,aIStack_28,aSStack_38,uVar1,asStack_18,3,1);
  FUN_05476c50(aIStack_28);
  std::string::~string((string *)aSStack_60);
  std::string::~string(asStack_68);
  iVar2 = FUN_03517f64(*(undefined4 *)(this + 0x38));
  iVar3 = FUN_03517f70(*(undefined4 *)(this + 0x3c));
  Sexy::Insets::Insets(aIStack_28,(iVar2 * 5) / 9,0,(iVar2 * 4) / 9,iVar3);
  TodStringTranslate(L"[ROUND]");
  uVar1 = PrimeText_Game::Typeface_FZCuYuan_26_Outline;
  Sexy::Color::Color((Color *)asStack_18,1);
  WriteWordInRect(param_1,aSStack_60,aIStack_28,uVar1,asStack_18,3,1);
  FUN_05476c50(aSStack_60);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UINewPVPRoundBank::Draw(Sexy::Graphics*) */

void __thiscall UINewPVPRoundBank::Draw(UINewPVPRoundBank *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPRoundBank::drawTipsOfOppoentZombies(Sexy::Graphics*) */

void __thiscall
UINewPVPRoundBank::drawTipsOfOppoentZombies(UINewPVPRoundBank *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ZombieCacheData *pZVar8;
  SalesProgressBar *this_00;
  string *extraout_x1;
  ulong uVar9;
  GraphicsAutoState aGStack_68 [8];
  Sexy aSStack_60 [8];
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38 [2];
  int local_30;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  puVar6 = (undefined8 *)NewPVPMgr::GetOppoentZombieCacheDatas();
  uVar9 = 0;
  while( true ) {
    uVar7 = FUN_03517fbc(*puVar6,puVar6[1]);
    if (uVar7 <= uVar9 || 2 < (int)uVar9) break;
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_68,param_1);
    pZVar8 = (ZombieCacheData *)FUN_03517fd0(*puVar6,uVar9);
    ZombieCacheData::ZombieCacheData((ZombieCacheData *)local_38,pZVar8);
    ServerZombieID::ServerZombieID((ServerZombieID *)&local_48,local_38[0]);
    ServerZombieID::ToString();
    Sexy::Upper(aSStack_60,extraout_x1);
    std::operator+("IMAGE_UI_NEW_PVP_BUBBLE_BOX_",(string *)&local_58);
    this_00 = (SalesProgressBar *)StringHelper::ToImage((string *)&local_50,true);
    std::string::~string((string *)&local_50);
    std::string::~string((string *)&local_58);
    std::string::~string((string *)aSStack_60);
    Sexy::Point::Point((Point *)&local_58,0xc,local_30);
    BoardTransforms::GridToBoardSpaceX(local_58);
    iVar1 = FUN_03518468();
    BoardTransforms::GridToBoardSpaceY(local_54);
    iVar2 = FUN_03518468();
    Sexy::Point::Point((Point *)&local_50,iVar1,iVar2);
    iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
    iVar1 = FUN_03518468(iVar1 / 2);
    local_50 = local_50 - iVar1;
    iVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
    iVar1 = FUN_03518468(iVar1 / 2 + 0x18);
    local_4c = local_4c - iVar1;
    Board::TranslateBoardPositionToScreenPosition(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_50);
    BoardConstants::GRIDSQUARE_WIDTH();
    iVar1 = local_50;
    iVar3 = FUN_0351847c();
    iVar2 = local_4c;
    iVar4 = SalesProgressBar::GetCurrentLevel(this_00);
    iVar5 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)this_00);
    Sexy::Insets::Insets
              ((Insets *)&local_48,iVar1,iVar2,iVar3,(int)((float)(iVar3 * iVar4) / (float)iVar5));
    Sexy::Graphics::DrawImage(param_1,(Image *)this_00,local_48,local_44,local_40,local_3c);
    HeroPlantSaveInfo::~HeroPlantSaveInfo((HeroPlantSaveInfo *)local_38);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_68);
    uVar9 = uVar9 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

