// Class: GridItemEliminateShield


/* GridItemEliminateShield::onEliminateOnce() */

void GridItemEliminateShield::onEliminateOnce(void)

{
  return;
}


/* GridItemEliminateShield::IsDamageableByPlants() const */

bool __thiscall GridItemEliminateShield::IsDamageableByPlants(GridItemEliminateShield *this)

{
  return (*(uint *)(this + 0x1ac) & 0xfffffffb) != 0;
}


/* GridItemEliminateShield::onDieAnimDone(std::string const&) */

void GridItemEliminateShield::onDieAnimDone(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x230))();
  return;
}


/* GridItemEliminateShield::~GridItemEliminateShield() */

void __thiscall GridItemEliminateShield::~GridItemEliminateShield(GridItemEliminateShield *this)

{
  *(undefined ***)this = &PTR_GetClass_0676cc20;
  *(undefined ***)(this + 0x10) = &PTR__GridItemEliminateShield_0676ced8;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemEliminateShield::~GridItemEliminateShield() */

void __thiscall GridItemEliminateShield::~GridItemEliminateShield(GridItemEliminateShield *this)

{
  ~GridItemEliminateShield(this + -0x10);
  return;
}


/* GridItemEliminateShield::~GridItemEliminateShield() */

void __thiscall GridItemEliminateShield::~GridItemEliminateShield(GridItemEliminateShield *this)

{
  ~GridItemEliminateShield(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemEliminateShield::~GridItemEliminateShield() */

void __thiscall GridItemEliminateShield::~GridItemEliminateShield(GridItemEliminateShield *this)

{
  ~GridItemEliminateShield(this + -0x10);
  return;
}


/* GridItemEliminateShield::CalcRenderOrder() const */

void __thiscall GridItemEliminateShield::CalcRenderOrder(GridItemEliminateShield *this)

{
  undefined4 uVar1;
  
  uVar1 = FUN_03d61218(*(undefined4 *)(this + 0x134));
  Board::MakeRenderOrder(900000,uVar1,0);
  return;
}


/* non-virtual thunk to GridItemEliminateShield::CalcRenderOrder() const */

void __thiscall GridItemEliminateShield::CalcRenderOrder(GridItemEliminateShield *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* GridItemEliminateShield::GridItemEliminateShield() */

void __thiscall GridItemEliminateShield::GridItemEliminateShield(GridItemEliminateShield *this)

{
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined4 *)(this + 0x1b0) = 0;
  *(undefined ***)this = &PTR_GetClass_0676cc20;
  *(undefined ***)(this + 0x10) = &PTR__GridItemEliminateShield_0676ced8;
  *(undefined4 *)(this + 0x1ac) = 0xffffffff;
  return;
}


/* GridItemEliminateShield::StaticNew() */

GridItemEliminateShield * GridItemEliminateShield::StaticNew(void)

{
  GridItemEliminateShield *this;
  
  this = ::operator_new(0x1b8);
  GridItemEliminateShield(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemEliminateShield::StaticClassInit() */

void GridItemEliminateShield::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemEliminateShield");
    (*pcVar2)(plVar1,asStack_10,FUN_03d61680,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemEliminateShield::StaticGetClass() */

long * GridItemEliminateShield::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemEliminateShield",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemEliminateShield::GetClass() const */

long * GridItemEliminateShield::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemEliminateShield",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemEliminateShield::onHitAnimDone(std::string const&) */

void GridItemEliminateShield::onHitAnimDone(string *param_1)

{
  PopAnimRig *pPVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 0x1ac) != 4) {
    if (*(int *)(param_1 + 0x1a8) == 0) {
      GridItemAnimation::GetAnimRig();
      pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
      std::string::string(asStack_40,"idle02");
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
      PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
      std::string::~string(asStack_40);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
    }
    else {
      GridItemAnimation::GetAnimRig();
      pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
      std::string::string(asStack_40,"idle03");
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
      PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
      std::string::~string(asStack_40);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemEliminateShield::calcCollisionRect() */

void GridItemEliminateShield::calcCollisionRect(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long in_x0;
  GridItemAnimationProps *pGVar5;
  Insets *in_x8;
  
  pGVar5 = GridItem::GetProps<GridItemAnimationProps>();
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
  iVar3 = FUN_03d61214(*(undefined4 *)(in_x0 + 0x130));
  iVar3 = BoardTransforms::GridToBoardSpaceX(iVar3);
  iVar4 = FUN_03d61218(*(undefined4 *)(in_x0 + 0x134));
  iVar4 = BoardTransforms::GridToBoardSpaceY(iVar4);
  Sexy::Insets::Insets(in_x8,iVar3 - iVar1 / 2,(iVar4 + -0x19) - iVar2 / 2,iVar1,iVar2);
  iVar1 = *(int *)(pGVar5 + 0x18);
  *(int *)in_x8 = *(int *)in_x8 + *(int *)(pGVar5 + 0x14);
  *(int *)(in_x8 + 8) = *(int *)(in_x8 + 8) + iVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemEliminateShield::setState(EliminateShieldState) */

void __thiscall GridItemEliminateShield::setState(GridItemEliminateShield *this,int param_2)

{
  PopAnimRig *pPVar1;
  char *pcVar2;
  PopAnimRig *local_a0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x1ac) == param_2) goto LAB_03d61e80;
  switch(param_2) {
  case 0:
    GridItemAnimation::GetAnimRig();
    local_a0 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    std::string::string(asStack_58,"idle");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    pcVar2 = "onRiseAnimDone";
    break;
  case 1:
    GridItemAnimation::GetAnimRig();
    pPVar1 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
    pcVar2 = "idle02";
    goto LAB_03d61ff0;
  case 2:
    GridItemAnimation::GetAnimRig();
    pPVar1 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
    pcVar2 = "idle03";
LAB_03d61ff0:
    std::string::string(asStack_58,pcVar2);
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aRStack_50);
    PopAnimRig::PlayAndContinue(pPVar1,asStack_58,0,(DummyInit *)aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
    goto switchD_03d61ec4_default;
  case 3:
    GridItemAnimation::GetAnimRig();
    local_a0 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    std::string::string(asStack_58,"idle06");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    pcVar2 = "onChangeDamageDone";
    break;
  case 4:
    GridItemAnimation::GetAnimRig();
    local_a0 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    std::string::string(asStack_58,"idle04");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    pcVar2 = "onDieAnimDone";
    break;
  default:
    goto switchD_03d61ec4_default;
  }
  std::string::string(asStack_60,pcVar2);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
             asStack_60);
  PopAnimRig::PlayAndStop(local_a0,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
switchD_03d61ec4_default:
  *(int *)(this + 0x1ac) = param_2;
LAB_03d61e80:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* GridItemEliminateShield::onGridItemInitialize() */

void __thiscall GridItemEliminateShield::onGridItemInitialize(GridItemEliminateShield *this)

{
  GridItemAnimationProps *pGVar1;
  
  pGVar1 = GridItem::GetProps<GridItemAnimationProps>();
  FUN_03d61204(*(undefined4 *)(pGVar1 + 0x10),this + 300);
  if (*(code **)(*(long *)this + 0x1e0) == GridItem::GetMaxHitpoints) {
    GridItem::GetMaxHitpoints((GridItem *)this);
  }
  else {
    (**(code **)(*(long *)this + 0x1e0))();
  }
  FUN_03d6120c(this + 0x128);
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined4 *)(this + 0x1b0) = 0;
  GridItemCrater::onGridItemInitialize((GridItemCrater *)this);
  *(undefined4 *)(this + 0x1ac) = 0xffffffff;
  setState(this,0);
  RealObject::JoinTeam((RealObject *)this,2);
  return;
}


/* GridItemEliminateShield::onRiseAnimDone(std::string const&) */

void GridItemEliminateShield::onRiseAnimDone(string *param_1)

{
  setState((GridItemEliminateShield *)param_1,1);
  return;
}


/* GridItemEliminateShield::onChangeDamageDone(std::string const&) */

void GridItemEliminateShield::onChangeDamageDone(string *param_1)

{
  setState((GridItemEliminateShield *)param_1,2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemEliminateShield::onTakeDamage(DamageInfo const&) */

void GridItemEliminateShield::onTakeDamage(DamageInfo *param_1)

{
  PopAnimRig *pPVar1;
  uint uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (1 < *(int *)(param_1 + 0x1ac) - 3U) {
    lVar3 = *(long *)param_1;
    if (*(code **)(lVar3 + 0x1d8) == GridItem::GetHitpoints) {
      fVar4 = (float)GridItem::GetHitpoints((GridItem *)param_1);
    }
    else {
      fVar4 = (float)(**(code **)(lVar3 + 0x1d8))();
      lVar3 = *(long *)param_1;
    }
    if (*(code **)(lVar3 + 0x1e0) == GridItem::GetMaxHitpoints) {
      fVar5 = (float)GridItem::GetMaxHitpoints((GridItem *)param_1);
    }
    else {
      fVar5 = (float)(**(code **)(lVar3 + 0x1e0))();
    }
    uVar2 = (uint)(fVar4 <= fVar5 * 0.5);
    if (*(uint *)(param_1 + 0x1a8) != uVar2) {
      setState((GridItemEliminateShield *)param_1,3);
      *(uint *)(param_1 + 0x1a8) = uVar2;
    }
    if (*(code **)(*(long *)param_1 + 0x1d8) == GridItem::GetHitpoints) {
      fVar4 = (float)GridItem::GetHitpoints((GridItem *)param_1);
    }
    else {
      fVar4 = (float)(**(code **)(*(long *)param_1 + 0x1d8))();
    }
    if (0.0 < fVar4) {
      if (*(int *)(param_1 + 0x1a8) == 0) {
        GridItemAnimation::GetAnimRig();
        pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
        std::string::string(asStack_58,"idle05");
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
        std::string::string(asStack_60,"onHitAnimDone");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                   aRStack_68,asStack_60);
        PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
        std::string::~string(asStack_60);
        nop();
        Sexy::RtId::~RtId(aRStack_68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70)
        ;
        std::string::~string(asStack_58);
        nop();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
      }
      else {
        GridItemAnimation::GetAnimRig();
        pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
        std::string::string(asStack_58,"idle07");
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
        std::string::string(asStack_60,"onHitAnimDone");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                   aRStack_68,asStack_60);
        PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
        std::string::~string(asStack_60);
        nop();
        Sexy::RtId::~RtId(aRStack_68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70)
        ;
        std::string::~string(asStack_58);
        nop();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemEliminateShield::TakeDamage(DamageInfo const&) */

void __thiscall
GridItemEliminateShield::TakeDamage(GridItemEliminateShield *this,DamageInfo *param_1)

{
  undefined *this_00;
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  ulong uVar5;
  undefined8 extraout_x0;
  ulong uVar6;
  code *pcVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  RtWeakPtr aRStack_70 [8];
  DamageInfo aDStack_68 [8];
  float local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x1f8))();
  if (cVar1 == '\0') goto LAB_03d62568;
  if (*(RealObject **)param_1 != (RealObject *)0x0) {
    cVar1 = RealObject::IsOnOpposingTeam((RealObject *)this,*(RealObject **)param_1);
    if (cVar1 == '\0') goto LAB_03d62568;
    bVar2 = Sexy::RtObject::IsA<Plant>(*(RtObject **)param_1);
    if (bVar2) {
      cVar1 = (**(code **)(*(long *)this + 0x200))(this);
      if (cVar1 == '\0') goto LAB_03d62568;
      nop();
      cVar1 = (**(code **)(*(long *)this + 0x210))(this,extraout_x0);
      if (cVar1 == '\0') goto LAB_03d62568;
    }
  }
  uVar6 = 0;
  while( true ) {
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    uVar5 = FUN_03d61254(uVar8,*(undefined8 *)(param_1 + 0x40));
    if (uVar5 <= uVar6) break;
    puVar4 = (undefined4 *)FUN_03d61260(uVar8,uVar6);
                    /* WARNING: Load size is inaccurate */
    GridItem::ApplyCondition(*(GridItem **)(puVar4 + 1),this,*puVar4);
    uVar6 = uVar6 + 1;
  }
  bVar2 = TestFlag<DamageTypeFlags>(*(undefined8 *)(param_1 + 0x10),2);
  if (bVar2) {
    if (*(code **)(*(long *)this + 0x1d8) == GridItem::GetHitpoints) {
      fVar10 = (float)GridItem::GetHitpoints((GridItem *)this);
      pcVar7 = GridItem::GetHitpoints;
    }
    else {
      fVar10 = (float)(**(code **)(*(long *)this + 0x1d8))();
      pcVar7 = *(code **)(*(long *)this + 0x1d8);
    }
  }
  else {
    fVar10 = *(float *)(param_1 + 8);
    pcVar7 = *(code **)(*(long *)this + 0x1d8);
  }
  if (pcVar7 == GridItem::GetHitpoints) {
    fVar9 = (float)GridItem::GetHitpoints((GridItem *)this);
  }
  else {
    fVar9 = (float)(*pcVar7)();
  }
  FUN_03d6120c(fVar9 - fVar10,this + 0x128);
  DamageInfo::DamageInfo(aDStack_68,param_1);
  local_60 = fVar10;
  (**(code **)(*(long *)this + 0x278))(this,aDStack_68);
  if (*(code **)(*(long *)this + 0x1d8) == GridItem::GetHitpoints) {
    fVar10 = (float)GridItem::GetHitpoints((GridItem *)this);
  }
  else {
    fVar10 = (float)(**(code **)(*(long *)this + 0x1d8))();
  }
  if (fVar10 <= 0.0) {
    ToolPacketData::GetProps();
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_70);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    this_00 = gMessageRouter;
    if (bVar2) {
      iVar3 = FUN_03d61218(*(undefined4 *)(this + 0x134));
      MessageRouter::Post<int,int>((MessageRouter *)this_00,Message::EliminateShieldDestroyed,iVar3)
      ;
      setState(this,4);
    }
  }
  DamageInfo::~DamageInfo(aDStack_68);
LAB_03d62568:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemEliminateShield::registerForEvents() */

void __thiscall GridItemEliminateShield::registerForEvents(GridItemEliminateShield *this)

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
            ((ReceivedDataCallback *)this,onEliminateOnce);
  Sexy::Delegate0::Delegate0<GridItemEliminateShield,void(GridItemEliminateShield::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::EliminateOnce,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

