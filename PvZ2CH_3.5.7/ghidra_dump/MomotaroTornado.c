// Class: MomotaroTornado


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MomotaroTornado::GetPam() */

void __thiscall MomotaroTornado::GetPam(MomotaroTornado *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"POPANIM_EFFECTS_HEIAN_TORNADO_SMALL");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* MomotaroTornado::~MomotaroTornado() */

void __thiscall MomotaroTornado::~MomotaroTornado(MomotaroTornado *this)

{
  *(undefined ***)this = &PTR_GetClass_06930ac0;
  *(undefined ***)(this + 0x10) = &PTR__MomotaroTornado_06930cd8;
  SkatingGuacodile::~SkatingGuacodile((SkatingGuacodile *)this);
  return;
}


/* non-virtual thunk to MomotaroTornado::~MomotaroTornado() */

void __thiscall MomotaroTornado::~MomotaroTornado(MomotaroTornado *this)

{
  ~MomotaroTornado(this + -0x10);
  return;
}


/* MomotaroTornado::~MomotaroTornado() */

void __thiscall MomotaroTornado::~MomotaroTornado(MomotaroTornado *this)

{
  ~MomotaroTornado(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to MomotaroTornado::~MomotaroTornado() */

void __thiscall MomotaroTornado::~MomotaroTornado(MomotaroTornado *this)

{
  ~MomotaroTornado(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MomotaroTornado::GetDrawOffet() */

void MomotaroTornado::GetDrawOffet(void)

{
  int iVar1;
  int iVar2;
  FastCurve local_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04a2bfe4(0x76);
  iVar2 = FUN_04a2bfe4(0x73);
  Sexy::FastCurve::SetOutRange(local_10,(float)-iVar1,(float)-iVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10._0_4_,local_10._4_4_);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MomotaroTornado::StaticClassInit() */

void MomotaroTornado::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"MomotaroTornado");
    (*pcVar2)(plVar1,asStack_10,FUN_04a2c1a8,0xd0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MomotaroTornado::StaticGetClass() */

long * MomotaroTornado::StaticGetClass(void)

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
  uVar2 = SkatingGuacodile::StaticGetClass();
  (*pcVar3)(plVar1,"MomotaroTornado",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MomotaroTornado::GetClass() const */

long * MomotaroTornado::GetClass(void)

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
  uVar2 = SkatingGuacodile::StaticGetClass();
  (*pcVar3)(plVar1,"MomotaroTornado",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MomotaroTornado::MomotaroTornado() */

void __thiscall MomotaroTornado::MomotaroTornado(MomotaroTornado *this)

{
  SkatingGuacodile::SkatingGuacodile((SkatingGuacodile *)this);
  *(undefined ***)this = &PTR_GetClass_06930ac0;
  *(undefined ***)(this + 0x10) = &PTR__MomotaroTornado_06930cd8;
  return;
}


/* MomotaroTornado::StaticNew() */

MomotaroTornado * MomotaroTornado::StaticNew(void)

{
  MomotaroTornado *this;
  
  this = ::operator_new(0xd0);
  MomotaroTornado(this);
  return this;
}

