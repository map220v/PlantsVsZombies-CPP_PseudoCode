// Class: CardDisplay


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardDisplay::Initialize() */

void __thiscall CardDisplay::Initialize(CardDisplay *this)

{
  undefined8 uVar1;
  string asStack_18 [8];
  string asStack_10 [8];
  SecretGachaMgr *local_8;
  
  local_8 = ___stack_chk_guard;
  SecretGachaMgr::GetScreenType(___stack_chk_guard);
  uVar1 = FUN_0547429c(asStack_18);
  Sexy::StrFormat("CardDisplay_%s",asStack_10,uVar1);
  DNodeWidget::load((DNodeWidget *)this,asStack_10,false);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardDisplay::get() */

undefined8 CardDisplay::get(void)

{
  return s_pWidgetHandler;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardDisplay::getRect() */

void CardDisplay::getRect(void)

{
  long in_x0;
  string *psVar1;
  DTouchLayer *pDVar2;
  long lVar3;
  float *pfVar4;
  Rectangle *in_x8;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(in_x0 + 0xd8));
  std::string::string(asStack_10,"dialog");
  pDVar2 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar1);
  std::string::~string(asStack_10);
  nop();
  fVar5 = (float)(**(code **)(*(long *)pDVar2 + 0x1d0))(pDVar2);
  fVar5 = (float)Sexy::SexyMath::Fabs(fVar5);
  fVar6 = (float)(**(code **)(*(long *)pDVar2 + 0x1d8))(pDVar2);
  fVar6 = (float)Sexy::SexyMath::Fabs(fVar6);
  fVar7 = (float)(**(code **)(*(long *)pDVar2 + 0x1c0))(pDVar2);
  lVar3 = (**(code **)(*(long *)pDVar2 + 0x1f8))(pDVar2);
  fVar11 = *(float *)(lVar3 + 8);
  pfVar4 = (float *)(**(code **)(*(long *)pDVar2 + 0x200))(pDVar2);
  fVar13 = *pfVar4;
  fVar8 = (float)(**(code **)(*(long *)pDVar2 + 0x1c8))(pDVar2);
  lVar3 = (**(code **)(*(long *)pDVar2 + 0x1f8))(pDVar2);
  fVar12 = *(float *)(lVar3 + 0xc);
  lVar3 = (**(code **)(*(long *)pDVar2 + 0x200))(pDVar2);
  fVar9 = *(float *)(lVar3 + 4);
  lVar3 = (**(code **)(*(long *)pDVar2 + 0x1f8))(pDVar2);
  fVar10 = *(float *)(lVar3 + 8);
  lVar3 = (**(code **)(*(long *)pDVar2 + 0x1f8))(pDVar2);
  EA::Text::Rectangle::Rectangle
            (in_x8,fVar7 - fVar5 * fVar11 * fVar13,fVar8 - fVar6 * fVar12 * fVar9,fVar5 * fVar10,
             fVar6 * *(float *)(lVar3 + 0xc));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardDisplay::TryRemoveSelf(Sexy::Touch const&) */

void __thiscall CardDisplay::TryRemoveSelf(CardDisplay *this,Touch *param_1)

{
  char cVar1;
  string *psVar2;
  DTouchLayer *this_00;
  long *plVar3;
  float local_20;
  float local_1c;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar2 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  std::string::string(asStack_18,"dialog");
  this_00 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar2);
  std::string::~string(asStack_18);
  nop();
  if (*(code **)(*(long *)this_00 + 0x238) == DTransformNode::getParent) {
    plVar3 = (long *)DTransformNode::getParent((DTransformNode *)this_00);
  }
  else {
    plVar3 = (long *)(**(code **)(*(long *)this_00 + 0x238))();
  }
  (**(code **)(*plVar3 + 0xb0))(&local_20,plVar3,param_1);
  getRect();
  cVar1 = Sexy::TRect<float>::Contains((TRect<float> *)asStack_18,local_20,local_1c);
  if (cVar1 == '\0') {
    (**(code **)(*(long *)this + 0x348))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardDisplay::CardDisplay() */

void __thiscall CardDisplay::CardDisplay(CardDisplay *this)

{
  DNodeWidget::DNodeWidget((DNodeWidget *)this);
  *(undefined ***)this = &PTR_GetClass_0665cd00;
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)(this + 0x138));
  return;
}


/* CardDisplay::~CardDisplay() */

void __thiscall CardDisplay::~CardDisplay(CardDisplay *this)

{
  *(undefined ***)this = &PTR_GetClass_0665cd00;
  s_pWidgetHandler = 0;
  DArray<Card*>::~DArray((DArray<Card*> *)(this + 0x138));
  DNodeWidget::~DNodeWidget((DNodeWidget *)this);
  return;
}


/* CardDisplay::~CardDisplay() */

void __thiscall CardDisplay::~CardDisplay(CardDisplay *this)

{
  ~CardDisplay(this);
  AK::FreeHook(this);
  return;
}


/* CardDisplay::create(DArray<Card*> const&, bool) */

CardDisplay * CardDisplay::create(DArray *param_1,bool param_2)

{
  CardDisplay *this;
  
  if (s_pWidgetHandler != (CardDisplay *)0x0) {
    return s_pWidgetHandler;
  }
  this = ::operator_new(0x150);
  memset(this,0,0x150);
  CardDisplay(this);
  DArray<Card*>::operator=((DArray<Card*> *)(this + 0x138),param_1);
  m_isLibrary = param_2;
  (**(code **)(*(long *)this + 0x310))(this);
  (**(code **)(*(long *)this + 0x318))(this);
  (**(code **)(*(long *)this + 0x338))(this,1);
  s_pWidgetHandler = this;
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardDisplay::UserInit() */

void __thiscall CardDisplay::UserInit(CardDisplay *this)

{
  exception_ptr *this_00;
  char cVar1;
  bool bVar2;
  int iVar3;
  string *psVar4;
  DTouchLayer *pDVar5;
  DNodeLoaderConfig *this_01;
  DTouchLayer *pDVar6;
  long *plVar7;
  DTouchCloseLayer *pDVar8;
  undefined8 uVar9;
  CardGameBoardConfig *pCVar10;
  undefined8 *puVar11;
  DMenu *this_02;
  undefined *puVar12;
  code *pcVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  CompiledMap aCStack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  this_00 = (exception_ptr *)(this + 0xd8);
  local_8 = ___stack_chk_guard;
  psVar4 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string((string *)&local_30,"displayTitle");
  pDVar5 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar4);
  std::string::~string((string *)&local_30);
  nop();
  if (pDVar5 != (DTouchLayer *)0x0) {
    if (m_isLibrary == '\0') {
      puVar12 = &DAT_055b61c8;
    }
    else {
      puVar12 = &DAT_055b4e98;
    }
    (**(code **)(*(long *)pDVar5 + 0x338))(pDVar5,puVar12);
  }
  this_01 = (DNodeLoaderConfig *)DNodeWidget::getLoader((DNodeWidget *)this);
  std::string::string((string *)&local_30,"scrollViewContainer");
  DNodeLoaderConfig::loadNode<DTouchLayer>(this_01,(string *)&local_30,(DTransformNode *)0x0);
  std::string::~string((string *)&local_30);
  nop();
  cVar1 = Sexy::CompiledMap::Initialized(aCStack_40);
  if (cVar1 != '\0') {
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    pCVar10 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
    std::string::string((string *)&local_30,"CardDisplayDisplayWidth");
    uVar14 = CardGameBoardConfig::GetCommonConfigValue(pCVar10,(string *)&local_30,205.0);
    std::string::~string((string *)&local_30);
    nop();
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    pCVar10 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
    std::string::string((string *)&local_30,"CardDisplayDisplayX");
    uVar15 = CardGameBoardConfig::GetCommonConfigValue(pCVar10,(string *)&local_30,-5.0);
    std::string::~string((string *)&local_30);
    nop();
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    pCVar10 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
    std::string::string((string *)&local_30,"CardDisplayDisplayY");
    uVar16 = CardGameBoardConfig::GetCommonConfigValue(pCVar10,(string *)&local_30,-5.0);
    std::string::~string((string *)&local_30);
    nop();
    local_38 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this + 0x138));
    local_30 = std::end<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this + 0x138));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar2)
    {
      puVar11 = (undefined8 *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
      Card::SetDisabledNode((Card *)*puVar11,false);
      (**(code **)(*(long *)*puVar11 + 0x338))((long *)*puVar11,0);
      (**(code **)(*(long *)*puVar11 + 0x170))(uVar14,(long *)*puVar11);
      plVar7 = (long *)(**(code **)(*(long *)*puVar11 + 0x110))(uVar15,uVar16,(long *)*puVar11);
      (**(code **)(*plVar7 + 0x130))(0,0);
      plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_40);
      (**(code **)(*plVar7 + 0x30))(plVar7,*puVar11);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
    }
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    pCVar10 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
    std::string::string((string *)&local_30,"CardDisplayNumPerCol");
    fVar17 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar10,(string *)&local_30,3.0);
    std::string::~string((string *)&local_30);
    nop();
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    pCVar10 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
    std::string::string((string *)&local_30,"CardDisplayItemWidth");
    fVar18 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar10,(string *)&local_30,210.0);
    std::string::~string((string *)&local_30);
    nop();
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    pCVar10 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
    std::string::string((string *)&local_30,"CardDisplayItemHeight");
    fVar19 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar10,(string *)&local_30,210.0);
    std::string::~string((string *)&local_30);
    nop();
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    pCVar10 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
    std::string::string((string *)&local_30,"CardDisplayItemGapX");
    fVar20 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar10,(string *)&local_30,10.0);
    std::string::~string((string *)&local_30);
    nop();
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    pCVar10 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
    std::string::string((string *)&local_30,"CardDisplayItemGapY");
    fVar21 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar10,(string *)&local_30,30.0);
    std::string::~string((string *)&local_30);
    nop();
    this_02 = (DMenu *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_40);
    DMenu::align(this_02,(int)(float)(int)fVar17,fVar18,fVar19,fVar20,fVar21);
  }
  psVar4 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string((string *)&local_30,"scrollView");
  pDVar5 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar4);
  std::string::~string((string *)&local_30);
  nop();
  if (pDVar5 != (DTouchLayer *)0x0) {
    pDVar6 = (DTouchLayer *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_40)
    ;
    DScrollView::setContainer((DScrollView *)pDVar5,pDVar6);
  }
  psVar4 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string((string *)&local_30,"root");
  pDVar5 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar4);
  std::string::~string((string *)&local_30);
  nop();
  if (pDVar5 != (DTouchLayer *)0x0) {
    psVar4 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
    std::string::string((string *)&local_30,"dialog");
    pDVar6 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar4);
    std::string::~string((string *)&local_30);
    nop();
    DRefPtr<DTouchCloseLayer>::DRefPtr((DRefPtr<DTouchCloseLayer> *)&local_38);
    plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    plVar7 = (long *)(**(code **)(*plVar7 + 0x110))(0,0);
    plVar7 = (long *)(**(code **)(*plVar7 + 0x130))(0,0);
    pcVar13 = *(code **)(*plVar7 + 0x210);
    (**(code **)(*(long *)pDVar5 + 0x218))((string *)&local_30,pDVar5);
    (*pcVar13)(plVar7,(string *)&local_30);
    pDVar8 = (DTouchCloseLayer *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    FUN_03578950(afStack_28,this);
    DTouchCloseLayer::onTouchEndedCallback(pDVar8,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
    pcVar13 = *(code **)(*(long *)pDVar5 + 0x28);
    uVar9 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    if (*(code **)(*(long *)pDVar6 + 0xf8) == DTransformNode::getZOrder) {
      iVar3 = DTransformNode::getZOrder((DTransformNode *)pDVar6);
    }
    else {
      iVar3 = (**(code **)(*(long *)pDVar6 + 0xf8))();
    }
    (*pcVar13)(pDVar5,uVar9,iVar3 + -1);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)&local_38);
  }
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aCStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

