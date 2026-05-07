// Class: GridItemEgg


/* GridItemEgg::getState() */

undefined4 __thiscall GridItemEgg::getState(GridItemEgg *this)

{
  return *(undefined4 *)(this + 0x1e8);
}


/* GridItemEgg::CollidesWithType(CollisionTypeFlags) const */

byte GridItemEgg::CollidesWithType(long param_1)

{
  return *(byte *)(param_1 + 0x214) ^ 1;
}


/* GridItemEgg::onBreakAnimDone(std::string const&) */

void GridItemEgg::onBreakAnimDone(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x2c0))();
  (**(code **)(*(long *)param_1 + 0x230))(param_1);
  return;
}


/* GridItemEgg::onTurnToAshAnimDone(std::string const&) */

void GridItemEgg::onTurnToAshAnimDone(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x230))();
  return;
}


/* GridItemEgg::IsControlled() const */

ulong __thiscall GridItemEgg::IsControlled(GridItemEgg *this)

{
  undefined4 uVar1;
  byte bVar2;
  ulong uVar3;
  
  uVar3 = (ulong)(byte)this[0x214];
  if (this[0x214] == (GridItemEgg)0x0) {
    uVar1 = *(undefined4 *)(this + 0x1e8);
    bVar2 = FUN_03e3b31c(uVar1,1);
    uVar3 = (ulong)bVar2;
    if (bVar2 == 0) {
      bVar2 = FUN_03e3b31c(uVar1,2);
      uVar3 = (ulong)bVar2;
      if (bVar2 == 0) {
        uVar3 = GridItemBoardEntityConditionTarget::IsControlled
                          ((GridItemBoardEntityConditionTarget *)this);
        return uVar3;
      }
    }
  }
  return uVar3;
}


/* GridItemEgg::IsDamageable() const */

byte __thiscall GridItemEgg::IsDamageable(GridItemEgg *this)

{
  undefined4 uVar1;
  char cVar2;
  byte bVar3;
  
  uVar1 = *(undefined4 *)(this + 0x1e8);
  cVar2 = FUN_03e3b31c(uVar1,1);
  bVar3 = 0;
  if (cVar2 == '\0') {
    bVar3 = FUN_03e3b31c(uVar1,2);
    bVar3 = bVar3 ^ 1;
  }
  return bVar3;
}


/* GridItemEgg::CanBeTargetedBy(BoardEntity const*) const */

byte GridItemEgg::CanBeTargetedBy(BoardEntity *param_1)

{
  undefined4 uVar1;
  char cVar2;
  byte bVar3;
  
  if (param_1[0x214] != (BoardEntity)0x0) {
    return 0;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x1e8);
  cVar2 = FUN_03e3b31c(uVar1,1);
  if (cVar2 != '\0') {
    return 0;
  }
  bVar3 = FUN_03e3b31c(uVar1,2);
  return bVar3 ^ 1;
}


/* GridItemEgg::onGameplayEnded() */

void __thiscall GridItemEgg::onGameplayEnded(GridItemEgg *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x21c) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemEgg::StaticClassInit() */

void GridItemEgg::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemEgg");
    (*pcVar2)(plVar1,asStack_10,FUN_03e3c830,0x220,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemEgg::StaticGetClass() */

long * GridItemEgg::StaticGetClass(void)

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
  uVar2 = GridItemBoardEntityConditionTarget::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemEgg",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemEgg::GetClass() const */

long * GridItemEgg::GetClass(void)

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
  uVar2 = GridItemBoardEntityConditionTarget::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemEgg",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemEgg::GridItemEgg() */

void __thiscall GridItemEgg::GridItemEgg(GridItemEgg *this)

{
  undefined4 uVar1;
  
  GridItemBoardEntityConditionTarget::GridItemBoardEntityConditionTarget
            ((GridItemBoardEntityConditionTarget *)this);
  *(undefined ***)this = &PTR_GetClass_0678a790;
  *(undefined ***)(this + 0x10) = &PTR__GridItemEgg_0678aaa0;
  DVec3::DVec3((DVec3 *)(this + 0x1f8));
  DVec3::DVec3((DVec3 *)(this + 0x204));
  this[0x214] = (GridItemEgg)0x0;
  *(undefined4 *)(this + 0x1e8) = 0xffffffff;
  *(undefined4 *)(this + 0x218) = 0xffffffff;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x21c) = uVar1;
  return;
}


/* GridItemEgg::StaticNew() */

GridItemEgg * GridItemEgg::StaticNew(void)

{
  GridItemEgg *this;
  
  this = ::operator_new(0x220);
  GridItemEgg(this);
  return this;
}


/* GridItemEgg::GetCantPlantReason() const */

undefined8 GridItemEgg::GetCantPlantReason(void)

{
  return 0x57;
}


/* GridItemEgg::~GridItemEgg() */

void __thiscall GridItemEgg::~GridItemEgg(GridItemEgg *this)

{
  *(undefined ***)this = &PTR_GetClass_0678a790;
  *(undefined ***)(this + 0x10) = &PTR__GridItemEgg_0678aaa0;
  GridItemBoardEntityConditionTarget::~GridItemBoardEntityConditionTarget
            ((GridItemBoardEntityConditionTarget *)this);
  return;
}


/* non-virtual thunk to GridItemEgg::~GridItemEgg() */

void __thiscall GridItemEgg::~GridItemEgg(GridItemEgg *this)

{
  ~GridItemEgg(this + -0x10);
  return;
}


/* GridItemEgg::~GridItemEgg() */

void __thiscall GridItemEgg::~GridItemEgg(GridItemEgg *this)

{
  ~GridItemEgg(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemEgg::~GridItemEgg() */

void __thiscall GridItemEgg::~GridItemEgg(GridItemEgg *this)

{
  ~GridItemEgg(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemEgg::drawEggAnim(Sexy::Graphics*) */

void __thiscall GridItemEgg::drawEggAnim(GridItemEgg *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  PopAnimRig *this_00;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  RtMixedPtrBase aRStack_58 [16];
  int local_48 [2];
  GraphicsAutoState aGStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GetAnimRig();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_58);
  if (cVar1 == '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  }
  else {
    GridItem::GetGridLocation();
    puVar3 = (undefined4 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    fVar4 = (float)FUN_03e3b6d4(*puVar3);
    fVar5 = (float)FUN_03e3b6d4(puVar3[1]);
    fVar11 = *(float *)(param_1 + 0x1c);
    fVar14 = (float)puVar3[2];
    (**(code **)(*(long *)this + 0xd0))(local_48,this);
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    fVar12 = 0.0;
    dVar10 = (double)FUN_03e3b6e4(((double)local_48[0] + -1.0) * 0.5 * (double)iVar2);
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_40,param_1);
    (**(code **)(*(long *)this + 0xf8))(this,param_1);
    fVar6 = (float)(**(code **)(*(long *)this + 0x298))(this);
    fVar13 = fVar12;
    fVar7 = (float)(**(code **)(*(long *)this + 0x2a0))(this);
    fVar16 = *(float *)(param_1 + 0x18);
    fVar15 = *(float *)(param_1 + 0x1c);
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30,true);
    Sexy::SexyTransform2D::Scale(aSStack_30,fVar7 * fVar16,fVar13 * fVar15);
    FUN_03e3b224((float)(int)((double)(int)fVar4 + dVar10),(float)(int)(fVar5 - fVar14 * fVar11),
                 auStack_28,auStack_1c);
    uVar8 = FUN_03e3b6d4(-(fVar7 * fVar16 * fVar6));
    uVar9 = FUN_03e3b6d4(-(fVar13 * fVar15 * fVar12));
    FUN_03e3b224(uVar8,uVar9,auStack_28,auStack_1c);
    GridItemAnimation::GetAnimRig();
    this_00 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
    PopAnimRig::Draw(this_00,param_1,aSStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemEgg::onDraw(Sexy::Graphics*) */

void __thiscall GridItemEgg::onDraw(GridItemEgg *this,Graphics *param_1)

{
  char cVar1;
  
  cVar1 = FUN_03e3b31c(*(undefined4 *)(this + 0x1e8),1);
  if (cVar1 != '\0') {
    return;
  }
  drawEggAnim(this,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemEgg::setState(EggState) */

void __thiscall GridItemEgg::setState(GridItemEgg *this,int param_2)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x1e8) != param_2) {
    *(int *)(this + 0x1e8) = param_2;
    GridItemAnimation::GetAnimRig();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemEgg::IsSwallowedByEntity(BoardEntity*) */

void GridItemEgg::IsSwallowedByEntity(BoardEntity *param_1)

{
  setState((GridItemEgg *)param_1,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemEgg::FlyOutBoard(int) */

void __thiscall GridItemEgg::FlyOutBoard(GridItemEgg *this,int param_1)

{
  int iVar1;
  int local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  setState(this,2);
  iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
  Sexy::Point::Point((Point *)local_10,iVar1 + 1,param_1);
  iVar1 = FUN_03e3b318(*(undefined4 *)(this + 0x130));
  *(undefined4 *)(this + 0x20) = 0x41a00000;
  GridItemBoardEntityConditionTarget::MoveOverTimeTo
            ((GridItemBoardEntityConditionTarget *)this,(Point *)local_10,
             (float)(local_10[0] - iVar1) * _FUN_03e3c728);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemEgg::onRollAnimDone(std::string const&) */

void GridItemEgg::onRollAnimDone(string *param_1)

{
  PopAnimRig *extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GetAnimRig();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  if (extraout_x0 != (PopAnimRig *)0x0) {
    std::string::string((string *)aRStack_40,"waggle");
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    PopAnimRig::PlayAndStop(extraout_x0,aRStack_40,0,aDStack_38);
    std::string::~string((string *)aRStack_40);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemEgg::onPostLoad() */

void __thiscall GridItemEgg::onPostLoad(GridItemEgg *this)

{
  bool bVar1;
  TimeChallengeEndLevelUI *this_00;
  RtWeakPtr aRStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::onPostLoad((BoardEntity *)this);
  GridItemAnimation::GetAnimRig();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_58);
  if (bVar1) {
    this_00 = (TimeChallengeEndLevelUI *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,(_func_void *)0x2f8);
    Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
    Delegate4<GridItemEgg,void(GridItemEgg::*)(std::string_const&,float,std::string_const&,std::string_const&)>
              (aDStack_38,aCStack_50);
    TimeChallengeEndLevelUI::SetContinueCallBack(this_00,aDStack_38);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemEgg::registerForEvents() */

void __thiscall GridItemEgg::registerForEvents(GridItemEgg *this)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::registerForEvents((GridItem *)this);
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayEnded);
  Sexy::Delegate0::Delegate0<GridItemEgg,void(GridItemEgg::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::GameplayEnded,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemEgg::onGridItemInitialize() */

void __thiscall GridItemEgg::onGridItemInitialize(GridItemEgg *this)

{
  GridItemEggProps *pGVar1;
  TimeChallengeEndLevelUI *this_00;
  ResourceInfo *pRVar2;
  GridItemEggAnimRig *this_01;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtWeakPtr aRStack_50 [24];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  pGVar1 = GridItem::GetProps<GridItemEggProps>();
  uVar6 = *(undefined4 *)(pGVar1 + 0x10);
  FUN_03e3b308(uVar6,this + 300);
  FUN_03e3b310(uVar6,this + 0x128);
  setState(this,0);
  FUN_03e3b50c(this + 0x24);
  GridItemAnimation::GetAnimRig();
  this_00 = (TimeChallengeEndLevelUI *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2f8);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
  Delegate4<GridItemEgg,void(GridItemEgg::*)(std::string_const&,float,std::string_const&,std::string_const&)>
            (aDStack_38,aRStack_50);
  TimeChallengeEndLevelUI::SetContinueCallBack(this_00,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  *(undefined4 *)(this + 0x210) = 0;
  pGVar1 = GridItem::GetProps<GridItemEggProps>();
  lVar3 = *(long *)this;
  if (*(code **)(lVar3 + 0x1d8) == GridItem::GetHitpoints) {
    fVar4 = (float)GridItem::GetHitpoints((GridItem *)this);
  }
  else {
    fVar4 = (float)(**(code **)(lVar3 + 0x1d8))();
    lVar3 = *(long *)this;
  }
  if (*(code **)(lVar3 + 0x1e0) == GridItem::GetMaxHitpoints) {
    fVar5 = (float)GridItem::GetMaxHitpoints((GridItem *)this);
  }
  else {
    fVar5 = (float)(**(code **)(lVar3 + 0x1e0))();
  }
  GridItemAnimation::GetAnimRig();
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_50);
  uVar6 = DamageLifetime::OnHealthChanged
                    ((DamageLifetime *)(pGVar1 + 0x110),fVar4,fVar5,(PopAnimRig *)pRVar2,-1);
  *(undefined4 *)(this + 0x218) = uVar6;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  GridItemAnimation::GetAnimRig();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  if (this_01 != (GridItemEggAnimRig *)0x0) {
    GridItemEggAnimRig::SetDamageState(this_01,*(int *)(this + 0x218));
  }
  fVar4 = (float)PVZ_T();
  pGVar1 = GridItem::GetProps<GridItemEggProps>();
  *(float *)(this + 0x21c) = fVar4 + *(float *)(pGVar1 + 0x148);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemEgg::SetLevelHitpoints(int) */

void __thiscall GridItemEgg::SetLevelHitpoints(GridItemEgg *this,int param_1)

{
  undefined4 uVar1;
  GridItemEggProps *pGVar2;
  ResourceInfo *pRVar3;
  GridItemEggAnimRig *this_00;
  long lVar4;
  float fVar5;
  float fVar6;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((float)param_1 <= 0.0) {
    fVar6 = 1.0;
  }
  else {
    fVar6 = ((float)param_1 + -1.0) * 0.5 + 1.0;
  }
  pGVar2 = GridItem::GetProps<GridItemEggProps>();
  fVar5 = *(float *)(pGVar2 + 0x10);
  FUN_03e3b308(fVar6 * fVar5,this + 300);
  FUN_03e3b310(fVar6 * fVar5,this + 0x128);
  pGVar2 = GridItem::GetProps<GridItemEggProps>();
  lVar4 = *(long *)this;
  if (*(code **)(lVar4 + 0x1d8) == GridItem::GetHitpoints) {
    fVar6 = (float)GridItem::GetHitpoints((GridItem *)this);
  }
  else {
    fVar6 = (float)(**(code **)(lVar4 + 0x1d8))();
    lVar4 = *(long *)this;
  }
  if (*(code **)(lVar4 + 0x1e0) == GridItem::GetMaxHitpoints) {
    fVar5 = (float)GridItem::GetMaxHitpoints((GridItem *)this);
  }
  else {
    fVar5 = (float)(**(code **)(lVar4 + 0x1e0))();
  }
  GridItemAnimation::GetAnimRig();
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
  uVar1 = DamageLifetime::OnHealthChanged
                    ((DamageLifetime *)(pGVar2 + 0x110),fVar6,fVar5,(PopAnimRig *)pRVar3,-1);
  *(undefined4 *)(this + 0x218) = uVar1;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  GridItemAnimation::GetAnimRig();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (this_00 != (GridItemEggAnimRig *)0x0) {
    GridItemEggAnimRig::SetDamageState(this_00,*(int *)(this + 0x218));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemEgg::FlyThroughAir(Sexy::SexyVector3, Sexy::SexyVector3) */

void GridItemEgg::FlyThroughAir
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,long param_7)

{
  GridItemEggProps *pGVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  *(undefined4 *)(param_7 + 0x1e8) = 3;
  local_20 = param_4;
  local_1c = param_5;
  local_18 = param_6;
  local_10 = param_1;
  local_c = param_2;
  local_8 = param_3;
  uVar2 = PVZ_T();
  *(undefined4 *)(param_7 + 0x1ec) = uVar2;
  pGVar1 = GridItem::GetProps<GridItemEggProps>();
  *(undefined4 *)(param_7 + 0x1f0) = *(undefined4 *)(pGVar1 + 0x140);
  Sexy::SexyVector3::operator=((SexyVector3 *)(param_7 + 0x1f8),(SexyVector3 *)&local_10);
  Sexy::SexyVector3::operator=((SexyVector3 *)(param_7 + 0x204),(SexyVector3 *)&local_20);
  return;
}


/* GridItemEgg::CanPushMe() */

undefined8 GridItemEgg::CanPushMe(void)

{
  GridItem::GetProps<GridItemEggProps>();
  return 1;
}


/* GridItemEgg::calcCollisionRect() */

void GridItemEgg::calcCollisionRect(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long in_x0;
  GridItemPropertySheet *pGVar4;
  Insets *in_x8;
  float fVar5;
  float fVar6;
  
  fVar6 = *(float *)(in_x0 + 0x1c);
  fVar5 = (float)FUN_03e3b518(*(undefined4 *)(in_x0 + 0x18),fVar6,*(undefined4 *)(in_x0 + 0x20));
  Sexy::Insets::Insets(in_x8,(int)(fVar5 - 21.0),(int)(fVar6 - 75.0),0x3c,0x4c);
  pGVar4 = GridItem::GetProps<GridItemPropertySheet>();
  if (pGVar4 != (GridItemPropertySheet *)0x0) {
    iVar1 = *(int *)(pGVar4 + 0x18);
    iVar2 = *(int *)(pGVar4 + 0x1c);
    iVar3 = *(int *)(pGVar4 + 0x20);
    *(int *)in_x8 = *(int *)in_x8 + *(int *)(pGVar4 + 0x14);
    *(int *)(in_x8 + 8) = *(int *)(in_x8 + 8) + iVar1;
    *(int *)(in_x8 + 4) = *(int *)(in_x8 + 4) + iVar2;
    *(int *)(in_x8 + 0xc) = *(int *)(in_x8 + 0xc) + iVar3;
  }
  return;
}


/* GridItemEgg::onDrawShadow(Sexy::Graphics*) */

void __thiscall GridItemEgg::onDrawShadow(GridItemEgg *this,Graphics *param_1)

{
  char cVar1;
  float *pfVar2;
  Image *pIVar3;
  float fVar4;
  float fVar5;
  
  cVar1 = FUN_03e3b31c(*(undefined4 *)(this + 0x1e8),1);
  if (cVar1 != '\0') {
    return;
  }
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar4 = *pfVar2;
  fVar5 = pfVar2[1];
  pIVar3 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                              ((CachedResourcePtr<Sexy::Image> *)&DAT_06addb08);
  fVar4 = (float)FUN_03e3b6d4((float)(int)fVar4 - 40.0);
  fVar5 = (float)FUN_03e3b6d4((float)(int)fVar5 - 24.0);
  Sexy::Graphics::DrawImage(param_1,pIVar3,(int)fVar4,(int)fVar5);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemEgg::onTakeDamage(DamageInfo const&) */

void __thiscall GridItemEgg::onTakeDamage(GridItemEgg *this,DamageInfo *param_1)

{
  bool bVar1;
  int iVar2;
  GridItemBreakableTargetProps *pGVar3;
  ResourceInfo *pRVar4;
  GridItemEggAnimRig *this_00;
  long lVar5;
  float fVar6;
  float fVar7;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x214] == (GridItemEgg)0x0) {
    pGVar3 = GridItem::GetProps<GridItemBreakableTargetProps>();
    lVar5 = *(long *)this;
    if (*(code **)(lVar5 + 0x1d8) == GridItem::GetHitpoints) {
      fVar6 = (float)GridItem::GetHitpoints((GridItem *)this);
    }
    else {
      fVar6 = (float)(**(code **)(lVar5 + 0x1d8))();
      lVar5 = *(long *)this;
    }
    if (*(code **)(lVar5 + 0x1e0) == GridItem::GetMaxHitpoints) {
      fVar7 = (float)GridItem::GetMaxHitpoints((GridItem *)this);
    }
    else {
      fVar7 = (float)(**(code **)(lVar5 + 0x1e0))();
    }
    GridItemAnimation::GetAnimRig();
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
    iVar2 = DamageLifetime::OnHealthChanged
                      ((DamageLifetime *)(pGVar3 + 0x110),fVar6,fVar7,(PopAnimRig *)pRVar4,
                       *(int *)(this + 0x218));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (*(int *)(this + 0x218) != iVar2) {
      *(int *)(this + 0x218) = iVar2;
      GridItemAnimation::GetAnimRig();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      if (this_00 != (GridItemEggAnimRig *)0x0) {
        GridItemEggAnimRig::SetDamageState(this_00,*(int *)(this + 0x218));
      }
    }
    bVar1 = TestFlag<DamageTypeFlags>(*(undefined8 *)(param_1 + 0x10),0x100);
    if (!bVar1) {
      (**(code **)(*(long *)this + 0x288))(0x3e800000,this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemEgg::MoveOverTimeTo(Sexy::Point const&, float) */

void __thiscall GridItemEgg::MoveOverTimeTo(GridItemEgg *this,Point *param_1,float param_2)

{
  PopAnimRig *this_00;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GetAnimRig();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  if ((this_00 != (PopAnimRig *)0x0) && (this[0x214] == (GridItemEgg)0x0)) {
    std::string::string((string *)aRStack_58,"roll");
    param_2 = (float)PopAnimRig::CalcAnimLengthSeconds(this_00,(string *)aRStack_58);
    std::string::~string((string *)aRStack_58);
    nop();
    std::string::string(asStack_68,"roll");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string((string *)aRStack_58,"onRollAnimDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               aRStack_58);
    PopAnimRig::PlayAndStop(this_00,asStack_68,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string((string *)aRStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_68);
    nop();
  }
  GridItemBoardEntityConditionTarget::MoveOverTimeTo
            ((GridItemBoardEntityConditionTarget *)this,param_1,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemEgg::updateState() */

void __thiscall GridItemEgg::updateState(GridItemEgg *this)

{
  char cVar1;
  int iVar2;
  PopAnimRig *this_00;
  GridItemEggProps *pGVar3;
  float fVar4;
  float fVar5;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = getState(this);
  if (iVar2 == 0) {
    GridItemAnimation::GetAnimRig();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
    if ((this[0x214] == (GridItemEgg)0x0) &&
       (cVar1 = PopAnimRig::IsPlayingAnything(this_00), cVar1 == '\0')) {
      GridItemEggAnimRig::PlayIdle((GridItemEggAnimRig *)this_00);
    }
    fVar4 = (float)PVZ_T();
    if (*(float *)(this + 0x21c) <= fVar4) {
      pGVar3 = GridItem::GetProps<GridItemEggProps>();
      fVar5 = *(float *)(pGVar3 + 0x148);
      pGVar3 = GridItem::GetProps<GridItemEggProps>();
      fVar4 = *(float *)(pGVar3 + 0x144);
      Sexy::Point::Point(aPStack_78,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
      DamageInfo::DamageInfo
                ((DamageInfo *)(fVar5 * fVar4),local_70,local_6c,aRStack_68,0x100,0,aPStack_78,0);
      (**(code **)(*(long *)this + 0x110))(this,aRStack_68);
      fVar4 = (float)PVZ_T();
      *(float *)(this + 0x21c) = fVar4 + fVar5;
      DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
    }
  }
  else if ((iVar2 == 2) && (cVar1 = (**(code **)(*(long *)this + 0x2f0))(this), cVar1 != '\0')) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemEgg::onUpdate() */

void __thiscall GridItemEgg::onUpdate(GridItemEgg *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  Plant *this_00;
  code *pcVar4;
  Board *this_01;
  float fVar5;
  float fVar6;
  float fVar7;
  int local_90;
  int local_8c;
  Point aPStack_88 [8];
  undefined4 local_80;
  undefined4 local_7c;
  float local_78;
  float local_74;
  float local_70;
  Point aPStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x1e8) == 3) {
    fVar7 = *(float *)(this + 0x1ec);
    fVar6 = *(float *)(this + 0x1f0);
    fVar5 = (float)PVZ_T();
    local_74 = fVar7 + fVar6;
    fVar6 = (float)CurveLerp(fVar7,this + 0x1f8,this + 0x204,1);
    local_78 = fVar6;
    local_70 = fVar5;
    iVar1 = BoardTransforms::BoardSpaceToGridXUnbounded(fVar6);
    lVar3 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
    iVar2 = BoardTransforms::BoardSpaceToGridYUnbounded(*(float *)(lVar3 + 4));
    Sexy::Point::Point(aPStack_68,iVar1,iVar2);
    GridItem::SetGridLocationUnbounded((GridItem *)this,aPStack_68,1);
    pcVar4 = *(code **)(*(long *)this + 0x78);
    EATextSquish::Vec3::Vec3((Vec3 *)aPStack_68,fVar6,*(float *)(lVar3 + 4),local_70);
    (*pcVar4)(this,aPStack_68);
    fVar5 = (float)PVZ_T();
    if (*(float *)(this + 0x1f0) + *(float *)(this + 0x1ec) <= fVar5) {
      *(undefined4 *)(this + 0x1e8) = 0;
      BoardEntity::CalcGridPosition();
      this_01 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string((string *)aPStack_68,"");
      this_00 = (Plant *)Board::GetPlantAt(this_01,local_90,local_8c,(string *)aPStack_68);
      std::string::~string((string *)aPStack_68);
      nop();
      if (this_00 != (Plant *)0x0) {
        Plant::SetIsThrownAway(this_00,true);
        pcVar4 = *(code **)(*(long *)this_00 + 0x120);
        Sexy::Point::Point(aPStack_88,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_80,1.0,0.0);
        DamageInfo::DamageInfo((DamageInfo *)0x0,local_80,local_7c,aPStack_68,this,aPStack_88,0);
        (*pcVar4)(this_00,aPStack_68);
        DamageInfo::~DamageInfo((DamageInfo *)aPStack_68);
      }
    }
  }
  else {
    GridItemBoardEntityConditionTarget::onUpdate((GridItemBoardEntityConditionTarget *)this);
    updateState(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemEgg::deathAnimDoneHandler() */

void GridItemEgg::deathAnimDoneHandler(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  GridItemEggProps *pGVar4;
  string *psVar5;
  long lVar6;
  ZombieType *this;
  undefined8 uVar7;
  undefined8 uVar8;
  SexyVector3 *pSVar9;
  long *plVar10;
  code *pcVar11;
  Board *this_00;
  string asStack_80 [8];
  RtMixedPtrBase aRStack_78 [8];
  int local_70;
  int local_6c;
  RtWeakPtr<Sexy::SoundResource> aRStack_68 [8];
  Vec3 aVStack_60 [16];
  vector<std::string,std::allocator<std::string>> avStack_50 [24];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar4 = GridItem::GetProps<GridItemEggProps>();
  FUN_05475d88(asStack_80,pGVar4 + 0x138);
  psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar5);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_78);
  if ((cVar1 != '\0') &&
     (lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78),
     *(char *)(lVar6 + 0x28) != '\0')) {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_38);
    this = (ZombieType *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
    ZombieType::AddInGameResourceRequirements(this,(set *)amStack_38);
    this_00 = *(Board **)(gLawnApp + 0x9f0);
    uVar7 = std::set<std::string,std::less<std::string>,std::allocator<std::string>>::begin
                      ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)
                       amStack_38);
    uVar8 = std::
            map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>::
            end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)amStack_38);
    std::vector<std::string,std::allocator<std::string>>::
    vector<std::_Rb_tree_const_iterator<std::string>,void>(avStack_50,uVar7,uVar8,aVStack_60);
    Board::LoadResourceGroupsForGameplay(this_00,(vector *)avStack_50);
    std::vector<std::string,std::allocator<std::string>>::~vector(avStack_50);
    EATextSquish::Vec3::Vec3(aVStack_60,0.0,0.0,0.0);
    BoardEntity::CalcGridPosition();
    iVar2 = BoardTransforms::GridToBoardSpaceXUnbounded(local_70);
    iVar3 = BoardTransforms::GridToBoardSpaceYUnbounded(local_6c);
    EATextSquish::Vec3::Vec3((Vec3 *)avStack_50,(float)iVar2,(float)iVar3,0.0);
    plVar10 = *(long **)(gLawnApp + 0x9f0);
    pcVar11 = *(code **)(*plVar10 + 0x318);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)aRStack_78);
    pSVar9 = (SexyVector3 *)(*pcVar11)(plVar10,aRStack_68,0xfffffffb,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    BoardEntity::PlaceOnBoard(pSVar9);
    std::set<std::string,std::less<std::string>,std::allocator<std::string>>::~set
              ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)amStack_38);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
  std::string::~string(asStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemEgg::SpawnDino(std::string const&) */

void GridItemEgg::SpawnDino(string *param_1)

{
  bool bVar1;
  char cVar2;
  string *psVar3;
  CreatureType *this;
  undefined8 uVar4;
  undefined8 uVar5;
  Creature *this_00;
  Board *pBVar6;
  float fVar7;
  float fVar8;
  RtWeakPtr aRStack_60 [8];
  undefined1 auStack_58 [8];
  vector<std::string,std::allocator<std::string>> avStack_50 [24];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CreatureType>>::GetInstancePtr();
  ObjectTypeDirectory<CreatureType>::GetTypeFromTypeName(psVar3);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_60);
  if ((bVar1) &&
     (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_60), cVar2 != '\0')) {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_38);
    this = (CreatureType *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
    CreatureType::AddInGameResourceRequirements(this,(set *)amStack_38);
    pBVar6 = *(Board **)(gLawnApp + 0x9f0);
    uVar4 = std::set<std::string,std::less<std::string>,std::allocator<std::string>>::begin
                      ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)
                       amStack_38);
    uVar5 = std::
            map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>::
            end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)amStack_38);
    std::vector<std::string,std::allocator<std::string>>::
    vector<std::_Rb_tree_const_iterator<std::string>,void>(avStack_50,uVar4,uVar5,auStack_58);
    Board::LoadResourceGroupsForGameplay(pBVar6,(vector *)avStack_50);
    std::vector<std::string,std::allocator<std::string>>::~vector(avStack_50);
    pBVar6 = *(Board **)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)avStack_50,(RtWeakPtrBase *)aRStack_60);
    this_00 = (Creature *)Board::SpawnCreature(pBVar6,avStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)avStack_50);
    BoardEntity::CalcGridPosition();
    fVar8 = *(float *)(param_1 + 0x1c);
    fVar7 = (float)FUN_03e3b518(*(undefined4 *)(param_1 + 0x18),fVar8,
                                *(undefined4 *)(param_1 + 0x20));
    EATextSquish::Vec3::Vec3((Vec3 *)avStack_50,fVar7,fVar8,0.0);
    Creature::SetWaveToLeave(this_00,0);
    BoardEntity::PlaceOnBoard((SexyVector3 *)this_00);
    std::set<std::string,std::less<std::string>,std::allocator<std::string>>::~set
              ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)amStack_38);
  }
  else {
    this_00 = (Creature *)0x0;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemEgg::onPopAnimCommand(std::string const&, float, std::string const&, std::string const&)
    */

void GridItemEgg::onPopAnimCommand(string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  GridItemEggProps *pGVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_3,"break");
  if ((bVar1) && (bVar1 = std::operator==(param_4,"use_action"), bVar1)) {
    pGVar2 = GridItem::GetProps<GridItemEggProps>();
    FUN_05475d88(asStack_10,pGVar2 + 0x138);
    SpawnDino(param_1);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemEgg::GatherPlantingRestrictions(PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*) const */

void __thiscall
GridItemEgg::GatherPlantingRestrictions(GridItemEgg *this,PlantType *param_1,vector *param_2)

{
  char cVar1;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GatherPlantingRestrictions((GridItem *)this,param_1,param_2);
  cVar1 = FUN_03e3b31c(*(undefined4 *)(this + 0x1e8),0);
  if (cVar1 != '\0') {
    local_c = GetCantPlantReason();
    std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
              ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_2,
               (PlantingReason *)&local_c);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemEgg::TakeDamage(DamageInfo const&) */

void __thiscall GridItemEgg::TakeDamage(GridItemEgg *this,DamageInfo *param_1)

{
  float fVar1;
  bool bVar2;
  char cVar3;
  GridItemBreakableTargetProps *pGVar4;
  GridItemEggAnimRig *extraout_x0;
  PopAnimRig *pPVar5;
  size_t __n;
  float fVar6;
  string asStack_d8 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_d0 [8];
  RtMixedPtr aRStack_c8 [8];
  RtId aRStack_c0 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_b8 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_b0 [72];
  DamageInfo aDStack_68 [8];
  float local_60;
  undefined8 local_58 [10];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x214] == (GridItemEgg)0x0) {
    DamageInfo::DamageInfo(aDStack_68,param_1);
    bVar2 = TestFlag<DamageTypeFlags>(local_58[0],2);
    if (bVar2) {
      SetFlag<DamageTypeFlags>(local_58,2,0);
      if (*(code **)(*(long *)this + 0x1d8) == GridItem::GetHitpoints) {
        local_60 = (float)GridItem::GetHitpoints((GridItem *)this);
      }
      else {
        local_60 = (float)(**(code **)(*(long *)this + 0x1d8))();
      }
    }
    pGVar4 = GridItem::GetProps<GridItemBreakableTargetProps>();
    fVar1 = local_60;
    if (*(code **)(*(long *)this + 0x1d8) == GridItem::GetHitpoints) {
      fVar6 = (float)GridItem::GetHitpoints((GridItem *)this);
    }
    else {
      fVar6 = (float)(**(code **)(*(long *)this + 0x1d8))();
    }
    if ((fVar6 <= fVar1) && (__n = (size_t)(byte)this[0x214], this[0x214] == (GridItemEgg)0x0)) {
      bVar2 = TestFlag<DamageTypeFlags>(local_58[0],0x1000);
      if (bVar2) {
        GridItemAnimation::GetAnimRig();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b8);
        nop();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_b8);
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_c8);
        std::string::string((string *)aRStack_b8,"onTurnToAshAnimDone");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_b0,
                   aRStack_c0,aRStack_b8);
        GridItemEggAnimRig::PlayTurnToAsh(extraout_x0,aRStack_b0);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_b0);
        std::string::~string((string *)aRStack_b8);
        nop();
        Sexy::RtId::~RtId(aRStack_c0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_c8)
        ;
      }
      else {
        FUN_05475d88(asStack_d8,pGVar4 + 0xe8);
        cVar3 = FUN_0547419c(asStack_d8);
        if (cVar3 != '\0') {
          std::string::append(asStack_d8,"break",__n);
        }
        GridItemAnimation::GetAnimRig();
        pPVar5 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_d0);
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_c8);
        std::string::string((string *)aRStack_b8,"onBreakAnimDone");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_b0,
                   aRStack_c0,(string *)aRStack_b8);
        PopAnimRig::PlayAndStop(pPVar5,asStack_d8,0,aRStack_b0);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_b0);
        std::string::~string((string *)aRStack_b8);
        nop();
        Sexy::RtId::~RtId(aRStack_c0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_c8)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_d0);
        std::string::~string(asStack_d8);
      }
      this[0x214] = (GridItemEgg)0x1;
      if (*(code **)(*(long *)this + 0x1d8) == GridItem::GetHitpoints) {
        local_60 = (float)GridItem::GetHitpoints((GridItem *)this);
      }
      else {
        local_60 = (float)(**(code **)(*(long *)this + 0x1d8))();
      }
      local_60 = local_60 - 1.0;
      std::string::string((string *)aRStack_b8,"Play_Zomb_Dino_Extra_Egg_Split");
      RealObject::PlayPositionalSound((RealObject *)this,(string *)aRStack_b8,0.0);
      std::string::~string((string *)aRStack_b8);
      nop();
    }
    GridItem::TakeDamage((GridItem *)this,aDStack_68);
    DamageInfo::~DamageInfo(aDStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

