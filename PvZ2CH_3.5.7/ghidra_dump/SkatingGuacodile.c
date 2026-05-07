// Class: SkatingGuacodile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkatingGuacodile::GetPam() */

void __thiscall SkatingGuacodile::GetPam(SkatingGuacodile *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"POPANIM_RIVERCROSSING_RIVERCROSSING_SKATINGGUACODILE");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* SkatingGuacodile::~SkatingGuacodile() */

void __thiscall SkatingGuacodile::~SkatingGuacodile(SkatingGuacodile *this)

{
  *(undefined ***)this = &PTR_GetClass_0692e950;
  *(undefined ***)(this + 0x10) = &PTR__SkatingGuacodile_0692eb68;
  RiverEntity::~RiverEntity((RiverEntity *)this);
  return;
}


/* non-virtual thunk to SkatingGuacodile::~SkatingGuacodile() */

void __thiscall SkatingGuacodile::~SkatingGuacodile(SkatingGuacodile *this)

{
  ~SkatingGuacodile(this + -0x10);
  return;
}


/* SkatingGuacodile::~SkatingGuacodile() */

void __thiscall SkatingGuacodile::~SkatingGuacodile(SkatingGuacodile *this)

{
  ~SkatingGuacodile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to SkatingGuacodile::~SkatingGuacodile() */

void __thiscall SkatingGuacodile::~SkatingGuacodile(SkatingGuacodile *this)

{
  ~SkatingGuacodile(this + -0x10);
  return;
}


/* SkatingGuacodile::CalcRenderOrder() const */

void __thiscall SkatingGuacodile::CalcRenderOrder(SkatingGuacodile *this)

{
  long lVar1;
  
  lVar1 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)this);
  Board::MakeRenderOrder(0x64d48,0,(int)*(float *)(lVar1 + 4));
  return;
}


/* non-virtual thunk to SkatingGuacodile::CalcRenderOrder() const */

void __thiscall SkatingGuacodile::CalcRenderOrder(SkatingGuacodile *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkatingGuacodile::StaticClassInit() */

void SkatingGuacodile::StaticClassInit(void)

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
    std::string::string(asStack_10,"SkatingGuacodile");
    (*pcVar2)(plVar1,asStack_10,FUN_04a17348,0xd0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SkatingGuacodile::StaticGetClass() */

long * SkatingGuacodile::StaticGetClass(void)

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
  uVar2 = RiverEntity::StaticGetClass();
  (*pcVar3)(plVar1,"SkatingGuacodile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SkatingGuacodile::GetClass() const */

long * SkatingGuacodile::GetClass(void)

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
  uVar2 = RiverEntity::StaticGetClass();
  (*pcVar3)(plVar1,"SkatingGuacodile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SkatingGuacodile::SkatingGuacodile() */

void __thiscall SkatingGuacodile::SkatingGuacodile(SkatingGuacodile *this)

{
  RiverEntity::RiverEntity((RiverEntity *)this);
  *(undefined ***)this = &PTR_GetClass_0692e950;
  *(undefined ***)(this + 0x10) = &PTR__SkatingGuacodile_0692eb68;
  return;
}


/* SkatingGuacodile::StaticNew() */

SkatingGuacodile * SkatingGuacodile::StaticNew(void)

{
  SkatingGuacodile *this;
  
  this = ::operator_new(0xd0);
  SkatingGuacodile(this);
  return this;
}


/* SkatingGuacodile::GetAttackRect() */

void SkatingGuacodile::GetAttackRect(void)

{
  int iVar1;
  int iVar2;
  long in_x0;
  Insets *in_x8;
  float fVar3;
  float fVar4;
  
  if (((DAT_06b788c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b788c0), iVar2 != 0)) {
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    DAT_06b788b8 = iVar2 / 2 + -5;
    __cxa_guard_release(&DAT_06b788c0);
  }
  if (((DAT_06b788b0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b788b0), iVar2 != 0)) {
    iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
    DAT_06b78850 = iVar2 / 2 + -6;
    __cxa_guard_release(&DAT_06b788b0);
  }
  if (((DAT_06b78880 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b78880), iVar2 != 0)) {
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    DAT_06b78878 = iVar2 + -10;
    __cxa_guard_release(&DAT_06b78880);
  }
  iVar2 = DAT_06b78838;
  if (((DAT_06b78840 & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&DAT_06b78840), iVar2 = DAT_06b78838, iVar1 != 0)) {
    iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
    DAT_06b78838 = iVar2 + -0xc;
    __cxa_guard_release(&DAT_06b78840);
    iVar2 = iVar2 + -0xc;
  }
  fVar4 = *(float *)(in_x0 + 0x1c);
  fVar3 = (float)FUN_04a17188(*(undefined4 *)(in_x0 + 0x18),fVar4,*(undefined4 *)(in_x0 + 0x20));
  Sexy::Insets::Insets
            (in_x8,(int)(fVar3 - (float)DAT_06b788b8),(int)(fVar4 - (float)DAT_06b78850),
             DAT_06b78878,iVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkatingGuacodile::SkatingGuacodileInitialize() */

void __thiscall SkatingGuacodile::SkatingGuacodileInitialize(SkatingGuacodile *this)

{
  ResourceInfo *pRVar1;
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x200))(asStack_10);
  GetPAMByName(asStack_10);
  std::string::~string(asStack_10);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  FloatingIce::initializePAM((FloatingIce *)this,(PopAnim *)pRVar1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

