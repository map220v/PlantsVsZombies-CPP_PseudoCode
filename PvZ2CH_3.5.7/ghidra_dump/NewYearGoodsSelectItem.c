// Class: NewYearGoodsSelectItem


/* NewYearGoodsSelectItem::TouchBegan(Sexy::Touch const&) */

void __thiscall NewYearGoodsSelectItem::TouchBegan(NewYearGoodsSelectItem *this,Touch *param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0xf0);
  *(int *)(this + 0xd4) = (int)*(undefined8 *)param_1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x250))(plVar1);
  }
  return;
}


/* NewYearGoodsSelectItem::TouchesCanceled() */

void __thiscall NewYearGoodsSelectItem::TouchesCanceled(NewYearGoodsSelectItem *this)

{
  if (*(long **)(this + 0xf0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xf0) + 0x268))();
  }
  return;
}


/* NewYearGoodsSelectItem::~NewYearGoodsSelectItem() */

void __thiscall NewYearGoodsSelectItem::~NewYearGoodsSelectItem(NewYearGoodsSelectItem *this)

{
  *(undefined ***)this = &PTR_GetClass_066e56c0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* NewYearGoodsSelectItem::~NewYearGoodsSelectItem() */

void __thiscall NewYearGoodsSelectItem::~NewYearGoodsSelectItem(NewYearGoodsSelectItem *this)

{
  ~NewYearGoodsSelectItem(this);
  AK::FreeHook(this);
  return;
}


/* NewYearGoodsSelectItem::NewYearGoodsSelectItem() */

void __thiscall NewYearGoodsSelectItem::NewYearGoodsSelectItem(NewYearGoodsSelectItem *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined4 *)(this + 0xd8) = 0xffffffff;
  *(undefined4 *)(this + 0xdc) = 0xffffffff;
  *(undefined ***)this = &PTR_GetClass_066e56c0;
  Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)(this + 0xe0));
  this[0xec] = (NewYearGoodsSelectItem)0x0;
  *(undefined8 *)(this + 0xf0) = 0;
  return;
}


/* NewYearGoodsSelectItem::InitView(int, int, S2C_BonusInfo const&) */

void __thiscall
NewYearGoodsSelectItem::InitView
          (NewYearGoodsSelectItem *this,int param_1,int param_2,S2C_BonusInfo *param_3)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  
  *(undefined8 *)(this + 0xe0) = *(undefined8 *)param_3;
  *(int *)(this + 0xd8) = param_1;
  pcVar2 = *(code **)(*(long *)this + 0x80);
  *(undefined4 *)(this + 0xe8) = *(undefined4 *)(param_3 + 8);
  *(int *)(this + 0xdc) = param_2;
  (*pcVar2)(this,1,1);
  plVar1 = (long *)UIRewardFrameSelect::CreateUIRewardFrame
                             (*(int *)param_3,*(int *)(param_3 + 4),true);
  lVar3 = *plVar1;
  *(long **)(this + 0xf0) = plVar1;
  (**(code **)(lVar3 + 0x198))(plVar1,0,0,*(undefined4 *)(this + 0x50),*(undefined4 *)(this + 0x54))
  ;
  lVar3 = *(long *)(this + 0xf0);
  pcVar2 = *(code **)(*(long *)this + 0x60);
  *(undefined1 *)(lVar3 + 0x6d) = 0;
  (*pcVar2)(this,lVar3);
  return;
}


/* NewYearGoodsSelectItem::SelectItem(bool) */

void __thiscall NewYearGoodsSelectItem::SelectItem(NewYearGoodsSelectItem *this,bool param_1)

{
  this[0xec] = (NewYearGoodsSelectItem)param_1;
  return;
}


/* NewYearGoodsSelectItem::TouchEnded(Sexy::Touch const&) */

void __thiscall NewYearGoodsSelectItem::TouchEnded(NewYearGoodsSelectItem *this,Touch *param_1)

{
  UINewYearGoodsSelect *this_00;
  
  if (*(long **)(this + 0xf0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xf0) + 0x260))();
  }
  if (*(int *)(this + 0xd4) != (int)*(undefined8 *)param_1) {
    return;
  }
  this_00 = (UINewYearGoodsSelect *)UISingletonDialog<UINewYearGoodsSelect>::GetSingletonPtr();
  UINewYearGoodsSelect::SelectGoods(this_00,*(int *)(this + 0xd8),*(int *)(this + 0xdc));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewYearGoodsSelectItem::Draw(Sexy::Graphics*) */

void __thiscall NewYearGoodsSelectItem::Draw(NewYearGoodsSelectItem *this,Graphics *param_1)

{
  Image *pIVar1;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xec] != (NewYearGoodsSelectItem)0x0) {
    pIVar1 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abf270);
    Sexy::Graphics::DrawImage(param_1,pIVar1,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    TodStringTranslate(L"[LUCKBAG_SELECT]");
    Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
    Sexy::Color::Color(aCStack_18,0,0xff,0x66);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar2,aCStack_18,5,1);
    FUN_05476c50(auStack_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewYearGoodsSelectItem::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
NewYearGoodsSelectItem::DrawAll(NewYearGoodsSelectItem *this,ModalFlags *param_1,Graphics *param_2)

{
  Image *pIVar1;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  if (this[0xec] != (NewYearGoodsSelectItem)0x0) {
    pIVar1 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abf270);
    Sexy::Graphics::DrawImage(param_2,pIVar1,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    TodStringTranslate(L"[LUCKBAG_SELECT]");
    Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
    Sexy::Color::Color(aCStack_18,0,0xff,0x66);
    WriteWordInRect(param_2,auStack_30,aIStack_28,uVar2,aCStack_18,5,1);
    FUN_05476c50(auStack_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

