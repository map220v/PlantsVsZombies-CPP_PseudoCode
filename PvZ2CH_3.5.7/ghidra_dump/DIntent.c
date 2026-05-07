// Class: DIntent


/* DIntent::clearValue() */

void __thiscall DIntent::clearValue(DIntent *this)

{
  FUN_04f71954(*(undefined8 *)(this + 0x10));
  FUN_04f71d40();
  memset(*(void **)this,0,*(long *)(this + 8) << 3);
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return;
}


/* DIntent::clearRef() */

void __thiscall DIntent::clearRef(DIntent *this)

{
  std::
  unordered_map<std::string,DRef*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DRef*>>>
  ::clear((unordered_map<std::string,DRef*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DRef*>>>
           *)(this + 0x38));
  return;
}


/* DIntent::clear() */

void __thiscall DIntent::clear(DIntent *this)

{
  clearValue(this);
  clearRef(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DIntent::getValue(std::string const&) */

void __thiscall DIntent::getValue(DIntent *this,string *param_1)

{
  bool bVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
             ::find((unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
                     *)this,param_1);
  local_10 = FUN_04f71bdc();
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar2 = std::__detail::_Node_iterator<std::pair<int_const,DValue>,false,false>::operator*
                      ((_Node_iterator<std::pair<int_const,DValue>,false,false> *)&local_18);
    puVar3 = (undefined1 *)(lVar2 + 8);
  }
  else {
    puVar3 = ::DValue::Null;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar3);
}


/* DIntent::getBool(std::string const&, bool) */

ulong __thiscall DIntent::getBool(DIntent *this,string *param_1,bool param_2)

{
  char cVar1;
  DValue *this_00;
  ulong uVar2;
  
  this_00 = (DValue *)getValue(this,param_1);
  cVar1 = FUN_04f71948(*(undefined4 *)(this_00 + 8));
  if (cVar1 != '\0') {
    return (ulong)param_2;
  }
  uVar2 = ::DValue::asBool(this_00);
  return uVar2;
}


/* DIntent::getInt(std::string const&, int) */

ulong __thiscall DIntent::getInt(DIntent *this,string *param_1,int param_2)

{
  char cVar1;
  DValue *this_00;
  ulong uVar2;
  
  this_00 = (DValue *)getValue(this,param_1);
  cVar1 = FUN_04f71948(*(undefined4 *)(this_00 + 8));
  if (cVar1 != '\0') {
    return (ulong)(uint)param_2;
  }
  uVar2 = ::DValue::asInt(this_00);
  return uVar2;
}


/* DIntent::getFloat(std::string const&, float) */

undefined1  [16] __thiscall DIntent::getFloat(DIntent *this,string *param_1,float param_2)

{
  char cVar1;
  DValue *this_00;
  undefined4 in_register_00005004;
  undefined8 in_register_00005008;
  undefined1 auVar2 [16];
  
  auVar2._4_4_ = in_register_00005004;
  auVar2._0_4_ = param_2;
  this_00 = (DValue *)getValue(this,param_1);
  cVar1 = FUN_04f71948(*(undefined4 *)(this_00 + 8));
  auVar2._8_8_ = in_register_00005008;
  if (cVar1 != '\0') {
    return auVar2;
  }
  auVar2 = ::DValue::asFloat(this_00);
  return auVar2;
}


/* DIntent::getString(std::string const&, std::string const&) */

void DIntent::getString(string *param_1,string *param_2)

{
  char cVar1;
  long lVar2;
  
  lVar2 = getValue((DIntent *)param_1,param_2);
  cVar1 = FUN_04f71948(*(undefined4 *)(lVar2 + 8));
  if (cVar1 == '\0') {
    ::DValue::asString();
    return;
  }
  FUN_05475d88();
  return;
}


/* DIntent::removeValue(std::string const&) */

undefined8 __thiscall DIntent::removeValue(DIntent *this,string *param_1)

{
  ulong uVar1;
  ulong uVar2;
  _Hash_node_base *p_Var3;
  
  uVar1 = thunk_FUN_04f71a9c(param_1);
  uVar2 = FUN_04f71988(*(undefined8 *)(this + 8),uVar1);
  p_Var3 = (_Hash_node_base *)
           std::
           _Hashtable<std::string,std::pair<std::string_const,DValue>,std::allocator<std::pair<std::string_const,DValue>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
           ::_M_find_before_node
                     ((_Hashtable<std::string,std::pair<std::string_const,DValue>,std::allocator<std::pair<std::string_const,DValue>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
                       *)this,uVar2,param_1,uVar1);
  if (p_Var3 != (_Hash_node_base *)0x0) {
    std::
    _Hashtable<std::string,std::pair<std::string_const,DValue>,std::allocator<std::pair<std::string_const,DValue>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
    ::_M_erase((_Hashtable<std::string,std::pair<std::string_const,DValue>,std::allocator<std::pair<std::string_const,DValue>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
                *)this,uVar2,p_Var3,*(_Hash_node **)p_Var3);
    return 1;
  }
  return 0;
}


/* DIntent::removeRef(std::string const&) */

void __thiscall DIntent::removeRef(DIntent *this,string *param_1)

{
  std::
  unordered_map<std::string,DRef*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DRef*>>>
  ::erase((unordered_map<std::string,DRef*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DRef*>>>
           *)(this + 0x38),param_1);
  return;
}


/* DIntent::addValue(std::string const&, DValue const&) */

void __thiscall DIntent::addValue(DIntent *this,string *param_1,DValue *param_2)

{
  DValue *this_00;
  
  this_00 = (DValue *)
            std::
            unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
            ::operator[]((unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
                          *)this,param_1);
  ::DValue::operator=(this_00,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DIntent::addBool(std::string const&, bool) */

void __thiscall DIntent::addBool(DIntent *this,string *param_1,bool param_2)

{
  DValue aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ::DValue::DValue(aDStack_18,param_2);
  addValue(this,param_1,aDStack_18);
  ::DValue::~DValue(aDStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DIntent::addInt(std::string const&, int) */

void __thiscall DIntent::addInt(DIntent *this,string *param_1,int param_2)

{
  DValue aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ::DValue::DValue(aDStack_18,param_2);
  addValue(this,param_1,aDStack_18);
  ::DValue::~DValue(aDStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DIntent::addFloat(std::string const&, float) */

void __thiscall DIntent::addFloat(DIntent *this,string *param_1,float param_2)

{
  DValue aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ::DValue::DValue(aDStack_18,param_2);
  addValue(this,param_1,aDStack_18);
  ::DValue::~DValue(aDStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DIntent::addString(std::string const&, std::string const&) */

void __thiscall DIntent::addString(DIntent *this,string *param_1,string *param_2)

{
  DValue aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ::DValue::DValue(aDStack_18,param_2);
  addValue(this,param_1,aDStack_18);
  ::DValue::~DValue(aDStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DIntent::addRef(std::string const&, DRef*) */

void __thiscall DIntent::addRef(DIntent *this,string *param_1,DRef *param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             unordered_map<std::string,DRef*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DRef*>>>
             ::find((unordered_map<std::string,DRef*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DRef*>>>
                     *)(this + 0x38),param_1);
  local_10 = FUN_04f71c3c();
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar3 = std::__detail::_Node_iterator<std::pair<int_const,DValue>,false,false>::operator*
                      ((_Node_iterator<std::pair<int_const,DValue>,false,false> *)&local_18);
    DRef::unref(*(DRef **)(lVar3 + 8));
  }
  if (param_2 == (DRef *)0x0) {
    if (local_8 == ___stack_chk_guard) {
      return;
    }
  }
  else {
    puVar2 = (undefined8 *)
             std::
             unordered_map<std::string,DRef*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DRef*>>>
             ::operator[]((unordered_map<std::string,DRef*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DRef*>>>
                           *)(this + 0x38),param_1);
    *puVar2 = param_2;
    if (local_8 == ___stack_chk_guard) {
      DRef::ref(param_2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DIntent::getRef(std::string const&) */

undefined8 __thiscall DIntent::getRef(DIntent *this,string *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           std::
           unordered_map<std::string,DRef*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DRef*>>>
           ::operator[]((unordered_map<std::string,DRef*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DRef*>>>
                         *)(this + 0x38),param_1);
  return *puVar1;
}

