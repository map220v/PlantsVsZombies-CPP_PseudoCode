// Class: EASquaredNullImpl


/* EASquaredNullImpl::~EASquaredNullImpl() */

void __thiscall EASquaredNullImpl::~EASquaredNullImpl(EASquaredNullImpl *this)

{
  *(undefined ***)this = &PTR__EASquaredNullImpl_0697dda0;
  *(undefined ***)(this + 8) = &PTR__EASquaredNullImpl_0697de88;
  Sexy::LazySingleton<EASquaredNullImpl>::~LazySingleton
            ((LazySingleton<EASquaredNullImpl> *)(this + 8));
  return;
}


/* non-virtual thunk to EASquaredNullImpl::~EASquaredNullImpl() */

void __thiscall EASquaredNullImpl::~EASquaredNullImpl(EASquaredNullImpl *this)

{
  ~EASquaredNullImpl(this + -8);
  return;
}


/* EASquaredNullImpl::~EASquaredNullImpl() */

void __thiscall EASquaredNullImpl::~EASquaredNullImpl(EASquaredNullImpl *this)

{
  ~EASquaredNullImpl(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to EASquaredNullImpl::~EASquaredNullImpl() */

void __thiscall EASquaredNullImpl::~EASquaredNullImpl(EASquaredNullImpl *this)

{
  ~EASquaredNullImpl(this + -8);
  return;
}


/* EASquaredNullImpl::EASquaredNullImpl() */

void __thiscall EASquaredNullImpl::EASquaredNullImpl(EASquaredNullImpl *this)

{
  EASquared::EASquared((EASquared *)this);
  Sexy::LazySingleton<EASquaredNullImpl>::LazySingleton
            ((LazySingleton<EASquaredNullImpl> *)(this + 8));
  *(undefined ***)this = &PTR__EASquaredNullImpl_0697dda0;
  *(undefined ***)(this + 8) = &PTR__EASquaredNullImpl_0697de88;
  return;
}

