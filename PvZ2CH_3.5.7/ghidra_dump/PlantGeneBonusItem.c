// Class: PlantGeneBonusItem


/* PlantGeneBonusItem::~PlantGeneBonusItem() */

void __thiscall PlantGeneBonusItem::~PlantGeneBonusItem(PlantGeneBonusItem *this)

{
  *(undefined ***)this = &PTR_GetClass_0669ee40;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PlantGeneBonusItem::~PlantGeneBonusItem() */

void __thiscall PlantGeneBonusItem::~PlantGeneBonusItem(PlantGeneBonusItem *this)

{
  ~PlantGeneBonusItem(this);
  AK::FreeHook(this);
  return;
}


/* PlantGeneBonusItem::PlantGeneBonusItem() */

void __thiscall PlantGeneBonusItem::PlantGeneBonusItem(PlantGeneBonusItem *this)

{
  Sexy::Widget::Widget((Widget *)this);
  this[0xd1] = (PlantGeneBonusItem)0x0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined ***)this = &PTR_GetClass_0669ee40;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeneBonusItem::InitView(int, S2C_BonusInfo) */

void __thiscall
PlantGeneBonusItem::InitView(PlantGeneBonusItem *this,int param_1,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long *plVar3;
  UIWidgetText *pUVar4;
  long lVar5;
  code *pcVar6;
  int local_30;
  int iStack_2c;
  wstring awStack_18 [16];
  long local_8;
  
  this[0x59] = (PlantGeneBonusItem)0x0;
  local_8 = ___stack_chk_guard;
  plVar3 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(param_1,0,false);
  *(long **)(this + 0xd8) = plVar3;
  uVar1 = FUN_03800484(0);
  uVar2 = FUN_03800484(100);
  (**(code **)(*plVar3 + 0x198))(plVar3,uVar1,uVar1,uVar2,uVar2);
  lVar5 = *(long *)(this + 0xd8);
  pcVar6 = *(code **)(*(long *)this + 0x60);
  *(undefined1 *)(lVar5 + 0x6d) = 0;
  *(undefined1 *)(lVar5 + 0x59) = 0;
  (*pcVar6)(this,lVar5);
  UIRewardFrameSelect::GetSelectDescription();
  pUVar4 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(pUVar4,awStack_18);
  FUN_05476c50(awStack_18);
  FUN_037fe590(pUVar4 + 0xe0,5);
  UIWidgetText::SetFontIndex(pUVar4,0);
  pcVar6 = *(code **)(*(long *)pUVar4 + 0x170);
  Sexy::Color::Color((Color *)awStack_18,1);
  (*pcVar6)(pUVar4,0,awStack_18);
  uVar1 = FUN_03800484(100);
  uVar2 = FUN_03800484(0x1e);
  (**(code **)(*(long *)pUVar4 + 0x198))(pUVar4,0,uVar1,uVar1,uVar2);
  (**(code **)(**(long **)(this + 0xd8) + 0x60))(*(long **)(this + 0xd8),pUVar4);
  iStack_2c = (int)((ulong)param_3 >> 0x20);
  local_30 = (int)param_3;
  plVar3 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(local_30,iStack_2c,false);
  *(long **)(this + 0xe0) = plVar3;
  uVar1 = FUN_03800484(0);
  uVar2 = FUN_03800484(100);
  (**(code **)(*plVar3 + 0x198))(plVar3,uVar1,uVar1,uVar2,uVar2);
  lVar5 = *(long *)(this + 0xe0);
  pcVar6 = *(code **)(*(long *)this + 0x60);
  *(undefined1 *)(lVar5 + 0x6d) = 0;
  *(undefined1 *)(lVar5 + 0x59) = 0;
  (*pcVar6)(this,lVar5);
  UIRewardFrameSelect::GetSelectDescription();
  pUVar4 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(pUVar4,awStack_18);
  FUN_05476c50(awStack_18);
  FUN_037fe590(pUVar4 + 0xe0,5);
  UIWidgetText::SetFontIndex(pUVar4,0);
  pcVar6 = *(code **)(*(long *)pUVar4 + 0x170);
  Sexy::Color::Color((Color *)awStack_18,1);
  (*pcVar6)(pUVar4,0,awStack_18);
  uVar1 = FUN_03800484(100);
  uVar2 = FUN_03800484(0x1e);
  (**(code **)(*(long *)pUVar4 + 0x198))(pUVar4,0,uVar1,uVar1,uVar2);
  (**(code **)(**(long **)(this + 0xe0) + 0x60))(*(long **)(this + 0xe0),pUVar4);
  (**(code **)(**(long **)(this + 0xe0) + 0x158))(*(long **)(this + 0xe0),0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeneBonusItem::SetFirstBonus() */

void __thiscall PlantGeneBonusItem::SetFirstBonus(PlantGeneBonusItem *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  UIWidgetAnim *this_00;
  FastCurve aFStack_10 [8];
  long local_8;
  
  this[0xd1] = (PlantGeneBonusItem)0x1;
  local_8 = ___stack_chk_guard;
  this_00 = ::operator_new(0x118);
  UIWidgetAnim::UIWidgetAnim(this_00);
  iVar1 = FUN_03800484(0x32);
  iVar2 = FUN_03800484(0x1e);
  uVar3 = FUN_03800484(0x96);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,-iVar1,-iVar2,uVar3,uVar3);
  this_00[0x59] = (UIWidgetAnim)0x0;
  Sexy::FastCurve::SetOutRange(aFStack_10,0.6,0.6);
  FUN_037fe584(this_00 + 0xe0,aFStack_10);
  std::string::string((string *)aFStack_10,"POPANIM_UI_PLANTGENE_EFFECTS_GACHA_BACK_LIGHT");
  UIWidgetAnim::SetAnimRig(this_00,(string *)aFStack_10);
  std::string::~string((string *)aFStack_10);
  nop();
  std::string::string((string *)aFStack_10,"anim");
  UIWidgetAnim::SetLabel((string *)this_00);
  std::string::~string((string *)aFStack_10);
  nop();
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  (**(code **)(*(long *)this + 0xb8))(this,this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeneBonusItem::ChangeBonus() */

void __thiscall PlantGeneBonusItem::ChangeBonus(PlantGeneBonusItem *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  UIWidgetAnim *this_00;
  FastCurve aFStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xd1] == (PlantGeneBonusItem)0x0) {
    this_00 = ::operator_new(0x118);
    UIWidgetAnim::UIWidgetAnim(this_00);
    iVar1 = FUN_03800484(0x32);
    iVar2 = FUN_03800484(0x28);
    uVar3 = FUN_03800484(0x96);
    (**(code **)(*(long *)this_00 + 0x198))(this_00,-iVar1,-iVar2,uVar3,uVar3);
    this_00[0x59] = (UIWidgetAnim)0x0;
    Sexy::FastCurve::SetOutRange(aFStack_30,0.8,0.8);
    FUN_037fe584(this_00 + 0xe0,aFStack_30);
    std::string::string((string *)aFStack_30,"POPANIM_UI_PLANTGENE_EFFECTS_GACHA_TRANS");
    UIWidgetAnim::SetAnimRig(this_00,(string *)aFStack_30);
    std::string::~string((string *)aFStack_30);
    nop();
    std::string::string((string *)aFStack_30,"anim");
    FUN_0380026c(afStack_28,this);
    UIWidgetAnim::SetLabel(this_00,aFStack_30,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
    std::string::~string((string *)aFStack_30);
    nop();
    (**(code **)(*(long *)this + 0x60))(this,this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

