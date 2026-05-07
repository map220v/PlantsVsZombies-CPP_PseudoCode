// Class: CaulipowerProjectile


/* CaulipowerProjectile::SetPlantLevel(int) */

void __thiscall CaulipowerProjectile::SetPlantLevel(CaulipowerProjectile *this,int param_1)

{
  *(int *)(this + 0x1b0) = param_1;
  return;
}


/* CaulipowerProjectile::calcDesiredRotation(Sexy::SexyVector3) */

undefined1  [16] __thiscall CaulipowerProjectile::calcDesiredRotation(float param_1,float param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  
  uVar1 = (int)param_1 >> 0x1f;
  if ((float)(int)(((int)param_1 ^ uVar1) - uVar1) < 0.001) {
    if (param_2 < 0.0) {
      uVar1 = 0xbfc90fdb;
    }
    else {
      uVar1 = 0x3fc90fdb;
    }
    return ZEXT416(uVar1);
  }
  auVar2._0_4_ = atan2f(-param_2,param_1);
  auVar2._4_4_ = extraout_var;
  auVar2._8_8_ = extraout_var_00;
  return auVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CaulipowerProjectile::SetTargetZombie(Zombie*) */

void __thiscall CaulipowerProjectile::SetTargetZombie(CaulipowerProjectile *this,Zombie *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (Zombie *)0x0) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1a8),(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  else {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1a8),(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CaulipowerProjectile::StaticClassInit() */

void CaulipowerProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"CaulipowerProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_03bcf0d0,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CaulipowerProjectile::StaticGetClass() */

long * CaulipowerProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CaulipowerProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CaulipowerProjectile::GetClass() const */

long * CaulipowerProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"CaulipowerProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CaulipowerProjectile::~CaulipowerProjectile() */

void __thiscall CaulipowerProjectile::~CaulipowerProjectile(CaulipowerProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_0673ba20;
  *(undefined ***)(this + 0x10) = &PTR__CaulipowerProjectile_0673bc10;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to CaulipowerProjectile::~CaulipowerProjectile() */

void __thiscall CaulipowerProjectile::~CaulipowerProjectile(CaulipowerProjectile *this)

{
  ~CaulipowerProjectile(this + -0x10);
  return;
}


/* CaulipowerProjectile::~CaulipowerProjectile() */

void __thiscall CaulipowerProjectile::~CaulipowerProjectile(CaulipowerProjectile *this)

{
  ~CaulipowerProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CaulipowerProjectile::~CaulipowerProjectile() */

void __thiscall CaulipowerProjectile::~CaulipowerProjectile(CaulipowerProjectile *this)

{
  ~CaulipowerProjectile(this + -0x10);
  return;
}


/* CaulipowerProjectile::CaulipowerProjectile() */

void __thiscall CaulipowerProjectile::CaulipowerProjectile(CaulipowerProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_0673ba20;
  *(undefined ***)(this + 0x10) = &PTR__CaulipowerProjectile_0673bc10;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1a8));
  return;
}


/* CaulipowerProjectile::StaticNew() */

CaulipowerProjectile * CaulipowerProjectile::StaticNew(void)

{
  CaulipowerProjectile *this;
  
  this = ::operator_new(0x1b8);
  CaulipowerProjectile(this);
  return this;
}


/* CaulipowerProjectile::MakePositionAdjustment() */

void __thiscall CaulipowerProjectile::MakePositionAdjustment(CaulipowerProjectile *this)

{
  RtObject *this_00;
  CaulipowerProjectileProps *pCVar1;
  float *pfVar2;
  
  this_00 = (RtObject *)Projectile::GetProps((Projectile *)this);
  pCVar1 = Sexy::RtObject::Cast<CaulipowerProjectileProps>(this_00);
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  Projectile::SetPosition
            ((Projectile *)this,*pfVar2 + *(float *)(pCVar1 + 0x1e4),
             pfVar2[1] + *(float *)(pCVar1 + 0x1e8),pfVar2[2]);
  return;
}


/* CaulipowerProjectile::ChangeZombieTeam(Zombie*) const */

void __thiscall CaulipowerProjectile::ChangeZombieTeam(CaulipowerProjectile *this,Zombie *param_1)

{
  long extraout_x0;
  float fVar1;
  Zombie *pZVar2;
  
  Zombie::SetFacing(param_1,1);
  pZVar2._0_4_ = (Zombie *)PVZ_EOT();
  Zombie::ApplyCondition(pZVar2._0_4_,0,param_1,0x19,1);
  (**(code **)(*(long *)param_1 + 0x2f0))(param_1);
  Zombie::EndCondition(param_1,0x55);
  MessageRouter::Broadcast<Zombie*,Zombie*>
            ((MessageRouter *)gMessageRouter,Message::ZombieHypnotized,param_1);
  RealObject::JoinTeam((RealObject *)param_1,1);
  Projectile::GetProps((Projectile *)this);
  nop();
  if (*(char *)(extraout_x0 + 0x1e0) == '\0') {
    return;
  }
  fVar1 = (float)FUN_03bcd058(*(undefined4 *)(param_1 + 0x284));
  Zombie::SetHitpoints(param_1,fVar1);
  Zombie::EndCondition(param_1,0x2f);
  Zombie::EndCondition(param_1,0x47);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CaulipowerProjectile::moveThroughTime(float) */

void CaulipowerProjectile::moveThroughTime(float param_1)

{
  RtWeakPtr *this;
  bool bVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  undefined8 *puVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  SexyVector3 *this_01;
  Zombie *pZVar6;
  undefined8 uVar7;
  RtObject *this_02;
  long extraout_x0;
  float fVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_28;
  Vec3 aVStack_18 [16];
  long local_8;
  
  this = (RtWeakPtr *)(in_x0 + 0x1a8);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
  if (bVar1) {
    pZVar6 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    uVar7 = operator|(1,8);
    uVar4 = operator|(uVar7,0x200);
    cVar2 = Zombie::MatchesAny(pZVar6,uVar4);
    if (cVar2 == '\0') {
      pZVar6 = (Zombie *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      cVar2 = Zombie::IsTargetable(pZVar6);
      if (cVar2 != '\0') {
        uVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
        cVar2 = RealObject::IsOnTeam(uVar7,1);
        if (cVar2 == '\0') goto LAB_03bd0448;
      }
    }
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aVStack_18);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)aVStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_18);
    this_02 = (RtObject *)Projectile::GetInstigator((Projectile *)in_x0);
    if ((this_02 != (RtObject *)0x0) && (bVar1 = Sexy::RtObject::IsA<Plant>(this_02), bVar1)) {
      nop();
      nop();
      if (extraout_x0 != 0) {
        PlantCaulipower::FindTargetZombie();
        SpearProjectile::SetPlant();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_18)
        ;
      }
    }
  }
LAB_03bd0448:
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this);
  if (cVar2 == '\0') {
    (**(code **)(*(long *)in_x0 + 0x48))();
  }
  else {
    puVar5 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(in_x0);
    local_48 = *puVar5;
    local_40 = *(undefined4 *)(puVar5 + 1);
    puVar5 = (undefined8 *)Projectile::GetVelocity((Projectile *)in_x0);
    local_38 = *puVar5;
    local_30 = *(undefined4 *)(puVar5 + 1);
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    this_01 = (SexyVector3 *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost(this_00);
    local_28 = Sexy::SexyVector3::operator-(this_01,(SexyVector3 *)&local_48);
    fVar8 = (float)calcDesiredRotation();
    uVar3 = (uint)fVar8;
    fVar9 = fVar8;
    if (3.1415927 < (float)(int)((uVar3 ^ (int)uVar3 >> 0x3f) - ((int)uVar3 >> 0x1f))) {
      dVar11 = (double)fVar8;
      if ((long)dVar11 < 0) {
        fVar9 = (float)(dVar11 - -6.2831854820251465);
      }
      else {
        fVar9 = (float)(dVar11 - 6.2831854820251465);
      }
    }
    FUN_03bcce88(fVar9,in_x0 + 0xc4);
    fVar9 = cosf(fVar8);
    fVar10 = (float)DVec3::getLength((DVec3 *)&local_38);
    fVar8 = sinf(fVar8);
    EATextSquish::Vec3::Vec3(aVStack_18,fVar10 * fVar9,-(fVar8 * fVar10),0.0);
    Projectile::SetVelocity((Projectile *)in_x0,(SexyVector3 *)aVStack_18);
    Projectile::moveThroughTime((Projectile *)in_x0,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CaulipowerProjectile::handleImpact(BoardEntity*) */

void __thiscall CaulipowerProjectile::handleImpact(CaulipowerProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  Zombie *this_00;
  Zombie *pZVar5;
  RtObject *this_01;
  CaulipowerProjectileProps *pCVar6;
  int iVar7;
  code *pcVar8;
  DamageInfo *pDVar9;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 == (BoardEntity *)0x0) ||
     (this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), this_00 == (Zombie *)0x0)) {
LAB_03bd07a4:
    uVar2 = Projectile::handleImpact((Projectile *)this,param_1);
    goto LAB_03bd06fc;
  }
  pZVar5 = (Zombie *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8))
  ;
  uVar2 = 0;
  if (this_00 != pZVar5) goto LAB_03bd06fc;
  iVar7 = 5;
  if (*(int *)(this + 0x1b0) * 2 < 5) {
    iVar7 = 2;
  }
  iVar4 = FUN_03bcce90(*(undefined4 *)(this_00 + 0x50));
  this_01 = (RtObject *)Projectile::GetProps((Projectile *)this);
  pCVar6 = Sexy::RtObject::Cast<CaulipowerProjectileProps>(this_01);
                    /* WARNING: Load size is inaccurate */
  pDVar9._0_4_ = *(DamageInfo **)(pCVar6 + 0x1ec);
  cVar1 = Zombie::IsBoss(this_00);
  if ((((cVar1 == '\0') && (iVar3 = Zombie::GetSizeType(this_00), iVar3 != 2)) &&
      (cVar1 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar1 == '\0')) &&
     ((cVar1 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar1 == '\0' &&
      (cVar1 = Zombie::HasFogImmune(this_00), cVar1 == '\0')))) {
    cVar1 = Zombie::IsBerserk(this_00);
    if (cVar1 != '\0') goto LAB_03bd07fc;
    if (iVar4 <= iVar7) {
      ChangeZombieTeam(this,this_00);
      goto LAB_03bd07a4;
    }
    pcVar8 = *(code **)(*(long *)this_00 + 0x110);
    Sexy::Point::Point(aPStack_78,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
  }
  else {
LAB_03bd07fc:
    pcVar8 = *(code **)(*(long *)this_00 + 0x110);
    Sexy::Point::Point(aPStack_78,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
  }
  DamageInfo::DamageInfo(pDVar9._0_4_,local_70,local_6c,aDStack_68,0x400000000000,aPStack_78,0);
  (*pcVar8)(this_00,aDStack_68);
  DamageInfo::~DamageInfo(aDStack_68);
  uVar2 = Projectile::handleImpact((Projectile *)this,param_1);
LAB_03bd06fc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

