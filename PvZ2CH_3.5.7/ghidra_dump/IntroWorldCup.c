// Class: IntroWorldCup


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroWorldCup::setToolsState(bool) */

void __thiscall IntroWorldCup::setToolsState(IntroWorldCup *this,bool param_1)

{
  int iVar1;
  long lVar2;
  UIWidget *pUVar3;
  UIWidget *this_00;
  bool bVar4;
  int iVar5;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
  if (*(char *)(lVar2 + 0x112) == '\0') {
    bVar4 = !param_1;
    std::string::string(asStack_10,"UIPlantfood");
    pUVar3 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
    std::string::~string(asStack_10);
    nop();
    UIWidget::SetClickable(pUVar3,bVar4);
    std::string::string(asStack_10,"UIPowerupHolder");
    pUVar3 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
    std::string::~string(asStack_10);
    nop();
    UIWidget::SetClickable(pUVar3,bVar4);
    for (iVar5 = 0; iVar1 = UIWidget::GetChildCount(pUVar3), iVar5 < iVar1; iVar5 = iVar5 + 1) {
      UIWidget::GetChildId((int)pUVar3);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)asStack_10);
      Sexy::RtId::~RtId((RtId *)asStack_10);
      this_00 = (UIWidget *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      UIWidget::SetClickable(this_00,bVar4);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroWorldCup::bringUpSeedChooser() */

void IntroWorldCup::bringUpSeedChooser(void)

{
  UIWidget *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StandardLevelIntro::bringUpSeedChooser();
  std::string::string(asStack_10,"UISunBank");
  this = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this != (UIWidget *)0x0) {
    UIWidget::SetVisible(this,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroWorldCup::StaticClassInit() */

void IntroWorldCup::StaticClassInit(void)

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
    std::string::string(asStack_10,"IntroWorldCup");
    (*pcVar2)(plVar1,asStack_10,FUN_04c3a834,0xd0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IntroWorldCup::StaticGetClass() */

long * IntroWorldCup::StaticGetClass(void)

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
  uVar2 = StandardLevelIntro::StaticGetClass();
  (*pcVar3)(plVar1,"IntroWorldCup",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* IntroWorldCup::GetTutorialStateByType(int) */

undefined4 __thiscall IntroWorldCup::GetTutorialStateByType(IntroWorldCup *this,int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 1) {
    uVar1 = 4;
    if (param_1 != 2) {
      uVar1 = 1;
    }
    return uVar1;
  }
  return 3;
}


/* IntroWorldCup::spawnObstacles() */

void IntroWorldCup::spawnObstacles(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
  if (0 < iVar1) {
    do {
      iVar1 = 0;
      while( true ) {
        iVar2 = BoardConstants::NUMBER_OF_ROWS();
        if (iVar2 <= iVar1) break;
        Board::SetGridSquareType(*(Board **)(gLawnApp + 0x9f0),iVar3,iVar1,9);
        iVar1 = iVar1 + 1;
      }
      iVar3 = iVar3 + 1;
      iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
    } while (iVar3 < iVar1);
  }
  return;
}


/* IntroWorldCup::SetCarrierForTutorial(Sexy::RtWeakPtr<Zombie>) */

void __thiscall IntroWorldCup::SetCarrierForTutorial(IntroWorldCup *this,RtWeakPtr *param_2)

{
  char cVar1;
  
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)(this + 0x70));
  if ((cVar1 != '\0') && (*(int *)(this + 0x58) < 1)) {
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x70),param_2);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroWorldCup::onDraw(Sexy::Graphics*) */

void __thiscall IntroWorldCup::onDraw(IntroWorldCup *this,Graphics *param_1)

{
  char cVar1;
  wstring *pwVar2;
  ulong uVar3;
  long *plVar4;
  StandaloneEffect *pSVar5;
  ulong uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined1 auStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x4c) == 4) {
    uVar6 = 0;
    LawnApp::DrawDarkeningLayer(gLawnApp,param_1,0.5);
    Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)awStack_10,param_1);
    Sexy::Graphics::ClearClipRect(param_1);
    uVar7 = *(undefined8 *)(this + 0x78);
    uVar3 = FUN_04c37518(uVar7,*(undefined8 *)(this + 0x80));
    if (uVar3 != 0) {
      do {
        plVar4 = (long *)FUN_04c37524(uVar7,uVar6);
        plVar4 = (long *)*plVar4;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0xe8))(plVar4,param_1);
          uVar7 = *(undefined8 *)(this + 0x78);
          uVar3 = FUN_04c37518(uVar7,*(undefined8 *)(this + 0x80));
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar3);
    }
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x98));
    if (cVar1 != '\0') {
      pSVar5 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x98));
      StandaloneEffect::Draw(pSVar5,param_1);
    }
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0xc0));
    if (cVar1 != '\0') {
      pSVar5 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xc0));
      StandaloneEffect::Draw(pSVar5,param_1);
    }
    Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)awStack_10);
  }
  if (this[0xb0] != (IntroWorldCup)0x0) {
    fVar8 = *(float *)(this + 0xb8);
    TodStringTranslate(L"[WORLDCUP_GAME_LEFT_TIME]");
    TodReplaceNumberString(awStack_10,L"{NUMBER}",(int)fVar8);
    FUN_05476c50(awStack_10);
    pwVar2 = (wstring *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
    Effect_FloatingText::SetText(pwVar2);
    FUN_05476c50(auStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IntroWorldCup::GetCarrierOffset() */

void IntroWorldCup::GetCarrierOffset(void)

{
  RtWeakPtr *this;
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long in_x0;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var5;
  float *pfVar6;
  long lVar7;
  Point *in_x8;
  float fVar8;
  
  this = (RtWeakPtr *)(in_x0 + 0x70);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
  if ((bVar1) && (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this), cVar2 != '\0')) {
    p_Var5 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    pfVar6 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(p_Var5);
    iVar3 = FUN_04c37860(10);
    fVar8 = *pfVar6;
    p_Var5 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    lVar7 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(p_Var5);
    iVar4 = FUN_04c37860(0x50);
    Sexy::Point::Point(in_x8,(int)((float)iVar3 + fVar8),(int)(*(float *)(lVar7 + 4) - (float)iVar4)
                      );
    return;
  }
  Sexy::Point::Point(in_x8,0,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroWorldCup::onEndLevel() */

void __thiscall IntroWorldCup::onEndLevel(IntroWorldCup *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  RtMixedPtrBase *pRVar1;
  RtMixedPtrBase *this_01;
  char cVar2;
  AnimationMgr *this_02;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  RtWeakPtrBase aRStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68);
  pRVar1 = (RtMixedPtrBase *)(this + 0x60);
  local_8 = ___stack_chk_guard;
  FUN_04c374fc(0,*(long *)(gLawnApp + 0x9f0) + 0xc20);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  this_02 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  AnimationMgr::Clear(this_02);
  cVar2 = Sexy::RtMixedPtrBase::IsValid(pRVar1);
  if (cVar2 != '\0') {
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    (**(code **)(*plVar4 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)pRVar1);
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00);
  if (cVar2 == '\0') {
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x70));
  }
  else {
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    (**(code **)(*plVar4 + 0x48))();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x70));
  }
  if (cVar2 != '\0') {
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x70));
    (**(code **)(*plVar4 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0x70));
  uVar5 = 0;
  while( true ) {
    uVar6 = *(undefined8 *)(this + 0x78);
    uVar3 = FUN_04c37518(uVar6,*(undefined8 *)(this + 0x80));
    if (uVar3 <= uVar5) break;
    FUN_04c37524(uVar6,uVar5);
    ToolPacketData::GetProps();
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (cVar2 != '\0') {
      FUN_04c37524(*(undefined8 *)(this + 0x78),uVar5);
      ToolPacketData::GetProps();
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      (**(code **)(*plVar4 + 0x48))();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
    FUN_04c37524(*(undefined8 *)(this + 0x78),uVar5);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtrBase::ClearId(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    uVar5 = uVar5 + 1;
  }
  pRVar1 = (RtMixedPtrBase *)(this + 0x98);
  cVar2 = Sexy::RtMixedPtrBase::IsValid(pRVar1);
  if (cVar2 != '\0') {
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    (**(code **)(*plVar4 + 0x48))();
  }
  this_01 = (RtMixedPtrBase *)(this + 0xc0);
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)pRVar1);
  cVar2 = Sexy::RtMixedPtrBase::IsValid(this_01);
  if (cVar2 != '\0') {
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
    (**(code **)(*plVar4 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_01);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroWorldCup::MoveIntroIcons(int, int) */

void __thiscall IntroWorldCup::MoveIntroIcons(IntroWorldCup *this,int param_1,int param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var7;
  float fVar8;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  Vec3 aVStack_28 [16];
  int local_18;
  int local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Board::GetBoardBaseOffset();
  fVar8 = (float)local_18;
  Board::GetBoardBaseOffset();
  iVar6 = (int)((float)param_2 * 0.5 - (float)local_14);
  Sexy::Point::Point((Point *)&local_38,(int)((float)param_1 * 0.33333334 - fVar8),iVar6);
  Board::TranslateScreenPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_38);
  iVar2 = FUN_04c37874(local_38);
  iVar3 = FUN_04c37874(local_34);
  fVar8 = (float)FUN_04c37888(0);
  EATextSquish::Vec3::Vec3(aVStack_28,(float)iVar2,(float)iVar3,fVar8);
  Board::GetBoardBaseOffset();
  Sexy::Point::Point((Point *)&local_30,(int)((float)param_1 * 0.6666667 - (float)local_18),iVar6);
  Board::TranslateScreenPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_30);
  iVar2 = FUN_04c37874(local_30);
  iVar3 = FUN_04c37874(local_2c);
  fVar8 = (float)FUN_04c37888(0);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_18,(float)iVar2,(float)iVar3,fVar8);
  puVar4 = (undefined8 *)FUN_04c37524(*(undefined8 *)(this + 0x78),0);
  p_Var7 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)*puVar4;
  uVar5 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost(p_Var7);
  IntroWorldCupIconWidget::SetMotionInterpolate
            ((IntroWorldCupIconWidget *)0x3f000000,p_Var7,uVar5,aVStack_28,5);
  puVar4 = (undefined8 *)FUN_04c37524(*(undefined8 *)(this + 0x78),1);
  p_Var7 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)*puVar4;
  uVar5 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost(p_Var7);
  IntroWorldCupIconWidget::SetMotionInterpolate
            ((IntroWorldCupIconWidget *)0x3f000000,p_Var7,uVar5,(Vec3 *)&local_18,5);
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0xa4) = 1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroWorldCup::MoveOffIntroIcons() */

void __thiscall IntroWorldCup::MoveOffIntroIcons(IntroWorldCup *this)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int iVar7;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var8;
  float fVar9;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  Vec3 aVStack_28 [16];
  int local_18;
  int local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = *(int *)(gLawnApp + 0x728);
  iVar4 = *(int *)(gLawnApp + 0x724);
  Board::GetBoardBaseOffset();
  iVar3 = -local_18;
  Board::GetBoardBaseOffset();
  iVar7 = (int)((float)iVar2 * 0.5 - (float)local_14);
  Sexy::Point::Point((Point *)&local_38,(int)(float)iVar3,iVar7);
  Board::TranslateScreenPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_38);
  iVar2 = FUN_04c37874(local_38);
  iVar3 = FUN_04c37874(local_34);
  fVar9 = (float)FUN_04c37888(0);
  EATextSquish::Vec3::Vec3(aVStack_28,(float)iVar2,(float)iVar3,fVar9);
  Board::GetBoardBaseOffset();
  Sexy::Point::Point((Point *)&local_30,(int)(float)(iVar4 - local_18),iVar7);
  Board::TranslateScreenPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_30);
  iVar2 = FUN_04c37874(local_30);
  iVar4 = FUN_04c37874(local_2c);
  fVar9 = (float)FUN_04c37888(0);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_18,(float)iVar2,(float)iVar4,fVar9);
  puVar5 = (undefined8 *)FUN_04c37524(*(undefined8 *)(this + 0x78),0);
  p_Var8 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)*puVar5;
  uVar6 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost(p_Var8);
  IntroWorldCupIconWidget::SetMotionInterpolate
            ((IntroWorldCupIconWidget *)0x3f000000,p_Var8,uVar6,aVStack_28,5);
  puVar5 = (undefined8 *)FUN_04c37524(*(undefined8 *)(this + 0x78),1);
  p_Var8 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)*puVar5;
  uVar6 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost(p_Var8);
  IntroWorldCupIconWidget::SetMotionInterpolate
            ((IntroWorldCupIconWidget *)0x3f000000,p_Var8,uVar6,(Vec3 *)&local_18,5);
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0xa4) = 2;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroWorldCup::OnCountDownEffectDone(StandaloneEffect*) */

void IntroWorldCup::OnCountDownEffectDone(StandaloneEffect *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int iVar7;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var8;
  float fVar9;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  Vec3 aVStack_28 [16];
  int iStack_18;
  int iStack_14;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  iVar2 = *(int *)(gLawnApp + 0x728);
  iVar4 = *(int *)(gLawnApp + 0x724);
  Board::GetBoardBaseOffset();
  iVar3 = -iStack_18;
  Board::GetBoardBaseOffset();
  iVar7 = (int)((float)iVar2 * 0.5 - (float)iStack_14);
  Sexy::Point::Point((Point *)&uStack_38,(int)(float)iVar3,iVar7);
  Board::TranslateScreenPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),(Point *)&uStack_38);
  iVar2 = FUN_04c37874(uStack_38);
  iVar3 = FUN_04c37874(uStack_34);
  fVar9 = (float)FUN_04c37888(0);
  EATextSquish::Vec3::Vec3(aVStack_28,(float)iVar2,(float)iVar3,fVar9);
  Board::GetBoardBaseOffset();
  Sexy::Point::Point((Point *)&uStack_30,(int)(float)(iVar4 - iStack_18),iVar7);
  Board::TranslateScreenPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),(Point *)&uStack_30);
  iVar2 = FUN_04c37874(uStack_30);
  iVar4 = FUN_04c37874(uStack_2c);
  fVar9 = (float)FUN_04c37888(0);
  EATextSquish::Vec3::Vec3((Vec3 *)&iStack_18,(float)iVar2,(float)iVar4,fVar9);
  puVar5 = (undefined8 *)FUN_04c37524(*(undefined8 *)(param_1 + 0x78),0);
  p_Var8 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)*puVar5;
  uVar6 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost(p_Var8);
  IntroWorldCupIconWidget::SetMotionInterpolate
            ((IntroWorldCupIconWidget *)0x3f000000,p_Var8,uVar6,aVStack_28,5);
  puVar5 = (undefined8 *)FUN_04c37524(*(undefined8 *)(param_1 + 0x78),1);
  p_Var8 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)*puVar5;
  uVar6 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost(p_Var8);
  IntroWorldCupIconWidget::SetMotionInterpolate
            ((IntroWorldCupIconWidget *)0x3f000000,p_Var8,uVar6,(Vec3 *)&iStack_18,5);
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(param_1 + 0xa4) = 2;
  if (lStack_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroWorldCup::setTutorialState(IntroWorldCup::TutorialState) */

void __thiscall IntroWorldCup::setTutorialState(IntroWorldCup *this,undefined4 param_2)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  AnimationMgr *pAVar6;
  long lVar7;
  AnimationController *pAVar8;
  undefined8 uVar9;
  AnimationController *pAVar10;
  AnimationMgr *pAVar11;
  wchar_t *pwVar12;
  float fVar13;
  float fVar14;
  TPoint aTStack_48 [8];
  undefined4 local_40;
  undefined4 local_3c;
  TPoint aTStack_38 [8];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined8 local_20;
  int local_18;
  int iStack_14;
  long local_8;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68);
  *(undefined4 *)(this + 0x58) = param_2;
  local_8 = ___stack_chk_guard;
  pAVar6 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  AnimationMgr::Clear(pAVar6);
  lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  FUN_04c374c0(lVar7 + 0x10);
  lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  pAVar6 = (AnimationMgr *)FUN_04c374cc(*(undefined4 *)(lVar7 + 0x10));
  switch(*(undefined4 *)(this + 0x58)) {
  case 0:
    pRVar1 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60);
    FUN_05478178((Point *)&local_18,L"[WORLDCUP_TUTORIAL_ADVICE_1]",(RtWeakPtrBase *)&local_20);
    pAVar10 = (AnimationController *)ShowAdvice::Create((Point *)&local_18,7);
    FUN_05476c50((Point *)&local_18);
    nop();
    Sexy::Point::Point((Point *)&local_28,3,2);
    uVar2 = BoardTransforms::GridToBoardSpaceX(local_28);
    iVar5 = BoardTransforms::GridToBoardSpaceY(local_24);
    iVar3 = FUN_04c37860(uVar2);
    iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
    iVar5 = FUN_04c37860(iVar5 - iVar4 / 2);
    iVar4 = FUN_04c37860(10);
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    Sexy::Point::Point((Point *)&local_18,iVar3,iVar5 - iVar4);
    *(ulong *)(lVar7 + 0x30) = CONCAT44(iStack_14,local_18);
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    *(undefined4 *)(lVar7 + 0x3c) = 0;
    pAVar8 = (AnimationController *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    AnimationController::SetDuration(pAVar8,2.0);
    uVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)&local_20);
    goto LAB_04c39214;
  case 1:
    pwVar12 = L"[WORLDCUP_TUTORIAL_ADVICE_2]";
    goto LAB_04c39468;
  case 2:
    pwVar12 = L"[WORLDCUP_TUTORIAL_ADVICE_3]";
LAB_04c39468:
    pRVar1 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60);
    FUN_05478178((RtWeakPtr<Sexy::SoundResource> *)&local_18,pwVar12,&local_20);
    pAVar10 = (AnimationController *)
              ShowAdvice::Create((RtWeakPtr<Sexy::SoundResource> *)&local_18,7);
    FUN_05476c50((RtWeakPtr<Sexy::SoundResource> *)&local_18);
    nop();
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    GetCarrierOffset();
    *(ulong *)(lVar7 + 0x30) = CONCAT44(iStack_14,local_18);
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    *(undefined4 *)(lVar7 + 0x3c) = 0;
    pAVar8 = (AnimationController *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    AnimationController::SetDuration(pAVar8,5.0);
    uVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)&local_20);
LAB_04c39214:
    AnimationMgr::Add(pAVar6,uVar9,(RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
    pAVar11 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    AnimationMgr::Add(pAVar11,pAVar10,(float)pAVar6);
    break;
  case 3:
    FUN_05478178(&local_18,L"[WORLDCUP_TUTORIAL_ADVICE_4]",(string *)&local_20);
    pAVar10 = (AnimationController *)ShowAdvice::Create(&local_18,7);
    pRVar1 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60);
    FUN_05476c50(&local_18);
    nop();
    Board::GetBoardBaseOffset();
    std::string::string((string *)&local_20,"UIPlantfood");
    UIWidget::GetWidgetBySheetName((string *)&local_20);
    UIWidget::GetDrawRect();
    std::string::~string((string *)&local_20);
    nop();
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_40,33.0,-6.0);
    fVar13 = (float)FUN_04c378ac(local_40);
    fVar14 = (float)FUN_04c378ac(local_3c);
    Sexy::Point::Point((Point *)aTStack_38,(int)(fVar13 + (float)local_18),
                       (int)(fVar14 + (float)iStack_14));
    Sexy::TPoint<int>::operator-((TPoint<int> *)aTStack_38,aTStack_48);
    Sexy::Point::Point((Point *)&local_30,(TPoint *)&local_20);
    Board::TranslateScreenPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_30);
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    Sexy::Point::Point((Point *)&local_20,local_30,local_2c);
    *(undefined8 *)(lVar7 + 0x30) = local_20;
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    *(undefined4 *)(lVar7 + 0x3c) = 0;
    pAVar8 = (AnimationController *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    AnimationController::SetDuration(pAVar8,3.0);
    uVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)&local_28);
    AnimationMgr::Add(pAVar6,uVar9,(string *)&local_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
    pAVar11 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    AnimationMgr::Add(pAVar11,pAVar10,(float)pAVar6);
    break;
  case 4:
    FUN_05478178(&local_18,L"[WORLDCUP_TUTORIAL_ADVICE_5]",(string *)&local_20);
    pRVar1 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60);
    pAVar10 = (AnimationController *)ShowAdvice::Create(&local_18,7);
    FUN_05476c50(&local_18);
    nop();
    Board::GetBoardBaseOffset();
    std::string::string((string *)&local_20,"WorldCupScoreUI");
    UIWidget::GetWidgetBySheetName((string *)&local_20);
    UIWidget::GetDrawRect();
    std::string::~string((string *)&local_20);
    nop();
    Sexy::TRect<int>::GetCenter();
    Sexy::TPoint<int>::operator-((TPoint<int> *)&local_28,aTStack_38);
    Sexy::Point::Point((Point *)&local_30,(TPoint *)&local_20);
    iVar5 = FUN_04c37898(0x5f);
    local_30 = local_30 + iVar5;
    Board::TranslateScreenPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_30);
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    Sexy::Point::Point((Point *)&local_20,local_30,local_2c);
    *(undefined8 *)(lVar7 + 0x30) = local_20;
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    *(undefined4 *)(lVar7 + 0x3c) = 0x10e;
    pAVar8 = (AnimationController *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    AnimationController::SetDuration(pAVar8,3.0);
    uVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)&local_28);
    AnimationMgr::Add(pAVar6,uVar9,(string *)&local_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
    pAVar11 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    AnimationMgr::Add(pAVar11,pAVar10,(float)pAVar6);
    break;
  case 5:
    FUN_05478178(&local_18,L"[WORLDCUP_TUTORIAL_ADVICE_6]",&local_20);
    pAVar10 = (AnimationController *)ShowAdvice::Create(&local_18,7);
    FUN_05476c50(&local_18);
    nop();
    pAVar11 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    AnimationMgr::Add(pAVar11,pAVar10,(float)pAVar6);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* IntroWorldCup::onNotifyTutorialState(int) */

void __thiscall IntroWorldCup::onNotifyTutorialState(IntroWorldCup *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = GetTutorialStateByType(this,param_1);
  setTutorialState(this,uVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroWorldCup::initializeModule() */

void __thiscall IntroWorldCup::initializeModule(IntroWorldCup *this)

{
  undefined4 uVar1;
  long lVar2;
  Point aPStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = Board::MakeRenderOrder(900000,0,1);
  Sexy::Point::Point(aPStack_18,0,0);
  FUN_04c39700(aPStack_18,uVar1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x60),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60));
  FUN_04c375b0(lVar2 + 0x1c);
  AnimationMgr::Create();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x68),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroWorldCup::addToRenderQueue(RenderQueue*) */

void __thiscall IntroWorldCup::addToRenderQueue(IntroWorldCup *this,RenderQueue *param_1)

{
  bool bVar1;
  AnimationMgr *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x68));
  if (bVar1) {
    this_00 = (AnimationMgr *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68));
    AnimationMgr::AddToRenderQueue(this_00,param_1);
  }
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onDraw);
  Sexy::Delegate1<Sexy::Graphics*>::Delegate1<IntroWorldCup,void(IntroWorldCup::*)(Sexy::Graphics*)>
            (aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,1000000,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroWorldCup::CreateLeftTime() */

void __thiscall IntroWorldCup::CreateLeftTime(IntroWorldCup *this)

{
  long lVar1;
  int iVar2;
  int iVar3;
  Effect_FloatingText *this_00;
  code *pcVar4;
  undefined4 uVar5;
  int local_30;
  int local_2c;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_FloatingText>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_18,"WorldCupScoreUI");
  UIWidget::GetWidgetBySheetName(asStack_18);
  UIWidget::GetDrawRect();
  std::string::~string(asStack_18);
  nop();
  Sexy::TRect<int>::GetCenter();
  Sexy::Point::Point((Point *)&local_30,(TPoint *)asStack_18);
  iVar2 = FUN_04c37860(10);
  iVar3 = FUN_04c37860(0x2d);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)asStack_18,(float)(local_30 - iVar2),(float)(local_2c + iVar3),0.0);
  StandaloneEffect::SetBoardSpaceOrigin
            ((StandaloneEffect *)this_00,(SexyVector3 *)asStack_18,0xdbba1);
  Effect_FloatingText::SetStyle(this_00,9);
  pcVar4 = *(code **)(*(long *)this_00 + 0x78);
  Sexy::Color::Color((Color *)asStack_18,2);
  (*pcVar4)(this_00,asStack_18);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xa8),(RtWeakPtrBase *)asStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
  Sexy::LazySingleton<WorldCupMgr>::GetInstance();
  uVar5 = WorldCupMgr::GetGameEndTime();
  lVar1 = ___stack_chk_guard;
  this[0xb0] = (IntroWorldCup)0x1;
  *(undefined4 *)(this + 0xb4) = uVar5;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroWorldCup::onNotifyLeft30Seconds() */

void __thiscall IntroWorldCup::onNotifyLeft30Seconds(IntroWorldCup *this)

{
  long lVar1;
  int iVar2;
  int iVar3;
  Effect_FloatingText *this_00;
  code *pcVar4;
  undefined4 uVar5;
  int iStack_30;
  int iStack_2c;
  string asStack_18 [16];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_FloatingText>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_18,"WorldCupScoreUI");
  UIWidget::GetWidgetBySheetName(asStack_18);
  UIWidget::GetDrawRect();
  std::string::~string(asStack_18);
  nop();
  Sexy::TRect<int>::GetCenter();
  Sexy::Point::Point((Point *)&iStack_30,(TPoint *)asStack_18);
  iVar2 = FUN_04c37860(10);
  iVar3 = FUN_04c37860(0x2d);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)asStack_18,(float)(iStack_30 - iVar2),(float)(iStack_2c + iVar3),0.0);
  StandaloneEffect::SetBoardSpaceOrigin
            ((StandaloneEffect *)this_00,(SexyVector3 *)asStack_18,0xdbba1);
  Effect_FloatingText::SetStyle(this_00,9);
  pcVar4 = *(code **)(*(long *)this_00 + 0x78);
  Sexy::Color::Color((Color *)asStack_18,2);
  (*pcVar4)(this_00,asStack_18);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xa8),(RtWeakPtrBase *)asStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
  Sexy::LazySingleton<WorldCupMgr>::GetInstance();
  uVar5 = WorldCupMgr::GetGameEndTime();
  lVar1 = ___stack_chk_guard;
  this[0xb0] = (IntroWorldCup)0x1;
  *(undefined4 *)(this + 0xb4) = uVar5;
  if (lStack_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IntroWorldCup::IsTutorial() */

ResilienceTutorialIntroProperties __thiscall IntroWorldCup::IsTutorial(IntroWorldCup *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  return pRVar1[0x7c];
}


/* IntroWorldCup::IntroWorldCup() */

void __thiscall IntroWorldCup::IntroWorldCup(IntroWorldCup *this)

{
  undefined4 uVar1;
  
  StandardLevelIntro::StandardLevelIntro((StandardLevelIntro *)this);
  *(undefined ***)this = &PTR_GetModuleClass_069853e0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x60));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x68));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x70));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x78));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x98));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xa8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xc0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 200));
  *(undefined4 *)(this + 0x4c) = 0xffffffff;
  uVar1 = PVZ_EOT();
  this[0x54] = (IntroWorldCup)0x0;
  *(undefined4 *)(this + 0x58) = 0xffffffff;
  *(undefined4 *)(this + 0x50) = uVar1;
  std::vector<IntroWorldCupIconWidget*,std::allocator<IntroWorldCupIconWidget*>>::clear
            ((vector<IntroWorldCupIconWidget*,std::allocator<IntroWorldCupIconWidget*>> *)
             (this + 0x78));
  this[0x90] = (IntroWorldCup)0x0;
  *(undefined4 *)(this + 0xa4) = 0;
  this[0xb0] = (IntroWorldCup)0x0;
  *(undefined4 *)(this + 0xa0) = uVar1;
  *(undefined4 *)(this + 0xb4) = uVar1;
  *(undefined4 *)(this + 0xb8) = 0;
  return;
}


/* IntroWorldCup::StaticNew() */

IntroWorldCup * IntroWorldCup::StaticNew(void)

{
  IntroWorldCup *this;
  
  this = ::operator_new(0xd0);
  IntroWorldCup(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroWorldCup::CreateIntroEffect() */

void __thiscall IntroWorldCup::CreateIntroEffect(IntroWorldCup *this)

{
  int iVar1;
  int iVar2;
  StandaloneEffect *this_00;
  ResourceInfo *pRVar3;
  int local_70;
  int local_6c;
  RtMixedPtr aRStack_68 [8];
  string asStack_60 [8];
  int local_58;
  int local_54;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x90] == (IntroWorldCup)0x0) {
    iVar1 = *(int *)(gLawnApp + 0x724);
    iVar2 = *(int *)(gLawnApp + 0x728);
    Board::GetBoardBaseOffset();
    Board::GetBoardBaseOffset();
    Sexy::Point::Point((Point *)&local_70,(int)((float)iVar1 * 0.5 - (float)local_58),
                       (int)((float)iVar2 * 0.5 - (float)local_54));
    Board::TranslateScreenPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_70);
    StandaloneEffect::CreateEffect<Effect_PopAnim>();
    nop();
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_58,(float)local_70,(float)local_6c);
    StandaloneEffect::SetScreenSpaceOrigin(this_00,(SexyVector2 *)&local_58,0xdbba1);
    std::string::string(asStack_60,"POPANIM_EFFECTS_VS_EFFECT");
    GetPAMByName(asStack_60);
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_58);
    Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this_00,(PopAnim *)pRVar3,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
    std::string::~string(asStack_60);
    nop();
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string((string *)&local_58,"OnEffectDone");
    RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,asStack_60,
               (FastCurve *)&local_58);
    StandaloneEffect::SetCompletionCallback(this_00,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string((string *)&local_58);
    nop();
    Sexy::RtId::~RtId((RtId *)asStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    Effect_PopAnim::SetCentered((Effect_PopAnim *)this_00,true);
    std::string::string((string *)&local_58,"animation");
    Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this_00,(FastCurve *)&local_58,0);
    std::string::~string((string *)&local_58);
    nop();
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x98),(RtWeakPtrBase *)&local_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
    this[0x90] = (IntroWorldCup)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroWorldCup::CreateCountDownEffect() */

void __thiscall IntroWorldCup::CreateCountDownEffect(IntroWorldCup *this)

{
  int iVar1;
  int iVar2;
  StandaloneEffect *this_00;
  ResourceInfo *pRVar3;
  int local_70;
  int local_6c;
  RtMixedPtr aRStack_68 [8];
  string asStack_60 [8];
  int local_58;
  int local_54;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = *(int *)(gLawnApp + 0x724);
  iVar1 = *(int *)(gLawnApp + 0x728);
  Board::GetBoardBaseOffset();
  Board::GetBoardBaseOffset();
  Sexy::Point::Point((Point *)&local_70,(int)((float)iVar2 * 0.5 - (float)local_58),
                     (int)((float)iVar1 * 0.5 - (float)local_54));
  Board::TranslateScreenPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_70);
  StandaloneEffect::CreateEffect<Effect_PopAnim>();
  nop();
  iVar2 = FUN_04c37898(0x37);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_58,(float)local_70,(float)(local_6c + iVar2));
  StandaloneEffect::SetScreenSpaceOrigin(this_00,(SexyVector2 *)&local_58,0xdbba1);
  std::string::string(asStack_60,"POPANIM_EFFECTS_COUNTDOWN_EFFECT");
  GetPAMByName(asStack_60);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_58);
  Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this_00,(PopAnim *)pRVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
  std::string::~string(asStack_60);
  nop();
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string((string *)&local_58,"OnCountDownEffectDone");
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,asStack_60,
             (FastCurve *)&local_58);
  StandaloneEffect::SetCompletionCallback(this_00,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)&local_58);
  nop();
  Sexy::RtId::~RtId((RtId *)asStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  Effect_PopAnim::SetCentered((Effect_PopAnim *)this_00,true);
  std::string::string((string *)&local_58,"animation");
  Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this_00,(FastCurve *)&local_58,0);
  std::string::~string((string *)&local_58);
  nop();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xc0),(RtWeakPtrBase *)&local_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroWorldCup::OnEffectDone(StandaloneEffect*) */

void IntroWorldCup::OnEffectDone(StandaloneEffect *param_1)

{
  int iVar1;
  int iVar2;
  StandaloneEffect *this;
  ResourceInfo *pRVar3;
  int iStack_70;
  int iStack_6c;
  RtMixedPtr aRStack_68 [8];
  string asStack_60 [8];
  int iStack_58;
  int iStack_54;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  iVar2 = *(int *)(gLawnApp + 0x724);
  iVar1 = *(int *)(gLawnApp + 0x728);
  Board::GetBoardBaseOffset();
  Board::GetBoardBaseOffset();
  Sexy::Point::Point((Point *)&iStack_70,(int)((float)iVar2 * 0.5 - (float)iStack_58),
                     (int)((float)iVar1 * 0.5 - (float)iStack_54));
  Board::TranslateScreenPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),(Point *)&iStack_70);
  StandaloneEffect::CreateEffect<Effect_PopAnim>();
  nop();
  iVar2 = FUN_04c37898(0x37);
  Sexy::FastCurve::SetOutRange((FastCurve *)&iStack_58,(float)iStack_70,(float)(iStack_6c + iVar2));
  StandaloneEffect::SetScreenSpaceOrigin(this,(SexyVector2 *)&iStack_58,0xdbba1);
  std::string::string(asStack_60,"POPANIM_EFFECTS_COUNTDOWN_EFFECT");
  GetPAMByName(asStack_60);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&iStack_58);
  Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this,(PopAnim *)pRVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&iStack_58);
  std::string::~string(asStack_60);
  nop();
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string((string *)&iStack_58,"OnCountDownEffectDone");
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,asStack_60,
             (FastCurve *)&iStack_58);
  StandaloneEffect::SetCompletionCallback(this,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)&iStack_58);
  nop();
  Sexy::RtId::~RtId((RtId *)asStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  Effect_PopAnim::SetCentered((Effect_PopAnim *)this,true);
  std::string::string((string *)&iStack_58,"animation");
  Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this,(FastCurve *)&iStack_58,0);
  std::string::~string((string *)&iStack_58);
  nop();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0xc0),(RtWeakPtrBase *)&iStack_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&iStack_58);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroWorldCup::GetPlantCount() const */

void IntroWorldCup::GetPlantCount(void)

{
  undefined4 uVar1;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntities
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,1);
  uVar1 = FUN_04c3752c(local_20,local_18);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroWorldCup::onPlantPlanted(Plant*) */

void IntroWorldCup::onPlantPlanted(Plant *param_1)

{
  int iVar1;
  int iVar2;
  UIWidget *this;
  Board *pBVar3;
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 0x4c) == 3) {
    Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
    iVar1 = GetPlantCount();
    Sexy::LazySingleton<WorldCupMgr>::GetInstance();
    iVar2 = WorldCupMgr::GetCurrentSetSize();
    if (iVar1 == iVar2) {
      std::string::string(asStack_10,"UIStartGameButton");
      this = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
      UIWidget::SetClickable(this,true);
      std::string::~string(asStack_10);
      nop();
      pBVar3 = *(Board **)(gLawnApp + 0x9f0);
      FUN_05478178(asStack_10,L"[ADVICE_WORLD_CUP_START_HINT]",auStack_18);
      Board::DisplayAdvice(pBVar3,asStack_10,7,0);
      FUN_05476c50(asStack_10);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroWorldCup::onPlantShoveled(Plant*) */

void IntroWorldCup::onPlantShoveled(Plant *param_1)

{
  int iVar1;
  int iVar2;
  UIWidget *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 0x4c) == 3) {
    iVar1 = GetPlantCount();
    Sexy::LazySingleton<WorldCupMgr>::GetInstance();
    iVar2 = WorldCupMgr::GetCurrentSetSize();
    if (iVar1 <= iVar2) {
      std::string::string(asStack_10,"UIStartGameButton");
      this = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
      UIWidget::SetClickable(this,false);
      std::string::~string(asStack_10);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IntroWorldCup::~IntroWorldCup() */

void __thiscall IntroWorldCup::~IntroWorldCup(IntroWorldCup *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_069853e0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 200));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xc0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x98));
  std::vector<IntroWorldCupIconWidget*,std::allocator<IntroWorldCupIconWidget*>>::~vector
            ((vector<IntroWorldCupIconWidget*,std::allocator<IntroWorldCupIconWidget*>> *)
             (this + 0x78));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x70));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60));
  StandardLevelIntro::~StandardLevelIntro((StandardLevelIntro *)this);
  return;
}


/* IntroWorldCup::~IntroWorldCup() */

void __thiscall IntroWorldCup::~IntroWorldCup(IntroWorldCup *this)

{
  ~IntroWorldCup(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroWorldCup::CreateIntroIcons() */

void __thiscall IntroWorldCup::CreateIntroIcons(IntroWorldCup *this)

{
  long lVar1;
  int iVar2;
  int iVar3;
  XMLParser *this_00;
  WorldCupManager *this_01;
  ulong uVar4;
  IntroWorldCupIconWidget *pIVar5;
  long lVar6;
  int iVar7;
  string *psVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  IntroWorldCupIconWidget *local_48;
  undefined8 local_40;
  undefined4 local_38;
  string asStack_30 [8];
  string asStack_28 [8];
  DVec3 local_20 [8];
  undefined4 local_18;
  DVec3 aDStack_14 [12];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = *(int *)(gLawnApp + 0x724);
  iVar3 = *(int *)(gLawnApp + 0x728);
  Board::GetBoardBaseOffset();
  fVar11 = (float)iVar2;
  fVar12 = (float)(int)local_40;
  Board::GetBoardBaseOffset();
  fVar10 = (float)local_40._4_4_;
  DVec3::DVec3(local_20);
  DVec3::DVec3(aDStack_14);
  iVar7 = (int)((float)iVar3 * 0.5 - fVar10);
  Sexy::Point::Point((Point *)&local_58,(int)(fVar11 * 0.16666667 - fVar12),iVar7);
  Board::TranslateScreenPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_58);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_40,(float)local_58,(float)local_54,0.0);
  Sexy::SexyVector3::operator=((SexyVector3 *)local_20,(SexyVector3 *)&local_40);
  Board::GetBoardBaseOffset();
  Sexy::Point::Point((Point *)&local_50,(int)(fVar11 * 0.8333334 - (float)(int)local_40),iVar7);
  Board::TranslateScreenPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_50);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_40,(float)local_50,(float)local_4c,0.0);
  Sexy::SexyVector3::operator=((SexyVector3 *)aDStack_14,(SexyVector3 *)&local_40);
  Set8BytesTo0(asStack_30);
  Set8BytesTo0(asStack_28);
  this_00 = (XMLParser *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
  iVar7 = Sexy::XMLParser::GetCurrentLineNum(this_00);
  Sexy::StrFormat("IMAGE_UI_WORLDCUP_WORLDCUP_TEAM_%d",(Vec3 *)&local_40,(ulong)(iVar7 - 100));
  FUN_05474278(asStack_30,(Vec3 *)&local_40);
  std::string::~string((string *)&local_40);
  this_01 = (WorldCupManager *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
  uVar4 = WorldCupManager::getCurLoopNum(this_01);
  Sexy::StrFormat("IMAGE_UI_WORLDCUP_WORLDCUP_ENEMY_%d",(Vec3 *)&local_40,uVar4 & 0xffffffff);
  FUN_05474278(asStack_28,(Vec3 *)&local_40);
  std::string::~string((string *)&local_40);
  lVar6 = 0;
  psVar8 = asStack_30;
  do {
    pIVar5 = GameObject::Create<IntroWorldCupIconWidget>();
    local_40 = *(undefined8 *)(local_20 + lVar6);
    lVar1 = lVar6 + 0xc;
    local_38 = *(undefined4 *)((long)&local_18 + lVar6);
    local_48 = pIVar5;
    uVar9 = FUN_04c37888((int)local_40);
    local_40 = CONCAT44(local_40._4_4_,uVar9);
    uVar9 = FUN_04c37888(local_40._4_4_);
    local_40 = CONCAT44(uVar9,(int)local_40);
    local_38 = FUN_04c37888(local_38);
    (**(code **)(*(long *)pIVar5 + 0x78))(pIVar5,(Vec3 *)&local_40);
    IntroWorldCupIconWidget::initializeRenderEffect(local_48,psVar8);
    std::vector<IntroWorldCupIconWidget*,std::allocator<IntroWorldCupIconWidget*>>::push_back
              ((vector<IntroWorldCupIconWidget*,std::allocator<IntroWorldCupIconWidget*>> *)
               (this + 0x78),&local_48);
    lVar6 = lVar1;
    psVar8 = psVar8 + 8;
  } while (lVar1 != 0x18);
  MoveIntroIcons(this,iVar2,iVar3);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroWorldCup::setState(IntroWorldCup::State) */

void __thiscall IntroWorldCup::setState(IntroWorldCup *this,int param_2)

{
  char cVar1;
  int iVar2;
  FishingEnergyBar *this_00;
  PlantfoodUI *this_01;
  WorldCupManager *this_02;
  UIWidget *pUVar3;
  WaveManager *this_03;
  UINewPVPTopZombieQueue *pUVar4;
  long lVar5;
  SeedPacket *pSVar6;
  Board *this_04;
  undefined4 uVar7;
  float fVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x4c) != param_2) {
    *(int *)(this + 0x4c) = param_2;
    uVar7 = PVZ_T();
    *(undefined4 *)(this + 0x50) = uVar7;
    switch(*(undefined4 *)(this + 0x4c)) {
    case 0:
      lVar5 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
      if (*(char *)(lVar5 + 0x112) == '\0') {
        this_04 = *(Board **)(gLawnApp + 0x9f0);
        iVar2 = Board::GetSunCurrency(this_04);
        Board::TakeSunMoney(this_04,iVar2,false,false);
        this_02 = (WorldCupManager *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
        iVar2 = WorldCupManager::getCurStageSunNum(this_02);
        Board::AddSunMoney(*(Board **)(gLawnApp + 0x9f0),iVar2);
        spawnObstacles();
      }
      break;
    case 1:
      FUN_04c374e8(*(long *)(gLawnApp + 0x9f0) + 0x887,0);
      FUN_04c374f0(*(long *)(gLawnApp + 0x9f0) + 0xb44);
      StandardLevelIntro::startStandardIntro((StandardLevelIntro *)this,1);
      break;
    case 2:
      Board::SetSoftPause(*(Board **)(gLawnApp + 0x9f0),true);
      pUVar4 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
      for (iVar2 = 0; cVar1 = FUN_04c37504(pUVar4[0x199]), iVar2 < cVar1; iVar2 = iVar2 + 1) {
        UINewPVPTopZombieQueue::gettItem(pUVar4,iVar2);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
        FUN_04c374e0(lVar5 + 0x198,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18)
        ;
        UINewPVPTopZombieQueue::gettItem(pUVar4,iVar2);
        this_00 = (FishingEnergyBar *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
        FishingEnergyBar::onGameUnpaused(this_00);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18)
        ;
      }
      FUN_04c374fc(0x3f800000,*(long *)(gLawnApp + 0x9f0) + 0xc20);
      setToolsState(this,true);
      Sexy::RtName::RtName((RtName *)asStack_18,L"UIStartGameButton");
      pUVar3 = (UIWidget *)UIWidget::CreateWidget((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18,1);
      Sexy::RtName::~RtName((RtName *)asStack_18);
      UIWidget::SetIgnoreParentVisibility(pUVar3,true);
      std::string::string(asStack_18,"UIPlantfood");
      UIWidget::GetWidgetBySheetName(asStack_18);
      nop();
      std::string::~string(asStack_18);
      nop();
      if (this_01 != (PlantfoodUI *)0x0) {
        PlantfoodUI::SetForceShowPlus(this_01,false);
      }
      setState(this,3);
      break;
    case 3:
      std::string::string(asStack_18,"UIPowerupHolder");
      pUVar3 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_18);
      UIWidget::SetVisible(pUVar3,false);
      std::string::~string(asStack_18);
      nop();
      std::string::string(asStack_18,"UIViewBoardOrZombies");
      pUVar3 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_18);
      UIWidget::SetVisible(pUVar3,false);
      std::string::~string(asStack_18);
      nop();
      std::string::string(asStack_18,"UIViewBoardOrZombies");
      pUVar3 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_18);
      UIWidget::SetClickable(pUVar3,false);
      std::string::~string(asStack_18);
      nop();
      std::string::string(asStack_18,"UIShovel");
      pUVar3 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_18);
      UIWidget::SetClickable(pUVar3,true);
      std::string::~string(asStack_18);
      nop();
      std::string::string(asStack_18,"UIStartGameButton");
      pUVar3 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_18);
      iVar2 = GetPlantCount();
      UIWidget::SetClickable(pUVar3,0 < iVar2);
      std::string::~string(asStack_18);
      nop();
      pUVar4 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
      for (iVar2 = 0; cVar1 = FUN_04c37504(pUVar4[0x199]), iVar2 < cVar1; iVar2 = iVar2 + 1) {
        UINewPVPTopZombieQueue::gettItem(pUVar4,iVar2);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
        SeedPacket::GetPlantType();
        pUVar3 = (UIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
        UIWidget::SetClickable(pUVar3,true);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
      }
      cVar1 = IsTutorial(this);
      if (cVar1 != '\0') {
        setTutorialState(this,0);
      }
      break;
    case 4:
      Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
      CreateIntroIcons(this);
      break;
    case 5:
      Board::DestroyCutsceneZombies();
      FUN_04c374fc(0,*(long *)(gLawnApp + 0x9f0) + 0xc20);
      setToolsState(this,false);
      std::string::string(asStack_18,"UIViewBoardOrZombies");
      pUVar3 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_18);
      UIWidget::SetVisible(pUVar3,false);
      std::string::~string(asStack_18);
      nop();
      std::string::string(asStack_18,"UIStartGameButton");
      pUVar3 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_18);
      UIWidget::SetVisible(pUVar3,false);
      std::string::~string(asStack_18);
      nop();
      Board::SetSoftPause(*(Board **)(gLawnApp + 0x9f0),false);
      FUN_04c374e8(*(long *)(gLawnApp + 0x9f0) + 0x887,1);
      this_03 = (WaveManager *)Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
      if (this_03 != (WaveManager *)0x0) {
        fVar8 = (float)PVZ_T();
        WaveManager::SetNextWaveTime(this_03,fVar8 + 2.0);
      }
      pUVar4 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
      for (iVar2 = 0; cVar1 = FUN_04c37504(pUVar4[0x199]), iVar2 < cVar1; iVar2 = iVar2 + 1) {
        UINewPVPTopZombieQueue::gettItem(pUVar4,iVar2);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
        FUN_04c374e0(lVar5 + 0x198,1);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18)
        ;
        UINewPVPTopZombieQueue::gettItem(pUVar4,iVar2);
        pSVar6 = (SeedPacket *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
        SeedPacket::InitializeTimer(pSVar6);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18)
        ;
        UINewPVPTopZombieQueue::gettItem(pUVar4,iVar2);
        pSVar6 = (SeedPacket *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
        SeedPacket::SetDisabled(pSVar6,false);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18)
        ;
        UINewPVPTopZombieQueue::gettItem(pUVar4,iVar2);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
        FUN_04c375a8(lVar5 + 0x199);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18)
        ;
      }
      MessageRouter::Post((_func_void *)gMessageRouter);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* IntroWorldCup::onLoadComplete() */

void __thiscall IntroWorldCup::onLoadComplete(IntroWorldCup *this)

{
  setState(this,0);
  return;
}


/* IntroWorldCup::startIntro() */

void __thiscall IntroWorldCup::startIntro(IntroWorldCup *this)

{
  setState(this,1);
  return;
}


/* IntroWorldCup::onGameplayStarted() */

void __thiscall IntroWorldCup::onGameplayStarted(IntroWorldCup *this)

{
  setState(this,2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroWorldCup::onUpdate() */

void __thiscall IntroWorldCup::onUpdate(IntroWorldCup *this)

{
  RtWeakPtr *pRVar1;
  long lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  AnimationController *pAVar7;
  ulong uVar8;
  long *plVar9;
  StandaloneEffect *pSVar10;
  undefined8 *puVar11;
  AnimationMgr *this_00;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  undefined8 local_10;
  
  lVar2 = ___stack_chk_guard;
  pRVar1 = (RtWeakPtr *)(this + 0x68);
  bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar1);
  if ((bVar3) && (cVar4 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)pRVar1), cVar4 != '\0')) {
    this_00 = (AnimationMgr *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    AnimationMgr::Update(this_00);
  }
  if (this[0xb0] == (IntroWorldCup)0x0) {
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    fVar15 = (float)FUN_04c374cc(*(undefined4 *)(lVar6 + 0x10));
    iVar5 = *(int *)(this + 0x58);
    if (iVar5 != 2) goto LAB_04c3c0c0;
LAB_04c3c314:
    pAVar7 = (AnimationController *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60));
    if (*(code **)(*(long *)pAVar7 + 0x78) == AnimationController::IsAnimDone) {
      cVar4 = AnimationController::IsAnimDone(pAVar7,fVar15);
    }
    else {
      cVar4 = (**(code **)(*(long *)pAVar7 + 0x78))();
    }
    if (cVar4 == '\0') {
LAB_04c3c144:
      bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x70));
      if ((bVar3) &&
         (cVar4 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x70)), cVar4 != '\0')) {
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60));
        GetCarrierOffset();
        *(undefined8 *)(lVar6 + 0x30) = local_10;
      }
    }
  }
  else {
    fVar16 = *(float *)(this + 0xb4);
    fVar15 = (float)PVZ_T();
    if (fVar16 - fVar15 <= 0.0) {
      this[0xb0] = (IntroWorldCup)0x0;
      *(undefined4 *)(this + 0xb8) = 0;
    }
    else {
      *(float *)(this + 0xb8) = fVar16 - fVar15;
    }
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    fVar15 = (float)FUN_04c374cc(*(undefined4 *)(lVar6 + 0x10));
    iVar5 = *(int *)(this + 0x58);
    if (iVar5 == 2) goto LAB_04c3c314;
LAB_04c3c0c0:
    if (iVar5 == 4) {
      pAVar7 = (AnimationController *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60));
      if (*(code **)(*(long *)pAVar7 + 0x78) == AnimationController::IsAnimDone) {
        cVar4 = AnimationController::IsAnimDone(pAVar7,fVar15);
      }
      else {
        cVar4 = (**(code **)(*(long *)pAVar7 + 0x78))();
      }
      if (cVar4 != '\0') {
        setTutorialState(this,5);
      }
    }
    else if (iVar5 == 1) {
      pAVar7 = (AnimationController *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60));
      if (*(code **)(*(long *)pAVar7 + 0x78) == AnimationController::IsAnimDone) {
        cVar4 = AnimationController::IsAnimDone(pAVar7,fVar15);
      }
      else {
        cVar4 = (**(code **)(*(long *)pAVar7 + 0x78))();
      }
      if (cVar4 == '\0') goto LAB_04c3c144;
      setTutorialState(this,2);
    }
  }
  if (*(int *)(this + 0x4c) == 4) {
    uVar13 = *(undefined8 *)(this + 0x78);
    uVar12 = 0;
    uVar14 = *(undefined8 *)(this + 0x80);
    bVar3 = true;
    uVar8 = FUN_04c37518(uVar13,uVar14);
    if (uVar8 != 0) {
      do {
        plVar9 = (long *)FUN_04c37524(uVar13,uVar12);
        if (*plVar9 != 0) {
          IntroWorldCupIconWidget::onUpdate();
          uVar13 = *(undefined8 *)(this + 0x78);
          plVar9 = (long *)FUN_04c37524(uVar13,uVar12);
          cVar4 = FUN_04c374d0(*(undefined1 *)(*plVar9 + 0x58));
          uVar14 = *(undefined8 *)(this + 0x80);
          if (cVar4 == '\0') {
            bVar3 = false;
          }
          uVar8 = FUN_04c37518(uVar13,uVar14);
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar8);
    }
    if (bVar3) {
      if (*(int *)(this + 0xa4) == 1) {
        CreateIntroEffect(this);
      }
      else {
        uVar12 = 0;
        if (*(int *)(this + 0xa4) == 2) {
          for (; uVar12 < uVar8; uVar12 = uVar12 + 1) {
            puVar11 = (undefined8 *)FUN_04c37524(uVar13,uVar12);
            if ((IntroWorldCupIconWidget *)*puVar11 != (IntroWorldCupIconWidget *)0x0) {
              IntroWorldCupIconWidget::SetIsHidden((IntroWorldCupIconWidget *)*puVar11,true);
              uVar13 = *(undefined8 *)(this + 0x78);
              uVar14 = *(undefined8 *)(this + 0x80);
            }
            uVar8 = FUN_04c37518(uVar13,uVar14);
          }
          pRVar1 = (RtWeakPtr *)(this + 0x98);
          bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar1);
          if ((bVar3) &&
             (cVar4 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)pRVar1), cVar4 != '\0')) {
            pSVar10 = (StandaloneEffect *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
            StandaloneEffect::SetVisibility(pSVar10,false);
          }
          pRVar1 = (RtWeakPtr *)(this + 0xc0);
          bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar1);
          if ((bVar3) &&
             (cVar4 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)pRVar1), cVar4 != '\0')) {
            pSVar10 = (StandaloneEffect *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
            StandaloneEffect::SetVisibility(pSVar10,false);
          }
          setState(this,5);
          goto LAB_04c3c0dc;
        }
      }
    }
    cVar4 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x98));
    if (cVar4 != '\0') {
      pSVar10 = (StandaloneEffect *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x98));
      StandaloneEffect::Update(pSVar10);
    }
    cVar4 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0xc0));
    if (cVar4 != '\0') {
      pSVar10 = (StandaloneEffect *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xc0));
      StandaloneEffect::Update(pSVar10);
    }
  }
LAB_04c3c0dc:
  if (lVar2 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IntroWorldCup::onStartGameButtonPressed() */

void __thiscall IntroWorldCup::onStartGameButtonPressed(IntroWorldCup *this)

{
  setState(this,4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroWorldCup::registerForEvents() */

void __thiscall IntroWorldCup::registerForEvents(IntroWorldCup *this)

{
  undefined *puVar1;
  char cVar2;
  long lVar3;
  LevelModuleManager *pLVar4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  CBMemberTranslatorX aCStack_98 [24];
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
  cVar2 = LawnApp::IsInModule(gLawnApp,4);
  if (cVar2 == '\0') {
    lVar3 = LevelModule::getManager();
    FUN_04c374d4(lVar3 + 0x80);
    pLVar4 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,startIntro);
    Sexy::Delegate0::Delegate0<IntroWorldCup,void(IntroWorldCup::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnIntroStarted(pLVar4,aDStack_38);
    pLVar4 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onUpdate);
    Sexy::Delegate0::Delegate0<IntroWorldCup,void(IntroWorldCup::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnUpdate(pLVar4,aDStack_38);
    pLVar4 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,(_func_void *)0xf0);
    Sexy::Delegate0::Delegate0<IntroWorldCup,void(IntroWorldCup::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnLoadComplete(pLVar4,aDStack_38);
    pLVar4 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onGameplayStarted);
    Sexy::Delegate0::Delegate0<IntroWorldCup,void(IntroWorldCup::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnGameplayStarted(pLVar4,aDStack_38);
    pLVar4 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,addToRenderQueue);
    Sexy::Delegate1<RenderQueue*>::Delegate1<IntroWorldCup,void(IntroWorldCup::*)(RenderQueue*)>
              ((Delegate1<RenderQueue*> *)aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterAddToRenderQueue(pLVar4,aDStack_38);
    pLVar4 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onEndLevel);
    Sexy::Delegate0::Delegate0<IntroWorldCup,void(IntroWorldCup::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnLevelEnded(pLVar4,aDStack_38);
  }
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onStartGameButtonPressed);
  Sexy::Delegate0::Delegate0<IntroWorldCup,void(IntroWorldCup::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::StartGameButtonPressed,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantPlanted);
  local_c0 = local_80;
  uStack_b8 = uStack_78;
  local_b0 = local_70;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<IntroWorldCup,void(IntroWorldCup::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantPlanted,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantShoveled);
  local_b0 = local_58;
  local_c0 = local_68;
  uStack_b8 = uStack_60;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<IntroWorldCup,void(IntroWorldCup::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantShoveled,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyTutorialState);
  local_e0 = local_50;
  uStack_d8 = uStack_48;
  local_d0 = local_40;
  MessageRouter::Subscribe<int,Sexy::CBMemberTranslatorX<IntroWorldCup,void(IntroWorldCup::*)(int)>>
            ((MessageRouter *)puVar1,Message::NotifyTutorialState,&local_e0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyLeft30Seconds);
  Sexy::Delegate0::Delegate0<IntroWorldCup,void(IntroWorldCup::*)()>(aDStack_38,aCStack_98);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::NotifyLeft30Seconds,aDStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

