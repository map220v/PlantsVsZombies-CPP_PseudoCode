// Class: VanillaProjectile


/* VanillaProjectile::ZombieTosserEnd() */

undefined8 VanillaProjectile::ZombieTosserEnd(void)

{
  return 0;
}


/* VanillaProjectile::moveThroughTime(float) */

void __thiscall VanillaProjectile::moveThroughTime(VanillaProjectile *this,float param_1)

{
  char cVar1;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x1a8));
  if (cVar1 != '\0') {
    Projectile::moveThroughTime((Projectile *)this,param_1);
    return;
  }
  (**(code **)(*(long *)this + 0x48))(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VanillaProjectile::StaticClassInit() */

void VanillaProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"VanillaProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_0396821c,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VanillaProjectile::StaticGetClass() */

long * VanillaProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"VanillaProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VanillaProjectile::GetClass() const */

long * VanillaProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"VanillaProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VanillaProjectile::~VanillaProjectile() */

void __thiscall VanillaProjectile::~VanillaProjectile(VanillaProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_066d5610;
  *(undefined ***)(this + 0x10) = &PTR__VanillaProjectile_066d5800;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to VanillaProjectile::~VanillaProjectile() */

void __thiscall VanillaProjectile::~VanillaProjectile(VanillaProjectile *this)

{
  ~VanillaProjectile(this + -0x10);
  return;
}


/* VanillaProjectile::~VanillaProjectile() */

void __thiscall VanillaProjectile::~VanillaProjectile(VanillaProjectile *this)

{
  ~VanillaProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to VanillaProjectile::~VanillaProjectile() */

void __thiscall VanillaProjectile::~VanillaProjectile(VanillaProjectile *this)

{
  ~VanillaProjectile(this + -0x10);
  return;
}


/* VanillaProjectile::VanillaProjectile() */

void __thiscall VanillaProjectile::VanillaProjectile(VanillaProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_066d5610;
  *(undefined ***)(this + 0x10) = &PTR__VanillaProjectile_066d5800;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1a8));
  *(undefined4 *)(this + 0x1b0) = 0;
  this[0x1b4] = (VanillaProjectile)0x0;
  return;
}


/* VanillaProjectile::StaticNew() */

VanillaProjectile * VanillaProjectile::StaticNew(void)

{
  VanillaProjectile *this;
  
  this = ::operator_new(0x1b8);
  VanillaProjectile(this);
  return this;
}


/* VanillaProjectile::MakePositionAdjustment() */

void __thiscall VanillaProjectile::MakePositionAdjustment(VanillaProjectile *this)

{
  RtObject *this_00;
  VanillaProjectileProps *pVVar1;
  float *pfVar2;
  
  this_00 = (RtObject *)Projectile::GetProps((Projectile *)this);
  pVVar1 = Sexy::RtObject::Cast<VanillaProjectileProps>(this_00);
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  Projectile::SetPosition
            ((Projectile *)this,*pfVar2 + *(float *)(pVVar1 + 0x1e4),
             pfVar2[1] + *(float *)(pVVar1 + 0x1e8),pfVar2[2]);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VanillaProjectile::handleImpact(BoardEntity*) */

void __thiscall VanillaProjectile::handleImpact(VanillaProjectile *this,BoardEntity *param_1)

{
  RtObject *this_00;
  VanillaProjectileProps *pVVar1;
  code *pcVar2;
  DamageInfo *pDVar3;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)Projectile::GetProps((Projectile *)this);
  pVVar1 = Sexy::RtObject::Cast<VanillaProjectileProps>(this_00);
                    /* WARNING: Load size is inaccurate */
  pDVar3._0_4_ = *(DamageInfo **)(pVVar1 + 0x1ec);
  pcVar2 = *(code **)(*(long *)param_1 + 0x110);
  Sexy::Point::Point(aPStack_78,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
  DamageInfo::DamageInfo(pDVar3._0_4_,local_70,local_6c,aDStack_68,aPStack_78,0);
  (*pcVar2)(param_1,aDStack_68);
  DamageInfo::~DamageInfo(aDStack_68);
  Projectile::handleImpact((Projectile *)this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VanillaProjectile::isZombieCanToss(Sexy::RtWeakPtr<Zombie>) */

void __thiscall VanillaProjectile::isZombieCanToss(undefined8 param_1,RtMixedPtrBase *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  Zombie *pZVar5;
  RtWeakPtr<Sexy::ResourceInfo> *this;
  long lVar6;
  TitleStatus aTStack_70 [24];
  char local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if (cVar1 != '\0') {
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    cVar1 = (**(code **)(*plVar4 + 0x328))();
    if (cVar1 == '\0') {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      cVar1 = (**(code **)(*plVar4 + 0x330))();
      if (cVar1 == '\0') {
        pZVar5 = (Zombie *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
        cVar1 = Zombie::IsControlled(pZVar5);
        if (cVar1 == '\0') {
          pZVar5 = (Zombie *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
          cVar1 = Zombie::IsInvisible(pZVar5);
          if (cVar1 == '\0') {
            pZVar5 = (Zombie *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
            iVar3 = Zombie::GetSizeType(pZVar5);
            if (iVar3 != 2) {
              pZVar5 = (Zombie *)
                       Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
              cVar1 = Zombie::IsBoss(pZVar5);
              if (cVar1 == '\0') {
                plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                           ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
                cVar1 = (**(code **)(*plVar4 + 0x4d8))();
                if (cVar1 == '\0') {
                  plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                             ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
                  cVar1 = (**(code **)(*plVar4 + 0x508))();
                  if (cVar1 == '\0') {
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
                    Zombie::GetCurrentTitleStatus();
                    TitleStatus::~TitleStatus(aTStack_70);
                    if (local_58 == '\0') {
                      pZVar5 = (Zombie *)
                               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                         ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
                      this = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(pZVar5);
                      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
                      bVar2 = std::operator==((string *)(lVar6 + 8),"disco_mech");
                      bVar2 = !bVar2;
                      goto LAB_0396998c;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  bVar2 = false;
LAB_0396998c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VanillaProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall VanillaProjectile::OnCollideEntity(VanillaProjectile *this,BoardEntity *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  undefined8 *puVar5;
  BoardEntity *this_02;
  ZombieTosserSubSystem *pZVar6;
  ResourceInfo *pRVar7;
  RtMixedPtr aRStack_78 [8];
  RtId aRStack_70 [8];
  string asStack_68 [8];
  undefined8 local_60;
  undefined4 local_58;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8);
  uVar2 = Projectile::OnCollideEntity((Projectile *)this,param_1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_60,(RtWeakPtrBase *)this_00);
  cVar1 = isZombieCanToss(this,(RtWeakPtr<Sexy::SoundResource> *)&local_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
  if ((cVar1 != '\0') && (this[0x1b4] != (VanillaProjectile)0x0)) {
    this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    puVar5 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this_01);
    local_60 = *puVar5;
    local_58 = *(undefined4 *)(puVar5 + 1);
    this_02 = (BoardEntity *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    iVar3 = BoardEntity::CalcColumnPosition(this_02);
    iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
    if (iVar4 <= iVar3) {
      iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
      iVar3 = iVar3 + -1;
    }
    iVar3 = BoardTransforms::GridToBoardSpaceX(iVar3 + 1);
    local_60 = CONCAT44(local_60._4_4_,(float)iVar3);
    pZVar6 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
    pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_00);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_78);
    std::string::string(asStack_68,"ZombieTosserEnd");
    RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<Zombie*>> *)aRStack_50,aRStack_70,asStack_68);
    ZombieTosserSubSystem::LaunchZombie
              (_FUN_0396a578,0x3f000000,pZVar6,pRVar7,(RtWeakPtr<Sexy::SoundResource> *)&local_60,
               aRStack_50,0);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_68);
    nop();
    Sexy::RtId::~RtId(aRStack_70);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

