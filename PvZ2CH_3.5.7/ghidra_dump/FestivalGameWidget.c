// Class: FestivalGameWidget


/* FestivalGameWidget::~FestivalGameWidget() */

void __thiscall FestivalGameWidget::~FestivalGameWidget(FestivalGameWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06843d90;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::
  map<FestivalGameReward,int,std::less<FestivalGameReward>,std::allocator<std::pair<FestivalGameReward_const,int>>>
  ::~map((map<FestivalGameReward,int,std::less<FestivalGameReward>,std::allocator<std::pair<FestivalGameReward_const,int>>>
          *)(this + 0xe8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* FestivalGameWidget::~FestivalGameWidget() */

void __thiscall FestivalGameWidget::~FestivalGameWidget(FestivalGameWidget *this)

{
  ~FestivalGameWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalGameWidget::FestivalGameWidget(FestivalGameLevel, int, Sexy::ButtonListener*) */

void __thiscall
FestivalGameWidget::FestivalGameWidget
          (FestivalGameWidget *this,undefined4 param_2,int param_3,ButtonListener *param_4)

{
  int iVar1;
  undefined4 uVar2;
  FestivalManager *pFVar3;
  PVZ2UIButton *pPVar4;
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  *this_00;
  undefined1 auStack_80 [8];
  PVZ2UIImage aPStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  this_00 = (map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
             *)(this + 0xe8);
  *(undefined ***)this = &PTR_GetClass_06843d90;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(this_00);
  this[0xe4] = (FestivalGameWidget)0x0;
  *(undefined4 *)(this + 0xe0) = param_2;
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  std::
  map<FestivalGameReward,int,std::less<FestivalGameReward>,std::allocator<std::pair<FestivalGameReward_const,int>>>
  ::clear((map<FestivalGameReward,int,std::less<FestivalGameReward>,std::allocator<std::pair<FestivalGameReward_const,int>>>
           *)this_00);
  pFVar3 = (FestivalManager *)Sexy::LazySingleton<FestivalManager>::GetInstance();
  FestivalManager::GetFestivalRewardMap(pFVar3,this_00,*(undefined4 *)(this + 0xe0));
  FUN_05478178(aPStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar4 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar4,param_3,param_4,(wstring *)aPStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0xd8) = pPVar4;
  FUN_05476c50(aPStack_78);
  nop();
  iVar1 = *(int *)(this + 0xe0);
  if (iVar1 == 1) {
    pPVar4 = *(PVZ2UIButton **)(this + 0xd8);
    PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b03ac8,1);
    PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b03bc0,1);
    PVZ2UIButton::SetDialogStates(pPVar4,aPStack_78,aPStack_40);
    uVar2 = FUN_043bb090(0x4b);
    *(undefined4 *)(this + 0x120) = uVar2;
  }
  else if (iVar1 == 0) {
    pPVar4 = *(PVZ2UIButton **)(this + 0xd8);
    PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b03b70,1);
    PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b03770,1);
    PVZ2UIButton::SetDialogStates(pPVar4,aPStack_78,aPStack_40);
    uVar2 = FUN_043bb090(0x44);
    *(undefined4 *)(this + 0x120) = uVar2;
  }
  else if (iVar1 == 2) {
    pPVar4 = *(PVZ2UIButton **)(this + 0xd8);
    PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b03678,1);
    PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b03b98,1);
    PVZ2UIButton::SetDialogStates(pPVar4,aPStack_78,aPStack_40);
    uVar2 = FUN_043bb090(0x4d);
    *(undefined4 *)(this + 0x120) = uVar2;
  }
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0xd8));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalGameWidget::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
FestivalGameWidget::DrawAll(FestivalGameWidget *this,ModalFlags *param_1,Graphics *param_2)

{
  map<FestivalGameReward,int,std::less<FestivalGameReward>,std::allocator<std::pair<FestivalGameReward_const,int>>>
  *this_00;
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  long lVar8;
  Image *pIVar9;
  int iVar10;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  CachedUIResourcePtr<Sexy::Image> *this_01;
  
  local_8 = ___stack_chk_guard;
  this_00 = (map<FestivalGameReward,int,std::less<FestivalGameReward>,std::allocator<std::pair<FestivalGameReward_const,int>>>
             *)(this + 0xe8);
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  iVar3 = *(int *)(this + 0x118);
  iVar10 = 0;
  local_18 = std::
             map<FestivalGameReward,int,std::less<FestivalGameReward>,std::allocator<std::pair<FestivalGameReward_const,int>>>
             ::begin(this_00);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this_00);
  bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar2) {
    do {
      puVar7 = (undefined4 *)
               std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                         ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
      if (0 < (int)puVar7[1]) {
        iVar10 = iVar10 + 1;
        switch(*puVar7) {
        case 0:
          iVar6 = *(int *)(this + 0xe0);
          if (iVar6 == 0) {
            pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03cf0);
          }
          else if (iVar6 == 1) {
            pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03af8);
          }
          else {
            if (iVar6 != 2) goto switchD_043bc610_default;
            pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03d68);
          }
          break;
        case 1:
          pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03528);
          break;
        case 2:
          iVar6 = *(int *)(this + 0xe0);
          if (iVar6 == 0) {
            pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b039f8);
          }
          else if (iVar6 == 1) {
            pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03550);
          }
          else {
            if (iVar6 != 2) goto switchD_043bc610_default;
            pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03a50);
          }
          break;
        case 3:
          iVar6 = *(int *)(this + 0xe0);
          if (iVar6 == 0) {
            pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03c98);
          }
          else if (iVar6 == 1) {
            pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03d18);
          }
          else {
            if (iVar6 != 2) goto switchD_043bc610_default;
            pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03c48);
          }
          break;
        default:
          goto switchD_043bc610_default;
        }
        if ((pIVar9 != (Image *)0x0) &&
           (Sexy::Graphics::DrawImage(param_2,pIVar9,iVar3,*(int *)(this + 0x120)),
           *(int *)(this + 0x11c) != iVar10)) {
          iVar1 = *(int *)(pIVar9 + 0x38);
          iVar6 = FUN_043bb090(2);
          iVar6 = iVar3 + iVar1 + iVar6;
          pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03888);
          iVar3 = FUN_043bb090(9);
          Sexy::Graphics::DrawImage(param_2,pIVar9,iVar6,iVar3 + *(int *)(this + 0x120));
          lVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03888);
          iVar1 = *(int *)(lVar8 + 0x38);
          iVar3 = FUN_043bb090(2);
          iVar3 = iVar6 + iVar1 + iVar3;
        }
      }
switchD_043bc610_default:
      std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
      local_10 = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)this_00);
      bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    } while (bVar2);
  }
  iVar10 = *(int *)(this + 0xe0);
  if (iVar10 == 0) {
    pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b034c8);
    iVar10 = *(int *)(this + 0x50);
    iVar3 = *(int *)(pIVar9 + 0x38);
    iVar4 = FUN_043bb090(0xf);
    iVar6 = *(int *)(this + 0x54);
    iVar1 = *(int *)(pIVar9 + 0x3c);
    iVar5 = FUN_043bb090(0x16);
    Sexy::Graphics::DrawImage(param_2,pIVar9,(iVar10 - iVar3) - iVar4,(iVar6 - iVar1) - iVar5);
  }
  else {
    if (iVar10 == 1) {
      this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b036c8;
    }
    else {
      if (iVar10 != 2) goto LAB_043bc66c;
      this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b037c0;
    }
    pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_01);
    iVar10 = *(int *)(this + 0x50);
    iVar3 = *(int *)(pIVar9 + 0x38);
    iVar6 = FUN_043bb090(0xe);
    Sexy::Graphics::DrawImage
              (param_2,pIVar9,(iVar10 - iVar3) - iVar6,
               (*(int *)(this + 0x54) - *(int *)(pIVar9 + 0x3c)) - iVar6);
  }
LAB_043bc66c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalGameWidget::Resize(int, int, int, int) */

void __thiscall
FestivalGameWidget::Resize(FestivalGameWidget *this,int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
  plVar4 = *(long **)(this + 0xd8);
  if (plVar4 != (long *)0x0) {
    uVar2 = FUN_043bb090(0);
    (**(code **)(*plVar4 + 0x198))(plVar4,uVar2,uVar2,param_3,param_4);
  }
  *(undefined4 *)(this + 0x11c) = 0;
  local_18 = std::
             map<FestivalGameReward,int,std::less<FestivalGameReward>,std::allocator<std::pair<FestivalGameReward_const,int>>>
             ::begin((map<FestivalGameReward,int,std::less<FestivalGameReward>,std::allocator<std::pair<FestivalGameReward_const,int>>>
                      *)(this + 0xe8));
  while( true ) {
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)(this + 0xe8));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) break;
    lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    if (0 < *(int *)(lVar3 + 4)) {
      *(int *)(this + 0x11c) = *(int *)(this + 0x11c) + 1;
    }
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
  }
  uVar2 = FUN_043bb090(0xf);
  *(undefined4 *)(this + 0x118) = uVar2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

