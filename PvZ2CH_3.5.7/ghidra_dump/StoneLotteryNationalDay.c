// Class: StoneLotteryNationalDay


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StoneLotteryNationalDay::Draw(Sexy::Graphics*) */

void __thiscall StoneLotteryNationalDay::Draw(StoneLotteryNationalDay *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  Image *pIVar4;
  ResourceInfo *pRVar5;
  Insets aIStack_50 [16];
  Insets aIStack_40 [8];
  undefined8 local_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PopingWidget::GetMainRect();
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abaa58);
  Draw9SliceImage(param_1,aIStack_40,uVar3);
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aba5c0);
  Sexy::Graphics::DrawImage
            (param_1,pIVar4,*(int *)(this + 0x15c),*(int *)(this + 0x160),*(int *)(this + 0x164),
             *(int *)(this + 0x168));
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aba278);
  Sexy::Graphics::DrawImage
            (param_1,pIVar4,*(int *)(this + 0x16c),*(int *)(this + 0x170),*(int *)(this + 0x174),
             *(int *)(this + 0x178));
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abaab0);
  Sexy::Graphics::DrawImage
            (param_1,pIVar4,*(int *)(this + 0x1fc),*(int *)(this + 0x200),*(int *)(this + 0x204),
             *(int *)(this + 0x208));
  cVar1 = FUN_039153c8(this[0x115]);
  if (cVar1 == '\0') {
    uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
    Sexy::Color::Color((Color *)aIStack_40,2);
    WriteWordInRect(param_1,this + 0x2a8,this + 0x21c,uVar3,aIStack_40,3,1);
    uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
    Sexy::Color::Color((Color *)aIStack_40,2);
    WriteWordInRect(param_1,this + 0x2b0,this + 0x22c,uVar3,aIStack_40,3,1);
    uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
    Sexy::Color::Color((Color *)aIStack_40,2);
    WriteWordInRect(param_1,this + 0x2b8,this + 0x23c,uVar3,aIStack_40,3,1);
    pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aba350);
    Sexy::Graphics::DrawImage
              (param_1,pIVar4,*(int *)(this + 0x24c),*(int *)(this + 0x250),*(int *)(this + 0x254),
               *(int *)(this + 600));
    iVar2 = FUN_03915908(0x5a);
    Sexy::Insets::Insets
              (aIStack_50,iVar2 + *(int *)(this + 0x24c),*(int *)(this + 0x250),
               *(int *)(this + 0x254),*(int *)(this + 600));
    uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
    Sexy::Color::Color((Color *)aIStack_40,1);
    WriteWordInRect(param_1,this + 0x2d0,aIStack_50,uVar3,aIStack_40,3,1);
  }
  else {
    if ((*(LinkButton **)(this + 0x330) != (LinkButton *)0x0) &&
       (cVar1 = LinkButton::CanDraw(*(LinkButton **)(this + 0x330)), cVar1 != '\0')) {
      LinkButton::GetButtonImage();
      pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aIStack_50);
      Sexy::Insets::Insets(aIStack_40,(Insets *)(this + 0x1ac));
      PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,pRVar5,aIStack_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_50);
    }
    if ((*(LinkButton **)(this + 0x338) != (LinkButton *)0x0) &&
       (cVar1 = LinkButton::CanDraw(*(LinkButton **)(this + 0x338)), cVar1 != '\0')) {
      LinkButton::GetButtonImage();
      pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aIStack_50);
      Sexy::Insets::Insets(aIStack_40,(Insets *)(this + 0x1bc));
      PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,pRVar5,aIStack_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_50);
    }
    if ((*(LinkButton **)(this + 0x340) != (LinkButton *)0x0) &&
       (cVar1 = LinkButton::CanDraw(*(LinkButton **)(this + 0x340)), cVar1 != '\0')) {
      LinkButton::GetButtonImage();
      pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aIStack_50);
      Sexy::Insets::Insets(aIStack_40,(Insets *)(this + 0x1cc));
      PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,pRVar5,aIStack_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_50);
    }
    if ((*(LinkButton **)(this + 0x348) != (LinkButton *)0x0) &&
       (cVar1 = LinkButton::CanDraw(*(LinkButton **)(this + 0x348)), cVar1 != '\0')) {
      LinkButton::GetButtonImage();
      pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aIStack_50);
      Sexy::Insets::Insets(aIStack_40,(Insets *)(this + 0x1dc));
      PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,pRVar5,aIStack_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_50);
    }
    if (*(long *)(this + 800) != 0) {
      PVZ2UIButton::GetImageNormal();
      uVar3 = local_38;
      Sexy::Insets::Insets(aIStack_50,(Insets *)(this + 0x27c));
      PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,uVar3,aIStack_50);
    }
    if (*(long *)(this + 0x328) != 0) {
      PVZ2UIButton::GetImageNormal();
      Sexy::Insets::Insets(aIStack_50,(Insets *)(this + 0x1ec));
      PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,local_38,aIStack_50);
    }
    Sexy::Insets::Insets(aIStack_40,(Insets *)(this + 0x17c));
    uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aba328);
    Draw9SliceImage(param_1,aIStack_40,uVar3);
    pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aba480);
    Sexy::Graphics::DrawImage
              (param_1,pIVar4,*(int *)(this + 0x18c),*(int *)(this + 400),*(int *)(this + 0x194),
               *(int *)(this + 0x198));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StoneLotteryNationalDay::~StoneLotteryNationalDay() */

void __thiscall StoneLotteryNationalDay::~StoneLotteryNationalDay(StoneLotteryNationalDay *this)

{
  *(undefined ***)this = &PTR_GetClass_066c5a40;
  *(undefined ***)(this + 0x120) = &PTR_ButtonPress_066c5d98;
  StoneLottery::~StoneLottery((StoneLottery *)this);
  return;
}


/* StoneLotteryNationalDay::~StoneLotteryNationalDay() */

void __thiscall StoneLotteryNationalDay::~StoneLotteryNationalDay(StoneLotteryNationalDay *this)

{
  ~StoneLotteryNationalDay(this);
  AK::FreeHook(this);
  return;
}


/* StoneLotteryNationalDay::StoneLotteryNationalDay() */

void __thiscall StoneLotteryNationalDay::StoneLotteryNationalDay(StoneLotteryNationalDay *this)

{
  StoneLottery::StoneLottery((StoneLottery *)this);
  *(undefined ***)this = &PTR_GetClass_066c5a40;
  *(undefined ***)(this + 0x120) = &PTR_ButtonPress_066c5d98;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StoneLotteryNationalDay::InitView(bool) */

void __thiscall StoneLotteryNationalDay::InitView(StoneLotteryNationalDay *this,bool param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  LotteryResultProgressBar *pLVar8;
  SalesProgressBar *pSVar9;
  int local_48;
  int local_30;
  int local_24;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  this[0x59] = (StoneLotteryNationalDay)0x0;
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  iVar1 = FUN_03915908(0x24e);
  iVar2 = FUN_03915908(0x14a);
  iVar3 = FUN_03915908(0);
  iVar4 = FUN_03915908(100);
  Sexy::Insets::Insets((Insets *)&local_18,iVar3,iVar4,iVar1,iVar2);
  PopingWidget::SetMainRect((PopingWidget *)this,(Insets *)&local_18);
  iVar5 = FUN_03915908(0);
  iVar6 = FUN_03915908(0x5a);
  Sexy::Insets::Insets((Insets *)&local_18,iVar3,iVar5,iVar1,iVar6);
  *(undefined8 *)(this + 0x15c) = local_18;
  *(undefined8 *)(this + 0x164) = uStack_10;
  iVar5 = FUN_03915908(0xc);
  iVar6 = FUN_03915908(0x18);
  Sexy::Insets::Insets((Insets *)&local_18,iVar5 + iVar3,iVar4 + iVar5,iVar1 - iVar6,iVar2 - iVar6);
  *(undefined8 *)(this + 0x16c) = local_18;
  *(undefined8 *)(this + 0x174) = uStack_10;
  iVar5 = *(int *)(this + 0x178);
  Sexy::Insets::Insets
            ((Insets *)&local_18,-(iVar5 / 2) + iVar3 + iVar1 / 2,iVar4 + iVar2 / 2 + -(iVar5 / 2),
             iVar5,iVar5);
  *(undefined8 *)(this + 0x17c) = local_18;
  *(undefined8 *)(this + 0x184) = uStack_10;
  if ((!param_1) && (*(StoneLotteryPanel **)(this + 0x350) != (StoneLotteryPanel *)0x0)) {
    StoneLotteryPanel::setOncePay(*(StoneLotteryPanel **)(this + 0x350),*(int *)(this + 0x2ec));
    PennyClassroomDisplayWidget::UpdateProgress
              (*(PennyClassroomDisplayWidget **)(this + 0x350),*(int *)(this + 0x2f0));
    StoneLotteryPanel::SetPanelChances(*(StoneLotteryPanel **)(this + 0x350),*(int *)(this + 0x2f4))
    ;
    StoneLotteryPanel::InitView(*(StoneLotteryPanel **)(this + 0x350));
    (**(code **)(**(long **)(this + 0x350) + 0x1a0))(*(long **)(this + 0x350),this + 0x17c);
    StoneLotteryPanel::InitLotteryItems();
    LotteryPanel::SetInited(*(LotteryPanel **)(this + 0x350),true);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x350));
  }
  pLVar8 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aba480);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  pLVar8 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aba480);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  Sexy::Insets::Insets
            ((Insets *)&local_18,*(int *)(this + 0x17c) + (*(int *)(this + 0x184) - iVar5) / 2,
             *(int *)(this + 0x180) + (*(int *)(this + 0x188) - iVar1) / 2,iVar5,iVar1);
  *(undefined8 *)(this + 0x18c) = local_18;
  *(undefined8 *)(this + 0x194) = uStack_10;
  pLVar8 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abaab0);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  pSVar9 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abaab0);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar9);
  iVar6 = FUN_03915908(5);
  iVar5 = *(int *)(this + 0x170);
  iVar1 = *(int *)(this + 0x16c);
  iVar2 = *(int *)(this + 0x178);
  iVar7 = FUN_03915908(0xe);
  Sexy::Insets::Insets((Insets *)&local_18,iVar1 - iVar6,iVar5 + iVar2 + iVar7,iVar3,iVar4);
  *(undefined8 *)(this + 0x1fc) = local_18;
  *(undefined8 *)(this + 0x204) = uStack_10;
  iVar1 = FUN_03915908(0x5a);
  iVar5 = *(int *)(this + 0x1fc);
  iVar2 = FUN_03915908(0x32);
  Sexy::Insets::Insets
            ((Insets *)&local_18,iVar1 + iVar5,*(int *)(this + 0x200),iVar2,*(int *)(this + 0x208));
  *(undefined8 *)(this + 0x21c) = local_18;
  *(undefined8 *)(this + 0x224) = uStack_10;
  iVar1 = FUN_03915908(0x168);
  iVar5 = *(int *)(this + 0x1fc);
  iVar2 = FUN_03915908(0x9b);
  Sexy::Insets::Insets
            ((Insets *)&local_18,iVar1 + iVar5,*(int *)(this + 0x220),iVar2,*(int *)(this + 0x228));
  *(undefined8 *)(this + 0x22c) = local_18;
  *(undefined8 *)(this + 0x234) = uStack_10;
  iVar1 = FUN_03915908(0x22b);
  iVar5 = *(int *)(this + 0x1fc);
  iVar2 = FUN_03915908(0x5f);
  Sexy::Insets::Insets
            ((Insets *)&local_18,iVar1 + iVar5,*(int *)(this + 0x220),iVar2,*(int *)(this + 0x228));
  *(undefined8 *)(this + 0x23c) = local_18;
  *(undefined8 *)(this + 0x244) = uStack_10;
  pLVar8 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aba700);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  pSVar9 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aba700);
  iVar1 = SalesProgressBar::GetCurrentLevel(pSVar9);
  PopingWidget::GetMainRect();
  PopingWidget::GetMainRect();
  iVar2 = FUN_03915908(0xfffffff1);
  PopingWidget::GetMainRect();
  iVar3 = FUN_03915908(10);
  Sexy::Insets::Insets
            ((Insets *)&local_18,((local_48 + local_30) - iVar5 / 2) + iVar2,
             (local_24 - iVar1 / 2) + iVar3,iVar5,iVar1);
  iVar5 = *(int *)(this + 0x15c);
  iVar1 = *(int *)(this + 0x164);
  *(undefined8 *)(this + 0x14c) = local_18;
  *(undefined8 *)(this + 0x154) = uStack_10;
  iVar3 = FUN_03915908(0xffffffc8);
  iVar4 = FUN_03915908(0xe);
  iVar2 = *(int *)(this + 0x160);
  iVar6 = FUN_03915908(0x30);
  iVar7 = FUN_03915908(0x28);
  Sexy::Insets::Insets((Insets *)&local_18,iVar5 + iVar1 / 2 + iVar3,iVar4 + iVar2,iVar6,iVar7);
  *(undefined8 *)(this + 0x20c) = local_18;
  *(undefined8 *)(this + 0x214) = uStack_10;
  iVar3 = FUN_03915908(0xc3);
  iVar5 = *(int *)(this + 0x160);
  iVar1 = *(int *)(this + 0x15c);
  iVar2 = *(int *)(this + 0x168);
  iVar4 = FUN_03915908(0x26);
  iVar6 = FUN_03915908(0xa0);
  iVar7 = FUN_03915908(0x1e);
  Sexy::Insets::Insets((Insets *)&local_18,iVar3 + iVar1,(iVar5 + iVar2) - iVar4,iVar6,iVar7);
  *(undefined8 *)(this + 0x24c) = local_18;
  *(undefined8 *)(this + 0x254) = uStack_10;
  if (!param_1) {
    (**(code **)(*(long *)this + 0x318))(this);
    this[0x128] = (StoneLotteryNationalDay)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StoneLotteryNationalDay::OnNotifyRefresh(bool, std::set<int, std::less<int>, std::allocator<int>
   > const&) */

void __thiscall
StoneLotteryNationalDay::OnNotifyRefresh(StoneLotteryNationalDay *this,bool param_1,set *param_2)

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
    local_9c = 0x29cd;
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
      cVar2 = FUN_03915434(local_80);
      if ((cVar2 != '\0') && (local_70 != '\0')) {
        (**(code **)(*(long *)this + 0x338))(this);
      }
      ActiveItem::~ActiveItem(aAStack_88);
    }
  }
  else {
    LawnApp::ShowNetworkError(gLawnApp);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StoneLotteryNationalDay::ShowWindow() */

void __thiscall StoneLotteryNationalDay::ShowWindow(StoneLotteryNationalDay *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_f8 [48];
  StoneLotteryConfig aSStack_c8 [8];
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  bool local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  byte local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_03915434(local_80);
  if (cVar1 != '\0') {
    StoneLotteryConfig::StoneLotteryConfig(aSStack_c8);
    cVar1 = LawnApp::IsChannelWithBigDeal();
    if (((cVar1 == '\0') ||
        (cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aSStack_c8), cVar1 == '\0'))
       || (iVar2 = FUN_0391544c(local_a8,local_a0), local_70 <= (iVar2 < 1))) {
      std::
      map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
      ::map(amStack_f8);
      (**(code **)(*(long *)this + 0x340))(this,0,amStack_f8);
      std::set<int,std::less<int>,std::allocator<int>>::~set
                ((set<int,std::less<int>,std::allocator<int>> *)amStack_f8);
    }
    else {
      StoneLottery::SetInitInfo((StoneLottery *)this,local_c0,local_bc,local_b8,local_b4,local_b0);
      StoneLottery::SetBonusList((StoneLottery *)this,(vector *)&local_a8);
    }
    StoneLotteryConfig::~StoneLotteryConfig(aSStack_c8);
  }
  (**(code **)(*(long *)this + 0x330))(this,0);
  uVar4 = operator|(0x10,0x20);
  uVar4 = operator|(uVar4,0x1000);
  uVar3 = operator|(uVar4,0x2000);
  PopingWidget::NormalInit((PopingWidget *)0x3e99999a,this,uVar3);
  (**(code **)(*(long *)this + 0x310))(this);
  MessageRouter::Post<std::string_const&,char_const*>
            ((MessageRouter *)gMessageRouter,Message::JoinActivity,"Comsume_Gems_Event");
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

