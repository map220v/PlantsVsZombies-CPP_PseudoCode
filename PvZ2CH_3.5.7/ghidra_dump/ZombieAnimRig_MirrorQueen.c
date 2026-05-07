// Class: ZombieAnimRig_MirrorQueen


/* ZombieAnimRig_MirrorQueen::StaticGetClass() */

long * ZombieAnimRig_MirrorQueen::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_MirrorQueen",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_MirrorQueen::GetClass() const */

long * ZombieAnimRig_MirrorQueen::GetClass(void)

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
  uVar2 = ZombieAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_MirrorQueen",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_MirrorQueen::~ZombieAnimRig_MirrorQueen() */

void __thiscall
ZombieAnimRig_MirrorQueen::~ZombieAnimRig_MirrorQueen(ZombieAnimRig_MirrorQueen *this)

{
  *(undefined ***)this = &PTR_GetClass_06a0da90;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_MirrorQueen_06a0dd08;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_MirrorQueen::~ZombieAnimRig_MirrorQueen() */

void __thiscall
ZombieAnimRig_MirrorQueen::~ZombieAnimRig_MirrorQueen(ZombieAnimRig_MirrorQueen *this)

{
  ~ZombieAnimRig_MirrorQueen(this + -0x10);
  return;
}


/* ZombieAnimRig_MirrorQueen::~ZombieAnimRig_MirrorQueen() */

void __thiscall
ZombieAnimRig_MirrorQueen::~ZombieAnimRig_MirrorQueen(ZombieAnimRig_MirrorQueen *this)

{
  ~ZombieAnimRig_MirrorQueen(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_MirrorQueen::~ZombieAnimRig_MirrorQueen() */

void __thiscall
ZombieAnimRig_MirrorQueen::~ZombieAnimRig_MirrorQueen(ZombieAnimRig_MirrorQueen *this)

{
  ~ZombieAnimRig_MirrorQueen(this + -0x10);
  return;
}


/* ZombieAnimRig_MirrorQueen::ZombieAnimRig_MirrorQueen() */

void __thiscall
ZombieAnimRig_MirrorQueen::ZombieAnimRig_MirrorQueen(ZombieAnimRig_MirrorQueen *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06a0da90;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_MirrorQueen_06a0dd08;
  return;
}


/* ZombieAnimRig_MirrorQueen::StaticNew() */

ZombieAnimRig_MirrorQueen * ZombieAnimRig_MirrorQueen::StaticNew(void)

{
  ZombieAnimRig_MirrorQueen *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_MirrorQueen(this);
  return this;
}

