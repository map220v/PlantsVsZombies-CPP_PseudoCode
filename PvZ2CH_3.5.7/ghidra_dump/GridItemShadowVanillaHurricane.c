// Class: GridItemShadowVanillaHurricane


/* GridItemShadowVanillaHurricane::~GridItemShadowVanillaHurricane() */

void __thiscall
GridItemShadowVanillaHurricane::~GridItemShadowVanillaHurricane
          (GridItemShadowVanillaHurricane *this)

{
  *(undefined ***)this = &PTR_GetClass_069a16c0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemShadowVanillaHurricane_069a1978;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemShadowVanillaHurricane::~GridItemShadowVanillaHurricane() */

void __thiscall
GridItemShadowVanillaHurricane::~GridItemShadowVanillaHurricane
          (GridItemShadowVanillaHurricane *this)

{
  ~GridItemShadowVanillaHurricane(this + -0x10);
  return;
}


/* GridItemShadowVanillaHurricane::~GridItemShadowVanillaHurricane() */

void __thiscall
GridItemShadowVanillaHurricane::~GridItemShadowVanillaHurricane
          (GridItemShadowVanillaHurricane *this)

{
  ~GridItemShadowVanillaHurricane(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemShadowVanillaHurricane::~GridItemShadowVanillaHurricane() */

void __thiscall
GridItemShadowVanillaHurricane::~GridItemShadowVanillaHurricane
          (GridItemShadowVanillaHurricane *this)

{
  ~GridItemShadowVanillaHurricane(this + -0x10);
  return;
}


/* GridItemShadowVanillaHurricane::CalcRenderOrder() const */

void __thiscall
GridItemShadowVanillaHurricane::CalcRenderOrder(GridItemShadowVanillaHurricane *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_04cde2d0(*(undefined4 *)(this + 0x134));
  uVar2 = FUN_04cde2cc(*(undefined4 *)(this + 0x130));
  Board::MakeRenderOrder(0x64960,uVar1,uVar2);
  return;
}


/* non-virtual thunk to GridItemShadowVanillaHurricane::CalcRenderOrder() const */

void __thiscall
GridItemShadowVanillaHurricane::CalcRenderOrder(GridItemShadowVanillaHurricane *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemShadowVanillaHurricane::StaticClassInit() */

void GridItemShadowVanillaHurricane::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemShadowVanillaHurricane");
    (*pcVar2)(plVar1,asStack_10,FUN_04cdfa70,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemShadowVanillaHurricane::StaticGetClass() */

long * GridItemShadowVanillaHurricane::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemShadowVanillaHurricane",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemShadowVanillaHurricane::GetClass() const */

long * GridItemShadowVanillaHurricane::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemShadowVanillaHurricane",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemShadowVanillaHurricane::GridItemShadowVanillaHurricane() */

void __thiscall
GridItemShadowVanillaHurricane::GridItemShadowVanillaHurricane(GridItemShadowVanillaHurricane *this)

{
  undefined4 uVar1;
  
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined ***)this = &PTR_GetClass_069a16c0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemShadowVanillaHurricane_069a1978;
  *(undefined4 *)(this + 0x1b0) = 0;
  uVar1 = PVZ_EOT();
  this[0x1b4] = (GridItemShadowVanillaHurricane)0x0;
  *(undefined4 *)(this + 0x1a8) = uVar1;
  return;
}


/* GridItemShadowVanillaHurricane::StaticNew() */

GridItemShadowVanillaHurricane * GridItemShadowVanillaHurricane::StaticNew(void)

{
  GridItemShadowVanillaHurricane *this;
  
  this = ::operator_new(0x1b8);
  GridItemShadowVanillaHurricane(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemShadowVanillaHurricane::InitParams(int, float, bool) */

void __thiscall
GridItemShadowVanillaHurricane::InitParams
          (GridItemShadowVanillaHurricane *this,int param_1,float param_2,bool param_3)

{
  PopAnimRig *pPVar1;
  undefined4 uVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  *(int *)(this + 0x1ac) = param_1;
  *(float *)(this + 0x1b0) = param_2;
  local_8 = ___stack_chk_guard;
  uVar2 = PVZ_T();
  this[0x1b4] = (GridItemShadowVanillaHurricane)param_3;
  *(undefined4 *)(this + 0x1a8) = uVar2;
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  GridItemAnimation::GetAnimRig();
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
  std::string::string(asStack_40,"plantfood");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemShadowVanillaHurricane::DamageEntity() */

void __thiscall GridItemShadowVanillaHurricane::DamageEntity(GridItemShadowVanillaHurricane *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  uVar1 = operator|(2,4);
  uVar2 = FUN_04cde2cc(*(undefined4 *)(this + 0x130));
  uVar3 = FUN_04cde2d0(*(undefined4 *)(this + 0x134));
  EntityFinder::GetEntitiesAtGridSquare
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,uVar1,uVar2,
             uVar3);
  lVar4 = FUN_04cde368(local_20,local_18);
  if (lVar4 != 0) {
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_20);
    uVar6 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_20);
    FUN_04ce3964(uVar5,uVar6,this);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemShadowVanillaHurricane::onUpdate() */

void __thiscall GridItemShadowVanillaHurricane::onUpdate(GridItemShadowVanillaHurricane *this)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  RtObject *this_00;
  Board *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = TimeUtil::CheckTimeEclapse(*(float *)(this + 0x1b0),*(float *)(this + 0x1a8));
  if ((cVar1 != '\0') &&
     (GridItem::KillGridItem((GridItem *)this), this[0x1b4] != (GridItemShadowVanillaHurricane)0x0))
  {
    uVar2 = FUN_04cde2cc(*(undefined4 *)(this + 0x130));
    uVar3 = FUN_04cde2d0(*(undefined4 *)(this + 0x134));
    lVar6 = FUN_04ce3220(uVar2,uVar3);
    if (lVar6 == 0) {
      this_01 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string(asStack_10,"shadowvanilla_shadowenergy");
      iVar4 = FUN_04cde2cc(*(undefined4 *)(this + 0x130));
      iVar5 = FUN_04cde2d0(*(undefined4 *)(this + 0x134));
      this_00 = (RtObject *)Board::AddGridItem(this_01,asStack_10,iVar4,iVar5,1);
      Sexy::RtObject::Cast<GridItemShadowVanillaShadowEnergy>(this_00);
      std::string::~string(asStack_10);
      nop();
    }
  }
  DamageEntity(this);
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

