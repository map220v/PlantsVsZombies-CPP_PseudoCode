// Class: NameMapperBase


/* NameMapperBase::~NameMapperBase() */

void __thiscall NameMapperBase::~NameMapperBase(NameMapperBase *this)

{
  *(undefined ***)this = &PTR__NameMapperBase_06608450;
  std::string::~string((string *)(this + 0x38));
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::~map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
          *)(this + 8));
  return;
}


/* NameMapperBase::~NameMapperBase() */

void __thiscall NameMapperBase::~NameMapperBase(NameMapperBase *this)

{
  ~NameMapperBase(this);
  AK::FreeHook(this);
  return;
}


/* NameMapperBase::NameMapperBase() */

void __thiscall NameMapperBase::NameMapperBase(NameMapperBase *this)

{
  *(undefined ***)this = &PTR__NameMapperBase_06608450;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 8));
  Set8BytesTo0(this + 0x38);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NameMapperBase::ContainsId(int) */

void __thiscall NameMapperBase::ContainsId(NameMapperBase *this,int param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
             ::begin((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                      *)(this + 8));
  while( true ) {
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)(this + 8));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if ((!bVar1) ||
       (lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                          ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18),
       *(int *)(lVar2 + 8) == param_1)) break;
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NameMapperBase::CreateMD5Check() */

void __thiscall NameMapperBase::CreateMD5Check(NameMapperBase *this)

{
  bool bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_1f8;
  undefined8 local_1f0;
  MD5 aMStack_1e8 [112];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar2);
  std::string::string((string *)&local_1f0,"");
  FUN_05462980(auStack_178,(string *)&local_1f0);
  std::string::~string((string *)&local_1f0);
  nop();
  local_1f8 = std::
              map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
              ::begin((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                       *)(this + 8));
  while( true ) {
    local_1f0 = std::
                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)(this + 8));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_1f8,(rbtree_iterator *)&local_1f0);
    if (!bVar1) break;
    uVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_1f8);
    FUN_0545ec84(auStack_168,uVar3);
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_1f8);
    FUN_0546065c(auStack_168,*(undefined4 *)(lVar4 + 8));
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_1f8);
  }
  FUN_05462824((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_1f8,auStack_178);
  MD5::MD5(aMStack_1e8,(string *)&local_1f8);
  MD5::toString();
  FUN_05474278(this + 0x38,(string *)&local_1f0);
  std::string::~string((string *)&local_1f0);
  std::string::~string((string *)&local_1f8);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NameMapperBase::IsMapValid() */

void __thiscall NameMapperBase::IsMapValid(NameMapperBase *this)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_1f8;
  undefined8 local_1f0;
  MD5 aMStack_1e8 [112];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0547419c((string *)(this + 0x38));
  if (cVar1 == '\0') {
    uVar3 = operator|(0x10,8);
    FUN_05462470(auStack_178,uVar3);
    std::string::string((string *)&local_1f0,"");
    FUN_05462980(auStack_178,(string *)&local_1f0);
    std::string::~string((string *)&local_1f0);
    nop();
    local_1f8 = std::
                map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                ::begin((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)(this + 8));
    while( true ) {
      local_1f0 = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)(this + 8));
      bVar2 = eastl::operator!=((rbtree_iterator *)&local_1f8,(rbtree_iterator *)&local_1f0);
      if (!bVar2) break;
      uVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_1f8);
      FUN_0545ec84(auStack_168,uVar4);
      lVar5 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_1f8);
      FUN_0546065c(auStack_168,*(undefined4 *)(lVar5 + 8));
      std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_1f8);
    }
    FUN_05462824((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_1f8,auStack_178);
    MD5::MD5(aMStack_1e8,(string *)&local_1f8);
    MD5::toString();
    cVar1 = std::operator==((string *)(this + 0x38),(string *)&local_1f0);
    std::string::~string((string *)&local_1f0);
    std::string::~string((string *)&local_1f8);
    FUN_054617bc(auStack_178);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NameMapperBase::GetNameForId(int) */

void NameMapperBase::GetNameForId(int param_1)

{
  map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>> *this
  ;
  char cVar1;
  bool bVar2;
  long lVar3;
  int in_w1;
  string *in_x8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = IsMapValid((NameMapperBase *)(ulong)(uint)param_1);
  if (cVar1 == '\0') {
    std::string::string(in_x8,"");
    nop();
  }
  else {
    this = (map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
            *)((NameMapperBase *)(ulong)(uint)param_1 + 8);
    local_18 = std::
               map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
               ::begin(this);
    while( true ) {
      local_10 = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)this);
      bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
      if (!bVar2) break;
      lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
      if (*(int *)(lVar3 + 8) == in_w1) {
        FUN_05475d88();
        goto LAB_03ede954;
      }
      std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    }
    std::string::string(in_x8,"");
    nop();
  }
LAB_03ede954:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NameMapperBase::ContainsName(std::string const&) */

void __thiscall NameMapperBase::ContainsName(NameMapperBase *this,string *param_1)

{
  bool bVar1;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
             ::find((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                     *)(this + 8),param_1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 8));
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NameMapperBase::GetIdForName(std::string const&) */

void __thiscall NameMapperBase::GetIdForName(NameMapperBase *this,string *param_1)

{
  map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  *this_00;
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = IsMapValid(this);
  if (cVar1 != '\0') {
    this_00 = (map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
               *)(this + 8);
    local_18 = std::
               map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
               ::find(this_00,param_1);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this_00);
    cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
    if (cVar1 == '\0') {
      puVar3 = (undefined4 *)
               std::
               map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
               ::at(this_00,param_1);
      uVar2 = *puVar3;
      goto LAB_03edeb38;
    }
  }
  uVar2 = 0xffffffff;
LAB_03edeb38:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* NameMapperBase::Mondify(std::string const&, int) */

void __thiscall NameMapperBase::Mondify(NameMapperBase *this,string *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)std::
                  map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                  ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                                *)(this + 8),param_1);
  *piVar1 = param_2;
  CreateMD5Check(this);
  return;
}


/* NameMapperBase::NameMapperBase(NameMapperBase const&) */

void __thiscall NameMapperBase::NameMapperBase(NameMapperBase *this,NameMapperBase *param_1)

{
  *(undefined ***)this = &PTR__NameMapperBase_06608450;
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
         *)(this + 8),(map *)(param_1 + 8));
  FUN_05475d88(this + 0x38,param_1 + 0x38);
  return;
}


/* NameMapperBase::TEMPNAMEPLACEHOLDERVALUE(NameMapperBase const&) */

NameMapperBase * __thiscall NameMapperBase::operator=(NameMapperBase *this,NameMapperBase *param_1)

{
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::operator=((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
               *)(this + 8),(map *)(param_1 + 8));
  thunk_FUN_05475e00(this + 0x38,param_1 + 0x38);
  return this;
}

