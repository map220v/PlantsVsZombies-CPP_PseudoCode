// Class: EA::IO::DirectoryIterator


/* EA::IO::DirectoryIterator::DirectoryIterator() */

void __thiscall EA::IO::DirectoryIterator::DirectoryIterator(DirectoryIterator *this)

{
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::DirectoryIterator::Read(wchar_t const*, eastl::list<EA::IO::DirectoryIterator::Entry,
   EA::Allocator::EAIOEASTLCoreAllocator>&, wchar_t const*, int, unsigned long, bool) */

void __thiscall
EA::IO::DirectoryIterator::Read
          (DirectoryIterator *this,wchar_t *param_1,list *param_2,wchar_t *param_3,int param_4,
          ulong param_5,bool param_6)

{
  EntryFindData *pEVar1;
  char cVar2;
  EntryFindData *pEVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  EntryFindData local_3070 [12392];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EntryFindData::EntryFindData(local_3070);
  uVar9 = 0;
  local_3070[0] = (EntryFindData)param_6;
  pEVar3 = (EntryFindData *)EntryFindFirst(param_1,param_3,local_3070);
  pEVar1 = pEVar3 + 4;
  do {
    while( true ) {
      if (param_5 <= uVar9) {
        if (pEVar3 == (EntryFindData *)0x0) goto LAB_053f8a28;
        EntryFindFinish(pEVar3);
        goto joined_r0x053f8af8;
      }
      if (pEVar3 == (EntryFindData *)0x0) goto LAB_053f8a28;
      cVar2 = StrEq((wchar_t *)pEVar1,L"./");
      if ((cVar2 != '\0') || (cVar2 = StrEq((wchar_t *)pEVar1,L"../"), cVar2 != '\0')) break;
      if (pEVar3[0x1004] == (EntryFindData)0x0) {
        if ((param_4 & 2U) == 0) break;
        eastl::list<EA::IO::DirectoryIterator::Entry,EA::Allocator::EAIOEASTLCoreAllocator>::
        push_back((list<EA::IO::DirectoryIterator::Entry,EA::Allocator::EAIOEASTLCoreAllocator> *)
                  param_2);
        puVar4 = (undefined4 *)FUN_053f6f8c(*(undefined8 *)(param_2 + 8));
        uVar7 = 2;
      }
      else {
        if ((param_4 & 1U) == 0) break;
        eastl::list<EA::IO::DirectoryIterator::Entry,EA::Allocator::EAIOEASTLCoreAllocator>::
        push_back((list<EA::IO::DirectoryIterator::Entry,EA::Allocator::EAIOEASTLCoreAllocator> *)
                  param_2);
        puVar4 = (undefined4 *)FUN_053f6f8c(*(undefined8 *)(param_2 + 8));
        uVar7 = 1;
      }
      uVar9 = uVar9 + 1;
      *puVar4 = uVar7;
      eastl::basic_string<wchar_t,eastl::allocator>::operator=
                ((basic_string<wchar_t,eastl::allocator> *)(puVar4 + 2),(wchar_t *)pEVar1);
      uVar5 = *(undefined8 *)(pEVar3 + 0x1018);
      uVar8 = *(undefined8 *)(pEVar3 + 0x1008);
      *(undefined8 *)(puVar4 + 0xc) = *(undefined8 *)(pEVar3 + 0x1010);
      *(undefined8 *)(puVar4 + 0xe) = uVar5;
      *(undefined8 *)(puVar4 + 10) = uVar8;
      lVar6 = EntryFindNext(pEVar3);
      if (lVar6 == 0) goto LAB_053f89cc;
    }
    lVar6 = EntryFindNext(pEVar3);
  } while (lVar6 != 0);
LAB_053f89cc:
  EntryFindFinish(pEVar3);
joined_r0x053f8af8:
  if (((uint)param_4 >> 3 & 1) != 0) {
    if (param_5 <= uVar9) goto LAB_053f8a28;
    uVar9 = uVar9 + 1;
    eastl::list<EA::IO::DirectoryIterator::Entry,EA::Allocator::EAIOEASTLCoreAllocator>::push_front
              ((list<EA::IO::DirectoryIterator::Entry,EA::Allocator::EAIOEASTLCoreAllocator> *)
               param_2);
    puVar4 = (undefined4 *)FUN_053f6f94(*(undefined8 *)param_2);
    *puVar4 = 1;
    eastl::basic_string<wchar_t,eastl::allocator>::operator=
              ((basic_string<wchar_t,eastl::allocator> *)(puVar4 + 2),L"../");
    uVar8 = *(undefined8 *)(pEVar3 + 0x1008);
    uVar5 = *(undefined8 *)(pEVar3 + 0x1010);
    *(undefined8 *)(puVar4 + 0xe) = *(undefined8 *)(pEVar3 + 0x1018);
    *(undefined8 *)(puVar4 + 10) = uVar8;
    *(undefined8 *)(puVar4 + 0xc) = uVar5;
  }
  if ((uVar9 < param_5) && (((uint)param_4 >> 2 & 1) != 0)) {
    uVar9 = uVar9 + 1;
    eastl::list<EA::IO::DirectoryIterator::Entry,EA::Allocator::EAIOEASTLCoreAllocator>::push_front
              ((list<EA::IO::DirectoryIterator::Entry,EA::Allocator::EAIOEASTLCoreAllocator> *)
               param_2);
    puVar4 = (undefined4 *)FUN_053f6f94(*(undefined8 *)param_2);
    *puVar4 = 1;
    eastl::basic_string<wchar_t,eastl::allocator>::operator=
              ((basic_string<wchar_t,eastl::allocator> *)(puVar4 + 2),L"./");
    uVar8 = *(undefined8 *)(pEVar3 + 0x1008);
    uVar5 = *(undefined8 *)(pEVar3 + 0x1010);
    *(undefined8 *)(puVar4 + 0xe) = *(undefined8 *)(pEVar3 + 0x1018);
    *(undefined8 *)(puVar4 + 10) = uVar8;
    *(undefined8 *)(puVar4 + 0xc) = uVar5;
  }
LAB_053f8a28:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar9);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::DirectoryIterator::ReadRecursive(wchar_t const*,
   eastl::list<EA::IO::DirectoryIterator::Entry, EA::Allocator::EAIOEASTLCoreAllocator>&, wchar_t
   const*, int, bool, bool, unsigned long, bool) */

void __thiscall
EA::IO::DirectoryIterator::ReadRecursive
          (DirectoryIterator *this,wchar_t *param_1,list *param_2,wchar_t *param_3,int param_4,
          bool param_5,bool param_6,ulong param_7,bool param_8)

{
  basic_string<wchar_t,eastl::allocator> *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  CoreAllocatorAdapter *pCVar4;
  wchar_t *pwVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  undefined8 uVar11;
  ulong uVar12;
  rbtree_iterator arStack_1f0 [8];
  rbtree_iterator arStack_1e8 [8];
  undefined8 local_1e0 [5];
  undefined8 local_1b8 [54];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Path::PathStringW::PathStringW((PathStringW *)local_1b8);
  iVar3 = *(int *)(this + 8);
  *(int *)(this + 8) = iVar3 + 1;
  if (iVar3 == 0) {
    *(undefined8 *)this = 0;
    *(wchar_t **)(this + 0x10) = param_1;
    lVar7 = StdC::Strlen(param_1);
    *(long *)(this + 0x18) = lVar7;
    if ((lVar7 == 0) || (cVar2 = IsFilePathSeparator(param_1[lVar7 + -1]), cVar2 == '\0')) {
      *(long *)(this + 0x18) = lVar7 + 1;
    }
  }
  if ((((uint)param_4 >> 1 & 1) != 0) && ((param_5 || (1 < *(int *)(this + 8))))) {
    uVar12 = *(ulong *)this;
    if (param_7 <= uVar12) goto LAB_053f8b9c;
    iVar3 = Read(this,param_1,param_2,param_3,2,param_7 - uVar12,param_8);
    eastl::list<EA::Text::Span,eastl::fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>>
    ::end();
    eastl::
    advance<eastl::ListIterator<EA::IO::DirectoryIterator::Entry,EA::IO::DirectoryIterator::Entry*,EA::IO::DirectoryIterator::Entry&>,int>
              (arStack_1e8,-iVar3);
    while( true ) {
      eastl::
      list<EA::Text::Span,eastl::fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>>::end
                ();
      bVar1 = eastl::operator!=(arStack_1e8,(rbtree_iterator *)local_1e0);
      if (!bVar1) break;
      lVar7 = std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                        ((_List_const_iterator<Sexy::ActiveFontLayer> *)arStack_1e8);
      this_00 = (basic_string<wchar_t,eastl::allocator> *)(lVar7 + 8);
      uVar11 = *(undefined8 *)(lVar7 + 0x10);
      uVar8 = *(undefined8 *)(lVar7 + 8);
      *(long *)this = *(long *)this + 1;
      lVar9 = FUN_053f6f9c(uVar8,uVar11);
      eastl::basic_string<wchar_t,eastl::allocator>::insert(this_00,0,param_1);
      uVar8 = *(undefined8 *)(lVar7 + 8);
      lVar7 = FUN_053f6f9c(uVar8,*(undefined8 *)(lVar7 + 0x10));
      uVar12 = lVar7 - lVar9;
      if (uVar12 != 0) {
        piVar10 = (int *)FUN_053f6fa8(uVar8,uVar12 - 1);
        cVar2 = IsFilePathSeparator(*piVar10);
        if (cVar2 == '\0') {
          eastl::basic_string<wchar_t,eastl::allocator>::insert(this_00,uVar12,1,L'/');
        }
      }
      if (!param_6) {
        eastl::basic_string<wchar_t,eastl::allocator>::erase(this_00,0,*(ulong *)(this + 0x18));
      }
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)arStack_1e8);
    }
  }
  uVar12 = *(ulong *)this;
  if (uVar12 < param_7) {
    pCVar4 = (CoreAllocatorAdapter *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)param_2);
    eastl::
    list<EA::Text::FontServer::EffectData,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
    ::list((list<EA::Text::FontServer::EffectData,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
            *)local_1e0,pCVar4);
    Read(this,param_1,(list *)local_1e0,(wchar_t *)0x0,1,0x100000,param_8);
    FUN_053f75b0(arStack_1f0,local_1e0[0]);
    while( true ) {
      eastl::
      list<EA::Text::Span,eastl::fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>>::end
                ();
      bVar1 = eastl::operator!=(arStack_1f0,arStack_1e8);
      if ((!bVar1) || (param_7 <= *(ulong *)this)) break;
      lVar7 = std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                        ((_List_const_iterator<Sexy::ActiveFontLayer> *)arStack_1f0);
      eastl::
      basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
      ::assign((basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                *)local_1b8,param_1);
      pwVar5 = (wchar_t *)FUN_053f6f80(*(undefined8 *)(lVar7 + 8));
      Path::Append((PathStringW *)local_1b8,pwVar5,(wchar_t *)0x0);
      if ((param_4 & 1U) != 0) {
        if (param_3 != (wchar_t *)0x0) {
          pwVar5 = (wchar_t *)FUN_053f6f80(*(undefined8 *)(lVar7 + 8));
          cVar2 = FnMatch(param_3,pwVar5,0x20);
          if (cVar2 == '\0') goto LAB_053f8d40;
        }
        *(long *)this = *(long *)this + 1;
        eastl::list<EA::IO::DirectoryIterator::Entry,EA::Allocator::EAIOEASTLCoreAllocator>::
        push_back((list<EA::IO::DirectoryIterator::Entry,EA::Allocator::EAIOEASTLCoreAllocator> *)
                  param_2);
        puVar6 = (undefined4 *)FUN_053f6f8c(*(undefined8 *)(param_2 + 8));
        *puVar6 = 1;
        pwVar5 = (wchar_t *)FUN_053f6fb0(local_1b8[0]);
        eastl::basic_string<wchar_t,eastl::allocator>::operator=
                  ((basic_string<wchar_t,eastl::allocator> *)(puVar6 + 2),pwVar5);
        if (!param_6) {
          eastl::basic_string<wchar_t,eastl::allocator>::erase
                    ((basic_string<wchar_t,eastl::allocator> *)(puVar6 + 2),0,
                     *(ulong *)(this + 0x18));
        }
      }
LAB_053f8d40:
      pwVar5 = (wchar_t *)FUN_053f6fb0(local_1b8[0]);
      ReadRecursive(this,pwVar5,param_2,param_3,param_4,true,param_6,param_7,param_8);
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)arStack_1f0);
    }
    eastl::list<EA::IO::DirectoryIterator::Entry,EA::Allocator::EAIOEASTLCoreAllocator>::~list
              ((list<EA::IO::DirectoryIterator::Entry,EA::Allocator::EAIOEASTLCoreAllocator> *)
               local_1e0);
    uVar12 = *(ulong *)this;
  }
LAB_053f8b9c:
  *(int *)(this + 8) = *(int *)(this + 8) + -1;
  Path::PathString32::~PathString32((PathString32 *)local_1b8);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar12);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::DirectoryIterator::ReadRecursive(char const*,
   eastl::list<EA::IO::DirectoryIterator::Entry, EA::Allocator::EAIOEASTLCoreAllocator>&, char
   const*, int, bool, bool, unsigned long, bool) */

void EA::IO::DirectoryIterator::ReadRecursive
               (char *param_1,list *param_2,char *param_3,int param_4,bool param_5,bool param_6,
               ulong param_7,bool param_8)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  bool in_stack_00000000;
  wchar_t awStack_2008 [1024];
  wchar_t awStack_1008 [1024];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  uVar1 = StdC::Strlcpy(awStack_2008,(char *)param_2,0x400,0xffffffffffffffff);
  if ((char *)(ulong)(uint)param_4 == (char *)0x0) {
    pwVar4 = (wchar_t *)0x0;
joined_r0x053f9008:
    if (uVar1 < 0x400) {
      uVar3 = ReadRecursive((DirectoryIterator *)param_1,awStack_2008,(list *)param_3,pwVar4,
                            (uint)param_5,param_6,SUB81(param_7,0),(ulong)param_8,in_stack_00000000)
      ;
      goto LAB_053f8fc8;
    }
  }
  else {
    pwVar4 = awStack_1008;
    uVar2 = StdC::Strlcpy(pwVar4,(char *)(ulong)(uint)param_4,0x400,0xffffffffffffffff);
    if (uVar2 < 0x400) goto joined_r0x053f9008;
  }
  uVar3 = 0;
LAB_053f8fc8:
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::DirectoryIterator::ReadRecursive(char16_t const*,
   eastl::list<EA::IO::DirectoryIterator::Entry, EA::Allocator::EAIOEASTLCoreAllocator>&, char16_t
   const*, int, bool, bool, unsigned long, bool) */

void EA::IO::DirectoryIterator::ReadRecursive
               (wchar16 *param_1,list *param_2,wchar16 *param_3,int param_4,bool param_5,
               bool param_6,ulong param_7,bool param_8)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  bool in_stack_00000000;
  wchar_t awStack_2008 [1024];
  wchar_t awStack_1008 [1024];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  uVar1 = StdC::Strlcpy(awStack_2008,(wchar16 *)param_2,0x400,0xffffffffffffffff);
  if ((wchar16 *)(ulong)(uint)param_4 == (wchar16 *)0x0) {
    pwVar4 = (wchar_t *)0x0;
joined_r0x053f9130:
    if (uVar1 < 0x400) {
      uVar3 = ReadRecursive((DirectoryIterator *)param_1,awStack_2008,(list *)param_3,pwVar4,
                            (uint)param_5,param_6,SUB81(param_7,0),(ulong)param_8,in_stack_00000000)
      ;
      goto LAB_053f90f0;
    }
  }
  else {
    pwVar4 = awStack_1008;
    uVar2 = StdC::Strlcpy(pwVar4,(wchar16 *)(ulong)(uint)param_4,0x400,0xffffffffffffffff);
    if (uVar2 < 0x400) goto joined_r0x053f9130;
  }
  uVar3 = 0;
LAB_053f90f0:
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::DirectoryIterator::ReadRecursive(char32_t const*,
   eastl::list<EA::IO::DirectoryIterator::Entry, EA::Allocator::EAIOEASTLCoreAllocator>&, char32_t
   const*, int, bool, bool, unsigned long, bool) */

void EA::IO::DirectoryIterator::ReadRecursive
               (wchar32 *param_1,list *param_2,wchar32 *param_3,int param_4,bool param_5,
               bool param_6,ulong param_7,bool param_8)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  bool in_stack_00000000;
  wchar_t awStack_2008 [1024];
  wchar_t awStack_1008 [1024];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  uVar1 = FUN_053f7078(awStack_2008);
  pwVar4 = (wchar_t *)0x0;
  if (param_4 == 0) {
LAB_053f91d8:
    if (uVar1 < 0x400) {
      uVar3 = ReadRecursive((DirectoryIterator *)param_1,awStack_2008,(list *)param_3,pwVar4,
                            (uint)param_5,param_6,SUB81(param_7,0),(ulong)param_8,in_stack_00000000)
      ;
      goto LAB_053f9218;
    }
  }
  else {
    pwVar4 = awStack_1008;
    uVar2 = FUN_053f7078(pwVar4,param_4);
    if (uVar2 < 0x400) goto LAB_053f91d8;
  }
  uVar3 = 0;
LAB_053f9218:
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

