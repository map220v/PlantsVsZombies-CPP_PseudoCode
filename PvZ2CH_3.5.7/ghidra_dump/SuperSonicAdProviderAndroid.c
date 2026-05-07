// Class: SuperSonicAdProviderAndroid


/* SuperSonicAdProviderAndroid::~SuperSonicAdProviderAndroid() */

void __thiscall
SuperSonicAdProviderAndroid::~SuperSonicAdProviderAndroid(SuperSonicAdProviderAndroid *this)

{
  *(undefined ***)this = &PTR__SuperSonicAdProviderAndroid_06980a80;
  *(undefined ***)(this + 0x70) = &PTR__SuperSonicAdProviderAndroid_06980ab8;
  Sexy::LazySingleton<SuperSonicAdProviderAndroid>::~LazySingleton
            ((LazySingleton<SuperSonicAdProviderAndroid> *)(this + 0x70));
  return;
}


/* non-virtual thunk to SuperSonicAdProviderAndroid::~SuperSonicAdProviderAndroid() */

void __thiscall
SuperSonicAdProviderAndroid::~SuperSonicAdProviderAndroid(SuperSonicAdProviderAndroid *this)

{
  ~SuperSonicAdProviderAndroid(this + -0x70);
  return;
}


/* SuperSonicAdProviderAndroid::~SuperSonicAdProviderAndroid() */

void __thiscall
SuperSonicAdProviderAndroid::~SuperSonicAdProviderAndroid(SuperSonicAdProviderAndroid *this)

{
  ~SuperSonicAdProviderAndroid(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to SuperSonicAdProviderAndroid::~SuperSonicAdProviderAndroid() */

void __thiscall
SuperSonicAdProviderAndroid::~SuperSonicAdProviderAndroid(SuperSonicAdProviderAndroid *this)

{
  ~SuperSonicAdProviderAndroid(this + -0x70);
  return;
}


/* SuperSonicAdProviderAndroid::SuperSonicAdProviderAndroid() */

void __thiscall
SuperSonicAdProviderAndroid::SuperSonicAdProviderAndroid(SuperSonicAdProviderAndroid *this)

{
  AdProvider::AdProvider((AdProvider *)this);
  Sexy::LazySingleton<SuperSonicAdProviderAndroid>::LazySingleton
            ((LazySingleton<SuperSonicAdProviderAndroid> *)(this + 0x70));
  *(undefined ***)this = &PTR__SuperSonicAdProviderAndroid_06980a80;
  *(undefined ***)(this + 0x70) = &PTR__SuperSonicAdProviderAndroid_06980ab8;
  return;
}

