// Class: DTouchEventDispatcher


/* DTouchEventDispatcher::DTouchEventDispatcher() */

void __thiscall DTouchEventDispatcher::DTouchEventDispatcher(DTouchEventDispatcher *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  this[0x48] = (DTouchEventDispatcher)0x0;
  return;
}


/* DTouchEventDispatcher::~DTouchEventDispatcher() */

void __thiscall DTouchEventDispatcher::~DTouchEventDispatcher(DTouchEventDispatcher *this)

{
  std::vector<DTouchListener*,std::allocator<DTouchListener*>>::~vector
            ((vector<DTouchListener*,std::allocator<DTouchListener*>> *)(this + 0x30));
  std::vector<DTouchListener*,std::allocator<DTouchListener*>>::~vector
            ((vector<DTouchListener*,std::allocator<DTouchListener*>> *)(this + 0x18));
  std::vector<DTouchListener*,std::allocator<DTouchListener*>>::~vector
            ((vector<DTouchListener*,std::allocator<DTouchListener*>> *)this);
  return;
}


/* DTouchEventDispatcher::clean() */

void __thiscall DTouchEventDispatcher::clean(DTouchEventDispatcher *this)

{
  std::vector<DTouchListener*,std::allocator<DTouchListener*>>::clear
            ((vector<DTouchListener*,std::allocator<DTouchListener*>> *)this);
  std::vector<DTouchListener*,std::allocator<DTouchListener*>>::clear
            ((vector<DTouchListener*,std::allocator<DTouchListener*>> *)(this + 0x18));
  std::vector<DTouchListener*,std::allocator<DTouchListener*>>::clear
            ((vector<DTouchListener*,std::allocator<DTouchListener*>> *)(this + 0x30));
  this[0x48] = (DTouchEventDispatcher)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DTouchEventDispatcher::forceRemoveTouchListener(DTouchListener*) */

void __thiscall
DTouchEventDispatcher::forceRemoveTouchListener(DTouchEventDispatcher *this,DTouchListener *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  DTouchListener *local_28 [2];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28[0] = param_1;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)this);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)this);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<DTouchListener**,std::vector<DTouchListener*,std::allocator<DTouchListener*>>>,DTouchListener*>
                       (uVar2,uVar3,local_28);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)this);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    std::vector<DTouchListener*,std::allocator<DTouchListener*>>::erase
              ((vector<DTouchListener*,std::allocator<DTouchListener*>> *)this,local_10);
    DRef::unref((DRef *)local_28[0]);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DTouchEventDispatcher::sortTouchListeners() */

void __thiscall DTouchEventDispatcher::sortTouchListeners(DTouchEventDispatcher *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)this);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)this);
  FUN_04f90aa4(uVar1,uVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DTouchEventDispatcher::forceAddTouchListener(DTouchListener*) */

void __thiscall
DTouchEventDispatcher::forceAddTouchListener(DTouchEventDispatcher *this,DTouchListener *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  DTouchListener *local_28 [2];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28[0] = param_1;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)this);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)this);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<DTouchListener**,std::vector<DTouchListener*,std::allocator<DTouchListener*>>>,DTouchListener*>
                       (uVar2,uVar3,local_28);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)this);
  bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if ((bVar1) &&
     (std::vector<DTouchListener*,std::allocator<DTouchListener*>>::push_back
                ((vector<DTouchListener*,std::allocator<DTouchListener*>> *)this,local_28),
     this[0x48] == (DTouchEventDispatcher)0x0)) {
    sortTouchListeners(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DTouchEventDispatcher::touchHandle(Sexy::Touch const&, DTouchEvent) */

void __thiscall
DTouchEventDispatcher::touchHandle(DTouchEventDispatcher *this,Touch *param_1,int param_3)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *pvVar1;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  int local_44 [3];
  DTouchListener *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  Touch *local_18;
  int *local_10;
  long local_8;
  
  this[0x48] = (DTouchEventDispatcher)0x1;
  local_8 = ___stack_chk_guard;
  local_44[0] = param_3;
  if (param_3 == 4) {
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this);
    local_18 = (Touch *)std::
                        vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                               *)this);
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar3)
    {
      plVar8 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      lVar4 = *plVar8;
      bVar3 = std::function::operator_cast_to_bool((function *)(lVar4 + 0x90));
      if (bVar3) {
        std::function<void(Sexy::Touch_const&)>::operator()
                  ((function<void(Sexy::Touch_const&)> *)(lVar4 + 0x90),param_1);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
    }
  }
  else if (param_3 == 3) {
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this);
    local_18 = (Touch *)std::
                        vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                               *)this);
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar3)
    {
      plVar8 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      lVar9 = *plVar8;
      lVar4 = FUN_04f8f50c(*(undefined8 *)(lVar9 + 0xb8),*(undefined8 *)(lVar9 + 0xc0));
      if (lVar4 != 0) {
        bVar3 = std::function::operator_cast_to_bool((function *)(lVar9 + 0x50));
        if (bVar3) {
          std::function<void(Sexy::Touch_const&)>::operator()
                    ((function<void(Sexy::Touch_const&)> *)(lVar9 + 0x50),param_1);
          cVar2 = FUN_04f8f4c0(*(undefined1 *)(lVar9 + 0xb4));
        }
        else {
          cVar2 = FUN_04f8f4c0(*(undefined1 *)(lVar9 + 0xb4));
        }
        if (cVar2 != '\0') {
          std::vector<Sexy::Touch,std::allocator<Sexy::Touch>>::clear
                    ((vector<Sexy::Touch,std::allocator<Sexy::Touch>> *)(lVar9 + 0xb8));
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
    }
  }
  else {
    local_10 = local_44;
    local_18 = param_1;
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this);
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this);
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar3)
    {
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28)
      ;
      cVar2 = FUN_04f906bc(&local_18,*puVar5);
      if (cVar2 != '\0') break;
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
    }
  }
  lVar4 = FUN_04f8f52c(*(undefined8 *)(this + 0x30),*(undefined8 *)(this + 0x38));
  if (lVar4 != 0) {
    pvVar1 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              *)(this + 0x30);
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x18);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(pvVar1);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(pvVar1);
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar3)
    {
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30)
      ;
      local_38 = (DTouchListener *)*puVar5;
      forceRemoveTouchListener(this,local_38);
      uVar6 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(this_00);
      uVar7 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(this_00);
      local_20 = std::
                 find<__gnu_cxx::__normal_iterator<DTouchListener**,std::vector<DTouchListener*,std::allocator<DTouchListener*>>>,DTouchListener*>
                           (uVar6,uVar7,&local_38);
      local_18 = (Touch *)std::
                          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          ::end(this_00);
      bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_18);
      if (bVar3) {
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_18,(__normal_iterator *)&local_20);
        std::vector<DTouchListener*,std::allocator<DTouchListener*>>::erase
                  ((vector<DTouchListener*,std::allocator<DTouchListener*>> *)this_00,local_18);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
    }
    std::vector<DTouchListener*,std::allocator<DTouchListener*>>::clear
              ((vector<DTouchListener*,std::allocator<DTouchListener*>> *)pvVar1);
  }
  lVar4 = FUN_04f8f52c(*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x20));
  if (lVar4 != 0) {
    pvVar1 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              *)(this + 0x18);
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(pvVar1);
    local_18 = (Touch *)std::
                        vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        ::end(pvVar1);
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar3)
    {
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20)
      ;
      forceAddTouchListener(this,(DTouchListener *)*puVar5);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
    }
    std::vector<DTouchListener*,std::allocator<DTouchListener*>>::clear
              ((vector<DTouchListener*,std::allocator<DTouchListener*>> *)pvVar1);
    sortTouchListeners(this);
  }
  this[0x48] = (DTouchEventDispatcher)0x0;
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* DTouchEventDispatcher::addTouchListener(DTouchListener*) */

void __thiscall
DTouchEventDispatcher::addTouchListener(DTouchEventDispatcher *this,DTouchListener *param_1)

{
  DRef *local_8;
  
  local_8 = (DRef *)param_1;
  if (this[0x48] == (DTouchEventDispatcher)0x0) {
    forceAddTouchListener(this,param_1);
    DRef::ref(local_8);
    return;
  }
  std::vector<DTouchListener*,std::allocator<DTouchListener*>>::push_back
            ((vector<DTouchListener*,std::allocator<DTouchListener*>> *)(this + 0x18),
             (DTouchListener **)&local_8);
  DRef::ref(local_8);
  return;
}


/* DTouchEventDispatcher::addTouchListenerWithFixedPriority(DTouchListener*, int) */

void __thiscall
DTouchEventDispatcher::addTouchListenerWithFixedPriority
          (DTouchEventDispatcher *this,DTouchListener *param_1,int param_2)

{
  char cVar1;
  
  if (((param_1 != (DTouchListener *)0x0) && (cVar1 = FUN_04f8f4c0(param_1[0xb4]), cVar1 == '\0'))
     && (cVar1 = DTouchListener::checkAvailable(param_1), cVar1 != '\0')) {
    FUN_04f8f5a8(param_1 + 0xb4);
    FUN_04f8f4c4(param_1 + 0xb0,param_2);
    addTouchListener(this,param_1);
    return;
  }
  return;
}


/* DTouchEventDispatcher::removeTouchListener(DTouchListener*) */

void __thiscall
DTouchEventDispatcher::removeTouchListener(DTouchEventDispatcher *this,DTouchListener *param_1)

{
  DTouchListener *local_8;
  
  local_8 = param_1;
  if (this[0x48] == (DTouchEventDispatcher)0x0) {
    forceRemoveTouchListener(this,param_1);
    return;
  }
  std::vector<DTouchListener*,std::allocator<DTouchListener*>>::push_back
            ((vector<DTouchListener*,std::allocator<DTouchListener*>> *)(this + 0x30),&local_8);
  return;
}

