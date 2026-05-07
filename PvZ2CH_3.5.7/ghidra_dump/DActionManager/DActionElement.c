// Class: DActionManager::DActionElement


/* DActionManager::DActionElement::~DActionElement() */

void __thiscall DActionManager::DActionElement::~DActionElement(DActionElement *this)

{
  DArray<DAction*>::clear((DArray<DAction*> *)this);
  std::vector<DAction*,std::allocator<DAction*>>::~vector
            ((vector<DAction*,std::allocator<DAction*>> *)this);
  return;
}


/* DActionManager::DActionElement::DActionElement() */

void __thiscall DActionManager::DActionElement::DActionElement(DActionElement *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return;
}

