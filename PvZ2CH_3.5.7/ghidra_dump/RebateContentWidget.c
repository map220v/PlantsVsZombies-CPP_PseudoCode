// Class: RebateContentWidget


/* RebateContentWidget::~RebateContentWidget() */

void __thiscall RebateContentWidget::~RebateContentWidget(RebateContentWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06924c80;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* RebateContentWidget::~RebateContentWidget() */

void __thiscall RebateContentWidget::~RebateContentWidget(RebateContentWidget *this)

{
  ~RebateContentWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RebateContentWidget::AddRewardItem() */

void __thiscall RebateContentWidget::AddRewardItem(RebateContentWidget *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  RebateDateMgr *pRVar7;
  string *psVar8;
  undefined4 *puVar9;
  ReBateItemWidget *pRVar10;
  int iVar11;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = FUN_049ab108(0x19);
  iVar5 = FUN_049ab108(0x3f);
  pRVar7 = (RebateDateMgr *)RebateDateMgr::GetInstance();
  RebateDateMgr::GetMaxWorldName(pRVar7);
  cVar3 = FUN_0547419c(asStack_20);
  if (cVar3 == '\0') {
    psVar8 = (string *)RebateDateMgr::GetInstance();
    RebateDateMgr::GetPlantNameWithWorldName(psVar8);
    iVar11 = 0;
    while( true ) {
      pRVar7 = (RebateDateMgr *)RebateDateMgr::GetInstance();
      puVar9 = (undefined4 *)RebateDateMgr::GetRewardConditionWithIndex(pRVar7,iVar11);
      uVar1 = *puVar9;
      uVar2 = puVar9[1];
      if (iVar11 == 2) break;
      FUN_05475d88(asStack_10,asStack_18);
      iVar11 = iVar11 + 1;
      pRVar10 = ::operator_new(0xf0);
      ReBateItemWidget::ReBateItemWidget(pRVar10,asStack_10,uVar1,uVar2,0);
      std::string::~string(asStack_10);
      iVar6 = FUN_049ab108(0xbe);
      (**(code **)(*(long *)pRVar10 + 0x1a8))(pRVar10,iVar4,*(int *)(this + 0x54) - iVar6);
      iVar4 = iVar4 + iVar5 + *(int *)(pRVar10 + 0x50);
      (**(code **)(*(long *)this + 0x60))(this,pRVar10);
    }
    FUN_05475d88(asStack_10,asStack_18);
    pRVar10 = ::operator_new(0xf0);
    ReBateItemWidget::ReBateItemWidget(pRVar10,asStack_10,uVar1,uVar2,1);
    std::string::~string(asStack_10);
    iVar5 = FUN_049ab108(0xbe);
    (**(code **)(*(long *)pRVar10 + 0x1a8))(pRVar10,iVar4,*(int *)(this + 0x54) - iVar5);
    (**(code **)(*(long *)this + 0x60))(this,pRVar10);
    std::string::~string(asStack_18);
    std::string::~string(asStack_20);
  }
  else {
    std::string::~string(asStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RebateContentWidget::RebateContentWidget() */

void __thiscall RebateContentWidget::RebateContentWidget(RebateContentWidget *this)

{
  int iVar1;
  int iVar2;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06924c80;
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b74270);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b74270);
  iVar2 = SalesProgressBar::GetCurrentLevel(this_01);
  Sexy::Widget::Resize((Widget *)this,0,0,iVar1,iVar2);
  AddRewardItem(this);
  return;
}


/* RebateContentWidget::Draw(Sexy::Graphics*) */

void __thiscall RebateContentWidget::Draw(RebateContentWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  Image *pIVar4;
  LotteryResultProgressBar *this_00;
  
  nop();
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b74270);
  Sexy::Graphics::DrawImage(param_1,pIVar4,0,0);
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b74130);
  iVar1 = *(int *)(this + 0x50);
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b74130);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  iVar3 = FUN_049ab108(0x87);
  Sexy::Graphics::DrawImage(param_1,pIVar4,(iVar1 - iVar2) / 2,*(int *)(this + 0x54) - iVar3);
  return;
}

