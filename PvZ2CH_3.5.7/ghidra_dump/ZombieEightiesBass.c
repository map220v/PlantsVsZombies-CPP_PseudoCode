// Class: ZombieEightiesBass


/* ZombieEightiesBass::onExitState_Falling(ZombieState) */

void ZombieEightiesBass::onExitState_Falling(long *param_1)

{
  if (1 < (int)param_1[10]) {
    (**(code **)(*param_1 + 0x430))(param_1,0);
  }
  return;
}


/* ZombieEightiesBass::doFallFromSky(Sexy::SexyVector3 const&) */

void ZombieEightiesBass::doFallFromSky(SexyVector3 *param_1)

{
  (**(code **)(*(long *)param_1 + 0x78))();
  Zombie::setZombieState((Zombie *)param_1,0x1f,0);
  return;
}


/* ZombieEightiesBass::ZombieEightiesBass() */

void __thiscall ZombieEightiesBass::ZombieEightiesBass(ZombieEightiesBass *this)

{
  undefined4 uVar1;
  
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_068ef6f0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieEightiesBass_068f0150;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x800));
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x808) = uVar1;
  return;
}


/* ZombieEightiesBass::StaticNew() */

ZombieEightiesBass * ZombieEightiesBass::StaticNew(void)

{
  ZombieEightiesBass *this;
  
  this = ::operator_new(0x810);
  ZombieEightiesBass(this);
  return this;
}


/* ZombieEightiesBass::~ZombieEightiesBass() */

void __thiscall ZombieEightiesBass::~ZombieEightiesBass(ZombieEightiesBass *this)

{
  *(undefined ***)this = &PTR_GetClass_068ef6f0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieEightiesBass_068f0150;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x800));
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieEightiesBass::~ZombieEightiesBass() */

void __thiscall ZombieEightiesBass::~ZombieEightiesBass(ZombieEightiesBass *this)

{
  ~ZombieEightiesBass(this + -0x10);
  return;
}


/* ZombieEightiesBass::~ZombieEightiesBass() */

void __thiscall ZombieEightiesBass::~ZombieEightiesBass(ZombieEightiesBass *this)

{
  ~ZombieEightiesBass(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieEightiesBass::~ZombieEightiesBass() */

void __thiscall ZombieEightiesBass::~ZombieEightiesBass(ZombieEightiesBass *this)

{
  ~ZombieEightiesBass(this + -0x10);
  return;
}


/* ZombieEightiesBass::onAnimStopped(std::string const&) */

void __thiscall ZombieEightiesBass::onAnimStopped(ZombieEightiesBass *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  long extraout_x0;
  
  bVar1 = std::operator==(param_1,"attack_on");
  if (bVar1) {
    cVar2 = (**(code **)(*(long *)this + 0x328))(this);
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(*(long *)this + 0x330))(this);
      if (cVar2 == '\0') {
        Zombie::setZombieState((Zombie *)this,0x20);
        return;
      }
    }
  }
  else {
    bVar1 = std::operator==(param_1,"attack_off");
    if (bVar1) {
      Zombie::GetAnimRig((Zombie *)this);
      nop();
      FUN_047e0294(extraout_x0 + 0x240);
      cVar2 = (**(code **)(*(long *)this + 0x328))(this);
      if ((cVar2 == '\0') && (cVar2 = (**(code **)(*(long *)this + 0x330))(this), cVar2 == '\0')) {
        (**(code **)(*(long *)this + 0x260))(this);
      }
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEightiesBass::calcShockWaveSpawnPosition() */

void __thiscall ZombieEightiesBass::calcShockWaveSpawnPosition(ZombieEightiesBass *this)

{
  long lVar1;
  ZombieEightiesBassProps *pZVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulong local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x800));
  fVar5 = *(float *)(lVar1 + 0x1c);
  fVar3 = (float)FUN_047e02a8(*(undefined4 *)(lVar1 + 0x18),fVar5,*(undefined4 *)(lVar1 + 0x20));
  pZVar2 = Zombie::GetProps<ZombieEightiesBassProps>((Zombie *)this);
  fVar4 = *(float *)(pZVar2 + 0x210);
  pZVar2 = Zombie::GetProps<ZombieEightiesBassProps>((Zombie *)this);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_10,fVar3 + fVar4,fVar5 + *(float *)(pZVar2 + 0x214));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10 & 0xffffffff,(int)(local_10 >> 0x20));
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEightiesBass::onEnterState_Dancing(ZombieState) */

void ZombieEightiesBass::onEnterState_Dancing(Zombie *param_1)

{
  bool bVar1;
  ZombieAnimRig_EightiesBass *extraout_x0;
  GridItemSpeaker *this;
  ZombieEightiesBassProps *pZVar2;
  Board *this_00;
  float fVar3;
  int local_60;
  int local_5c;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::GetAnimRig(param_1);
  nop();
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  ZombieAnimRig_EightiesBass::PlayDancing(extraout_x0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  BoardEntity::CalcGridPosition();
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_58,"speaker_bass");
  Board::AddGridItem(this_00,asStack_58,local_60 + -1,local_5c,1);
  nop();
  std::string::~string(asStack_58);
  nop();
  GridItemSpeaker::SetSpeakerBlasting(this);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0x800),(RtWeakPtrBase *)asStack_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
  fVar3 = (float)PVZ_T();
  pZVar2 = Zombie::GetProps<ZombieEightiesBassProps>(param_1);
  bVar1 = local_8 == ___stack_chk_guard;
  *(float *)(param_1 + 0x808) = fVar3 + *(float *)(pZVar2 + 0x218);
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEightiesBass::createShockWave() */

void ZombieEightiesBass::createShockWave(void)

{
  char cVar1;
  ZombieEightiesBass *in_x0;
  undefined8 uVar2;
  long lVar3;
  Board *pBVar4;
  undefined4 in_s1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  string asStack_28 [8];
  wstring awStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(in_x0 + 0x800));
  if (cVar1 != '\0') {
    uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
    std::string::string(asStack_28,"BassSpeakerShockWaveDefault");
    Sexy::ToWString(asStack_28);
    Sexy::RtName::RtName(aRStack_18,awStack_20);
    PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_30,uVar2,0xc,aRStack_18);
    Sexy::RtName::~RtName(aRStack_18);
    FUN_05476c50(awStack_20);
    std::string::~string(asStack_28);
    nop();
    pBVar4._0_4_ = (Board *)calcShockWaveSpawnPosition(in_x0);
    uVar2 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_30);
    lVar3 = Board::AddProjectile(pBVar4._0_4_,in_s1,0,uVar2,aRStack_18,0,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    FUN_047e029c(lVar3 + 0x24);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieEightiesBass::updateState_Dancing() */

void __thiscall ZombieEightiesBass::updateState_Dancing(ZombieEightiesBass *this)

{
  char cVar1;
  ZombieEightiesBassProps *pZVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *(float *)(this + 0x808);
  fVar3 = (float)PVZ_T();
  if (fVar4 < fVar3) {
    createShockWave();
    fVar3 = (float)PVZ_T();
    pZVar2 = Zombie::GetProps<ZombieEightiesBassProps>((Zombie *)this);
    *(float *)(this + 0x808) = fVar3 + *(float *)(pZVar2 + 0x218);
  }
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x800));
  if (cVar1 != '\0') {
    return;
  }
  Zombie::setZombieState((Zombie *)this,0x21);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEightiesBass::onEnterState_Falling(ZombieState) */

void ZombieEightiesBass::onEnterState_Falling(Zombie *param_1)

{
  ZombieAnimRig_EightiesBass *extraout_x0;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::GetAnimRig(param_1);
  nop();
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnimStopped");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_EightiesBass::PlayFalling(extraout_x0,aRStack_50);
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
/* ZombieEightiesBass::onEnterState_WreckingBass(ZombieState) */

void ZombieEightiesBass::onEnterState_WreckingBass(Zombie *param_1)

{
  ZombieAnimRig_EightiesBass *extraout_x0;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::GetAnimRig(param_1);
  nop();
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnimStopped");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_EightiesBass::PlayWreckAttack(extraout_x0,aRStack_50);
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
/* ZombieEightiesBass::onPlaceOnBoard() */

void __thiscall ZombieEightiesBass::onPlaceOnBoard(ZombieEightiesBass *this)

{
  int iVar1;
  long lVar2;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  MessageRouter::Post<Zombie*,ZombieEightiesBass*>
            ((MessageRouter *)gMessageRouter,Message::ZombieAddedToBoard,this);
  iVar1 = FUN_047e0284(*(undefined4 *)(this + 0x2b0));
  if (iVar1 == -1) {
    iVar1 = BoardTransforms::GridToBoardSpaceX(6);
    lVar2 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
    EATextSquish::Vec3::Vec3
              (aVStack_18,(float)iVar1 + 14.0,*(float *)(lVar2 + 4),*(float *)(lVar2 + 8));
    doFallFromSky((SexyVector3 *)this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEightiesBass::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void ZombieEightiesBass::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  char cVar1;
  bool bVar2;
  Plant *pPVar3;
  code *pcVar4;
  Board *pBVar5;
  int local_80;
  int local_7c;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  string asStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Zombie::isInState((Zombie *)param_1,0x1f);
  if ((cVar1 != '\0') && (bVar2 = std::operator==(param_4,"kill_plant"), bVar2)) {
    BoardEntity::CalcGridPosition();
    pBVar5 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_68,"");
    pPVar3 = (Plant *)Board::GetPlantAt(pBVar5,local_80 + -1,local_7c,asStack_68);
    std::string::~string(asStack_68);
    nop();
    if (pPVar3 != (Plant *)0x0) {
      Plant::SetIsThrownAway(pPVar3,true);
      pcVar4 = *(code **)(*(long *)pPVar3 + 0x120);
      Sexy::Point::Point(aPStack_78,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
      DamageInfo::DamageInfo((DamageInfo *)0x0,local_70,local_6c,asStack_68,0,param_1,aPStack_78,0);
      (*pcVar4)(pPVar3,asStack_68);
      DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
    }
    pBVar5 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_68,"");
    pPVar3 = (Plant *)Board::GetPlantAt(pBVar5,local_80,local_7c,asStack_68);
    std::string::~string(asStack_68);
    nop();
    if (pPVar3 != (Plant *)0x0) {
      Plant::SetIsThrownAway(pPVar3,true);
      pcVar4 = *(code **)(*(long *)pPVar3 + 0x120);
      Sexy::Point::Point(aPStack_78,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
      DamageInfo::DamageInfo((DamageInfo *)0x0,local_70,local_6c,asStack_68,0,param_1,aPStack_78,0);
      (*pcVar4)(pPVar3,asStack_68);
      DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEightiesBass::StaticClassInit() */

void ZombieEightiesBass::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieEightiesBass");
      (*pcVar4)(plVar1,asStack_150,FUN_047e231c,0x810,0);
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
  Delegate1<ZombieEightiesBass,void(ZombieEightiesBass::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieEightiesBass,void(ZombieEightiesBass::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieEightiesBass,void(ZombieEightiesBass::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_Bass_Falling");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_047e1f68(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieEightiesBass,void(ZombieEightiesBass::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombieEightiesBass,void(ZombieEightiesBass::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieEightiesBass,void(ZombieEightiesBass::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_Bass_Dancing");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_047e1f68(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa38);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieEightiesBass,void(ZombieEightiesBass::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa40);
  Sexy::Delegate0::Delegate0<ZombieEightiesBass,void(ZombieEightiesBass::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa48);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieEightiesBass,void(ZombieEightiesBass::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_Bass_WreckingBass");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x21,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_047e1f68(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieEightiesBass::StaticGetClass() */

long * ZombieEightiesBass::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieEightiesBass",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieEightiesBass::GetClass() const */

long * ZombieEightiesBass::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieEightiesBass",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieEightiesBass::onTakeFatalDamage(DamageInfo const&) */

void ZombieEightiesBass::onTakeFatalDamage(DamageInfo *param_1)

{
  char cVar1;
  GridItemSpeaker *this;
  
  Zombie::onTakeFatalDamage(param_1);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(param_1 + 0x800));
  if (cVar1 == '\0') {
    return;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x800));
  nop();
  GridItemSpeaker::SetSpeakerIdle(this);
  return;
}


/* ZombieEightiesBass::OverrideProjectileCollision(Projectile*) */

void __thiscall
ZombieEightiesBass::OverrideProjectileCollision(ZombieEightiesBass *this,Projectile *param_1)

{
  char cVar1;
  
  cVar1 = Zombie::isInState((Zombie *)this,0x1f);
  if (cVar1 != '\0') {
    return;
  }
  Zombie::OverrideProjectileCollision((Zombie *)this,param_1);
  return;
}

