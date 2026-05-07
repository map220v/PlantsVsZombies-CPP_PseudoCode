// Class: UILimitGroupBuyNotice


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitGroupBuyNotice::GetLayoutName() */

void __thiscall UILimitGroupBuyNotice::GetLayoutName(UILimitGroupBuyNotice *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UILimitGroupBuyNotice");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UILimitGroupBuyNotice::~UILimitGroupBuyNotice() */

void __thiscall UILimitGroupBuyNotice::~UILimitGroupBuyNotice(UILimitGroupBuyNotice *this)

{
  *(undefined ***)this = &PTR_GetClass_066ed430;
  *(undefined **)(this + 0xd8) = &DAT_066ed780;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  UISingletonDialog<UILimitGroupBuyNotice>::~UISingletonDialog
            ((UISingletonDialog<UILimitGroupBuyNotice> *)this);
  return;
}


/* UILimitGroupBuyNotice::~UILimitGroupBuyNotice() */

void __thiscall UILimitGroupBuyNotice::~UILimitGroupBuyNotice(UILimitGroupBuyNotice *this)

{
  ~UILimitGroupBuyNotice(this);
  AK::FreeHook(this);
  return;
}


/* UILimitGroupBuyNotice::ButtonDepress(int) */

void __thiscall UILimitGroupBuyNotice::ButtonDepress(UILimitGroupBuyNotice *this,int param_1)

{
  if (param_1 != 0x58) {
    return;
  }
  UISingletonDialog<UILimitGroupBuyNotice>::CloseDialog();
  return;
}


/* non-virtual thunk to UILimitGroupBuyNotice::ButtonDepress(int) */

void __thiscall UILimitGroupBuyNotice::ButtonDepress(UILimitGroupBuyNotice *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* UILimitGroupBuyNotice::UILimitGroupBuyNotice() */

void __thiscall UILimitGroupBuyNotice::UILimitGroupBuyNotice(UILimitGroupBuyNotice *this)

{
  UISingletonDialog<UILimitGroupBuyNotice>::UISingletonDialog
            ((UISingletonDialog<UILimitGroupBuyNotice> *)this);
  *(undefined ***)this = &PTR_GetClass_066ed430;
  *(undefined **)(this + 0xd8) = &DAT_066ed780;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitGroupBuyNotice::ShowWindow() */

void __thiscall UILimitGroupBuyNotice::ShowWindow(UILimitGroupBuyNotice *this)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  Widget *pWVar7;
  undefined4 *puVar8;
  LimitGroupBuyGridItem *this_00;
  ulong uVar9;
  ulong uVar10;
  Insets aIStack_118 [16];
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  LimitGroupBuyInfo aLStack_f0 [24];
  undefined8 local_d8;
  undefined8 local_d0;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar2 = FUN_039c2234(local_80);
  if ((cVar2 != '\0') && (local_70 != '\0')) {
    LimitGroupBuyInfo::LimitGroupBuyInfo(aLStack_f0);
    cVar2 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aLStack_f0);
    if (cVar2 != '\0') {
      iVar4 = FUN_039c2d44(10);
      iVar5 = FUN_039c2d44(5);
      iVar6 = FUN_039c2d44(0);
      std::string::string((string *)&local_108,"Widget_Panel");
      pWVar7 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,(string *)&local_108);
      std::string::~string((string *)&local_108);
      nop();
      iVar3 = *(int *)(pWVar7 + 0x50) + iVar4 * -2 + iVar5 * -3;
      iVar1 = iVar3 + 3;
      if (-1 < iVar3) {
        iVar1 = iVar3;
      }
      iVar3 = (*(int *)(pWVar7 + 0x54) + iVar5 * -3) / 2;
      uVar10 = 0;
      while( true ) {
        uVar9 = FUN_039c2650(local_d8,local_d0);
        if (uVar9 <= uVar10) break;
        Sexy::Insets::Insets
                  (aIStack_118,iVar4 + ((uint)uVar10 & 3) * (iVar5 + (iVar1 >> 2)),
                   iVar5 + ((int)(uint)uVar10 >> 2) * (iVar3 + iVar6),iVar1 >> 2,iVar3);
        puVar8 = (undefined4 *)FUN_039c265c(local_d8,uVar10);
        local_108 = *puVar8;
        local_104 = puVar8[1];
        local_100 = 0xffffffff;
        local_fc = 0xffffffff;
        local_f8 = 0xffffffff;
        this_00 = ::operator_new(0x180);
        LimitGroupBuyGridItem::LimitGroupBuyGridItem(this_00);
        FUN_039c2228(this_00 + 0x168);
        (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_118);
        LimitGroupBuyGridItem::LoadData(this_00,(LimitGroupBuyItemInfo *)&local_108);
        (**(code **)(*(long *)pWVar7 + 0x60))(pWVar7,this_00);
        uVar10 = uVar10 + 1;
      }
      LimitGroupBuyInfo::~LimitGroupBuyInfo(aLStack_f0);
      ActiveItem::~ActiveItem(aAStack_88);
      goto LAB_039c8338;
    }
    LimitGroupBuyInfo::~LimitGroupBuyInfo(aLStack_f0);
  }
  UISingletonDialog<UILimitGroupBuyNotice>::CloseDialog();
  ActiveItem::~ActiveItem(aAStack_88);
LAB_039c8338:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitGroupBuyNotice::OnCreate() */

void __thiscall UILimitGroupBuyNotice::OnCreate(UILimitGroupBuyNotice *this)

{
  UIWidgetBackground *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(int *)(pUVar1 + 0x48) = (*(int *)(this + 0x50) - *(int *)(pUVar1 + 0x50)) / 2;
  ShowWindow(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

