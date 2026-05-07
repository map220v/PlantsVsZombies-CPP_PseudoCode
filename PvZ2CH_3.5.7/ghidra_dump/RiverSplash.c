// Class: RiverSplash


/* RiverSplash::onPostDraw(Sexy::Graphics*) */

void __thiscall RiverSplash::onPostDraw(RiverSplash *this,Graphics *param_1)

{
  Sexy::Graphics::ClearClipRect(param_1);
  return;
}


/* RiverSplash::onPopAnimInitialized() */

void __thiscall RiverSplash::onPopAnimInitialized(RiverSplash *this)

{
  this[0x20c] = (RiverSplash)0x1;
  return;
}


/* RiverSplash::~RiverSplash() */

void __thiscall RiverSplash::~RiverSplash(RiverSplash *this)

{
  *(undefined ***)this = &PTR_GetClass_0692fbe0;
  *(undefined ***)(this + 0x10) = &PTR__RiverSplash_0692fd00;
  PopAnimRig::~PopAnimRig((PopAnimRig *)this);
  return;
}


/* non-virtual thunk to RiverSplash::~RiverSplash() */

void __thiscall RiverSplash::~RiverSplash(RiverSplash *this)

{
  ~RiverSplash(this + -0x10);
  return;
}


/* RiverSplash::~RiverSplash() */

void __thiscall RiverSplash::~RiverSplash(RiverSplash *this)

{
  ~RiverSplash(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to RiverSplash::~RiverSplash() */

void __thiscall RiverSplash::~RiverSplash(RiverSplash *this)

{
  ~RiverSplash(this + -0x10);
  return;
}


/* RiverSplash::onPreDraw(Sexy::Graphics*) */

void __thiscall RiverSplash::onPreDraw(RiverSplash *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar1 = FUN_04a22810(iVar1 + 200);
  iVar2 = FUN_04a22810(800);
  Sexy::Graphics::SetClipRect(param_1,iVar1,0,*(int *)(*(long *)(param_1 + 8) + 0x38),iVar2);
  return;
}


/* RiverSplash::StaticGetClass() */

long * RiverSplash::StaticGetClass(void)

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
  uVar2 = PopAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"RiverSplash",uVar2,StaticNew);
  return sClass;
}


/* RiverSplash::GetClass() const */

long * RiverSplash::GetClass(void)

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
  uVar2 = PopAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"RiverSplash",uVar2,StaticNew);
  return sClass;
}


/* RiverSplash::RiverSplash() */

void __thiscall RiverSplash::RiverSplash(RiverSplash *this)

{
  PopAnimRig::PopAnimRig((PopAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0692fbe0;
  *(undefined ***)(this + 0x10) = &PTR__RiverSplash_0692fd00;
  return;
}


/* RiverSplash::StaticNew() */

RiverSplash * RiverSplash::StaticNew(void)

{
  RiverSplash *this;
  
  this = ::operator_new(0x210);
  RiverSplash(this);
  return this;
}

