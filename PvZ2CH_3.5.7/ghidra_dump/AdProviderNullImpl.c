// Class: AdProviderNullImpl


/* AdProviderNullImpl::Initialize(std::string const&) */

void AdProviderNullImpl::Initialize(string *param_1)

{
  return;
}


/* AdProviderNullImpl::doShowAdvertisements() */

void AdProviderNullImpl::doShowAdvertisements(void)

{
  return;
}


/* AdProviderNullImpl::~AdProviderNullImpl() */

void __thiscall AdProviderNullImpl::~AdProviderNullImpl(AdProviderNullImpl *this)

{
  *(undefined ***)this = &PTR__AdProviderNullImpl_0697fe50;
  *(undefined ***)(this + 0x70) = &PTR__AdProviderNullImpl_0697fe88;
  Sexy::LazySingleton<AdProviderNullImpl>::~LazySingleton
            ((LazySingleton<AdProviderNullImpl> *)(this + 0x70));
  return;
}


/* non-virtual thunk to AdProviderNullImpl::~AdProviderNullImpl() */

void __thiscall AdProviderNullImpl::~AdProviderNullImpl(AdProviderNullImpl *this)

{
  ~AdProviderNullImpl(this + -0x70);
  return;
}


/* AdProviderNullImpl::~AdProviderNullImpl() */

void __thiscall AdProviderNullImpl::~AdProviderNullImpl(AdProviderNullImpl *this)

{
  ~AdProviderNullImpl(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to AdProviderNullImpl::~AdProviderNullImpl() */

void __thiscall AdProviderNullImpl::~AdProviderNullImpl(AdProviderNullImpl *this)

{
  ~AdProviderNullImpl(this + -0x70);
  return;
}


/* AdProviderNullImpl::AdProviderNullImpl() */

void __thiscall AdProviderNullImpl::AdProviderNullImpl(AdProviderNullImpl *this)

{
  AdProvider::AdProvider((AdProvider *)this);
  Sexy::LazySingleton<AdProviderNullImpl>::LazySingleton
            ((LazySingleton<AdProviderNullImpl> *)(this + 0x70));
  *(undefined ***)this = &PTR__AdProviderNullImpl_0697fe50;
  *(undefined ***)(this + 0x70) = &PTR__AdProviderNullImpl_0697fe88;
  return;
}

