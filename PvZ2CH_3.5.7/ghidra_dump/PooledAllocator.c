// Class: PooledAllocator<std::_List_node<Sexy::GraphicsState>,Sexy::SimpleMemPool>


/* PooledAllocator<std::_List_node<Sexy::GraphicsState>,
   Sexy::SimpleMemPool>::deallocate(std::_List_node<Sexy::GraphicsState>*, unsigned long) const */

void __thiscall
PooledAllocator<std::_List_node<Sexy::GraphicsState>,Sexy::SimpleMemPool>::deallocate
          (PooledAllocator<std::_List_node<Sexy::GraphicsState>,Sexy::SimpleMemPool> *this,
          _List_node *param_1,ulong param_2)

{
  ulong uVar1;
  SimpleMemPool *this_00;
  
  if (param_1 == (_List_node *)0x0) {
    return;
  }
  this_00 = *(SimpleMemPool **)this;
  if ((this_00 != (SimpleMemPool *)0x0) &&
     (uVar1 = FUN_0514e18c(*(undefined4 *)(this_00 + 8)), param_2 * 0x90 <= (uVar1 & 0xffffffff))) {
    Sexy::SimpleMemPool::ReturnMemory(this_00,(uchar *)param_1);
    return;
  }
  EATextSquish::ColourFit::~ColourFit((ColourFit *)param_1);
  return;
}


/* PooledAllocator<Sexy::GLContext*, Sexy::SimpleMemPool>::deallocate(Sexy::GLContext**, unsigned
   long) const */

void __thiscall
PooledAllocator<Sexy::GLContext*,Sexy::SimpleMemPool>::deallocate
          (PooledAllocator<Sexy::GLContext*,Sexy::SimpleMemPool> *this,GLContext **param_1,
          ulong param_2)

{
  ulong uVar1;
  SimpleMemPool *this_00;
  
  if (param_1 == (GLContext **)0x0) {
    return;
  }
  this_00 = *(SimpleMemPool **)this;
  if ((this_00 != (SimpleMemPool *)0x0) &&
     (uVar1 = FUN_052d96ac(*(undefined4 *)(this_00 + 8)), param_2 << 3 <= (uVar1 & 0xffffffff))) {
    Sexy::SimpleMemPool::ReturnMemory(this_00,(uchar *)param_1);
    return;
  }
  EATextSquish::ColourFit::~ColourFit((ColourFit *)param_1);
  return;
}


/* PooledAllocator<Sexy::RenderStateManager::Context::JournalEntry,
   Sexy::SimpleMemPool>::deallocate(Sexy::RenderStateManager::Context::JournalEntry*, unsigned long)
   const */

void __thiscall
PooledAllocator<Sexy::RenderStateManager::Context::JournalEntry,Sexy::SimpleMemPool>::deallocate
          (PooledAllocator<Sexy::RenderStateManager::Context::JournalEntry,Sexy::SimpleMemPool>
           *this,JournalEntry *param_1,ulong param_2)

{
  ulong uVar1;
  SimpleMemPool *this_00;
  
  if (param_1 == (JournalEntry *)0x0) {
    return;
  }
  this_00 = *(SimpleMemPool **)this;
  if ((this_00 != (SimpleMemPool *)0x0) &&
     (uVar1 = FUN_053df39c(*(undefined4 *)(this_00 + 8)), param_2 * 0x38 <= (uVar1 & 0xffffffff))) {
    Sexy::SimpleMemPool::ReturnMemory(this_00,(uchar *)param_1);
    return;
  }
  EATextSquish::ColourFit::~ColourFit((ColourFit *)param_1);
  return;
}


/* PooledAllocator<unsigned int, Sexy::SimpleMemPool>::deallocate(unsigned int*, unsigned long)
   const */

void __thiscall
PooledAllocator<unsigned_int,Sexy::SimpleMemPool>::deallocate
          (PooledAllocator<unsigned_int,Sexy::SimpleMemPool> *this,uint *param_1,ulong param_2)

{
  ulong uVar1;
  SimpleMemPool *this_00;
  
  if (param_1 == (uint *)0x0) {
    return;
  }
  this_00 = *(SimpleMemPool **)this;
  if ((this_00 != (SimpleMemPool *)0x0) &&
     (uVar1 = FUN_053df39c(*(undefined4 *)(this_00 + 8)), param_2 << 2 <= (uVar1 & 0xffffffff))) {
    Sexy::SimpleMemPool::ReturnMemory(this_00,(uchar *)param_1);
    return;
  }
  EATextSquish::ColourFit::~ColourFit((ColourFit *)param_1);
  return;
}


/* PooledAllocator<Sexy::RenderStateManager::Context*,
   Sexy::SimpleMemPool>::deallocate(Sexy::RenderStateManager::Context**, unsigned long) const */

void __thiscall
PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>::deallocate
          (PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool> *this,
          Context **param_1,ulong param_2)

{
  ulong uVar1;
  SimpleMemPool *this_00;
  
  if (param_1 == (Context **)0x0) {
    return;
  }
  this_00 = *(SimpleMemPool **)this;
  if ((this_00 != (SimpleMemPool *)0x0) &&
     (uVar1 = FUN_053df39c(*(undefined4 *)(this_00 + 8)), param_2 << 3 <= (uVar1 & 0xffffffff))) {
    Sexy::SimpleMemPool::ReturnMemory(this_00,(uchar *)param_1);
    return;
  }
  EATextSquish::ColourFit::~ColourFit((ColourFit *)param_1);
  return;
}

