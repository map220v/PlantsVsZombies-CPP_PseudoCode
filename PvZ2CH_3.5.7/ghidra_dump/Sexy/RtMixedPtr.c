// Class: Sexy::RtMixedPtr


/* Sexy::RtMixedPtr<Sexy::Image>::operator Sexy::RtId() const */

void __thiscall Sexy::RtMixedPtr::operator_cast_to_RtId(RtMixedPtr *this)

{
  RtMixedPtrBase::GetId();
  return;
}


/* Sexy::RtMixedPtr<Sexy::Image>::TEMPNAMEPLACEHOLDERVALUE() const */

byte __thiscall Sexy::RtMixedPtr<Sexy::Image>::operator!(RtMixedPtr<Sexy::Image> *this)

{
  byte bVar1;
  
  bVar1 = RtMixedPtrBase::IsValid((RtMixedPtrBase *)this);
  return bVar1 ^ 1;
}


/* Sexy::RtMixedPtr<Sexy::Image>::operator Sexy::Image*() const */

Image * __thiscall Sexy::RtMixedPtr::operator_cast_to_Image_(RtMixedPtr *this)

{
  char cVar1;
  RtId *pRVar2;
  RtObject *this_00;
  Image *pIVar3;
  
  cVar1 = CompiledMap::Initialized((CompiledMap *)this);
  if (cVar1 != '\0') {
    pRVar2 = (RtId *)RtDb::GetDb();
    this_00 = (RtObject *)RtDb::GetObjectForId(pRVar2);
    pIVar3 = RtObject::Cast<Sexy::Image>(this_00);
    return pIVar3;
  }
  return (Image *)0x0;
}


/* Sexy::RtMixedPtr<Sexy::Image>::RtMixedPtr(Sexy::RtMixedPtr<Sexy::Image> const&) */

void __thiscall
Sexy::RtMixedPtr<Sexy::Image>::RtMixedPtr(RtMixedPtr<Sexy::Image> *this,RtMixedPtr *param_1)

{
  std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)this,(_func_void *)param_1);
  this[8] = (RtMixedPtr<Sexy::Image>)0x0;
  RtMixedPtrBase::SetId((RtMixedPtrBase *)this,(RtId *)param_1,(bool)param_1[8]);
  return;
}


/* Sexy::RtMixedPtr<Sexy::Image>::RtMixedPtr() */

void Sexy::RtMixedPtr<Sexy::Image>::RtMixedPtr(void)

{
  exception_ptr *in_x0;
  _func_void *in_x1;
  
  std::__exception_ptr::exception_ptr::exception_ptr(in_x0,in_x1);
  in_x0[8] = (exception_ptr)0x0;
  return;
}


/* Sexy::RtMixedPtr<Sexy::Image>::~RtMixedPtr() */

void __thiscall Sexy::RtMixedPtr<Sexy::Image>::~RtMixedPtr(RtMixedPtr<Sexy::Image> *this)

{
  RtMixedPtrBase::SetObject((RtMixedPtrBase *)this,0,0,0);
  RtId::~RtId((RtId *)this);
  return;
}


/* Sexy::RtMixedPtr<Sexy::Image>::RtMixedPtr(Sexy::RtId const&, bool) */

void Sexy::RtMixedPtr<Sexy::Image>::RtMixedPtr(RtId *param_1,bool param_2)

{
  bool in_w2;
  
  std::__exception_ptr::exception_ptr::exception_ptr
            ((exception_ptr *)param_1,(_func_void *)(ulong)param_2);
  RtMixedPtrBase::SetId((RtMixedPtrBase *)param_1,(RtId *)(ulong)param_2,in_w2);
  return;
}


/* Sexy::RtMixedPtr<Sexy::Image>::TEMPNAMEPLACEHOLDERVALUE(Sexy::RtMixedPtr<Sexy::Image> const&) */

RtMixedPtr<Sexy::Image> * __thiscall
Sexy::RtMixedPtr<Sexy::Image>::operator=(RtMixedPtr<Sexy::Image> *this,RtMixedPtr *param_1)

{
  RtMixedPtrBase::operator=((RtMixedPtrBase *)this,(RtMixedPtrBase *)param_1);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtMixedPtr<Sexy::Image>::TEMPNAMEPLACEHOLDERVALUE(Sexy::RtWeakPtrBase const&) */

void __thiscall
Sexy::RtMixedPtr<Sexy::Image>::operator=(RtMixedPtr<Sexy::Image> *this,RtWeakPtrBase *param_1)

{
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RtMixedPtrBase::GetId();
  RtMixedPtrBase::SetId((RtMixedPtrBase *)this,aRStack_10,false);
  RtId::~RtId(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}

