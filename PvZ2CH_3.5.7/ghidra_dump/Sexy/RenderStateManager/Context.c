// Class: Sexy::RenderStateManager::Context


void __thiscall Sexy::RenderStateManager::Context::RevertState(Context *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  State *this_00;
  long lVar7;
  
  SplitChildren(this);
  lVar5 = FUN_053df3b4(*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
  uVar3 = *(uint *)(this + 0x20);
  if (lVar5 - (ulong)uVar3 != 0) {
    lVar7 = 0;
    puVar6 = (undefined8 *)
             std::
             vector<Sexy::RenderStateManager::Context::JournalEntry,PooledAllocator<Sexy::RenderStateManager::Context::JournalEntry,Sexy::SimpleMemPool>>
             ::back((vector<Sexy::RenderStateManager::Context::JournalEntry,PooledAllocator<Sexy::RenderStateManager::Context::JournalEntry,Sexy::SimpleMemPool>>
                     *)this);
    (**(code **)(**(long **)*puVar6 + 0x30))(*(long **)*puVar6);
    while( true ) {
      this_00 = (State *)*puVar6;
      uVar1 = puVar6[1];
      uVar2 = puVar6[2];
      *(undefined8 *)(this_00 + 0x38) = puVar6[3];
      *(undefined8 *)(this_00 + 0x28) = uVar1;
      *(undefined8 *)(this_00 + 0x30) = uVar2;
      State::SetDirty(this_00);
      FUN_053df440(this + 0x10);
      bVar4 = lVar7 == (lVar5 - (ulong)uVar3) + -1;
      lVar7 = lVar7 + 1;
      if (bVar4) break;
      puVar6 = (undefined8 *)
               std::
               vector<Sexy::RenderStateManager::Context::JournalEntry,PooledAllocator<Sexy::RenderStateManager::Context::JournalEntry,Sexy::SimpleMemPool>>
               ::back((vector<Sexy::RenderStateManager::Context::JournalEntry,PooledAllocator<Sexy::RenderStateManager::Context::JournalEntry,Sexy::SimpleMemPool>>
                       *)this);
    }
  }
  return;
}


void __thiscall Sexy::RenderStateManager::Context::PushState(Context *this)

{
  undefined4 uVar1;
  
  SplitChildren(this);
  std::vector<unsigned_int,PooledAllocator<unsigned_int,Sexy::SimpleMemPool>>::push_back
            ((vector<unsigned_int,PooledAllocator<unsigned_int,Sexy::SimpleMemPool>> *)(this + 0x28)
             ,(uint *)(this + 0x20));
  uVar1 = FUN_053df3b4(*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
  *(undefined4 *)(this + 0x20) = uVar1;
  return;
}


void __thiscall Sexy::RenderStateManager::Context::PopState(Context *this)

{
  undefined4 *puVar1;
  
  SplitChildren(this);
  RevertState(this);
  puVar1 = (undefined4 *)
           std::vector<unsigned_int,PooledAllocator<unsigned_int,Sexy::SimpleMemPool>>::back
                     ((vector<unsigned_int,PooledAllocator<unsigned_int,Sexy::SimpleMemPool>> *)
                      (this + 0x28));
  *(undefined4 *)(this + 0x20) = *puVar1;
  FUN_053df478(this + 0x38);
  return;
}


/* Sexy::RenderStateManager::Context::Unacquire(bool) */

void __thiscall Sexy::RenderStateManager::Context::Unacquire(Context *this,bool param_1)

{
  undefined8 uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  State *this_00;
  undefined8 uVar6;
  long lVar7;
  
  do {
    uVar6 = *(undefined8 *)(this + 8);
    iVar4 = FUN_053df3b4(uVar6,*(undefined8 *)(this + 0x10));
    uVar2 = iVar4 - 1;
    if (-1 < (int)uVar2) {
      puVar5 = (undefined8 *)FUN_053df3d4(uVar6);
      (**(code **)(**(long **)*puVar5 + 0x30))(*(long **)*puVar5);
      lVar7 = (long)(int)uVar2 + -1;
      while( true ) {
        this_00 = (State *)*puVar5;
        uVar6 = puVar5[1];
        uVar1 = puVar5[2];
        *(undefined8 *)(this_00 + 0x38) = puVar5[3];
        *(undefined8 *)(this_00 + 0x28) = uVar6;
        *(undefined8 *)(this_00 + 0x30) = uVar1;
        State::SetDirty(this_00);
        if (lVar7 == ((long)(int)uVar2 + -1) - (ulong)uVar2) break;
        puVar5 = (undefined8 *)FUN_053df3d4(*(undefined8 *)(this + 8),lVar7);
        lVar7 = lVar7 + -1;
      }
    }
    this = *(Context **)(this + 0x48);
    bVar3 = param_1 == false;
    param_1 = (bool)'\0';
  } while (bVar3 && this != (Context *)0x0);
  return;
}


/* Sexy::RenderStateManager::Context::Reacquire(bool) */

void __thiscall Sexy::RenderStateManager::Context::Reacquire(Context *this,bool param_1)

{
  int iVar1;
  Context *this_00;
  undefined8 *puVar2;
  State *this_01;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  this_00 = *(Context **)(this + 0x48);
  if ((!param_1) && (this_00 != (Context *)0x0)) {
    Reacquire(this_00,this_00 == (Context *)0x0);
  }
  uVar4 = *(undefined8 *)(this + 8);
  iVar1 = FUN_053df3b4(uVar4,*(undefined8 *)(this + 0x10));
  if (0 < iVar1) {
    lVar5 = 0;
    puVar2 = (undefined8 *)FUN_053df3d4(uVar4);
    (**(code **)(**(long **)*puVar2 + 0x30))(*(long **)*puVar2);
    while( true ) {
      lVar5 = lVar5 + 1;
      uVar4 = puVar2[5];
      this_01 = (State *)*puVar2;
      uVar3 = puVar2[6];
      *(undefined8 *)(this_01 + 0x28) = puVar2[4];
      *(undefined8 *)(this_01 + 0x30) = uVar4;
      *(undefined8 *)(this_01 + 0x38) = uVar3;
      State::SetDirty(this_01);
      if (iVar1 <= (int)lVar5) break;
      puVar2 = (undefined8 *)FUN_053df3d4(*(undefined8 *)(this + 8),lVar5);
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RenderStateManager::Context::Context() */

void __thiscall Sexy::RenderStateManager::Context::Context(Context *this)

{
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  arStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  eastl::
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  ::rbtree_iterator(arStack_10,(rbtree_node *)msJournalEntryPool);
  std::
  vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>
  ::vector((vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>
            *)this,(PooledAllocator *)arStack_10);
  *(undefined4 *)(this + 0x20) = 0;
  eastl::
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  ::rbtree_iterator(arStack_10,(rbtree_node *)msFloorPool);
  std::
  vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>
  ::vector((vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>
            *)(this + 0x28),(PooledAllocator *)arStack_10);
  *(undefined8 *)(this + 0x48) = 0;
  eastl::
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  ::rbtree_iterator(arStack_10,(rbtree_node *)msChildPool);
  std::
  vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>
  ::vector((vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>
            *)(this + 0x50),(PooledAllocator *)arStack_10);
  std::
  vector<Sexy::RenderStateManager::Context::JournalEntry,PooledAllocator<Sexy::RenderStateManager::Context::JournalEntry,Sexy::SimpleMemPool>>
  ::reserve((vector<Sexy::RenderStateManager::Context::JournalEntry,PooledAllocator<Sexy::RenderStateManager::Context::JournalEntry,Sexy::SimpleMemPool>>
             *)this,0x80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RenderStateManager::Context::Context(Sexy::RenderStateManager::Context const&) */

void __thiscall Sexy::RenderStateManager::Context::Context(Context *this,Context *param_1)

{
  Context *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  eastl::
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  ::rbtree_iterator((rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
                     *)&local_10,(rbtree_node *)msJournalEntryPool);
  std::
  vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>
  ::vector((vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>
            *)this,(PooledAllocator *)&local_10);
  *(undefined4 *)(this + 0x20) = 0;
  eastl::
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  ::rbtree_iterator((rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
                     *)&local_10,(rbtree_node *)msFloorPool);
  std::
  vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>
  ::vector((vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>
            *)(this + 0x28),(PooledAllocator *)&local_10);
  *(Context **)(this + 0x48) = param_1;
  eastl::
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  ::rbtree_iterator((rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
                     *)&local_10,(rbtree_node *)msChildPool);
  std::
  vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>
  ::vector((vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>
            *)(this + 0x50),(PooledAllocator *)&local_10);
  std::
  vector<Sexy::RenderStateManager::Context::JournalEntry,PooledAllocator<Sexy::RenderStateManager::Context::JournalEntry,Sexy::SimpleMemPool>>
  ::reserve((vector<Sexy::RenderStateManager::Context::JournalEntry,PooledAllocator<Sexy::RenderStateManager::Context::JournalEntry,Sexy::SimpleMemPool>>
             *)this,0x80);
  local_10 = this;
  std::
  vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>
  ::push_back((vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>
               *)(*(long *)(this + 0x48) + 0x50),&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RenderStateManager::Context::SplitChildren() */

void __thiscall Sexy::RenderStateManager::Context::SplitChildren(Context *this)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  void *pvVar6;
  void *pvVar7;
  long lVar8;
  int *piVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  vector<Sexy::RenderStateManager::Context::JournalEntry,PooledAllocator<Sexy::RenderStateManager::Context::JournalEntry,Sexy::SimpleMemPool>>
  *local_28;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = std::
          vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>
          ::empty((vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>
                   *)(this + 0x50));
  if (cVar1 == '\0') {
    uVar3 = FUN_053df3b4(*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
    uVar10 = *(undefined8 *)(this + 0x58);
    iVar2 = FUN_053df3a0(uVar10,*(undefined8 *)(this + 0x60));
    if (0 < iVar2) {
      lVar12 = 0;
      while( true ) {
        plVar4 = (long *)FUN_053df3ac(uVar10,lVar12);
        local_28 = (vector<Sexy::RenderStateManager::Context::JournalEntry,PooledAllocator<Sexy::RenderStateManager::Context::JournalEntry,Sexy::SimpleMemPool>>
                    *)*plVar4;
        if (uVar3 != 0) {
          uVar5 = FUN_053df3b4(*(undefined8 *)(local_28 + 8),*(undefined8 *)(local_28 + 0x10));
          std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                    ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
          if (uVar5 == 0) {
            std::
            vector<Sexy::RenderStateManager::Context::JournalEntry,PooledAllocator<Sexy::RenderStateManager::Context::JournalEntry,Sexy::SimpleMemPool>>
            ::resize(local_28,uVar3);
            pvVar6 = (void *)FUN_053df3d4(*(undefined8 *)(local_28 + 8),0);
            pvVar7 = (void *)FUN_053df3d4(*(undefined8 *)(this + 8),0);
            memcpy(pvVar6,pvVar7,uVar3 * 0x38);
          }
          else {
            std::
            vector<Sexy::RenderStateManager::Context::JournalEntry,std::allocator<Sexy::RenderStateManager::Context::JournalEntry>>
            ::resize((vector<Sexy::RenderStateManager::Context::JournalEntry,std::allocator<Sexy::RenderStateManager::Context::JournalEntry>>
                      *)local_20,uVar5);
            pvVar6 = (void *)FUN_053df68c(local_20[0]);
            pvVar7 = (void *)FUN_053df3d4(*(undefined8 *)(local_28 + 8),0);
            memcpy(pvVar6,pvVar7,uVar5 * 0x38);
            std::
            vector<Sexy::RenderStateManager::Context::JournalEntry,PooledAllocator<Sexy::RenderStateManager::Context::JournalEntry,Sexy::SimpleMemPool>>
            ::resize(local_28,uVar5 + uVar3);
            pvVar6 = (void *)FUN_053df3d4(*(undefined8 *)(local_28 + 8),0);
            pvVar7 = (void *)FUN_053df3d4(*(undefined8 *)(this + 8),0);
            memcpy(pvVar6,pvVar7,uVar3 * 0x38);
            pvVar6 = (void *)FUN_053df3d4(*(undefined8 *)(local_28 + 8),uVar3);
            pvVar7 = (void *)FUN_053df68c(local_20[0]);
            memcpy(pvVar6,pvVar7,uVar5 * 0x38);
          }
          uVar10 = *(undefined8 *)(local_28 + 0x30);
          *(int *)(local_28 + 0x20) = *(int *)(local_28 + 0x20) + (int)uVar3;
          lVar8 = FUN_053df3e4(uVar10,*(undefined8 *)(local_28 + 0x38));
          lVar11 = 0;
          while (lVar11 + 1 != lVar8 + 1) {
            piVar9 = (int *)FUN_053df3f0(uVar10,lVar11);
            *piVar9 = *piVar9 + (int)uVar3;
            lVar11 = lVar11 + 1;
          }
          std::
          vector<Sexy::RenderStateManager::Context::JournalEntry,std::allocator<Sexy::RenderStateManager::Context::JournalEntry>>
          ::~vector((vector<Sexy::RenderStateManager::Context::JournalEntry,std::allocator<Sexy::RenderStateManager::Context::JournalEntry>>
                     *)local_20);
        }
        *(undefined8 *)(local_28 + 0x48) = *(undefined8 *)(this + 0x48);
        if (*(long *)(this + 0x48) != 0) {
          std::
          vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>
          ::push_back((vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>
                       *)(*(long *)(this + 0x48) + 0x50),(Context **)&local_28);
        }
        lVar12 = lVar12 + 1;
        if (iVar2 <= (int)lVar12) break;
        uVar10 = *(undefined8 *)(this + 0x58);
      }
    }
    std::
    vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>
    ::clear((vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>
             *)(this + 0x50));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RenderStateManager::Context::~Context() */

void __thiscall Sexy::RenderStateManager::Context::~Context(Context *this)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SplitChildren(this);
  lVar5 = *(long *)(this + 0x48);
  if (lVar5 != 0) {
    uVar4 = *(undefined8 *)(lVar5 + 0x58);
    iVar1 = FUN_053df3a0(uVar4,*(undefined8 *)(lVar5 + 0x60));
    if (0 < iVar1) {
      lVar3 = 0;
      do {
        puVar2 = (undefined8 *)FUN_053df3ac(uVar4,lVar3);
        if (this == (Context *)*puVar2) {
          local_10 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(lVar5 + 0x50));
          local_18 = __gnu_cxx::
                     __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                     ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                                  *)&local_10,(long)(int)lVar3);
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_20,(__normal_iterator *)&local_18);
          std::
          vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>
          ::erase((vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>
                   *)(lVar5 + 0x50),local_20);
          break;
        }
        lVar3 = lVar3 + 1;
      } while ((int)lVar3 < iVar1);
    }
  }
  std::
  vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>
  ::~vector((vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>
             *)(this + 0x50));
  std::vector<unsigned_int,PooledAllocator<unsigned_int,Sexy::SimpleMemPool>>::~vector
            ((vector<unsigned_int,PooledAllocator<unsigned_int,Sexy::SimpleMemPool>> *)(this + 0x28)
            );
  std::
  vector<Sexy::RenderStateManager::Context::JournalEntry,PooledAllocator<Sexy::RenderStateManager::Context::JournalEntry,Sexy::SimpleMemPool>>
  ::~vector((vector<Sexy::RenderStateManager::Context::JournalEntry,PooledAllocator<Sexy::RenderStateManager::Context::JournalEntry,Sexy::SimpleMemPool>>
             *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::RenderStateManager::Context::RevertState() */

void __thiscall Sexy::RenderStateManager::Context::RevertState(Context *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  State *this_00;
  long lVar7;
  
  SplitChildren(this);
  lVar5 = FUN_053df3b4(*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
  uVar3 = *(uint *)(this + 0x20);
  if (lVar5 - (ulong)uVar3 != 0) {
    lVar7 = 0;
    puVar6 = (undefined8 *)
             std::
             vector<Sexy::RenderStateManager::Context::JournalEntry,PooledAllocator<Sexy::RenderStateManager::Context::JournalEntry,Sexy::SimpleMemPool>>
             ::back((vector<Sexy::RenderStateManager::Context::JournalEntry,PooledAllocator<Sexy::RenderStateManager::Context::JournalEntry,Sexy::SimpleMemPool>>
                     *)this);
    (**(code **)(**(long **)*puVar6 + 0x30))(*(long **)*puVar6);
    while( true ) {
      this_00 = (State *)*puVar6;
      uVar1 = puVar6[1];
      uVar2 = puVar6[2];
      *(undefined8 *)(this_00 + 0x38) = puVar6[3];
      *(undefined8 *)(this_00 + 0x28) = uVar1;
      *(undefined8 *)(this_00 + 0x30) = uVar2;
      State::SetDirty(this_00);
      FUN_053df440(this + 0x10);
      bVar4 = lVar7 == (lVar5 - (ulong)uVar3) + -1;
      lVar7 = lVar7 + 1;
      if (bVar4) break;
      puVar6 = (undefined8 *)
               std::
               vector<Sexy::RenderStateManager::Context::JournalEntry,PooledAllocator<Sexy::RenderStateManager::Context::JournalEntry,Sexy::SimpleMemPool>>
               ::back((vector<Sexy::RenderStateManager::Context::JournalEntry,PooledAllocator<Sexy::RenderStateManager::Context::JournalEntry,Sexy::SimpleMemPool>>
                       *)this);
    }
  }
  return;
}


/* Sexy::RenderStateManager::Context::PushState() */

void __thiscall Sexy::RenderStateManager::Context::PushState(Context *this)

{
  undefined4 uVar1;
  
  SplitChildren(this);
  std::vector<unsigned_int,PooledAllocator<unsigned_int,Sexy::SimpleMemPool>>::push_back
            ((vector<unsigned_int,PooledAllocator<unsigned_int,Sexy::SimpleMemPool>> *)(this + 0x28)
             ,(uint *)(this + 0x20));
  uVar1 = FUN_053df3b4(*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
  *(undefined4 *)(this + 0x20) = uVar1;
  return;
}


/* Sexy::RenderStateManager::Context::PopState() */

void __thiscall Sexy::RenderStateManager::Context::PopState(Context *this)

{
  undefined4 *puVar1;
  
  SplitChildren(this);
  RevertState(this);
  puVar1 = (undefined4 *)
           std::vector<unsigned_int,PooledAllocator<unsigned_int,Sexy::SimpleMemPool>>::back
                     ((vector<unsigned_int,PooledAllocator<unsigned_int,Sexy::SimpleMemPool>> *)
                      (this + 0x28));
  *(undefined4 *)(this + 0x20) = *puVar1;
  FUN_053df478(this + 0x38);
  return;
}

