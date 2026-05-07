// Class: DSleep


/* DSleep::DSleep() */

void __thiscall DSleep::DSleep(DSleep *this)

{
  DAction::DAction((DAction *)this);
  *(undefined ***)this = &PTR__DSleep_06a22010;
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)(this + 0x90));
  return;
}


/* DSleep::isDone() const */

char __thiscall DSleep::isDone(DSleep *this)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = DArray<DWake*>::empty((DArray<DWake*> *)(this + 0x90));
  if (cVar1 != '\0') {
    bVar2 = std::function::operator_cast_to_bool((function *)(this + 0x10));
    if (bVar2) {
      std::function<void(DTransformNode*)>::operator()
                ((function<void(DTransformNode*)> *)(this + 0x10),*(DTransformNode **)(this + 0x88))
      ;
      return '\x01';
    }
  }
  return cVar1;
}


/* DSleep::~DSleep() */

void __thiscall DSleep::~DSleep(DSleep *this)

{
  *(undefined ***)this = &PTR__DSleep_06a22010;
  DArray<DWake*>::~DArray((DArray<DWake*> *)(this + 0x90));
  DAction::~DAction((DAction *)this);
  return;
}


/* DSleep::~DSleep() */

void __thiscall DSleep::~DSleep(DSleep *this)

{
  ~DSleep(this);
  AK::FreeHook(this);
  return;
}


/* DSleep::TEMPNAMEPLACEHOLDERVALUE(DSleep const&) */

DSleep * __thiscall DSleep::operator=(DSleep *this,DSleep *param_1)

{
  DAction::operator=((DAction *)this,(DAction *)param_1);
  DArray<DWake*>::operator=((DArray<DWake*> *)(this + 0x90),(DArray *)(param_1 + 0x90));
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DSleep::_copy() const */

void __thiscall DSleep::_copy(DSleep *this)

{
  bool bVar1;
  DSleep *this_00;
  long *plVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = ::operator_new(0xa8);
  DSleep(this_00);
  operator=(this_00,this);
  local_18 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this_00 + 0x90));
  local_10 = std::end<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this_00 + 0x90));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    DArray<DSleep*>::pushBack((DArray<DSleep*> *)(*plVar2 + 0x90),this_00);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* DSleep::wake() */

void DSleep::wake(void)

{
  DSleep *in_x0;
  long lVar1;
  DWake *pDVar2;
  DRefPtr<DWake> *in_x8;
  
  DRefPtr<DWake>::DRefPtr(in_x8);
  lVar1 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)in_x8);
  DArray<DSleep*>::pushBack((DArray<DSleep*> *)(lVar1 + 0x90),in_x0);
  pDVar2 = (DWake *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)in_x8);
  DArray<DWake*>::pushBack((DArray<DWake*> *)(in_x0 + 0x90),pDVar2);
  return;
}

