// Class: TipsWidget


/* TipsWidget::~TipsWidget() */

void __thiscall TipsWidget::~TipsWidget(TipsWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06801e40;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* TipsWidget::~TipsWidget() */

void __thiscall TipsWidget::~TipsWidget(TipsWidget *this)

{
  ~TipsWidget(this);
  AK::FreeHook(this);
  return;
}


/* TipsWidget::DesButtonRefresh() */

void __thiscall TipsWidget::DesButtonRefresh(TipsWidget *this)

{
  TipsWidget *pTVar1;
  long *plVar2;
  
  pTVar1 = this + 0xe0;
  while (pTVar1 != this + 0xf0) {
    plVar2 = *(long **)pTVar1;
    pTVar1 = pTVar1 + 8;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x158))(plVar2,(byte)this[0xd1] ^ 1);
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TipsWidget::TipsWidget(Sexy::ButtonListener*, bool) */

void __thiscall TipsWidget::TipsWidget(TipsWidget *this,ButtonListener *param_1,bool param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  LotteryResultProgressBar *pLVar4;
  SalesProgressBar *pSVar5;
  PVZ2UIButton *pPVar6;
  long *plVar7;
  code *pcVar8;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  this[0xd1] = (TipsWidget)param_2;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined ***)this = &PTR_GetClass_06801e40;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  if (param_2) {
    FUN_05478178(awStack_78,L"[CONSUMPTION_GETREWARD]",auStack_80);
    Sexy::Color::Color((Color *)aPStack_40,1);
    pPVar6 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton(pPVar6,0x222,param_1,awStack_78,(Color *)aPStack_40);
    *(PVZ2UIButton **)(this + 0xd8) = pPVar6;
    FUN_05476c50(awStack_78);
    nop();
    plVar7 = *(long **)(this + 0xd8);
    pcVar8 = *(code **)(*plVar7 + 0x198);
    pLVar4 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1c30);
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar4);
    iVar2 = FUN_041cb504(0x1e);
    pSVar5 = (SalesProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1c30);
    uVar3 = SalesProgressBar::GetCurrentLevel(pSVar5);
    (*pcVar8)(plVar7,0,0,iVar1 + iVar2,uVar3);
    pPVar6 = *(PVZ2UIButton **)(this + 0xd8);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06af1c30,3);
    PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06af1a48,3);
    PVZ2UIButton::SetDialogStates(pPVar6,(PVZ2UIImage *)awStack_78,aPStack_40);
    Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0xd8));
    Sexy::Widget::Resize
              ((Widget *)this,0,0,*(int *)(*(long *)(this + 0xd8) + 0x50),
               *(int *)(*(long *)(this + 0xd8) + 0x54));
  }
  else {
    pLVar4 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1c80);
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar4);
    pSVar5 = (SalesProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1c80);
    iVar2 = SalesProgressBar::GetCurrentLevel(pSVar5);
    Sexy::Widget::Resize((Widget *)this,0,0,iVar1,iVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TipsWidget::AddDesButton(Sexy::ButtonListener*) */

void __thiscall TipsWidget::AddDesButton(TipsWidget *this,ButtonListener *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  PVZ2UIButton *pPVar6;
  LotteryResultProgressBar *pLVar7;
  SalesProgressBar *pSVar8;
  long *plVar9;
  code *pcVar10;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar6 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar6,0x23d,param_1,awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0xe0) = pPVar6;
  FUN_05476c50(awStack_78);
  nop();
  plVar9 = *(long **)(this + 0xe0);
  pcVar10 = *(code **)(*plVar9 + 0x198);
  uVar2 = FUN_041cb504(0x89);
  pLVar7 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1950);
  uVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
  pSVar8 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1950);
  uVar4 = SalesProgressBar::GetCurrentLevel(pSVar8);
  (*pcVar10)(plVar9,uVar2,0,uVar3,uVar4);
  pPVar6 = *(PVZ2UIButton **)(this + 0xe0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06af1950,6);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06af1cd0,6);
  PVZ2UIButton::SetDialogStates(pPVar6,(PVZ2UIImage *)awStack_78,aPStack_40);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe0));
  (**(code **)(**(long **)(this + 0xe0) + 0x158))(*(long **)(this + 0xe0),0);
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar6 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar6,0x8a,param_1,awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0xe8) = pPVar6;
  FUN_05476c50(awStack_78);
  nop();
  plVar9 = *(long **)(this + 0xe8);
  pcVar10 = *(code **)(*plVar9 + 0x198);
  iVar5 = FUN_041cb504(0x84);
  iVar1 = *(int *)(*(long *)(this + 0xe0) + 0x50);
  pLVar7 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af19f8);
  uVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
  pSVar8 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af19f8);
  uVar3 = SalesProgressBar::GetCurrentLevel(pSVar8);
  (*pcVar10)(plVar9,iVar5 + iVar1,0,uVar2,uVar3);
  pPVar6 = *(PVZ2UIButton **)(this + 0xe8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06af19f8,6);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06af1a98,6);
  PVZ2UIButton::SetDialogStates(pPVar6,(PVZ2UIImage *)awStack_78,aPStack_40);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe8));
  (**(code **)(**(long **)(this + 0xe8) + 0x158))(*(long **)(this + 0xe8),0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TipsWidget::RefreshTips() */

void __thiscall TipsWidget::RefreshTips(TipsWidget *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long *plVar8;
  LotteryResultProgressBar *pLVar9;
  SalesProgressBar *this_00;
  code *pcVar10;
  
  plVar8 = *(long **)(this + 0xd8);
  this[0xd1] = (TipsWidget)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x158))(plVar8,0);
  }
  iVar1 = *(int *)(this + 0x48);
  pcVar10 = *(code **)(*(long *)this + 0x198);
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1c80);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  iVar2 = *(int *)(this + 0x50);
  iVar5 = FUN_041cb504(0xffffffd3);
  iVar3 = *(int *)(this + 0x4c);
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1c80);
  uVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1c80);
  uVar7 = SalesProgressBar::GetCurrentLevel(this_00);
  (*pcVar10)(this,iVar1 - (iVar4 - iVar2) / 2,iVar5 + iVar3,uVar6,uVar7);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TipsWidget::SetTipsImg(std::string const&) */

void __thiscall TipsWidget::SetTipsImg(TipsWidget *this,string *param_1)

{
  bool bVar1;
  char *pcVar2;
  undefined8 uVar3;
  CachedUIResourcePtr<Sexy::Image> aCStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = (char *)FUN_0547429c(param_1);
  CachedUIResourcePtr<Sexy::Image>::CachedUIResourcePtr(aCStack_30,pcVar2);
  bVar1 = CachedUIResourcePtr::operator_cast_to_bool((CachedUIResourcePtr *)aCStack_30);
  if (bVar1) {
    uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->(aCStack_30);
    *(undefined8 *)(this + 0xf0) = uVar3;
  }
  CachedUIResourcePtr<Sexy::Image>::~CachedUIResourcePtr(aCStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TipsWidget::Draw(Sexy::Graphics*) */

void __thiscall TipsWidget::Draw(TipsWidget *this,Graphics *param_1)

{
  if (this[0xd1] != (TipsWidget)0x0) {
    return;
  }
  nop();
  DesButtonRefresh(this);
  return;
}

