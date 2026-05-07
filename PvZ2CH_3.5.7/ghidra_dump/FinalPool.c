// Class: FinalPool


/* FinalPool::~FinalPool() */

void __thiscall FinalPool::~FinalPool(FinalPool *this)

{
  std::_Destroy<ResilienceEntity*>(*(ResilienceEntity **)this,*(ResilienceEntity **)(this + 8));
  std::_Vector_base<PoolResult,std::allocator<PoolResult>>::~_Vector_base
            ((_Vector_base<PoolResult,std::allocator<PoolResult>> *)this);
  return;
}


/* FinalPool::FinalPool(FinalPool const&) */

void __thiscall FinalPool::FinalPool(FinalPool *this,FinalPool *param_1)

{
  std::vector<PoolResult,std::allocator<PoolResult>>::vector
            ((vector<PoolResult,std::allocator<PoolResult>> *)this,(vector *)param_1);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  return;
}


/* FinalPool::FinalPool() */

void __thiscall FinalPool::FinalPool(FinalPool *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  std::vector<PoolResult,std::allocator<PoolResult>>::clear
            ((vector<PoolResult,std::allocator<PoolResult>> *)this);
  *(undefined4 *)(this + 0x18) = 0;
  return;
}

