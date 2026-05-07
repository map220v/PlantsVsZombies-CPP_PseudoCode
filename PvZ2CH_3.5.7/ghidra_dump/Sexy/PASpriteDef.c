// Class: Sexy::PASpriteDef


/* Sexy::PASpriteDef::PASpriteDef() */

void __thiscall Sexy::PASpriteDef::PASpriteDef(PASpriteDef *this)

{
  Set8BytesTo0(this + 8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x78));
  return;
}


/* Sexy::PASpriteDef::~PASpriteDef() */

void __thiscall Sexy::PASpriteDef::~PASpriteDef(PASpriteDef *this)

{
  std::vector<Sexy::PAObjectPos,std::allocator<Sexy::PAObjectPos>>::~vector
            ((vector<Sexy::PAObjectPos,std::allocator<Sexy::PAObjectPos>> *)(this + 0x78));
  std::vector<Sexy::PAObjectDef,std::allocator<Sexy::PAObjectDef>>::~vector
            ((vector<Sexy::PAObjectDef,std::allocator<Sexy::PAObjectDef>> *)(this + 0x60));
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::~map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
          *)(this + 0x30));
  std::vector<Sexy::PAFrame,std::allocator<Sexy::PAFrame>>::~vector
            ((vector<Sexy::PAFrame,std::allocator<Sexy::PAFrame>> *)(this + 0x10));
  std::string::~string((string *)(this + 8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PASpriteDef::GetLabelFrame(std::string const&) */

void __thiscall Sexy::PASpriteDef::GetLabelFrame(PASpriteDef *this,string *param_1)

{
  char cVar1;
  long lVar2;
  undefined4 uVar3;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  StringToUpper((Sexy *)param_1,___stack_chk_guard);
  local_18 = std::
             map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
             ::find((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                     *)(this + 0x30),asStack_20);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x30));
  cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
  if (cVar1 == '\0') {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    uVar3 = *(undefined4 *)(lVar2 + 8);
  }
  else {
    uVar3 = 0xffffffff;
  }
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PASpriteDef::GetLabelFrameRange(std::string const&, int&, int&) */

void __thiscall
Sexy::PASpriteDef::GetLabelFrameRange(PASpriteDef *this,string *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  string *psVar3;
  string *extraout_x1;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = GetLabelFrame(this,param_1);
  *param_2 = iVar2;
  *param_3 = -1;
  if (*param_2 != -1) {
    StringToUpper((Sexy *)param_1,extraout_x1);
    local_18 = std::
               map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
               ::begin((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                        *)(this + 0x30));
    while( true ) {
      local_10 = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)(this + 0x30));
      bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
      if (!bVar1) break;
      psVar3 = (string *)
               std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                         ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
      bVar1 = std::operator!=(asStack_20,psVar3);
      if (((bVar1) && (iVar2 = *(int *)(psVar3 + 8), *param_2 < iVar2)) &&
         ((*param_3 < 0 || (iVar2 < *param_3)))) {
        *param_3 = iVar2 + -1;
      }
      std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    }
    if (*param_3 < 0) {
      iVar2 = FUN_05172a7c(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18));
      *param_3 = iVar2 + -1;
    }
    std::string::~string(asStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::PASpriteDef::PASpriteDef(Sexy::PASpriteDef&&) */

void __thiscall Sexy::PASpriteDef::PASpriteDef(PASpriteDef *this,PASpriteDef *param_1)

{
  undefined4 uVar1;
  
  *(undefined8 *)this = *(undefined8 *)param_1;
  FUN_05474148(this + 8,param_1 + 8);
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x10),(vector *)(param_1 + 0x10));
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = uVar1;
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
         *)(this + 0x30),(map *)(param_1 + 0x30));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x60),(vector *)(param_1 + 0x60));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x78),(vector *)(param_1 + 0x78));
  *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  return;
}

