// Class: GridItemBesiegeGuide


/* GridItemBesiegeGuide::~GridItemBesiegeGuide() */

void __thiscall GridItemBesiegeGuide::~GridItemBesiegeGuide(GridItemBesiegeGuide *this)

{
  *(undefined ***)this = &PTR_GetClass_068d8ed0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemBesiegeGuide_068d9188;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemBesiegeGuide::~GridItemBesiegeGuide() */

void __thiscall GridItemBesiegeGuide::~GridItemBesiegeGuide(GridItemBesiegeGuide *this)

{
  ~GridItemBesiegeGuide(this + -0x10);
  return;
}


/* GridItemBesiegeGuide::~GridItemBesiegeGuide() */

void __thiscall GridItemBesiegeGuide::~GridItemBesiegeGuide(GridItemBesiegeGuide *this)

{
  ~GridItemBesiegeGuide(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemBesiegeGuide::~GridItemBesiegeGuide() */

void __thiscall GridItemBesiegeGuide::~GridItemBesiegeGuide(GridItemBesiegeGuide *this)

{
  ~GridItemBesiegeGuide(this + -0x10);
  return;
}


/* GridItemBesiegeGuide::CalcRenderOrder() const */

void __thiscall GridItemBesiegeGuide::CalcRenderOrder(GridItemBesiegeGuide *this)

{
  int iVar1;
  
  iVar1 = FUN_0478aa84(*(undefined4 *)(this + 0x134));
  Board::MakeGroundRenderOrder(iVar1,2);
  return;
}


/* non-virtual thunk to GridItemBesiegeGuide::CalcRenderOrder() const */

void __thiscall GridItemBesiegeGuide::CalcRenderOrder(GridItemBesiegeGuide *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* GridItemBesiegeGuide::GridItemBesiegeGuide() */

void __thiscall GridItemBesiegeGuide::GridItemBesiegeGuide(GridItemBesiegeGuide *this)

{
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_068d8ed0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemBesiegeGuide_068d9188;
  return;
}


/* GridItemBesiegeGuide::StaticNew() */

GridItemBesiegeGuide * GridItemBesiegeGuide::StaticNew(void)

{
  GridItemBesiegeGuide *this;
  
  this = ::operator_new(0x1a8);
  GridItemBesiegeGuide(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBesiegeGuide::StaticClassInit() */

void GridItemBesiegeGuide::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemBesiegeGuide");
    (*pcVar2)(plVar1,asStack_10,FUN_0478b9ac,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemBesiegeGuide::StaticGetClass() */

long * GridItemBesiegeGuide::StaticGetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemBesiegeGuide",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemBesiegeGuide::GetClass() const */

long * GridItemBesiegeGuide::GetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemBesiegeGuide",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBesiegeGuide::SetIsStartPoint(bool) */

void __thiscall GridItemBesiegeGuide::SetIsStartPoint(GridItemBesiegeGuide *this,bool param_1)

{
  RtObject *this_00;
  GridItemAnimRig_BesiegeGuide *this_01;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
    GridItemAnimation::GetAnimRig();
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    this_01 = Sexy::RtObject::Cast<GridItemAnimRig_BesiegeGuide>(this_00);
    GridItemAnimRig_BesiegeGuide::PlayIdle(this_01);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  }
  else {
    std::string::string(asStack_18,"POPANIM_BESIEGE_BESIEGE_ARROW");
    std::string::string(asStack_10,"GridItemAnimRig_BesiegeGuide");
    GridItemAnimation::setAnimRig((GridItemAnimation *)this,asStack_18,asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBesiegeGuide::PlayArrow(ArrowDir) */

void __thiscall GridItemBesiegeGuide::PlayArrow(undefined8 param_1,undefined8 param_2)

{
  RtObject *this;
  GridItemAnimRig_BesiegeGuide *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GetAnimRig();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar1 = Sexy::RtObject::Cast<GridItemAnimRig_BesiegeGuide>(this);
  GridItemAnimRig_BesiegeGuide::PlayArrow(pGVar1,param_2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

