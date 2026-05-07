// Class: ZombieToxicWater


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieToxicWater::CalcDetailBottleOffset(int) */

void ZombieToxicWater::CalcDetailBottleOffset(int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DVec3::DVec3((DVec3 *)&local_28);
  local_18 = local_28;
  uVar2 = local_18;
  local_10 = local_20;
  local_18._0_4_ = (undefined4)local_28;
  uVar1 = (undefined4)local_18;
  local_18._4_4_ = (undefined4)((ulong)local_28 >> 0x20);
  uVar3 = local_18._4_4_;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
  local_18 = uVar2;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1,uVar3,local_20);
}


/* ZombieToxicWater::CanCheckThrow() */

bool __thiscall ZombieToxicWater::CanCheckThrow(ZombieToxicWater *this)

{
  int iVar1;
  
  iVar1 = Zombie::getZombieStateSerialization((Zombie *)this);
  return 1 < iVar1 - 4U && iVar1 != 7;
}


/* ZombieToxicWater::GetTargetPos(Sexy::Point) */

Point * ZombieToxicWater::GetTargetPos(Point *param_1,undefined8 param_2,TPoint *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  Sexy::Point::Point(param_1,param_3);
  iVar1 = *(int *)param_1;
  iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
  uVar3 = ClampInt(iVar1 + -2,0,iVar2 + -1);
  *(undefined4 *)param_1 = uVar3;
  return param_1;
}


/* ZombieToxicWater::onEndCompleted() */

void __thiscall ZombieToxicWater::onEndCompleted(ZombieToxicWater *this)

{
  Zombie::SetFacing((Zombie *)this,1);
  return;
}


/* ZombieToxicWater::~ZombieToxicWater() */

void __thiscall ZombieToxicWater::~ZombieToxicWater(ZombieToxicWater *this)

{
  *(undefined ***)this = &PTR_GetClass_069fd840;
  *(undefined ***)(this + 0x10) = &PTR__ZombieToxicWater_069fe270;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieToxicWater::~ZombieToxicWater() */

void __thiscall ZombieToxicWater::~ZombieToxicWater(ZombieToxicWater *this)

{
  ~ZombieToxicWater(this + -0x10);
  return;
}


/* ZombieToxicWater::~ZombieToxicWater() */

void __thiscall ZombieToxicWater::~ZombieToxicWater(ZombieToxicWater *this)

{
  ~ZombieToxicWater(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieToxicWater::~ZombieToxicWater() */

void __thiscall ZombieToxicWater::~ZombieToxicWater(ZombieToxicWater *this)

{
  ~ZombieToxicWater(this + -0x10);
  return;
}


/* ZombieToxicWater::ZombieToxicWater() */

void __thiscall ZombieToxicWater::ZombieToxicWater(ZombieToxicWater *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_069fd840;
  *(undefined ***)(this + 0x10) = &PTR__ZombieToxicWater_069fe270;
  Sexy::Point::Point((Point *)(this + 0x800),0,0);
  *(undefined4 *)(this + 0x808) = 0;
  *(undefined4 *)(this + 0x82c) = 0;
  *(undefined4 *)(this + 0x830) = 0;
  *(undefined4 *)(this + 0x80c) = 0;
  *(undefined4 *)(this + 0x820) = 0;
  *(undefined4 *)(this + 0x824) = 0;
  *(undefined4 *)(this + 0x828) = 0;
  return;
}


/* ZombieToxicWater::StaticNew() */

ZombieToxicWater * ZombieToxicWater::StaticNew(void)

{
  ZombieToxicWater *this;
  
  this = ::operator_new(0x838);
  ZombieToxicWater(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieToxicWater::onEnterState_Throw(ZombieState) */

void ZombieToxicWater::onEnterState_Throw(Zombie *param_1)

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
  Delegate1<ZombieToxicWater,void(ZombieToxicWater::*)(std::string_const&)>(aDStack_38,aCStack_50);
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
/* ZombieToxicWater::Throw(Sexy::Point) */

void __thiscall ZombieToxicWater::Throw(ZombieToxicWater *this,Point *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  ZombieToxicWaterProps *pZVar3;
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
    CalcDetailBottleOffset((int)this);
    uVar4 = *(undefined8 *)(gLawnApp + 0x9f0);
    pZVar3 = Zombie::GetProps<ZombieToxicWaterProps>((Zombie *)this);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)(pZVar3 + 0x210));
    Board::AddProjectile(pBVar8._0_4_,uVar7,uVar6,uVar4,aRStack_18,this,0);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    ToxicWaterPerfumeBottleProjectile::SetType(this_00,(uint)(iVar1 == 5));
    Sexy::Point::Point((Point *)aRStack_18,(TPoint *)param_2);
    ToxicWaterPerfumeBottleProjectile::SetTargetPoint(this_00,aRStack_18);
    BoardTransforms::GridToBoardSpace(param_2);
    fVar5 = (float)FUN_04ede0a0();
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,(float)local_30,(float)local_2c,0.0);
    Projectile::LaunchAt((Projectile *)this_00,(SexyVector3 *)aRStack_18,250.0,fVar5);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieToxicWater::onStartCompleted() */

void __thiscall ZombieToxicWater::onStartCompleted(ZombieToxicWater *this)

{
  undefined4 uVar1;
  int iVar2;
  ZombieHydraHeadAnimRig *pZVar3;
  long lVar4;
  RtObject *this_00;
  PoolDaylightStage *this_01;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onLoopCompleted");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ToxicWater::PlayToxicEndAnimation((ZombieAnimRig_ToxicWater *)pZVar3,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  uVar1 = Board::GetCurrentWave(*(Board **)(gLawnApp + 0x9f0));
  *(undefined4 *)(this + 0x830) = uVar1;
  lVar4 = Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
  if (lVar4 != 0) {
    this_00 = (RtObject *)Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
    this_01 = Sexy::RtObject::Cast<PoolDaylightStage>(this_00);
    if (this_01 != (PoolDaylightStage *)0x0) {
      PoolDaylightStage::WaterEffChange(this_01,true);
      iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
      if (iVar2 == 1) {
        this_01[0xe5] = (PoolDaylightStage)0x1;
      }
      else {
        iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
        if (iVar2 == 2) {
          this_01[0xe6] = (PoolDaylightStage)0x1;
        }
        else {
          this_01[0xe7] = (PoolDaylightStage)0x1;
        }
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
/* ZombieToxicWater::onLoopCompleted() */

void __thiscall ZombieToxicWater::onLoopCompleted(ZombieToxicWater *this)

{
  int iVar1;
  PopAnimRig *pPVar2;
  long lVar3;
  RtObject *this_00;
  PoolDaylightStage *this_01;
  ZombieHydraHeadAnimRig *pZVar4;
  undefined4 uVar5;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  DummyInit aDStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = Board::GetCurrentWave(*(Board **)(gLawnApp + 0x9f0));
  if (iVar1 - *(int *)(this + 0x830) < *(int *)(this + 0x808)) {
    *(undefined4 *)(this + 0x82c) = 2;
    pZVar4 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onLoopCompleted");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aDStack_50,aRStack_60,
               asStack_58);
    ZombieAnimRig_ToxicWater::PlayToxicEndAnimation
              ((ZombieAnimRig_ToxicWater *)pZVar4,
               (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aDStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aDStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  else {
    uVar5 = PVZ_T();
    *(undefined4 *)(this + 0x82c) = 3;
    *(undefined4 *)(this + 0x820) = uVar5;
    Zombie::setZombieState((Zombie *)this,1,0);
    *(undefined4 *)(this + 0x810) = 0;
    this[0x814] = (ZombieToxicWater)0x1;
    Zombie::SetFacing((Zombie *)this,1);
    pPVar2 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
    std::string::string(asStack_58,"walk");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_50);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_58,0,aDStack_50);
    std::string::~string(asStack_58);
    nop();
    lVar3 = Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
    if (lVar3 != 0) {
      this_00 = (RtObject *)Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
      this_01 = Sexy::RtObject::Cast<PoolDaylightStage>(this_00);
      if (this_01 != (PoolDaylightStage *)0x0) {
        iVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
        if (iVar1 == 1) {
          this_01[0xe5] = (PoolDaylightStage)0x0;
        }
        else {
          iVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
          if (iVar1 == 2) {
            this_01[0xe6] = (PoolDaylightStage)0x0;
          }
          else {
            this_01[0xe7] = (PoolDaylightStage)0x0;
          }
        }
        PoolDaylightStage::WaterEffChange(this_01,false);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieToxicWater::onAnimStop(std::string const&) */

ulong __thiscall ZombieToxicWater::onAnimStop(ZombieToxicWater *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  ulong uVar3;
  RiftThemeFastSpell *pRVar4;
  
  uVar3 = Zombie::getZombieStateSerialization((Zombie *)this);
  Sexy::OutputDebugStrF((wchar_t *)"ZombieToxicWater::onAnimStop getState = %d",uVar3 & 0xffffffff);
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
    *(undefined4 *)(this + 0x810) = 0;
    this[0x814] = (ZombieToxicWater)0x1;
  }
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieToxicWater::StaticClassInit() */

void ZombieToxicWater::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieToxicWater");
      (*pcVar4)(plVar1,asStack_150,FUN_04ee0e04,0x838,0);
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
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieToxicWater,void(ZombieToxicWater::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieToxicWater,void(ZombieToxicWater::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieToxicWater,void(ZombieToxicWater::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_ToxicWater_Throw");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04ee0ba8(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieToxicWater::StaticGetClass() */

long * ZombieToxicWater::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieToxicWater",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieToxicWater::GetClass() const */

long * ZombieToxicWater::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieToxicWater",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieToxicWater::onZombieInitialize() */

void __thiscall ZombieToxicWater::onZombieInitialize(ZombieToxicWater *this)

{
  ZombieToxicWaterProps *pZVar1;
  RiftThemeFastSpell *pRVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  
  Zombie::setZombieState((Zombie *)this,1,0);
  *(undefined4 *)(this + 0x810) = 0;
  this[0x814] = (ZombieToxicWater)0x1;
  uVar3 = PVZ_EOT();
  *(undefined4 *)(this + 0x818) = uVar3;
  pZVar1 = Zombie::GetProps<ZombieToxicWaterProps>((Zombie *)this);
  fVar4 = (float)FUN_04ede06c(*(undefined4 *)(pZVar1 + 0x218));
  pRVar2 = RiftUtils::GetThemeByClass<RiftThemeFastSpell>();
  if (pRVar2 != (RiftThemeFastSpell *)0x0) {
    fVar5 = (float)RiftThemeFastSpell::GetReducedCDRate();
    fVar4 = fVar4 * (1.0 - fVar5);
  }
  *(float *)(this + 0x81c) = fVar4;
  Zombie::onZombieInitialize((Zombie *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieToxicWater::onUpdate() */

void __thiscall ZombieToxicWater::onUpdate(ZombieToxicWater *this)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float *pfVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  Plant *this_00;
  ulong uVar11;
  ZombieHydraHeadAnimRig *pZVar12;
  Plant *pPVar13;
  Zombie *pZVar14;
  GridItem *pGVar15;
  ulong uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  string asStack_110 [8];
  undefined8 local_108;
  undefined8 local_100;
  string asStack_f8 [8];
  Insets aIStack_f0 [16];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 local_c0;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_b0 [72];
  undefined8 local_68;
  undefined4 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar7 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar18 = *pfVar7;
  iVar4 = BoardTransforms::GridToBoardSpaceX(8);
  if ((fVar18 <= (float)iVar4) && (*(int *)(this + 0x82c) == 0)) {
    uVar17 = FUN_04ede060(*(undefined4 *)(this + 0x360));
    *(undefined4 *)(this + 0x82c) = 1;
    *(undefined4 *)(this + 0x824) = uVar17;
    pZVar12 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)&local_e0);
    std::string::string((string *)&local_68,"onStartCompleted");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_b0,
               (RtId *)&local_c8,(string *)&local_68);
    ZombieAnimRig_ToxicWater::PlayToxicEndAnimation((ZombieAnimRig_ToxicWater *)pZVar12,aRStack_b0);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_b0);
    std::string::~string((string *)&local_68);
    nop();
    Sexy::RtId::~RtId((RtId *)&local_c8);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_e0);
  }
  fVar19 = *(float *)(this + 0x820);
  fVar18 = (float)PVZ_T();
  iVar4 = *(int *)(this + 0x82c);
  if ((fVar19 < fVar18 - 10.0) && (iVar4 == 3)) {
    (**(code **)(*(long *)this + 0x48))(this);
    iVar4 = *(int *)(this + 0x82c);
  }
  if ((iVar4 == 2) &&
     (fVar19 = *(float *)(this + 0x828), fVar18 = (float)PVZ_T(), fVar19 < fVar18 - 1.0)) {
    uVar17 = PVZ_T();
    uVar16 = 0;
    *(undefined4 *)(this + 0x828) = uVar17;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_e0);
    Sexy::Insets::Insets
              (aIStack_f0,0,1,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8),
               *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc) + -2);
    uVar8 = operator|(2,4);
    uVar17 = operator|(uVar8,1);
    EntityFinder::GetEntitiesInGridSquares
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_e0,uVar17,
               aIStack_f0);
    uVar8 = local_e0;
    lVar9 = FUN_04ede078(local_e0,local_d8);
    if (lVar9 != 0) {
      do {
        puVar10 = (undefined8 *)FUN_04ede084(uVar8,uVar16);
        this_00 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar10);
        if (this_00 == (Plant *)0x0) {
LAB_04ee19fc:
          puVar10 = (undefined8 *)FUN_04ede084(local_e0,uVar16);
          pZVar14 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar10);
          if ((pZVar14 == (Zombie *)0x0) ||
             (cVar3 = Zombie::HasCondition(pZVar14,0x1a), cVar3 == '\0')) {
            puVar10 = (undefined8 *)FUN_04ede084(local_e0,uVar16);
            pGVar15 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar10);
            if (pGVar15 != (GridItem *)0x0) {
              GridItem::GetType();
              lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
              FUN_05475d88((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)
                           &local_c8,lVar9 + 8);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
              bVar1 = std::operator==((string *)&local_c8,"lilypad");
              if (bVar1) {
                DamageInfo::DamageInfo((DamageInfo *)&local_68);
                local_68 = 0;
                local_60 = *(undefined4 *)(this + 0x80c);
                (**(code **)(*(long *)pGVar15 + 0x110))
                          (pGVar15,(RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
                DamageInfo::~DamageInfo((DamageInfo *)&local_68);
                std::string::~string((string *)&local_c8);
              }
              else {
                std::string::~string((string *)&local_c8);
              }
            }
          }
          else {
            DamageInfo::DamageInfo((DamageInfo *)&local_68);
            local_68 = 0;
            local_60 = *(undefined4 *)(this + 0x80c);
            (**(code **)(*(long *)pZVar14 + 0x110))
                      (pZVar14,(RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
            DamageInfo::~DamageInfo((DamageInfo *)&local_68);
          }
        }
        else {
          Plant::GetType();
          lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
          FUN_05475d88(asStack_110,lVar9 + 8);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
          bVar1 = std::operator==(asStack_110,"lilypad");
          if (bVar1) {
            DamageInfo::DamageInfo((DamageInfo *)&local_68);
            local_68 = 0;
            local_60 = *(undefined4 *)(this + 0x80c);
            (**(code **)(*(long *)this_00 + 0x110))
                      (this_00,(RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
            DamageInfo::~DamageInfo((DamageInfo *)&local_68);
          }
          else {
            uVar17 = BoardEntity::CalcColumnPosition((BoardEntity *)this_00);
            uVar5 = SharkMinion::getRow((SharkMinion *)this_00);
            std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                      ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_c8);
            uVar6 = operator|(4,1);
            EntityFinder::GetEntitiesAtGridSquare
                      ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_c8,
                       uVar6,uVar17,uVar5);
            lVar9 = FUN_04ede078(local_c8,local_c0);
            if (lVar9 != 0) {
              bVar1 = true;
              local_108 = std::
                          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                   *)&local_c8);
              local_100 = std::
                          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                 *)&local_c8);
              while (bVar2 = __gnu_cxx::operator!=
                                       ((__normal_iterator *)&local_108,
                                        (__normal_iterator *)&local_100), bVar2) {
                puVar10 = (undefined8 *)
                          std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_108);
                pPVar13 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar10);
                if (pPVar13 != (Plant *)0x0) {
                  Plant::GetType();
                  lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
                  FUN_05475d88(asStack_f8,lVar9 + 8);
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
                  bVar2 = std::operator==(asStack_f8,"lilypad");
                  if (bVar2) {
                    bVar1 = false;
                  }
                  std::string::~string(asStack_f8);
                }
                pGVar15 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar10);
                if (pGVar15 != (GridItem *)0x0) {
                  GridItem::GetType();
                  lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
                  FUN_05475d88(asStack_f8,lVar9 + 8);
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
                  bVar2 = std::operator==(asStack_f8,"lilypad");
                  if (bVar2) {
                    bVar1 = false;
                  }
                  std::string::~string(asStack_f8);
                }
                eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                          ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_108);
              }
              if (!bVar1) {
                std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                          ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_c8);
                std::string::~string(asStack_110);
                goto LAB_04ee19fc;
              }
            }
            DamageInfo::DamageInfo((DamageInfo *)&local_68);
            local_68 = 0;
            local_60 = *(undefined4 *)(this + 0x80c);
            (**(code **)(*(long *)this_00 + 0x110))
                      (this_00,(RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
            Plant::ApplyCondition(0x3f8ccccd,0,this_00,0x1e);
            DamageInfo::~DamageInfo((DamageInfo *)&local_68);
            std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_c8);
          }
          std::string::~string(asStack_110);
        }
        uVar8 = local_e0;
        uVar16 = uVar16 + 1;
        uVar11 = FUN_04ede078(local_e0,local_d8);
      } while (uVar16 < uVar11);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_e0);
  }
  Zombie::onUpdate((Zombie *)this);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieToxicWater::updateState_Idle() */

void __thiscall ZombieToxicWater::updateState_Idle(ZombieToxicWater *this)

{
  RiftThemeFastSpell *pRVar1;
  undefined4 uVar2;
  
  pRVar1 = RiftUtils::GetThemeByClass<RiftThemeFastSpell>();
  if ((pRVar1 != (RiftThemeFastSpell *)0x0) && (this[0x814] != (ZombieToxicWater)0x0)) {
    this[0x814] = (ZombieToxicWater)0x0;
    *(undefined4 *)(this + 0x810) = 1;
    uVar2 = PVZ_T();
    *(undefined4 *)(this + 0x818) = uVar2;
    Zombie::updateState_Idle((Zombie *)this);
    return;
  }
  Zombie::updateState_Idle((Zombie *)this);
  return;
}


/* ZombieToxicWater::updateState_Walk() */

void __thiscall ZombieToxicWater::updateState_Walk(ZombieToxicWater *this)

{
  char cVar1;
  int iVar2;
  RiftThemeFastSpell *pRVar3;
  float *pfVar4;
  undefined4 uVar5;
  Zombie *pZVar6;
  
  pRVar3 = RiftUtils::GetThemeByClass<RiftThemeFastSpell>();
  if ((pRVar3 != (RiftThemeFastSpell *)0x0) && (cVar1 = Creature::IsOnBoard(), cVar1 != '\0')) {
    this[0x814] = (ZombieToxicWater)0x1;
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
    if (this[0x814] != (ZombieToxicWater)0x0) {
      this[0x814] = (ZombieToxicWater)0x0;
      *(undefined4 *)(this + 0x810) = 1;
      uVar5 = PVZ_T();
      *(undefined4 *)(this + 0x818) = uVar5;
    }
    Zombie::updateState_Walk((Zombie *)this);
    return;
  }
  Zombie::updateState_Walk((Zombie *)this);
  this[0x814] = (ZombieToxicWater)0x1;
  return;
}


/* ZombieToxicWater::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void ZombieToxicWater::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  std::operator==(param_4,"use_action");
  Zombie::onPopAnimCommand(param_1,param_2,param_3,param_4);
  return;
}

