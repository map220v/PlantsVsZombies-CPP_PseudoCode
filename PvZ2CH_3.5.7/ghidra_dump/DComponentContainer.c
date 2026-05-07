// Class: DComponentContainer


/* DComponentContainer::TEMPNAMEPLACEHOLDERVALUE(DComponentContainer const&) */

DComponentContainer * __thiscall
DComponentContainer::operator=(DComponentContainer *this,DComponentContainer *param_1)

{
  std::
  unordered_map<std::string,DComponent*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DComponent*>>>
  ::operator=((unordered_map<std::string,DComponent*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DComponent*>>>
               *)this,(unordered_map *)param_1);
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_1 + 0x38);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DComponentContainer::visit() */

void __thiscall DComponentContainer::visit(DComponentContainer *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = std::
          unordered_map<std::string,DComponent*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DComponent*>>>
          ::empty((unordered_map<std::string,DComponent*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DComponent*>>>
                   *)this);
  if (cVar1 == '\0') {
    if (*(DRef **)(this + 0x38) != (DRef *)0x0) {
      DRef::ref(*(DRef **)(this + 0x38));
    }
    local_18 = FUN_04f70a44();
    local_10 = std::
               unordered_map<std::string,DComponent*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DComponent*>>>
               ::begin((unordered_map<std::string,DComponent*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DComponent*>>>
                        *)this);
    while (bVar2 = eastl::operator!=((rbtree_iterator *)&local_10,(rbtree_iterator *)&local_18),
          bVar2) {
      lVar3 = std::__detail::
              _Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>::
              operator->((_Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>
                          *)&local_10);
      (**(code **)(**(long **)(lVar3 + 8) + 0x28))(*(long **)(lVar3 + 8));
      std::__detail::_Node_iterator<std::pair<std::string_const,DComponent*>,false,true>::operator++
                ((_Node_iterator<std::pair<std::string_const,DComponent*>,false,true> *)&local_10);
    }
    if (*(DRef **)(this + 0x38) != (DRef *)0x0) {
      DRef::unref(*(DRef **)(this + 0x38));
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DComponentContainer::DComponentContainer(DTransformNode*) */

void __thiscall
DComponentContainer::DComponentContainer(DComponentContainer *this,DTransformNode *param_1)

{
  equal_to aeStack_20 [8];
  allocator aaStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  unordered_map<std::string,DComponent*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DComponent*>>>
  ::unordered_map((ulong)this,(hash *)0xa,aeStack_20,aaStack_18);
  *(DTransformNode **)(this + 0x38) = param_1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DComponentContainer::~DComponentContainer() */

void __thiscall DComponentContainer::~DComponentContainer(DComponentContainer *this)

{
  std::
  _Hashtable<std::string,std::pair<std::string_const,DComponent*>,std::allocator<std::pair<std::string_const,DComponent*>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
  ::clear((_Hashtable<std::string,std::pair<std::string_const,DComponent*>,std::allocator<std::pair<std::string_const,DComponent*>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
           *)this);
  if (*(long *)this != 0) {
    std::
    _Hashtable<std::string,std::pair<std::string_const,DComponent*>,std::allocator<std::pair<std::string_const,DComponent*>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
    ::_M_deallocate_buckets
              ((_Hashtable<std::string,std::pair<std::string_const,DComponent*>,std::allocator<std::pair<std::string_const,DComponent*>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
                *)this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DComponentContainer::removeAll() */

void __thiscall DComponentContainer::removeAll(DComponentContainer *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  DRef *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = std::
          unordered_map<std::string,DComponent*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DComponent*>>>
          ::empty((unordered_map<std::string,DComponent*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DComponent*>>>
                   *)this);
  if (cVar1 == '\0') {
    local_18 = std::
               unordered_map<std::string,DComponent*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DComponent*>>>
               ::begin((unordered_map<std::string,DComponent*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DComponent*>>>
                        *)this);
    while( true ) {
      local_10 = FUN_04f70a44();
      bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
      if (!bVar2) break;
      lVar3 = std::__detail::
              _Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>::
              operator->((_Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>
                          *)&local_18);
      this_00 = *(DRef **)(lVar3 + 8);
      (**(code **)(*(long *)this_00 + 0x38))(this_00);
      (**(code **)(*(long *)this_00 + 0x20))(this_00,0);
      DRef::unref(this_00);
      std::__detail::_Node_iterator<std::pair<std::string_const,DComponent*>,false,true>::operator++
                ((_Node_iterator<std::pair<std::string_const,DComponent*>,false,true> *)&local_18);
    }
    std::
    unordered_map<std::string,DComponent*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DComponent*>>>
    ::clear((unordered_map<std::string,DComponent*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DComponent*>>>
             *)this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DComponentContainer::get(std::string const&) const */

void __thiscall DComponentContainer::get(DComponentContainer *this,string *param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             unordered_map<std::string,DComponent*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DComponent*>>>
             ::find((unordered_map<std::string,DComponent*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DComponent*>>>
                     *)this,param_1);
  local_10 = FUN_04f709e4();
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar2 = std::__detail::
            _Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>::operator->
                      ((_Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>
                        *)&local_18);
    uVar3 = *(undefined8 *)(lVar2 + 8);
  }
  else {
    uVar3 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DComponentContainer::remove(std::string const&) */

void __thiscall DComponentContainer::remove(DComponentContainer *this,string *param_1)

{
  char cVar1;
  long lVar2;
  DRef *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             unordered_map<std::string,DComponent*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DComponent*>>>
             ::find((unordered_map<std::string,DComponent*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DComponent*>>>
                     *)this,param_1);
  local_10 = FUN_04f70a44();
  cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
  if (cVar1 == '\0') {
    lVar2 = std::__detail::
            _Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>::operator->
                      ((_Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>
                        *)&local_18);
    this_00 = *(DRef **)(lVar2 + 8);
    std::
    unordered_map<std::string,DComponent*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DComponent*>>>
    ::erase((unordered_map<std::string,DComponent*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DComponent*>>>
             *)this,param_1);
    (**(code **)(*(long *)this_00 + 0x38))(this_00);
    (**(code **)(*(long *)this_00 + 0x20))(this_00,0);
    DRef::unref(this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1 == '\0');
}


/* DComponentContainer::remove(DComponent*) */

void __thiscall DComponentContainer::remove(DComponentContainer *this,DComponent *param_1)

{
  string *psVar1;
  
  psVar1 = (string *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_1);
  remove(this,psVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DComponentContainer::add(DComponent*) */

void __thiscall DComponentContainer::add(DComponentContainer *this,DComponent *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)param_1);
  FUN_05475d88(asStack_20,uVar2);
  local_18 = std::
             unordered_map<std::string,DComponent*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DComponent*>>>
             ::find((unordered_map<std::string,DComponent*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DComponent*>>>
                     *)this,asStack_20);
  local_10 = FUN_04f70a44();
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (!bVar1) {
    puVar3 = (undefined8 *)
             std::
             unordered_map<std::string,DComponent*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DComponent*>>>
             ::operator[]((unordered_map<std::string,DComponent*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DComponent*>>>
                           *)this,asStack_20);
    *puVar3 = param_1;
    DRef::ref((DRef *)param_1);
    (**(code **)(*(long *)param_1 + 0x20))(param_1,*(undefined8 *)(this + 0x38));
    (**(code **)(*(long *)param_1 + 0x30))(param_1);
    std::string::~string(asStack_20);
  }
  else {
    std::string::~string(asStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(!bVar1);
}

