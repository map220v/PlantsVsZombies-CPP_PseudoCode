// Class: DSequence


/* DSequence::isDone() const */

bool __thiscall DSequence::isDone(DSequence *this)

{
  bool bVar1;
  long lVar2;
  
  bVar1 = false;
  if ((*(long *)(this + 0x70) == 1) &&
     (lVar2 = DArray<DAction*>::size((DArray<DAction*> *)(this + 0x90)),
     lVar2 <= *(long *)(this + 0xa8))) {
    bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x10));
    if (!bVar1) {
      return true;
    }
    std::function<void(DTransformNode*)>::operator()
              ((function<void(DTransformNode*)> *)(this + 0x10),*(DTransformNode **)(this + 0x88));
  }
  return bVar1;
}


/* DSequence::update(float) */

void __thiscall DSequence::update(DSequence *this,float param_1)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined4 in_register_00005004;
  
  lVar5 = *(long *)(this + 0xa8);
  lVar2 = DArray<DAction*>::size((DArray<DAction*> *)(this + 0x90));
  if (lVar5 < lVar2) {
    plVar4 = (long *)DArray<DAction*>::at((long)(this + 0x90));
    (**(code **)(*plVar4 + 0x20))(CONCAT44(in_register_00005004,param_1));
    cVar1 = (**(code **)(*plVar4 + 0x30))(plVar4);
    if (cVar1 != '\0') {
      lVar2 = *(long *)(this + 0xa8);
      *(undefined1 *)((long)plVar4 + 0x84) = 1;
      *(long *)(this + 0xa8) = lVar2 + 1;
      return;
    }
  }
  else {
    uVar3 = *(ulong *)(this + 0x70);
    if (uVar3 < 2) {
      if (uVar3 == 0) {
        *(undefined8 *)(this + 0xa8) = 0;
        return;
      }
    }
    else {
      *(undefined8 *)(this + 0xa8) = 0;
      *(ulong *)(this + 0x70) = uVar3 - 1;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DSequence::setTarget(DTransformNode*) */

void __thiscall DSequence::setTarget(DSequence *this,DTransformNode *param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DAction::setTarget((DAction *)this,param_1);
  local_18 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this + 0x90));
  local_10 = std::end<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this + 0x90));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    DAction::setTarget((DAction *)*puVar2,param_1);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DSequence::DSequence() */

void __thiscall DSequence::DSequence(DSequence *this)

{
  DAction::DAction((DAction *)this);
  *(undefined ***)this = &PTR__DSequence_06a21fb0;
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)(this + 0x90));
  *(undefined8 *)(this + 0xa8) = 0;
  return;
}


/* DSequence::~DSequence() */

void __thiscall DSequence::~DSequence(DSequence *this)

{
  *(undefined ***)this = &PTR__DSequence_06a21fb0;
  DArray<DAction*>::~DArray((DArray<DAction*> *)(this + 0x90));
  DAction::~DAction((DAction *)this);
  return;
}


/* DSequence::~DSequence() */

void __thiscall DSequence::~DSequence(DSequence *this)

{
  ~DSequence(this);
  AK::FreeHook(this);
  return;
}


/* DSequence::TEMPNAMEPLACEHOLDERVALUE(DSequence const&) */

DSequence * __thiscall DSequence::operator=(DSequence *this,DSequence *param_1)

{
  DAction::operator=((DAction *)this,(DAction *)param_1);
  DArray<DAction*>::operator=((DArray<DAction*> *)(this + 0x90),(DArray *)(param_1 + 0x90));
  *(undefined8 *)(this + 0xa8) = *(undefined8 *)(param_1 + 0xa8);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DSequence::_copy() const */

void __thiscall DSequence::_copy(DSequence *this)

{
  bool bVar1;
  DSequence *this_00;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = ::operator_new(0xb0);
  DSequence(this_00);
  operator=(this_00,this);
  DArray<DAction*>::clear((DArray<DAction*> *)(this_00 + 0x90));
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


/* DSequence::pushAction(DAction*) */

DSequence * __thiscall DSequence::pushAction(DSequence *this,DAction *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(*(long *)param_1 + 0x10);
  uVar1 = (**(code **)(*(long *)this + 0x18))();
  (*pcVar2)(param_1,uVar1);
  DArray<DAction*>::pushBack((DArray<DAction*> *)(this + 0x90),param_1);
  return this;
}


/* DSequence::clone() const */

void DSequence::clone(void)

{
  long *in_x0;
  DTouchLayer *pDVar1;
  DRefPtr<DTouchLayer> *in_x8;
  
  pDVar1 = (DTouchLayer *)(**(code **)(*in_x0 + 0x38))();
  DRefPtr<DTouchLayer>::DRefPtr(in_x8,pDVar1);
  return;
}

