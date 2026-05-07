// Class: KiwiFruitSmallProjectile


/* KiwiFruitSmallProjectile::onDestroyAniStop(std::string const&) */

void KiwiFruitSmallProjectile::onDestroyAniStop(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x48))();
  return;
}


/* KiwiFruitSmallProjectile::onPlantDied(Plant*) */

void __thiscall KiwiFruitSmallProjectile::onPlantDied(KiwiFruitSmallProjectile *this,Plant *param_1)

{
  char cVar1;
  
  if (*(Plant **)(this + 0x1d8) == param_1) {
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x1e0));
    if (cVar1 != '\0') {
      *(undefined8 *)(this + 0x1d8) = 0;
      Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0x1e0));
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* KiwiFruitSmallProjectile::StaticClassInit() */

void KiwiFruitSmallProjectile::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"KiwiFruitSmallProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_0491ca88,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* KiwiFruitSmallProjectile::StaticGetClass() */

long * KiwiFruitSmallProjectile::StaticGetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"KiwiFruitSmallProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* KiwiFruitSmallProjectile::GetClass() const */

long * KiwiFruitSmallProjectile::GetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"KiwiFruitSmallProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* KiwiFruitSmallProjectile::~KiwiFruitSmallProjectile() */

void __thiscall KiwiFruitSmallProjectile::~KiwiFruitSmallProjectile(KiwiFruitSmallProjectile *this)

{
  *(undefined ***)(this + 0x10) = &PTR__KiwiFruitSmallProjectile_06910478;
  *(undefined ***)this = &PTR_GetClass_06910280;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1e0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b0));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to KiwiFruitSmallProjectile::~KiwiFruitSmallProjectile() */

void __thiscall KiwiFruitSmallProjectile::~KiwiFruitSmallProjectile(KiwiFruitSmallProjectile *this)

{
  ~KiwiFruitSmallProjectile(this + -0x10);
  return;
}


/* KiwiFruitSmallProjectile::~KiwiFruitSmallProjectile() */

void __thiscall KiwiFruitSmallProjectile::~KiwiFruitSmallProjectile(KiwiFruitSmallProjectile *this)

{
  ~KiwiFruitSmallProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to KiwiFruitSmallProjectile::~KiwiFruitSmallProjectile() */

void __thiscall KiwiFruitSmallProjectile::~KiwiFruitSmallProjectile(KiwiFruitSmallProjectile *this)

{
  ~KiwiFruitSmallProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* KiwiFruitSmallProjectile::setZombieTarget(Zombie*) */

void __thiscall
KiwiFruitSmallProjectile::setZombieTarget(KiwiFruitSmallProjectile *this,Zombie *param_1)

{
  char cVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Zombie *)0x0) {
    cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1);
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1);
      if (cVar1 == '\0') {
        cVar1 = Zombie::IsControlled(param_1);
        if (cVar1 == '\0') {
          cVar1 = Zombie::IsInvisible(param_1);
          if (cVar1 == '\0') {
            *(Zombie **)(this + 0x1a8) = param_1;
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                      ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x1b0),
                       (RtWeakPtrBase *)aRStack_10);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
          }
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
/* KiwiFruitSmallProjectile::setPlantData(PlantTargetParams, Plant*, float) */

void __thiscall
KiwiFruitSmallProjectile::setPlantData
          (undefined4 param_1,KiwiFruitSmallProjectile *this,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  *(undefined8 *)(this + 0x1d0) = param_3;
  *(undefined8 *)(this + 0x1d8) = param_4;
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x1e0),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined4 *)(this + 0x1cc) = param_1;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* KiwiFruitSmallProjectile::SetAliveTime(float) */

void __thiscall KiwiFruitSmallProjectile::SetAliveTime(KiwiFruitSmallProjectile *this,float param_1)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x1c0) = fVar1 + param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* KiwiFruitSmallProjectile::onAttackStop(std::string const&) */

void __thiscall
KiwiFruitSmallProjectile::onAttackStop(KiwiFruitSmallProjectile *this,string *param_1)

{
  bool bVar1;
  PopAnimRig *pPVar2;
  long lVar3;
  ValueRange *this_00;
  float fVar4;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==("attack",param_1);
  if (bVar1) {
    pPVar2 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
    std::string::string(asStack_40,"idle");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    if (*(int *)(this + 0x1b8) == 3) {
      *(undefined4 *)(this + 0x1b8) = 0;
    }
    else if (*(int *)(this + 0x1b8) == 1) {
      *(undefined4 *)(this + 0x1b8) = 2;
      lVar3 = Projectile::GetProps((Projectile *)this);
      this_00 = (ValueRange *)FUN_0491b48c(*(undefined8 *)(lVar3 + 0x78));
      fVar4 = (float)ValueRange::GetRandomValue(this_00);
      Projectile::SetVelocity((Projectile *)this,fVar4,0.0,0.0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* KiwiFruitSmallProjectile::onProjectileInitialized() */

void __thiscall KiwiFruitSmallProjectile::onProjectileInitialized(KiwiFruitSmallProjectile *this)

{
  TimeChallengeEndLevelUI *this_00;
  float fVar1;
  undefined4 uVar2;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (TimeChallengeEndLevelUI *)Projectile::GetAnimRig((Projectile *)this);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x1e0);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
  Delegate4<KiwiFruitSmallProjectile,bool(KiwiFruitSmallProjectile::*)(std::string_const&,float,std::string_const&,std::string_const&)>
            (aDStack_38,aCStack_50);
  TimeChallengeEndLevelUI::SetContinueCallBack(this_00,aDStack_38);
  *(undefined4 *)(this + 0x1b8) = 2;
  *(undefined4 *)(this + 0x1bc) = 0;
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x1c0) = fVar1 + 5.0;
  uVar2 = PVZ_T();
  *(undefined4 *)(this + 0x1c4) = uVar2;
  FUN_0491b454(0x3e99999a,this + 0xc0);
  uVar2 = PVZ_T();
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined4 *)(this + 0x1c8) = uVar2;
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0x1b0));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* KiwiFruitSmallProjectile::playDestoryAnim() */

void __thiscall KiwiFruitSmallProjectile::playDestoryAnim(KiwiFruitSmallProjectile *this)

{
  PopAnimRig *pPVar1;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x1b8) != 4) {
    *(undefined4 *)(this + 0x1b8) = 4;
    Projectile::SetVelocity((Projectile *)this,0.0,0.0,0.0);
    pPVar1 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
    std::string::string(asStack_58,"die");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onDestroyAniStop);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<KiwiFruitSmallProjectile,void(KiwiFruitSmallProjectile::*)(std::string_const&)>
              (aDStack_38,aCStack_50);
    PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aDStack_38);
    std::string::~string(asStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* KiwiFruitSmallProjectile::onUpdate(float) */

void KiwiFruitSmallProjectile::onUpdate(float param_1)

{
  int iVar1;
  char cVar2;
  Projectile *in_x0;
  float *pfVar3;
  PopAnimRig *pPVar4;
  long lVar5;
  float fVar6;
  undefined4 in_register_00005004;
  ulong uVar7;
  float fVar8;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  uVar7 = CONCAT44(in_register_00005004,param_1);
  iVar1 = *(int *)(in_x0 + 0x1b8);
  local_8 = ___stack_chk_guard;
  if (iVar1 != 4) {
    if (iVar1 == 0) {
      *(undefined4 *)(in_x0 + 0x1b8) = 3;
      pPVar4 = (PopAnimRig *)Projectile::GetAnimRig(in_x0);
      std::string::string(asStack_58,"attack");
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)in_x0,onAttackStop);
      Sexy::Delegate1<std::string_const&>::
      Delegate1<KiwiFruitSmallProjectile,void(KiwiFruitSmallProjectile::*)(std::string_const&)>
                (aDStack_38,aCStack_50);
      PopAnimRig::PlayAndStop(pPVar4,asStack_58,1,aDStack_38);
      std::string::~string(asStack_58);
      nop();
      fVar6 = *(float *)(in_x0 + 0x1c4);
    }
    else {
      if (((iVar1 == 3) && (*(long *)(in_x0 + 0x1a8) != 0)) &&
         (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(in_x0 + 0x1b0)), cVar2 != '\0'))
      {
        pfVar3 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          **)(in_x0 + 0x1a8));
        lVar5 = std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               *)in_x0);
        Projectile::SetPosition
                  (in_x0,*pfVar3 + *(float *)(in_x0 + 0x1bc),*(float *)(lVar5 + 4),
                   *(float *)(lVar5 + 8));
      }
      fVar6 = *(float *)(in_x0 + 0x1c4);
    }
    if ((0.0 < fVar6) && (fVar6 = (float)PVZ_T(), 0.4 < fVar6 - *(float *)(in_x0 + 0x1c4))) {
      *(undefined4 *)(in_x0 + 0x1c4) = 0xbf800000;
      Projectile::GetProps(in_x0);
      pfVar3 = (float *)Projectile::GetVelocity(in_x0);
      Projectile::SetVelocity(in_x0,*pfVar3,0.0,pfVar3[2]);
    }
    fVar6 = (float)PVZ_T();
    uVar7 = (ulong)(uint)(fVar6 - *(float *)(in_x0 + 0x1c8));
    if (fVar6 - *(float *)(in_x0 + 0x1c8) <= 0.4) {
      fVar6 = (float)PVZ_T();
      uVar7 = FUN_0491b454((fVar6 - *(float *)(in_x0 + 0x1c8)) * 1.75 + 0.5,in_x0 + 0xc0);
    }
    if (*(int *)(in_x0 + 0x1b8) != 4) {
      fVar8 = *(float *)(in_x0 + 0x1c0);
      fVar6 = (float)PVZ_T();
      if (fVar6 <= fVar8) {
        pfVar3 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)in_x0);
        uVar7 = (ulong)(uint)*(float *)(in_x0 + 0x1cc);
        if (*pfVar3 < *(float *)(in_x0 + 0x1cc)) goto LAB_0491c5e4;
      }
      uVar7 = playDestoryAnim((KiwiFruitSmallProjectile *)in_x0);
    }
  }
LAB_0491c5e4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


/* KiwiFruitSmallProjectile::KiwiFruitSmallProjectile() */

void __thiscall KiwiFruitSmallProjectile::KiwiFruitSmallProjectile(KiwiFruitSmallProjectile *this)

{
  undefined *puVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_06910280;
  *(undefined ***)(this + 0x10) = &PTR__KiwiFruitSmallProjectile_06910478;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1b0));
  Sexy::Ratio::Ratio((Ratio *)(this + 0x1d0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1e0));
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0x1b0));
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0x1e0));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDestroyed);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<KiwiFruitSmallProjectile,void(KiwiFruitSmallProjectile::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieDestroyed,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantDied);
  local_60 = local_8;
  local_70 = local_18;
  uStack_68 = uStack_10;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<KiwiFruitSmallProjectile,void(KiwiFruitSmallProjectile::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantDied,&local_70);
  return;
}


/* KiwiFruitSmallProjectile::StaticNew() */

KiwiFruitSmallProjectile * KiwiFruitSmallProjectile::StaticNew(void)

{
  KiwiFruitSmallProjectile *this;
  
  this = ::operator_new(0x1e8);
  KiwiFruitSmallProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* KiwiFruitSmallProjectile::OnAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void KiwiFruitSmallProjectile::OnAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  char cVar1;
  bool bVar2;
  string asStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) {
    cVar1 = Board::IsLevelEnded(*(Board **)(gLawnApp + 0x9f0));
    if ((((cVar1 == '\0') && (bVar2 = std::operator==(param_4,"use_action"), bVar2)) &&
        (*(long *)(param_1 + 0x1a8) != 0)) &&
       (((cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(param_1 + 0x1b0)), cVar1 != '\0'
         && (cVar1 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x328))
                               (*(long **)(param_1 + 0x1a8)), cVar1 == '\0')) &&
        ((cVar1 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x330))(*(long **)(param_1 + 0x1a8)),
         cVar1 == '\0' &&
         (cVar1 = Zombie::IsInvisible(*(Zombie **)(param_1 + 0x1a8)), cVar1 == '\0')))))) {
      std::string::string(asStack_68,"Play_Bonk");
      RealObject::PlayPositionalSound((RealObject *)param_1,asStack_68,0.0);
      std::string::~string(asStack_68);
      nop();
      DamageInfo::DamageInfo((DamageInfo *)asStack_68);
      (**(code **)(*(long *)param_1 + 0x178))(param_1,asStack_68,0);
      (**(code **)(**(long **)(param_1 + 0x1a8) + 0x110))(*(long **)(param_1 + 0x1a8),asStack_68);
      DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* KiwiFruitSmallProjectile::onZombieDestroyed(Zombie*) */

void __thiscall
KiwiFruitSmallProjectile::onZombieDestroyed(KiwiFruitSmallProjectile *this,Zombie *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  Zombie *local_28 [2];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28[0] = param_1;
  if (*(Zombie **)(this + 0x1a8) == param_1) {
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x1b0));
    if (cVar1 != '\0') {
      local_18 = std::
                 map<Zombie*,int,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,int>>>::
                 find((map<Zombie*,int,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,int>>>
                       *)PlantKiwiFruit::m_targetList,local_28);
      local_10 = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)PlantKiwiFruit::m_targetList);
      bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
      if (bVar2) {
        uVar3 = std::map<Zombie*,int,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,int>>>
                ::find((map<Zombie*,int,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,int>>>
                        *)PlantKiwiFruit::m_targetList,local_28);
        std::map<Zombie*,int,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,int>>>::
        erase_abi_cxx11_(PlantKiwiFruit::m_targetList,uVar3);
      }
      *(undefined8 *)(this + 0x1a8) = 0;
      *(undefined4 *)(this + 0x1b8) = 1;
      Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0x1b0));
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* KiwiFruitSmallProjectile::onDestroy() */

void __thiscall KiwiFruitSmallProjectile::onDestroy(KiwiFruitSmallProjectile *this)

{
  KiwiFruitSmallProjectile *pKVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  undefined8 uVar5;
  RtObject *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(long *)(this + 0x1a8) != 0) &&
     (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x1b0)), cVar2 != '\0')) {
    pKVar1 = this + 0x1a8;
    local_18 = std::map<Zombie*,int,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,int>>>
               ::find((map<Zombie*,int,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,int>>>
                       *)PlantKiwiFruit::m_targetList,(Zombie **)pKVar1);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)PlantKiwiFruit::m_targetList);
    bVar3 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (bVar3) {
      piVar4 = (int *)std::
                      map<Zombie*,int,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,int>>>
                      ::operator[]((map<Zombie*,int,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,int>>>
                                    *)PlantKiwiFruit::m_targetList,(Zombie **)pKVar1);
      *piVar4 = *piVar4 + -1;
      piVar4 = (int *)std::
                      map<Zombie*,int,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,int>>>
                      ::operator[]((map<Zombie*,int,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,int>>>
                                    *)PlantKiwiFruit::m_targetList,(Zombie **)pKVar1);
      if (*piVar4 < 0) {
        uVar5 = std::map<Zombie*,int,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,int>>>
                ::find((map<Zombie*,int,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,int>>>
                        *)PlantKiwiFruit::m_targetList,(Zombie **)pKVar1);
        std::map<Zombie*,int,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,int>>>::
        erase_abi_cxx11_(PlantKiwiFruit::m_targetList,uVar5);
      }
    }
  }
  if ((((*(long *)(this + 0x1d8) != 0) &&
       (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x1e0)), cVar2 != '\0')) &&
      (bVar3 = Sexy::RtObject::IsA<Plant>(*(RtObject **)(this + 0x1d8)), bVar3)) &&
     ((nop(), this_00 != (RtObject *)0x0 &&
      (bVar3 = Sexy::RtObject::IsA<PlantKiwiFruit>(this_00), bVar3)))) {
    PlantKiwiFruit::reduceSmallKiwiCount((PlantKiwiFruit *)this_00);
  }
  std::string::string((string *)&local_10,"Stop_Zomb_Kongfu_Monk_Torch_Attack");
  RealObject::PlayPositionalSound((RealObject *)this,(string *)&local_10,0.0);
  std::string::~string((string *)&local_10);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* KiwiFruitSmallProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
KiwiFruitSmallProjectile::OnCollideEntity(KiwiFruitSmallProjectile *this,BoardEntity *param_1)

{
  int iVar1;
  Zombie *pZVar2;
  char cVar3;
  char cVar4;
  GridItem *pGVar5;
  float *pfVar6;
  float *pfVar7;
  int *piVar8;
  Zombie *local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 == (BoardEntity *)0x0) ||
     (pGVar5 = Sexy::RtObject::Cast<GridItem>((RtObject *)param_1), pGVar5 == (GridItem *)0x0)) {
    iVar1 = *(int *)(this + 0x1b8);
    cVar3 = '\x01';
  }
  else {
    cVar3 = (**(code **)(*(long *)pGVar5 + 0x200))();
    iVar1 = *(int *)(this + 0x1b8);
  }
  if (((iVar1 == 2) &&
      (cVar4 = RealObject::IsOnOpposingTeam((RealObject *)param_1,(RealObject *)this), cVar4 != '\0'
      )) && (cVar3 != '\0')) {
    *(undefined4 *)(this + 0x1b8) = 0;
    local_20 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    if (local_20 != (Zombie *)0x0) {
      local_18 = std::
                 map<Zombie*,int,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,int>>>::
                 find((map<Zombie*,int,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,int>>>
                       *)PlantKiwiFruit::m_targetList,&local_20);
      local_10 = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)PlantKiwiFruit::m_targetList);
      cVar3 = std::__exception_ptr::operator==
                        ((exception_ptr *)&local_18,(exception_ptr *)&local_10);
      if ((cVar3 != '\0') ||
         (piVar8 = (int *)std::
                          map<Zombie*,int,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,int>>>
                          ::operator[]((map<Zombie*,int,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,int>>>
                                        *)PlantKiwiFruit::m_targetList,&local_20), *piVar8 < 2)) {
        Projectile::SetVelocity((Projectile *)this,0.0,0.0,0.0);
        pfVar6 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)this);
        pZVar2 = local_20;
        pfVar7 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)local_20);
        *(float *)(this + 0x1bc) = *pfVar6 - *pfVar7;
        setZombieTarget(this,pZVar2);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}

