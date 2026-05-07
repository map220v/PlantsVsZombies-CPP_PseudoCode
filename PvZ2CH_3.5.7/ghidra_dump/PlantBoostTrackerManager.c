// Class: PlantBoostTrackerManager


/* PlantBoostTrackerManager::PlantBoostTrackerManager() */

void __thiscall PlantBoostTrackerManager::PlantBoostTrackerManager(PlantBoostTrackerManager *this)

{
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)this);
  std::
  map<PlantBoostType,PlantBoostTracker*,std::less<PlantBoostType>,std::allocator<std::pair<PlantBoostType_const,PlantBoostTracker*>>>
  ::clear((map<PlantBoostType,PlantBoostTracker*,std::less<PlantBoostType>,std::allocator<std::pair<PlantBoostType_const,PlantBoostTracker*>>>
           *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBoostTrackerManager::UpdateBoostTracker(Plant*) */

void __thiscall
PlantBoostTrackerManager::UpdateBoostTracker(PlantBoostTrackerManager *this,Plant *param_1)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<PlantBoostType,PlantBoostTracker*,std::less<PlantBoostType>,std::allocator<std::pair<PlantBoostType_const,PlantBoostTracker*>>>
             ::begin((map<PlantBoostType,PlantBoostTracker*,std::less<PlantBoostType>,std::allocator<std::pair<PlantBoostType_const,PlantBoostTracker*>>>
                      *)this);
  do {
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) {
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    plVar3 = *(long **)(lVar2 + 8);
    if (plVar3 != (long *)0x0) {
      if ((char)plVar3[1] == '\0') {
        (**(code **)(*plVar3 + 0x10))(plVar3,param_1);
        lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                          ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
        plVar3 = *(long **)(lVar2 + 8);
        if ((plVar3 == (long *)0x0) || ((char)plVar3[1] == '\0')) goto LAB_038422f4;
      }
      (**(code **)(*plVar3 + 8))();
      lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
      *(undefined8 *)(lVar2 + 8) = 0;
    }
LAB_038422f4:
    FUN_03842090((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBoostTrackerManager::~PlantBoostTrackerManager() */

void __thiscall PlantBoostTrackerManager::~PlantBoostTrackerManager(PlantBoostTrackerManager *this)

{
  bool bVar1;
  long lVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<PlantBoostType,PlantBoostTracker*,std::less<PlantBoostType>,std::allocator<std::pair<PlantBoostType_const,PlantBoostTracker*>>>
             ::begin((map<PlantBoostType,PlantBoostTracker*,std::less<PlantBoostType>,std::allocator<std::pair<PlantBoostType_const,PlantBoostTracker*>>>
                      *)this);
  while( true ) {
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) break;
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    if (*(long **)(lVar2 + 8) != (long *)0x0) {
      (**(code **)(**(long **)(lVar2 + 8) + 8))();
      lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
      *(undefined8 *)(lVar2 + 8) = 0;
    }
    FUN_03842090((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
  }
  std::
  map<PlantBoostType,PlantBoostTracker*,std::less<PlantBoostType>,std::allocator<std::pair<PlantBoostType_const,PlantBoostTracker*>>>
  ::~map((map<PlantBoostType,PlantBoostTracker*,std::less<PlantBoostType>,std::allocator<std::pair<PlantBoostType_const,PlantBoostTracker*>>>
          *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TrueDamageAppendBoostTracker*
   PlantBoostTrackerManager::ApplyBoostTracker<TrueDamageAppendBoostTracker>(PlantBoostType) */

TrueDamageAppendBoostTracker * __thiscall
PlantBoostTrackerManager::ApplyBoostTracker<TrueDamageAppendBoostTracker>
          (PlantBoostTrackerManager *this,undefined4 param_2)

{
  long *plVar1;
  TrueDamageAppendBoostTracker *this_00;
  undefined8 *puVar2;
  undefined4 local_4;
  
  local_4 = param_2;
  plVar1 = (long *)std::
                   map<PlantBoostType,PlantBoostTracker*,std::less<PlantBoostType>,std::allocator<std::pair<PlantBoostType_const,PlantBoostTracker*>>>
                   ::operator[]((map<PlantBoostType,PlantBoostTracker*,std::less<PlantBoostType>,std::allocator<std::pair<PlantBoostType_const,PlantBoostTracker*>>>
                                 *)this,(PlantBoostType *)&local_4);
  if (*plVar1 != 0) {
    plVar1 = (long *)std::
                     map<PlantBoostType,PlantBoostTracker*,std::less<PlantBoostType>,std::allocator<std::pair<PlantBoostType_const,PlantBoostTracker*>>>
                     ::operator[]((map<PlantBoostType,PlantBoostTracker*,std::less<PlantBoostType>,std::allocator<std::pair<PlantBoostType_const,PlantBoostTracker*>>>
                                   *)this,(PlantBoostType *)&local_4);
    if ((long *)*plVar1 != (long *)0x0) {
      (**(code **)(*(long *)*plVar1 + 8))();
    }
  }
  this_00 = ::operator_new(0x28);
  TrueDamageAppendBoostTracker::TrueDamageAppendBoostTracker(this_00);
  puVar2 = (undefined8 *)
           std::
           map<PlantBoostType,PlantBoostTracker*,std::less<PlantBoostType>,std::allocator<std::pair<PlantBoostType_const,PlantBoostTracker*>>>
           ::operator[]((map<PlantBoostType,PlantBoostTracker*,std::less<PlantBoostType>,std::allocator<std::pair<PlantBoostType_const,PlantBoostTracker*>>>
                         *)this,(PlantBoostType *)&local_4);
  *puVar2 = this_00;
  puVar2 = (undefined8 *)
           std::
           map<PlantBoostType,PlantBoostTracker*,std::less<PlantBoostType>,std::allocator<std::pair<PlantBoostType_const,PlantBoostTracker*>>>
           ::operator[]((map<PlantBoostType,PlantBoostTracker*,std::less<PlantBoostType>,std::allocator<std::pair<PlantBoostType_const,PlantBoostTracker*>>>
                         *)this,(PlantBoostType *)&local_4);
  return (TrueDamageAppendBoostTracker *)*puVar2;
}

