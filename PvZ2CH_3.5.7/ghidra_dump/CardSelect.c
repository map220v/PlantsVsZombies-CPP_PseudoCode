// Class: CardSelect


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardSelect::Initialize() */

void __thiscall CardSelect::Initialize(CardSelect *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"CardSelect");
  DNodeWidget::load((DNodeWidget *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardSelect::get() */

undefined8 CardSelect::get(void)

{
  return s_pWidgetHandler;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardSelect::CreateMark(DTransformNode*) */

void CardSelect::CreateMark(DTransformNode *param_1)

{
  DTransformNode *this;
  long *plVar1;
  char *__s;
  long *in_x1;
  DRefPtr<DSpriteNode> *in_x8;
  code *pcVar2;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_20,"IMAGE_UI_CARD_GAME_CHECK_MARK");
  nop();
  DRefPtr<DSpriteNode>::DRefPtr(in_x8);
  this = (DTransformNode *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)in_x8);
  std::string::string(asStack_18,"markNode");
  plVar1 = (long *)DTransformNode::setName(this,asStack_18);
  pcVar2 = *(code **)(*plVar1 + 0x2e8);
  __s = (char *)FUN_0547429c(asStack_20);
  std::string::string(asStack_10,__s);
  (*pcVar2)(plVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)in_x8);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  (**(code **)(*in_x1 + 0xd0))(asStack_10,0x3f000000,0x3f000000);
  plVar1 = (long *)(*pcVar2)(plVar1,asStack_10);
  (**(code **)(*plVar1 + 0x130))(0x3f000000,0x3f000000);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)in_x8);
  (**(code **)(*plVar1 + 0x1a0))(plVar1,1);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)in_x8);
  (**(code **)(*plVar1 + 0xd8))(plVar1,0);
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardSelect::CardSelect() */

void __thiscall CardSelect::CardSelect(CardSelect *this)

{
  DNodeWidget::DNodeWidget((DNodeWidget *)this);
  *(undefined ***)this = &PTR_GetClass_0665d500;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x138));
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)(this + 0x150));
  return;
}


/* CardSelect::~CardSelect() */

void __thiscall CardSelect::~CardSelect(CardSelect *this)

{
  *(undefined ***)this = &PTR_GetClass_0665d500;
  s_pWidgetHandler = 0;
  DArray<Card*>::~DArray((DArray<Card*> *)(this + 0x150));
  std::vector<CardGameCardInfo,std::allocator<CardGameCardInfo>>::~vector
            ((vector<CardGameCardInfo,std::allocator<CardGameCardInfo>> *)(this + 0x138));
  DNodeWidget::~DNodeWidget((DNodeWidget *)this);
  return;
}


/* CardSelect::~CardSelect() */

void __thiscall CardSelect::~CardSelect(CardSelect *this)

{
  ~CardSelect(this);
  AK::FreeHook(this);
  return;
}


/* CardSelect::create(std::vector<CardGameCardInfo, std::allocator<CardGameCardInfo> > const&) */

CardSelect * CardSelect::create(vector *param_1)

{
  CardSelect *this;
  
  if (s_pWidgetHandler != (CardSelect *)0x0) {
    return s_pWidgetHandler;
  }
  this = ::operator_new(0x168);
  CardSelect(this);
  std::vector<CardGameCardInfo,std::allocator<CardGameCardInfo>>::operator=
            ((vector<CardGameCardInfo,std::allocator<CardGameCardInfo>> *)(this + 0x138),param_1);
  (**(code **)(*(long *)this + 0x310))(this);
  (**(code **)(*(long *)this + 0x318))(this);
  (**(code **)(*(long *)this + 0x338))(this,1);
  s_pWidgetHandler = this;
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardSelect::CreateCard(int, int) */

void CardSelect::CreateCard(int param_1,int param_2)

{
  int iVar1;
  DTransformNode *pDVar2;
  CardGameBoardConfig *pCVar3;
  Card *pCVar4;
  long *plVar5;
  undefined8 uVar6;
  int in_w2;
  PIInterpolator *in_x8;
  int iVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  DRefPtr<Card> aDStack_40 [8];
  string asStack_38 [8];
  DTransformNode *local_30;
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  pDVar2 = (DTransformNode *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  pCVar3 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
  std::string::string(asStack_38,"CardSelectDisplayX");
  uVar9 = CardGameBoardConfig::GetCommonConfigValue(pCVar3,asStack_38,-5.0);
  std::string::~string(asStack_38);
  nop();
  Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  pCVar3 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
  std::string::string(asStack_38,"CardSelectDisplayY");
  uVar10 = CardGameBoardConfig::GetCommonConfigValue(pCVar3,asStack_38,-5.0);
  std::string::~string(asStack_38);
  nop();
  Sexy::PIInterpolator::PIInterpolator(in_x8);
  if (0 < in_w2) {
    iVar7 = 0;
    do {
      DRefPtr<Card>::DRefPtr(aDStack_40);
      pCVar4 = (Card *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_40);
      Card::InitPreview(pCVar4,param_2);
      plVar5 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_40);
      plVar5 = (long *)(**(code **)(*plVar5 + 0x110))(uVar9,uVar10);
      (**(code **)(*plVar5 + 0x130))(0,0);
      pCVar4 = (Card *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_40);
      iVar1 = iVar7 + 1;
      Card::SetHandPosition(pCVar4,iVar7);
      plVar5 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_40);
      pcVar8 = *(code **)(*plVar5 + 0x30);
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_40);
      CreateMark(pDVar2);
      uVar6 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_38);
      (*pcVar8)(plVar5,uVar6);
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)asStack_38);
      plVar5 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_40);
      pcVar8 = *(code **)(*plVar5 + 0x350);
      DRefPtr<DSprite9SliceNode>::DRefPtr
                ((DRefPtr<DSprite9SliceNode> *)asStack_38,(DRefPtr *)aDStack_40);
      local_30 = pDVar2;
      FUN_0357b6d4(afStack_28,asStack_38);
      (*pcVar8)(plVar5,afStack_28);
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
      std::_Destroy<DRefPtr<DSpriteNode>>((DRefPtr *)asStack_38);
      pCVar4 = (Card *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_40);
      DArray<Card*>::pushBack((DArray<Card*> *)in_x8,pCVar4);
      pCVar4 = (Card *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_40);
      DArray<Card*>::pushBack((DArray<Card*> *)(pDVar2 + 0x150),pCVar4);
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_40);
      iVar7 = iVar1;
    } while (iVar1 != in_w2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardSelect::UserInit() */

void __thiscall CardSelect::UserInit(CardSelect *this)

{
  exception_ptr *this_00;
  char cVar1;
  bool bVar2;
  string *psVar3;
  DTouchLayer *pDVar4;
  DNodeLoaderConfig *this_01;
  DTouchLayer *pDVar5;
  int *piVar6;
  undefined8 *puVar7;
  long *plVar8;
  CardGameBoardConfig *pCVar9;
  DMenu *this_02;
  code *pcVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  CompiledMap aCStack_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  float local_48;
  float local_44;
  string asStack_40 [24];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  this_00 = (exception_ptr *)(this + 0xd8);
  local_8 = ___stack_chk_guard;
  psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string(asStack_40,"displayTitle");
  pDVar4 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar3);
  std::string::~string(asStack_40);
  nop();
  if (pDVar4 != (DTouchLayer *)0x0) {
    (**(code **)(*(long *)pDVar4 + 0x338))(pDVar4,&DAT_055b62d0);
  }
  this_01 = (DNodeLoaderConfig *)DNodeWidget::getLoader((DNodeWidget *)this);
  std::string::string(asStack_40,"scrollViewContainer");
  DNodeLoaderConfig::loadNode<DTouchLayer>(this_01,asStack_40,(DTransformNode *)0x0);
  std::string::~string(asStack_40);
  nop();
  cVar1 = Sexy::CompiledMap::Initialized(aCStack_70);
  if (cVar1 != '\0') {
    fVar17 = 0.0;
    iVar11 = 0;
    local_68 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x138));
    local_60 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x138));
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_68,(__normal_iterator *)&local_60);
    fVar18 = fVar17;
    if (bVar2) {
      do {
        piVar6 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
        CreateCard((int)this,*piVar6);
        local_58 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>((vector *)asStack_40);
        local_50 = std::end<std::vector<DButton*,std::allocator<DButton*>>>((vector *)asStack_40);
        while (bVar2 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50),
              bVar2) {
          puVar7 = (undefined8 *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
          Card::SetHandPosition((Card *)*puVar7,iVar11);
          (**(code **)(*(long *)*puVar7 + 0x218))(&local_48,(long *)*puVar7);
          fVar18 = local_48;
          (**(code **)(*(long *)*puVar7 + 0x218))(&local_48,(long *)*puVar7);
          fVar17 = local_44;
          plVar8 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_70);
          (**(code **)(*plVar8 + 0x30))(plVar8,*puVar7);
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
          iVar11 = iVar11 + 1;
        }
        DArray<Card*>::~DArray((DArray<Card*> *)asStack_40);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_68);
        bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_68,(__normal_iterator *)&local_60)
        ;
      } while (bVar2);
    }
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    pCVar9 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
    std::string::string(asStack_40,"CardSelectNumPerCol");
    fVar12 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar9,asStack_40,3.0);
    std::string::~string(asStack_40);
    nop();
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    pCVar9 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
    std::string::string(asStack_40,"CardSelectItemWidthOffset");
    fVar13 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar9,asStack_40,5.0);
    std::string::~string(asStack_40);
    nop();
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    pCVar9 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
    std::string::string(asStack_40,"CardSelectItemHeightOffset");
    fVar14 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar9,asStack_40,5.0);
    std::string::~string(asStack_40);
    nop();
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    pCVar9 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
    std::string::string(asStack_40,"CardSelectItemGapX");
    fVar15 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar9,asStack_40,10.0);
    std::string::~string(asStack_40);
    nop();
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    pCVar9 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
    std::string::string(asStack_40,"CardSelectItemGapY");
    fVar16 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar9,asStack_40,30.0);
    std::string::~string(asStack_40);
    nop();
    this_02 = (DMenu *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_70);
    DMenu::align(this_02,(int)fVar12,fVar13 + fVar18,fVar14 + fVar17,fVar15,fVar16);
  }
  psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string(asStack_40,"scrollView");
  pDVar4 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar3);
  std::string::~string(asStack_40);
  nop();
  if (pDVar4 != (DTouchLayer *)0x0) {
    pDVar5 = (DTouchLayer *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_70)
    ;
    DScrollView::setContainer((DScrollView *)pDVar4,pDVar5);
  }
  psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string(asStack_40,"btnSave");
  pDVar4 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar3);
  std::string::~string(asStack_40);
  nop();
  if (pDVar4 != (DTouchLayer *)0x0) {
    (**(code **)(*(long *)pDVar4 + 0x338))(pDVar4,0);
    pcVar10 = *(code **)(*(long *)pDVar4 + 0x350);
    FUN_03578a64(afStack_28,this);
    (*pcVar10)(pDVar4,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  }
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aCStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

