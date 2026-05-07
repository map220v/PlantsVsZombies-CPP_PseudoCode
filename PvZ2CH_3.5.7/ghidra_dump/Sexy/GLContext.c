// Class: Sexy::GLContext


/* Sexy::GLContext::operator new(unsigned long) */

void * __thiscall Sexy::GLContext::operator_new(GLContext *this,ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)SimpleMemPool::GetMemory(0x6c451f0);
  return pvVar1;
}


/* Sexy::GLContext::operator delete(void*) */

void __thiscall Sexy::GLContext::operator_delete(GLContext *this,void *param_1)

{
  SimpleMemPool::ReturnMemory((SimpleMemPool *)msPool,(uchar *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::GLContext::GLContext(Sexy::Image*) */

void __thiscall Sexy::GLContext::GLContext(GLContext *this,Image *param_1)

{
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  arStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(Image **)this = param_1;
  RenderStateManager::Context::Context((Context *)(this + 8));
  this[0x78] = (GLContext)0x0;
  *(undefined8 *)(this + 0x80) = 0;
  eastl::
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  ::rbtree_iterator(arStack_10,(rbtree_node *)msChildrenPool);
  std::
  vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>
  ::vector((vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>
            *)(this + 0x88),(PooledAllocator *)arStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::GLContext::~GLContext() */

void __thiscall Sexy::GLContext::~GLContext(GLContext *this)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  uVar5 = *(undefined8 *)(this + 0x90);
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_052d9a34(uVar5,*(undefined8 *)(this + 0x98));
  if (lVar1 != 0) {
    lVar3 = 0;
    while( true ) {
      plVar2 = (long *)FUN_052d9a40(uVar5,lVar3);
      *(undefined8 *)(*plVar2 + 0x80) = 0;
      if (lVar3 + 1 == lVar1) break;
      uVar5 = *(undefined8 *)(this + 0x90);
      lVar3 = lVar3 + 1;
    }
  }
  std::vector<Sexy::GLContext*,PooledAllocator<Sexy::GLContext*,Sexy::SimpleMemPool>>::clear
            ((vector<Sexy::GLContext*,PooledAllocator<Sexy::GLContext*,Sexy::SimpleMemPool>> *)
             (this + 0x88));
  lVar1 = *(long *)(this + 0x80);
  if (lVar1 != 0) {
    uVar5 = *(undefined8 *)(lVar1 + 0x90);
    lVar3 = FUN_052d9a34(uVar5,*(undefined8 *)(lVar1 + 0x98));
    if (lVar3 != 0) {
      lVar6 = 0;
      do {
        puVar4 = (undefined8 *)FUN_052d9a40(uVar5,lVar6);
        if (this == (GLContext *)*puVar4) {
          local_10 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(lVar1 + 0x88));
          local_18 = __gnu_cxx::
                     __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                     ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                                  *)&local_10,(long)(int)lVar6);
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_20,(__normal_iterator *)&local_18);
          std::vector<Sexy::GLContext*,PooledAllocator<Sexy::GLContext*,Sexy::SimpleMemPool>>::erase
                    ((vector<Sexy::GLContext*,PooledAllocator<Sexy::GLContext*,Sexy::SimpleMemPool>>
                      *)(lVar1 + 0x88),local_20);
          break;
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 != lVar3);
    }
  }
  std::vector<Sexy::GLContext*,PooledAllocator<Sexy::GLContext*,Sexy::SimpleMemPool>>::~vector
            ((vector<Sexy::GLContext*,PooledAllocator<Sexy::GLContext*,Sexy::SimpleMemPool>> *)
             (this + 0x88));
  RenderStateManager::Context::~Context((Context *)(this + 8));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::GLContext::GLContext(Sexy::GLContext const&) */

void __thiscall Sexy::GLContext::GLContext(GLContext *this,GLContext *param_1)

{
  GLContext *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined8 *)this = *(undefined8 *)param_1;
  RenderStateManager::Context::Context((Context *)(this + 8),(Context *)(param_1 + 8));
  *(GLContext **)(this + 0x80) = param_1;
  this[0x78] = (GLContext)0x1;
  eastl::
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  ::rbtree_iterator((rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
                     *)&local_10,(rbtree_node *)msChildrenPool);
  std::
  vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>
  ::vector((vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>
            *)(this + 0x88),(PooledAllocator *)&local_10);
  local_10 = this;
  std::vector<Sexy::GLContext*,PooledAllocator<Sexy::GLContext*,Sexy::SimpleMemPool>>::push_back
            ((vector<Sexy::GLContext*,PooledAllocator<Sexy::GLContext*,Sexy::SimpleMemPool>> *)
             (*(long *)(this + 0x80) + 0x88),&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

