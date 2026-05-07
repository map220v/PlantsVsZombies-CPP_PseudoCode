// Class: AnimCountCache


/* AnimCountCache::~AnimCountCache() */

void __thiscall AnimCountCache::~AnimCountCache(AnimCountCache *this)

{
  _Rb_tree_node *p_Var1;
  
  p_Var1 = (_Rb_tree_node *)FUN_042f6fcc(*(undefined8 *)(this + 0x10));
  std::
  _Rb_tree<std::string,std::pair<std::string_const,unsigned_char>,std::_Select1st<std::pair<std::string_const,unsigned_char>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_char>>>
  ::_M_erase((_Rb_tree<std::string,std::pair<std::string_const,unsigned_char>,std::_Select1st<std::pair<std::string_const,unsigned_char>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_char>>>
              *)this,p_Var1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimCountCache::GetAnimCountForLabel(Sexy::PopAnim*, std::string const&) */

void __thiscall
AnimCountCache::GetAnimCountForLabel(AnimCountCache *this,PopAnim *param_1,string *param_2)

{
  uint uVar1;
  undefined1 uVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined8 local_28;
  string asStack_20 [8];
  string asStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = std::
             map<std::string,unsigned_char,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_char>>>
             ::find((map<std::string,unsigned_char,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_char>>>
                     *)this,param_2);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this);
  bVar3 = eastl::operator!=((rbtree_iterator *)&local_28,(rbtree_iterator *)&local_10);
  uVar8 = (uint)bVar3;
  if (bVar3) {
    lVar5 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_28);
    uVar2 = *(undefined1 *)(lVar5 + 8);
  }
  else {
    FUN_05475d88(asStack_20,param_2);
    FUN_05475d88(asStack_18,asStack_20);
    while (iVar4 = Sexy::PopAnim::GetLabelFrame(param_1,asStack_18), iVar4 != -1) {
      uVar6 = FUN_0547429c(param_2);
      uVar1 = uVar8 + 2;
      uVar8 = uVar8 + 1;
      Sexy::StrFormat("%s%d",(string *)&local_10,uVar6,(ulong)uVar1);
      FUN_05474278(asStack_18,(string *)&local_10);
      std::string::~string((string *)&local_10);
    }
    uVar2 = (undefined1)uVar8;
    puVar7 = (undefined1 *)
             std::
             map<std::string,unsigned_char,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_char>>>
             ::operator[]((map<std::string,unsigned_char,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_char>>>
                           *)this,param_2);
    *puVar7 = uVar2;
    std::string::~string(asStack_18);
    std::string::~string(asStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* AnimCountCache::TEMPNAMEPLACEHOLDERVALUE(AnimCountCache&&) */

AnimCountCache * __thiscall AnimCountCache::operator=(AnimCountCache *this,AnimCountCache *param_1)

{
  std::
  map<std::string,unsigned_char,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_char>>>
  ::operator=((map<std::string,unsigned_char,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_char>>>
               *)this,(map *)param_1);
  return this;
}

