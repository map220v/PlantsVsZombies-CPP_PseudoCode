// Class: Sexy::ResourceManager::PreLoadTask


/* Sexy::ResourceManager::PreLoadTask::PreLoadTask() */

void __thiscall Sexy::ResourceManager::PreLoadTask::PreLoadTask(PreLoadTask *this)

{
  Set8BytesTo0();
  *(undefined8 *)(this + 8) = 0;
  return;
}


/* Sexy::ResourceManager::PreLoadTask::~PreLoadTask() */

void __thiscall Sexy::ResourceManager::PreLoadTask::~PreLoadTask(PreLoadTask *this)

{
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
  }
  std::string::~string((string *)this);
  return;
}

