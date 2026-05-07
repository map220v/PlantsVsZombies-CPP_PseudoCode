// Class: WishingPoolSelectLine


/* WishingPoolSelectLine::ScrollTargetReached(Sexy::ScrollWidget*) */

void WishingPoolSelectLine::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to WishingPoolSelectLine::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
WishingPoolSelectLine::ScrollTargetReached(WishingPoolSelectLine *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xd8));
  return;
}


/* WishingPoolSelectLine::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void WishingPoolSelectLine::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to WishingPoolSelectLine::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
WishingPoolSelectLine::ScrollTargetInterrupted(WishingPoolSelectLine *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xd8));
  return;
}


/* WishingPoolSelectLine::SelectItem(int) */

void __thiscall WishingPoolSelectLine::SelectItem(WishingPoolSelectLine *this,int param_1)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  PartyAssistWishingPoolSelectItem *this_00;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar4 = 0;
  uVar5 = *(undefined8 *)(this + 0xf8);
  lVar1 = FUN_03450f28(uVar5,*(undefined8 *)(this + 0x100));
  if (lVar1 != 0) {
    do {
      puVar2 = (undefined8 *)FUN_03450f34(uVar5,uVar4);
      this_00 = (PartyAssistWishingPoolSelectItem *)*puVar2;
      if (*(int *)(this_00 + 0xe4) == param_1) {
        PartyAssistWishingPoolSelectItem::SetSelect(this_00,true);
      }
      else {
        PartyAssistWishingPoolSelectItem::SetSelect(this_00,false);
      }
      uVar4 = uVar4 + 1;
      uVar5 = *(undefined8 *)(this + 0xf8);
      uVar3 = FUN_03450f28(uVar5,*(undefined8 *)(this + 0x100));
    } while (uVar4 < uVar3);
  }
  return;
}


/* WishingPoolSelectLine::GetSelectItemIndex() */

ulong __thiscall WishingPoolSelectLine::GetSelectItemIndex(WishingPoolSelectLine *this)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0xf8);
  uVar1 = FUN_03450f28(uVar5,*(undefined8 *)(this + 0x100));
  uVar3 = 0;
  do {
    uVar4 = uVar3 & 0xffffffff;
    if (uVar3 == uVar1) {
      return 0xffffffff;
    }
    plVar2 = (long *)FUN_03450f34(uVar5,uVar3);
    uVar3 = uVar3 + 1;
  } while (*(char *)(*plVar2 + 0xe9) == '\0');
  return uVar4;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WishingPoolSelectLine::Draw(Sexy::Graphics*) */

void __thiscall WishingPoolSelectLine::Draw(WishingPoolSelectLine *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  Image *pIVar4;
  undefined8 uVar5;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_03451b10(0x1e);
  iVar2 = FUN_03451b10(5);
  iVar3 = FUN_03451b10(0x46);
  Sexy::Graphics::DrawImage(param_1,*(Image **)(this + 0xf0),iVar1,iVar2,iVar3,iVar3);
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa1220);
  iVar1 = FUN_03451b10(0x78);
  iVar2 = FUN_03451b10(0x14);
  iVar3 = FUN_03451b10(0x28);
  Sexy::Graphics::DrawImage(param_1,pIVar4,iVar1,iVar2,iVar3,iVar3);
  iVar1 = FUN_03451b10(0xb4);
  iVar2 = FUN_03451b10(0x14a);
  Sexy::Insets::Insets(aIStack_18,iVar1,0,iVar2,*(int *)(this + 0x54));
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa0f88);
  Draw9SliceImage(param_1,aIStack_18,uVar5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WishingPoolSelectLine::WishingPoolSelectLine() */

void __thiscall WishingPoolSelectLine::WishingPoolSelectLine(WishingPoolSelectLine *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xd8));
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xe0));
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined ***)this = &PTR_GetClass_066347e0;
  *(undefined ***)(this + 0xd8) = &PTR__WishingPoolSelectLine_06634b10;
  *(undefined ***)(this + 0xe0) = &PTR_ButtonPress_06634b58;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf8));
  return;
}


/* WishingPoolSelectLine::~WishingPoolSelectLine() */

void __thiscall WishingPoolSelectLine::~WishingPoolSelectLine(WishingPoolSelectLine *this)

{
  *(undefined ***)this = &PTR_GetClass_066347e0;
  *(undefined ***)(this + 0xd8) = &PTR__WishingPoolSelectLine_06634b10;
  *(undefined ***)(this + 0xe0) = &PTR_ButtonPress_06634b58;
  std::vector<WishingPoolSelectItem*,std::allocator<WishingPoolSelectItem*>>::~vector
            ((vector<WishingPoolSelectItem*,std::allocator<WishingPoolSelectItem*>> *)(this + 0xf8))
  ;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* non-virtual thunk to WishingPoolSelectLine::~WishingPoolSelectLine() */

void __thiscall WishingPoolSelectLine::~WishingPoolSelectLine(WishingPoolSelectLine *this)

{
  ~WishingPoolSelectLine(this + -0xd8);
  return;
}


/* WishingPoolSelectLine::~WishingPoolSelectLine() */

void __thiscall WishingPoolSelectLine::~WishingPoolSelectLine(WishingPoolSelectLine *this)

{
  ~WishingPoolSelectLine(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WishingPoolSelectLine::~WishingPoolSelectLine() */

void __thiscall WishingPoolSelectLine::~WishingPoolSelectLine(WishingPoolSelectLine *this)

{
  ~WishingPoolSelectLine(this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WishingPoolSelectLine::InitView(int, std::vector<S2C_BonusInfo, std::allocator<S2C_BonusInfo> >&)
    */

void __thiscall
WishingPoolSelectLine::InitView(WishingPoolSelectLine *this,int param_1,vector *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  WishingPoolSelectItem *pWVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  WishingPoolSelectItem *local_10;
  long local_8;
  
  *(int *)(this + 0xe8) = param_1;
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat("IMAGE_UI_WISHINGPOOL_LINE%d",(string *)&local_10,(ulong)(param_1 + 1));
  uVar5 = StringHelper::ToImage((string *)&local_10,false);
  *(undefined8 *)(this + 0xf0) = uVar5;
  std::string::~string((string *)&local_10);
  uVar9 = 0;
  while( true ) {
    uVar8 = FUN_03450f08(*(undefined8 *)param_2,*(undefined8 *)(param_2 + 8));
    if (uVar8 <= uVar9) break;
    pWVar6 = ::operator_new(0x100);
    WishingPoolSelectItem::WishingPoolSelectItem(pWVar6);
    local_10 = pWVar6;
    iVar1 = FUN_03451b10(200);
    iVar2 = FUN_03451b10(0x5a);
    uVar3 = FUN_03451b10(5);
    uVar4 = FUN_03451b10(0x46);
    (**(code **)(*(long *)pWVar6 + 0x198))(pWVar6,iVar1 + iVar2 * (int)uVar9,uVar3,uVar4,uVar4);
    pWVar6 = local_10;
    puVar7 = (undefined8 *)FUN_03450f1c(*(undefined8 *)param_2,uVar9);
    WishingPoolSelectItem::InitView
              (pWVar6,this,uVar9 & 0xffffffff,*puVar7,*(undefined4 *)(puVar7 + 1));
    (**(code **)(*(long *)this + 0x60))(this,local_10);
    std::vector<WishingPoolSelectItem*,std::allocator<WishingPoolSelectItem*>>::push_back
              ((vector<WishingPoolSelectItem*,std::allocator<WishingPoolSelectItem*>> *)
               (this + 0xf8),&local_10);
    uVar9 = uVar9 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

