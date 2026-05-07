// Class: Sexy::PopLoc


/* Sexy::PopLoc::PopLoc() */

void __thiscall Sexy::PopLoc::PopLoc(PopLoc *this)

{
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)this);
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x30));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PopLoc::GetString(int, std::wstring const&) const */

void Sexy::PopLoc::GetString(int param_1,wstring *param_2)

{
  char cVar1;
  int local_24 [3];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_24[0] = (int)param_2;
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::find((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)(ulong)(uint)param_1,local_24);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(ulong)(uint)param_1);
  cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
  if (cVar1 == '\0') {
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    FUN_05477b24();
  }
  else {
    FUN_05477b24();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PopLoc::GetString(std::wstring const&, std::wstring const&) const */

void Sexy::PopLoc::GetString(wstring *param_1,wstring *param_2)

{
  char cVar1;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StringToUpper((Sexy *)param_2,param_2);
  local_18 = std::
             map<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,std::wstring>>>
             ::find((map<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,std::wstring>>>
                     *)(param_1 + 0x30),(wstring *)&local_10);
  FUN_05476c50((wstring *)&local_10);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(param_1 + 0x30));
  cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
  if (cVar1 == '\0') {
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    FUN_05477b24();
  }
  else {
    FUN_05477b24();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PopLoc::Evaluate(std::wstring const&) const */

void __thiscall Sexy::PopLoc::Evaluate(PopLoc *this,wstring *param_1)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  wstring *pwVar4;
  undefined1 auStack_30 [4];
  uint local_2c;
  wstring awStack_28 [8];
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05477b24();
  do {
    while( true ) {
      uVar2 = FUN_05476818();
      if (uVar2 == 0xffffffffffffffff) goto LAB_053de3d0;
      uVar3 = FUN_05476818();
      if (uVar2 + 1 == uVar3) break;
      FUN_05477da4(awStack_28);
      local_2c = 0;
      cVar1 = StringToInt(awStack_28,(int *)&local_2c);
      if (cVar1 == '\0') {
        FUN_05478178(auStack_10,&DAT_056f11a8,auStack_20);
        GetString((wstring *)this,awStack_28);
        FUN_05476c50(auStack_10);
        nop();
        FUN_05478128();
        FUN_05476c50(auStack_18);
      }
      else {
        pwVar4 = (wstring *)(ulong)local_2c;
        FUN_05478178(auStack_18,&DAT_056f11a8,auStack_30);
        GetString((wstring *)this,awStack_28);
        GetString((int)this,pwVar4);
        FUN_05476c50(auStack_10);
        FUN_05476c50(auStack_18);
        nop();
        FUN_05478128();
        FUN_05476c50(auStack_20);
      }
      FUN_05476c50(awStack_28);
      uVar3 = FUN_054765d0();
      if (uVar3 <= uVar2) goto LAB_053de3d0;
    }
    FUN_05476fac();
    uVar3 = FUN_054765d0();
  } while (uVar2 + 1 < uVar3);
LAB_053de3d0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PopLoc::RemoveString(int) */

void __thiscall Sexy::PopLoc::RemoveString(PopLoc *this,int param_1)

{
  bool bVar1;
  int local_24 [3];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_24[0] = param_1;
  local_18 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::find((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)this,local_24);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    std::map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>::
    erase_abi_cxx11_(this,local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* Sexy::PopLoc::~PopLoc() */

void __thiscall Sexy::PopLoc::~PopLoc(PopLoc *this)

{
  std::
  map<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,std::wstring>>>
  ::~map((map<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,std::wstring>>>
          *)(this + 0x30));
  std::map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>::~map
            ((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PopLoc::RemoveString(std::wstring const&) */

void __thiscall Sexy::PopLoc::RemoveString(PopLoc *this,wstring *param_1)

{
  map<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,std::wstring>>>
  *this_00;
  bool bVar1;
  undefined8 local_18;
  undefined8 local_10;
  wstring *local_8;
  
  this_00 = (map<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,std::wstring>>>
             *)(this + 0x30);
  local_8 = ___stack_chk_guard;
  StringToUpper((Sexy *)param_1,___stack_chk_guard);
  local_18 = std::
             map<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,std::wstring>>>
             ::find(this_00,(wstring *)&local_10);
  FUN_05476c50((wstring *)&local_10);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this_00);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    std::
    map<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,std::wstring>>>
    ::erase_abi_cxx11_(this_00,local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PopLoc::SetString(int, std::wstring const&, bool) */

void __thiscall Sexy::PopLoc::SetString(PopLoc *this,int param_1,wstring *param_2,bool param_3)

{
  undefined8 uVar1;
  undefined1 extraout_w1;
  undefined1 uVar2;
  int local_24 [3];
  pair<int_const,std::wstring> apStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_24[0] = param_1;
  if (param_3) {
    uVar2 = 1;
    uVar1 = std::
            map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>::
            operator[]((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)this,local_24);
    thunk_FUN_05477b9c(uVar1,param_2);
  }
  else {
    std::make_pair<int_const&,std::wstring_const&>(local_24,param_2);
    std::map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>::
    insert<std::pair<int,std::wstring>,void>
              ((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)this,(pair *)apStack_18);
    std::pair<int_const,std::wstring>::~pair(apStack_18);
    uVar2 = extraout_w1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PopLoc::SetString(std::wstring const&, std::wstring const&, bool) */

void __thiscall Sexy::PopLoc::SetString(PopLoc *this,wstring *param_1,wstring *param_2,bool param_3)

{
  undefined8 uVar1;
  undefined1 extraout_w1;
  undefined1 uVar2;
  wstring awStack_20 [8];
  pair<std::wstring,std::wstring> apStack_18 [16];
  wstring *local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_3) {
    uVar2 = 1;
    StringToUpper((Sexy *)param_1,___stack_chk_guard);
    uVar1 = std::
            map<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,std::wstring>>>
            ::operator[]((map<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,std::wstring>>>
                          *)(this + 0x30),(wstring *)apStack_18);
    thunk_FUN_05477b9c(uVar1,param_2);
    FUN_05476c50((wstring *)apStack_18);
  }
  else {
    StringToUpper((Sexy *)param_1,___stack_chk_guard);
    std::make_pair<std::wstring,std::wstring_const&>(awStack_20,param_2);
    std::
    map<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,std::wstring>>>
    ::insert<std::pair<std::wstring,std::wstring>,void>
              ((map<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,std::wstring>>>
                *)(this + 0x30),(pair *)apStack_18);
    std::pair<std::wstring,std::wstring>::~pair(apStack_18);
    FUN_05476c50(awStack_20);
    uVar2 = extraout_w1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

