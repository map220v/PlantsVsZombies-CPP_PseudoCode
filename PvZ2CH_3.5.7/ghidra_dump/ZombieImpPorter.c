// Class: ZombieImpPorter


/* ZombieImpPorter::onSpawnTentAnimCompleted() */

void __thiscall ZombieImpPorter::onSpawnTentAnimCompleted(ZombieImpPorter *this)

{
  (**(code **)(*(long *)this + 0x48))();
  return;
}


/* ZombieImpPorter::~ZombieImpPorter() */

void __thiscall ZombieImpPorter::~ZombieImpPorter(ZombieImpPorter *this)

{
  *(undefined ***)this = &PTR_GetClass_068e6690;
  *(undefined ***)(this + 0x10) = &PTR__ZombieImpPorter_068e70c0;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieImpPorter::~ZombieImpPorter() */

void __thiscall ZombieImpPorter::~ZombieImpPorter(ZombieImpPorter *this)

{
  ~ZombieImpPorter(this + -0x10);
  return;
}


/* ZombieImpPorter::~ZombieImpPorter() */

void __thiscall ZombieImpPorter::~ZombieImpPorter(ZombieImpPorter *this)

{
  ~ZombieImpPorter(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieImpPorter::~ZombieImpPorter() */

void __thiscall ZombieImpPorter::~ZombieImpPorter(ZombieImpPorter *this)

{
  ~ZombieImpPorter(this + -0x10);
  return;
}


/* ZombieImpPorter::ZombieImpPorter() */

void __thiscall ZombieImpPorter::ZombieImpPorter(ZombieImpPorter *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_068e6690;
  *(undefined ***)(this + 0x10) = &PTR__ZombieImpPorter_068e70c0;
  return;
}


/* ZombieImpPorter::StaticNew() */

ZombieImpPorter * ZombieImpPorter::StaticNew(void)

{
  ZombieImpPorter *this;
  
  this = ::operator_new(0x800);
  ZombieImpPorter(this);
  return this;
}


/* ZombieImpPorter::canSpawnTentAt(Sexy::Point const&) const */

void __thiscall ZombieImpPorter::canSpawnTentAt(ZombieImpPorter *this,Point *param_1)

{
  char cVar1;
  
  cVar1 = Board::CanAddGraveStoneAt
                    (*(Board **)(gLawnApp + 0x9f0),*(int *)param_1,*(int *)(param_1 + 4),true);
  if (cVar1 == '\0') {
    return;
  }
  RealObject::IsOnTeam(this,2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieImpPorter::getDefaultTentSpawnPosition() */

void __thiscall ZombieImpPorter::getDefaultTentSpawnPosition(ZombieImpPorter *this)

{
  long lVar1;
  int *piVar2;
  int *in_x8;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  local_c = 0;
  piVar2 = eastl::max_alt<int>(in_x8,&local_c);
  lVar1 = ___stack_chk_guard;
  *in_x8 = *piVar2;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieImpPorter::onEnterState_SpawnTent(ZombieState) */

void ZombieImpPorter::onEnterState_SpawnTent(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::SetIsControlled(param_1,true);
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onSpawnTentAnimCompleted");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ImpPorter::PlaySpawnTent((ZombieAnimRig_ImpPorter *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieImpPorter::canSpawnTentOnTile() */

void __thiscall ZombieImpPorter::canSpawnTentOnTile(ZombieImpPorter *this)

{
  undefined1 uVar1;
  ZombieImpPorterProps *this_00;
  RtObject *this_01;
  GridItemGoldTile *pGVar2;
  float fVar3;
  float fVar4;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  fVar4 = *(float *)(this + 0x1c);
  local_8 = ___stack_chk_guard;
  fVar3 = (float)FUN_047cfb64(*(undefined4 *)(this + 0x18),fVar4,*(undefined4 *)(this + 0x20));
  this_00 = Zombie::GetProps<ZombieImpPorterProps>((Zombie *)this);
  BoardTransforms::BoardSpaceToGrid
            ((BoardTransforms *)this_00,fVar3 + *(float *)(this_00 + 0x210),fVar4);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesAtGridSquare(avStack_20,4,local_38,local_34);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  do {
    uVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
    if (!(bool)uVar1) {
LAB_047d2e68:
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar1);
    }
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    nop();
    pGVar2 = Sexy::RtObject::Cast<GridItemGoldTile>(this_01);
    if (pGVar2 != (GridItemGoldTile *)0x0) {
      uVar1 = canSpawnTentAt(this,(Point *)&local_38);
      goto LAB_047d2e68;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieImpPorter::tryPlaceTent(Sexy::Point const&) */

void __thiscall ZombieImpPorter::tryPlaceTent(ZombieImpPorter *this,Point *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  Plant *this_00;
  long *plVar4;
  undefined8 extraout_x0;
  undefined8 uVar5;
  Board *pBVar6;
  code *pcVar7;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  string asStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar3 = canSpawnTentAt(this,param_1);
  if (cVar3 == '\0') {
    uVar5 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
    iVar2 = *(int *)param_1;
    pBVar6 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_68,"");
    this_00 = (Plant *)Board::GetPlantAt(pBVar6,iVar2,iVar1,asStack_68);
    std::string::~string(asStack_68);
    nop();
    if (this_00 != (Plant *)0x0) {
      Plant::SetIsThrownAway(this_00,true);
      pcVar7 = *(code **)(*(long *)this_00 + 0x120);
      Sexy::Point::Point(aPStack_78,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
      DamageInfo::DamageInfo((DamageInfo *)0x0,local_70,local_6c,asStack_68,this,aPStack_78,0);
      (*pcVar7)(this_00,asStack_68);
      DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
    }
    plVar4 = (long *)FUN_047d2c98(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4));
    if (plVar4 != (long *)0x0) {
      pcVar7 = *(code **)(*plVar4 + 0x120);
      Sexy::Point::Point(aPStack_78,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
      DamageInfo::DamageInfo((DamageInfo *)0x0,local_70,local_6c,asStack_68,this,aPStack_78,0);
      (*pcVar7)(plVar4,asStack_68);
      DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
    }
    pBVar6 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_68,"tent");
    Board::AddGridItem(pBVar6,asStack_68,*(int *)param_1,*(int *)(param_1 + 4),1);
    nop();
    std::string::~string(asStack_68);
    nop();
    uVar5 = extraout_x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieImpPorter::spawnTent() */

void __thiscall ZombieImpPorter::spawnTent(ZombieImpPorter *this)

{
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  getDefaultTentSpawnPosition(this);
  tryPlaceTent(this,aPStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieImpPorter::dropPack() */

void __thiscall ZombieImpPorter::dropPack(ZombieImpPorter *this)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  undefined8 extraout_x0;
  Board *pBVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  uint local_88;
  int local_84;
  int local_80 [2];
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  long local_8;
  
  fVar9 = *(float *)(this + 0x1c);
  local_8 = ___stack_chk_guard;
  fVar8 = (float)FUN_047cfb64(*(undefined4 *)(this + 0x18),fVar9,*(undefined4 *)(this + 0x20));
  BoardTransforms::BoardSpaceToGrid((BoardTransforms *)(ulong)(uint)fVar9,fVar8 + 40.0,fVar9);
  uVar1 = local_88;
  if (((((int)local_88 < 0) ||
       (iVar3 = BoardConstants::NUMBER_OF_COLUMNS(), iVar4 = local_84, iVar3 <= (int)uVar1)) ||
      (local_84 < 0)) || (iVar3 = BoardConstants::NUMBER_OF_ROWS(), iVar3 <= iVar4)) {
    Sexy::Point::Point((Point *)local_80,0,0);
  }
  else {
    iVar4 = 0;
    Sexy::Point::Point((Point *)local_80,0,0);
    BoardTransforms::GridToBoardSpacePos((BoardTransforms *)(ulong)local_88,local_84,iVar4);
    local_80[0] = local_68;
  }
  fVar8 = (float)local_80[0] - (fVar8 + 40.0);
  if (fVar8 < 0.0) {
    local_88 = local_88 + 1;
    iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
    fVar8 = fVar8 + (float)iVar4;
  }
  cVar2 = canSpawnTentAt(this,(Point *)&local_88);
  iVar4 = local_84;
  uVar1 = local_88;
  if (cVar2 == '\0') {
    cVar2 = RealObject::IsOnTeam(this,2);
    if (cVar2 == '\0') {
      fVar8 = -35.0;
    }
    else {
      fVar8 = 35.0;
    }
    EATextSquish::Vec3::Vec3((Vec3 *)&local_68,fVar8,-25.0,0.0);
    Zombie::AddAttachedEffect
              ((Zombie *)this,"pack_poof","POPANIM_EFFECTS_LOSTCITY_PACK_BACKPACK","animation3",
               (SexyVector3 *)&local_68,0x61e68,true);
  }
  else {
    pBVar6 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string((string *)&local_68,"");
    plVar5 = (long *)Board::GetPlantAt(pBVar6,uVar1,iVar4,(string *)&local_68);
    std::string::~string((string *)&local_68);
    nop();
    if (plVar5 != (long *)0x0) {
      pcVar7 = *(code **)(*plVar5 + 0x120);
      Sexy::Point::Point(aPStack_78,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
      DamageInfo::DamageInfo
                ((DamageInfo *)0x0,local_70,local_6c,(string *)&local_68,this,aPStack_78,0);
      (*pcVar7)(plVar5,(string *)&local_68);
      DamageInfo::~DamageInfo((DamageInfo *)&local_68);
    }
    plVar5 = (long *)FUN_047d2c98(local_88,local_84);
    if (plVar5 != (long *)0x0) {
      pcVar7 = *(code **)(*plVar5 + 0x120);
      Sexy::Point::Point(aPStack_78,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
      DamageInfo::DamageInfo
                ((DamageInfo *)0x0,local_70,local_6c,(string *)&local_68,this,aPStack_78,0);
      (*pcVar7)(plVar5,(string *)&local_68);
      DamageInfo::~DamageInfo((DamageInfo *)&local_68);
    }
    pBVar6 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string((string *)&local_68,"backpack");
    Board::AddGridItem(pBVar6,(string *)&local_68,local_88,local_84,1);
    nop();
    std::string::~string((string *)&local_68);
    nop();
    EATextSquish::Vec3::Vec3((Vec3 *)&local_68,-fVar8,0.0,0.0);
    GridItemBackpack::SetInitialBounce(local_68,uStack_64,local_60,extraout_x0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieImpPorter::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void ZombieImpPorter::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_4,"tent_intro");
  if (bVar1) {
    spawnTent((ZombieImpPorter *)param_1);
  }
  bVar1 = std::operator==(param_4,"pack_drop");
  if (!bVar1) {
    return;
  }
  dropPack((ZombieImpPorter *)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieImpPorter::StaticClassInit() */

void ZombieImpPorter::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  StateMachineTableBuilder *this_00;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  code *pcVar4;
  string asStack_188 [8];
  CBMemberTranslatorX aCStack_180 [24];
  CBMemberTranslatorX aCStack_168 [24];
  string asStack_150 [24];
  Delegate1<ZombieState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<ZombieState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"ZombieImpPorter");
      (*pcVar4)(plVar1,asStack_150,FUN_047d4480,0x800,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<ZombieState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa08);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieImpPorter,void(ZombieImpPorter::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieImpPorter,void(ZombieImpPorter::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieImpPorter,void(ZombieImpPorter::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_IP_SpawnTent");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_047d4224(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieImpPorter::StaticGetClass() */

long * ZombieImpPorter::StaticGetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieImpPorter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieImpPorter::GetClass() const */

long * ZombieImpPorter::GetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieImpPorter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieImpPorter::updateState_Walk() */

void __thiscall ZombieImpPorter::updateState_Walk(ZombieImpPorter *this)

{
  char cVar1;
  
  cVar1 = canSpawnTentOnTile(this);
  if (cVar1 == '\0') {
    Zombie::updateState_Walk((Zombie *)this);
    return;
  }
  Zombie::setZombieState((Zombie *)this,0x1f,0);
  return;
}

