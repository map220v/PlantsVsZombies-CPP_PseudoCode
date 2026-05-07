// Class: ZombieGum


/* ZombieGum::onDeathAnimComplete(std::string) */

void ZombieGum::onDeathAnimComplete(long *param_1)

{
  (**(code **)(*param_1 + 0x48))();
  return;
}


/* ZombieGum::onIntroAnimComplete(std::string) */

void ZombieGum::onIntroAnimComplete(Zombie *param_1)

{
  Zombie::setZombieState(param_1,0,0);
  return;
}


/* ZombieGum::InitializeGum(float, Sexy::RtWeakPtr<Zombie>, int) */

void __thiscall
ZombieGum::InitializeGum(float param_1,ZombieGum *this,RtWeakPtr *param_3,undefined4 param_4)

{
  RealObject::JoinTeam((RealObject *)this,1);
  Zombie::SetHitpoints((Zombie *)this,param_1);
  FUN_0427c5c0(param_1,this + 0x284);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x800),param_3);
  *(undefined4 *)(this + 0x810) = param_4;
  return;
}


/* ZombieGum::~ZombieGum() */

void __thiscall ZombieGum::~ZombieGum(ZombieGum *this)

{
  *(undefined ***)this = &PTR_GetClass_06823430;
  *(undefined ***)(this + 0x10) = &PTR__ZombieGum_06823e78;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x800));
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieGum::~ZombieGum() */

void __thiscall ZombieGum::~ZombieGum(ZombieGum *this)

{
  ~ZombieGum(this + -0x10);
  return;
}


/* ZombieGum::~ZombieGum() */

void __thiscall ZombieGum::~ZombieGum(ZombieGum *this)

{
  ~ZombieGum(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieGum::~ZombieGum() */

void __thiscall ZombieGum::~ZombieGum(ZombieGum *this)

{
  ~ZombieGum(this + -0x10);
  return;
}


/* ZombieGum::onZombieConditionEnded(Zombie*, int) */

void __thiscall ZombieGum::onZombieConditionEnded(ZombieGum *this,Zombie *param_1,int param_2)

{
  Zombie *pZVar1;
  
  if ((param_2 == 0x55) &&
     (pZVar1 = (Zombie *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x800)), param_1 == pZVar1)) {
    Zombie::setZombieState((Zombie *)this,0x20,0);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGum::onEnterState_GumIntro(ZombieState) */

void ZombieGum::onEnterState_GumIntro(Zombie *param_1)

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
  std::string::string(asStack_58,"animation");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)param_1,onIntroAnimComplete);
  Sexy::Delegate1<std::string_const&>::Delegate1<ZombieGum,void(ZombieGum::*)(std::string)>
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
/* ZombieGum::onEnterState_GumDeath(ZombieState) */

void ZombieGum::onEnterState_GumDeath(Zombie *param_1)

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
  std::string::string(asStack_58,"animation2");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)param_1,onDeathAnimComplete);
  Sexy::Delegate1<std::string_const&>::Delegate1<ZombieGum,void(ZombieGum::*)(std::string)>
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


/* ZombieGum::HypnoZombie(Sexy::RtWeakPtr<Zombie>) */

void __thiscall ZombieGum::HypnoZombie(ZombieGum *this,RtWeakPtr *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  RtObject *this_00;
  Zombie *this_01;
  long lVar5;
  float fVar6;
  Zombie *pZVar7;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
  if (bVar1) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    this_01 = Sexy::RtObject::Cast<Zombie>(this_00);
    if ((((this_01 != (Zombie *)0x0) && (cVar2 = Zombie::IsBoss(this_01), cVar2 == '\0')) &&
        (iVar3 = Zombie::GetSizeType(this_01), iVar3 != 2)) &&
       (cVar2 = (**(code **)(*(long *)this_01 + 0x4d8))(this_01), cVar2 == '\0')) {
      cVar2 = (**(code **)(*(long *)this_01 + 0x508))(this_01);
      if (cVar2 == '\0') {
        Zombie::SetFacing(this_01,1);
        pZVar7 = (Zombie *)PVZ_EOT();
        Zombie::ApplyCondition(pZVar7,0,this_01,0x19,1);
        (**(code **)(*(long *)this_01 + 0x2f0))(this_01);
        Zombie::EndCondition(this_01,0x55);
        MessageRouter::Broadcast<Zombie*,Zombie*>
                  ((MessageRouter *)gMessageRouter,Message::ZombieHypnotized,this_01);
        RealObject::JoinTeam((RealObject *)this_01,1);
        (**(code **)(*(long *)this_01 + 0x198))(this_01,*(undefined4 *)(this + 0x810));
        fVar6 = (float)Zombie::GetExtraHitPointsmodifier(this_01);
        lVar5 = FUN_0427c5b8(*(undefined8 *)(this_01 + 0x550));
        FUN_0427c5c0(fVar6 * *(float *)(lVar5 + 0x18),this_01 + 0x284);
        fVar6 = (float)Zombie::GetExtraHitPointsmodifier(this_01);
        lVar5 = FUN_0427c5b8(*(undefined8 *)(this_01 + 0x550));
        Zombie::SetHitpoints(this_01,fVar6 * *(float *)(lVar5 + 0x18));
        uVar4 = FUN_0427c5cc(*(undefined4 *)(this_01 + 0xb0));
        fVar6 = (float)Zombie::GetExtraHitPointsmodifier(this_01);
        lVar5 = FUN_0427c5b8(*(undefined8 *)(this_01 + 0x550));
        Zombie::setHelm((Zombie *)(fVar6 * *(float *)(lVar5 + 0x60)),this_01,uVar4);
        iVar3 = FUN_0427c5b4(*(undefined4 *)(this_01 + 0x50));
        if (1 < iVar3) {
          (**(code **)(*(long *)this_01 + 0x430))(this_01,0);
          return;
        }
      }
    }
  }
  return;
}


/* ZombieGum::ZombieGum() */

void __thiscall ZombieGum::ZombieGum(ZombieGum *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_06823430;
  *(undefined ***)(this + 0x10) = &PTR__ZombieGum_06823e78;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x800));
  this[0x80c] = (ZombieGum)0x0;
  *(undefined4 *)(this + 0x814) = 0;
  *(undefined4 *)(this + 0x808) = 0xffffffff;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieConditionEnded);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,int,Sexy::CBMemberTranslatorX<ZombieGum,void(ZombieGum::*)(Zombie*,int)>>
            ((MessageRouter *)puVar1,Message::ZombieConditionEnded,&local_40);
  return;
}


/* ZombieGum::StaticNew() */

ZombieGum * ZombieGum::StaticNew(void)

{
  ZombieGum *this;
  
  this = ::operator_new(0x818);
  ZombieGum(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGum::StaticClassInit() */

void ZombieGum::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieGum");
      (*pcVar4)(plVar1,asStack_150,FUN_0427f5e8,0x818,0);
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
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieGum,void(ZombieGum::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieGum,void(ZombieGum::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieGum,void(ZombieGum::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_GUM_GumIntro");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0427f2e4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieGum,void(ZombieGum::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombieGum,void(ZombieGum::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieGum,void(ZombieGum::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_GUM_GumDeath");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0427f2e4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieGum::StaticGetClass() */

long * ZombieGum::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieGum",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieGum::GetClass() const */

long * ZombieGum::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieGum",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGum::TakeDamage(DamageInfo const&) */

void __thiscall ZombieGum::TakeDamage(ZombieGum *this,DamageInfo *param_1)

{
  bool bVar1;
  int iVar2;
  ZombieGumProps *pZVar3;
  PopAnimRig *pPVar4;
  Zombie *pZVar5;
  string *psVar6;
  GumPoisonSubsystem *pGVar7;
  float fVar8;
  float fVar9;
  RtWeakPtr<Sexy::SoundResource> aRStack_78 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  DamageInfo aDStack_68 [16];
  undefined1 auStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DamageInfo::DamageInfo(aDStack_68,param_1);
  operator|=(auStack_58,0x200000000000);
  fVar8 = (float)FUN_0427c5bc(*(undefined4 *)(this + 0x280));
  if ((0.0 < fVar8 - *(float *)(param_1 + 8)) || (*(int *)(this + 0x814) != 0)) goto LAB_0427f7b8;
  *(undefined4 *)(this + 0x814) = 1;
  fVar8 = (float)(**(code **)(*(long *)this + 0x308))(0x3f800000,this);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_78,(RtWeakPtrBase *)(this + 0x800));
  if ((*(RtObject **)param_1 != (RtObject *)0x0) &&
     (pZVar5 = Sexy::RtObject::Cast<Zombie>(*(RtObject **)param_1), pZVar5 != (Zombie *)0x0)) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)aRStack_78,(RtWeakPtrBase *)aRStack_70);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
  }
  iVar2 = *(int *)(this + 0x810);
  if (iVar2 < 5) {
LAB_0427f8cc:
    if (iVar2 < 3) {
      if (iVar2 != 2) goto LAB_0427f8ec;
      pZVar3 = Zombie::GetProps<ZombieGumProps>((Zombie *)this);
      fVar9 = *(float *)(pZVar3 + 0x210);
    }
    else {
      pZVar3 = Zombie::GetProps<ZombieGumProps>((Zombie *)this);
      fVar9 = *(float *)(pZVar3 + 0x214);
    }
    if (fVar8 < fVar9) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_70,(RtWeakPtrBase *)aRStack_78);
      HypnoZombie(this,(RtWeakPtr<Sexy::SoundResource> *)aRStack_70);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
    }
  }
  else {
    psVar6 = (string *)Zombie::GetTypeName((Zombie *)this);
    bVar1 = std::operator==(psVar6,"poison_gum");
    if (!bVar1) {
      iVar2 = *(int *)(this + 0x810);
      goto LAB_0427f8cc;
    }
    pZVar3 = Zombie::GetProps<ZombieGumProps>((Zombie *)this);
    fVar9 = *(float *)(pZVar3 + 0x214);
    pGVar7 = Board::GetGameSubSystem<GumPoisonSubsystem>(*(Board **)(gLawnApp + 0x9f0));
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_70,(RtWeakPtrBase *)aRStack_78);
    GumPoisonSubsystem::ZombieEatPoisonGum
              ((GumPoisonSubsystem *)0x40000000,0x40a00000,pGVar7,
               (RtWeakPtr<Sexy::SoundResource> *)aRStack_70,fVar8 < fVar9,
               *(undefined4 *)(this + 0x810));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
  }
LAB_0427f8ec:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
LAB_0427f7b8:
  Zombie::TakeDamage((Zombie *)this,aDStack_68);
  if (this[0x80c] == (ZombieGum)0x0) {
    pZVar3 = Zombie::GetProps<ZombieGumProps>((Zombie *)this);
    fVar8 = (float)FUN_0427c5bc(*(undefined4 *)(this + 0x280));
    fVar9 = (float)FUN_0427c5c8(*(undefined4 *)(this + 0x284));
    pPVar4 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
    iVar2 = DamageLifetime::OnHealthChanged
                      ((DamageLifetime *)(pZVar3 + 0x218),fVar8,fVar9,pPVar4,*(int *)(this + 0x808))
    ;
    if (*(int *)(this + 0x808) != iVar2) {
      *(int *)(this + 0x808) = iVar2;
    }
  }
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieGum::onUpdate() */

void __thiscall ZombieGum::onUpdate(ZombieGum *this)

{
  char cVar1;
  int iVar2;
  
  Zombie::onUpdate((Zombie *)this);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x800));
  if (cVar1 == '\0') {
    iVar2 = Zombie::getZombieStateSerialization((Zombie *)this);
    if (iVar2 == 0) {
      Zombie::setZombieState((Zombie *)this,0x20,0);
      return;
    }
  }
  return;
}


/* ZombieGum::onPlaceOnBoard() */

void __thiscall ZombieGum::onPlaceOnBoard(ZombieGum *this)

{
  CreatureAnimRig *this_00;
  
  Zombie::onPlaceOnBoard((Zombie *)this);
  Zombie::setZombieState((Zombie *)this,0x1f,0);
  Zombie::SetIsControlled((Zombie *)this,true);
  Zombie::setBlinkOnDamage((Zombie *)this,false);
  this_00 = (CreatureAnimRig *)Zombie::GetAnimRig((Zombie *)this);
  CreatureAnimRig::HideGroundTrack(this_00);
  return;
}


/* ZombieGum::onDestroy() */

void __thiscall ZombieGum::onDestroy(ZombieGum *this)

{
  char cVar1;
  Zombie *pZVar2;
  
  Zombie::onDestroy((Zombie *)this);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x800));
  if (cVar1 == '\0') {
    return;
  }
  pZVar2 = (Zombie *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x800))
  ;
  Zombie::EndCondition(pZVar2,0x55);
  return;
}

