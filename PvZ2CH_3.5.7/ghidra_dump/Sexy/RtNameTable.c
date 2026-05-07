// Class: Sexy::RtNameTable


/* Sexy::RtNameTable::TableGetCount() */

int __thiscall Sexy::RtNameTable::TableGetCount(RtNameTable *this)

{
  int iVar1;
  
  iVar1 = FUN_051c0770(*(undefined8 *)(this + 0x30),*(undefined8 *)(this + 0x38));
  return iVar1 + 1;
}


/* Sexy::RtNameTable::TableStringForIndex(unsigned int) */

undefined * __thiscall Sexy::RtNameTable::TableStringForIndex(RtNameTable *this,uint param_1)

{
  long *plVar1;
  undefined *puVar2;
  
  if (param_1 != 0) {
    plVar1 = (long *)FUN_051c0764(*(undefined8 *)(this + 0x30),param_1 - 1);
    puVar2 = (undefined *)FUN_054766ec(*plVar1 + 0x18);
    return puVar2;
  }
  return &DAT_056f11a8;
}


/* Sexy::RtNameTable::TableGetRefCountForString(unsigned int) */

undefined4 __thiscall Sexy::RtNameTable::TableGetRefCountForString(RtNameTable *this,uint param_1)

{
  long *plVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_1 != 0) {
    plVar1 = (long *)FUN_051c0764(*(undefined8 *)(this + 0x30),param_1 - 1);
    uVar2 = *(undefined4 *)(*plVar1 + 0x20);
  }
  return uVar2;
}


/* Sexy::RtNameTable::TableRetainString(unsigned int) */

int __thiscall Sexy::RtNameTable::TableRetainString(RtNameTable *this,uint param_1)

{
  long *plVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_1 != 0) {
    plVar1 = (long *)FUN_051c0764(*(undefined8 *)(this + 0x30),param_1 - 1);
    iVar2 = *(int *)(*plVar1 + 0x20) + 1;
    *(int *)(*plVar1 + 0x20) = iVar2;
  }
  return iVar2;
}


/* Sexy::RtNameTable::RtNameTable() */

void __thiscall Sexy::RtNameTable::RtNameTable(RtNameTable *this)

{
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  Entry::Entry((Entry *)(this + 0x48));
  Entry::Entry((Entry *)(this + 0x70));
  return;
}


/* Sexy::RtNameTable::GetNameTable() */

RtNameTable * Sexy::RtNameTable::GetNameTable(void)

{
  RtNameTable *this;
  
  if (DAT_06bbdb50 != (RtNameTable *)0x0) {
    return DAT_06bbdb50;
  }
  this = ::operator_new(0x98);
  RtNameTable(this);
  sRtNameTable = this;
  DAT_06bbdb50 = this;
  return this;
}


/* Sexy::RtNameTable::~RtNameTable() */

void __thiscall Sexy::RtNameTable::~RtNameTable(RtNameTable *this)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  Entry *this_00;
  
  uVar3 = *(undefined8 *)(this + 0x30);
  uVar1 = FUN_051c0770(uVar3,*(undefined8 *)(this + 0x38));
  if (uVar1 != 0) {
    lVar4 = 0;
    while( true ) {
      puVar2 = (undefined8 *)FUN_051c0764(uVar3,lVar4);
      this_00 = (Entry *)*puVar2;
      if (this_00 != (Entry *)0x0) {
        Entry::~Entry(this_00);
        AK::FreeHook(this_00);
      }
      if (uVar1 <= (uint)(lVar4 + 1)) break;
      uVar3 = *(undefined8 *)(this + 0x30);
      lVar4 = lVar4 + 1;
    }
  }
  Entry::~Entry((Entry *)(this + 0x70));
  Entry::~Entry((Entry *)(this + 0x48));
  std::vector<Sexy::RtNameTable::Entry*,std::allocator<Sexy::RtNameTable::Entry*>>::~vector
            ((vector<Sexy::RtNameTable::Entry*,std::allocator<Sexy::RtNameTable::Entry*>> *)
             (this + 0x30));
  std::
  map<wchar_t_const*,int,Sexy::RtNameTable::NameStringCompareFunctor,std::allocator<std::pair<wchar_t_const*const,int>>>
  ::~map((map<wchar_t_const*,int,Sexy::RtNameTable::NameStringCompareFunctor,std::allocator<std::pair<wchar_t_const*const,int>>>
          *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtNameTable::RemoveEntry(Sexy::RtNameTable::Entry*) */

void __thiscall Sexy::RtNameTable::RemoveEntry(RtNameTable *this,Entry *param_1)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  FUN_054766ec(param_1 + 0x18);
  std::
  map<wchar_t_const*,int,Sexy::RtNameTable::NameStringCompareFunctor,std::allocator<std::pair<wchar_t_const*const,int>>>
  ::erase((wchar_t **)this);
  FUN_054772c4(param_1 + 0x18,&DAT_056f11a8);
  RtRingItem<Sexy::RtNameTable::Entry>::RingLinkAfter
            ((RtRingItem<Sexy::RtNameTable::Entry> *)param_1,(Entry *)(this + 0x48));
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::RtNameTable::TableReleaseString(unsigned int) */

int __thiscall Sexy::RtNameTable::TableReleaseString(RtNameTable *this,uint param_1)

{
  undefined8 *puVar1;
  Entry *pEVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_1 != 0) {
    puVar1 = (undefined8 *)FUN_051c0764(*(undefined8 *)(this + 0x30),param_1 - 1);
    pEVar2 = (Entry *)*puVar1;
    iVar3 = *(int *)(pEVar2 + 0x20) + -1;
    *(int *)(pEVar2 + 0x20) = iVar3;
    if (iVar3 == 0) {
      RemoveEntry(this,pEVar2);
      return 0;
    }
  }
  return iVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtNameTable::FindEntry(wchar_t const*) */

void __thiscall Sexy::RtNameTable::FindEntry(RtNameTable *this,wchar_t *param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  wchar_t *local_28 [2];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28[0] = param_1;
  local_18 = std::
             map<wchar_t_const*,int,Sexy::RtNameTable::NameStringCompareFunctor,std::allocator<std::pair<wchar_t_const*const,int>>>
             ::find((map<wchar_t_const*,int,Sexy::RtNameTable::NameStringCompareFunctor,std::allocator<std::pair<wchar_t_const*const,int>>>
                     *)this,local_28);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    puVar3 = (undefined8 *)FUN_051c0764(*(undefined8 *)(this + 0x30),(long)*(int *)(lVar2 + 8));
    uVar4 = *puVar3;
  }
  else {
    uVar4 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtNameTable::AddEntry(wchar_t const*) */

void __thiscall Sexy::RtNameTable::AddEntry(RtNameTable *this,wchar_t *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  Entry *this_00;
  RtRingItem<Sexy::RtNameTable::Entry> *local_18;
  wchar_t *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = (RtRingItem<Sexy::RtNameTable::Entry> *)FindEntry(this,param_1);
  if (local_18 == (RtRingItem<Sexy::RtNameTable::Entry> *)0x0) {
    local_18 = (RtRingItem<Sexy::RtNameTable::Entry> *)FUN_051c076c(*(undefined8 *)(this + 0x50));
    if (local_18 == (RtRingItem<Sexy::RtNameTable::Entry> *)(this + 0x48)) {
      this_00 = ::operator_new(0x28);
      Entry::Entry(this_00);
      local_18 = (RtRingItem<Sexy::RtNameTable::Entry> *)this_00;
      uVar1 = FUN_051c0770(*(undefined8 *)(this + 0x30),*(undefined8 *)(this + 0x38));
      *(undefined4 *)(this_00 + 0x10) = uVar1;
      std::vector<Sexy::RtNameTable::Entry*,std::allocator<Sexy::RtNameTable::Entry*>>::push_back
                ((vector<Sexy::RtNameTable::Entry*,std::allocator<Sexy::RtNameTable::Entry*>> *)
                 (this + 0x30),(Entry **)&local_18);
    }
    FUN_054772c4((RtNameTable *)(local_18 + 0x18),param_1);
    *(undefined4 *)(local_18 + 0x20) = 0;
    RtRingItem<Sexy::RtNameTable::Entry>::RingLinkAfter(local_18,(Entry *)(this + 0x70));
    local_10 = (wchar_t *)FUN_054766ec(local_18 + 0x18);
    puVar2 = (undefined4 *)
             std::
             map<wchar_t_const*,int,Sexy::RtNameTable::NameStringCompareFunctor,std::allocator<std::pair<wchar_t_const*const,int>>>
             ::operator[]((map<wchar_t_const*,int,Sexy::RtNameTable::NameStringCompareFunctor,std::allocator<std::pair<wchar_t_const*const,int>>>
                           *)this,&local_10);
    *puVar2 = *(undefined4 *)(local_18 + 0x10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_18);
}


/* Sexy::RtNameTable::TableIndexForString(wchar_t const*) */

int __thiscall Sexy::RtNameTable::TableIndexForString(RtNameTable *this,wchar_t *param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((param_1 != (wchar_t *)0x0) && (iVar2 = 0, *param_1 != L'\0')) {
    lVar1 = AddEntry(this,param_1);
    iVar2 = *(int *)(lVar1 + 0x10) + 1;
  }
  return iVar2;
}

