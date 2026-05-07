// Class: WidgetDebugPosition


/* WidgetDebugPosition::TouchMoved(Sexy::Touch const&) */

void __thiscall WidgetDebugPosition::TouchMoved(WidgetDebugPosition *this,Touch *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  iVar1 = *(int *)(param_1 + 0x14);
  iVar2 = *(int *)(param_1 + 0x10);
  iVar3 = iVar2 - *(int *)(this + 0x108);
  iVar4 = iVar1 - *(int *)(this + 0x10c);
  if (this[0x110] == (WidgetDebugPosition)0x0) {
    iVar5 = (**(code **)(*gLawnApp + 0x470))(gLawnApp);
    if (iVar5 * iVar5 < iVar4 * iVar4 + iVar3 * iVar3) {
      this[0x110] = (WidgetDebugPosition)0x1;
    }
    else if (this[0x110] == (WidgetDebugPosition)0x0) {
      return;
    }
  }
  piVar6 = *(int **)(this + 0x118);
  if (piVar6 != (int *)0x0) {
    *piVar6 = *piVar6 + iVar3;
    piVar6[1] = piVar6[1] + iVar4;
    *(int *)(this + 0x108) = iVar2;
    *(int *)(this + 0x10c) = iVar1;
  }
  return;
}


/* WidgetDebugPosition::TouchEnded(Sexy::Touch const&) */

void WidgetDebugPosition::TouchEnded(Touch *param_1)

{
  param_1[0x110] = (Touch)0x0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  return;
}


/* WidgetDebugPosition::~WidgetDebugPosition() */

void __thiscall WidgetDebugPosition::~WidgetDebugPosition(WidgetDebugPosition *this)

{
  *(undefined ***)this = &PTR_GetClass_06947780;
  std::
  map<int,Sexy::TRect<int>*,std::less<int>,std::allocator<std::pair<int_const,Sexy::TRect<int>*>>>::
  clear((map<int,Sexy::TRect<int>*,std::less<int>,std::allocator<std::pair<int_const,Sexy::TRect<int>*>>>
         *)(this + 0xd8));
  std::
  map<int,Sexy::TRect<int>*,std::less<int>,std::allocator<std::pair<int_const,Sexy::TRect<int>*>>>::
  ~map((map<int,Sexy::TRect<int>*,std::less<int>,std::allocator<std::pair<int_const,Sexy::TRect<int>*>>>
        *)(this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* WidgetDebugPosition::~WidgetDebugPosition() */

void __thiscall WidgetDebugPosition::~WidgetDebugPosition(WidgetDebugPosition *this)

{
  ~WidgetDebugPosition(this);
  AK::FreeHook(this);
  return;
}


/* WidgetDebugPosition::WidgetDebugPosition() */

void __thiscall WidgetDebugPosition::WidgetDebugPosition(WidgetDebugPosition *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06947780;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0xd8));
  Sexy::Point::Point((Point *)(this + 0x108),0,0);
  this[0x110] = (WidgetDebugPosition)0x0;
  *(undefined8 *)(this + 0x118) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WidgetDebugPosition::Draw(Sexy::Graphics*) */

void __thiscall WidgetDebugPosition::Draw(WidgetDebugPosition *this,Graphics *param_1)

{
  PieceConfig *pPVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  wchar_t *pwVar7;
  undefined8 uVar8;
  PieceConfig *pPVar9;
  int iVar10;
  float fVar11;
  undefined8 local_1c8;
  undefined1 auStack_1c0 [8];
  Insets aIStack_1b8 [16];
  undefined8 local_1a8 [2];
  PieceConfig local_198 [4];
  undefined4 local_194 [99];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar9 = local_198;
  do {
    pPVar1 = pPVar9 + 8;
    PieceConfig::PieceConfig(pPVar9);
    pPVar9 = pPVar1;
  } while (pPVar1 != (PieceConfig *)&local_8);
  local_1c8 = std::
              map<int,Sexy::TRect<int>*,std::less<int>,std::allocator<std::pair<int_const,Sexy::TRect<int>*>>>
              ::begin((map<int,Sexy::TRect<int>*,std::less<int>,std::allocator<std::pair<int_const,Sexy::TRect<int>*>>>
                       *)(this + 0xd8));
  pPVar9 = local_198;
  iVar10 = 0;
  while( true ) {
    local_1a8[0] = std::
                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)(this + 0xd8));
    bVar2 = eastl::operator!=((rbtree_iterator *)&local_1c8,(rbtree_iterator *)local_1a8);
    if (!bVar2) break;
    lVar6 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_1c8);
    fVar11 = (float)FUN_04a9a748(0x3f800000);
    *(float *)pPVar9 = (float)**(int **)(lVar6 + 8) / fVar11;
    lVar6 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_1c8);
    fVar11 = (float)FUN_04a9a748(0x3f800000);
    *(float *)(pPVar9 + 4) = (float)*(int *)(*(long *)(lVar6 + 8) + 4) / fVar11;
    TodStringTranslate(L"%d; %d");
    pwVar7 = (wchar_t *)FUN_054766ec((rbtree_iterator *)local_1a8);
    Sexy::StrFormat(pwVar7,auStack_1c0,(ulong)(uint)(int)*(float *)pPVar9,
                    (ulong)(uint)(int)*(float *)(pPVar9 + 4));
    FUN_05476c50((rbtree_iterator *)local_1a8);
    iVar3 = FUN_04a9a734(200);
    iVar4 = FUN_04a9a734(10);
    iVar5 = FUN_04a9a734(0x1e);
    Sexy::Insets::Insets(aIStack_1b8,iVar3,iVar4 + iVar10 * iVar5,iVar3,iVar5);
    uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
    Sexy::Color::Color((Color *)local_1a8,1);
    WriteWordInRect(param_1,auStack_1c0,aIStack_1b8,uVar8,(rbtree_iterator *)local_1a8,3,1);
    FUN_05476c50(auStack_1c0);
    FUN_04a9a384((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_1c8);
    pPVar9 = pPVar9 + 8;
    iVar10 = iVar10 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WidgetDebugPosition::TouchBegan(Sexy::Touch const&) */

void __thiscall WidgetDebugPosition::TouchBegan(WidgetDebugPosition *this,Touch *param_1)

{
  map<int,Sexy::TRect<int>*,std::less<int>,std::allocator<std::pair<int_const,Sexy::TRect<int>*>>>
  *this_00;
  SexyVector4 *pSVar1;
  WidgetRects *pWVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  char cVar7;
  long lVar8;
  long *plVar9;
  undefined4 *puVar10;
  SexyVector4 *pSVar11;
  undefined8 *puVar12;
  float fVar13;
  undefined8 local_738;
  undefined8 local_730;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_728 [24];
  SexyVector4 local_710 [4];
  undefined4 local_70c;
  undefined8 local_708;
  SexyVector4 local_3f0 [4];
  undefined8 local_3ec [124];
  long local_8;
  
  iVar4 = *(int *)(param_1 + 0x10);
  iVar5 = *(int *)(param_1 + 0x14);
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0x10c) = iVar5;
  this_00 = (map<int,Sexy::TRect<int>*,std::less<int>,std::allocator<std::pair<int_const,Sexy::TRect<int>*>>>
             *)(this + 0xd8);
  *(int *)(this + 0x108) = iVar4;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_728);
  local_738 = std::
              map<int,Sexy::TRect<int>*,std::less<int>,std::allocator<std::pair<int_const,Sexy::TRect<int>*>>>
              ::begin(this_00);
  while( true ) {
    local_730 = std::
                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)this_00);
    bVar6 = eastl::operator!=((rbtree_iterator *)&local_738,(rbtree_iterator *)&local_730);
    if (!bVar6) break;
    lVar8 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_738);
    cVar7 = Sexy::TRect<int>::Contains(*(TRect<int> **)(lVar8 + 8),iVar4,iVar5);
    if (cVar7 != '\0') {
      std::vector<Sexy::TRect<int>*,std::allocator<Sexy::TRect<int>*>>::push_back
                ((vector<Sexy::TRect<int>*,std::allocator<Sexy::TRect<int>*>> *)avStack_728,
                 (TRect **)(lVar8 + 8));
      lVar8 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_738);
      *(undefined8 *)(this + 0x118) = *(undefined8 *)(lVar8 + 8);
    }
    FUN_04a9a384((rbtree_iterator *)&local_738);
  }
  local_738 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_728);
  while( true ) {
    local_730 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_728);
    bVar6 = __gnu_cxx::operator!=((__normal_iterator *)&local_738,(__normal_iterator *)&local_730);
    if (!bVar6) break;
    plVar9 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_738);
    if (*(int *)(*plVar9 + 8) < *(int *)(*(long *)(this + 0x118) + 8)) {
      *(long *)(this + 0x118) = *plVar9;
    }
    FUN_04a9c574((rbtree_iterator *)&local_738);
  }
  pSVar11 = local_710;
  do {
    pSVar1 = pSVar11 + 0x10;
    Sexy::SexyVector4::SexyVector4(pSVar11);
    pSVar11 = pSVar1;
  } while (pSVar1 != local_3f0);
  pSVar11 = local_3f0;
  do {
    pWVar2 = (WidgetRects *)(pSVar11 + 0x14);
    WidgetRects::WidgetRects((WidgetRects *)pSVar11);
    pSVar11 = (SexyVector4 *)pWVar2;
  } while (pWVar2 != (WidgetRects *)&local_8);
  local_738 = std::
              map<int,Sexy::TRect<int>*,std::less<int>,std::allocator<std::pair<int_const,Sexy::TRect<int>*>>>
              ::begin(this_00);
  pSVar11 = local_710;
  puVar12 = local_3ec;
  while( true ) {
    local_730 = std::
                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)this_00);
    bVar6 = eastl::operator!=((rbtree_iterator *)&local_738,(rbtree_iterator *)&local_730);
    if (!bVar6) break;
    lVar8 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_738);
    fVar13 = (float)FUN_04a9a748(0x3f800000);
    *(float *)pSVar11 = (float)**(int **)(lVar8 + 8) / fVar13;
    lVar8 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_738);
    fVar13 = (float)FUN_04a9a748(0x3f800000);
    *(float *)(pSVar11 + 4) = (float)*(int *)(*(long *)(lVar8 + 8) + 4) / fVar13;
    lVar8 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_738);
    fVar13 = (float)FUN_04a9a748(0x3f800000);
    *(float *)(pSVar11 + 8) = (float)*(int *)(*(long *)(lVar8 + 8) + 8) / fVar13;
    lVar8 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_738);
    fVar13 = (float)FUN_04a9a748(0x3f800000);
    *(float *)(pSVar11 + 0xc) = (float)*(int *)(*(long *)(lVar8 + 8) + 0xc) / fVar13;
    uVar3 = *(undefined8 *)(pSVar11 + 8);
    *puVar12 = *(undefined8 *)pSVar11;
    puVar12[1] = uVar3;
    puVar10 = (undefined4 *)
              std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_738);
    *(undefined4 *)((long)puVar12 + -4) = *puVar10;
    FUN_04a9a384((rbtree_iterator *)&local_738);
    pSVar11 = pSVar11 + 0x10;
    puVar12 = (undefined8 *)((long)puVar12 + 0x14);
  }
  std::vector<Sexy::TRect<int>*,std::allocator<Sexy::TRect<int>*>>::~vector
            ((vector<Sexy::TRect<int>*,std::allocator<Sexy::TRect<int>*>> *)avStack_728);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

