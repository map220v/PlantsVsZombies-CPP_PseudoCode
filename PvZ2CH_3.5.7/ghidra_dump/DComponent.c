// Class: DComponent


/* DComponent::setEnabled(bool) */

void __thiscall DComponent::setEnabled(DComponent *this,bool param_1)

{
  this[0x20] = (DComponent)param_1;
  return;
}


/* DComponent::setName(std::string const&) */

void DComponent::setName(string *param_1)

{
  thunk_FUN_05475e00(param_1 + 0x18);
  return;
}


/* DComponent::~DComponent() */

void __thiscall DComponent::~DComponent(DComponent *this)

{
  *(undefined ***)this = &PTR__DComponent_06a22460;
  std::string::~string((string *)(this + 0x18));
  nop();
  return;
}


/* DComponent::~DComponent() */

void __thiscall DComponent::~DComponent(DComponent *this)

{
  ~DComponent(this);
  AK::FreeHook(this);
  return;
}

