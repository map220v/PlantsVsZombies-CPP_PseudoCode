// Class: GridItemScoreTile


/* GridItemScoreTile::~GridItemScoreTile() */

void __thiscall GridItemScoreTile::~GridItemScoreTile(GridItemScoreTile *this)

{
  *(undefined ***)this = &PTR_GetClass_066a80f0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemScoreTile_066a83a8;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemScoreTile::~GridItemScoreTile() */

void __thiscall GridItemScoreTile::~GridItemScoreTile(GridItemScoreTile *this)

{
  ~GridItemScoreTile(this + -0x10);
  return;
}


/* GridItemScoreTile::~GridItemScoreTile() */

void __thiscall GridItemScoreTile::~GridItemScoreTile(GridItemScoreTile *this)

{
  ~GridItemScoreTile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemScoreTile::~GridItemScoreTile() */

void __thiscall GridItemScoreTile::~GridItemScoreTile(GridItemScoreTile *this)

{
  ~GridItemScoreTile(this + -0x10);
  return;
}


/* GridItemScoreTile::CalcRenderOrder() const */

void __thiscall GridItemScoreTile::CalcRenderOrder(GridItemScoreTile *this)

{
  undefined4 uVar1;
  
  uVar1 = FUN_038558f8(*(undefined4 *)(this + 0x134));
  Board::MakeRenderOrder(0x61a81,uVar1,0);
  return;
}


/* non-virtual thunk to GridItemScoreTile::CalcRenderOrder() const */

void __thiscall GridItemScoreTile::CalcRenderOrder(GridItemScoreTile *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* GridItemScoreTile::GridItemScoreTile() */

void __thiscall GridItemScoreTile::GridItemScoreTile(GridItemScoreTile *this)

{
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_066a80f0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemScoreTile_066a83a8;
  return;
}


/* GridItemScoreTile::StaticNew() */

GridItemScoreTile * GridItemScoreTile::StaticNew(void)

{
  GridItemScoreTile *this;
  
  this = ::operator_new(0x1a8);
  GridItemScoreTile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemScoreTile::StaticClassInit() */

void GridItemScoreTile::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemScoreTile");
    (*pcVar2)(plVar1,asStack_10,FUN_03855d5c,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemScoreTile::StaticGetClass() */

long * GridItemScoreTile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemScoreTile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemScoreTile::GetClass() const */

long * GridItemScoreTile::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemScoreTile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemScoreTile::GetBonusModifier() */

undefined4 GridItemScoreTile::GetBonusModifier(void)

{
  GridItemScoreTileProps *pGVar1;
  
  pGVar1 = GridItem::GetProps<GridItemScoreTileProps>();
  return *(undefined4 *)(pGVar1 + 0xd0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemScoreTile::ShowBonusEffect() */

void GridItemScoreTile::ShowBonusEffect(void)

{
  string *psVar1;
  Board *pBVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<EffectObjectType>>::GetInstancePtr();
  std::string::string((string *)&local_10,"SolarTomatoAOEExplosion");
  ObjectTypeDirectory<EffectObjectType>::GetTypeFromTypeName(psVar1);
  std::string::~string((string *)&local_10);
  nop();
  BoardEntity::CalcGridPosition();
  BoardEntity::CalcGridPosition();
  pBVar2 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)aRStack_18);
  Board::AddEffectObject(pBVar2,(string *)&local_10,local_10,local_c);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemScoreTile::onGridItemInitialize() */

void __thiscall GridItemScoreTile::onGridItemInitialize(GridItemScoreTile *this)

{
  GridItemAnimationProps *pGVar1;
  long lVar2;
  
  GridItemAnimation::onGridItemInitialize((GridItemAnimation *)this);
  pGVar1 = GridItem::GetProps<GridItemAnimationProps>();
  lVar2 = FUN_05474184(pGVar1 + 0x98);
  if (lVar2 == 0) {
    return;
  }
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  return;
}

