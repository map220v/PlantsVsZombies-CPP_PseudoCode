// Class: CardBuffTracker


/* CardBuffTracker::AddBuff(CardBuff, int, int) */

undefined * CardBuffTracker::AddBuff(void)

{
  return &DAT_06aa87d0;
}


/* CardBuffTracker::CardBuffTracker() */

void __thiscall CardBuffTracker::CardBuffTracker(CardBuffTracker *this)

{
  allocator *in_x1;
  
  std::_Deque_base<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>::_Deque_impl::
  _Deque_impl((_Deque_impl *)this,in_x1);
  std::_Deque_base<CardBuffObject,std::allocator<CardBuffObject>>::_M_initialize_map
            ((_Deque_base<CardBuffObject,std::allocator<CardBuffObject>> *)this,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardBuffTracker::~CardBuffTracker() */

void __thiscall CardBuffTracker::~CardBuffTracker(CardBuffTracker *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>::begin();
  std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>::end();
  std::_Deque_base<CardBuffObject,std::allocator<CardBuffObject>>::~_Deque_base
            ((_Deque_base<CardBuffObject,std::allocator<CardBuffObject>> *)this);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

