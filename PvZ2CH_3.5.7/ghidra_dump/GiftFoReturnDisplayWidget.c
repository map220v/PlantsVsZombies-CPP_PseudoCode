// Class: GiftFoReturnDisplayWidget


/* GiftFoReturnDisplayWidget::OnUpdateGiftFoReturnSignDays(int) */

void __thiscall
GiftFoReturnDisplayWidget::OnUpdateGiftFoReturnSignDays(GiftFoReturnDisplayWidget *this,int param_1)

{
  *(int *)(this + 0xfc) = param_1;
  return;
}


/* GiftFoReturnDisplayWidget::~GiftFoReturnDisplayWidget() */

void __thiscall
GiftFoReturnDisplayWidget::~GiftFoReturnDisplayWidget(GiftFoReturnDisplayWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_0698ef50;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0698f2a0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UIScrollDisplayWidgetBase::~UIScrollDisplayWidgetBase((UIScrollDisplayWidgetBase *)this);
  return;
}


/* GiftFoReturnDisplayWidget::~GiftFoReturnDisplayWidget() */

void __thiscall
GiftFoReturnDisplayWidget::~GiftFoReturnDisplayWidget(GiftFoReturnDisplayWidget *this)

{
  ~GiftFoReturnDisplayWidget(this);
  AK::FreeHook(this);
  return;
}


/* GiftFoReturnDisplayWidget::GiftFoReturnDisplayWidget(int, int) */

void __thiscall
GiftFoReturnDisplayWidget::GiftFoReturnDisplayWidget
          (GiftFoReturnDisplayWidget *this,int param_1,int param_2)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  UIScrollDisplayWidgetBase::UIScrollDisplayWidgetBase
            ((UIScrollDisplayWidgetBase *)this,param_1,param_2);
  *(undefined ***)this = &PTR_GetClass_0698ef50;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0698f2a0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnUpdateGiftFoReturnSignDays);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<GiftFoReturnDisplayWidget,void(GiftFoReturnDisplayWidget::*)(int)>>
            ((MessageRouter *)puVar1,Message::UpdateGiftFoReturnSignDays,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GiftFoReturnDisplayWidget::NotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
GiftFoReturnDisplayWidget::NotifyRefreshActivityList
          (GiftFoReturnDisplayWidget *this,bool param_1,set *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int local_9c;
  undefined8 local_98;
  undefined8 local_90;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_9c = 0x2a76;
    local_98 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_9c);
    local_90 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_98,(rbtree_iterator *)&local_90);
    if (bVar1) {
      iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar3);
      cVar2 = FUN_04c615f4(local_80);
      if (((cVar2 != '\0') && (local_70 != '\0')) && (this[0xec] != (GiftFoReturnDisplayWidget)0x0))
      {
        UISingletonDialog<UIGiftFoReturn>::ShowDialog();
        this[0xec] = (GiftFoReturnDisplayWidget)0x0;
      }
      ActiveItem::~ActiveItem(aAStack_88);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GiftFoReturnDisplayWidget::InitView() */

void __thiscall GiftFoReturnDisplayWidget::InitView(GiftFoReturnDisplayWidget *this)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  ActiveItem aAStack_188 [8];
  undefined4 local_180;
  char local_170;
  GiftFoReturnData aGStack_108 [60];
  undefined4 local_cc;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIScrollDisplayWidgetBase::InitView((UIScrollDisplayWidgetBase *)this);
  pcVar4 = *(code **)(*(long *)this + 800);
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b93a20);
  (*pcVar4)(this,uVar3);
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_04c615f4(local_180);
  if ((cVar1 != '\0') && (local_170 != '\0')) {
    GiftFoReturnData::GiftFoReturnData(aGStack_108);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_188,(RtObject *)aGStack_108);
    if (cVar1 != '\0') {
      *(undefined4 *)(this + 0xfc) = local_cc;
    }
    GiftFoReturnData::~GiftFoReturnData(aGStack_108);
  }
  ActiveItem::~ActiveItem(aAStack_188);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GiftFoReturnDisplayWidget::Draw(Sexy::Graphics*) */

void __thiscall GiftFoReturnDisplayWidget::Draw(GiftFoReturnDisplayWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  Image *pIVar7;
  int iVar8;
  TimeUtil aTStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  
  local_8 = ___stack_chk_guard;
  iVar8 = 0;
  UIScrollDisplayWidgetBase::Draw((UIScrollDisplayWidgetBase *)this,param_1);
  iVar1 = FUN_04c61824(0x46);
  iVar5 = *(int *)(this + 0x50);
  iVar2 = FUN_04c61824(0xf);
  iVar3 = FUN_04c61824(0x8c);
  iVar4 = FUN_04c61824(0x1e);
  Sexy::Insets::Insets(aIStack_18,iVar5 - iVar1,-iVar2,iVar3,iVar4);
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b939c8);
  Draw9SliceImage(param_1,aIStack_18,uVar6);
  TimeUtil::GetTimeCountdown(3,0x2a76);
  TimeUtil::GetTimeCountdownFormat(aTStack_30,0);
  iVar1 = FUN_04c61824(0x46);
  iVar5 = *(int *)(this + 0x50);
  iVar2 = FUN_04c61824(1);
  iVar3 = FUN_04c61824(0x14);
  Sexy::Insets::Insets(aIStack_28,iVar5 - iVar1,iVar2,iVar1,iVar3);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_12);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,aTStack_30,aIStack_28,uVar6,aIStack_18,2,1);
  FUN_05476c50(aTStack_30);
  do {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b93730;
    if (*(int *)(this + 0xfc) <= iVar8) {
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b936b0;
    }
    pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
    iVar1 = FUN_04c61824(0x55);
    iVar5 = FUN_04c61824(0x14);
    iVar5 = iVar5 * iVar8;
    iVar8 = iVar8 + 1;
    iVar2 = FUN_04c61824(0x3c);
    iVar3 = FUN_04c61824(0x10);
    iVar4 = FUN_04c61824(0x12);
    Sexy::Graphics::DrawImage(param_1,pIVar7,iVar1 + iVar5,iVar2,iVar3,iVar4);
  } while (iVar8 != 7);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GiftFoReturnDisplayWidget::ButtonClick() */

void __thiscall GiftFoReturnDisplayWidget::ButtonClick(GiftFoReturnDisplayWidget *this)

{
  ActivityManager *this_00;
  
  UIScrollDisplayWidgetBase::ButtonClick((UIScrollDisplayWidgetBase *)this);
  this_00 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this_00,0x2a76,true,0);
  return;
}

