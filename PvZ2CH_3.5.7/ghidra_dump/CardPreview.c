// Class: CardPreview


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardPreview::Initialize() */

void __thiscall CardPreview::Initialize(CardPreview *this)

{
  undefined8 uVar1;
  string asStack_18 [8];
  string asStack_10 [8];
  SecretGachaMgr *local_8;
  
  local_8 = ___stack_chk_guard;
  SecretGachaMgr::GetScreenType(___stack_chk_guard);
  uVar1 = FUN_0547429c(asStack_18);
  Sexy::StrFormat("CardPreview_%s",asStack_10,uVar1);
  DNodeWidget::load((DNodeWidget *)this,asStack_10,false);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardPreview::get() */

undefined8 CardPreview::get(void)

{
  return s_pWidgetHandler;
}


/* CardPreview::CardPreview() */

void __thiscall CardPreview::CardPreview(CardPreview *this)

{
  DNodeWidget::DNodeWidget((DNodeWidget *)this);
  *(undefined ***)this = &PTR_GetClass_0665b3d0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x138));
  return;
}


/* CardPreview::~CardPreview() */

void __thiscall CardPreview::~CardPreview(CardPreview *this)

{
  *(undefined ***)this = &PTR_GetClass_0665b3d0;
  s_pWidgetHandler = 0;
  std::vector<CardPreviewInfo,std::allocator<CardPreviewInfo>>::~vector
            ((vector<CardPreviewInfo,std::allocator<CardPreviewInfo>> *)(this + 0x138));
  DNodeWidget::~DNodeWidget((DNodeWidget *)this);
  return;
}


/* CardPreview::~CardPreview() */

void __thiscall CardPreview::~CardPreview(CardPreview *this)

{
  ~CardPreview(this);
  AK::FreeHook(this);
  return;
}


/* CardPreview::create(std::vector<CardPreviewInfo, std::allocator<CardPreviewInfo> > const&) */

CardPreview * CardPreview::create(vector *param_1)

{
  CardPreview *this;
  
  if (s_pWidgetHandler != (CardPreview *)0x0) {
    return s_pWidgetHandler;
  }
  this = ::operator_new(0x150);
  memset(this,0,0x150);
  CardPreview(this);
  std::vector<CardPreviewInfo,std::allocator<CardPreviewInfo>>::operator=
            ((vector<CardPreviewInfo,std::allocator<CardPreviewInfo>> *)(this + 0x138),param_1);
  (**(code **)(*(long *)this + 0x310))(this);
  (**(code **)(*(long *)this + 0x318))(this);
  (**(code **)(*(long *)this + 0x338))(this,1);
  s_pWidgetHandler = this;
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardPreview::CreateCard(int, int) */

void CardPreview::CreateCard(int param_1,int param_2)

{
  Card *pCVar1;
  long *plVar2;
  int in_w2;
  PIInterpolator *in_x8;
  int iVar3;
  DRefPtr<Card> aDStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::PIInterpolator::PIInterpolator(in_x8);
  if (0 < in_w2) {
    iVar3 = 0;
    do {
      iVar3 = iVar3 + 1;
      DRefPtr<Card>::DRefPtr(aDStack_10);
      pCVar1 = (Card *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_10);
      Card::InitPreview(pCVar1,param_2);
      plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_10);
      (**(code **)(*plVar2 + 0x338))(plVar2,0);
      plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_10);
      (**(code **)(*plVar2 + 0x170))(0x434d0000);
      plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_10);
      plVar2 = (long *)(**(code **)(*plVar2 + 0x110))(0xc0a00000,0xc0a00000);
      (**(code **)(*plVar2 + 0x130))(0,0);
      pCVar1 = (Card *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_10);
      DArray<Card*>::pushBack((DArray<Card*> *)in_x8,pCVar1);
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_10);
    } while (iVar3 != in_w2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardPreview::UserInit() */

void __thiscall CardPreview::UserInit(CardPreview *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  exception_ptr *this_01;
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  string *psVar5;
  DTouchLayer *pDVar6;
  DNodeLoaderConfig *this_02;
  DTouchLayer *pDVar7;
  int *piVar8;
  undefined8 *puVar9;
  long *plVar10;
  DMenu *this_03;
  code *pcVar11;
  CompiledMap aCStack_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  string asStack_40 [24];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x138);
  this_01 = (exception_ptr *)(this + 0xd8);
  local_8 = ___stack_chk_guard;
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  std::
  sort<__gnu_cxx::__normal_iterator<CardPreviewInfo*,std::vector<CardPreviewInfo,std::allocator<CardPreviewInfo>>>,bool(*)(CardPreviewInfo_const&,CardPreviewInfo_const&)>
            (uVar3,uVar4,sortByRarity);
  psVar5 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_01);
  std::string::string(asStack_40,"displayTitle");
  pDVar6 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar5);
  std::string::~string(asStack_40);
  nop();
  if (pDVar6 != (DTouchLayer *)0x0) {
    (**(code **)(*(long *)pDVar6 + 0x338))(pDVar6,&DAT_055b4e98);
  }
  this_02 = (DNodeLoaderConfig *)DNodeWidget::getLoader((DNodeWidget *)this);
  std::string::string(asStack_40,"scrollViewContainer");
  DNodeLoaderConfig::loadNode<DTouchLayer>(this_02,asStack_40,(DTransformNode *)0x0);
  std::string::~string(asStack_40);
  nop();
  cVar1 = Sexy::CompiledMap::Initialized(aCStack_68);
  if (cVar1 != '\0') {
    local_60 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_00);
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_60,(__normal_iterator *)&local_58);
    if (bVar2) {
      do {
        piVar8 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
        CreateCard((int)this,*piVar8);
        local_50 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>((vector *)asStack_40);
        local_48 = std::end<std::vector<DButton*,std::allocator<DButton*>>>((vector *)asStack_40);
        while (bVar2 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48),
              bVar2) {
          puVar9 = (undefined8 *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
          plVar10 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_68)
          ;
          (**(code **)(*plVar10 + 0x30))(plVar10,*puVar9);
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
        }
        DArray<Card*>::~DArray((DArray<Card*> *)asStack_40);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_60);
        bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_60,(__normal_iterator *)&local_58)
        ;
      } while (bVar2);
    }
    this_03 = (DMenu *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_68);
    DMenu::align(this_03,3,210.0,210.0,10.0,46.0);
  }
  psVar5 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_01);
  std::string::string(asStack_40,"scrollView");
  pDVar6 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar5);
  std::string::~string(asStack_40);
  nop();
  if (pDVar6 != (DTouchLayer *)0x0) {
    pDVar7 = (DTouchLayer *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_68)
    ;
    DScrollView::setContainer((DScrollView *)pDVar6,pDVar7);
  }
  psVar5 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_01);
  std::string::string(asStack_40,"btnClose");
  pDVar6 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar5);
  std::string::~string(asStack_40);
  nop();
  if (pDVar6 != (DTouchLayer *)0x0) {
    pcVar11 = *(code **)(*(long *)pDVar6 + 0x350);
    FUN_0356451c(afStack_28,this);
    (*pcVar11)(pDVar6,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  }
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aCStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

