// Class: RtReflectionDelegateBase


/* RtReflectionDelegateBase::RtReflectionDelegateBase(Sexy::RtId, std::string const&) */

void __thiscall
RtReflectionDelegateBase::RtReflectionDelegateBase
          (RtReflectionDelegateBase *this,RtId *param_2,undefined8 param_3)

{
  std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)this,(_func_void *)param_2);
  Set8BytesTo0(this + 8);
  Sexy::RtId::operator=((RtId *)this,param_2);
  thunk_FUN_05475e00(this + 8,param_3);
  return;
}


/* RtReflectionDelegateBase::~RtReflectionDelegateBase() */

void __thiscall RtReflectionDelegateBase::~RtReflectionDelegateBase(RtReflectionDelegateBase *this)

{
  std::string::~string((string *)(this + 8));
  Sexy::RtId::~RtId((RtId *)this);
  return;
}


/* RtReflectionDelegateBase::RtReflectionDelegateBase(RtReflectionDelegateBase const&) */

void __thiscall
RtReflectionDelegateBase::RtReflectionDelegateBase
          (RtReflectionDelegateBase *this,RtReflectionDelegateBase *param_1)

{
  Sexy::RtId::RtId((RtId *)this,(RtId *)param_1);
  FUN_05475d88(this + 8,param_1 + 8);
  return;
}


/* RtReflectionDelegateBase::RtReflectionDelegateBase() */

void __thiscall RtReflectionDelegateBase::RtReflectionDelegateBase(RtReflectionDelegateBase *this)

{
  Sexy::RtId::RtId((RtId *)this,0);
  Set8BytesTo0(this + 8);
  return;
}


/* RtReflectionDelegateBase::TEMPNAMEPLACEHOLDERVALUE(RtReflectionDelegateBase const&) */

RtReflectionDelegateBase * __thiscall
RtReflectionDelegateBase::operator=
          (RtReflectionDelegateBase *this,RtReflectionDelegateBase *param_1)

{
  Sexy::RtId::operator=((RtId *)this,(RtId *)param_1);
  thunk_FUN_05475e00(this + 8,param_1 + 8);
  return this;
}


/* RtReflectionDelegateBase::TEMPNAMEPLACEHOLDERVALUE(RtReflectionDelegateBase&&) */

RtReflectionDelegateBase * __thiscall
RtReflectionDelegateBase::operator=
          (RtReflectionDelegateBase *this,RtReflectionDelegateBase *param_1)

{
  Sexy::RtId::operator=((RtId *)this,(RtId *)param_1);
  FUN_05474278(this + 8,param_1 + 8);
  return this;
}


/* RtReflectionDelegateBase::RtReflectionDelegateBase(RtReflectionDelegateBase&&) */

void __thiscall
RtReflectionDelegateBase::RtReflectionDelegateBase
          (RtReflectionDelegateBase *this,RtReflectionDelegateBase *param_1)

{
  Sexy::RtId::RtId((RtId *)this,(RtId *)param_1);
  FUN_05474148(this + 8,param_1 + 8);
  return;
}

