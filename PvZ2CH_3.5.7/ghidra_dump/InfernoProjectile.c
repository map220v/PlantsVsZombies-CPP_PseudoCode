// Class: InfernoProjectile


/* InfernoProjectile::setTornadoFull() */

void __thiscall InfernoProjectile::setTornadoFull(InfernoProjectile *this)

{
  this[0x1d0] = (InfernoProjectile)0x1;
  return;
}


/* InfernoProjectile::onDeathAnimComplete(std::string const&) */

void InfernoProjectile::onDeathAnimComplete(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x48))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InfernoProjectile::dissipateBackAnimation() */

void __thiscall InfernoProjectile::dissipateBackAnimation(InfernoProjectile *this)

{
  AttachedEffect *pAVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"linkedEffect");
  pAVar1 = (AttachedEffect *)Projectile::GetAttachedEffect((Projectile *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pAVar1 != (AttachedEffect *)0x0) {
    std::string::string(asStack_10,"animation3");
    AttachedEffect::PlayAnimAndDestroy(pAVar1,asStack_10,2);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* InfernoProjectile::SetTornadoGridNum(float) */

void __thiscall InfernoProjectile::SetTornadoGridNum(InfernoProjectile *this,float param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_03b0bf50(*(undefined4 *)(this + 0x170));
  if (fVar1 <= 1.0) {
    param_1 = param_1 - 1.0;
  }
  if (1.5 < fVar1) {
    param_1 = param_1 + 1.0;
  }
  *(float *)(this + 0x1ac) = param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InfernoProjectile::setUpBackAnimation() */

void __thiscall InfernoProjectile::setUpBackAnimation(InfernoProjectile *this)

{
  DVec3 aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DVec3::DVec3(aDStack_18);
  Projectile::AddAttachedEffect
            ((Projectile *)this,"linkedEffect","POPANIM_EFFECTS_INFERNO_PROJECTILE_BACK","animation"
             ,aDStack_18,0xffffffff,0,0,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InfernoProjectile::StaticClassInit() */

void InfernoProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"InfernoProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_03b10540,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* InfernoProjectile::StaticGetClass() */

long * InfernoProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"InfernoProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* InfernoProjectile::GetClass() const */

long * InfernoProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"InfernoProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InfernoProjectile::calcVelocity() */

void __thiscall InfernoProjectile::calcVelocity(InfernoProjectile *this)

{
  int iVar1;
  float fVar2;
  float local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DVec3::DVec3((DVec3 *)&local_28);
  fVar2 = *(float *)(this + 0x1ac);
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  local_10 = local_20;
  local_28 = ((float)iVar1 * fVar2) / *(float *)(this + 0x1a8);
  local_18 = CONCAT44(uStack_24,local_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_28,uStack_24,local_20);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InfernoProjectile::moveZombie() */

void __thiscall InfernoProjectile::moveZombie(InfernoProjectile *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  undefined8 *puVar2;
  undefined4 *puVar3;
  long *plVar4;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0x1b0);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    puVar2 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this_01);
    local_18 = *puVar2;
    local_10 = *(undefined4 *)(puVar2 + 1);
    puVar3 = (undefined4 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    local_18 = CONCAT44(local_18._4_4_,*puVar3);
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar4 + 0x78))(plVar4,&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InfernoProjectile::onUpdate(float) */

void InfernoProjectile::onUpdate(float param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  float *pfVar4;
  float fVar5;
  float fVar6;
  Point aPStack_18 [8];
  int local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (in_x0[0x1e0] ==
      (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
       )0x0) {
    pfVar4 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(in_x0);
    iVar2 = BoardTransforms::BoardSpaceToGridXUnbounded(*pfVar4);
    iVar3 = BoardTransforms::BoardSpaceToGridYUnbounded(pfVar4[1]);
    Sexy::Point::Point(aPStack_18,iVar2,iVar3);
    Sexy::Point::Point((Point *)local_10,(TPoint *)aPStack_18);
    local_10[0] = local_10[0] + 1;
    cVar1 = Board::IsShallowWater(*(Board **)(gLawnApp + 0x9f0),(Point *)local_10);
    if (cVar1 != '\0') {
      PVZ_T();
      FUN_03b0bfe4(in_x0 + 0x1d4);
      (**(code **)(*(long *)in_x0 + 0x218))();
      (**(code **)(*(long *)in_x0 + 0x1f8))();
      in_x0[0x1e0] = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      )0x1;
      (**(code **)(*(long *)in_x0 + 0x230))();
    }
  }
  fVar6 = *(float *)(in_x0 + 0x1e4);
  fVar5 = (float)PVZ_T();
  if ((fVar6 < fVar5) &&
     (in_x0[0x1e0] ==
      (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
       )0x0)) {
    (**(code **)(*(long *)in_x0 + 0x218))();
    (**(code **)(*(long *)in_x0 + 0x1f8))();
    in_x0[0x1e0] = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    )0x1;
    (**(code **)(*(long *)in_x0 + 0x230))();
  }
  cVar1 = (**(code **)(*(long *)in_x0 + 0x210))();
  if (cVar1 == '\0') {
    if (in_x0[0x1e0] ==
        (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
         )0x0) {
      (**(code **)(*(long *)in_x0 + 0x208))();
      fVar5 = (float)PVZ_EOT();
      if ((*(float *)(in_x0 + 0x1d8) != fVar5) &&
         (fVar5 = (float)PVZ_T(), *(float *)(in_x0 + 0x1d8) <= fVar5)) {
        (**(code **)(*(long *)in_x0 + 0x220))();
      }
    }
  }
  else if (in_x0[0x1e0] ==
           (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            )0x0) {
    (**(code **)(*(long *)in_x0 + 0x218))();
    (**(code **)(*(long *)in_x0 + 0x1f8))();
    in_x0[0x1e0] = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    )0x1;
    (**(code **)(*(long *)in_x0 + 0x230))();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* InfernoProjectile::setExpireTime() */

void __thiscall InfernoProjectile::setExpireTime(InfernoProjectile *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x1d4) = fVar1 + *(float *)(this + 0x1a8);
  return;
}


/* InfernoProjectile::SetTornadoDuration(float, bool) */

void __thiscall
InfernoProjectile::SetTornadoDuration(InfernoProjectile *this,float param_1,bool param_2)

{
  *(float *)(this + 0x1a8) = param_1;
  if (!param_2) {
    return;
  }
  setExpireTime(this);
  return;
}


/* InfernoProjectile::readyToExpire() */

bool __thiscall InfernoProjectile::readyToExpire(InfernoProjectile *this)

{
  bool bVar1;
  float fVar2;
  
  fVar2 = (float)PVZ_EOT();
  bVar1 = false;
  if (*(float *)(this + 0x1d4) != fVar2) {
    fVar2 = (float)PVZ_T();
    bVar1 = *(float *)(this + 0x1d4) <= fVar2;
  }
  return bVar1;
}


/* InfernoProjectile::shouldDissipate() */

undefined8 __thiscall InfernoProjectile::shouldDissipate(InfernoProjectile *this)

{
  undefined8 uVar1;
  
  if (this[0x1d0] == (InfernoProjectile)0x0) {
    return 0;
  }
  uVar1 = readyToExpire(this);
  return uVar1;
}


/* InfernoProjectile::setNextPulseTime() */

void __thiscall InfernoProjectile::setNextPulseTime(InfernoProjectile *this)

{
  long extraout_x0;
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  Projectile::GetProps((Projectile *)this);
  nop();
  *(float *)(this + 0x1d8) = fVar1 + *(float *)(extraout_x0 + 0x1e4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InfernoProjectile::playDeathAnim() */

void __thiscall InfernoProjectile::playDeathAnim(InfernoProjectile *this)

{
  PopAnimRig *pPVar1;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
  std::string::string(asStack_58,"animation3");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onDeathAnimComplete);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<InfernoProjectile,void(InfernoProjectile::*)(std::string_const&)>(aDStack_38,aCStack_50)
  ;
  PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InfernoProjectile::calcLerpVelocity() */

void __thiscall InfernoProjectile::calcLerpVelocity(InfernoProjectile *this)

{
  RtObject *this_00;
  InfernoProjectileProps *pIVar1;
  float fVar2;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)Projectile::GetProps((Projectile *)this);
  pIVar1 = Sexy::RtObject::Cast<InfernoProjectileProps>(this_00);
  fVar2 = (float)PVZ_T();
  if ((*(float *)(pIVar1 + 0x23c) <= fVar2 - *(float *)(this + 0x1dc)) ||
     (*(float *)(pIVar1 + 0x23c) <= 0.0)) {
    fVar2 = 0.0;
  }
  else {
    local_c = 0;
    fVar2 = CurveEvaluate<float>(pIVar1 + 0x238,&local_c,*(undefined4 *)(pIVar1 + 0x240));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InfernoProjectile::dropCarriedZombie() */

void __thiscall InfernoProjectile::dropCarriedZombie(InfernoProjectile *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  Zombie *pZVar2;
  long *plVar3;
  code *pcVar4;
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0x1b0);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    pZVar2 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    Zombie::SetIsControlled(pZVar2,false);
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    cVar1 = (**(code **)(*plVar3 + 0x328))();
    if (cVar1 == '\0') {
      plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      cVar1 = (**(code **)(*plVar3 + 0x330))();
      if (cVar1 == '\0') {
        plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        (**(code **)(*plVar3 + 0x260))();
        pZVar2 = (Zombie *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        plVar3 = (long *)Zombie::GetAnimRig(pZVar2);
        pcVar4 = *(code **)(*plVar3 + 0x118);
        RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
        RtReflectionDelegate(aRStack_50);
        (*pcVar4)(plVar3,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                    *)aRStack_50);
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
/* InfernoProjectile::pickUpZombie(Zombie*) */

void __thiscall InfernoProjectile::pickUpZombie(InfernoProjectile *this,Zombie *param_1)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  int iVar1;
  Zombie *pZVar2;
  long *plVar3;
  AttachedEffect *this_01;
  long lVar4;
  code *pcVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x1b0);
  setTornadoFull(this);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  pZVar2 = (Zombie *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  plVar3 = (long *)Zombie::GetAnimRig(pZVar2);
  pcVar5 = *(code **)(*plVar3 + 0x110);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  (*pcVar5)(plVar3,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  pZVar2 = (Zombie *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Zombie::SetIsControlled(pZVar2,true);
  setNextPulseTime(this);
  setExpireTime(this);
  std::string::string((string *)aRStack_58,"linkedEffect");
  this_01 = (AttachedEffect *)Projectile::GetAttachedEffect((Projectile *)this,(string *)aRStack_58)
  ;
  std::string::~string((string *)aRStack_58);
  nop();
  if (this_01 != (AttachedEffect *)0x0) {
    lVar4 = AttachedEffect::GetEffect(this_01);
    iVar1 = (**(code **)(*(long *)param_1 + 0x170))(param_1);
    FUN_03b0bf30(lVar4 + 0x1c,iVar1 + -1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InfernoProjectile::playImpactEffect(BoardEntity*) */

void __thiscall InfernoProjectile::playImpactEffect(InfernoProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  long lVar2;
  float *pfVar3;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar4;
  char *__s;
  float fVar5;
  string asStack_30 [8];
  RtMixedPtrBase aRStack_28 [8];
  float local_20;
  float local_1c;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = Projectile::getProps((Projectile *)this);
  (**(code **)(*(long *)this + 0x180))(asStack_30,this);
  cVar1 = FUN_0547419c(asStack_30);
  if (cVar1 == '\0') {
    GetPAMByName(asStack_30);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_28);
    if (cVar1 != '\0') {
      ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                ((ResistenceValueInfo *)&local_20);
      Projectile::calcRandomSplatOffset((Projectile *)this,(SexyVector2 *)&local_20);
      if ((param_1 == (BoardEntity *)0x0) || (*(char *)(lVar2 + 0x6d) == '\0')) {
        fVar5 = (local_1c + *(float *)(this + 0x1c)) - *(float *)(this + 0x20);
        local_20 = local_20 + *(float *)(this + 0x18);
      }
      else {
        pfVar3 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)param_1);
        fVar5 = (local_1c + pfVar3[1]) - pfVar3[2];
        local_20 = local_20 + *pfVar3;
      }
      this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_28);
      Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar4,(RtClass *)0x0);
      Effect_PopAnim::SetCentered(this_00,true);
      EATextSquish::Vec3::Vec3(aVStack_18,local_20,fVar5,0.0);
      StandaloneEffect::SetBoardSpaceOrigin
                ((StandaloneEffect *)this_00,(SexyVector3 *)aVStack_18,-1);
      FUN_03b0bf30(this_00 + 0x1c,*(int *)(this + 0x50) + 1);
      lVar2 = Projectile::getProps((Projectile *)this);
      __s = (char *)FUN_0547429c(lVar2 + 0x148);
      std::string::string((string *)aVStack_18,__s);
      Effect_PopAnim::PlaySingleAnimation(this_00,aVStack_18,2);
      std::string::~string((string *)aVStack_18);
      nop();
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  }
  std::string::~string(asStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* InfernoProjectile::InfernoProjectile() */

void __thiscall InfernoProjectile::InfernoProjectile(InfernoProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_0672bc80;
  *(undefined ***)(this + 0x10) = &PTR__InfernoProjectile_0672bec8;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1b0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1b8));
  return;
}


/* InfernoProjectile::StaticNew() */

InfernoProjectile * InfernoProjectile::StaticNew(void)

{
  InfernoProjectile *this;
  
  this = ::operator_new(0x1e8);
  InfernoProjectile(this);
  return this;
}


/* InfernoProjectile::registerForEvents() */

void __thiscall InfernoProjectile::registerForEvents(InfernoProjectile *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnZombieMoveUpDownFinish);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<InfernoProjectile,void(InfernoProjectile::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieLaneChangeEnded,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InfernoProjectile::pulseDamageEntity(BoardEntity*) */

void __thiscall InfernoProjectile::pulseDamageEntity(InfernoProjectile *this,BoardEntity *param_1)

{
  RtObject *this_00;
  InfernoProjectileProps *pIVar1;
  float fVar2;
  float fVar3;
  DamageInfo aDStack_68 [8];
  float local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x48] != (InfernoProjectile)0x0) {
    this_00 = (RtObject *)Projectile::GetProps((Projectile *)this);
    pIVar1 = Sexy::RtObject::Cast<InfernoProjectileProps>(this_00);
    DamageInfo::DamageInfo(aDStack_68);
    (**(code **)(*(long *)this + 0x178))(this,aDStack_68,0);
    fVar3 = *(float *)(pIVar1 + 0x1e0) * local_60;
    local_60 = fVar3;
    fVar2 = (float)FUN_03b0bf50(*(undefined4 *)(this + 0x170));
    if (2.5 < fVar2) {
      local_60 = fVar3 * 1.5;
    }
    (**(code **)(*(long *)param_1 + 0x110))(param_1,aDStack_68);
    DamageInfo::~DamageInfo(aDStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* InfernoProjectile::doDamagePulse() */

void __thiscall InfernoProjectile::doDamagePulse(InfernoProjectile *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  BoardEntity *pBVar2;
  
  this_00 = (RtWeakPtr *)(this + 0x1b0);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    pBVar2 = (BoardEntity *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    playImpactEffect(this,pBVar2);
    pBVar2 = (BoardEntity *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pulseDamageEntity(this,pBVar2);
  }
  setNextPulseTime(this);
  return;
}


/* InfernoProjectile::onProjectileInitialized() */

void __thiscall InfernoProjectile::onProjectileInitialized(InfernoProjectile *this)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1b8));
  this[0x1d0] = (InfernoProjectile)0x0;
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x1d4) = uVar2;
  *(undefined4 *)(this + 0x1d8) = uVar2;
  uVar3 = PVZ_T();
  *(undefined4 *)(this + 0x1dc) = uVar3;
  pcVar1 = *(code **)(*(long *)this + 0x228);
  *(undefined4 *)(this + 0x1a8) = 0;
  (*pcVar1)(this);
  this[0x1e0] = (InfernoProjectile)0x0;
  *(undefined4 *)(this + 0x1e4) = uVar2;
  return;
}


/* InfernoProjectile::onDestroy() */

void __thiscall InfernoProjectile::onDestroy(InfernoProjectile *this)

{
  (**(code **)(*(long *)this + 0x1f8))();
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1b8));
  return;
}


/* InfernoProjectile::~InfernoProjectile() */

void __thiscall InfernoProjectile::~InfernoProjectile(InfernoProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_0672bc80;
  *(undefined ***)(this + 0x10) = &PTR__InfernoProjectile_0672bec8;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1b8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b0));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to InfernoProjectile::~InfernoProjectile() */

void __thiscall InfernoProjectile::~InfernoProjectile(InfernoProjectile *this)

{
  ~InfernoProjectile(this + -0x10);
  return;
}


/* InfernoProjectile::~InfernoProjectile() */

void __thiscall InfernoProjectile::~InfernoProjectile(InfernoProjectile *this)

{
  ~InfernoProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to InfernoProjectile::~InfernoProjectile() */

void __thiscall InfernoProjectile::~InfernoProjectile(InfernoProjectile *this)

{
  ~InfernoProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InfernoProjectile::CanPickUpZombie(Zombie*) */

void __thiscall InfernoProjectile::CanPickUpZombie(InfernoProjectile *this,Zombie *param_1)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  RtObject *this_00;
  InfernoProjectileProps *pIVar4;
  string *psVar5;
  code *pcVar6;
  float fVar7;
  string asStack_80 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  TitleStatus aTStack_70 [24];
  char local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((((this[0x1d0] == (InfernoProjectile)0x0) && (cVar1 = Zombie::IsBoss(param_1), cVar1 == '\0'))
      && (cVar1 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar1 == '\0')) &&
     (cVar1 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar1 == '\0')) {
    cVar2 = Zombie::HasFogImmune(param_1);
    cVar1 = '\0';
    if ((cVar2 != '\0') || (cVar2 = Zombie::IsBerserk(param_1), cVar2 != '\0')) goto LAB_03b12238;
    Zombie::GetCurrentTitleStatus();
    TitleStatus::~TitleStatus(aTStack_70);
    if (local_58 == '\0') {
      this_00 = (RtObject *)Projectile::GetProps((Projectile *)this);
      pIVar4 = Sexy::RtObject::Cast<InfernoProjectileProps>(this_00);
      cVar2 = ZombieRestrictionSet::IsExcluded((ZombieRestrictionSet *)(pIVar4 + 0x1e8),param_1);
      if (cVar2 == '\0') {
        cVar2 = Zombie::IsSuspended(param_1);
        if (((cVar2 != '\0') ||
            (cVar2 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar2 != '\0')) ||
           ((cVar2 = Zombie::IsControlled(param_1), cVar2 != '\0' ||
            (cVar2 = Zombie::IsInSandStorm(param_1), cVar2 != '\0')))) goto LAB_03b12238;
        cVar1 = Zombie::IsIgnoringAllDamage(param_1);
        if (cVar1 == '\0') {
          pcVar6 = *(code **)(*(long *)param_1 + 0x3d0);
          psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
          std::string::string(asStack_80,"inferno");
          ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)aTStack_70,(RtWeakPtrBase *)aRStack_78);
          cVar1 = (*pcVar6)(param_1,aTStack_70,0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aTStack_70);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
          std::string::~string(asStack_80);
          nop();
          if (((cVar1 != '\0') &&
              (cVar1 = RealObject::IsOnOpposingTeam((RealObject *)param_1,(RealObject *)this),
              cVar1 != '\0')) &&
             ((bVar3 = Sexy::RtObject::IsA<ZombieGargantuar>((RtObject *)param_1), !bVar3 ||
              (fVar7 = (float)FUN_03b0bf50(*(undefined4 *)(this + 0x170)), cVar1 = bVar3,
              3.0 <= fVar7)))) goto LAB_03b12238;
        }
      }
    }
  }
  cVar1 = '\0';
LAB_03b12238:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InfernoProjectile::OnZombieMoveUpDownFinish(Zombie*) */

void __thiscall InfernoProjectile::OnZombieMoveUpDownFinish(InfernoProjectile *this,Zombie *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  BoardEntity *pBVar3;
  RtWeakPtrBase *pRVar4;
  undefined8 local_20;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1b8);
  local_8 = ___stack_chk_guard;
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  if (param_1 == (Zombie *)0x0) {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
  }
  else {
    while( true ) {
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_10);
      if ((!bVar2) ||
         (pBVar3 = Sexy::RtObject::Cast<BoardEntity>((RtObject *)param_1),
         pBVar3 == (BoardEntity *)0x0)) goto LAB_03b124fc;
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)&local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)aRStack_18);
      if (cVar1 != '\0') break;
      pRVar4 = (RtWeakPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      cVar1 = Sexy::RtWeakPtrBase::operator==((RtWeakPtrBase *)aRStack_18,pRVar4);
      if (cVar1 != '\0') {
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_10,(__normal_iterator *)&local_20);
        std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
        erase((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              this_00,local_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18)
        ;
        goto LAB_03b124fc;
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
LAB_03b124fc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InfernoProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall InfernoProjectile::OnCollideEntity(InfernoProjectile *this,BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  Zombie *this_01;
  GridItem *pGVar5;
  RtObject *pRVar6;
  InfernoProjectileProps *pIVar7;
  code *pcVar8;
  undefined4 uVar9;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  undefined8 local_70;
  undefined8 local_68 [12];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = GameObject::IsDestroyed((GameObject *)this);
  if (cVar1 == '\0') {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x1b8);
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this_00);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(this_00);
    ToolPacketData::GetProps();
    local_70 = std::
               find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<GameObject>>
                         (uVar3,uVar4,aRStack_78);
    local_68[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(this_00);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_70,(__normal_iterator *)local_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
    if (!bVar2) {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_68,(RtWeakPtrBase *)&local_70);
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *
                )this_00,(RtWeakPtr *)local_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
      Projectile::OnCollideEntity((Projectile *)this,param_1);
      if (param_1 == (BoardEntity *)0x0) {
        pRVar6 = (RtObject *)Projectile::GetProps((Projectile *)this);
        Sexy::RtObject::Cast<InfernoProjectileProps>(pRVar6);
        this_01 = (Zombie *)0x0;
      }
      else {
        this_01 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
        pGVar5 = Sexy::RtObject::Cast<GridItem>((RtObject *)param_1);
        pRVar6 = (RtObject *)Projectile::GetProps((Projectile *)this);
        pIVar7 = Sexy::RtObject::Cast<InfernoProjectileProps>(pRVar6);
        if ((pGVar5 != (GridItem *)0x0) &&
           (cVar1 = GridItemRestrictionSet::IsIncluded((GridItem *)(pIVar7 + 0x210)), cVar1 != '\0')
           ) {
          pcVar8 = *(code **)(*(long *)pGVar5 + 0x110);
          uVar3 = Projectile::GetInstigator((Projectile *)this);
          Sexy::Point::Point((Point *)aRStack_78,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
          DamageInfo::DamageInfo
                    ((DamageInfo *)0x0,(undefined4)local_70,local_70._4_4_,
                     (RtWeakPtr<Sexy::SoundResource> *)local_68,2,uVar3,aRStack_78,0);
          (*pcVar8)(pGVar5,(RtWeakPtr<Sexy::SoundResource> *)local_68);
          DamageInfo::~DamageInfo((DamageInfo *)local_68);
        }
      }
      if ((this[0x1d0] == (InfernoProjectile)0x0) && (this_01 != (Zombie *)0x0)) {
        cVar1 = (**(code **)(*(long *)this + 0x1f0))(this,this_01);
        if (cVar1 != '\0') {
          (**(code **)(*(long *)this + 0x200))(this,this_01);
        }
        cVar1 = Zombie::IsBoss(this_01);
        if (cVar1 != '\0') {
          uVar9 = PVZ_T();
          *(undefined4 *)(this + 0x1e4) = uVar9;
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InfernoProjectile::moveThroughTime(float) */

void InfernoProjectile::moveThroughTime(float param_1)

{
  bool bVar1;
  int iVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  float *pfVar3;
  RtObject *this;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_28 [4];
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(in_x0);
  fVar6 = *pfVar3;
  fVar7 = pfVar3[1];
  fVar8 = pfVar3[2];
  fVar5 = (float)calcLerpVelocity((InfernoProjectile *)in_x0);
  local_28[0] = (float)calcVelocity((InfernoProjectile *)in_x0);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(in_x0 + 0x1b0));
  if (bVar1) {
    this = (RtObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x1b0));
    bVar1 = Sexy::RtObject::IsA<ZombieGargantuar>(this);
    if (bVar1) {
      local_28[0] = local_28[0] * 0.5;
      iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
      goto joined_r0x03b14b7c;
    }
  }
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
joined_r0x03b14b7c:
  if (fVar6 < (float)iVar2 * 8.5 + 200.0) {
    pcVar4 = *(code **)(*(long *)in_x0 + 0x78);
    EATextSquish::Vec3::Vec3(aVStack_18,fVar6 + param_1 * fVar5,fVar7,fVar8);
    (*pcVar4)();
  }
  else {
    local_28[0] = 0.0;
    fVar5 = (float)PVZ_EOT();
    if (*(float *)(in_x0 + 0x1e4) == fVar5) {
      fVar5 = (float)PVZ_T();
      *(float *)(in_x0 + 0x1e4) = fVar5 + *(float *)(in_x0 + 0x1a8);
    }
  }
  Projectile::SetVelocity((Projectile *)in_x0,(SexyVector3 *)local_28);
  Projectile::moveThroughTime((Projectile *)in_x0,param_1);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

