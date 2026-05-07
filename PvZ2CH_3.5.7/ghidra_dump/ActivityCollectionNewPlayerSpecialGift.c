// Class: ActivityCollectionNewPlayerSpecialGift


/* ActivityCollectionNewPlayerSpecialGift::GetLockDesc() */

void __thiscall
ActivityCollectionNewPlayerSpecialGift::GetLockDesc(ActivityCollectionNewPlayerSpecialGift *this)

{
  TodStringTranslate(L"[NEWPLAYER_COLLECTION_ACTIVITY_SPECIALGIFT_UNLOCK_DESC]");
  return;
}


/* ActivityCollectionNewPlayerSpecialGift::Draw(Sexy::Graphics*) */

void __thiscall
ActivityCollectionNewPlayerSpecialGift::Draw
          (ActivityCollectionNewPlayerSpecialGift *this,Graphics *param_1)

{
  nop();
  (**(code **)(*(long *)this + 0x328))(this,param_1);
  (**(code **)(*(long *)this + 0x330))
            (this,param_1,*(undefined4 *)(this + 0x108),*(undefined4 *)(this + 0x10c));
  (**(code **)(*(long *)this + 0x338))
            (this,param_1,*(undefined4 *)(this + 0x13c),*(undefined4 *)(this + 0x140));
  (**(code **)(*(long *)this + 0x340))
            (this,param_1,*(undefined4 *)(this + 0x1a8),*(undefined4 *)(this + 0x1ac));
  return;
}


/* ActivityCollectionNewPlayerSpecialGift::Refresh() */

void __thiscall
ActivityCollectionNewPlayerSpecialGift::Refresh(ActivityCollectionNewPlayerSpecialGift *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x200);
  if (*(int *)(this + 0x1fc) == 0) {
    (**(code **)(*plVar1 + 0x188))(plVar1);
    return;
  }
  (**(code **)(*plVar1 + 0x188))(plVar1,1);
  return;
}


/* ActivityCollectionNewPlayerSpecialGift::ActivityCollectionNewPlayerSpecialGift() */

void __thiscall
ActivityCollectionNewPlayerSpecialGift::ActivityCollectionNewPlayerSpecialGift
          (ActivityCollectionNewPlayerSpecialGift *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  ActivityCollectionContainerBase::ActivityCollectionContainerBase
            ((ActivityCollectionContainerBase *)this);
  *(undefined ***)this = &PTR_GetClass_06633bc0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06633f28;
  *(undefined ***)(this + 0xe0) = &PTR_InitContainer_06633f70;
  *(undefined ***)(this + 0xe8) = &PTR__ActivityCollectionNewPlayerSpecialGift_06633f90;
  NewPlayerSpecialGiftData::NewPlayerSpecialGiftData((NewPlayerSpecialGiftData *)(this + 0x1b0));
  this[0x208] = (ActivityCollectionNewPlayerSpecialGift)0x0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<ActivityCollectionNewPlayerSpecialGift,void(ActivityCollectionNewPlayerSpecialGift::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_40);
  return;
}


/* ActivityCollectionNewPlayerSpecialGift::~ActivityCollectionNewPlayerSpecialGift() */

void __thiscall
ActivityCollectionNewPlayerSpecialGift::~ActivityCollectionNewPlayerSpecialGift
          (ActivityCollectionNewPlayerSpecialGift *this)

{
  *(undefined ***)this = &PTR_GetClass_06633bc0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06633f28;
  *(undefined ***)(this + 0xe0) = &PTR_InitContainer_06633f70;
  *(undefined ***)(this + 0xe8) = &PTR__ActivityCollectionNewPlayerSpecialGift_06633f90;
  NewPlayerSpecialGiftData::~NewPlayerSpecialGiftData((NewPlayerSpecialGiftData *)(this + 0x1b0));
  ActivityCollectionContainerBase::~ActivityCollectionContainerBase
            ((ActivityCollectionContainerBase *)this);
  return;
}


/* non-virtual thunk to
   ActivityCollectionNewPlayerSpecialGift::~ActivityCollectionNewPlayerSpecialGift() */

void __thiscall
ActivityCollectionNewPlayerSpecialGift::~ActivityCollectionNewPlayerSpecialGift
          (ActivityCollectionNewPlayerSpecialGift *this)

{
  ~ActivityCollectionNewPlayerSpecialGift(this + -0xe8);
  return;
}


/* ActivityCollectionNewPlayerSpecialGift::~ActivityCollectionNewPlayerSpecialGift() */

void __thiscall
ActivityCollectionNewPlayerSpecialGift::~ActivityCollectionNewPlayerSpecialGift
          (ActivityCollectionNewPlayerSpecialGift *this)

{
  ~ActivityCollectionNewPlayerSpecialGift(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to
   ActivityCollectionNewPlayerSpecialGift::~ActivityCollectionNewPlayerSpecialGift() */

void __thiscall
ActivityCollectionNewPlayerSpecialGift::~ActivityCollectionNewPlayerSpecialGift
          (ActivityCollectionNewPlayerSpecialGift *this)

{
  ~ActivityCollectionNewPlayerSpecialGift(this + -0xe8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionNewPlayerSpecialGift::onNotifyRefreshActivityList(bool, std::set<int,
   std::less<int>, std::allocator<int> > const&) */

void __thiscall
ActivityCollectionNewPlayerSpecialGift::onNotifyRefreshActivityList
          (ActivityCollectionNewPlayerSpecialGift *this,bool param_1,set *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_98;
  undefined8 local_90;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    uVar4 = std::set<int,std::less<int>,std::allocator<int>>::begin
                      ((set<int,std::less<int>,std::allocator<int>> *)param_2);
    uVar5 = std::
            map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>::
            end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)param_2);
    local_98 = std::find<std::_Rb_tree_const_iterator<int>,int>(uVar4,uVar5);
    local_90 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_98,(rbtree_iterator *)&local_90);
    if (bVar1) {
      iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar3);
      cVar2 = FUN_03446770(local_80);
      if (((cVar2 != '\0') && (local_70 != '\0')) &&
         (cVar2 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)(this + 0x1b0)),
         cVar2 != '\0')) {
        Refresh(this);
      }
      ActiveItem::~ActiveItem(aAStack_88);
    }
  }
  this[0x208] = (ActivityCollectionNewPlayerSpecialGift)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionNewPlayerSpecialGift::ButtonDepress(int) */

void __thiscall
ActivityCollectionNewPlayerSpecialGift::ButtonDepress
          (ActivityCollectionNewPlayerSpecialGift *this,int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  PurchaseBroker *this_01;
  char *pcVar4;
  TGALogMgr *this_02;
  MagentoProductProps *this_03;
  string *extraout_x1;
  size_t __n;
  float fVar5;
  string asStack_128 [8];
  RtWeakPtr aRStack_120 [8];
  DString aDStack_118 [16];
  TGALuckyChestData aTStack_108 [8];
  string asStack_100 [16];
  undefined1 auStack_f0 [8];
  string asStack_e8 [24];
  DString aDStack_d0 [64];
  int local_90;
  ActiveItem aAStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ActivityCollectionContainerBase::ButtonDepress((ActivityCollectionContainerBase *)this,param_1);
  if (param_1 == 0x457) {
    std::string::string(asStack_128,"com.popcap.ios.chs.PVZ2.EasterEgg06");
    nop();
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PurchaseBroker *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_rightmost(this_00);
    __n = 0;
    PurchaseBroker::RequestPayment(this_01,asStack_128,0);
    this[0x208] = (ActivityCollectionNewPlayerSpecialGift)0x1;
    TGALuckyChestData::TGALuckyChestData(aTStack_108);
    DString::DString(aDStack_d0,7);
    pcVar4 = (char *)DString::c_str(aDStack_d0);
    std::string::append((string *)aTStack_108,pcVar4,__n);
    DString::~DString(aDStack_d0);
    thunk_FUN_05475e00(auStack_f0,asStack_128);
    Magento::GetProductPtr((Magento *)asStack_128,extraout_x1);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_120);
    if (bVar1) {
      this_03 = (MagentoProductProps *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_120);
      fVar5 = (float)MagentoProductProps::GetPriceInUSD(this_03,false);
      DString::DString(aDStack_d0,fVar5);
      pcVar4 = (char *)DString::c_str(aDStack_d0);
      std::string::append(asStack_e8,pcVar4,__n);
      DString::~DString(aDStack_d0);
    }
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar3);
    ActivityCollectionData::ActivityCollectionData((ActivityCollectionData *)aDStack_d0);
    cVar2 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aDStack_d0);
    if (cVar2 != '\0') {
      DString::DString(aDStack_118,local_90);
      pcVar4 = (char *)DString::c_str(aDStack_118);
      std::string::append(asStack_100,pcVar4,__n);
      DString::~DString(aDStack_118);
    }
    this_02 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::LogNewplayerCollectiontData(this_02,(TGANewplayerCollectionData *)aTStack_108);
    ActivityCollectionData::~ActivityCollectionData((ActivityCollectionData *)aDStack_d0);
    ActiveItem::~ActiveItem(aAStack_88);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_120);
    TGALuckyChestData::~TGALuckyChestData(aTStack_108);
    std::string::~string(asStack_128);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ActivityCollectionNewPlayerSpecialGift::ButtonDepress(int) */

void __thiscall
ActivityCollectionNewPlayerSpecialGift::ButtonDepress
          (ActivityCollectionNewPlayerSpecialGift *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionNewPlayerSpecialGift::InitContainer(ActivityCollectionTabBase*) */

void __thiscall
ActivityCollectionNewPlayerSpecialGift::InitContainer
          (ActivityCollectionNewPlayerSpecialGift *this,ActivityCollectionTabBase *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  UIWidgetImage *pUVar11;
  PVZ2UIButton *pPVar12;
  char *pcVar13;
  TGALogMgr *this_00;
  PVZ2UIScrollingWidget *this_01;
  Widget *this_02;
  undefined8 uVar14;
  ulong uVar15;
  NewPlayerSpecialGiftItem *this_03;
  int *piVar16;
  long lVar17;
  code *pcVar18;
  ulong uVar19;
  long *plVar20;
  DString aDStack_1a0 [16];
  TGALuckyChestData aTStack_190 [8];
  string asStack_188 [48];
  string asStack_158 [64];
  int local_118;
  ActiveItem aAStack_108 [8];
  undefined4 local_100;
  char local_f0;
  ActiveItem aAStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ActivityCollectionContainerBase::InitContainer((ActivityCollectionContainerBase *)this,param_1);
  FUN_0344674c(this + 0xf8,0x2a7d);
  std::string::string(asStack_158,"IMAGE_UI_NEWPLAYERCOLLECTION_BACKGROUND_NEWPLAYERSPECIALGIFT");
  UIRewardFrame::SetDecoratorString((UIRewardFrame *)this,asStack_158);
  std::string::~string(asStack_158);
  nop();
  iVar3 = FUN_03447a18(0x3c);
  iVar5 = *(int *)(this + 0x50);
  iVar4 = FUN_03447a18(0x32);
  Sexy::Point::Point((Point *)asStack_158,iVar3 + iVar5 / 2,iVar4);
  ActivityCollectionContainerBase::InitTimer
            ((ActivityCollectionContainerBase *)this,(Point *)asStack_158);
  iVar3 = *(int *)(this + 0x50);
  iVar5 = FUN_03447a18(0x32);
  iVar4 = FUN_03447a18(100);
  if (this[0x1a4] != (ActivityCollectionNewPlayerSpecialGift)0x0) {
    iVar5 = iVar5 + iVar3 / 2;
    pUVar11 = ::operator_new(0x118);
    UIWidgetImage::UIWidgetImage(pUVar11);
    uVar6 = FUN_03447a18(300);
    uVar7 = FUN_03447a18(0x15e);
    (**(code **)(*(long *)pUVar11 + 0x198))(pUVar11,iVar5,iVar4,uVar6,uVar7);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_158,&DAT_06aa0f20,5);
    UIWidgetImage::SetImage(pUVar11,(PVZ2UIImage *)asStack_158);
    (**(code **)(*(long *)this + 0x60))(this,pUVar11);
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar3);
    cVar2 = FUN_03446770(local_100);
    if ((cVar2 != '\0') && (local_f0 != '\0')) {
      cVar2 = ActiveItem::GetDataSerialized(aAStack_108,(RtObject *)(this + 0x1b0));
      if (cVar2 != '\0') {
        this_01 = ::operator_new(0x248);
        PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_01,(ScrollWidgetListener *)(this + 0xe8));
        uVar6 = FUN_03447a18(5);
        iVar3 = FUN_03447a18(10);
        (**(code **)(*(long *)this_01 + 0x198))
                  (this_01,uVar6,uVar6,*(int *)(pUVar11 + 0x50) - iVar3,
                   *(int *)(pUVar11 + 0x54) - iVar3);
        Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_01,2);
        this_02 = ::operator_new(0xd8);
        Sexy::Widget::Widget(this_02);
        (**(code **)(*(long *)this_02 + 0x198))
                  (this_02,0,0,*(undefined4 *)(this_01 + 0x50),*(undefined4 *)(this_01 + 0x54));
        uVar19 = 0;
        while( true ) {
          uVar15 = FUN_034469d8(*(undefined8 *)(this + 0x1c8),*(undefined8 *)(this + 0x1d0));
          if (uVar15 <= uVar19) break;
          this_03 = ::operator_new(0x148);
          NewPlayerSpecialGiftItem::NewPlayerSpecialGiftItem(this_03);
          pcVar18 = *(code **)(*(long *)this_03 + 0x1a0);
          iVar3 = FUN_03447a18(0);
          iVar8 = FUN_03447a18(0x6e);
          iVar10 = FUN_03447a18(100);
          Sexy::Insets::Insets
                    ((Insets *)asStack_158,iVar3,iVar8 * (int)uVar19,*(int *)(this_02 + 0x50),iVar10
                    );
          (*pcVar18)(this_03,asStack_158);
          bVar1 = false;
          if (((int)uVar19 < *(int *)(this + 0x1f8)) &&
             (piVar16 = (int *)FUN_03446a08(*(undefined8 *)(this + 0x1e0),uVar19), bVar1 = false,
             *piVar16 == 1)) {
            bVar1 = *(int *)(this + 0x1fc) != 0;
          }
          uVar14 = FUN_03446a10(*(undefined8 *)(this + 0x1c8),uVar19);
          NewPlayerSpecialGiftData::NewPlayerSpecialGiftData
                    ((NewPlayerSpecialGiftData *)asStack_158,
                     (NewPlayerSpecialGiftData *)(this + 0x1b0));
          NewPlayerSpecialGiftItem::Init(this_03,uVar19 & 0xffffffff,bVar1,uVar14,asStack_158);
          NewPlayerSpecialGiftData::~NewPlayerSpecialGiftData
                    ((NewPlayerSpecialGiftData *)asStack_158);
          (**(code **)(*(long *)this_02 + 0x60))(this_02,this_03);
          uVar19 = uVar19 + 1;
        }
        iVar3 = FUN_03447a18(0x6e);
        iVar8 = FUN_03447a18(10);
        lVar17 = *(long *)this_01;
        *(int *)(this_02 + 0x54) = iVar3 * (int)uVar15 - iVar8;
        (**(code **)(lVar17 + 0x60))(this_01,this_02);
        (**(code **)(*(long *)pUVar11 + 0x60))(pUVar11,this_01);
      }
    }
    TodStringTranslate(L"[ZSHOP_CHALLENGE_TEN_PRICE]");
    Sexy::Color::Color((Color *)asStack_158,1);
    pPVar12 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar12,0x457,(ButtonListener *)(this + 0xd8),(wstring *)aTStack_190,
               (Color *)asStack_158);
    *(PVZ2UIButton **)(this + 0x200) = pPVar12;
    FUN_05476c50(aTStack_190);
    pPVar12 = *(PVZ2UIButton **)(this + 0x200);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aTStack_190,&DAT_06aa0c40,5);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_158,&DAT_06aa0e28,5);
    PVZ2UIButton::SetDialogStates(pPVar12,(PVZ2UIImage *)aTStack_190,(PVZ2UIImage *)asStack_158);
    plVar20 = *(long **)(this + 0x200);
    iVar3 = FUN_03447a18(200);
    iVar8 = FUN_03447a18(0x116);
    uVar6 = FUN_03447a18(0x96);
    uVar7 = FUN_03447a18(0x41);
    (**(code **)(*plVar20 + 0x198))(plVar20,iVar5 - iVar3,iVar8 + iVar4,uVar6,uVar7);
    lVar17 = *(long *)(this + 0x200);
    pcVar18 = *(code **)(*(long *)this + 0x60);
    *(undefined1 *)(lVar17 + 0x59) = 0;
    (*pcVar18)(this,lVar17);
    pUVar11 = ::operator_new(0x118);
    UIWidgetImage::UIWidgetImage(pUVar11);
    uVar6 = FUN_03447a18(0x50);
    iVar5 = FUN_03447a18(0x2d);
    uVar7 = FUN_03447a18(100);
    uVar9 = FUN_03447a18(0x3c);
    (**(code **)(*(long *)pUVar11 + 0x198))(pUVar11,uVar6,-iVar5,uVar7,uVar9);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_158,&DAT_06aa0d18,2);
    UIWidgetImage::SetImage(pUVar11,(PVZ2UIImage *)asStack_158);
    pcVar18 = *(code **)(**(long **)(this + 0x200) + 0x60);
    (*pcVar18)(*(long **)(this + 0x200),pUVar11);
    Refresh(this);
    TGALuckyChestData::TGALuckyChestData(aTStack_190);
    DString::DString((DString *)asStack_158,6);
    pcVar13 = (char *)DString::c_str((DString *)asStack_158);
    std::string::append((string *)aTStack_190,pcVar13,(size_t)pcVar18);
    DString::~DString((DString *)asStack_158);
    iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar5);
    ActivityCollectionData::ActivityCollectionData((ActivityCollectionData *)asStack_158);
    cVar2 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)asStack_158);
    if (cVar2 != '\0') {
      DString::DString(aDStack_1a0,local_118);
      pcVar13 = (char *)DString::c_str(aDStack_1a0);
      std::string::append(asStack_188,pcVar13,(size_t)pcVar18);
      DString::~DString(aDStack_1a0);
    }
    this_00 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::LogNewplayerCollectiontData(this_00,(TGANewplayerCollectionData *)aTStack_190);
    ActivityCollectionData::~ActivityCollectionData((ActivityCollectionData *)asStack_158);
    ActiveItem::~ActiveItem(aAStack_88);
    TGALuckyChestData::~TGALuckyChestData(aTStack_190);
    ActiveItem::~ActiveItem(aAStack_108);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to
   ActivityCollectionNewPlayerSpecialGift::InitContainer(ActivityCollectionTabBase*) */

void __thiscall
ActivityCollectionNewPlayerSpecialGift::InitContainer
          (ActivityCollectionNewPlayerSpecialGift *this,ActivityCollectionTabBase *param_1)

{
  InitContainer(this + -0xe0,param_1);
  return;
}

