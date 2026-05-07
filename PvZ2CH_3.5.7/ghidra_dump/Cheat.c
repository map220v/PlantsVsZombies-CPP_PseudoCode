// Class: Cheat


/* Cheat::~Cheat() */

void __thiscall Cheat::~Cheat(Cheat *this)

{
  *(undefined ***)this = &PTR_GetClass_06753810;
  std::string::~string((string *)(this + 8));
  nop();
  return;
}


/* Cheat::~Cheat() */

void __thiscall Cheat::~Cheat(Cheat *this)

{
  ~Cheat(this);
  AK::FreeHook(this);
  return;
}


/* Cheat::Cheat() */

void __thiscall Cheat::Cheat(Cheat *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06753810;
  Set8BytesTo0(this + 8);
  this[0x14] = (Cheat)0x0;
  *(undefined4 *)(this + 0x10) = 0x7f;
  return;
}


/* Cheat::StaticNew() */

Cheat * Cheat::StaticNew(void)

{
  Cheat *this;
  
  this = ::operator_new(0x18);
  Cheat(this);
  return this;
}


/* Cheat::Cheat(std::string const&) */

void __thiscall Cheat::Cheat(Cheat *this,string *param_1)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06753810;
  FUN_05475d88(this + 8,param_1);
  this[0x14] = (Cheat)0x0;
  *(undefined4 *)(this + 0x10) = 0x7f;
  return;
}


/* Cheat::StaticGetClass() */

long * Cheat::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"Cheat",uVar2,StaticNew);
  return sClass;
}


/* Cheat::GetClass() const */

long * Cheat::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"Cheat",uVar2,StaticNew);
  return sClass;
}


/* Cheat::GetKeyboardShortcut() const */

Cheat __thiscall Cheat::GetKeyboardShortcut(Cheat *this)

{
  return this[0x14];
}

