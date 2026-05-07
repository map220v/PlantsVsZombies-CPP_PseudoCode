// Class: DWake


/* DWake::isDone() const */

undefined8 __thiscall DWake::isDone(DWake *this)

{
  bool bVar1;
  
  bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x10));
  if (bVar1) {
    std::function<void(DTransformNode*)>::operator()
              ((function<void(DTransformNode*)> *)(this + 0x10),*(DTransformNode **)(this + 0x88));
  }
  return 1;
}


/* DWake::DWake() */

void __thiscall DWake::DWake(DWake *this)

{
  DAction::DAction((DAction *)this);
  *(undefined ***)this = &PTR__DWake_06a22060;
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)(this + 0x90));
  return;
}


/* DWake::~DWake() */

void __thiscall DWake::~DWake(DWake *this)

{
  *(undefined ***)this = &PTR__DWake_06a22060;
  DArray<DSleep*>::~DArray((DArray<DSleep*> *)(this + 0x90));
  DAction::~DAction((DAction *)this);
  return;
}


/* DWake::~DWake() */

void __thiscall DWake::~DWake(DWake *this)

{
  ~DWake(this);
  AK::FreeHook(this);
  return;
}


/* DWake::TEMPNAMEPLACEHOLDERVALUE(DWake const&) */

DWake * __thiscall DWake::operator=(DWake *this,DWake *param_1)

{
  DAction::operator=((DAction *)this,(DAction *)param_1);
  DArray<DSleep*>::operator=((DArray<DSleep*> *)(this + 0x90),(DArray *)(param_1 + 0x90));
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DWake::update(float) */

void DWake::update(float param_1)

{
  vector *this;
  bool bVar1;
  DWake *in_x0;
  long *plVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this = (vector *)(in_x0 + 0x90);
  local_8 = ___stack_chk_guard;
  local_18 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>(this);
  local_10 = std::end<std::vector<DButton*,std::allocator<DButton*>>>(this);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    DArray<DWake*>::eraseObject((DArray<DWake*> *)(*plVar2 + 0x90),in_x0,false);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  DArray<DSleep*>::clear((DArray<DSleep*> *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DWake::_copy() const */

void __thiscall DWake::_copy(DWake *this)

{
  bool bVar1;
  DWake *this_00;
  long *plVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = ::operator_new(0xa8);
  DWake(this_00);
  operator=(this_00,this);
  local_18 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this_00 + 0x90));
  local_10 = std::end<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this_00 + 0x90));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    DArray<DWake*>::pushBack((DArray<DWake*> *)(*plVar2 + 0x90),this_00);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}

