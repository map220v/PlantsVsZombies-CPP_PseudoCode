// Class: DArray<DTransformNode*>


/* DArray<DTransformNode*>::size() const */

void __thiscall DArray<DTransformNode*>::size(DArray<DTransformNode*> *this)

{
  FUN_0355038c(*(undefined8 *)this,*(undefined8 *)(this + 8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DArray<Card*>::clear() */

void __thiscall DArray<Card*>::clear(DArray<Card*> *this)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>((vector *)this);
  while( true ) {
    local_10 = std::end<std::vector<DButton*,std::allocator<DButton*>>>((vector *)this);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) break;
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    DRef::unref((DRef *)*puVar2);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<Card*,std::allocator<Card*>>::clear((vector<Card*,std::allocator<Card*>> *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DArray<Card*>::~DArray() */

void __thiscall DArray<Card*>::~DArray(DArray<Card*> *this)

{
  clear(this);
  std::vector<Card*,std::allocator<Card*>>::~vector((vector<Card*,std::allocator<Card*>> *)this);
  return;
}


/* DArray<Card*>::pushBack(Card*) */

void __thiscall DArray<Card*>::pushBack(DArray<Card*> *this,Card *param_1)

{
  DRef *local_8;
  
  local_8 = (DRef *)param_1;
  std::vector<Card*,std::allocator<Card*>>::push_back
            ((vector<Card*,std::allocator<Card*>> *)this,(Card **)&local_8);
  DRef::ref(local_8);
  return;
}


/* DArray<DSpriteNode*>::at(long) const */

undefined8 DArray<DSpriteNode*>::at(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_035752bc(*(undefined8 *)param_1);
  return *puVar1;
}


/* DArray<Card*>::size() const */

void __thiscall DArray<Card*>::size(DArray<Card*> *this)

{
  FUN_035752c4(*(undefined8 *)this,*(undefined8 *)(this + 8));
  return;
}


/* DArray<Card*>::at(long) const */

undefined8 DArray<Card*>::at(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_035752d0(*(undefined8 *)param_1);
  return *puVar1;
}


/* DArray<DAnimNode*>::at(long) const */

undefined8 DArray<DAnimNode*>::at(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_035752d8(*(undefined8 *)param_1);
  return *puVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DArray<DTransformNode*>::clear() */

void __thiscall DArray<DTransformNode*>::clear(DArray<DTransformNode*> *this)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>((vector *)this);
  while( true ) {
    local_10 = std::end<std::vector<DButton*,std::allocator<DButton*>>>((vector *)this);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) break;
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    DRef::unref((DRef *)*puVar2);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<DTransformNode*,std::allocator<DTransformNode*>>::clear
            ((vector<DTransformNode*,std::allocator<DTransformNode*>> *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DArray<DSleep*>::addRefForAllObjects() */

void __thiscall DArray<DSleep*>::addRefForAllObjects(DArray<DSleep*> *this)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)this);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    DRef::ref((DRef *)*puVar2);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DArray<DSpriteNode*>::clear() */

void __thiscall DArray<DSpriteNode*>::clear(DArray<DSpriteNode*> *this)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>((vector *)this);
  while( true ) {
    local_10 = std::end<std::vector<DButton*,std::allocator<DButton*>>>((vector *)this);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) break;
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    DRef::unref((DRef *)*puVar2);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<DSpriteNode*,std::allocator<DSpriteNode*>>::clear
            ((vector<DSpriteNode*,std::allocator<DSpriteNode*>> *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DArray<Card*>::popBack() */

void __thiscall DArray<Card*>::popBack(DArray<Card*> *this)

{
  undefined8 *puVar1;
  DRef *this_00;
  
  puVar1 = (undefined8 *)
           std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)this);
  this_00 = (DRef *)*puVar1;
  FUN_035753c0(this + 8);
  DRef::unref(this_00);
  return;
}


/* DArray<Card*>::back() const */

undefined8 __thiscall DArray<Card*>::back(DArray<Card*> *this)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           std::vector<Card*,std::allocator<Card*>>::back
                     ((vector<Card*,std::allocator<Card*>> *)this);
  return *puVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DArray<Card*>::empty() const */

void __thiscall DArray<Card*>::empty(DArray<Card*> *this)

{
  bool bVar1;
  undefined8 uStack_18;
  undefined8 uStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  uStack_10 = FUN_0357ebb8(*(undefined8 *)this);
  uStack_18 = FUN_0357ec08(*(undefined8 *)(this + 8));
  bVar1 = __gnu_cxx::operator==((__normal_iterator *)&uStack_10,(__normal_iterator *)&uStack_18);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DArray<DAnimNode*>::clear() */

void __thiscall DArray<DAnimNode*>::clear(DArray<DAnimNode*> *this)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>((vector *)this);
  while( true ) {
    local_10 = std::end<std::vector<DButton*,std::allocator<DButton*>>>((vector *)this);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) break;
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    DRef::unref((DRef *)*puVar2);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<DAnimNode*,std::allocator<DAnimNode*>>::clear
            ((vector<DAnimNode*,std::allocator<DAnimNode*>> *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DArray<DSpriteNode*>::back() const */

undefined8 __thiscall DArray<DSpriteNode*>::back(DArray<DSpriteNode*> *this)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           std::vector<DSpriteNode*,std::allocator<DSpriteNode*>>::back
                     ((vector<DSpriteNode*,std::allocator<DSpriteNode*>> *)this);
  return *puVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DArray<DSpriteNode*>::empty() const */

void __thiscall DArray<DSpriteNode*>::empty(DArray<DSpriteNode*> *this)

{
  bool bVar1;
  undefined8 uStack_18;
  undefined8 uStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  uStack_10 = FUN_035815b0(*(undefined8 *)this);
  uStack_18 = FUN_03581600(*(undefined8 *)(this + 8));
  bVar1 = __gnu_cxx::operator==((__normal_iterator *)&uStack_10,(__normal_iterator *)&uStack_18);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* DArray<Card*>::shuffle() */

void __thiscall DArray<Card*>::shuffle(DArray<Card*> *this)

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
  std::
  random_shuffle<__gnu_cxx::__normal_iterator<Pinata**,std::vector<Pinata*,std::allocator<Pinata*>>>>
            (uVar1,uVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DArray<DAnimNode*>::empty() const */

void __thiscall DArray<DAnimNode*>::empty(DArray<DAnimNode*> *this)

{
  bool bVar1;
  undefined8 uStack_18;
  undefined8 uStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  uStack_10 = FUN_03581824(*(undefined8 *)this);
  uStack_18 = FUN_03581874(*(undefined8 *)(this + 8));
  bVar1 = __gnu_cxx::operator==((__normal_iterator *)&uStack_10,(__normal_iterator *)&uStack_18);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* DArray<DSpriteNode*>::~DArray() */

void __thiscall DArray<DSpriteNode*>::~DArray(DArray<DSpriteNode*> *this)

{
  clear(this);
  std::vector<DSpriteNode*,std::allocator<DSpriteNode*>>::~vector
            ((vector<DSpriteNode*,std::allocator<DSpriteNode*>> *)this);
  return;
}


/* DArray<DAnimNode*>::~DArray() */

void __thiscall DArray<DAnimNode*>::~DArray(DArray<DAnimNode*> *this)

{
  clear(this);
  std::vector<DAnimNode*,std::allocator<DAnimNode*>>::~vector
            ((vector<DAnimNode*,std::allocator<DAnimNode*>> *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DArray<Card*>::getIndex(Card*) const */

void __thiscall DArray<Card*>::getIndex(DArray<Card*> *this,Card *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Card *local_28 [2];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28[0] = param_1;
  uVar2 = FUN_0357ebb8(*(undefined8 *)this);
  uVar3 = FUN_0357ec08(*(undefined8 *)(this + 8));
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<Card*const*,std::vector<Card*,std::allocator<Card*>>>,Card*>
                       (uVar2,uVar3,local_28);
  local_10 = FUN_0357ec08(*(undefined8 *)(this + 8));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    local_10 = FUN_0357ebb8(*(undefined8 *)this);
    uVar2 = __gnu_cxx::operator-((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  }
  else {
    uVar2 = 0xffffffffffffffff;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* DArray<DTransformNode*>::TEMPNAMEPLACEHOLDERVALUE(DArray<DTransformNode*> const&) */

DArray<DTransformNode*> * __thiscall
DArray<DTransformNode*>::operator=(DArray<DTransformNode*> *this,DArray *param_1)

{
  if (this != (DArray<DTransformNode*> *)param_1) {
    clear(this);
    std::vector<DTransformNode*,std::allocator<DTransformNode*>>::operator=
              ((vector<DTransformNode*,std::allocator<DTransformNode*>> *)this,(vector *)param_1);
    DArray<DSleep*>::addRefForAllObjects((DArray<DSleep*> *)this);
  }
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DArray<Card*>::eraseObject(Card*, bool) */

void __thiscall DArray<Card*>::eraseObject(DArray<Card*> *this,Card *param_1,bool param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  Card *local_28 [2];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28[0] = param_1;
  if (param_2) {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this);
    do {
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      while( true ) {
        if (!bVar1) goto LAB_03586e44;
        puVar2 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        if ((Card *)*puVar2 == local_28[0]) break;
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
        local_10 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)this);
        bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10)
        ;
      }
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      local_18 = std::vector<Card*,std::allocator<Card*>>::erase
                           ((vector<Card*,std::allocator<Card*>> *)this,local_10);
      DRef::unref((DRef *)local_28[0]);
    } while( true );
  }
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)this);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)this);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<Card**,std::vector<Card*,std::allocator<Card*>>>,Card*>
                       (uVar3,uVar4,local_28);
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
    std::vector<Card*,std::allocator<Card*>>::erase
              ((vector<Card*,std::allocator<Card*>> *)this,local_10);
    DRef::unref((DRef *)local_28[0]);
  }
LAB_03586e44:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* DArray<Card*>::TEMPNAMEPLACEHOLDERVALUE(DArray<Card*> const&) */

DArray<Card*> * __thiscall DArray<Card*>::operator=(DArray<Card*> *this,DArray *param_1)

{
  if (this != (DArray<Card*> *)param_1) {
    clear(this);
    std::vector<Card*,std::allocator<Card*>>::operator=
              ((vector<Card*,std::allocator<Card*>> *)this,(vector *)param_1);
    DArray<DSleep*>::addRefForAllObjects((DArray<DSleep*> *)this);
  }
  return this;
}


/* DArray<DSpriteNode*>::pushBack(DSpriteNode*) */

void __thiscall DArray<DSpriteNode*>::pushBack(DArray<DSpriteNode*> *this,DSpriteNode *param_1)

{
  DRef *local_8;
  
  local_8 = (DRef *)param_1;
  std::vector<DSpriteNode*,std::allocator<DSpriteNode*>>::push_back
            ((vector<DSpriteNode*,std::allocator<DSpriteNode*>> *)this,(DSpriteNode **)&local_8);
  DRef::ref(local_8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DArray<Card*>::insert(long, Card*) */

void __thiscall DArray<Card*>::insert(DArray<Card*> *this,long param_1,Card *param_2)

{
  Card *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_2;
  local_20 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>((vector *)this);
  local_18 = __gnu_cxx::
             __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
             ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                          *)&local_20,param_1);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_10,(__normal_iterator *)&local_18);
  std::vector<Card*,std::allocator<Card*>>::insert
            ((vector<Card*,std::allocator<Card*>> *)this,local_10,&local_28);
  DRef::ref((DRef *)local_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DArray<DAnimNode*>::pushBack(DAnimNode*) */

void __thiscall DArray<DAnimNode*>::pushBack(DArray<DAnimNode*> *this,DAnimNode *param_1)

{
  DRef *local_8;
  
  local_8 = (DRef *)param_1;
  std::vector<DAnimNode*,std::allocator<DAnimNode*>>::push_back
            ((vector<DAnimNode*,std::allocator<DAnimNode*>> *)this,(DAnimNode **)&local_8);
  DRef::ref(local_8);
  return;
}


/* DArray<DAction*>::size() const */

void __thiscall DArray<DAction*>::size(DArray<DAction*> *this)

{
  FUN_04f68570(*(undefined8 *)this,*(undefined8 *)(this + 8));
  return;
}


/* DArray<DAction*>::at(long) const */

undefined8 DArray<DAction*>::at(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_04f6857c(*(undefined8 *)param_1);
  return *puVar1;
}


/* DArray<DAction*>::begin() const */

void __thiscall DArray<DAction*>::begin(DArray<DAction*> *this)

{
  FUN_04f6b188(*(undefined8 *)this);
  return;
}


/* DArray<DAction*>::end() const */

void __thiscall DArray<DAction*>::end(DArray<DAction*> *this)

{
  FUN_04f6b1f0(*(undefined8 *)(this + 8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DArray<DAction*>::clear() */

void __thiscall DArray<DAction*>::clear(DArray<DAction*> *this)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>((vector *)this);
  while( true ) {
    local_10 = std::end<std::vector<DButton*,std::allocator<DButton*>>>((vector *)this);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) break;
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    DRef::unref((DRef *)*puVar2);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<DAction*,std::allocator<DAction*>>::clear
            ((vector<DAction*,std::allocator<DAction*>> *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DArray<DWake*>::clear() */

void __thiscall DArray<DWake*>::clear(DArray<DWake*> *this)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>((vector *)this);
  while( true ) {
    local_10 = std::end<std::vector<DButton*,std::allocator<DButton*>>>((vector *)this);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) break;
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    DRef::unref((DRef *)*puVar2);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<DWake*,std::allocator<DWake*>>::clear((vector<DWake*,std::allocator<DWake*>> *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DArray<DSleep*>::clear() */

void __thiscall DArray<DSleep*>::clear(DArray<DSleep*> *this)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>((vector *)this);
  while( true ) {
    local_10 = std::end<std::vector<DButton*,std::allocator<DButton*>>>((vector *)this);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) break;
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    DRef::unref((DRef *)*puVar2);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<DSleep*,std::allocator<DSleep*>>::clear
            ((vector<DSleep*,std::allocator<DSleep*>> *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DArray<DAction*>::~DArray() */

void __thiscall DArray<DAction*>::~DArray(DArray<DAction*> *this)

{
  clear(this);
  std::vector<DAction*,std::allocator<DAction*>>::~vector
            ((vector<DAction*,std::allocator<DAction*>> *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DArray<DWake*>::empty() const */

void __thiscall DArray<DWake*>::empty(DArray<DWake*> *this)

{
  bool bVar1;
  undefined8 uStack_18;
  undefined8 uStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  uStack_10 = FUN_04f6c158(*(undefined8 *)this);
  uStack_18 = FUN_04f6c1a8(*(undefined8 *)(this + 8));
  bVar1 = __gnu_cxx::operator==((__normal_iterator *)&uStack_10,(__normal_iterator *)&uStack_18);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* DArray<DSleep*>::~DArray() */

void __thiscall DArray<DSleep*>::~DArray(DArray<DSleep*> *this)

{
  clear(this);
  std::vector<DSleep*,std::allocator<DSleep*>>::~vector
            ((vector<DSleep*,std::allocator<DSleep*>> *)this);
  return;
}


/* DArray<DWake*>::~DArray() */

void __thiscall DArray<DWake*>::~DArray(DArray<DWake*> *this)

{
  clear(this);
  std::vector<DWake*,std::allocator<DWake*>>::~vector((vector<DWake*,std::allocator<DWake*>> *)this)
  ;
  return;
}


/* DArray<DAction*>::TEMPNAMEPLACEHOLDERVALUE(DArray<DAction*> const&) */

DArray<DAction*> * __thiscall DArray<DAction*>::operator=(DArray<DAction*> *this,DArray *param_1)

{
  if (this != (DArray<DAction*> *)param_1) {
    clear(this);
    std::vector<DAction*,std::allocator<DAction*>>::operator=
              ((vector<DAction*,std::allocator<DAction*>> *)this,(vector *)param_1);
    DArray<DSleep*>::addRefForAllObjects((DArray<DSleep*> *)this);
  }
  return this;
}


/* DArray<DWake*>::TEMPNAMEPLACEHOLDERVALUE(DArray<DWake*> const&) */

DArray<DWake*> * __thiscall DArray<DWake*>::operator=(DArray<DWake*> *this,DArray *param_1)

{
  if (this != (DArray<DWake*> *)param_1) {
    clear(this);
    std::vector<DWake*,std::allocator<DWake*>>::operator=
              ((vector<DWake*,std::allocator<DWake*>> *)this,(vector *)param_1);
    DArray<DSleep*>::addRefForAllObjects((DArray<DSleep*> *)this);
  }
  return this;
}


/* DArray<DSleep*>::TEMPNAMEPLACEHOLDERVALUE(DArray<DSleep*> const&) */

DArray<DSleep*> * __thiscall DArray<DSleep*>::operator=(DArray<DSleep*> *this,DArray *param_1)

{
  if (this != (DArray<DSleep*> *)param_1) {
    clear(this);
    std::vector<DSleep*,std::allocator<DSleep*>>::operator=
              ((vector<DSleep*,std::allocator<DSleep*>> *)this,(vector *)param_1);
    addRefForAllObjects(this);
  }
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DArray<DWake*>::eraseObject(DWake*, bool) */

void __thiscall DArray<DWake*>::eraseObject(DArray<DWake*> *this,DWake *param_1,bool param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  DWake *local_28 [2];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28[0] = param_1;
  if (param_2) {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this);
    do {
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      while( true ) {
        if (!bVar1) goto LAB_04f6e418;
        puVar2 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        if ((DWake *)*puVar2 == local_28[0]) break;
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
        local_10 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)this);
        bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10)
        ;
      }
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      local_18 = std::vector<DWake*,std::allocator<DWake*>>::erase
                           ((vector<DWake*,std::allocator<DWake*>> *)this,local_10);
      DRef::unref((DRef *)local_28[0]);
    } while( true );
  }
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)this);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)this);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<DWake**,std::vector<DWake*,std::allocator<DWake*>>>,DWake*>
                       (uVar3,uVar4,local_28);
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
    std::vector<DWake*,std::allocator<DWake*>>::erase
              ((vector<DWake*,std::allocator<DWake*>> *)this,local_10);
    DRef::unref((DRef *)local_28[0]);
  }
LAB_04f6e418:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DArray<DAction*>::eraseObject(DAction*, bool) */

void __thiscall DArray<DAction*>::eraseObject(DArray<DAction*> *this,DAction *param_1,bool param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  DAction *local_28 [2];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28[0] = param_1;
  if (param_2) {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this);
    do {
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      while( true ) {
        if (!bVar1) goto LAB_04f6ede8;
        puVar2 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        if ((DAction *)*puVar2 == local_28[0]) break;
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
        local_10 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)this);
        bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10)
        ;
      }
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      local_18 = std::vector<DAction*,std::allocator<DAction*>>::erase
                           ((vector<DAction*,std::allocator<DAction*>> *)this,local_10);
      DRef::unref((DRef *)local_28[0]);
    } while( true );
  }
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)this);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)this);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<DAction**,std::vector<DAction*,std::allocator<DAction*>>>,DAction*>
                       (uVar3,uVar4,local_28);
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
    std::vector<DAction*,std::allocator<DAction*>>::erase
              ((vector<DAction*,std::allocator<DAction*>> *)this,local_10);
    DRef::unref((DRef *)local_28[0]);
  }
LAB_04f6ede8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* DArray<DSleep*>::pushBack(DSleep*) */

void __thiscall DArray<DSleep*>::pushBack(DArray<DSleep*> *this,DSleep *param_1)

{
  DRef *local_8;
  
  local_8 = (DRef *)param_1;
  std::vector<DSleep*,std::allocator<DSleep*>>::push_back
            ((vector<DSleep*,std::allocator<DSleep*>> *)this,(DSleep **)&local_8);
  DRef::ref(local_8);
  return;
}


/* DArray<DWake*>::pushBack(DWake*) */

void __thiscall DArray<DWake*>::pushBack(DArray<DWake*> *this,DWake *param_1)

{
  DRef *local_8;
  
  local_8 = (DRef *)param_1;
  std::vector<DWake*,std::allocator<DWake*>>::push_back
            ((vector<DWake*,std::allocator<DWake*>> *)this,(DWake **)&local_8);
  DRef::ref(local_8);
  return;
}


/* DArray<DAction*>::pushBack(DAction*) */

void __thiscall DArray<DAction*>::pushBack(DArray<DAction*> *this,DAction *param_1)

{
  DRef *local_8;
  
  local_8 = (DRef *)param_1;
  std::vector<DAction*,std::allocator<DAction*>>::push_back
            ((vector<DAction*,std::allocator<DAction*>> *)this,(DAction **)&local_8);
  DRef::ref(local_8);
  return;
}


/* DArray<DTransformNode*>::at(long) const */

undefined8 DArray<DTransformNode*>::at(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_04f74400(*(undefined8 *)param_1);
  return *puVar1;
}


/* DArray<DTransformNode*>::~DArray() */

void __thiscall DArray<DTransformNode*>::~DArray(DArray<DTransformNode*> *this)

{
  clear(this);
  std::vector<DTransformNode*,std::allocator<DTransformNode*>>::~vector
            ((vector<DTransformNode*,std::allocator<DTransformNode*>> *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DArray<DTransformNode*>::erase(__gnu_cxx::__normal_iterator<DTransformNode**,
   std::vector<DTransformNode*, std::allocator<DTransformNode*> > >) */

void __thiscall DArray<DTransformNode*>::erase(DArray<DTransformNode*> *this,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_2;
  puVar1 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
  DRef::unref((DRef *)*puVar1);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_10,(__normal_iterator *)&local_18);
  std::vector<DTransformNode*,std::allocator<DTransformNode*>>::erase
            ((vector<DTransformNode*,std::allocator<DTransformNode*>> *)this,local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DArray<DTransformNode*>::pushBack(DTransformNode*) */

void __thiscall
DArray<DTransformNode*>::pushBack(DArray<DTransformNode*> *this,DTransformNode *param_1)

{
  DRef *local_8;
  
  local_8 = (DRef *)param_1;
  std::vector<DTransformNode*,std::allocator<DTransformNode*>>::push_back
            ((vector<DTransformNode*,std::allocator<DTransformNode*>> *)this,
             (DTransformNode **)&local_8);
  DRef::ref(local_8);
  return;
}


/* DArray<DButton*>::size() const */

void __thiscall DArray<DButton*>::size(DArray<DButton*> *this)

{
  FUN_04f926b4(*(undefined8 *)this,*(undefined8 *)(this + 8));
  return;
}


/* DArray<DButton*>::at(long) const */

undefined8 DArray<DButton*>::at(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_04f926c0(*(undefined8 *)param_1);
  return *puVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DArray<DButton*>::clear() */

void __thiscall DArray<DButton*>::clear(DArray<DButton*> *this)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>((vector *)this);
  while( true ) {
    local_10 = std::end<std::vector<DButton*,std::allocator<DButton*>>>((vector *)this);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) break;
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    DRef::unref((DRef *)*puVar2);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<DButton*,std::allocator<DButton*>>::clear
            ((vector<DButton*,std::allocator<DButton*>> *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DArray<DButton*>::~DArray() */

void __thiscall DArray<DButton*>::~DArray(DArray<DButton*> *this)

{
  clear(this);
  std::vector<DButton*,std::allocator<DButton*>>::~vector
            ((vector<DButton*,std::allocator<DButton*>> *)this);
  return;
}


/* DArray<DButton*>::pushBack(DButton*) */

void __thiscall DArray<DButton*>::pushBack(DArray<DButton*> *this,DButton *param_1)

{
  DRef *local_8;
  
  local_8 = (DRef *)param_1;
  std::vector<DButton*,std::allocator<DButton*>>::push_back
            ((vector<DButton*,std::allocator<DButton*>> *)this,(DButton **)&local_8);
  DRef::ref(local_8);
  return;
}


/* DArray<DTransformNode*>::crend() const */

void __thiscall DArray<DTransformNode*>::crend(DArray<DTransformNode*> *this)

{
  std::vector<DTransformNode*,std::allocator<DTransformNode*>>::crend();
  return;
}


/* DArray<DTransformNode*>::crbegin() const */

void __thiscall DArray<DTransformNode*>::crbegin(DArray<DTransformNode*> *this)

{
  std::vector<DTransformNode*,std::allocator<DTransformNode*>>::crbegin();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DArray<DTransformNode*>::empty() const */

void __thiscall DArray<DTransformNode*>::empty(DArray<DTransformNode*> *this)

{
  bool bVar1;
  undefined8 uStack_18;
  undefined8 uStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  uStack_10 = FUN_04eb4834(*(undefined8 *)this);
  uStack_18 = FUN_04eb4884(*(undefined8 *)(this + 8));
  bVar1 = __gnu_cxx::operator==((__normal_iterator *)&uStack_10,(__normal_iterator *)&uStack_18);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}

