// Class: ZombieSelfExplode


/* ZombieSelfExplode::~ZombieSelfExplode() */

void __thiscall ZombieSelfExplode::~ZombieSelfExplode(ZombieSelfExplode *this)

{
  *(undefined ***)this = &PTR_GetClass_068b94f0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieSelfExplode_068b9f20;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieSelfExplode::~ZombieSelfExplode() */

void __thiscall ZombieSelfExplode::~ZombieSelfExplode(ZombieSelfExplode *this)

{
  ~ZombieSelfExplode(this + -0x10);
  return;
}


/* ZombieSelfExplode::~ZombieSelfExplode() */

void __thiscall ZombieSelfExplode::~ZombieSelfExplode(ZombieSelfExplode *this)

{
  ~ZombieSelfExplode(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieSelfExplode::~ZombieSelfExplode() */

void __thiscall ZombieSelfExplode::~ZombieSelfExplode(ZombieSelfExplode *this)

{
  ~ZombieSelfExplode(this + -0x10);
  return;
}


/* ZombieSelfExplode::ZombieSelfExplode() */

void __thiscall ZombieSelfExplode::ZombieSelfExplode(ZombieSelfExplode *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_068b94f0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieSelfExplode_068b9f20;
  return;
}


/* ZombieSelfExplode::StaticNew() */

ZombieSelfExplode * ZombieSelfExplode::StaticNew(void)

{
  ZombieSelfExplode *this;
  
  this = ::operator_new(0x808);
  ZombieSelfExplode(this);
  return this;
}


/* ZombieSelfExplode::setIsBombBurning(bool) */

void __thiscall ZombieSelfExplode::setIsBombBurning(ZombieSelfExplode *this,bool param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  
  if (!param_1) {
    this[0x800] = (ZombieSelfExplode)0x0;
    pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
    ZombieAnimRig_SelfExplode::SetTorchLayers((ZombieAnimRig_SelfExplode *)pZVar1,false);
    return;
  }
  this[0x800] = (ZombieSelfExplode)0x1;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  ZombieAnimRig_SelfExplode::SetTorchLayers((ZombieAnimRig_SelfExplode *)pZVar1,true);
  return;
}


/* ZombieSelfExplode::onLostArm() */

void __thiscall ZombieSelfExplode::onLostArm(ZombieSelfExplode *this)

{
  if (this[0x800] == (ZombieSelfExplode)0x0) {
    return;
  }
  setIsBombBurning(this,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSelfExplode::onBigBangAnimationDone(StandaloneEffect*) */

void ZombieSelfExplode::onBigBangAnimationDone(StandaloneEffect *param_1)

{
  char cVar1;
  float *pfVar2;
  Effect_PopAnim *pEVar3;
  ResourceInfo *pRVar4;
  float fVar5;
  float fVar6;
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if ((cVar1 == '\0') && (param_1[0x801] != (StandaloneEffect)0x0)) {
    param_1[0x801] = (StandaloneEffect)0x0;
    std::string::string(asStack_18,"Play_CherryBomb");
    RealObject::PlayPositionalSound((RealObject *)param_1,asStack_18,0.0);
    std::string::~string(asStack_18);
    nop();
    pfVar2 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)param_1);
    fVar5 = *pfVar2;
    fVar6 = pfVar2[1];
    pEVar3 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string(asStack_20,"POPANIM_EFFECTS_CHERRYBOMB_EXPLOSION_TOP");
    GetPAMByName(asStack_20);
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_18);
    Effect_PopAnim::CreatePopAnimRig(pEVar3,(PopAnim *)pRVar4,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    std::string::~string(asStack_20);
    nop();
    (**(code **)(*(long *)pEVar3 + 0x80))(0x3fc00000,pEVar3);
    EATextSquish::Vec3::Vec3
              ((Vec3 *)asStack_18,(float)(int)(fVar5 - 130.0),(float)(int)(fVar6 - 290.0),0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar3,(SexyVector3 *)asStack_18,-1);
    FUN_046f7b48(pEVar3 + 0x1c,500000);
    std::string::string(asStack_18,"animation");
    Effect_PopAnim::PlaySingleAnimation(pEVar3,asStack_18,0);
    std::string::~string(asStack_18);
    nop();
    pEVar3 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    (**(code **)(*(long *)pEVar3 + 0x80))(0x3fc00000);
    std::string::string(asStack_20,"POPANIM_EFFECTS_CHERRYBOMB_EXPLOSION_REAR");
    GetPAMByName(asStack_20);
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_18);
    Effect_PopAnim::CreatePopAnimRig(pEVar3,(PopAnim *)pRVar4,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    std::string::~string(asStack_20);
    nop();
    EATextSquish::Vec3::Vec3
              ((Vec3 *)asStack_18,(float)(int)(fVar5 - 130.0),(float)(int)(fVar6 - 290.0),0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar3,(SexyVector3 *)asStack_18,-1);
    FUN_046f7b48(pEVar3 + 0x1c,300000);
    std::string::string(asStack_18,"animation");
    Effect_PopAnim::PlaySingleAnimation(pEVar3,asStack_18,0);
    std::string::~string(asStack_18);
    nop();
    Board::ShakeBoard(*(Board **)(gLawnApp + 0x9f0),3,-4,0.0);
    (**(code **)(*(long *)param_1 + 0x218))(param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSelfExplode::TryDetonatedBomb() */

void __thiscall ZombieSelfExplode::TryDetonatedBomb(ZombieSelfExplode *this)

{
  char cVar1;
  int iVar2;
  ZombieHydraHeadAnimRig *pZVar3;
  char *__s;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Zombie::isInState((Zombie *)this,4);
  if ((((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)this + 0x328))(this), cVar1 == '\0')) &&
      (cVar1 = Zombie::IsSuspended((Zombie *)this), cVar1 == '\0')) &&
     (this[0x800] != (ZombieSelfExplode)0x0)) {
    this[0x800] = (ZombieSelfExplode)0x0;
    this[0x801] = (ZombieSelfExplode)0x1;
    iVar2 = (**(code **)(*(long *)this + 0x300))(this,2);
    if (iVar2 == 0) {
      __s = "Play_Zomb_Kongfu_SelfExplode_Surprise1";
    }
    else {
      __s = "Play_Zomb_Kongfu_SelfExplode_Surprise2";
    }
    std::string::string(asStack_58,__s);
    RealObject::PlayPositionalSound((RealObject *)this,asStack_58,0.0);
    std::string::~string(asStack_58);
    nop();
    pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onBigBangAnimationDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    ZombieAnimRig_SelfExplode::PlayBigBang((ZombieAnimRig_SelfExplode *)pZVar3,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    Zombie::setZombieState((Zombie *)this,0x1f,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSelfExplode::findAndBurnAPlant() */

void __thiscall ZombieSelfExplode::findAndBurnAPlant(ZombieSelfExplode *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  RtObject *this_00;
  PlantGroup *pPVar4;
  long lVar5;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)(**(code **)(*(long *)this + 0x228))();
  if (((this_00 != (RtObject *)0x0) &&
      (pPVar4 = Sexy::RtObject::Cast<PlantGroup>(this_00), pPVar4 != (PlantGroup *)0x0)) &&
     (iVar2 = (**(code **)(*(long *)pPVar4 + 0x180))(), 0 < iVar2)) {
    iVar2 = FUN_046f7b50(*(undefined4 *)(pPVar4 + 0xa8));
    iVar3 = SharkMinion::getRow((SharkMinion *)this);
    if (iVar2 == iVar3) {
      TryDetonatedBomb(this);
      PlantGroup::GetPlantAtLayer(aRStack_10,pPVar4,1);
      Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      Plant::GetType();
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      bVar1 = std::operator==((string *)(lVar5 + 8),"potatomine");
      if ((bVar1) && (this[0x802] == (ZombieSelfExplode)0x0)) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        Zombie::setZombieState((Zombie *)this,2,0);
      }
      else {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSelfExplode::onApplyCondition(ZombieConditions) */

void __thiscall ZombieSelfExplode::onApplyCondition(ZombieSelfExplode *this,uint param_2)

{
  if (this[0x800] == (ZombieSelfExplode)0x0) {
    if ((this[0x801] == (ZombieSelfExplode)0x0) || ((1 < param_2 && (param_2 != 0x10))))
    goto joined_r0x046f8460;
  }
  else {
    if ((1 < param_2) && (param_2 != 0x10)) goto joined_r0x046f8460;
    setIsBombBurning(this,false);
    (**(code **)(*(long *)this + 0x238))(this);
    if (this[0x801] == (ZombieSelfExplode)0x0) goto joined_r0x046f8460;
  }
  this[0x801] = (ZombieSelfExplode)0x0;
  setIsBombBurning(this,false);
  (**(code **)(*(long *)this + 0x238))(this);
  (**(code **)(*(long *)this + 0x260))(this);
joined_r0x046f8460:
  if (param_2 == 0x37) {
    TryDetonatedBomb(this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSelfExplode::StaticClassInit() */

void ZombieSelfExplode::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieSelfExplode");
      (*pcVar4)(plVar1,asStack_150,FUN_046f86f8,0x808,0);
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
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieSelfExplode,void(ZombieSelfExplode::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieSelfExplode,void(ZombieSelfExplode::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieSelfExplode,void(ZombieSelfExplode::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_SelfExplode_Detonate");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046f849c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieSelfExplode::StaticGetClass() */

long * ZombieSelfExplode::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieSelfExplode",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSelfExplode::GetClass() const */

long * ZombieSelfExplode::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieSelfExplode",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSelfExplode::onZombieInitialize() */

void __thiscall ZombieSelfExplode::onZombieInitialize(ZombieSelfExplode *this)

{
  Zombie::onZombieInitialize((Zombie *)this);
  this[0x801] = (ZombieSelfExplode)0x0;
  this[0x800] = (ZombieSelfExplode)0x1;
  this[0x802] = (ZombieSelfExplode)0x0;
  return;
}


/* ZombieSelfExplode::updateState_Walk() */

void __thiscall ZombieSelfExplode::updateState_Walk(ZombieSelfExplode *this)

{
  RtObject *this_00;
  GridItem *this_01;
  GridItemArmrack *pGVar1;
  
  if (this[0x800] == (ZombieSelfExplode)0x0) {
    Zombie::updateState_Walk((Zombie *)this);
    return;
  }
  this_00 = (RtObject *)(**(code **)(*(long *)this + 0x228))();
  if (((this_00 != (RtObject *)0x0) &&
      (this_01 = Sexy::RtObject::Cast<GridItem>(this_00), this_01 != (GridItem *)0x0)) &&
     (pGVar1 = Sexy::RtObject::Cast<GridItemArmrack>((RtObject *)this_01),
     pGVar1 == (GridItemArmrack *)0x0)) {
    Zombie::setZombieState((Zombie *)this,2,0);
    return;
  }
  findAndBurnAPlant(this);
  return;
}


/* ZombieSelfExplode::onEnterState_Eat(ZombieState) */

void ZombieSelfExplode::onEnterState_Eat(long param_1)

{
  if (*(char *)(param_1 + 0x801) == '\0') {
    Zombie::onEnterState_Winning();
  }
  *(undefined1 *)(param_1 + 0x802) = 1;
  return;
}


/* ZombieSelfExplode::updateState_Eat() */

void __thiscall ZombieSelfExplode::updateState_Eat(ZombieSelfExplode *this)

{
  RtObject *this_00;
  GridItem *pGVar1;
  
  if ((this[0x801] != (ZombieSelfExplode)0x0) ||
     (Zombie::updateState_Eat((Zombie *)this), this[0x800] == (ZombieSelfExplode)0x0)) {
    return;
  }
  this_00 = (RtObject *)(**(code **)(*(long *)this + 0x228))(this);
  if ((this_00 != (RtObject *)0x0) &&
     (pGVar1 = Sexy::RtObject::Cast<GridItem>(this_00), pGVar1 != (GridItem *)0x0)) {
    Zombie::updateState_Eat((Zombie *)this);
    return;
  }
  findAndBurnAPlant(this);
  return;
}


/* ZombieSelfExplode::onExitState_Eat(ZombieState) */

void __thiscall ZombieSelfExplode::onExitState_Eat(ZombieSelfExplode *this)

{
  nop();
  this[0x802] = (ZombieSelfExplode)0x0;
  return;
}


/* ZombieSelfExplode::CalcZombieAttackRect() */

void ZombieSelfExplode::CalcZombieAttackRect(void)

{
  long in_x0;
  int *in_x8;
  
  Zombie::CalcZombieAttackRect();
  if (*(char *)(in_x0 + 0x800) == '\0') {
    *in_x8 = *in_x8 + 0x10;
  }
  return;
}


/* ZombieSelfExplode::onTakeFatalDamage(DamageInfo const&) */

void ZombieSelfExplode::onTakeFatalDamage(DamageInfo *param_1)

{
  Zombie::onTakeFatalDamage(param_1);
  setIsBombBurning((ZombieSelfExplode *)param_1,false);
  return;
}

