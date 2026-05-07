// Class: Toggle


/* Toggle::~Toggle() */

void __thiscall Toggle::~Toggle(Toggle *this)

{
  std::string::~string((string *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  std::string::~string((string *)this);
  return;
}


/* Toggle::Toggle() */

void __thiscall Toggle::Toggle(Toggle *this)

{
  Set8BytesTo0();
  Set8BytesTo0(this + 0x10);
  Set8BytesTo0(this + 0x18);
  return;
}


/* Toggle::Toggle(Toggle&&) */

void __thiscall Toggle::Toggle(Toggle *this,Toggle *param_1)

{
  FUN_05474148();
  this[8] = param_1[8];
  FUN_05474148(this + 0x10,param_1 + 0x10);
  FUN_05474148(this + 0x18,param_1 + 0x18);
  return;
}


/* Toggle::Toggle(Toggle const&) */

void __thiscall Toggle::Toggle(Toggle *this,Toggle *param_1)

{
  FUN_05475d88();
  this[8] = param_1[8];
  FUN_05475d88(this + 0x10,param_1 + 0x10);
  FUN_05475d88(this + 0x18,param_1 + 0x18);
  return;
}

