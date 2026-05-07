// Class: Sexy::AndroidGL20RenderEffect::ParamCollection


/* Sexy::AndroidGL20RenderEffect::ParamCollection::ParamCollection() */

void __thiscall
Sexy::AndroidGL20RenderEffect::ParamCollection::ParamCollection(ParamCollection *this)

{
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  std::
  _Rb_tree<std::wstring,std::pair<std::wstring_const,Sexy::DataElement*>,std::_Select1st<std::pair<std::wstring_const,Sexy::DataElement*>>,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::_Rb_tree_impl<std::less<std::wstring>,true>::_M_initialize
            ((_Rb_tree_impl<std::less<std::wstring>,true> *)this);
  return;
}


/* Sexy::AndroidGL20RenderEffect::ParamCollection::~ParamCollection() */

void __thiscall
Sexy::AndroidGL20RenderEffect::ParamCollection::~ParamCollection(ParamCollection *this)

{
  _Rb_tree_node *p_Var1;
  
  p_Var1 = (_Rb_tree_node *)FUN_052d9e38(*(undefined8 *)(this + 0x10));
  std::
  _Rb_tree<std::string,std::pair<std::string_const,Sexy::AndroidGL20RenderEffect::ParamData>,std::_Select1st<std::pair<std::string_const,Sexy::AndroidGL20RenderEffect::ParamData>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::AndroidGL20RenderEffect::ParamData>>>
  ::_M_erase((_Rb_tree<std::string,std::pair<std::string_const,Sexy::AndroidGL20RenderEffect::ParamData>,std::_Select1st<std::pair<std::string_const,Sexy::AndroidGL20RenderEffect::ParamData>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::AndroidGL20RenderEffect::ParamData>>>
              *)this,p_Var1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidGL20RenderEffect::ParamCollection::GetParamNamed(std::string const&, bool) */

void __thiscall
Sexy::AndroidGL20RenderEffect::ParamCollection::GetParamNamed
          (ParamCollection *this,string *param_1,bool param_2)

{
  bool bVar1;
  ParamData *this_00;
  long lVar2;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = std::
             map<std::string,Sexy::AndroidGL20RenderEffect::ParamData,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::AndroidGL20RenderEffect::ParamData>>>
             ::find((map<std::string,Sexy::AndroidGL20RenderEffect::ParamData,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::AndroidGL20RenderEffect::ParamData>>>
                     *)this,param_1);
  local_20 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_28,(rbtree_iterator *)&local_20);
  if (bVar1) {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_28);
    lVar2 = lVar2 + 8;
  }
  else if (param_2) {
    this_00 = (ParamData *)
              std::
              map<std::string,Sexy::AndroidGL20RenderEffect::ParamData,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::AndroidGL20RenderEffect::ParamData>>>
              ::operator[]((map<std::string,Sexy::AndroidGL20RenderEffect::ParamData,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::AndroidGL20RenderEffect::ParamData>>>
                            *)this,param_1);
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    PIInterpolator::PIInterpolator((PIInterpolator *)&local_20);
    ParamData::operator=(this_00,(ParamData *)&local_20);
    ParamData::~ParamData((ParamData *)&local_20);
    lVar2 = GetParamNamed(this,param_1,false);
  }
  else {
    lVar2 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2);
}

