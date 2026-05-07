// Class: ZombieRa


/* ZombieRa::IncrementSunsCollected(int) */

void __thiscall ZombieRa::IncrementSunsCollected(ZombieRa *this,int param_1)

{
  *(int *)(this + 0x800) = *(int *)(this + 0x800) + param_1;
  return;
}


/* ZombieRa::onLostHead() */

void __thiscall ZombieRa::onLostHead(ZombieRa *this)

{
  char cVar1;
  
  cVar1 = Zombie::isInState((Zombie *)this,0x1f);
  if (cVar1 != '\0') {
    while (0 < *(int *)(this + 0x808)) {
      (**(code **)(*(long *)this + 0x480))(this,5);
    }
    *(undefined4 *)(this + 0x804) = 0;
  }
  return;
}


/* ZombieRa::onAnimationDone(StandaloneEffect*) */

void ZombieRa::onAnimationDone(StandaloneEffect *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 != '\0') {
    return;
  }
  cVar1 = Zombie::HasCondition(param_1,0x6f);
  if (cVar1 == '\0') {
    (**(code **)(*(long *)param_1 + 0x260))(param_1);
    return;
  }
  (**(code **)(*(long *)param_1 + 600))(param_1);
  return;
}


/* ZombieRa::~ZombieRa() */

void __thiscall ZombieRa::~ZombieRa(ZombieRa *this)

{
  *(undefined ***)this = &PTR_GetClass_068b3160;
  *(undefined ***)(this + 0x10) = &PTR__ZombieRa_068b3ba8;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieRa::~ZombieRa() */

void __thiscall ZombieRa::~ZombieRa(ZombieRa *this)

{
  ~ZombieRa(this + -0x10);
  return;
}


/* ZombieRa::~ZombieRa() */

void __thiscall ZombieRa::~ZombieRa(ZombieRa *this)

{
  ~ZombieRa(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieRa::~ZombieRa() */

void __thiscall ZombieRa::~ZombieRa(ZombieRa *this)

{
  ~ZombieRa(this + -0x10);
  return;
}


/* ZombieRa::ShouldReleaseSun() */

undefined1 __thiscall ZombieRa::ShouldReleaseSun(ZombieRa *this)

{
  char cVar1;
  float *pfVar2;
  undefined1 uVar3;
  
  cVar1 = Zombie::isInState((Zombie *)this,0x20);
  if ((((cVar1 != '\0') || (cVar1 = (**(code **)(*(long *)this + 0x330))(this), cVar1 != '\0')) ||
      (cVar1 = (**(code **)(*(long *)this + 0x328))(this), cVar1 != '\0')) ||
     ((pfVar2 = (float *)std::
                         _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        *)this), uVar3 = 0, 770.0 <= *pfVar2 &&
      (cVar1 = Zombie::HasCondition(this,0x6f), cVar1 == '\0')))) {
    uVar3 = 1;
  }
  return uVar3;
}


/* ZombieRa::ZombieRa() */

void __thiscall ZombieRa::ZombieRa(ZombieRa *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_068b3160;
  *(undefined ***)(this + 0x10) = &PTR__ZombieRa_068b3ba8;
  return;
}


/* ZombieRa::StaticNew() */

ZombieRa * ZombieRa::StaticNew(void)

{
  ZombieRa *this;
  
  this = ::operator_new(0x810);
  ZombieRa(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRa::releaseCollectedSuns(bool) */

void __thiscall ZombieRa::releaseCollectedSuns(ZombieRa *this,bool param_1)

{
  int iVar1;
  SexyVector3 *pSVar2;
  string asStack_10 [8];
  long local_8;
  
  iVar1 = *(int *)(this + 0x800);
  local_8 = ___stack_chk_guard;
  if (0 < iVar1) {
    pSVar2 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    Board::FanOutSun(*(Board **)(gLawnApp + 0x9f0),pSVar2,iVar1,false,false,param_1,false,false);
    if (0xf9 < *(int *)(this + 0x800)) {
      std::string::string(asStack_10,"sun_catcher_ch");
      Achievement::Queue(asStack_10,100.0);
      std::string::~string(asStack_10);
      nop();
      Achievement::ShowAll();
    }
    *(undefined4 *)(this + 0x800) = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRa::onTakeFatalDamage(DamageInfo const&) */

void ZombieRa::onTakeFatalDamage(DamageInfo *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  releaseCollectedSuns((ZombieRa *)param_1,false);
  std::string::string(asStack_10,"Play_RaZombie_Death");
  RealObject::PlayPositionalSound((RealObject *)param_1,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieRa::onMowedDown() */

void __thiscall ZombieRa::onMowedDown(ZombieRa *this)

{
  releaseCollectedSuns(this,false);
  return;
}


/* ZombieRa::onFlicked(Zombie*) */

void __thiscall ZombieRa::onFlicked(ZombieRa *this,Zombie *param_1)

{
  if (param_1 != (Zombie *)this) {
    return;
  }
  releaseCollectedSuns(this,false);
  return;
}


/* ZombieRa::onChangeTeams(TeamFlags, TeamFlags) */

void ZombieRa::onChangeTeams(ZombieRa *param_1)

{
  char cVar1;
  
  cVar1 = RealObject::IsOnTeam(param_1,1);
  if (cVar1 == '\0') {
    return;
  }
  releaseCollectedSuns(param_1,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRa::IncrementSunsClaimed(int) */

void __thiscall ZombieRa::IncrementSunsClaimed(ZombieRa *this,int param_1)

{
  char cVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  string asStack_10 [8];
  long local_8;
  
  *(int *)(this + 0x804) = *(int *)(this + 0x804) + param_1;
  *(int *)(this + 0x808) = *(int *)(this + 0x808) + 1;
  local_8 = ___stack_chk_guard;
  cVar1 = Zombie::isInState((Zombie *)this,1);
  if (((cVar1 != '\0') || (cVar1 = Zombie::isInState((Zombie *)this,2), cVar1 != '\0')) ||
     (cVar1 = Zombie::HasCondition(this,0x6f), cVar1 != '\0')) {
    Zombie::setZombieState((Zombie *)this,0x1f,0);
    pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
    (**(code **)(*(long *)pZVar2 + 0x268))();
    std::string::string(asStack_10,"Play_RaZombie_WandActivate");
    RealObject::PlayPositionalSound((RealObject *)this,asStack_10,0.0);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"Play_RaZombie_SunSuck");
    RealObject::PlayPositionalSound((RealObject *)this,asStack_10,0.0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieRa::CanClaimSun() */

undefined8 __thiscall ZombieRa::CanClaimSun(ZombieRa *this)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  ZombieRaProps *pZVar5;
  float *pfVar6;
  
  cVar3 = (**(code **)(*(long *)this + 0x478))();
  if ((((cVar3 == '\0') && (cVar3 = Zombie::IsSuspended((Zombie *)this), cVar3 == '\0')) &&
      (cVar3 = RealObject::IsOnTeam(this,1), cVar3 == '\0')) &&
     (iVar4 = *(int *)(this + 0x804), iVar1 = *(int *)(this + 0x800),
     pZVar5 = Zombie::GetProps<ZombieRaProps>((Zombie *)this),
     iVar1 + iVar4 < *(int *)(pZVar5 + 0x210))) {
    if (((DAT_06b1fd68 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_06b1fd68), iVar4 != 0)) {
      iVar4 = BoardTransforms::GridToBoardSpaceX(8);
      DAT_06b1fc28 = iVar4 + 0x1e;
      __cxa_guard_release(&DAT_06b1fd68);
    }
    uVar2 = (uint)DAT_06b1fd60;
    if (((DAT_06b1fd60 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_06b1fd60), iVar4 != 0)) {
      iVar4 = BoardTransforms::GridToBoardSpaceX(uVar2 & 1);
      DAT_06b1fcd8 = iVar4 + 0x1e;
      __cxa_guard_release(&DAT_06b1fd60);
    }
    pfVar6 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    if (((*pfVar6 <= (float)DAT_06b1fc28) && ((float)DAT_06b1fcd8 <= *pfVar6)) ||
       (cVar3 = Zombie::HasCondition(this,0x6f), cVar3 != '\0')) {
      return 1;
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRa::DecrementSunsClaimed(int) */

void __thiscall ZombieRa::DecrementSunsClaimed(ZombieRa *this,int param_1)

{
  int iVar1;
  char cVar2;
  ZombieHydraHeadAnimRig *pZVar3;
  code *pcVar4;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  iVar1 = *(int *)(this + 0x808);
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0x808) = iVar1 + -1;
  *(int *)(this + 0x804) = *(int *)(this + 0x804) - param_1;
  if ((iVar1 + -1 < 1) && (cVar2 = Zombie::isInState((Zombie *)this,0x1f), cVar2 != '\0')) {
    Zombie::setZombieState((Zombie *)this,0x20,0);
    pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
    pcVar4 = *(code **)(*(long *)pZVar3 + 0x270);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimationDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    (*pcVar4)(pZVar3,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRa::StaticClassInit() */

void ZombieRa::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieRa");
      (*pcVar4)(plVar1,asStack_150,FUN_046ca1bc,0x810,0);
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
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieRa,void(ZombieRa::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieRa,void(ZombieRa::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieRa,void(ZombieRa::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_RA_Claiming");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046c9eb8(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieRa,void(ZombieRa::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombieRa,void(ZombieRa::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieRa,void(ZombieRa::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_RA_PoweringDown");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046c9eb8(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieRa::StaticGetClass() */

long * ZombieRa::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieRa",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieRa::GetClass() const */

long * ZombieRa::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieRa",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRa::onZombieInitialize() */

void __thiscall ZombieRa::onZombieInitialize(ZombieRa *this)

{
  ZombieRaSubSystem *pZVar1;
  code *pcVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onZombieInitialize((Zombie *)this);
  *(undefined4 *)(this + 0x808) = 0;
  *(undefined4 *)(this + 0x800) = 0;
  *(undefined4 *)(this + 0x804) = 0;
  pZVar1 = Board::GetGameSubSystem<ZombieRaSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  pcVar2 = *(code **)(*(long *)pZVar1 + 0x88);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  (*pcVar2)(pZVar1,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieRa::registerForEvents() */

void __thiscall ZombieRa::registerForEvents(ZombieRa *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Zombie::registerForEvents((Zombie *)this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onFlicked);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::Subscribe<Zombie*,Sexy::CBMemberTranslatorX<ZombieRa,void(ZombieRa::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieFlicked,&local_40);
  return;
}


/* ZombieRa::updateState_Walk() */

void __thiscall ZombieRa::updateState_Walk(ZombieRa *this)

{
  char cVar1;
  RiftThemeFastSpell *pRVar2;
  undefined1 auVar3 [16];
  
  pRVar2 = RiftUtils::GetThemeByClass<RiftThemeFastSpell>();
  if ((pRVar2 != (RiftThemeFastSpell *)0x0) && (cVar1 = Creature::IsOnBoard(), cVar1 != '\0')) {
    auVar3 = PVZ_EOT();
    Zombie::ApplyCondition((Zombie *)auVar3,0,this,0x6f,1);
    return;
  }
  Zombie::updateState_Walk((Zombie *)this);
  return;
}

