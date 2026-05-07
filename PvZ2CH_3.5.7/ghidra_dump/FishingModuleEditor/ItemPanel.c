// Class: FishingModuleEditor::ItemPanel


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingModuleEditor::ItemPanel::InitData(FishingModuleEditor::ItemData&, int) */

void __thiscall
FishingModuleEditor::ItemPanel::InitData(ItemPanel *this,ItemData *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  string asStack_10 [8];
  long local_8;
  
  iVar1 = *(int *)(this + 0x48);
  local_8 = ___stack_chk_guard;
  *(int *)param_1 = iVar1 + 1;
  uVar2 = FUN_0547429c(this + 0x50);
  Sexy::StrFormat("%s%d",asStack_10,uVar2,(ulong)(uint)((iVar1 + 1) - param_2));
  FUN_05474278(param_1 + 8,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingModuleEditor::ItemPanel::LayoutPanel() */

void __thiscall FishingModuleEditor::ItemPanel::LayoutPanel(ItemPanel *this)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  lVar4 = *(long *)this;
  iVar5 = 0;
  local_8 = ___stack_chk_guard;
  local_18 = FUN_047b99d4(*(TaskResource **)(lVar4 + 8));
  local_10 = std::
             __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                       ((TaskResource **)(lVar4 + 8));
  while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10), bVar1
        ) {
    plVar3 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                               ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
    lVar4 = *plVar3;
    *(int *)(lVar4 + 0x4c) = iVar5;
    *(undefined4 *)(lVar4 + 0x48) = 0;
    iVar2 = FUN_047b946c(1);
    iVar5 = iVar5 + iVar2 + *(int *)(lVar4 + 0x54);
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
  }
  lVar4 = *(long *)this;
  *(int *)(lVar4 + 0x54) = iVar5;
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(lVar4 + 0x20),2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FishingModuleEditor::ItemPanel::ItemPanel() */

void __thiscall FishingModuleEditor::ItemPanel::ItemPanel(ItemPanel *this)

{
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x10));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x18));
  *(undefined4 *)(this + 0x48) = 0;
  Set8BytesTo0(this + 0x50);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingModuleEditor::ItemPanel::GetSelectedItem() */

void __thiscall FishingModuleEditor::ItemPanel::GetSelectedItem(ItemPanel *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<int,FishingModuleEditor::ItemData,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemData>>>
             ::begin((map<int,FishingModuleEditor::ItemData,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemData>>>
                      *)(this + 0x18));
  do {
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)(this + 0x18));
    bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar2) {
      lVar3 = 0;
LAB_047ba0f8:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(lVar3);
    }
    lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    cVar1 = FUN_047b9144(*(undefined1 *)(*(long *)(lVar3 + 0x30) + 0x1a8));
    if (cVar1 != '\0') {
      lVar3 = lVar3 + 8;
      goto LAB_047ba0f8;
    }
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
  } while( true );
}


/* FishingModuleEditor::ItemPanel::~ItemPanel() */

void __thiscall FishingModuleEditor::ItemPanel::~ItemPanel(ItemPanel *this)

{
  std::string::~string((string *)(this + 0x50));
  std::
  map<int,FishingModuleEditor::ItemData,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemData>>>
  ::~map((map<int,FishingModuleEditor::ItemData,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemData>>>
          *)(this + 0x18));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingModuleEditor::ItemPanel::RefreshIDGen(int) */

void __thiscall FishingModuleEditor::ItemPanel::RefreshIDGen(ItemPanel *this,int param_1)

{
  bool bVar1;
  int iVar2;
  pair *ppVar3;
  char *__s;
  char *__format;
  int iVar4;
  int local_5c;
  string asStack_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  pair<int,FishingModuleEditor::ItemData> apStack_40 [16];
  undefined1 auStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_5c = 0;
  std::operator+((string *)(this + 0x50),"%d");
  iVar4 = 0;
  local_50 = std::
             map<int,FishingModuleEditor::ItemData,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemData>>>
             ::begin((map<int,FishingModuleEditor::ItemData,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemData>>>
                      *)(this + 0x18));
  local_48 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x18));
  while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_50,(rbtree_iterator *)&local_48), bVar1
        ) {
    ppVar3 = (pair *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                               ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_50);
    std::pair<int_const,FishingModuleEditor::ItemData>::pair
              ((pair<int_const,FishingModuleEditor::ItemData> *)apStack_40,ppVar3);
    __s = (char *)FUN_0547429c(auStack_30);
    __format = (char *)FUN_0547429c(asStack_58);
    iVar2 = sscanf(__s,__format,&local_5c);
    if ((iVar2 == 1) && (iVar4 < local_5c)) {
      iVar4 = local_5c;
    }
    std::pair<int,FishingModuleEditor::ItemData>::~pair(apStack_40);
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_50);
  }
  *(int *)(this + 0x48) = param_1 + iVar4;
  std::string::~string(asStack_58);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingModuleEditor::ItemPanel::GetItem(int) */

void __thiscall FishingModuleEditor::ItemPanel::GetItem(ItemPanel *this,int param_1)

{
  map<int,FishingModuleEditor::ItemData,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemData>>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  int local_24 [3];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (map<int,FishingModuleEditor::ItemData,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemData>>>
             *)(this + 0x18);
  local_8 = ___stack_chk_guard;
  local_24[0] = param_1;
  local_18 = std::
             map<int,FishingModuleEditor::ItemData,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemData>>>
             ::find(this_00,local_24);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this_00);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    uVar2 = std::
            map<int,FishingModuleEditor::ItemData,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemData>>>
            ::operator[](this_00,local_24);
  }
  else {
    uVar2 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* FishingModuleEditor::ItemPanel::RemoveItem(int, bool) */

void __thiscall FishingModuleEditor::ItemPanel::RemoveItem(ItemPanel *this,int param_1,bool param_2)

{
  long lVar1;
  
  lVar1 = GetItem(this,param_1);
  if (lVar1 != 0) {
    if (param_2) {
      (**(code **)(**(long **)this + 0x68))(*(long **)this,*(undefined8 *)(lVar1 + 0x28));
      if (*(long **)(lVar1 + 0x28) != (long *)0x0) {
        (**(code **)(**(long **)(lVar1 + 0x28) + 0x18))();
      }
    }
    std::
    map<int,FishingModuleEditor::ItemData,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemData>>>
    ::erase((int *)(this + 0x18));
  }
  return;
}


/* FishingModuleEditor::ItemPanel::SelectItem(int) */

void __thiscall FishingModuleEditor::ItemPanel::SelectItem(ItemPanel *this,int param_1)

{
  char cVar1;
  long lVar2;
  PVZ2UIButton *pPVar3;
  
  lVar2 = GetItem(this,param_1);
  if (lVar2 != 0) {
    pPVar3 = *(PVZ2UIButton **)(lVar2 + 0x28);
    cVar1 = FUN_047b9144(pPVar3[0x1a8]);
    if (cVar1 == '\0') {
      PVZ2UIButton::SetRadioButtonSelected(pPVar3);
    }
  }
  pPVar3 = *(PVZ2UIButton **)(this + 8);
  cVar1 = FUN_047b9144(pPVar3[0x1a8]);
  if (cVar1 != '\0') {
    return;
  }
  PVZ2UIButton::SetRadioButtonSelected(pPVar3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingModuleEditor::ItemPanel::AddItem(FishingModuleEditor::ItemData&) */

void __thiscall FishingModuleEditor::ItemPanel::AddItem(ItemPanel *this,ItemData *param_1)

{
  map<int,FishingModuleEditor::ItemData,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemData>>>
  *this_00;
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  ItemData *this_01;
  long *plVar5;
  long lVar6;
  PVZ2UIButton *pPVar7;
  undefined8 local_a8;
  undefined8 local_a0;
  PVZ2UIButton *local_98;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_90 [24];
  undefined8 local_78 [7];
  undefined8 local_40 [7];
  long local_8;
  
  this_00 = (map<int,FishingModuleEditor::ItemData,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemData>>>
             *)(this + 0x18);
  local_8 = ___stack_chk_guard;
  local_78[0] = std::
                map<int,FishingModuleEditor::ItemData,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemData>>>
                ::find(this_00,(int *)param_1);
  local_40[0] = std::
                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)this_00);
  bVar1 = eastl::operator!=((rbtree_iterator *)local_78,(rbtree_iterator *)local_40);
  if (bVar1) {
    if (*(long **)(param_1 + 0x28) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x28) + 0x18))();
    }
  }
  else {
    if (*(int *)(this + 0x48) < *(int *)param_1) {
      *(int *)(this + 0x48) = *(int *)param_1;
    }
    pPVar7 = *(PVZ2UIButton **)(param_1 + 0x28);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_78,&DAT_06b26178,2);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06b26240,2);
    PVZ2UIButton::SetRadioStates(pPVar7,(PVZ2UIImage *)local_78,(PVZ2UIImage *)local_40,false);
    FUN_047b9408(*(long *)(param_1 + 0x28) + 0x2c0);
    plVar5 = *(long **)(param_1 + 0x28);
    uVar2 = FUN_047b946c(0x82);
    uVar3 = FUN_047b946c(0x1e);
    (**(code **)(*plVar5 + 0x198))(plVar5,0,0,uVar2,uVar3);
    (**(code **)(**(long **)this + 0x60))(*(long **)this,*(undefined8 *)(param_1 + 0x28));
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_90);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_78);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_90,
               (PVZ2UIButton **)(param_1 + 0x28));
    lVar6 = *(long *)this;
    local_a8 = FUN_047b99d4(*(TaskResource **)(lVar6 + 8));
    local_a0 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)(lVar6 + 8));
    while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_a8,(rbtree_iterator *)&local_a0),
          bVar1) {
      puVar4 = (undefined8 *)
               std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                         ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_a8);
      pPVar7 = (PVZ2UIButton *)*puVar4;
      local_98 = pPVar7;
      std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::vector
                ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)local_40,
                 (vector *)avStack_90);
      PVZ2UIButton::LinkRadioButtons
                (pPVar7,(vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)local_40);
      std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::~vector
                ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)local_40);
      std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
                ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)local_78,&local_98);
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)&local_a8);
    }
    pPVar7 = *(PVZ2UIButton **)(param_1 + 0x28);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::vector
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)local_40,(vector *)local_78);
    PVZ2UIButton::LinkRadioButtons
              (pPVar7,(vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)local_40);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::~vector
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)local_40);
    this_01 = (ItemData *)
              std::
              map<int,FishingModuleEditor::ItemData,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemData>>>
              ::operator[](this_00,(int *)param_1);
    ItemData::operator=(this_01,param_1);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::~vector
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)local_78);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::~vector
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_90);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

