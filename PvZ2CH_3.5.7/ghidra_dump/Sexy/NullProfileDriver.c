// Class: Sexy::NullProfileDriver


/* Sexy::NullProfileDriver::GetNumProfiles() */

void __thiscall Sexy::NullProfileDriver::GetNumProfiles(NullProfileDriver *this)

{
  std::
  map<std::wstring,Sexy::UserProfile*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::UserProfile*>>>
  ::size((map<std::wstring,Sexy::UserProfile*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::UserProfile*>>>
          *)(this + 8));
  return;
}


/* Sexy::NullProfileDriver::NullProfileDriver() */

void __thiscall Sexy::NullProfileDriver::NullProfileDriver(NullProfileDriver *this)

{
  IProfileDriver::IProfileDriver((IProfileDriver *)this);
  *(undefined ***)this = &PTR__NullProfileDriver_06a35700;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::NullProfileDriver::GetProfile(int) */

void __thiscall Sexy::NullProfileDriver::GetProfile(NullProfileDriver *this,int param_1)

{
  map<std::wstring,Sexy::UserProfile*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::UserProfile*>>>
  *this_00;
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (map<std::wstring,Sexy::UserProfile*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::UserProfile*>>>
             *)(this + 8);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::wstring,Sexy::UserProfile*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::UserProfile*>>>
             ::begin(this_00);
  for (iVar4 = 0; iVar4 < param_1; iVar4 = iVar4 + 1) {
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this_00);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) break;
    FUN_052fa448((rbtree_iterator *)&local_18);
  }
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this_00);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::NullProfileDriver::GetAnyProfile() */

void __thiscall Sexy::NullProfileDriver::GetAnyProfile(NullProfileDriver *this)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = std::
          map<std::wstring,Sexy::UserProfile*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::UserProfile*>>>
          ::empty((map<std::wstring,Sexy::UserProfile*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::UserProfile*>>>
                   *)(this + 8));
  if (cVar1 == '\0') {
    local_10 = std::
               map<std::wstring,Sexy::UserProfile*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::UserProfile*>>>
               ::begin((map<std::wstring,Sexy::UserProfile*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::UserProfile*>>>
                        *)(this + 8));
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_10);
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


/* Sexy::NullProfileDriver::~NullProfileDriver() */

void __thiscall Sexy::NullProfileDriver::~NullProfileDriver(NullProfileDriver *this)

{
  *(undefined ***)this = &PTR__NullProfileDriver_06a35700;
  std::
  map<std::wstring,Sexy::UserProfile*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::UserProfile*>>>
  ::~map((map<std::wstring,Sexy::UserProfile*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::UserProfile*>>>
          *)(this + 8));
  return;
}


/* Sexy::NullProfileDriver::~NullProfileDriver() */

void __thiscall Sexy::NullProfileDriver::~NullProfileDriver(NullProfileDriver *this)

{
  ~NullProfileDriver(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::NullProfileDriver::GetProfile(std::wstring const&) */

void __thiscall Sexy::NullProfileDriver::GetProfile(NullProfileDriver *this,wstring *param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::wstring,Sexy::UserProfile*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::UserProfile*>>>
             ::find((map<std::wstring,Sexy::UserProfile*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::UserProfile*>>>
                     *)(this + 8),param_1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 8));
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::NullProfileDriver::AddProfile(std::wstring const&) */

void __thiscall Sexy::NullProfileDriver::AddProfile(NullProfileDriver *this,wstring *param_1)

{
  long lVar1;
  undefined8 uVar2;
  UserProfile *local_40;
  pair<std::_Rb_tree_iterator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,bool> apStack_38 [8]
  ;
  char local_30;
  pair<std::wstring_const,Sexy::UserProfile*> apStack_28 [16];
  pair local_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::pair<std::_Rb_tree_iterator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,bool>::pair();
  local_40 = (UserProfile *)
             ProfileManager::CreateUserProfile(*(ProfileManager **)(gSexyAppBase + 0x918));
  std::pair<std::wstring_const,Sexy::UserProfile*>::pair<Sexy::UserProfile*&,void>
            (apStack_28,param_1,&local_40);
  local_18 = (pair  [16])
             std::
             map<std::wstring,Sexy::UserProfile*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::UserProfile*>>>
             ::insert<std::pair<std::wstring_const,Sexy::UserProfile*>,void>
                       ((map<std::wstring,Sexy::UserProfile*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::UserProfile*>>>
                         *)(this + 8),(pair *)apStack_28);
  std::pair<std::_Rb_tree_iterator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,bool>::
  operator=(apStack_38,local_18);
  std::pair<std::wstring_const,Sexy::DataElement*>::~pair
            ((pair<std::wstring_const,Sexy::DataElement*> *)apStack_28);
  if (local_30 == '\0') {
    uVar2 = 0;
  }
  else {
    lVar1 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)apStack_38);
    uVar2 = *(undefined8 *)(lVar1 + 8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

