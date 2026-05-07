// Class: GeneralTaskStateManager


/* GeneralTaskStateManager::~GeneralTaskStateManager() */

void __thiscall GeneralTaskStateManager::~GeneralTaskStateManager(GeneralTaskStateManager *this)

{
  *(undefined ***)this = &PTR__GeneralTaskStateManager_06608610;
  Sexy::LazySingleton<GeneralTaskStateManager>::~LazySingleton
            ((LazySingleton<GeneralTaskStateManager> *)this);
  return;
}


/* GeneralTaskStateManager::~GeneralTaskStateManager() */

void __thiscall GeneralTaskStateManager::~GeneralTaskStateManager(GeneralTaskStateManager *this)

{
  ~GeneralTaskStateManager(this);
  AK::FreeHook(this);
  return;
}


/* GeneralTaskStateManager::GeneralTaskStateManager() */

void __thiscall GeneralTaskStateManager::GeneralTaskStateManager(GeneralTaskStateManager *this)

{
  Sexy::LazySingleton<GeneralTaskStateManager>::LazySingleton
            ((LazySingleton<GeneralTaskStateManager> *)this);
  this[8] = (GeneralTaskStateManager)0x0;
  *(undefined ***)this = &PTR__GeneralTaskStateManager_06608610;
  return;
}

