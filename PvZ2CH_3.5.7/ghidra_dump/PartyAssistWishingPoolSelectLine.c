// Class: PartyAssistWishingPoolSelectLine


/* PartyAssistWishingPoolSelectLine::ScrollTargetReached(Sexy::ScrollWidget*) */

void PartyAssistWishingPoolSelectLine::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to PartyAssistWishingPoolSelectLine::ScrollTargetReached(Sexy::ScrollWidget*)
    */

void __thiscall
PartyAssistWishingPoolSelectLine::ScrollTargetReached
          (PartyAssistWishingPoolSelectLine *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xd8));
  return;
}


/* PartyAssistWishingPoolSelectLine::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void PartyAssistWishingPoolSelectLine::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to
   PartyAssistWishingPoolSelectLine::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
PartyAssistWishingPoolSelectLine::ScrollTargetInterrupted
          (PartyAssistWishingPoolSelectLine *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xd8));
  return;
}


/* PartyAssistWishingPoolSelectLine::GetSelectItemIndex() */

ulong __thiscall
PartyAssistWishingPoolSelectLine::GetSelectItemIndex(PartyAssistWishingPoolSelectLine *this)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0xf8);
  uVar1 = FUN_04ea24a0(uVar5,*(undefined8 *)(this + 0x100));
  uVar3 = 0;
  do {
    uVar4 = uVar3 & 0xffffffff;
    if (uVar3 == uVar1) {
      return 0xffffffff;
    }
    plVar2 = (long *)FUN_04ea24ac(uVar5,uVar3);
    uVar3 = uVar3 + 1;
  } while (*(char *)(*plVar2 + 0xe9) == '\0');
  return uVar4;
}


/* PartyAssistWishingPoolSelectLine::SelectItem(int) */

void __thiscall
PartyAssistWishingPoolSelectLine::SelectItem(PartyAssistWishingPoolSelectLine *this,int param_1)

{
  char cVar1;
  ulong uVar2;
  undefined8 *puVar3;
  bool bVar4;
  ulong uVar5;
  PartyAssistWishingPoolSelectItem *this_00;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(this + 0xf8);
  uVar2 = FUN_04ea24a0(uVar6,*(undefined8 *)(this + 0x100));
  uVar5 = 0;
  if (uVar2 != 0) {
    do {
      puVar3 = (undefined8 *)FUN_04ea24ac(uVar6,uVar5);
      this_00 = (PartyAssistWishingPoolSelectItem *)*puVar3;
      if (*(int *)(this_00 + 0xe4) == param_1) {
        bVar4 = true;
LAB_04ea45f4:
        PartyAssistWishingPoolSelectItem::SetSelect(this_00,bVar4);
        uVar6 = *(undefined8 *)(this + 0xf8);
        uVar2 = FUN_04ea24a0(uVar6,*(undefined8 *)(this + 0x100));
      }
      else {
        cVar1 = FUN_04ea1d70(this_00[0xe8]);
        if (cVar1 != '\0') {
          bVar4 = false;
          goto LAB_04ea45f4;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PartyAssistWishingPoolSelectLine::Draw(Sexy::Graphics*) */

void __thiscall
PartyAssistWishingPoolSelectLine::Draw(PartyAssistWishingPoolSelectLine *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  Image *pIVar4;
  undefined8 uVar5;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04ea3948(0x1e);
  iVar2 = FUN_04ea3948(5);
  iVar3 = FUN_04ea3948(0x46);
  Sexy::Graphics::DrawImage(param_1,*(Image **)(this + 0xf0),iVar1,iVar2,iVar3,iVar3);
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba1ad0);
  iVar1 = FUN_04ea3948(0x78);
  iVar2 = FUN_04ea3948(0x14);
  iVar3 = FUN_04ea3948(0x28);
  Sexy::Graphics::DrawImage(param_1,pIVar4,iVar1,iVar2,iVar3,iVar3);
  iVar1 = FUN_04ea3948(0xb4);
  iVar2 = FUN_04ea3948(0x1d6);
  Sexy::Insets::Insets(aIStack_18,iVar1,0,iVar2,*(int *)(this + 0x54));
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba1790);
  Draw9SliceImage(param_1,aIStack_18,uVar5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PartyAssistWishingPoolSelectLine::PartyAssistWishingPoolSelectLine() */

void __thiscall
PartyAssistWishingPoolSelectLine::PartyAssistWishingPoolSelectLine
          (PartyAssistWishingPoolSelectLine *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xd8));
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xe0));
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined ***)this = &PTR_GetClass_069f0c10;
  *(undefined ***)(this + 0xd8) = &PTR__PartyAssistWishingPoolSelectLine_069f0f40;
  *(undefined ***)(this + 0xe0) = &PTR_ButtonPress_069f0f88;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf8));
  return;
}


/* PartyAssistWishingPoolSelectLine::~PartyAssistWishingPoolSelectLine() */

void __thiscall
PartyAssistWishingPoolSelectLine::~PartyAssistWishingPoolSelectLine
          (PartyAssistWishingPoolSelectLine *this)

{
  *(undefined ***)this = &PTR_GetClass_069f0c10;
  *(undefined ***)(this + 0xd8) = &PTR__PartyAssistWishingPoolSelectLine_069f0f40;
  *(undefined ***)(this + 0xe0) = &PTR_ButtonPress_069f0f88;
  std::vector<PartyAssistWishingPoolSelectItem*,std::allocator<PartyAssistWishingPoolSelectItem*>>::
  ~vector((vector<PartyAssistWishingPoolSelectItem*,std::allocator<PartyAssistWishingPoolSelectItem*>>
           *)(this + 0xf8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* non-virtual thunk to PartyAssistWishingPoolSelectLine::~PartyAssistWishingPoolSelectLine() */

void __thiscall
PartyAssistWishingPoolSelectLine::~PartyAssistWishingPoolSelectLine
          (PartyAssistWishingPoolSelectLine *this)

{
  ~PartyAssistWishingPoolSelectLine(this + -0xd8);
  return;
}


/* PartyAssistWishingPoolSelectLine::~PartyAssistWishingPoolSelectLine() */

void __thiscall
PartyAssistWishingPoolSelectLine::~PartyAssistWishingPoolSelectLine
          (PartyAssistWishingPoolSelectLine *this)

{
  ~PartyAssistWishingPoolSelectLine(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PartyAssistWishingPoolSelectLine::~PartyAssistWishingPoolSelectLine() */

void __thiscall
PartyAssistWishingPoolSelectLine::~PartyAssistWishingPoolSelectLine
          (PartyAssistWishingPoolSelectLine *this)

{
  ~PartyAssistWishingPoolSelectLine(this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PartyAssistWishingPoolSelectLine::InitView(int, std::vector<PartyAssistWishBonusInfo,
   std::allocator<PartyAssistWishBonusInfo> >&) */

void __thiscall
PartyAssistWishingPoolSelectLine::InitView
          (PartyAssistWishingPoolSelectLine *this,int param_1,vector *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  PartyAssistWishingPoolSelectItem *pPVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  PartyAssistWishingPoolSelectItem *local_10;
  long local_8;
  
  *(int *)(this + 0xe8) = param_1;
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat("IMAGE_UI_PARTY_ASSIST_LINE%d",(string *)&local_10,(ulong)(param_1 + 1));
  uVar5 = StringHelper::ToImage((string *)&local_10,false);
  *(undefined8 *)(this + 0xf0) = uVar5;
  std::string::~string((string *)&local_10);
  uVar9 = 0;
  while( true ) {
    uVar8 = FUN_04ea2470(*(undefined8 *)param_2,*(undefined8 *)(param_2 + 8));
    if (uVar8 <= uVar9) break;
    pPVar6 = ::operator_new(0x110);
    PartyAssistWishingPoolSelectItem::PartyAssistWishingPoolSelectItem(pPVar6);
    local_10 = pPVar6;
    iVar1 = FUN_04ea3948(200);
    iVar2 = FUN_04ea3948(0x5a);
    uVar3 = FUN_04ea3948(5);
    uVar4 = FUN_04ea3948(0x46);
    (**(code **)(*(long *)pPVar6 + 0x198))(pPVar6,iVar1 + iVar2 * (int)uVar9,uVar3,uVar4,uVar4);
    pPVar6 = local_10;
    puVar7 = (undefined8 *)FUN_04ea2464(*(undefined8 *)param_2,uVar9);
    PartyAssistWishingPoolSelectItem::InitView
              (pPVar6,this,uVar9 & 0xffffffff,*puVar7,*(undefined4 *)(puVar7 + 1));
    (**(code **)(*(long *)this + 0x60))(this,local_10);
    std::vector<PartyAssistWishingPoolSelectItem*,std::allocator<PartyAssistWishingPoolSelectItem*>>
    ::push_back((vector<PartyAssistWishingPoolSelectItem*,std::allocator<PartyAssistWishingPoolSelectItem*>>
                 *)(this + 0xf8),&local_10);
    uVar9 = uVar9 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

