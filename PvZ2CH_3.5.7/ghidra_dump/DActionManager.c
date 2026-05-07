// Class: DActionManager


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DActionManager::getActionNumber(DTransformNode*) */

void __thiscall DActionManager::getActionNumber(DActionManager *this,DTransformNode *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  DTransformNode *local_28 [2];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28[0] = param_1;
  local_18 = std::
             map<DTransformNode*,DActionManager::DActionElement,std::less<DTransformNode*>,std::allocator<std::pair<DTransformNode*const,DActionManager::DActionElement>>>
             ::find((map<DTransformNode*,DActionManager::DActionElement,std::less<DTransformNode*>,std::allocator<std::pair<DTransformNode*const,DActionManager::DActionElement>>>
                     *)this,local_28);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  uVar2 = 0;
  if (bVar1) {
    lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    uVar2 = DArray<DAction*>::size((DArray<DAction*> *)(lVar3 + 8));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DActionManager::removeAction(DAction*) */

void __thiscall DActionManager::removeAction(DActionManager *this,DAction *param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 local_28;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x48] == (DActionManager)0x0) {
    local_20[0] = (**(code **)(*(long *)param_1 + 0x18))(param_1);
    local_28 = std::
               map<DTransformNode*,DActionManager::DActionElement,std::less<DTransformNode*>,std::allocator<std::pair<DTransformNode*const,DActionManager::DActionElement>>>
               ::find((map<DTransformNode*,DActionManager::DActionElement,std::less<DTransformNode*>,std::allocator<std::pair<DTransformNode*const,DActionManager::DActionElement>>>
                       *)this,(DTransformNode **)local_20);
    local_20[0] = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)this);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_28,(rbtree_iterator *)local_20);
    if (bVar1) {
      lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_28);
      DArray<DAction*>::eraseObject((DArray<DAction*> *)(lVar2 + 8),param_1,false);
    }
  }
  else {
    DActionDelay::DActionDelay((DActionDelay *)local_20,param_1,0,0);
    std::vector<DActionManager::DActionDelay,std::allocator<DActionManager::DActionDelay>>::
    push_back((vector<DActionManager::DActionDelay,std::allocator<DActionManager::DActionDelay>> *)
              (this + 0x30),(DActionDelay *)local_20);
    DActionDelay::~DActionDelay((DActionDelay *)local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DActionManager::removeAllActionFromTarget(DTransformNode*) */

void __thiscall
DActionManager::removeAllActionFromTarget(DActionManager *this,DTransformNode *param_1)

{
  bool bVar1;
  long lVar2;
  DTransformNode *local_38 [2];
  undefined8 local_28;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_38[0] = param_1;
  if (this[0x48] == (DActionManager)0x0) {
    if (param_1 != (DTransformNode *)0x0) {
      local_28 = std::
                 map<DTransformNode*,DActionManager::DActionElement,std::less<DTransformNode*>,std::allocator<std::pair<DTransformNode*const,DActionManager::DActionElement>>>
                 ::find((map<DTransformNode*,DActionManager::DActionElement,std::less<DTransformNode*>,std::allocator<std::pair<DTransformNode*const,DActionManager::DActionElement>>>
                         *)this,local_38);
      local_20[0] = std::
                    map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
      bVar1 = eastl::operator!=((rbtree_iterator *)&local_28,(rbtree_iterator *)local_20);
      if (bVar1) {
        lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                          ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_28);
        DArray<DAction*>::clear((DArray<DAction*> *)(lVar2 + 8));
      }
    }
  }
  else {
    DActionDelay::DActionDelay((DActionDelay *)local_20,0,param_1,1);
    std::vector<DActionManager::DActionDelay,std::allocator<DActionManager::DActionDelay>>::
    push_back((vector<DActionManager::DActionDelay,std::allocator<DActionManager::DActionDelay>> *)
              (this + 0x30),(DActionDelay *)local_20);
    DActionDelay::~DActionDelay((DActionDelay *)local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DActionManager::addAction(DAction*, DTransformNode*) */

void __thiscall
DActionManager::addAction(DActionManager *this,DAction *param_1,DTransformNode *param_2)

{
  DArray<DAction*> *this_00;
  DTransformNode *local_28;
  DActionDelay aDStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_2;
  if (this[0x48] == (DActionManager)0x0) {
    (**(code **)(*(long *)param_1 + 0x10))(param_1,param_2);
    this_00 = (DArray<DAction*> *)
              std::
              map<DTransformNode*,DActionManager::DActionElement,std::less<DTransformNode*>,std::allocator<std::pair<DTransformNode*const,DActionManager::DActionElement>>>
              ::operator[]((map<DTransformNode*,DActionManager::DActionElement,std::less<DTransformNode*>,std::allocator<std::pair<DTransformNode*const,DActionManager::DActionElement>>>
                            *)this,&local_28);
    DArray<DAction*>::pushBack(this_00,param_1);
  }
  else {
    DActionDelay::DActionDelay(aDStack_20,param_1,param_2,2);
    std::vector<DActionManager::DActionDelay,std::allocator<DActionManager::DActionDelay>>::
    push_back((vector<DActionManager::DActionDelay,std::allocator<DActionManager::DActionDelay>> *)
              (this + 0x30),aDStack_20);
    DActionDelay::~DActionDelay(aDStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DActionManager::update(float) */

void __thiscall DActionManager::update(DActionManager *this,float param_1)

{
  vector *this_00;
  int iVar1;
  bool bVar2;
  char cVar3;
  long lVar4;
  int *piVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_01;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0x48] = (DActionManager)0x1;
  lVar4 = std::
          map<DTransformNode*,DActionManager::DActionElement,std::less<DTransformNode*>,std::allocator<std::pair<DTransformNode*const,DActionManager::DActionElement>>>
          ::size((map<DTransformNode*,DActionManager::DActionElement,std::less<DTransformNode*>,std::allocator<std::pair<DTransformNode*const,DActionManager::DActionElement>>>
                  *)this);
  if (lVar4 != 0) {
    local_30 = std::
               map<DTransformNode*,DActionManager::DActionElement,std::less<DTransformNode*>,std::allocator<std::pair<DTransformNode*const,DActionManager::DActionElement>>>
               ::begin((map<DTransformNode*,DActionManager::DActionElement,std::less<DTransformNode*>,std::allocator<std::pair<DTransformNode*const,DActionManager::DActionElement>>>
                        *)this);
    while( true ) {
      local_20[0] = std::
                    map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
      bVar2 = eastl::operator!=((rbtree_iterator *)&local_30,(rbtree_iterator *)local_20);
      if (!bVar2) break;
      lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_30);
      this_00 = (vector *)(lVar4 + 8);
      local_28 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>(this_00);
      while( true ) {
        local_20[0] = std::end<std::vector<DButton*,std::allocator<DButton*>>>(this_00);
        bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)local_20);
        if (!bVar2) break;
        puVar6 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
        plVar8 = (long *)*puVar6;
        (**(code **)(*plVar8 + 0x20))(param_1,plVar8);
        cVar3 = (**(code **)(*plVar8 + 0x30))(plVar8);
        if (cVar3 != '\0') {
          DActionDelay::DActionDelay((DActionDelay *)local_20,plVar8,0,0);
          std::vector<DActionManager::DActionDelay,std::allocator<DActionManager::DActionDelay>>::
          push_back((vector<DActionManager::DActionDelay,std::allocator<DActionManager::DActionDelay>>
                     *)(this + 0x30),(DActionDelay *)local_20);
          DActionDelay::~DActionDelay((DActionDelay *)local_20);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
      }
      lVar4 = DArray<DAction*>::size((DArray<DAction*> *)this_00);
      if (lVar4 == 0) {
        uVar7 = FUN_04f68538((rbtree_iterator *)&local_30);
        std::
        map<DTransformNode*,DActionManager::DActionElement,std::less<DTransformNode*>,std::allocator<std::pair<DTransformNode*const,DActionManager::DActionElement>>>
        ::erase_abi_cxx11_(this,uVar7);
      }
      else {
        std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                  ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_30);
      }
    }
  }
  this_01 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x30);
  this[0x48] = (DActionManager)0x0;
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_01);
  local_20[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(this_01);
  while (bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)local_20)
        , bVar2) {
    piVar5 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    iVar1 = *piVar5;
    if (iVar1 == 2) {
      addAction(this,*(DAction **)(piVar5 + 2),*(DTransformNode **)(piVar5 + 4));
    }
    else if (iVar1 == 0) {
      removeAction(this,*(DAction **)(piVar5 + 2));
    }
    else if (iVar1 == 1) {
      removeAllActionFromTarget(this,*(DTransformNode **)(piVar5 + 4));
    }
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_28);
  }
  std::vector<DActionManager::DActionDelay,std::allocator<DActionManager::DActionDelay>>::clear
            ((vector<DActionManager::DActionDelay,std::allocator<DActionManager::DActionDelay>> *)
             this_01);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* DActionManager::DActionManager() */

void __thiscall DActionManager::DActionManager(DActionManager *this)

{
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  this[0x48] = (DActionManager)0x0;
  return;
}


/* DActionManager::~DActionManager() */

void __thiscall DActionManager::~DActionManager(DActionManager *this)

{
  std::vector<DActionManager::DActionDelay,std::allocator<DActionManager::DActionDelay>>::~vector
            ((vector<DActionManager::DActionDelay,std::allocator<DActionManager::DActionDelay>> *)
             (this + 0x30));
  std::
  map<DTransformNode*,DActionManager::DActionElement,std::less<DTransformNode*>,std::allocator<std::pair<DTransformNode*const,DActionManager::DActionElement>>>
  ::~map((map<DTransformNode*,DActionManager::DActionElement,std::less<DTransformNode*>,std::allocator<std::pair<DTransformNode*const,DActionManager::DActionElement>>>
          *)this);
  return;
}

