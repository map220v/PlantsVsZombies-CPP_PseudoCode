// Class: ZombieRomanBallista


/* ZombieRomanBallista::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void ZombieRomanBallista::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_4,"use_action");
  if (bVar1) {
    (**(code **)(*(long *)param_1 + 0xa08))(param_1);
  }
  return;
}


/* ZombieRomanBallista::onPrepAnimStopped(std::string const&) */

void ZombieRomanBallista::onPrepAnimStopped(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 != '\0') {
    return;
  }
  Zombie::setZombieState((Zombie *)param_1,0x21);
  return;
}


/* ZombieRomanBallista::onExplodeAnimStopped(std::string const&) */

void ZombieRomanBallista::onExplodeAnimStopped(string *param_1)

{
  Zombie::TakeFatalDamage((Zombie *)param_1,(BoardEntity *)0x0);
  (**(code **)(*(long *)param_1 + 0x48))(param_1);
  return;
}


/* ZombieRomanBallista::CanApplySpecialCondition() */

byte __thiscall ZombieRomanBallista::CanApplySpecialCondition(ZombieRomanBallista *this)

{
  byte bVar1;
  
  bVar1 = Zombie::isInState((Zombie *)this,0x21);
  return bVar1 ^ 1;
}


/* ZombieRomanBallista::CanApplyVenomStack() */

byte __thiscall ZombieRomanBallista::CanApplyVenomStack(ZombieRomanBallista *this)

{
  byte bVar1;
  
  bVar1 = Zombie::isInState((Zombie *)this,0x21);
  return bVar1 ^ 1;
}


/* ZombieRomanBallista::onFiringAnimStopped(std::string const&) */

void ZombieRomanBallista::onFiringAnimStopped(string *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 != '\0') {
    return;
  }
  Zombie::setZombieState((Zombie *)param_1,0x1f);
  uVar4 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)(param_1 + 0x828);
    uVar3 = FUN_0465a878(uVar5,*(undefined8 *)(param_1 + 0x830));
    if (uVar3 <= uVar4) break;
    puVar2 = (undefined4 *)FUN_0465a88c(uVar5,uVar4);
                    /* WARNING: Load size is inaccurate */
    Zombie::ApplyCondition(*(Zombie **)(puVar2 + 2),0,param_1,*puVar2,1);
    uVar4 = uVar4 + 1;
  }
  std::vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>>::clear
            ((vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>> *)(param_1 + 0x828))
  ;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRomanBallista::onEnterState_Walk(ZombieState) */

void ZombieRomanBallista::onEnterState_Walk(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  pcVar2 = *(code **)(*(long *)pZVar1 + 0x118);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  (*pcVar2)(pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::string(asStack_58,"Play_Zomb_Pirate_Imp_Mvmt_Cannon_Roll");
  RealObject::PlayPositionalSound((RealObject *)param_1,asStack_58,0.0);
  std::string::~string(asStack_58);
  nop();
  Zombie::SetIsControlled(param_1,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRomanBallista::onEnterState_CannonPrepForFire(ZombieState) */

void ZombieRomanBallista::onEnterState_CannonPrepForFire(Zombie *param_1)

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
  std::string::string(asStack_58,"load");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)param_1,onPrepAnimStopped);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<ZombieRomanBallista,void(ZombieRomanBallista::*)(std::string_const&)>
            (aDStack_38,asStack_50);
  (*pcVar2)(plVar1,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  std::string::string(asStack_50,"Play_PVZ_IMPCannon_PF");
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
/* ZombieRomanBallista::onEnterState_CannonFiring(ZombieState) */

void ZombieRomanBallista::onEnterState_CannonFiring(Zombie *param_1)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar2 = (long *)Zombie::GetAnimRig(param_1);
  pcVar3 = *(code **)(*plVar2 + 0x168);
  std::string::string(asStack_58,"fire");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)param_1,onFiringAnimStopped);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<ZombieRomanBallista,void(ZombieRomanBallista::*)(std::string_const&)>
            (aDStack_38,aCStack_50);
  (*pcVar3)(plVar2,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  lVar1 = ___stack_chk_guard;
  *(int *)(param_1 + 0x800) = *(int *)(param_1 + 0x800) + -1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRomanBallista::onEnterState_CannonExplode(ZombieState) */

void ZombieRomanBallista::onEnterState_CannonExplode(Zombie *param_1)

{
  long *plVar1;
  code *pcVar2;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)param_1 + 0x2f0))();
  Zombie::ClearConditions(param_1);
  plVar1 = (long *)Zombie::GetAnimRig(param_1);
  pcVar2 = *(code **)(*plVar1 + 0x168);
  std::string::string(asStack_58,"die");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)param_1,onExplodeAnimStopped);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<ZombieRomanBallista,void(ZombieRomanBallista::*)(std::string_const&)>
            (aDStack_38,aCStack_50);
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
/* ZombieRomanBallista::launchProjectile(Sexy::SexyVector3, Sexy::SexyVector3,
   Sexy::RtWeakPtr<ProjectilePropertySheet>, float, float, TeamFlags, Sexy::RtWeakPtr<BoardEntity>)
    */

void ZombieRomanBallista::launchProjectile
               (Board *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,float param_7,float param_8,Zombie *param_9,
               RtWeakPtrBase *param_10,undefined4 param_11,RtWeakPtr *param_12)

{
  bool bVar1;
  Projectile *this;
  RomanBallistaProjectile *pRVar2;
  RtWeakPtrBase *pRVar3;
  undefined8 uVar4;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = *(undefined8 *)(gLawnApp + 0x9f0);
  local_20 = SUB84(param_1,0);
  local_1c = (undefined4)param_2;
  local_18 = (undefined4)param_3;
  local_30 = param_4;
  local_2c = param_5;
  local_28 = param_6;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_10);
  this = (Projectile *)Board::AddProjectile(param_1,param_2,param_3,uVar4,aRStack_10,param_9,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Projectile::LaunchAt(this,(SexyVector3 *)&local_30,param_7,param_8);
  FUN_0465a844(this + 0x24,param_11);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_12);
  if (bVar1) {
    Projectile::SetTarget(this,param_12);
  }
  pRVar2 = Sexy::RtObject::Cast<RomanBallistaProjectile>((RtObject *)this);
  pRVar3 = (RtWeakPtrBase *)Zombie::GetProps(param_9);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,pRVar3);
  SpearProjectile::SetPlant((SpearProjectile *)pRVar2,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (*(long *)(param_9 + 0x7f8) != 0) {
    pRVar2 = Sexy::RtObject::Cast<RomanBallistaProjectile>((RtObject *)this);
    FUN_0465a850(pRVar2 + 0x1b0,*(undefined8 *)(param_9 + 0x7f8));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRomanBallista::chooseDeathState(DamageInfo const&) */

void __thiscall ZombieRomanBallista::chooseDeathState(ZombieRomanBallista *this,DamageInfo *param_1)

{
  bool bVar1;
  Plant *pPVar2;
  long lVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::broadcastZombieDied((Zombie *)this,param_1);
  Zombie::setZombieState((Zombie *)this,5,0);
  if ((*(RtObject **)param_1 != (RtObject *)0x0) &&
     (pPVar2 = Sexy::RtObject::Cast<Plant>(*(RtObject **)param_1), pPVar2 != (Plant *)0x0)) {
    Plant::GetType();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    bVar1 = std::operator==((string *)(lVar3 + 8),"coconutcannon");
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if (bVar1) {
      std::string::string((string *)aRStack_10,GameCenterDefines::sAchievementID_Broadside);
      Achievement::Queue((string *)aRStack_10,100.0);
      std::string::~string((string *)aRStack_10);
      nop();
      Achievement::ShowAll();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieRomanBallista::ZombieRomanBallista() */

void __thiscall ZombieRomanBallista::ZombieRomanBallista(ZombieRomanBallista *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_0688c180;
  *(undefined ***)(this + 0x10) = &PTR__ZombieRomanBallista_0688cc00;
  DVec3::DVec3((DVec3 *)(this + 0x804));
  DVec3::DVec3((DVec3 *)(this + 0x810));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x828));
  return;
}


/* ZombieRomanBallista::StaticNew() */

ZombieRomanBallista * ZombieRomanBallista::StaticNew(void)

{
  ZombieRomanBallista *this;
  
  this = ::operator_new(0x840);
  ZombieRomanBallista(this);
  return this;
}


/* ZombieRomanBallista::~ZombieRomanBallista() */

void __thiscall ZombieRomanBallista::~ZombieRomanBallista(ZombieRomanBallista *this)

{
  *(undefined ***)this = &PTR_GetClass_0688c180;
  *(undefined ***)(this + 0x10) = &PTR__ZombieRomanBallista_0688cc00;
  std::vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>>::~vector
            ((vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>> *)(this + 0x828));
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieRomanBallista::~ZombieRomanBallista() */

void __thiscall ZombieRomanBallista::~ZombieRomanBallista(ZombieRomanBallista *this)

{
  ~ZombieRomanBallista(this + -0x10);
  return;
}


/* ZombieRomanBallista::~ZombieRomanBallista() */

void __thiscall ZombieRomanBallista::~ZombieRomanBallista(ZombieRomanBallista *this)

{
  ~ZombieRomanBallista(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieRomanBallista::~ZombieRomanBallista() */

void __thiscall ZombieRomanBallista::~ZombieRomanBallista(ZombieRomanBallista *this)

{
  ~ZombieRomanBallista(this + -0x10);
  return;
}


/* ZombieRomanBallista::updateState_CannonWaiting() */

void __thiscall ZombieRomanBallista::updateState_CannonWaiting(ZombieRomanBallista *this)

{
  ZombieRomanBallistaProps *pZVar1;
  float fVar2;
  
  fVar2 = (float)Zombie::getTimeInState((Zombie *)this);
  if (fVar2 <= *(float *)(this + 0x81c)) {
    return;
  }
  pZVar1 = Zombie::GetProps<ZombieRomanBallistaProps>((Zombie *)this);
  *(undefined4 *)(this + 0x81c) = *(undefined4 *)(pZVar1 + 0x214);
  if (*(int *)(this + 0x800) != 0) {
    Zombie::setZombieState((Zombie *)this,0x20,0);
    return;
  }
  Zombie::setZombieState((Zombie *)this,0x22);
  this[0x820] = (ZombieRomanBallista)0x1;
  return;
}


/* ZombieRomanBallista::calcRangedTargetGridRect() */

void ZombieRomanBallista::calcRangedTargetGridRect(void)

{
  Zombie *in_x0;
  ZombieRomanBallistaProps *pZVar1;
  Insets *in_x8;
  
  pZVar1 = Zombie::GetProps<ZombieRomanBallistaProps>(in_x0);
  Sexy::Insets::Insets
            (in_x8,*(int *)(pZVar1 + 0x228),0,*(int *)(pZVar1 + 0x22c) - *(int *)(pZVar1 + 0x228),1)
  ;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRomanBallista::updateState_Walk() */

void __thiscall ZombieRomanBallista::updateState_Walk(ZombieRomanBallista *this)

{
  ZombieRomanBallistaProps *pZVar1;
  float fVar2;
  float fVar3;
  undefined4 local_18;
  float local_14;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar2 = (float)Zombie::getTimeInState((Zombie *)this);
  pZVar1 = Zombie::GetProps<ZombieRomanBallistaProps>((Zombie *)this);
  fVar3 = *(float *)(pZVar1 + 0x21c);
  if (fVar2 <= fVar3) {
    local_18 = CurveLerp(0,this + 0x804,this + 0x810,2);
    local_14 = fVar3;
    local_10 = fVar2;
    (**(code **)(*(long *)this + 0x78))(this,&local_18);
  }
  else {
    Zombie::setZombieState((Zombie *)this,0x1f,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRomanBallista::findVaseTargetX() */

void __thiscall ZombieRomanBallista::findVaseTargetX(ZombieRomanBallista *this)

{
  int iVar1;
  int iVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  float *pfVar3;
  ZombieRomanBallistaProps *pZVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar5 = *(code **)(*(long *)this + 0x1f8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)(*pcVar5)(this,avStack_20);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             avStack_20);
  if (this_00 ==
      (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
       *)0x0) {
    pZVar4 = Zombie::GetProps<ZombieRomanBallistaProps>((Zombie *)this);
    iVar1 = BoardTransforms::GridToBoardSpaceX(*(int *)(pZVar4 + 0x230));
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    fVar6 = (float)iVar1 + (float)iVar2 * 0.25;
    fVar7 = (float)(**(code **)(*(long *)this + 0x308))(0x3f800000,this);
    pZVar4 = Zombie::GetProps<ZombieRomanBallistaProps>((Zombie *)this);
    if (fVar7 <= *(float *)(pZVar4 + 0x218)) {
      iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
      fVar6 = (float)iVar1 + fVar6;
    }
  }
  else {
    pfVar3 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(this_00);
    fVar6 = *pfVar3;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRomanBallista::launchVase() */

void __thiscall ZombieRomanBallista::launchVase(ZombieRomanBallista *this)

{
  char cVar1;
  ZombieRomanBallistaProps *pZVar2;
  CreatureConditionTracker *this_00;
  SexyVector3 *this_01;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  RtWeakPtr<Sexy::SoundResource> aRStack_58 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_50 [8];
  undefined8 local_48;
  undefined4 local_40;
  Vec3 aVStack_38 [16];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar2 = Zombie::GetProps<ZombieRomanBallistaProps>((Zombie *)this);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(pZVar2 + 0x238));
  if (cVar1 != '\0') {
    this_00 = (CreatureConditionTracker *)Zombie::GetConditionTracker((Zombie *)this);
    fVar3 = (float)CreatureConditionTracker::GetDrawScale(this_00);
    this_01 = (SexyVector3 *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this);
    local_48 = *(undefined8 *)this_01;
    local_40 = *(undefined4 *)(this_01 + 8);
    uVar4 = findVaseTargetX(this);
    uVar5 = 0;
    uVar6 = 0x43110000;
    local_48 = CONCAT44(local_48._4_4_,uVar4);
    EATextSquish::Vec3::Vec3(aVStack_38,-10.0,0.0,145.0);
    uVar7 = *(undefined4 *)(pZVar2 + 0x220);
    uVar8 = *(undefined4 *)(pZVar2 + 0x224);
    local_28 = Sexy::SexyVector3::operator*((SexyVector3 *)aVStack_38,fVar3);
    local_24 = uVar5;
    local_20 = uVar6;
    local_18 = Sexy::SexyVector3::operator+(this_01,(SexyVector3 *)&local_28);
    local_14 = uVar5;
    local_10 = uVar6;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,(RtWeakPtrBase *)(pZVar2 + 0x238));
    uVar4 = FUN_0465a840(*(undefined4 *)(this + 0x24));
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_50);
    launchProjectile(local_18,local_14,local_10,(undefined4)local_48,local_48._4_4_,local_40,uVar7,
                     uVar8,this,aRStack_58,uVar4,a_Stack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRomanBallista::StaticClassInit() */

void ZombieRomanBallista::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieRomanBallista");
      (*pcVar4)(plVar1,asStack_150,FUN_0465cb64,0x840,0);
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
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieRomanBallista,void(ZombieRomanBallista::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate0::Delegate0<ZombieRomanBallista,void(ZombieRomanBallista::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieRomanBallista,void(ZombieRomanBallista::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_PCannon_Waiting");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0465c6fc(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieRomanBallista,void(ZombieRomanBallista::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate0::Delegate0<ZombieRomanBallista,void(ZombieRomanBallista::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa38);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieRomanBallista,void(ZombieRomanBallista::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_PCannon_PrepForFire");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0465c6fc(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa40);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieRomanBallista,void(ZombieRomanBallista::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa48);
  Sexy::Delegate0::Delegate0<ZombieRomanBallista,void(ZombieRomanBallista::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa50);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieRomanBallista,void(ZombieRomanBallista::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_PCannon_Firing");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x21,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0465c6fc(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa58);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieRomanBallista,void(ZombieRomanBallista::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa60);
  Sexy::Delegate0::Delegate0<ZombieRomanBallista,void(ZombieRomanBallista::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa68);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieRomanBallista,void(ZombieRomanBallista::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_PCannon_Explode");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x22,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0465c6fc(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieRomanBallista::StaticGetClass() */

long * ZombieRomanBallista::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieRomanBallista",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieRomanBallista::GetClass() const */

long * ZombieRomanBallista::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieRomanBallista",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRomanBallista::playDeathAnimation() */

void __thiscall ZombieRomanBallista::playDeathAnimation(ZombieRomanBallista *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Play_Zomb_Pirate_Imp_Mvmt_Cannon_Death");
  RealObject::PlayPositionalSound((RealObject *)this,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  Zombie::playDeathAnimation((Zombie *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRomanBallista::onPlaceOnBoard() */

void __thiscall ZombieRomanBallista::onPlaceOnBoard(ZombieRomanBallista *this)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ZombieRomanBallistaProps *pZVar5;
  SexyVector3 *pSVar6;
  float fVar7;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar5 = Zombie::GetProps<ZombieRomanBallistaProps>((Zombie *)this);
  *(undefined4 *)(this + 0x800) = *(undefined4 *)(pZVar5 + 0x30);
  pSVar6 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x804),pSVar6);
  fVar7 = (float)(**(code **)(*(long *)this + 0x308))(_FUN_0465d30c,this);
  cVar2 = NewPVPUtils::IsPlayingNewPVP();
  if (cVar2 == '\0') {
    iVar3 = 7;
  }
  else {
    iVar3 = 9;
  }
  iVar3 = BoardTransforms::GridToBoardSpaceX(iVar3);
  iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
  EATextSquish::Vec3::Vec3
            (aVStack_18,(float)iVar3 + (fVar7 + 0.75) * (float)iVar4,*(float *)(this + 0x808),
             *(float *)(this + 0x80c));
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x810),(SexyVector3 *)aVStack_18);
  pZVar5 = Zombie::GetProps<ZombieRomanBallistaProps>((Zombie *)this);
  uVar1 = *(undefined4 *)(pZVar5 + 0x210);
  this[0x820] = (ZombieRomanBallista)0x0;
  *(undefined4 *)(this + 0x81c) = uVar1;
  std::vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>>::clear
            ((vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>> *)(this + 0x828));
  Zombie::onPlaceOnBoard((Zombie *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRomanBallista::onUpdate() */

void __thiscall ZombieRomanBallista::onUpdate(ZombieRomanBallista *this)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  RtObject *this_00;
  PlantGroup *this_01;
  Plant *pPVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)(**(code **)(*(long *)this + 0x428))();
  if (this_00 != (RtObject *)0x0) {
    uVar3 = FUN_0465a840(*(undefined4 *)(this + 0x24));
    cVar1 = RealObject::IsOnOpposingTeam(this_00,uVar3);
    if ((cVar1 != '\0') && (bVar2 = Sexy::RtObject::IsA<PlantGroup>(this_00), bVar2)) {
      this_01 = Sexy::RtObject::Cast<PlantGroup>(this_00);
      PlantGroup::GetTopPlant(this_01);
      pPVar4 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
      Plant::TakeSmashAttack(pPVar4,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    }
  }
  Zombie::onUpdate((Zombie *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRomanBallista::onApplyCondition(ZombieConditions) */

void __thiscall ZombieRomanBallista::onApplyCondition(ZombieRomanBallista *this,int param_2)

{
  char cVar1;
  EntityConditionTracker<Zombie,ZombieConditions> *pEVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  int local_18 [2];
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onApplyCondition();
  cVar1 = Zombie::isInState((Zombie *)this,0x21);
  if (cVar1 == '\0') {
    cVar1 = Zombie::isInState((Zombie *)this,0x22);
    if (cVar1 != '\0') {
      Zombie::EndCondition((Zombie *)this,param_2);
    }
  }
  else {
    pEVar2 = (EntityConditionTracker<Zombie,ZombieConditions> *)
             Zombie::GetConditionTracker((Zombie *)this);
    fVar7 = (float)EntityConditionTracker<Zombie,ZombieConditions>::GetConditionDuration
                             (pEVar2,param_2);
    uVar6 = *(undefined8 *)(this + 0x828);
    lVar3 = FUN_0465a878(uVar6,*(undefined8 *)(this + 0x830));
    for (lVar5 = 0; lVar5 != lVar3; lVar5 = lVar5 + 1) {
      piVar4 = (int *)FUN_0465a88c(uVar6,lVar5);
      if (param_2 == *piVar4) {
        if (fVar7 <= (float)piVar4[2]) goto LAB_0465d4d4;
        piVar4[2] = (int)fVar7;
        Zombie::EndCondition((Zombie *)this,param_2);
        goto LAB_0465d4e0;
      }
    }
    GridItemConditionEntry::GridItemConditionEntry((GridItemConditionEntry *)local_18);
    local_18[0] = param_2;
    local_10 = fVar7;
    std::vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>>::push_back
              ((vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>> *)(this + 0x828),
               (ZombieConditionEntry *)local_18);
LAB_0465d4d4:
    Zombie::EndCondition((Zombie *)this,param_2);
  }
LAB_0465d4e0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

