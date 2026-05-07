// Class: MomotaroLargeTornado


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MomotaroLargeTornado::GetPam() */

void __thiscall MomotaroLargeTornado::GetPam(MomotaroLargeTornado *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"POPANIM_EFFECTS_HEIAN_TORNADO");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* MomotaroLargeTornado::~MomotaroLargeTornado() */

void __thiscall MomotaroLargeTornado::~MomotaroLargeTornado(MomotaroLargeTornado *this)

{
  *(undefined ***)this = &PTR_GetClass_06930d10;
  *(undefined ***)(this + 0x10) = &PTR__MomotaroLargeTornado_06930f28;
  MomotaroTornado::~MomotaroTornado((MomotaroTornado *)this);
  return;
}


/* non-virtual thunk to MomotaroLargeTornado::~MomotaroLargeTornado() */

void __thiscall MomotaroLargeTornado::~MomotaroLargeTornado(MomotaroLargeTornado *this)

{
  ~MomotaroLargeTornado(this + -0x10);
  return;
}


/* MomotaroLargeTornado::~MomotaroLargeTornado() */

void __thiscall MomotaroLargeTornado::~MomotaroLargeTornado(MomotaroLargeTornado *this)

{
  ~MomotaroLargeTornado(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to MomotaroLargeTornado::~MomotaroLargeTornado() */

void __thiscall MomotaroLargeTornado::~MomotaroLargeTornado(MomotaroLargeTornado *this)

{
  ~MomotaroLargeTornado(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MomotaroLargeTornado::StaticClassInit() */

void MomotaroLargeTornado::StaticClassInit(void)

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
    std::string::string(asStack_10,"MomotaroLargeTornado");
    (*pcVar2)(plVar1,asStack_10,FUN_04a2c420,0xd0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MomotaroLargeTornado::StaticGetClass() */

long * MomotaroLargeTornado::StaticGetClass(void)

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
  uVar2 = MomotaroTornado::StaticGetClass();
  (*pcVar3)(plVar1,"MomotaroLargeTornado",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MomotaroLargeTornado::GetClass() const */

long * MomotaroLargeTornado::GetClass(void)

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
  uVar2 = MomotaroTornado::StaticGetClass();
  (*pcVar3)(plVar1,"MomotaroLargeTornado",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MomotaroLargeTornado::MomotaroLargeTornado() */

void __thiscall MomotaroLargeTornado::MomotaroLargeTornado(MomotaroLargeTornado *this)

{
  MomotaroTornado::MomotaroTornado((MomotaroTornado *)this);
  *(undefined ***)this = &PTR_GetClass_06930d10;
  *(undefined ***)(this + 0x10) = &PTR__MomotaroLargeTornado_06930f28;
  return;
}


/* MomotaroLargeTornado::StaticNew() */

MomotaroLargeTornado * MomotaroLargeTornado::StaticNew(void)

{
  MomotaroLargeTornado *this;
  
  this = ::operator_new(0xd0);
  MomotaroLargeTornado(this);
  return this;
}


/* MomotaroLargeTornado::GetAttackRect() */

void MomotaroLargeTornado::GetAttackRect(void)

{
  int iVar1;
  int iVar2;
  long in_x0;
  Insets *in_x8;
  float fVar3;
  float fVar4;
  
  if (((DAT_06b79068 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b79068), iVar2 != 0)) {
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    DAT_06b790bc = iVar2 / 2 + -5;
    __cxa_guard_release(&DAT_06b79068);
  }
  if (((DAT_06b79070 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b79070), iVar2 != 0)) {
    iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
    iVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
    DAT_06b79040 = iVar2 / 2 + -6 + iVar1 / 2;
    __cxa_guard_release(&DAT_06b79070);
  }
  if (((DAT_06b79048 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b79048), iVar2 != 0)) {
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    DAT_06b790b8 = iVar2 + -10;
    __cxa_guard_release(&DAT_06b79048);
  }
  iVar2 = DAT_06b79044;
  if (((DAT_06b79050 & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&DAT_06b79050), iVar2 = DAT_06b79044, iVar1 != 0)) {
    iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
    iVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
    iVar2 = iVar2 + -0xc + iVar1 / 2;
    DAT_06b79044 = iVar2;
    __cxa_guard_release(&DAT_06b79050);
  }
  fVar4 = *(float *)(in_x0 + 0x1c);
  fVar3 = (float)FUN_04a2bf88(*(undefined4 *)(in_x0 + 0x18),fVar4,*(undefined4 *)(in_x0 + 0x20));
  Sexy::Insets::Insets
            (in_x8,(int)(fVar3 - (float)DAT_06b790bc),(int)(fVar4 - (float)DAT_06b79040),
             DAT_06b790b8,iVar2);
  return;
}

