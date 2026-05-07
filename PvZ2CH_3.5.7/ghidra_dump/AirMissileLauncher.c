// Class: AirMissileLauncher


/* AirMissileLauncher::GetRedEyeTime() */

undefined1  [16] AirMissileLauncher::GetRedEyeTime(void)

{
  return ZEXT816(0x3fc00000);
}


/* AirMissileLauncher::CancelTouch() */

void __thiscall AirMissileLauncher::CancelTouch(AirMissileLauncher *this)

{
  *(undefined8 *)(this + 0x828) = 0;
  return;
}


/* AirMissileLauncher::onApplyCondition(ZombieConditions) */

void __thiscall AirMissileLauncher::onApplyCondition(AirMissileLauncher *this,undefined4 param_2)

{
  EntityConditionTracker<Zombie,ZombieConditions>::EndCondition
            ((EntityConditionTracker<Zombie,ZombieConditions> *)(this + 0x398),this,param_2);
  return;
}


/* AirMissileLauncher::onExitState_PrepareLaunch(ZombieState) */

void AirMissileLauncher::onExitState_PrepareLaunch(Zombie *param_1)

{
  float fVar1;
  
  fVar1 = (float)Zombie::getTimeInState(param_1);
  *(float *)(param_1 + 0x810) = *(float *)(param_1 + 0x810) + fVar1;
  return;
}


/* AirMissileLauncher::~AirMissileLauncher() */

void __thiscall AirMissileLauncher::~AirMissileLauncher(AirMissileLauncher *this)

{
  *(undefined ***)this = &PTR_GetClass_068ddda0;
  *(undefined ***)(this + 0x10) = &PTR__AirMissileLauncher_068de830;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to AirMissileLauncher::~AirMissileLauncher() */

void __thiscall AirMissileLauncher::~AirMissileLauncher(AirMissileLauncher *this)

{
  ~AirMissileLauncher(this + -0x10);
  return;
}


/* AirMissileLauncher::~AirMissileLauncher() */

void __thiscall AirMissileLauncher::~AirMissileLauncher(AirMissileLauncher *this)

{
  ~AirMissileLauncher(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to AirMissileLauncher::~AirMissileLauncher() */

void __thiscall AirMissileLauncher::~AirMissileLauncher(AirMissileLauncher *this)

{
  ~AirMissileLauncher(this + -0x10);
  return;
}


/* AirMissileLauncher::CalcRenderOrder() const */

void AirMissileLauncher::CalcRenderOrder(void)

{
  undefined4 uVar1;
  
  uVar1 = BoardConstants::NUMBER_OF_COLUMNS();
  Board::MakeRenderOrder(0x635d8,uVar1,0);
  return;
}


/* non-virtual thunk to AirMissileLauncher::CalcRenderOrder() const */

void __thiscall AirMissileLauncher::CalcRenderOrder(AirMissileLauncher *this)

{
  CalcRenderOrder();
  return;
}


/* AirMissileLauncher::AirMissileLauncher() */

void __thiscall AirMissileLauncher::AirMissileLauncher(AirMissileLauncher *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_068ddda0;
  *(undefined ***)(this + 0x10) = &PTR__AirMissileLauncher_068de830;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x818));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x820));
  *(undefined4 *)(this + 0x808) = 0;
  *(undefined4 *)(this + 0x800) = 0;
  this[0x80c] = (AirMissileLauncher)0x0;
  *(undefined8 *)(this + 0x828) = 0;
  *(undefined4 *)(this + 0x814) = 0xffffffff;
  *(undefined4 *)(this + 0x810) = 0;
  return;
}


/* AirMissileLauncher::StaticNew() */

AirMissileLauncher * AirMissileLauncher::StaticNew(void)

{
  AirMissileLauncher *this;
  
  this = ::operator_new(0x830);
  AirMissileLauncher(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AirMissileLauncher::PrepareToMove() */

void __thiscall AirMissileLauncher::PrepareToMove(AirMissileLauncher *this)

{
  undefined4 uVar1;
  string asStack_20 [8];
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = SharkMinion::getRow((SharkMinion *)this);
  *(undefined4 *)(this + 0x808) = uVar1;
  EATextSquish::Vec3::Vec3(aVStack_18,750.0,600.0,0.0);
  (**(code **)(*(long *)this + 0x78))(this,aVStack_18);
  std::string::string(asStack_20,"Play_SkyCity_Missile_Forward");
  RealObject::PlayPositionalSound((RealObject *)this,asStack_20,0.0);
  std::string::~string(asStack_20);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AirMissileLauncher::GetExplodeName() */

void __thiscall AirMissileLauncher::GetExplodeName(AirMissileLauncher *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"dead");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AirMissileLauncher::GetLaunchingName() */

void __thiscall AirMissileLauncher::GetLaunchingName(AirMissileLauncher *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"ready");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AirMissileLauncher::GetShakeName() */

void __thiscall AirMissileLauncher::GetShakeName(AirMissileLauncher *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"shake");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AirMissileLauncher::GetRedEyeShakeName() */

void __thiscall AirMissileLauncher::GetRedEyeShakeName(AirMissileLauncher *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"shake1");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AirMissileLauncher::OnAnimStopped(std::string const&) */

void __thiscall AirMissileLauncher::OnAnimStopped(AirMissileLauncher *this,string *param_1)

{
  char cVar1;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DinosaurAnimRig::getActiveActionAnimationName((DinosaurAnimRig *)this);
  cVar1 = std::operator==(param_1,asStack_18);
  if (cVar1 == '\0') {
    GetExplodeName(this);
    cVar1 = std::operator==(param_1,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    if (cVar1 == '\0') {
      GetLaunchingName(this);
      cVar1 = std::operator==(param_1,asStack_10);
      std::string::~string(asStack_10);
      if (cVar1 == '\0') {
        GetShakeName(this);
        cVar1 = std::operator==(param_1,asStack_18);
        if (cVar1 == '\0') {
          GetRedEyeShakeName(this);
          cVar1 = std::operator==(param_1,asStack_10);
          std::string::~string(asStack_10);
          std::string::~string(asStack_18);
          if (cVar1 == '\0') goto LAB_0479ff34;
        }
        else {
          std::string::~string(asStack_18);
        }
        cVar1 = Zombie::isInState((Zombie *)this,0x23);
        if (cVar1 != '\0') {
          Zombie::setZombieState((Zombie *)this,*(undefined4 *)(this + 0x814),0);
        }
      }
      else {
        Zombie::setZombieState((Zombie *)this,0x22,0);
      }
      goto LAB_0479ff34;
    }
  }
  else {
    std::string::~string(asStack_18);
  }
  (**(code **)(*(long *)this + 0x48))(this);
LAB_0479ff34:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AirMissileLauncher::onEnterState_PrepareLaunch(ZombieState) */

void AirMissileLauncher::onEnterState_PrepareLaunch(Zombie *param_1)

{
  PopAnimRig *pPVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PopAnimRig *)Zombie::GetAnimRig(param_1);
  std::string::string(asStack_40,"prepare_launch");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AirMissileLauncher::onEnterState_RedEye(ZombieState) */

void AirMissileLauncher::onEnterState_RedEye(Zombie *param_1)

{
  PopAnimRig *pPVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PopAnimRig *)Zombie::GetAnimRig(param_1);
  std::string::string(asStack_40,"red_eye");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AirMissileLauncher::PlaySwipeEffect(Sexy::SexyVector2 const&, Sexy::SexyVector2 const&) */

void __thiscall
AirMissileLauncher::PlaySwipeEffect
          (AirMissileLauncher *this,SexyVector2 *param_1,SexyVector2 *param_2)

{
  int iVar1;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar2;
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = (**(code **)(*(long *)this + 200))();
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_AIR_MISSILE_EFFECT2");
  GetPAMByName(asStack_20);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_20);
  nop();
  Effect_PopAnim::SetCentered(this_00,true);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,*(float *)param_2,*(float *)(param_2 + 4),0.0);
  StandaloneEffect::SetBoardSpaceOrigin
            ((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,iVar1 + 1);
  Effect_PopAnim::SetOrientation(this_00,param_1);
  std::string::string((string *)aRStack_18,"idle");
  Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AirMissileLauncher::registerForEvents() */

void __thiscall AirMissileLauncher::registerForEvents(AirMissileLauncher *this)

{
  Board *pBVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_a8 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_a0 [8];
  CBMemberTranslatorX aCStack_98 [24];
  CBMemberTranslatorX aCStack_80 [24];
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::registerForEvents((Zombie *)this);
  pBVar1 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,HandleTouch);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<AirMissileLauncher,bool(AirMissileLauncher::*)(Sexy::Touch_const&)>
            (aDStack_68,aCStack_98);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_a0,(RtWeakPtrBase *)aRStack_a8);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,CancelTouch);
  Sexy::Delegate0::Delegate0<AirMissileLauncher,void(AirMissileLauncher::*)()>
            (aDStack_38,aCStack_80);
  Board::RegisterTouchGameplayObject(pBVar1,aDStack_68,0,aRStack_a0,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AirMissileLauncher::GetLaunchTime() */

undefined4 __thiscall AirMissileLauncher::GetLaunchTime(AirMissileLauncher *this)

{
  int iVar1;
  ZombieAirMissileLauncherProps *pZVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  pZVar2 = Zombie::GetProps<ZombieAirMissileLauncherProps>((Zombie *)this);
  iVar1 = FUN_0479ed1c(*(undefined4 *)(this + 0x50));
  if (0 < iVar1) {
    uVar5 = *(undefined8 *)(pZVar2 + 0x228);
    uVar3 = FUN_0479ed44(uVar5,*(undefined8 *)(pZVar2 + 0x230));
    if ((ulong)(long)iVar1 <= uVar3) {
      puVar4 = (undefined4 *)FUN_0479ed60(uVar5,(long)(iVar1 + -1));
      return *puVar4;
    }
  }
  return 0x41200000;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AirMissileLauncher::updateState_Walk() */

void __thiscall AirMissileLauncher::updateState_Walk(AirMissileLauncher *this)

{
  SexyVector3 *this_00;
  code *pcVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  float local_48 [4];
  Vec3 aVStack_38 [16];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::getTimeInState((Zombie *)this);
  GetLaunchTime(this);
  EATextSquish::Vec3::Vec3((Vec3 *)local_48,650.0,500.0,0.0);
  this_00 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
  if (local_48[0] < *(float *)this_00) {
    uVar2 = 0xc2480000;
    uVar4 = 0;
    EATextSquish::Vec3::Vec3(aVStack_38,-50.0,-50.0,0.0);
    pcVar1 = *(code **)(*(long *)this + 0x78);
    fVar3 = (float)PVZ_Dt();
    local_28 = Sexy::SexyVector3::operator*((SexyVector3 *)aVStack_38,fVar3);
    local_24 = uVar2;
    local_20 = uVar4;
    local_18 = Sexy::SexyVector3::operator+(this_00,(SexyVector3 *)&local_28);
    local_14 = uVar2;
    local_10 = uVar4;
    (*pcVar1)(this,&local_18);
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


/* AirMissileLauncher::updateState_PrepareLaunch() */

void __thiscall AirMissileLauncher::updateState_PrepareLaunch(AirMissileLauncher *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (float)Zombie::getTimeInState((Zombie *)this);
  fVar4 = *(float *)(this + 0x810);
  fVar2 = (float)GetLaunchTime(this);
  fVar3 = (float)GetRedEyeTime();
  if (fVar3 <= (fVar2 - fVar4) - fVar1) {
    return;
  }
  Zombie::setZombieState((Zombie *)this,0x20,0);
  return;
}


/* AirMissileLauncher::updateState_RedEye() */

void __thiscall AirMissileLauncher::updateState_RedEye(AirMissileLauncher *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (float)Zombie::getTimeInState((Zombie *)this);
  fVar3 = *(float *)(this + 0x810);
  fVar2 = (float)GetLaunchTime(this);
  if (0.0 < (fVar1 + fVar3) - fVar2) {
    Zombie::setZombieState((Zombie *)this,0x21,0);
    return;
  }
  return;
}


/* AirMissileLauncher::GetDestroySwipeCount() */

undefined4 __thiscall AirMissileLauncher::GetDestroySwipeCount(AirMissileLauncher *this)

{
  int iVar1;
  ZombieAirMissileLauncherProps *pZVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  pZVar2 = Zombie::GetProps<ZombieAirMissileLauncherProps>((Zombie *)this);
  iVar1 = FUN_0479ed1c(*(undefined4 *)(this + 0x50));
  if (0 < iVar1) {
    uVar5 = *(undefined8 *)(pZVar2 + 0x210);
    uVar3 = FUN_0479ed30(uVar5,*(undefined8 *)(pZVar2 + 0x218));
    if ((ulong)(long)iVar1 <= uVar3) {
      puVar4 = (undefined4 *)FUN_0479ed3c(uVar5,(long)(iVar1 + -1));
      return *puVar4;
    }
  }
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AirMissileLauncher::onEnterState_Launching(ZombieState) */

void AirMissileLauncher::onEnterState_Launching(Zombie *param_1)

{
  long *plVar1;
  code *pcVar2;
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)Zombie::GetAnimRig(param_1);
  pcVar2 = *(code **)(*plVar1 + 0x170);
  GetLaunchingName((AirMissileLauncher *)param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"OnAnimStopped");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  (*pcVar2)(plVar1,asStack_70,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::~string(asStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AirMissileLauncher::onEnterState_Shake(ZombieState) */

void __thiscall AirMissileLauncher::onEnterState_Shake(AirMissileLauncher *this,int param_2)

{
  long *plVar1;
  code *pcVar2;
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  *(int *)(this + 0x814) = param_2;
  local_8 = ___stack_chk_guard;
  if (param_2 == 0x20) {
    GetRedEyeShakeName(this);
  }
  else {
    GetShakeName(this);
  }
  plVar1 = (long *)Zombie::GetAnimRig((Zombie *)this);
  pcVar2 = *(code **)(*plVar1 + 0x170);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"OnAnimStopped");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  (*pcVar2)(plVar1,asStack_70,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::~string(asStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AirMissileLauncher::Explode() */

void __thiscall AirMissileLauncher::Explode(AirMissileLauncher *this)

{
  long *plVar1;
  code *pcVar2;
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)Zombie::GetAnimRig((Zombie *)this);
  pcVar2 = *(code **)(*plVar1 + 0x170);
  GetExplodeName(this);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"OnAnimStopped");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  (*pcVar2)(plVar1,asStack_70,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::~string(asStack_70);
  std::string::string(asStack_58,"Play_SkyCity_Missile_Explode");
  RealObject::PlayPositionalSound((RealObject *)this,asStack_58,0.0);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AirMissileLauncher::onEnterState_Die(ZombieState) */

void AirMissileLauncher::onEnterState_Die(Zombie *param_1)

{
  long *plVar1;
  code *pcVar2;
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  plVar1 = (long *)Zombie::GetAnimRig(param_1);
  pcVar2 = *(code **)(*plVar1 + 0x170);
  GetExplodeName((AirMissileLauncher *)param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"OnAnimStopped");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  (*pcVar2)(plVar1,asStack_70,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::~string(asStack_70);
  std::string::string(asStack_58,"Play_SkyCity_Missile_Explode");
  RealObject::PlayPositionalSound((RealObject *)param_1,asStack_58,0.0);
  std::string::~string(asStack_58);
  nop();
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AirMissileLauncher::Launch() */

void __thiscall AirMissileLauncher::Launch(AirMissileLauncher *this)

{
  SexyVector3 *this_00;
  string *psVar1;
  ZombieAirMissile *this_01;
  long *plVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_c0 [8];
  string asStack_b8 [8];
  RtMixedPtr aRStack_b0 [8];
  RtId aRStack_a8 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_a0 [8];
  Vec3 aVStack_98 [16];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_78 [10];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  uVar5 = 0;
  uVar4 = 0xc2f00000;
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3(aVStack_98,-40.0,-120.0,0.0);
  this_00 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
  local_88 = Sexy::SexyVector3::operator+(this_00,(SexyVector3 *)aVStack_98);
  local_84 = uVar4;
  local_80 = uVar5;
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string((string *)local_78,"air_missile");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar1);
  std::string::~string((string *)local_78);
  nop();
  Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)local_78);
  local_78[0] = FUN_0479ed1c(*(undefined4 *)(this + 0x50));
  plVar2 = *(long **)(gLawnApp + 0x9f0);
  pcVar3 = *(code **)(*plVar2 + 0x318);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_a0,(RtWeakPtrBase *)aRStack_c0);
  uVar4 = FUN_0479ed2c(*(undefined4 *)(this + 0x2b0));
  (*pcVar3)(plVar2,aRStack_a0,uVar4,(string *)local_78);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
  ZombieAirMissile::SetTargetRow(this_01,*(int *)(this + 0x808));
  BoardEntity::PlaceOnBoard((SexyVector3 *)this_01);
  plVar2 = (long *)Zombie::GetAnimRig((Zombie *)this);
  pcVar3 = *(code **)(*plVar2 + 0x170);
  DinosaurAnimRig::getActiveActionAnimationName((DinosaurAnimRig *)this);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_b0);
  std::string::string((string *)aRStack_a0,"OnAnimStopped");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_a8,
             aRStack_a0);
  (*pcVar3)(plVar2,asStack_b8,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)aRStack_a0);
  nop();
  Sexy::RtId::~RtId(aRStack_a8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b0);
  std::string::~string(asStack_b8);
  ValidatePlantData::~ValidatePlantData((ValidatePlantData *)local_78);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_c0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AirMissileLauncher::onEnterState_Launched(ZombieState) */

void AirMissileLauncher::onEnterState_Launched(AirMissileLauncher *param_1)

{
  Launch(param_1);
  Zombie::SetIgnoresCollisions((Zombie *)param_1,true);
  Zombie::SetIsTargetable((Zombie *)param_1,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AirMissileLauncher::StaticClassInit() */

void AirMissileLauncher::StaticClassInit(void)

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
      std::string::string(asStack_150,"AirMissileLauncher");
      (*pcVar4)(plVar1,asStack_150,FUN_047a324c,0x830,0);
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
  Sexy::Delegate1<ZombieState>::
  Delegate1<AirMissileLauncher,void(AirMissileLauncher::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<AirMissileLauncher,void(AirMissileLauncher::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::
  Delegate1<AirMissileLauncher,void(AirMissileLauncher::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_AirMissileLauncher_PrepareLaunch");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_047a2ad4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::
  Delegate1<AirMissileLauncher,void(AirMissileLauncher::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<AirMissileLauncher,void(AirMissileLauncher::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::
  Delegate1<AirMissileLauncher,void(AirMissileLauncher::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_AirMissileLauncher_RedEye");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_047a2ad4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa38);
  Sexy::Delegate1<ZombieState>::
  Delegate1<AirMissileLauncher,void(AirMissileLauncher::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa40);
  Sexy::Delegate0::Delegate0<AirMissileLauncher,void(AirMissileLauncher::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa48);
  Sexy::Delegate1<ZombieState>::
  Delegate1<AirMissileLauncher,void(AirMissileLauncher::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_AirMissileLauncher_Launching");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x21,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_047a2ad4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa50);
  Sexy::Delegate1<ZombieState>::
  Delegate1<AirMissileLauncher,void(AirMissileLauncher::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa58);
  Sexy::Delegate0::Delegate0<AirMissileLauncher,void(AirMissileLauncher::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa60);
  Sexy::Delegate1<ZombieState>::
  Delegate1<AirMissileLauncher,void(AirMissileLauncher::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_AirMissileLauncher_Launched");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x22,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_047a2ad4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa68);
  Sexy::Delegate1<ZombieState>::
  Delegate1<AirMissileLauncher,void(AirMissileLauncher::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa70);
  Sexy::Delegate0::Delegate0<AirMissileLauncher,void(AirMissileLauncher::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa78);
  Sexy::Delegate1<ZombieState>::
  Delegate1<AirMissileLauncher,void(AirMissileLauncher::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_AirMissileLauncher_Shake");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x23,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_047a2ad4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* AirMissileLauncher::StaticGetClass() */

long * AirMissileLauncher::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AirMissileLauncher",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AirMissileLauncher::GetClass() const */

long * AirMissileLauncher::GetClass(void)

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
  (*pcVar3)(plVar1,"AirMissileLauncher",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AirMissileLauncher::onZombieInitialize() */

void __thiscall AirMissileLauncher::onZombieInitialize(AirMissileLauncher *this)

{
  Zombie::onZombieInitialize((Zombie *)this);
  Zombie::SetIsFlying((Zombie *)this,true);
  Zombie::SetIsControlled((Zombie *)this,true);
  Zombie::SetIsTargetable((Zombie *)this,false);
  Zombie::SetIgnoresCollisions((Zombie *)this,true);
  return;
}


/* AirMissileLauncher::onPlaceOnBoard() */

void __thiscall AirMissileLauncher::onPlaceOnBoard(AirMissileLauncher *this)

{
  Zombie::onPlaceOnBoard((Zombie *)this);
  PrepareToMove(this);
  return;
}


/* AirMissileLauncher::TakeDamage(DamageInfo const&) */

void __thiscall AirMissileLauncher::TakeDamage(AirMissileLauncher *this,DamageInfo *param_1)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = TestFlag<DamageTypeFlags>(*(undefined8 *)(param_1 + 0x10),0x20000);
  if ((bVar1) && (cVar2 = Zombie::isInState((Zombie *)this,0x22), cVar2 == '\0')) {
    Zombie::TakeDamage((Zombie *)this,param_1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AirMissileLauncher::HandleTouchMove(Sexy::SexyVector2 const&) */

void AirMissileLauncher::HandleTouchMove(SexyVector2 *param_1)

{
  SexyVector2 *this;
  SexyVector2 *pSVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  SexyVector2 *in_x1;
  float fVar5;
  undefined4 uVar6;
  float local_88 [2];
  undefined4 local_80;
  undefined4 local_7c;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  long local_8;
  
  this = param_1 + 0x820;
  pSVar1 = param_1 + 0x818;
  local_8 = ___stack_chk_guard;
  fVar5 = (float)Sexy::SexyVector2::operator-(this,pSVar1);
  local_88[0] = (float)Sexy::SexyVector2::operator-(in_x1,this);
  *(undefined8 *)(param_1 + 0x820) = *(undefined8 *)in_x1;
  if (((fVar5 == 0.0) || ((0.0 < local_88[0] && (0.0 < fVar5)))) ||
     ((local_88[0] < 0.0 && (fVar5 < 0.0)))) {
    if (param_1[0x80c] == (SexyVector2)0x0) {
      fVar5 = (float)Sexy::SexyVector2::operator-(this,pSVar1);
      uVar6 = 0x42480000;
      if (50.0 < ABS(fVar5)) {
        *(int *)(param_1 + 0x800) = *(int *)(param_1 + 0x800) + 1;
        param_1[0x80c] = (SexyVector2)0x1;
        std::string::string((string *)&local_68,"Play_SkyCity_Finger_Slide");
        RealObject::PlayPositionalSound((RealObject *)param_1,(string *)&local_68,0.0);
        std::string::~string((string *)&local_68);
        nop();
        local_68 = Sexy::SexyVector2::operator+(this,pSVar1);
        local_64 = uVar6;
        local_80 = Sexy::SexyVector2::operator/((SexyVector2 *)&local_68,2.0);
        local_7c = uVar6;
        PlaySwipeEffect((AirMissileLauncher *)param_1,(SexyVector2 *)local_88,
                        (SexyVector2 *)&local_80);
        iVar2 = *(int *)(param_1 + 0x800);
        iVar4 = GetDestroySwipeCount((AirMissileLauncher *)param_1);
        if (iVar2 < iVar4) {
          cVar3 = Zombie::isInState((Zombie *)param_1,1);
          if (((cVar3 != '\0') || (cVar3 = Zombie::isInState((Zombie *)param_1,0x1f), cVar3 != '\0')
              ) || (cVar3 = Zombie::isInState((Zombie *)param_1,0x20), cVar3 != '\0')) {
            Zombie::setZombieState((Zombie *)param_1,0x23,0);
          }
        }
        else {
          Sexy::Point::Point(aPStack_78,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
          DamageInfo::DamageInfo
                    ((DamageInfo *)0x0,local_70,local_6c,(string *)&local_68,2,aPStack_78,0);
          Zombie::TakeDamage((Zombie *)param_1,(DamageInfo *)&local_68);
          DamageInfo::~DamageInfo((DamageInfo *)&local_68);
        }
      }
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x818) = *(undefined8 *)in_x1;
    *(undefined8 *)(param_1 + 0x820) = *(undefined8 *)in_x1;
    param_1[0x80c] = (SexyVector2)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AirMissileLauncher::HandleTouch(Sexy::Touch const&) */

void __thiscall AirMissileLauncher::HandleTouch(AirMissileLauncher *this,Touch *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  Insets *pIVar4;
  float local_28;
  float fStack_24;
  Point aPStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Zombie::isInState((Zombie *)this,0x22);
  if ((((cVar1 != '\0') || (cVar1 = Zombie::isInState((Zombie *)this,0x21), cVar1 != '\0')) ||
      (cVar1 = (**(code **)(*(long *)this + 0x328))(this), cVar1 != '\0')) ||
     (cVar1 = Board::IsPlaying(*(Board **)(gLawnApp + 0x9f0)), cVar1 == '\0')) {
    cVar1 = '\0';
    goto switchD_047a3bf0_caseD_2;
  }
  if (((*(long *)(this + 0x828) != 0) || (*(int *)(param_1 + 0x30) != 0)) &&
     (cVar1 = '\0', *(long *)(this + 0x828) != *(long *)param_1)) goto switchD_047a3bf0_caseD_2;
  iVar2 = FUN_0479f0f4(*(undefined4 *)(param_1 + 0x10));
  iVar3 = FUN_0479f0f4(*(undefined4 *)(param_1 + 0x14));
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_28,(float)iVar2,(float)iVar3);
  pIVar4 = (Insets *)(**(code **)(*(long *)this + 0x178))(this);
  Sexy::Insets::Insets(aIStack_18,pIVar4);
  Sexy::Point::Point(aPStack_20,(int)local_28,(int)fStack_24);
  cVar1 = Sexy::TRect<int>::Contains((TRect<int> *)aIStack_18,(TPoint *)aPStack_20);
  if (cVar1 == '\0') {
switchD_047a3bf0_caseD_4:
    CancelTouch(this);
  }
  else {
    switch(*(undefined4 *)(param_1 + 0x30)) {
    case 0:
      *(undefined8 *)(this + 0x828) = *(undefined8 *)param_1;
      *(ulong *)(this + 0x818) = CONCAT44(fStack_24,local_28);
      *(ulong *)(this + 0x820) = CONCAT44(fStack_24,local_28);
      break;
    case 1:
      HandleTouchMove((SexyVector2 *)this);
      break;
    case 3:
      HandleTouchMove((SexyVector2 *)this);
      CancelTouch(this);
      break;
    case 4:
      goto switchD_047a3bf0_caseD_4;
    }
  }
switchD_047a3bf0_caseD_2:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}

