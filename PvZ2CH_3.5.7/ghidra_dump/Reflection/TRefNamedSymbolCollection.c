// Class: Reflection::TRefNamedSymbolCollection<Reflection::RAncestor>


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::TRefNamedSymbolCollection<Reflection::RAncestor>::GetNamed(std::string const&) const
    */

void __thiscall
Reflection::TRefNamedSymbolCollection<Reflection::RAncestor>::GetNamed
          (TRefNamedSymbolCollection<Reflection::RAncestor> *this,string *param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::string,Reflection::RSymbol*,std::less<std::string>,std::allocator<std::pair<std::string_const,Reflection::RSymbol*>>>
             ::find((map<std::string,Reflection::RSymbol*,std::less<std::string>,std::allocator<std::pair<std::string_const,Reflection::RSymbol*>>>
                     *)(this + 0x18),param_1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x18));
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
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


/* Reflection::TRefNamedSymbolCollection<Reflection::RAncestor>::AddSymbol(std::string const&,
   Reflection::RAncestor*) */

undefined8 __thiscall
Reflection::TRefNamedSymbolCollection<Reflection::RAncestor>::AddSymbol
          (TRefNamedSymbolCollection<Reflection::RAncestor> *this,string *param_1,RAncestor *param_2
          )

{
  char cVar1;
  long lVar2;
  
  cVar1 = FUN_0547419c(param_1);
  if (cVar1 == '\0') {
    lVar2 = GetNamed(this,param_1);
    if (lVar2 != 0) {
      return 0;
    }
  }
  CRefNamedSymbolCollection::InternalAddSymbol
            ((CRefNamedSymbolCollection *)this,param_1,(RSymbol *)param_2);
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::TRefNamedSymbolCollection<Reflection::REnum>::GetNamed(std::string const&, bool)
   const */

void __thiscall
Reflection::TRefNamedSymbolCollection<Reflection::REnum>::GetNamed
          (TRefNamedSymbolCollection<Reflection::REnum> *this,string *param_1,bool param_2)

{
  bool bVar1;
  long lVar2;
  REnum *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::string,Reflection::RSymbol*,std::less<std::string>,std::allocator<std::pair<std::string_const,Reflection::RSymbol*>>>
             ::find((map<std::string,Reflection::RSymbol*,std::less<std::string>,std::allocator<std::pair<std::string_const,Reflection::RSymbol*>>>
                     *)(this + 0x18),param_1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x18));
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    this_00 = *(REnum **)(lVar2 + 8);
    if ((param_2) && (this_00 != (REnum *)0x0)) {
      REnum::LoadEnum(this_00);
    }
  }
  else {
    this_00 = (REnum *)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::TRefNamedSymbolCollection<Reflection::REnumMember>::GetByValue(unsigned int) const */

void __thiscall
Reflection::TRefNamedSymbolCollection<Reflection::REnumMember>::GetByValue
          (TRefNamedSymbolCollection<Reflection::REnumMember> *this,uint param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  uint local_24 [3];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_24[0] = param_1;
  local_18 = std::
             map<unsigned_int,Reflection::REnumMember*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Reflection::REnumMember*>>>
             ::find((map<unsigned_int,Reflection::REnumMember*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Reflection::REnumMember*>>>
                     *)(this + 0x50),local_24);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x50));
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
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


/* Reflection::TRefNamedSymbolCollection<Reflection::RField>::GetIndexed(unsigned int) const */

undefined8 __thiscall
Reflection::TRefNamedSymbolCollection<Reflection::RField>::GetIndexed
          (TRefNamedSymbolCollection<Reflection::RField> *this,uint param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_04ab9c38(*(undefined8 *)this,param_1);
  return *puVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::TRefNamedSymbolCollection<Reflection::RClass>::GetNamed(std::string const&, bool)
   const */

void __thiscall
Reflection::TRefNamedSymbolCollection<Reflection::RClass>::GetNamed
          (TRefNamedSymbolCollection<Reflection::RClass> *this,string *param_1,bool param_2)

{
  bool bVar1;
  long lVar2;
  RClass *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::string,Reflection::RSymbol*,std::less<std::string>,std::allocator<std::pair<std::string_const,Reflection::RSymbol*>>>
             ::find((map<std::string,Reflection::RSymbol*,std::less<std::string>,std::allocator<std::pair<std::string_const,Reflection::RSymbol*>>>
                     *)(this + 0x18),param_1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x18));
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    this_00 = *(RClass **)(lVar2 + 8);
    if ((param_2) && (this_00 != (RClass *)0x0)) {
      RClass::LoadClass(this_00);
    }
  }
  else {
    this_00 = (RClass *)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* Reflection::TRefNamedSymbolCollection<Reflection::RType>::GetIndexed(unsigned int) const */

undefined8 __thiscall
Reflection::TRefNamedSymbolCollection<Reflection::RType>::GetIndexed
          (TRefNamedSymbolCollection<Reflection::RType> *this,uint param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0517ed04(*(undefined8 *)this,param_1);
  return *puVar1;
}


/* Reflection::TRefNamedSymbolCollection<Reflection::RClass>::GetIndexed(unsigned int, bool) const
    */

RClass * __thiscall
Reflection::TRefNamedSymbolCollection<Reflection::RClass>::GetIndexed
          (TRefNamedSymbolCollection<Reflection::RClass> *this,uint param_1,bool param_2)

{
  undefined8 *puVar1;
  RClass *this_00;
  
  puVar1 = (undefined8 *)FUN_0517ed04(*(undefined8 *)this,param_1);
  this_00 = (RClass *)*puVar1;
  if ((this_00 != (RClass *)0x0) && (param_2)) {
    RClass::LoadClass(this_00);
  }
  return this_00;
}


/* Reflection::TRefNamedSymbolCollection<Reflection::REnum>::GetIndexed(unsigned int, bool) const */

REnum * __thiscall
Reflection::TRefNamedSymbolCollection<Reflection::REnum>::GetIndexed
          (TRefNamedSymbolCollection<Reflection::REnum> *this,uint param_1,bool param_2)

{
  undefined8 *puVar1;
  REnum *this_00;
  
  puVar1 = (undefined8 *)FUN_0517ed04(*(undefined8 *)this,param_1);
  this_00 = (REnum *)*puVar1;
  if ((this_00 != (REnum *)0x0) && (param_2)) {
    REnum::LoadEnum(this_00);
  }
  return this_00;
}


/* Reflection::TRefNamedSymbolCollection<Reflection::RAttribute>::GetValueForNamed(std::string
   const&, Reflection::CRefAttributeVariant const&) const */

void Reflection::TRefNamedSymbolCollection<Reflection::RAttribute>::GetValueForNamed
               (string *param_1,CRefAttributeVariant *param_2)

{
  RAttribute *this;
  CRefAttributeVariant *pCVar1;
  CRefAttributeVariant *in_x2;
  CRefAttributeVariant *in_x8;
  
  this = (RAttribute *)
         TRefNamedSymbolCollection<Reflection::RAncestor>::GetNamed
                   ((TRefNamedSymbolCollection<Reflection::RAncestor> *)param_1,(string *)param_2);
  if (this != (RAttribute *)0x0) {
    pCVar1 = (CRefAttributeVariant *)RAttribute::GetValue(this);
    CRefAttributeVariant::CRefAttributeVariant(in_x8,pCVar1);
    return;
  }
  CRefAttributeVariant::CRefAttributeVariant(in_x8,in_x2);
  return;
}


/* Reflection::TRefNamedSymbolCollection<Reflection::REnumMember>::TRefNamedSymbolCollection() */

void __thiscall
Reflection::TRefNamedSymbolCollection<Reflection::REnumMember>::TRefNamedSymbolCollection
          (TRefNamedSymbolCollection<Reflection::REnumMember> *this)

{
  CRefNamedSymbolCollection::CRefNamedSymbolCollection((CRefNamedSymbolCollection *)this);
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x50));
  return;
}


/* Reflection::TRefNamedSymbolCollection<Reflection::REnum>::TRefNamedSymbolCollection() */

void __thiscall
Reflection::TRefNamedSymbolCollection<Reflection::REnum>::TRefNamedSymbolCollection
          (TRefNamedSymbolCollection<Reflection::REnum> *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x18));
  this[0x48] = (TRefNamedSymbolCollection<Reflection::REnum>)0x0;
  return;
}


/* Reflection::TRefNamedSymbolCollection<Reflection::RType>::~TRefNamedSymbolCollection() */

void __thiscall
Reflection::TRefNamedSymbolCollection<Reflection::RType>::~TRefNamedSymbolCollection
          (TRefNamedSymbolCollection<Reflection::RType> *this)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (this[0x48] == (TRefNamedSymbolCollection<Reflection::RType>)0x0) {
    uVar3 = *(undefined8 *)this;
    uVar1 = FUN_0517ecf8(uVar3,*(undefined8 *)(this + 8));
    if (uVar1 != 0) {
      lVar4 = 0;
      while( true ) {
        plVar2 = (long *)FUN_0517f08c(uVar3,lVar4);
        plVar2 = (long *)*plVar2;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x18))(plVar2);
        }
        if (uVar1 <= (uint)(lVar4 + 1)) break;
        uVar3 = *(undefined8 *)this;
        lVar4 = lVar4 + 1;
      }
    }
  }
  std::
  map<std::string,Reflection::RSymbol*,std::less<std::string>,std::allocator<std::pair<std::string_const,Reflection::RSymbol*>>>
  ::~map((map<std::string,Reflection::RSymbol*,std::less<std::string>,std::allocator<std::pair<std::string_const,Reflection::RSymbol*>>>
          *)(this + 0x18));
  std::vector<Reflection::RSymbol*,std::allocator<Reflection::RSymbol*>>::~vector
            ((vector<Reflection::RSymbol*,std::allocator<Reflection::RSymbol*>> *)this);
  return;
}


/* Reflection::TRefNamedSymbolCollection<Reflection::REnumMember>::~TRefNamedSymbolCollection() */

void __thiscall
Reflection::TRefNamedSymbolCollection<Reflection::REnumMember>::~TRefNamedSymbolCollection
          (TRefNamedSymbolCollection<Reflection::REnumMember> *this)

{
  std::
  map<unsigned_int,Reflection::REnumMember*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Reflection::REnumMember*>>>
  ::~map((map<unsigned_int,Reflection::REnumMember*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Reflection::REnumMember*>>>
          *)(this + 0x50));
  CRefNamedSymbolCollection::~CRefNamedSymbolCollection((CRefNamedSymbolCollection *)this);
  return;
}


/* Reflection::TRefNamedSymbolCollection<Reflection::REnum>::AddSymbol(std::string const&,
   Reflection::REnum*) */

undefined1 __thiscall
Reflection::TRefNamedSymbolCollection<Reflection::REnum>::AddSymbol
          (TRefNamedSymbolCollection<Reflection::REnum> *this,string *param_1,REnum *param_2)

{
  char cVar1;
  long lVar2;
  
  cVar1 = FUN_0547419c(param_1);
  if ((cVar1 == '\0') && (lVar2 = GetNamed(this,param_1,false), lVar2 != 0)) {
    return 0;
  }
  CRefNamedSymbolCollection::InternalAddSymbol
            ((CRefNamedSymbolCollection *)this,param_1,(RSymbol *)param_2);
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::TRefNamedSymbolCollection<Reflection::REnumMember>::AddSymbol(std::string const&,
   Reflection::REnumMember*) */

void __thiscall
Reflection::TRefNamedSymbolCollection<Reflection::REnumMember>::AddSymbol
          (TRefNamedSymbolCollection<Reflection::REnumMember> *this,string *param_1,
          REnumMember *param_2)

{
  map<unsigned_int,Reflection::REnumMember*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Reflection::REnumMember*>>>
  *this_00;
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  generic_iterator<EA::Text::TextureInfo**,void> agStack_20 [8];
  TextureInfo **local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0547419c(param_1);
  if ((cVar1 != '\0') ||
     (lVar3 = TRefNamedSymbolCollection<Reflection::RAncestor>::GetNamed
                        ((TRefNamedSymbolCollection<Reflection::RAncestor> *)this,param_1),
     cVar1 = '\0', lVar3 == 0)) {
    this_00 = (map<unsigned_int,Reflection::REnumMember*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Reflection::REnumMember*>>>
               *)(this + 0x50);
    CRefNamedSymbolCollection::InternalAddSymbol
              ((CRefNamedSymbolCollection *)this,param_1,(RSymbol *)param_2);
    uVar2 = FUN_0517ebb4(*(undefined4 *)(param_2 + 0x68));
    local_18 = (TextureInfo **)CONCAT44(local_18._4_4_,uVar2);
    local_10 = std::
               map<unsigned_int,Reflection::REnumMember*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Reflection::REnumMember*>>>
               ::find(this_00,(uint *)&local_18);
    eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
              (agStack_20,(TextureInfo ***)&local_10);
    local_18 = (TextureInfo **)
               std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this_00);
    eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
              ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_18);
    cVar1 = std::__exception_ptr::operator==((exception_ptr *)agStack_20,(exception_ptr *)&local_10)
    ;
    if (cVar1 == '\0') {
      cVar1 = '\x01';
    }
    else {
      uVar2 = FUN_0517ebb4(*(undefined4 *)(param_2 + 0x68));
      local_10 = CONCAT44(local_10._4_4_,uVar2);
      puVar4 = (undefined8 *)
               std::
               map<unsigned_int,Reflection::REnumMember*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Reflection::REnumMember*>>>
               ::operator[](this_00,(uint *)&local_10);
      *puVar4 = param_2;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar1);
  }
  return;
}


/* Reflection::TRefNamedSymbolCollection<Reflection::RClass>::AddSymbol(std::string const&,
   Reflection::RClass*) */

undefined1 __thiscall
Reflection::TRefNamedSymbolCollection<Reflection::RClass>::AddSymbol
          (TRefNamedSymbolCollection<Reflection::RClass> *this,string *param_1,RClass *param_2)

{
  char cVar1;
  long lVar2;
  
  cVar1 = FUN_0547419c(param_1);
  if ((cVar1 == '\0') && (lVar2 = GetNamed(this,param_1,false), lVar2 != 0)) {
    return 0;
  }
  CRefNamedSymbolCollection::InternalAddSymbol
            ((CRefNamedSymbolCollection *)this,param_1,(RSymbol *)param_2);
  return 1;
}

