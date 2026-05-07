// Class: UltraAndroid


/* UltraAndroid::UltraAndroid() */

void __thiscall UltraAndroid::UltraAndroid(UltraAndroid *this)

{
  Ultra::Ultra((Ultra *)this);
  Sexy::LazySingleton<UltraAndroid>::LazySingleton((LazySingleton<UltraAndroid> *)(this + 0x90));
  *(undefined ***)this = &PTR__UltraAndroid_06980970;
  *(undefined ***)(this + 0x90) = &PTR__UltraAndroid_069809a0;
  return;
}


/* UltraAndroid::~UltraAndroid() */

void __thiscall UltraAndroid::~UltraAndroid(UltraAndroid *this)

{
  *(undefined ***)this = &PTR__UltraAndroid_06980970;
  *(undefined ***)(this + 0x90) = &PTR__UltraAndroid_069809a0;
  Sexy::LazySingleton<UltraAndroid>::~LazySingleton((LazySingleton<UltraAndroid> *)(this + 0x90));
  Ultra::~Ultra((Ultra *)this);
  return;
}


/* non-virtual thunk to UltraAndroid::~UltraAndroid() */

void __thiscall UltraAndroid::~UltraAndroid(UltraAndroid *this)

{
  ~UltraAndroid(this + -0x90);
  return;
}


/* UltraAndroid::~UltraAndroid() */

void __thiscall UltraAndroid::~UltraAndroid(UltraAndroid *this)

{
  ~UltraAndroid(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UltraAndroid::~UltraAndroid() */

void __thiscall UltraAndroid::~UltraAndroid(UltraAndroid *this)

{
  ~UltraAndroid(this + -0x90);
  return;
}

