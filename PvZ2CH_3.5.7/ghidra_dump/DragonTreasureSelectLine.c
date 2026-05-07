// Class: DragonTreasureSelectLine


/* DragonTreasureSelectLine::ScrollTargetReached(Sexy::ScrollWidget*) */

void DragonTreasureSelectLine::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to DragonTreasureSelectLine::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
DragonTreasureSelectLine::ScrollTargetReached(DragonTreasureSelectLine *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xd8));
  return;
}


/* DragonTreasureSelectLine::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void DragonTreasureSelectLine::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to DragonTreasureSelectLine::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
DragonTreasureSelectLine::ScrollTargetInterrupted
          (DragonTreasureSelectLine *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xd8));
  return;
}


/* DragonTreasureSelectLine::SelectItem(int) */

void __thiscall DragonTreasureSelectLine::SelectItem(DragonTreasureSelectLine *this,int param_1)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  PartyAssistWishingPoolSelectItem *this_00;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar4 = 0;
  uVar5 = *(undefined8 *)(this + 0xf8);
  lVar1 = FUN_03499f9c(uVar5,*(undefined8 *)(this + 0x100));
  if (lVar1 != 0) {
    do {
      puVar2 = (undefined8 *)FUN_03499fa8(uVar5,uVar4);
      this_00 = (PartyAssistWishingPoolSelectItem *)*puVar2;
      if (*(int *)(this_00 + 0xe4) == param_1) {
        PartyAssistWishingPoolSelectItem::SetSelect(this_00,true);
      }
      else {
        PartyAssistWishingPoolSelectItem::SetSelect(this_00,false);
      }
      uVar4 = uVar4 + 1;
      uVar5 = *(undefined8 *)(this + 0xf8);
      uVar3 = FUN_03499f9c(uVar5,*(undefined8 *)(this + 0x100));
    } while (uVar4 < uVar3);
  }
  return;
}


/* DragonTreasureSelectLine::GetSelectItemIndex() */

ulong __thiscall DragonTreasureSelectLine::GetSelectItemIndex(DragonTreasureSelectLine *this)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0xf8);
  uVar1 = FUN_03499f9c(uVar5,*(undefined8 *)(this + 0x100));
  uVar3 = 0;
  do {
    uVar4 = uVar3 & 0xffffffff;
    if (uVar3 == uVar1) {
      return 0xffffffff;
    }
    plVar2 = (long *)FUN_03499fa8(uVar5,uVar3);
    uVar3 = uVar3 + 1;
  } while (*(char *)(*plVar2 + 0xe9) == '\0');
  return uVar4;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DragonTreasureSelectLine::Draw(Sexy::Graphics*) */

void __thiscall DragonTreasureSelectLine::Draw(DragonTreasureSelectLine *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  Image *pIVar5;
  Insets aIStack_18 [16];
  long local_8;
  
  pIVar5 = *(Image **)(this + 0xf0);
  local_8 = ___stack_chk_guard;
  if (pIVar5 != (Image *)0x0) {
    iVar1 = FUN_0349abdc(0x1e);
    iVar2 = FUN_0349abdc(5);
    iVar3 = FUN_0349abdc(0x46);
    Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar3);
  }
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa2f28);
  iVar1 = FUN_0349abdc(0x78);
  iVar2 = FUN_0349abdc(0x14);
  iVar3 = FUN_0349abdc(0x28);
  Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar3);
  iVar1 = FUN_0349abdc(0xb4);
  iVar2 = FUN_0349abdc(0x14a);
  Sexy::Insets::Insets(aIStack_18,iVar1,0,iVar2,*(int *)(this + 0x54));
  uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa2c60);
  Draw9SliceImage(param_1,aIStack_18,uVar4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DragonTreasureSelectLine::DragonTreasureSelectLine() */

void __thiscall DragonTreasureSelectLine::DragonTreasureSelectLine(DragonTreasureSelectLine *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xd8));
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xe0));
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined ***)this = &PTR_GetClass_066445b0;
  *(undefined ***)(this + 0xd8) = &PTR__DragonTreasureSelectLine_066448e0;
  *(undefined ***)(this + 0xe0) = &PTR_ButtonPress_06644928;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf8));
  return;
}


/* DragonTreasureSelectLine::~DragonTreasureSelectLine() */

void __thiscall DragonTreasureSelectLine::~DragonTreasureSelectLine(DragonTreasureSelectLine *this)

{
  *(undefined ***)this = &PTR_GetClass_066445b0;
  *(undefined ***)(this + 0xd8) = &PTR__DragonTreasureSelectLine_066448e0;
  *(undefined ***)(this + 0xe0) = &PTR_ButtonPress_06644928;
  std::vector<DragonTreasureSelectItem*,std::allocator<DragonTreasureSelectItem*>>::~vector
            ((vector<DragonTreasureSelectItem*,std::allocator<DragonTreasureSelectItem*>> *)
             (this + 0xf8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* non-virtual thunk to DragonTreasureSelectLine::~DragonTreasureSelectLine() */

void __thiscall DragonTreasureSelectLine::~DragonTreasureSelectLine(DragonTreasureSelectLine *this)

{
  ~DragonTreasureSelectLine(this + -0xd8);
  return;
}


/* DragonTreasureSelectLine::~DragonTreasureSelectLine() */

void __thiscall DragonTreasureSelectLine::~DragonTreasureSelectLine(DragonTreasureSelectLine *this)

{
  ~DragonTreasureSelectLine(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DragonTreasureSelectLine::~DragonTreasureSelectLine() */

void __thiscall DragonTreasureSelectLine::~DragonTreasureSelectLine(DragonTreasureSelectLine *this)

{
  ~DragonTreasureSelectLine(this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DragonTreasureSelectLine::InitView(int, std::vector<DragonTreasureItemData,
   std::allocator<DragonTreasureItemData> >&) */

void __thiscall
DragonTreasureSelectLine::InitView(DragonTreasureSelectLine *this,int param_1,vector *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  DragonTreasureSelectItem *pDVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  DragonTreasureSelectItem *local_10;
  long local_8;
  
  *(int *)(this + 0xe8) = param_1;
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat("IMAGE_UI_DragonTreasure_LINE%d",(string *)&local_10,(ulong)(param_1 + 1));
  uVar5 = StringHelper::ToImage((string *)&local_10,false);
  *(undefined8 *)(this + 0xf0) = uVar5;
  std::string::~string((string *)&local_10);
  uVar9 = 0;
  while( true ) {
    uVar8 = FUN_03499f14(*(undefined8 *)param_2,*(undefined8 *)(param_2 + 8));
    if (uVar8 <= uVar9) break;
    pDVar6 = ::operator_new(0x100);
    DragonTreasureSelectItem::DragonTreasureSelectItem(pDVar6);
    local_10 = pDVar6;
    iVar1 = FUN_0349abdc(200);
    iVar2 = FUN_0349abdc(0x5a);
    uVar3 = FUN_0349abdc(5);
    uVar4 = FUN_0349abdc(0x46);
    (**(code **)(*(long *)pDVar6 + 0x198))(pDVar6,iVar1 + iVar2 * (int)uVar9,uVar3,uVar4,uVar4);
    pDVar6 = local_10;
    puVar7 = (undefined8 *)FUN_03499f08(*(undefined8 *)param_2,uVar9);
    DragonTreasureSelectItem::InitView
              (pDVar6,this,uVar9 & 0xffffffff,*puVar7,*(undefined4 *)(puVar7 + 1));
    (**(code **)(*(long *)this + 0x60))(this,local_10);
    std::vector<DragonTreasureSelectItem*,std::allocator<DragonTreasureSelectItem*>>::push_back
              ((vector<DragonTreasureSelectItem*,std::allocator<DragonTreasureSelectItem*>> *)
               (this + 0xf8),&local_10);
    uVar9 = uVar9 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

