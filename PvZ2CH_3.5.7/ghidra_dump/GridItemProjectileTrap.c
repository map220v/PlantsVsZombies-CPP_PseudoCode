// Class: GridItemProjectileTrap


/* GridItemProjectileTrap::~GridItemProjectileTrap() */

void __thiscall GridItemProjectileTrap::~GridItemProjectileTrap(GridItemProjectileTrap *this)

{
  *(undefined ***)this = &PTR_GetClass_06788a10;
  *(undefined ***)(this + 0x10) = &PTR__GridItemProjectileTrap_06788cf0;
  GridItemTriggerTile::~GridItemTriggerTile((GridItemTriggerTile *)this);
  return;
}


/* non-virtual thunk to GridItemProjectileTrap::~GridItemProjectileTrap() */

void __thiscall GridItemProjectileTrap::~GridItemProjectileTrap(GridItemProjectileTrap *this)

{
  ~GridItemProjectileTrap(this + -0x10);
  return;
}


/* GridItemProjectileTrap::~GridItemProjectileTrap() */

void __thiscall GridItemProjectileTrap::~GridItemProjectileTrap(GridItemProjectileTrap *this)

{
  ~GridItemProjectileTrap(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemProjectileTrap::~GridItemProjectileTrap() */

void __thiscall GridItemProjectileTrap::~GridItemProjectileTrap(GridItemProjectileTrap *this)

{
  ~GridItemProjectileTrap(this + -0x10);
  return;
}


/* GridItemProjectileTrap::GridItemProjectileTrap() */

void __thiscall GridItemProjectileTrap::GridItemProjectileTrap(GridItemProjectileTrap *this)

{
  GridItemTriggerTile::GridItemTriggerTile((GridItemTriggerTile *)this);
  *(undefined4 *)(this + 0x1ac) = 1;
  *(undefined ***)this = &PTR_GetClass_06788a10;
  *(undefined ***)(this + 0x10) = &PTR__GridItemProjectileTrap_06788cf0;
  return;
}


/* GridItemProjectileTrap::StaticNew() */

GridItemProjectileTrap * GridItemProjectileTrap::StaticNew(void)

{
  GridItemProjectileTrap *this;
  
  this = ::operator_new(0x1b0);
  GridItemProjectileTrap(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemProjectileTrap::StaticClassInit() */

void GridItemProjectileTrap::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemProjectileTrap");
    (*pcVar2)(plVar1,asStack_10,FUN_03e2ead8,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemProjectileTrap::StaticGetClass() */

long * GridItemProjectileTrap::StaticGetClass(void)

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
  uVar2 = GridItemTriggerTile::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemProjectileTrap",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemProjectileTrap::GetClass() const */

long * GridItemProjectileTrap::GetClass(void)

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
  uVar2 = GridItemTriggerTile::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemProjectileTrap",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemProjectileTrap::onUpdate() */

void __thiscall GridItemProjectileTrap::onUpdate(GridItemProjectileTrap *this)

{
  char cVar1;
  RtObject *this_00;
  EffectAnimRig_SwitchTile *this_01;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x1ac) == 1) {
    GridItemTriggerTile::onUpdate((GridItemTriggerTile *)this);
  }
  else if ((*(int *)(this + 0x1ac) == 2) &&
          (cVar1 = GridItemTriggerTile::isTimeForNextTrigger((GridItemTriggerTile *)this),
          cVar1 != '\0')) {
    GridItemAnimation::GetAnimRig();
    this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    this_01 = Sexy::RtObject::Cast<EffectAnimRig_SwitchTile>(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    EffectAnimRig_SwitchTile::PlaySwitchUp(this_01);
    std::string::string((string *)aRStack_10,"Play_LostCity_Trap_TriggerPlate");
    RealObject::PlayPositionalSound((RealObject *)this,(string *)aRStack_10,0.0);
    std::string::~string((string *)aRStack_10);
    nop();
    *(undefined4 *)(this + 0x1ac) = 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemProjectileTrap::onGridItemInitialize() */

void __thiscall GridItemProjectileTrap::onGridItemInitialize(GridItemProjectileTrap *this)

{
  long lVar1;
  GridItemProjectileTrapProps *pGVar2;
  RtObject *this_00;
  EffectAnimRig_SwitchTile *this_01;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemRadiationPile::onGridItemInitialize((GridItemRadiationPile *)this);
  pGVar2 = GridItem::GetProps<GridItemProjectileTrapProps>();
  FUN_03e2e728(this + 0x24,3);
  GridItemAnimation::GetAnimRig();
  this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  this_01 = Sexy::RtObject::Cast<EffectAnimRig_SwitchTile>(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  EffectAnimRig_SwitchTile::SetBaseAnimName(this_01,(string *)(pGVar2 + 0x120));
  EffectAnimRig_SwitchTile::PlaySwitchUp(this_01);
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x1ac) = 1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemProjectileTrap::getPositioningFlags() const */

void GridItemProjectileTrap::getPositioningFlags(void)

{
  bool bVar1;
  GridItemProjectileTrapProps *pGVar2;
  undefined4 *puVar3;
  undefined4 local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar2 = GridItem::GetProps<GridItemProjectileTrapProps>();
  local_1c = 0;
  local_18 = FUN_03e2ee0c(*(undefined8 *)(pGVar2 + 0x100));
  local_10 = FUN_03e2ee5c(*(undefined8 *)(pGVar2 + 0x108));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar3 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    operator|=(&local_1c,*puVar3);
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_1c);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemProjectileTrap::handleTargetCollisions(std::vector<BoardEntity*,
   std::allocator<BoardEntity*> > const&) */

void GridItemProjectileTrap::handleTargetCollisions(vector *param_1)

{
  undefined4 uVar1;
  int iVar2;
  GridItemProjectileTrapProps *pGVar3;
  float *pfVar4;
  long lVar5;
  RtObject *this;
  EffectAnimRig_SwitchTile *this_00;
  undefined8 uVar6;
  float fVar7;
  Board *pBVar9;
  float fVar8;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar3 = GridItem::GetProps<GridItemProjectileTrapProps>();
  uVar1 = getPositioningFlags();
  pfVar4 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
                    /* WARNING: Load size is inaccurate */
  pBVar9._0_4_ = *(Board **)(pGVar3 + 0x128);
  fVar7 = *pfVar4;
  fVar8 = pfVar4[1];
  iVar2 = operator&(uVar1,1);
  if (iVar2 != 0) {
    pBVar9._0_4_ = (Board *)((float)pBVar9._0_4_ + fVar7);
  }
  fVar7 = *(float *)(pGVar3 + 300);
  iVar2 = operator&(uVar1,2);
  if (iVar2 != 0) {
    fVar7 = fVar7 + fVar8;
  }
  uVar1 = *(undefined4 *)(pGVar3 + 0x130);
  uVar6 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(pGVar3 + 0x118));
  lVar5 = Board::AddProjectile(pBVar9._0_4_,fVar7,uVar1,uVar6,aRStack_10,param_1,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  uVar1 = FUN_03e2e724(*(undefined4 *)(param_1 + 0x24));
  FUN_03e2e728(lVar5 + 0x24,uVar1);
  GridItemAnimation::GetAnimRig();
  this = (RtObject *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  this_00 = Sexy::RtObject::Cast<EffectAnimRig_SwitchTile>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  EffectAnimRig_SwitchTile::PlaySwitchDown(this_00);
  std::string::string((string *)aRStack_10,"Play_LostCity_Trap_TriggerPlate");
  RealObject::PlayPositionalSound((RealObject *)param_1,(string *)aRStack_10,0.0);
  std::string::~string((string *)aRStack_10);
  nop();
  *(undefined4 *)(param_1 + 0x1ac) = 2;
  GridItemTriggerTile::resetTriggerTime((GridItemTriggerTile *)param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

