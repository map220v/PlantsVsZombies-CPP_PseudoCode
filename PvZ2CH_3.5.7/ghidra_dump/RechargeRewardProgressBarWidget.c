// Class: RechargeRewardProgressBarWidget


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeRewardProgressBarWidget::DrawCashAmount(Sexy::Graphics*, int, int, int) */

void __thiscall
RechargeRewardProgressBarWidget::DrawCashAmount
          (RechargeRewardProgressBarWidget *this,Graphics *param_1,int param_2,int param_3,
          int param_4)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  LotteryResultProgressBar *pLVar4;
  undefined8 uVar5;
  Image *pIVar6;
  SalesProgressBar *pSVar7;
  int iVar8;
  ulong uVar9;
  string asStack_28 [8];
  string asStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (0 < param_2) {
    iVar1 = FUN_049e37f4(2);
    iVar8 = 0;
    Sexy::StrFormat("%d",asStack_28,(ulong)(uint)param_2);
    uVar9 = 0;
    while( true ) {
      uVar3 = FUN_05474178(asStack_28);
      if (uVar3 <= uVar9) break;
      FUN_05475ffc(asStack_20,asStack_28,uVar9,1);
      uVar5 = FUN_0547429c(asStack_20);
      Sexy::StrFormat("IMAGE_UI_RECHARGEREWARD_%s",asStack_10,uVar5);
      GetImageByName(asStack_10);
      std::string::~string(asStack_10);
      pLVar4 = (LotteryResultProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar4);
      iVar8 = iVar8 + (iVar2 - iVar1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      std::string::~string(asStack_20);
      uVar9 = uVar9 + 1;
    }
    pLVar4 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b77438);
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar4);
    iVar8 = param_3 - (iVar2 + iVar8);
    uVar9 = 0;
    while( true ) {
      uVar3 = FUN_05474178(asStack_28);
      if (uVar3 <= uVar9) break;
      FUN_05475ffc(asStack_20,asStack_28,uVar9,1);
      uVar5 = FUN_0547429c(asStack_20);
      Sexy::StrFormat("IMAGE_UI_RECHARGEREWARD_%s",asStack_10,uVar5);
      GetImageByName(asStack_10);
      std::string::~string(asStack_10);
      pIVar6 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      pSVar7 = (SalesProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      iVar2 = SalesProgressBar::GetCurrentLevel(pSVar7);
      Sexy::Graphics::DrawImage(param_1,pIVar6,iVar8,param_4 - iVar2 / 2);
      pLVar4 = (LotteryResultProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar4);
      iVar8 = iVar8 + (iVar2 - iVar1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      std::string::~string(asStack_20);
      uVar9 = uVar9 + 1;
    }
    pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b77438);
    pSVar7 = (SalesProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b77438);
    iVar1 = SalesProgressBar::GetCurrentLevel(pSVar7);
    Sexy::Graphics::DrawImage(param_1,pIVar6,iVar8,param_4 - iVar1 / 2);
    std::string::~string(asStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RechargeRewardProgressBarWidget::RechargeRewardProgressBarWidget() */

void __thiscall
RechargeRewardProgressBarWidget::RechargeRewardProgressBarWidget
          (RechargeRewardProgressBarWidget *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined ***)this = &PTR_GetClass_0692ab90;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe0));
  this[0x59] = (RechargeRewardProgressBarWidget)0x0;
  return;
}


/* RechargeRewardProgressBarWidget::~RechargeRewardProgressBarWidget() */

void __thiscall
RechargeRewardProgressBarWidget::~RechargeRewardProgressBarWidget
          (RechargeRewardProgressBarWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_0692ab90;
  std::vector<RechargeRewardContentConfig,std::allocator<RechargeRewardContentConfig>>::~vector
            ((vector<RechargeRewardContentConfig,std::allocator<RechargeRewardContentConfig>> *)
             (this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* RechargeRewardProgressBarWidget::~RechargeRewardProgressBarWidget() */

void __thiscall
RechargeRewardProgressBarWidget::~RechargeRewardProgressBarWidget
          (RechargeRewardProgressBarWidget *this)

{
  ~RechargeRewardProgressBarWidget(this);
  AK::FreeHook(this);
  return;
}


/* RechargeRewardProgressBarWidget::setBar(RechargeRewardProgressBar*) */

void __thiscall
RechargeRewardProgressBarWidget::setBar
          (RechargeRewardProgressBarWidget *this,RechargeRewardProgressBar *param_1)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  vector *pvVar1;
  
  *(RechargeRewardProgressBar **)(this + 0xd8) = param_1;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)LawnApp::GetRechargeRewardConfigInfo(gLawnApp);
  pvVar1 = (vector *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_00);
  std::vector<RechargeRewardContentConfig,std::allocator<RechargeRewardContentConfig>>::operator=
            ((vector<RechargeRewardContentConfig,std::allocator<RechargeRewardContentConfig>> *)
             (this + 0xe0),pvVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeRewardProgressBarWidget::Draw(Sexy::Graphics*) */

void __thiscall
RechargeRewardProgressBarWidget::Draw(RechargeRewardProgressBarWidget *this,Graphics *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  SalesProgressBar *this_00;
  long lVar6;
  LotteryResultProgressBar *this_01;
  undefined8 local_30;
  undefined8 local_28;
  int local_20;
  undefined4 local_1c;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0xd8) != 0) {
    Sexy::Insets::Insets((Insets *)&local_28,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    Sexy::Insets::Insets(aIStack_18,(Insets *)&local_28);
    uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b77018);
    Draw3SliceImage(param_1,aIStack_18,uVar5);
    local_20 = RechargeRewardProgressBar::calcucateProgressBarWidth
                         (*(RechargeRewardProgressBar **)(this + 0xd8),*(int *)(this + 0x50));
    this_00 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76ff0);
    local_1c = SalesProgressBar::GetCurrentLevel(this_00);
    if (0 < local_20) {
      Sexy::Insets::Insets(aIStack_18,(Insets *)&local_28);
      uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76ff0);
      Draw3SliceImage(param_1,aIStack_18,uVar5);
    }
  }
  nop();
  iVar3 = FUN_049e37f4(10);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0xe0));
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0xe0));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar2) {
    lVar6 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    iVar1 = *(int *)(lVar6 + 0x34);
    GetImageByName((string *)(lVar6 + 0x28));
    this_01 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_18);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(this_01);
    iVar3 = iVar3 + iVar4;
    iVar4 = FUN_049e37f4(0xfffffffe);
    DrawCashAmount(this,param_1,iVar1,iVar3,iVar4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_18);
    eastl::generic_iterator<EA::Text::Typesetter::Item*,void>::operator++
              ((generic_iterator<EA::Text::Typesetter::Item*,void> *)&local_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

