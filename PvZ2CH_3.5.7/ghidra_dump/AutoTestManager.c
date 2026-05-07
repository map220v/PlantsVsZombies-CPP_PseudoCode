// Class: AutoTestManager


/* AutoTestManager::AutoTestManager() */

void __thiscall AutoTestManager::AutoTestManager(AutoTestManager *this)

{
  Sexy::LazySingleton<AutoTestManager>::LazySingleton((LazySingleton<AutoTestManager> *)this);
  *(undefined ***)this = &PTR__AutoTestManager_06846c40;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 8));
  return;
}


/* AutoTestManager::~AutoTestManager() */

void __thiscall AutoTestManager::~AutoTestManager(AutoTestManager *this)

{
  *(undefined ***)this = &PTR__AutoTestManager_06846c40;
  std::
  map<std::string,AutoTest*,std::less<std::string>,std::allocator<std::pair<std::string_const,AutoTest*>>>
  ::~map((map<std::string,AutoTest*,std::less<std::string>,std::allocator<std::pair<std::string_const,AutoTest*>>>
          *)(this + 8));
  Sexy::LazySingleton<AutoTestManager>::~LazySingleton((LazySingleton<AutoTestManager> *)this);
  return;
}


/* AutoTestManager::~AutoTestManager() */

void __thiscall AutoTestManager::~AutoTestManager(AutoTestManager *this)

{
  ~AutoTestManager(this);
  AK::FreeHook(this);
  return;
}

