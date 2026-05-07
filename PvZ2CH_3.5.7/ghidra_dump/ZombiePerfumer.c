// Class: ZombiePerfumer


/* ZombiePerfumer::~ZombiePerfumer() */

void __thiscall ZombiePerfumer::~ZombiePerfumer(ZombiePerfumer *this)

{
  *(undefined ***)this = &PTR_GetClass_069fc780;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePerfumer_069fd1b0;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombiePerfumer::~ZombiePerfumer() */

void __thiscall ZombiePerfumer::~ZombiePerfumer(ZombiePerfumer *this)

{
  ~ZombiePerfumer(this + -0x10);
  return;
}


/* ZombiePerfumer::~ZombiePerfumer() */

void __thiscall ZombiePerfumer::~ZombiePerfumer(ZombiePerfumer *this)

{
  ~ZombiePerfumer(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombiePerfumer::~ZombiePerfumer() */

void __thiscall ZombiePerfumer::~ZombiePerfumer(ZombiePerfumer *this)

{
  ~ZombiePerfumer(this + -0x10);
  return;
}


/* ZombiePerfumer::ZombiePerfumer() */

void __thiscall ZombiePerfumer::ZombiePerfumer(ZombiePerfumer *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_069fc780;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePerfumer_069fd1b0;
  return;
}


/* ZombiePerfumer::StaticNew() */

ZombiePerfumer * ZombiePerfumer::StaticNew(void)

{
  ZombiePerfumer *this;
  
  this = ::operator_new(0x810);
  ZombiePerfumer(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePerfumer::onEnterState_Throw(ZombieState) */

void ZombiePerfumer::onEnterState_Throw(Zombie *param_1)

{
  long *plVar1;
  code *pcVar2;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)Zombie::GetAnimRig(param_1);
  pcVar2 = *(code **)(*plVar1 + 0x168);
  std::string::string(asStack_58,"attack");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)param_1,onAnimStop);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<ZombiePerfumer,void(ZombiePerfumer::*)(std::string_const&)>(aDStack_38,aCStack_50);
  (*pcVar2)(plVar1,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePerfumer::Throw(Sexy::Point) */

void __thiscall ZombiePerfumer::Throw(ZombiePerfumer *this,Point *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  ZombiePerfumerProps *pZVar3;
  ToxicWaterPerfumeBottleProjectile *this_00;
  undefined8 uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  Board *pBVar8;
  int local_30;
  int local_2c;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((-1 < *(int *)param_2) && (-1 < *(int *)(param_2 + 4))) {
    puVar2 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
                    /* WARNING: Load size is inaccurate */
    pBVar8._0_4_ = *puVar2;
    uVar7 = *(undefined4 *)((long)puVar2 + 4);
    uVar6 = *(undefined4 *)(puVar2 + 1);
    iVar1 = Zombie::getZombieStateSerialization((Zombie *)this);
    ZombieToxicWater::CalcDetailBottleOffset((int)this);
    uVar4 = *(undefined8 *)(gLawnApp + 0x9f0);
    pZVar3 = Zombie::GetProps<ZombiePerfumerProps>((Zombie *)this);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)(pZVar3 + 0x210));
    Board::AddProjectile(pBVar8._0_4_,uVar7,uVar6,uVar4,aRStack_18,this,0);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    ToxicWaterPerfumeBottleProjectile::SetType(this_00,(uint)(iVar1 == 5));
    Sexy::Point::Point((Point *)aRStack_18,(TPoint *)param_2);
    ToxicWaterPerfumeBottleProjectile::SetTargetPoint(this_00,aRStack_18);
    BoardTransforms::GridToBoardSpace(param_2);
    fVar5 = (float)FUN_04eda7b4();
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,(float)local_30,(float)local_2c,0.0);
    Projectile::LaunchAt((Projectile *)this_00,(SexyVector3 *)aRStack_18,250.0,fVar5);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePerfumer::onAnimStop(std::string const&) */

ulong __thiscall ZombiePerfumer::onAnimStop(ZombiePerfumer *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  ulong uVar3;
  RiftThemeFastSpell *pRVar4;
  
  uVar3 = Zombie::getZombieStateSerialization((Zombie *)this);
  Sexy::OutputDebugStrF((wchar_t *)"ZombiePerfumer::onAnimStop getState = %d",uVar3 & 0xffffffff);
  uVar3 = Zombie::getZombieStateSerialization((Zombie *)this);
  if (((int)uVar3 != 5) &&
     (uVar3 = Zombie::getZombieStateSerialization((Zombie *)this), (int)uVar3 != 7)) {
    bVar1 = std::operator==(param_1,"attack");
    if (!bVar1) {
      bVar1 = std::operator==(param_1,"die");
      return (ulong)bVar1;
    }
    pRVar4 = RiftUtils::GetThemeByClass<RiftThemeFastSpell>();
    if ((pRVar4 == (RiftThemeFastSpell *)0x0) || (cVar2 = Creature::IsOnBoard(), cVar2 == '\0')) {
      Zombie::setZombieState((Zombie *)this,1,0);
    }
    else {
      (**(code **)(*(long *)this + 600))(this);
    }
    uVar3 = 1;
    *(undefined4 *)(this + 0x800) = 0;
    this[0x804] = (ZombiePerfumer)0x1;
  }
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePerfumer::findTargetPosition(Sexy::Point&, bool) */

void __thiscall ZombiePerfumer::findTargetPosition(ZombiePerfumer *this,Point *param_1,bool param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  PoisonMistTileSubSystem *pPVar5;
  undefined8 *puVar6;
  BoardTransforms *pBVar7;
  long lVar8;
  code *pcVar9;
  undefined8 local_30;
  Point aPStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2) {
    pBVar7 = (BoardTransforms *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    uVar3 = 1;
    BoardTransforms::BoardSpaceToGrid(pBVar7,*(float *)pBVar7,*(float *)(pBVar7 + 4));
    ZombieToxicWater::GetTargetPos(&local_20,this,aPStack_28);
    *(undefined8 *)param_1 = local_20;
  }
  else {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    EntityFinder::GetEntities
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,1);
    iVar2 = FUN_04eda78c(local_20,local_18);
    if (0 < iVar2) {
      lVar8 = 0;
      uVar3 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)&local_20);
      uVar4 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_20);
      std::
      random_shuffle<__gnu_cxx::__normal_iterator<Pinata**,std::vector<Pinata*,std::allocator<Pinata*>>>>
                (uVar3,uVar4);
      pPVar5 = Board::GetGameSubSystem<PoisonMistTileSubSystem>(*(Board **)(gLawnApp + 0x9f0));
      do {
        puVar6 = (undefined8 *)FUN_04eda798(local_20,lVar8);
        pBVar7 = (BoardTransforms *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                *)*puVar6);
        BoardTransforms::BoardSpaceToGrid(pBVar7,*(float *)pBVar7,*(float *)(pBVar7 + 4));
        pcVar9 = *(code **)(*(long *)pPVar5 + 0xa8);
        Sexy::Point::Point(aPStack_28,(TPoint *)&local_30);
        cVar1 = (*pcVar9)(pPVar5,aPStack_28);
        if (cVar1 == '\0') {
          uVar3 = 1;
          *(undefined8 *)param_1 = local_30;
          goto LAB_04edc9a0;
        }
        lVar8 = lVar8 + 1;
      } while ((int)lVar8 < iVar2);
    }
    uVar3 = 0;
LAB_04edc9a0:
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePerfumer::StaticClassInit() */

void ZombiePerfumer::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombiePerfumer");
      (*pcVar4)(plVar1,asStack_150,FUN_04edd634,0x810,0);
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
  Sexy::Delegate1<ZombieState>::Delegate1<ZombiePerfumer,void(ZombiePerfumer::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombiePerfumer,void(ZombiePerfumer::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombiePerfumer,void(ZombiePerfumer::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_Perfumer_Throw");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04edd3d8(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombiePerfumer::StaticGetClass() */

long * ZombiePerfumer::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePerfumer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePerfumer::GetClass() const */

long * ZombiePerfumer::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePerfumer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePerfumer::onZombieInitialize() */

void __thiscall ZombiePerfumer::onZombieInitialize(ZombiePerfumer *this)

{
  ZombiePerfumerProps *pZVar1;
  RiftThemeFastSpell *pRVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  
  Zombie::setZombieState((Zombie *)this,1,0);
  *(undefined4 *)(this + 0x800) = 0;
  this[0x804] = (ZombiePerfumer)0x1;
  uVar3 = PVZ_EOT();
  *(undefined4 *)(this + 0x808) = uVar3;
  pZVar1 = Zombie::GetProps<ZombiePerfumerProps>((Zombie *)this);
  fVar4 = (float)FUN_04eda780(*(undefined4 *)(pZVar1 + 0x218));
  pRVar2 = RiftUtils::GetThemeByClass<RiftThemeFastSpell>();
  if (pRVar2 != (RiftThemeFastSpell *)0x0) {
    fVar5 = (float)RiftThemeFastSpell::GetReducedCDRate();
    fVar4 = fVar4 * (1.0 - fVar5);
  }
  *(float *)(this + 0x80c) = fVar4;
  Zombie::onZombieInitialize((Zombie *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePerfumer::onUpdate() */

void __thiscall ZombiePerfumer::onUpdate(ZombiePerfumer *this)

{
  char cVar1;
  undefined4 uVar2;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((*(int *)(this + 0x800) == 1) && (cVar1 = RealObject::IsOnTeam(this,2), cVar1 != '\0')) &&
     (cVar1 = ZombieToxicWater::CanCheckThrow((ZombieToxicWater *)this), cVar1 != '\0')) {
    Sexy::Point::Point(aPStack_10);
    cVar1 = TimeUtil::CheckTimeEclapse(*(float *)(this + 0x80c),*(float *)(this + 0x808));
    if ((cVar1 != '\0') && (cVar1 = findTargetPosition(this,aPStack_10,false), cVar1 != '\0')) {
      Zombie::setZombieState((Zombie *)this,0x1f,0);
      uVar2 = PVZ_EOT();
      *(undefined4 *)(this + 0x808) = uVar2;
    }
  }
  Zombie::onUpdate((Zombie *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePerfumer::updateState_Idle() */

void __thiscall ZombiePerfumer::updateState_Idle(ZombiePerfumer *this)

{
  RiftThemeFastSpell *pRVar1;
  undefined4 uVar2;
  
  pRVar1 = RiftUtils::GetThemeByClass<RiftThemeFastSpell>();
  if ((pRVar1 != (RiftThemeFastSpell *)0x0) && (this[0x804] != (ZombiePerfumer)0x0)) {
    this[0x804] = (ZombiePerfumer)0x0;
    *(undefined4 *)(this + 0x800) = 1;
    uVar2 = PVZ_T();
    *(undefined4 *)(this + 0x808) = uVar2;
    Zombie::updateState_Idle((Zombie *)this);
    return;
  }
  Zombie::updateState_Idle((Zombie *)this);
  return;
}


/* ZombiePerfumer::updateState_Walk() */

void __thiscall ZombiePerfumer::updateState_Walk(ZombiePerfumer *this)

{
  char cVar1;
  int iVar2;
  RiftThemeFastSpell *pRVar3;
  float *pfVar4;
  undefined4 uVar5;
  Zombie *pZVar6;
  
  pRVar3 = RiftUtils::GetThemeByClass<RiftThemeFastSpell>();
  if ((pRVar3 != (RiftThemeFastSpell *)0x0) && (cVar1 = Creature::IsOnBoard(), cVar1 != '\0')) {
    this[0x804] = (ZombiePerfumer)0x1;
    pZVar6._0_4_ = (Zombie *)PVZ_EOT();
    Zombie::ApplyCondition(pZVar6._0_4_,0,this,0x6f,1);
    return;
  }
  iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar2 = BoardTransforms::GridToBoardSpaceX(iVar2 + -1);
  pfVar4 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  if (*pfVar4 <= (float)iVar2) {
    if (this[0x804] != (ZombiePerfumer)0x0) {
      this[0x804] = (ZombiePerfumer)0x0;
      *(undefined4 *)(this + 0x800) = 1;
      uVar5 = PVZ_T();
      *(undefined4 *)(this + 0x808) = uVar5;
    }
    Zombie::updateState_Walk((Zombie *)this);
    return;
  }
  Zombie::updateState_Walk((Zombie *)this);
  this[0x804] = (ZombiePerfumer)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePerfumer::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void ZombiePerfumer::onPopAnimCommand(string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  Point aPStack_18 [8];
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_4,"use_action");
  if (bVar1) {
    Sexy::Point::Point(aPStack_18);
    iVar3 = Zombie::getZombieStateSerialization((Zombie *)param_1);
    if (iVar3 == 0x1f) {
      cVar2 = findTargetPosition((ZombiePerfumer *)param_1,aPStack_18,false);
    }
    else {
      iVar3 = Zombie::getZombieStateSerialization((Zombie *)param_1);
      if (iVar3 != 5) goto LAB_04edddf8;
      cVar2 = findTargetPosition((ZombiePerfumer *)param_1,aPStack_18,true);
    }
    if (cVar2 != '\0') {
      Sexy::Point::Point(aPStack_10,(TPoint *)aPStack_18);
      Throw((ZombiePerfumer *)param_1,aPStack_10);
    }
  }
LAB_04edddf8:
  Zombie::onPopAnimCommand(param_1,param_2,param_3,param_4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

