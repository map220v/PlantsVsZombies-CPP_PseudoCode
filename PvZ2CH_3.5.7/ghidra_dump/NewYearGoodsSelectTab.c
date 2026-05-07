// Class: NewYearGoodsSelectTab


/* NewYearGoodsSelectTab::InitView(int) */

void __thiscall NewYearGoodsSelectTab::InitView(NewYearGoodsSelectTab *this,int param_1)

{
  *(int *)(this + 0xd8) = param_1;
  return;
}


/* NewYearGoodsSelectTab::~NewYearGoodsSelectTab() */

void __thiscall NewYearGoodsSelectTab::~NewYearGoodsSelectTab(NewYearGoodsSelectTab *this)

{
  *(undefined ***)this = &PTR_GetClass_066e53a0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* NewYearGoodsSelectTab::~NewYearGoodsSelectTab() */

void __thiscall NewYearGoodsSelectTab::~NewYearGoodsSelectTab(NewYearGoodsSelectTab *this)

{
  ~NewYearGoodsSelectTab(this);
  AK::FreeHook(this);
  return;
}


/* NewYearGoodsSelectTab::GetBonusInfo() */

undefined1  [16] __thiscall NewYearGoodsSelectTab::GetBonusInfo(NewYearGoodsSelectTab *this)

{
  undefined1 auVar1 [16];
  
  auVar1._12_4_ = 0;
  auVar1._0_12_ = *(undefined1 (*) [12])(this + 0xdc);
  return auVar1;
}


/* NewYearGoodsSelectTab::NewYearGoodsSelectTab() */

void __thiscall NewYearGoodsSelectTab::NewYearGoodsSelectTab(NewYearGoodsSelectTab *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined4 *)(this + 0xd8) = 0xffffffff;
  *(undefined ***)this = &PTR_GetClass_066e53a0;
  Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)(this + 0xdc));
  this[0xe8] = (NewYearGoodsSelectTab)0x0;
  return;
}


/* NewYearGoodsSelectTab::SetSelectInfo(S2C_BonusInfo const&) */

void __thiscall
NewYearGoodsSelectTab::SetSelectInfo(NewYearGoodsSelectTab *this,S2C_BonusInfo *param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  
  *(undefined8 *)(this + 0xdc) = *(undefined8 *)param_1;
  pcVar3 = *(code **)(*(long *)this + 0x80);
  *(undefined4 *)(this + 0xe4) = *(undefined4 *)(param_1 + 8);
  (*pcVar3)(this,1,1);
  plVar1 = (long *)UIRewardFrameSelect::CreateUIRewardFrame
                             (*(int *)param_1,*(int *)(param_1 + 4),true);
  (**(code **)(*plVar1 + 0x198))
            (plVar1,0,0,*(undefined4 *)(this + 0x50),*(undefined4 *)(this + 0x54));
  lVar2 = *(long *)this;
  *(undefined1 *)((long)plVar1 + 0x6d) = 0;
  (**(code **)(lVar2 + 0x60))(this,plVar1);
  return;
}


/* NewYearGoodsSelectTab::TouchEnded(Sexy::Touch const&) */

void __thiscall NewYearGoodsSelectTab::TouchEnded(NewYearGoodsSelectTab *this,Touch *param_1)

{
  UINewYearGoodsSelect *this_00;
  
  if (*(int *)(this + 0xd4) != (int)*(undefined8 *)param_1) {
    return;
  }
  this_00 = (UINewYearGoodsSelect *)UISingletonDialog<UINewYearGoodsSelect>::GetSingletonPtr();
  UINewYearGoodsSelect::SelectTab(this_00,*(int *)(this + 0xd8));
  return;
}


/* NewYearGoodsSelectTab::Draw(Sexy::Graphics*) */

void __thiscall NewYearGoodsSelectTab::Draw(NewYearGoodsSelectTab *this,Graphics *param_1)

{
  Image *pIVar1;
  
  pIVar1 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abf350);
  Sexy::Graphics::DrawImage(param_1,pIVar1,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  return;
}


/* NewYearGoodsSelectTab::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
NewYearGoodsSelectTab::DrawAll(NewYearGoodsSelectTab *this,ModalFlags *param_1,Graphics *param_2)

{
  Image *pIVar1;
  
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  if (this[0xe8] == (NewYearGoodsSelectTab)0x0) {
    return;
  }
  pIVar1 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abf450);
  Sexy::Graphics::DrawImage(param_2,pIVar1,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  return;
}

