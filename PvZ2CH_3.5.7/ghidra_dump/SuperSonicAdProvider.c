// Class: SuperSonicAdProvider


/* SuperSonicAdProvider::SuperSonicAdProvider() */

void __thiscall SuperSonicAdProvider::SuperSonicAdProvider(SuperSonicAdProvider *this)

{
  AdProviderFactory::AdProviderFactory((AdProviderFactory *)this);
  Sexy::LazySingleton<SuperSonicAdProvider>::LazySingleton
            ((LazySingleton<SuperSonicAdProvider> *)(this + 0x18));
  *(undefined ***)this = &PTR__SuperSonicAdProvider_06980a20;
  *(undefined ***)(this + 0x18) = &PTR__SuperSonicAdProvider_06980a58;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SuperSonicAdProvider::getEnabledOverrideKey() */

void __thiscall SuperSonicAdProvider::getEnabledOverrideKey(SuperSonicAdProvider *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"SuperSonicEnabledOverride");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SuperSonicAdProvider::getUseDemoCampaignsKey() */

void __thiscall SuperSonicAdProvider::getUseDemoCampaignsKey(SuperSonicAdProvider *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"SuperSonicUseDemoCampaigns");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* SuperSonicAdProvider::~SuperSonicAdProvider() */

void __thiscall SuperSonicAdProvider::~SuperSonicAdProvider(SuperSonicAdProvider *this)

{
  *(undefined ***)this = &PTR__SuperSonicAdProvider_06980a20;
  *(undefined ***)(this + 0x18) = &PTR__SuperSonicAdProvider_06980a58;
  Sexy::LazySingleton<SuperSonicAdProvider>::~LazySingleton
            ((LazySingleton<SuperSonicAdProvider> *)(this + 0x18));
  return;
}


/* non-virtual thunk to SuperSonicAdProvider::~SuperSonicAdProvider() */

void __thiscall SuperSonicAdProvider::~SuperSonicAdProvider(SuperSonicAdProvider *this)

{
  ~SuperSonicAdProvider(this + -0x18);
  return;
}


/* SuperSonicAdProvider::~SuperSonicAdProvider() */

void __thiscall SuperSonicAdProvider::~SuperSonicAdProvider(SuperSonicAdProvider *this)

{
  ~SuperSonicAdProvider(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to SuperSonicAdProvider::~SuperSonicAdProvider() */

void __thiscall SuperSonicAdProvider::~SuperSonicAdProvider(SuperSonicAdProvider *this)

{
  ~SuperSonicAdProvider(this + -0x18);
  return;
}


/* SuperSonicAdProvider::PlatformSpecificInstance() */

void SuperSonicAdProvider::PlatformSpecificInstance(void)

{
  Sexy::LazySingleton<SuperSonicAdProviderAndroid>::GetInstance();
  return;
}

