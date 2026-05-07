// Class: DSpawn


/* DSpawn::DSpawn() */

void __thiscall DSpawn::DSpawn(DSpawn *this)

{
  DAction::DAction((DAction *)this);
  *(undefined ***)this = &PTR__DSpawn_06a21f50;
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)(this + 0x90));
  std::list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>>::list
            ((list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>> *)(this + 0xa8));
  return;
}


/* DSpawn::isDone() const */

undefined8 __thiscall DSpawn::isDone(DSpawn *this)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((*(long *)(this + 0x70) == 1) &&
     (lVar2 = std::list<DAction*,std::allocator<DAction*>>::size
                        ((list<DAction*,std::allocator<DAction*>> *)(this + 0xa8)), lVar2 == 0)) {
    bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x10));
    if (bVar1) {
      std::function<void(DTransformNode*)>::operator()
                ((function<void(DTransformNode*)> *)(this + 0x10),*(DTransformNode **)(this + 0x88))
      ;
      uVar3 = 1;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


/* DSpawn::~DSpawn() */

void __thiscall DSpawn::~DSpawn(DSpawn *this)

{
  *(undefined ***)this = &PTR__DSpawn_06a21f50;
  std::list<DAction*,std::allocator<DAction*>>::~list
            ((list<DAction*,std::allocator<DAction*>> *)(this + 0xa8));
  DArray<DAction*>::~DArray((DArray<DAction*> *)(this + 0x90));
  DAction::~DAction((DAction *)this);
  return;
}


/* DSpawn::~DSpawn() */

void __thiscall DSpawn::~DSpawn(DSpawn *this)

{
  ~DSpawn(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DSpawn::update(float) */

void __thiscall DSpawn::update(DSpawn *this,float param_1)

{
  list<DAction*,std::allocator<DAction*>> *this_00;
  bool bVar1;
  char cVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  code *pcVar8;
  DAction *local_20;
  TextureInfo **local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x84] == (DSpawn)0x0) {
    *(float *)(this + 0x7c) = *(float *)(this + 0x7c) + param_1;
  }
  else {
    this[0x84] = (DSpawn)0x0;
    pcVar8 = *(code **)(*(long *)this + 0x10);
    uVar5 = (**(code **)(*(long *)this + 0x18))();
    (*pcVar8)(this,uVar5);
    *(undefined4 *)(this + 0x7c) = 0;
  }
  if (this[0x85] == (DSpawn)0x0) {
    this_00 = (list<DAction*,std::allocator<DAction*>> *)(this + 0xa8);
    lVar3 = std::list<DAction*,std::allocator<DAction*>>::size(this_00);
    if (lVar3 != 0) {
      local_20 = (DAction *)FUN_04f6aae4(*(undefined8 *)(this + 0xa8));
      do {
        local_10 = std::
                   __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                             ((TaskResource **)this_00);
        bVar1 = eastl::operator!=((rbtree_iterator *)&local_20,(rbtree_iterator *)&local_10);
        while( true ) {
          if (!bVar1) goto LAB_04f6c6b0;
          puVar4 = (undefined8 *)
                   std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                             ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_20);
          plVar7 = (long *)*puVar4;
          (**(code **)(*plVar7 + 0x20))(param_1,plVar7);
          cVar2 = (**(code **)(*plVar7 + 0x30))(plVar7);
          if (cVar2 == '\0') break;
          *(undefined1 *)((long)plVar7 + 0x84) = 1;
          local_18 = (TextureInfo **)FUN_04f68520((rbtree_iterator *)&local_20);
          eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
                    ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_18);
          FUN_04f6ab30(local_10);
          local_10 = std::
                     __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                               ((TaskResource **)this_00);
          bVar1 = eastl::operator!=((rbtree_iterator *)&local_20,(rbtree_iterator *)&local_10);
        }
        std::_List_const_iterator<Sexy::FontLayer>::operator++
                  ((_List_const_iterator<Sexy::FontLayer> *)&local_20);
      } while( true );
    }
    uVar6 = *(ulong *)(this + 0x70);
    if (uVar6 < 2) {
      if (uVar6 == 0) {
        this[0x84] = (DSpawn)0x1;
        local_18 = (TextureInfo **)
                   std::begin<std::vector<DButton*,std::allocator<DButton*>>>
                             ((vector *)(this + 0x90));
        local_10 = std::end<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this + 0x90))
        ;
        while (bVar1 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
              bVar1) {
          puVar4 = (undefined8 *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
          local_20 = (DAction *)*puVar4;
          std::list<DAction*,std::allocator<DAction*>>::push_back(this_00,&local_20);
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
        }
      }
    }
    else {
      this[0x84] = (DSpawn)0x1;
      *(ulong *)(this + 0x70) = uVar6 - 1;
      local_18 = (TextureInfo **)
                 std::begin<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this + 0x90))
      ;
      local_10 = std::end<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this + 0x90));
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
            bVar1) {
        puVar4 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        local_20 = (DAction *)*puVar4;
        std::list<DAction*,std::allocator<DAction*>>::push_back(this_00,&local_20);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
      }
    }
  }
  else if (*(float *)(this + 0x78) <= *(float *)(this + 0x7c)) {
    this[0x85] = (DSpawn)0x0;
    *(undefined4 *)(this + 0x7c) = 0;
  }
LAB_04f6c6b0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DSpawn::TEMPNAMEPLACEHOLDERVALUE(DSpawn const&) */

DSpawn * __thiscall DSpawn::operator=(DSpawn *this,DSpawn *param_1)

{
  DAction::operator=((DAction *)this,(DAction *)param_1);
  DArray<DAction*>::operator=((DArray<DAction*> *)(this + 0x90),(DArray *)(param_1 + 0x90));
  std::list<DAction*,std::allocator<DAction*>>::operator=
            ((list<DAction*,std::allocator<DAction*>> *)(this + 0xa8),(list *)(param_1 + 0xa8));
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DSpawn::_copy() const */

void __thiscall DSpawn::_copy(DSpawn *this)

{
  bool bVar1;
  DSpawn *this_00;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = ::operator_new(0xb8);
  *(undefined8 *)(this_00 + 0xb0) = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined8 *)(this_00 + 0x48) = 0;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)(this_00 + 0x58) = 0;
  *(undefined8 *)(this_00 + 0x60) = 0;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x70) = 0;
  *(undefined8 *)(this_00 + 0x78) = 0;
  *(undefined8 *)(this_00 + 0x80) = 0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined8 *)(this_00 + 0x90) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined8 *)(this_00 + 0xa8) = 0;
  DSpawn(this_00);
  operator=(this_00,this);
  DArray<DAction*>::clear((DArray<DAction*> *)(this_00 + 0x90));
  std::list<DAction*,std::allocator<DAction*>>::clear
            ((list<DAction*,std::allocator<DAction*>> *)(this_00 + 0xa8));
  local_18 = DArray<DAction*>::begin((DArray<DAction*> *)(this + 0x90));
  local_10 = DArray<DAction*>::end((DArray<DAction*> *)(this + 0x90));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    pcVar4 = *(code **)(*(long *)this_00 + 0x40);
    uVar3 = (**(code **)(*(long *)*puVar2 + 0x38))((long *)*puVar2);
    (*pcVar4)(this_00,uVar3);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* DSpawn::pushAction(DAction*) */

DSpawn * __thiscall DSpawn::pushAction(DSpawn *this,DAction *param_1)

{
  DAction *local_8;
  
  local_8 = param_1;
  DArray<DAction*>::pushBack((DArray<DAction*> *)(this + 0x90),param_1);
  std::list<DAction*,std::allocator<DAction*>>::push_back
            ((list<DAction*,std::allocator<DAction*>> *)(this + 0xa8),&local_8);
  return this;
}

