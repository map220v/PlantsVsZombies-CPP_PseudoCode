// Class: GlobalAnimCountCache


/* GlobalAnimCountCache::~GlobalAnimCountCache() */

void __thiscall GlobalAnimCountCache::~GlobalAnimCountCache(GlobalAnimCountCache *this)

{
  _Rb_tree_node *p_Var1;
  
  p_Var1 = (_Rb_tree_node *)FUN_042f6fd0(*(undefined8 *)(this + 0x10));
  std::
  _Rb_tree<std::string,std::pair<std::string_const,AnimCountCache>,std::_Select1st<std::pair<std::string_const,AnimCountCache>>,std::less<std::string>,std::allocator<std::pair<std::string_const,AnimCountCache>>>
  ::_M_erase((_Rb_tree<std::string,std::pair<std::string_const,AnimCountCache>,std::_Select1st<std::pair<std::string_const,AnimCountCache>>,std::less<std::string>,std::allocator<std::pair<std::string_const,AnimCountCache>>>
              *)this,p_Var1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GlobalAnimCountCache::GetAnimCountForLabel(Sexy::PopAnim*, std::string const&) */

void __thiscall
GlobalAnimCountCache::GetAnimCountForLabel
          (GlobalAnimCountCache *this,PopAnim *param_1,string *param_2)

{
  string *psVar1;
  bool bVar2;
  long lVar3;
  AnimCountCache *pAVar4;
  undefined8 local_40;
  undefined8 local_38;
  uint local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  psVar1 = (string *)(*(long *)(param_1 + 0x58) + 0x58);
  local_8 = ___stack_chk_guard;
  local_40 = std::
             map<std::string,AnimCountCache,std::less<std::string>,std::allocator<std::pair<std::string_const,AnimCountCache>>>
             ::find((map<std::string,AnimCountCache,std::less<std::string>,std::allocator<std::pair<std::string_const,AnimCountCache>>>
                     *)this,psVar1);
  local_38 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this);
  bVar2 = eastl::operator!=((rbtree_iterator *)&local_40,(rbtree_iterator *)&local_38);
  if (bVar2 == 0) {
    pAVar4 = (AnimCountCache *)
             std::
             map<std::string,AnimCountCache,std::less<std::string>,std::allocator<std::pair<std::string_const,AnimCountCache>>>
             ::operator[]((map<std::string,AnimCountCache,std::less<std::string>,std::allocator<std::pair<std::string_const,AnimCountCache>>>
                           *)this,psVar1);
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    local_30 = (uint)bVar2;
    Sexy::AndroidGL20RenderEffect::ParamCollection::ParamCollection((ParamCollection *)&local_38);
    AnimCountCache::operator=(pAVar4,(AnimCountCache *)&local_38);
    AnimCountCache::~AnimCountCache((AnimCountCache *)&local_38);
    pAVar4 = (AnimCountCache *)
             std::
             map<std::string,AnimCountCache,std::less<std::string>,std::allocator<std::pair<std::string_const,AnimCountCache>>>
             ::operator[]((map<std::string,AnimCountCache,std::less<std::string>,std::allocator<std::pair<std::string_const,AnimCountCache>>>
                           *)this,psVar1);
  }
  else {
    lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_40);
    pAVar4 = (AnimCountCache *)(lVar3 + 8);
  }
  AnimCountCache::GetAnimCountForLabel(pAVar4,param_1,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

