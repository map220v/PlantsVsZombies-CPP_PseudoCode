// Class: PlantGarlic


/* PlantGarlic::Initialize() */

void __thiscall PlantGarlic::Initialize(PlantGarlic *this)

{
  undefined4 uVar1;
  
  PlantFramework::Initialize((PlantFramework *)this);
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x28) = uVar1;
  return;
}


/* PlantGarlic::PlantGarlic() */

void __thiscall PlantGarlic::PlantGarlic(PlantGarlic *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067f2c70;
  return;
}


/* PlantGarlic::StaticNew() */

PlantGarlic * PlantGarlic::StaticNew(void)

{
  PlantGarlic *this;
  
  this = ::operator_new(0x38);
  PlantGarlic(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGarlic::StaticClassInit() */

void PlantGarlic::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantGarlic");
    (*pcVar2)(plVar1,asStack_10,FUN_04162868,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGarlic::StaticGetClass() */

long * PlantGarlic::StaticGetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantGarlic",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantGarlic::GetClass() const */

long * PlantGarlic::GetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantGarlic",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantGarlic::pushZombieAway(Zombie*) */

void __thiscall PlantGarlic::pushZombieAway(PlantGarlic *this,Zombie *param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
  fVar5 = *pfVar3;
  iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  if ((200.0 < fVar5) && (fVar4 = (float)(iVar1 * iVar2 + 200), fVar5 <= fVar4)) {
    Zombie::Nudge(param_1,fVar4,2.0,true);
    return;
  }
  return;
}


/* PlantGarlic::~PlantGarlic() */

void __thiscall PlantGarlic::~PlantGarlic(PlantGarlic *this)

{
  *(undefined ***)this = &PTR_GetClass_067f2c70;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantGarlic::~PlantGarlic() */

void __thiscall PlantGarlic::~PlantGarlic(PlantGarlic *this)

{
  ~PlantGarlic(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGarlic::createGarlicAffectZombieRecordWith(Zombie*) */

void PlantGarlic::createGarlicAffectZombieRecordWith(Zombie *param_1)

{
  undefined4 uVar1;
  SharkMinion *in_x1;
  GarlicAffectedZombieRecord *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GarlicAffectedZombieRecord::GarlicAffectedZombieRecord(in_x8);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)in_x8,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  uVar1 = SharkMinion::getRow(in_x1);
  *(undefined4 *)(in_x8 + 8) = uVar1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGarlic::createGasTrailEffect() */

void __thiscall PlantGarlic::createGasTrailEffect(PlantGarlic *this)

{
  int iVar1;
  Effect_PopAnim *this_00;
  PopAnim *pPVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  string asStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  lVar3 = *(long *)(this + 0x10);
  fVar5 = *(float *)(lVar3 + 0x1c);
  local_8 = ___stack_chk_guard;
  fVar4 = (float)FUN_0416245c(*(undefined4 *)(lVar3 + 0x18),fVar5,*(undefined4 *)(lVar3 + 0x20));
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_CHILIBEAN_GAS_ATTACK");
  GetPAMByName(asStack_20);
  pPVar2 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,pPVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  std::string::~string(asStack_20);
  nop();
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,fVar4 - 65.0,fVar5 - 125.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,-1);
  iVar1 = (**(code **)(**(long **)(this + 0x10) + 0x170))(*(long **)(this + 0x10));
  FUN_04161ee4(this_00 + 0x1c,iVar1 + 1);
  std::string::string((string *)aRStack_18,"animation");
  Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGarlic::CanBeTargetedBy(BoardEntity const*) */

void __thiscall PlantGarlic::CanBeTargetedBy(PlantGarlic *this,BoardEntity *param_1)

{
  char cVar1;
  Zombie *pZVar2;
  GarlicSubsystem *pGVar3;
  long lVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (BoardEntity *)0x0) {
    Board::GetGameSubSystem<GarlicSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  }
  else {
    pZVar2 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    pGVar3 = Board::GetGameSubSystem<GarlicSubsystem>(*(Board **)(gLawnApp + 0x9f0));
    if (pZVar2 != (Zombie *)0x0) {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
      cVar1 = GarlicSubsystem::IsZombieIndifferent(pGVar3,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      if (cVar1 != '\0') {
        lVar4 = 0;
        if (local_8 == ___stack_chk_guard) {
          return;
        }
        goto LAB_041644cc;
      }
    }
  }
  lVar4 = ___stack_chk_guard;
  if (local_8 == ___stack_chk_guard) {
    PlantFramework::CanBeTargetedBy((BoardEntity *)this);
    return;
  }
LAB_041644cc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGarlic::isAffectedByEatingGarlic(BoardEntity*) */

void __thiscall PlantGarlic::isAffectedByEatingGarlic(PlantGarlic *this,BoardEntity *param_1)

{
  char cVar1;
  undefined1 uVar2;
  Zombie *pZVar3;
  long lVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((((param_1 != (BoardEntity *)0x0) &&
       (pZVar3 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), pZVar3 != (Zombie *)0x0)) &&
      (cVar1 = (**(code **)(*(long *)pZVar3 + 0x4d8))(), cVar1 == '\0')) &&
     (cVar1 = (**(code **)(*(long *)pZVar3 + 0x508))(pZVar3), cVar1 == '\0')) {
    lVar4 = FUN_041648e8(*(undefined8 *)(this + 0x10));
    cVar1 = ZombieRestrictionSet::IsIncluded((ZombieRestrictionSet *)(lVar4 + 0x350),pZVar3);
    if (cVar1 != '\0') {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
      uVar2 = GarlicSubsystem::ZombieIsValid(aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      goto LAB_041649a4;
    }
  }
  uVar2 = 0;
LAB_041649a4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGarlic::isAffectedByPlantfoodGarlic(BoardEntity*) */

void __thiscall PlantGarlic::isAffectedByPlantfoodGarlic(PlantGarlic *this,BoardEntity *param_1)

{
  char cVar1;
  undefined1 uVar2;
  Zombie *pZVar3;
  long lVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 == (BoardEntity *)0x0) ||
     (pZVar3 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), pZVar3 == (Zombie *)0x0)) {
    RealObject::IsOnOpposingTeam(*(RealObject **)(this + 0x10),(RealObject *)0x0);
  }
  else {
    cVar1 = (**(code **)(*(long *)pZVar3 + 0x4d8))();
    if (((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)pZVar3 + 0x508))(pZVar3), cVar1 == '\0'))
       && (cVar1 = RealObject::IsOnOpposingTeam(*(RealObject **)(this + 0x10),(RealObject *)pZVar3),
          cVar1 != '\0')) {
      lVar4 = FUN_041648e8(*(undefined8 *)(this + 0x10));
      cVar1 = ZombieRestrictionSet::IsIncluded((ZombieRestrictionSet *)(lVar4 + 0x378),pZVar3);
      if (cVar1 != '\0') {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
        uVar2 = GarlicSubsystem::ZombieIsValid(aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
        goto LAB_04164a94;
      }
    }
  }
  uVar2 = 0;
LAB_04164a94:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* PlantGarlic::ApplyPlantfood() */

void __thiscall PlantGarlic::ApplyPlantfood(PlantGarlic *this)

{
  long lVar1;
  float fVar2;
  
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  fVar2 = (float)PVZ_T();
  lVar1 = FUN_041648e8(*(undefined8 *)(this + 0x10));
  *(float *)(this + 0x28) = fVar2 + *(float *)(lVar1 + 0x348);
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x2c) = 0x3f400000;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGarlic::TakeDamage(DamageInfo const&) */

void PlantGarlic::TakeDamage(DamageInfo *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  GarlicSubsystem *this;
  DamageInfo *in_x1;
  DamageInfo *in_x8;
  undefined8 uVar5;
  GarlicAffectedZombieRecord aGStack_58 [12];
  undefined4 local_4c;
  undefined4 local_48;
  GarlicStateInfo aGStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = isAffectedByEatingGarlic((PlantGarlic *)param_1,*(BoardEntity **)in_x1);
  if ((cVar1 != '\0') &&
     (bVar2 = TestFlag<DamageTypeFlags>(*(undefined8 *)(in_x1 + 0x10),0x40000), bVar2)) {
    nop();
    createGarlicAffectZombieRecordWith((Zombie *)param_1);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    iVar3 = FUN_04161ef4(uVar5);
    if (iVar3 < 3) {
      lVar4 = FUN_041648e8(uVar5);
      GarlicStateInfo::operator=(aGStack_40,(GarlicStateInfo *)(lVar4 + 0x2b8));
    }
    else {
      lVar4 = FUN_041648e8(uVar5);
      GarlicStateInfo::operator=(aGStack_40,(GarlicStateInfo *)(lVar4 + 0x318));
    }
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    local_4c = FUN_04161ef4(uVar5);
    lVar4 = FUN_041648e8(uVar5);
    local_48 = *(undefined4 *)(lVar4 + 0x34c);
    this = Board::GetGameSubSystem<GarlicSubsystem>(*(Board **)(gLawnApp + 0x9f0));
    GarlicSubsystem::AddZombie(this,aGStack_58);
    GarlicAffectedZombieRecord::~GarlicAffectedZombieRecord(aGStack_58);
  }
  DamageInfo::DamageInfo(in_x8,in_x1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGarlic::gasThis(Zombie*) */

void __thiscall PlantGarlic::gasThis(PlantGarlic *this,Zombie *param_1)

{
  char cVar1;
  long lVar2;
  GarlicSubsystem *this_00;
  float fVar3;
  GarlicAffectedZombieRecord aGStack_58 [24];
  GarlicStateInfo aGStack_40 [12];
  float local_34;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = isAffectedByPlantfoodGarlic(this,(BoardEntity *)param_1);
  if (cVar1 != '\0') {
    createGarlicAffectZombieRecordWith((Zombie *)this);
    lVar2 = FUN_041648e8(*(undefined8 *)(this + 0x10));
    GarlicStateInfo::operator=(aGStack_40,(GarlicStateInfo *)(lVar2 + 0x2e8));
    fVar3 = (float)Plant::GetZombieConditionExtendRate(*(Plant **)(this + 0x10),2);
    local_34 = fVar3 * local_34;
    this_00 = Board::GetGameSubSystem<GarlicSubsystem>(*(Board **)(gLawnApp + 0x9f0));
    GarlicSubsystem::AddZombie(this_00,aGStack_58);
    GarlicAffectedZombieRecord::~GarlicAffectedZombieRecord(aGStack_58);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGarlic::gasTheZombiesInMyRow() */

void __thiscall PlantGarlic::gasTheZombiesInMyRow(PlantGarlic *this)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Zombie *extraout_x0;
  ulong uVar5;
  ulong uVar6;
  Insets aIStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
  iVar3 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
  iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
  Sexy::Insets::Insets(aIStack_30,iVar2,iVar3,iVar4,1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntitiesInGridSquares
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2,aIStack_30
            );
  uVar6 = 0;
  while( true ) {
    uVar1 = local_20;
    uVar5 = FUN_04161f08(local_20,local_18);
    if (uVar5 <= uVar6) break;
    FUN_04161f14(uVar1,uVar6);
    nop();
    gasThis(this,extraout_x0);
    uVar6 = uVar6 + 1;
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
/* PlantGarlic::UpdatePlantfood() */

void __thiscall PlantGarlic::UpdatePlantfood(PlantGarlic *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  Zombie *this_00;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  float fVar10;
  undefined4 uVar11;
  Insets aIStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar10 = (float)PVZ_T();
  if (*(float *)(this + 0x28) <= fVar10) {
    createGasTrailEffect(this);
    gasTheZombiesInMyRow(this);
    uVar11 = PVZ_EOT();
    *(undefined4 *)(this + 0x28) = uVar11;
    fVar10 = (float)PVZ_T();
    *(float *)(this + 0x30) = fVar10 + *(float *)(this + 0x2c);
  }
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if ((cVar1 != '\0') && (fVar10 = (float)PVZ_T(), fVar10 <= *(float *)(this + 0x30))) {
    uVar8 = 0;
    iVar2 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
    iVar3 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
    iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
    Sexy::Insets::Insets(aIStack_30,iVar2,iVar3,iVar4,1);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    EntityFinder::GetEntitiesInGridSquares
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2,
               aIStack_30);
    uVar9 = local_20;
    lVar5 = FUN_04161f08(local_20,local_18);
    if (lVar5 != 0) {
      do {
        puVar6 = (undefined8 *)FUN_04161f14(uVar9,uVar8);
        this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar6);
        if ((((this_00 != (Zombie *)0x0) && (cVar1 = Zombie::IsBoss(this_00), cVar1 == '\0')) &&
            (cVar1 = RealObject::IsOnOpposingTeam
                               (*(RealObject **)(this + 0x10),(RealObject *)this_00), cVar1 != '\0')
            ) && (cVar1 = Zombie::IsControlled(this_00), cVar1 == '\0')) {
          pushZombieAway(this,this_00);
        }
        uVar9 = local_20;
        uVar8 = uVar8 + 1;
        uVar7 = FUN_04161f08(local_20,local_18);
      } while (uVar8 < uVar7);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

