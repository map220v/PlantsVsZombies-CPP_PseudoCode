// Class: ZombiePVPSeagull


/* ZombiePVPSeagull::onExitState_Electrocute(ZombieState) */

void __thiscall ZombiePVPSeagull::onExitState_Electrocute(ZombiePVPSeagull *this)

{
  PopAnimRig *this_00;
  
  this_00 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
  PopAnimRig::SetDisabled(this_00,false);
  nop();
  return;
}


/* ZombiePVPSeagull::hasHeadParticle() const */

ZombiePVPSeagull __thiscall ZombiePVPSeagull::hasHeadParticle(ZombiePVPSeagull *this)

{
  return this[0x802];
}


/* ZombiePVPSeagull::canTargetEntityHeight(BoardEntityHeight) */

char __thiscall ZombiePVPSeagull::canTargetEntityHeight(ZombiePVPSeagull *this,int param_2)

{
  char cVar1;
  
  cVar1 = Zombie::IsOnGround((Zombie *)this);
  if (cVar1 == '\0') {
    cVar1 = 1 < param_2;
  }
  return cVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPSeagull::getElectrocutePAMName() const */

void __thiscall ZombiePVPSeagull::getElectrocutePAMName(ZombiePVPSeagull *this)

{
  char cVar1;
  string *extraout_x1;
  string *in_x8;
  Sexy aSStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(in_x8,"POPANIM_EFFECTS_ZOMBIE_SEAGULL_SHOCK");
  nop();
  Zombie::GetElectrocuteColor();
  cVar1 = FUN_0547419c(aSStack_18);
  if (cVar1 == '\0') {
    FUN_05475ad8();
    Sexy::Upper(aSStack_18,extraout_x1);
    thunk_FUN_054757c0();
    std::string::~string(asStack_10);
  }
  std::string::~string((string *)aSStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPSeagull::onEnterState_Ash(ZombieState) */

void ZombiePVPSeagull::onEnterState_Ash(Zombie *param_1)

{
  PopAnimRig *this;
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (PopAnimRig *)Zombie::GetAnimRig(param_1);
  Sexy::Color::Color(aCStack_18,0);
  PopAnimRig::SetShaderOverrideColor(this,aCStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePVPSeagull::findTarget() */

undefined8 __thiscall ZombiePVPSeagull::findTarget(ZombiePVPSeagull *this)

{
  undefined8 uVar1;
  
  if (this[0x800] == (ZombiePVPSeagull)0x0) {
    uVar1 = Zombie::findTarget((Zombie *)this);
    return uVar1;
  }
  return 0;
}


/* ZombiePVPSeagull::onBigFireAnimStopped(std::string const&) */

void ZombiePVPSeagull::onBigFireAnimStopped(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 == '\0') {
    (**(code **)(*(long *)param_1 + 0x4b8))(param_1);
    (**(code **)(*(long *)param_1 + 0x260))(param_1);
  }
  return;
}


/* ZombiePVPSeagull::onApplyCondition(ZombieConditions) */

void __thiscall ZombiePVPSeagull::onApplyCondition(ZombiePVPSeagull *this,int param_2)

{
  if (param_2 - 3U < 2) {
    this[0x801] = (ZombiePVPSeagull)0x1;
    Zombie::TakeFatalDamage((Zombie *)this,(BoardEntity *)0x0);
    this[0x801] = (ZombiePVPSeagull)0x0;
    Zombie::EndCondition((Zombie *)this,3);
    Zombie::EndCondition((Zombie *)this,4);
  }
  if (param_2 - 0x40U < 2) {
    Zombie::TakeFatalDamage((Zombie *)this,(BoardEntity *)0x0);
    Zombie::EndCondition((Zombie *)this,0x40);
    Zombie::EndCondition((Zombie *)this,0x41);
  }
  if (2 < param_2 - 0x42U) {
    return;
  }
  Zombie::TakeFatalDamage((Zombie *)this,(BoardEntity *)0x0);
  Zombie::EndCondition((Zombie *)this,0x42);
  Zombie::EndCondition((Zombie *)this,0x43);
  Zombie::EndCondition((Zombie *)this,0x44);
  return;
}


/* ZombiePVPSeagull::~ZombiePVPSeagull() */

void __thiscall ZombiePVPSeagull::~ZombiePVPSeagull(ZombiePVPSeagull *this)

{
  *(undefined ***)this = &PTR_GetClass_06920340;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePVPSeagull_06920d70;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombiePVPSeagull::~ZombiePVPSeagull() */

void __thiscall ZombiePVPSeagull::~ZombiePVPSeagull(ZombiePVPSeagull *this)

{
  ~ZombiePVPSeagull(this + -0x10);
  return;
}


/* ZombiePVPSeagull::~ZombiePVPSeagull() */

void __thiscall ZombiePVPSeagull::~ZombiePVPSeagull(ZombiePVPSeagull *this)

{
  ~ZombiePVPSeagull(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombiePVPSeagull::~ZombiePVPSeagull() */

void __thiscall ZombiePVPSeagull::~ZombiePVPSeagull(ZombiePVPSeagull *this)

{
  ~ZombiePVPSeagull(this + -0x10);
  return;
}


/* ZombiePVPSeagull::onZombieInitialize() */

void __thiscall ZombiePVPSeagull::onZombieInitialize(ZombiePVPSeagull *this)

{
  undefined4 uVar1;
  
  Zombie::SetIsFlying((Zombie *)this,true);
  this[0x800] = (ZombiePVPSeagull)0x0;
  this[0x802] = (ZombiePVPSeagull)0x1;
  this[0x801] = (ZombiePVPSeagull)0x0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x804) = uVar1;
  return;
}


/* ZombiePVPSeagull::ZombiePVPSeagull() */

void __thiscall ZombiePVPSeagull::ZombiePVPSeagull(ZombiePVPSeagull *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_06920340;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePVPSeagull_06920d70;
  DVec3::DVec3((DVec3 *)(this + 0x808));
  return;
}


/* ZombiePVPSeagull::StaticNew() */

ZombiePVPSeagull * ZombiePVPSeagull::StaticNew(void)

{
  ZombiePVPSeagull *this;
  
  this = ::operator_new(0x818);
  ZombiePVPSeagull(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPSeagull::playBirdLossAnimation(bool) */

void __thiscall ZombiePVPSeagull::playBirdLossAnimation(ZombiePVPSeagull *this,bool param_1)

{
  int iVar1;
  float *pfVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar3;
  Effect_PopAnim *this_01;
  ResourceInfo *pRVar4;
  float local_28;
  float local_24;
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_28,*pfVar2,pfVar2[1]);
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  Sexy::SexyVector2::operator-=((SexyVector2 *)&local_28,(SexyVector2 *)(lVar3 + 0xc4));
  this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_ZOMBIE_SEAGULL");
  GetPAMByName(asStack_20);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar4,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_20);
  nop();
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,local_28,local_24,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_01,(SexyVector3 *)aRStack_18,-1);
  iVar1 = (**(code **)(*(long *)this + 0x170))(this);
  FUN_049a0970(this_01 + 0x1c,iVar1 + 1);
  if (param_1) {
    std::string::string((string *)aRStack_18,"die2");
    Effect_PopAnim::PlaySingleAnimation(this_01,aRStack_18,0);
    std::string::~string((string *)aRStack_18);
    nop();
    std::string::string((string *)aRStack_18,"Play_Bird_Explo");
    RealObject::PlayPositionalSound((RealObject *)this,(string *)aRStack_18,0.0);
    std::string::~string((string *)aRStack_18);
    nop();
  }
  else {
    std::string::string((string *)aRStack_18,"die1");
    Effect_PopAnim::PlaySingleAnimation(this_01,aRStack_18,0);
    std::string::~string((string *)aRStack_18);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPSeagull::onTakeFatalDamage(DamageInfo const&) */

void __thiscall ZombiePVPSeagull::onTakeFatalDamage(ZombiePVPSeagull *this,DamageInfo *param_1)

{
  bool bVar1;
  char cVar2;
  ZombieHydraHeadAnimRig *pZVar3;
  undefined8 uVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x801] == (ZombiePVPSeagull)0x0) {
    bVar1 = TestFlag<DamageTypeFlags>(*(undefined8 *)(param_1 + 0x10),0x800);
    if (((((bVar1) || (cVar2 = Zombie::HasCondition(this,0x40), cVar2 != '\0')) ||
         (cVar2 = Zombie::HasCondition(this,0x41), cVar2 != '\0')) ||
        ((cVar2 = Zombie::HasCondition(this,0x42), cVar2 != '\0' ||
         (cVar2 = Zombie::HasCondition(this,0x43), cVar2 != '\0')))) ||
       (cVar2 = Zombie::HasCondition(this,0x44), cVar2 != '\0')) {
      playBirdLossAnimation(this,true);
      pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
      ZombieAnimRig_Seagull::HideBird((ZombieAnimRig_Seagull *)pZVar3);
      std::string::string(asStack_10,"Play_Seagull_DeathSquawk");
      RealObject::PlayPositionalSound((RealObject *)this,asStack_10,0.0);
      std::string::~string(asStack_10);
      nop();
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      bVar1 = TestFlag<DamageTypeFlags>(uVar4,0x80);
      if ((bVar1) || (bVar1 = TestFlag<DamageTypeFlags>(uVar4,0x1000), bVar1)) {
        this[0x802] = (ZombiePVPSeagull)0x0;
      }
      else {
        bVar1 = TestFlag<DamageTypeFlags>(uVar4,4);
        if (!bVar1) {
          (**(code **)(*(long *)this + 0x240))(this);
        }
        playBirdLossAnimation(this,false);
        pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
        ZombieAnimRig_Seagull::HideBird((ZombieAnimRig_Seagull *)pZVar3);
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
/* ZombiePVPSeagull::onEnterState_BigFire(ZombieState) */

void ZombiePVPSeagull::onEnterState_BigFire(Zombie *param_1)

{
  long *plVar1;
  code *pcVar2;
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)Zombie::GetAnimRig(param_1);
  pcVar2 = *(code **)(*plVar1 + 0x168);
  std::string::string(asStack_58,"plantfood");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)param_1,onBigFireAnimStopped);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<ZombiePVPSeagull,void(ZombiePVPSeagull::*)(std::string_const&)>(aDStack_38,asStack_50);
  (*pcVar2)(plVar1,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  std::string::string(asStack_50,"Play_Zomb_PVP_Seagull");
  RealObject::PlayPositionalSound((RealObject *)param_1,asStack_50,0.0);
  std::string::~string(asStack_50);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPSeagull::NewFire() */

void __thiscall ZombiePVPSeagull::NewFire(ZombiePVPSeagull *this)

{
  char cVar1;
  ZombiePVPSeagullProps *pZVar2;
  undefined8 *puVar3;
  Projectile *this_00;
  undefined8 uVar4;
  Board *pBVar6;
  undefined4 uVar5;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar2 = Zombie::GetProps<ZombiePVPSeagullProps>((Zombie *)this);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)(pZVar2 + 0x228));
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_18);
  if (cVar1 == '\0') {
    this_00 = (Projectile *)0x0;
  }
  else {
    puVar3 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
                    /* WARNING: Load size is inaccurate */
    pBVar6._0_4_ = *puVar3;
    uVar5 = *(undefined4 *)((long)puVar3 + 4);
    uVar4 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    this_00 = (Projectile *)Board::AddProjectile(pBVar6._0_4_,uVar5,0,uVar4,aRStack_10,this,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (this_00 != (Projectile *)0x0) {
      Projectile::LaunchAt(this_00,(SexyVector3 *)(this + 0x808),150.0,1.5);
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPSeagull::StaticClassInit() */

void ZombiePVPSeagull::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombiePVPSeagull");
      (*pcVar4)(plVar1,asStack_150,FUN_049a197c,0x818,0);
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
  Sexy::Delegate1<ZombieState>::Delegate1<ZombiePVPSeagull,void(ZombiePVPSeagull::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombiePVPSeagull,void(ZombiePVPSeagull::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombiePVPSeagull,void(ZombiePVPSeagull::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_PVPSeagull_Fire");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_049a1720(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombiePVPSeagull::StaticGetClass() */

long * ZombiePVPSeagull::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePVPSeagull",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePVPSeagull::GetClass() const */

long * ZombiePVPSeagull::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePVPSeagull",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePVPSeagull::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void ZombiePVPSeagull::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  char cVar2;
  SexyVector3 *pSVar3;
  
  bVar1 = std::operator==(param_4,"hit_ground");
  if (!bVar1) {
    bVar1 = std::operator==(param_4,"pvp_bomb");
    if ((bVar1) && (cVar2 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar2 == '\0')) {
      NewFire((ZombiePVPSeagull *)param_1);
    }
    Zombie::onPopAnimCommand(param_1,param_2,param_3,param_4);
    return;
  }
  Zombie::SetIsFlying((Zombie *)param_1,false);
  pSVar3 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_1);
  cVar2 = Board::IsPitOfDoom(*(Board **)(gLawnApp + 0x9f0),pSVar3);
  if ((cVar2 == '\0') && (cVar2 = Zombie::HasHead((Zombie *)param_1), cVar2 != '\0')) {
    (**(code **)(*(long *)param_1 + 0x240))(param_1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPSeagull::ApplyZombieFood() */

void ZombiePVPSeagull::ApplyZombieFood(void)

{
  char cVar1;
  int iVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  float *pfVar3;
  ZombiePVPSeagullProps *pZVar4;
  float fVar5;
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)in_x0 + 0x4c0))();
  if (cVar1 == '\0') {
    cVar1 = FUN_049a0978(in_x0[0x174]);
    if (cVar1 == '\0') {
      pfVar3 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(in_x0);
      iVar2 = BoardTransforms::BoardSpaceToGridXUnbounded(*pfVar3);
      pZVar4 = Zombie::GetProps<ZombiePVPSeagullProps>((Zombie *)in_x0);
      fVar5 = (float)ValueRange::GetRandomValue((ValueRange *)(pZVar4 + 0x220));
      iVar2 = BoardTransforms::GridToBoardSpaceXUnbounded((int)((float)iVar2 - fVar5));
      EATextSquish::Vec3::Vec3((Vec3 *)local_18,(float)iVar2,pfVar3[1],0.0);
      Sexy::SexyVector3::operator=((SexyVector3 *)(in_x0 + 0x808),(SexyVector3 *)local_18);
      PlaybackController::SetParam
                ((PlaybackController *)(in_x0 + 0x140),'\x01',(SexyVector3 *)(in_x0 + 0x808));
    }
    else {
      local_18[0] = PlaybackController::GetParamVector3
                              ((PlaybackController *)(in_x0 + 0x140),'\x01');
      Sexy::SexyVector3::operator=((SexyVector3 *)(in_x0 + 0x808),(SexyVector3 *)local_18);
    }
    Zombie::ApplyZombieFood((Zombie *)in_x0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePVPSeagull::updateState_Walk() */

void __thiscall ZombiePVPSeagull::updateState_Walk(ZombiePVPSeagull *this)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  ZombiePVPSeagullProps *pZVar4;
  
  cVar1 = (**(code **)(*(long *)this + 0x4c0))();
  if (cVar1 != '\0') {
    pfVar3 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    iVar2 = BoardTransforms::BoardSpaceToGridXUnbounded(*pfVar3);
    pZVar4 = Zombie::GetProps<ZombiePVPSeagullProps>((Zombie *)this);
    if ((int)*(float *)(pZVar4 + 0x224) <= iVar2) {
      Zombie::setZombieState((Zombie *)this,0x1f,0);
      return;
    }
  }
  Zombie::updateState_Walk((Zombie *)this);
  return;
}

