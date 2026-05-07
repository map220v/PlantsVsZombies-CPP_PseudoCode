// Class: VanillaTornadoProjectile


/* VanillaTornadoProjectile::onProjectileInitialized() */

void __thiscall VanillaTornadoProjectile::onProjectileInitialized(VanillaTornadoProjectile *this)

{
  *(undefined4 *)(this + 0x1a8) = 0;
  this[0x1bc] = (VanillaTornadoProjectile)0x0;
  *(undefined4 *)(this + 0x1b0) = 0x3f000000;
  *(undefined4 *)(this + 0x1ac) = 0x40400000;
  return;
}


/* VanillaTornadoProjectile::onDestroy() */

void __thiscall VanillaTornadoProjectile::onDestroy(VanillaTornadoProjectile *this)

{
  this[0x1bc] = (VanillaTornadoProjectile)0x0;
  return;
}


/* VanillaTornadoProjectile::~VanillaTornadoProjectile() */

void __thiscall VanillaTornadoProjectile::~VanillaTornadoProjectile(VanillaTornadoProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_066d58c0;
  *(undefined ***)(this + 0x10) = &PTR__VanillaTornadoProjectile_066d5ab0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to VanillaTornadoProjectile::~VanillaTornadoProjectile() */

void __thiscall VanillaTornadoProjectile::~VanillaTornadoProjectile(VanillaTornadoProjectile *this)

{
  ~VanillaTornadoProjectile(this + -0x10);
  return;
}


/* VanillaTornadoProjectile::~VanillaTornadoProjectile() */

void __thiscall VanillaTornadoProjectile::~VanillaTornadoProjectile(VanillaTornadoProjectile *this)

{
  ~VanillaTornadoProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to VanillaTornadoProjectile::~VanillaTornadoProjectile() */

void __thiscall VanillaTornadoProjectile::~VanillaTornadoProjectile(VanillaTornadoProjectile *this)

{
  ~VanillaTornadoProjectile(this + -0x10);
  return;
}


/* VanillaTornadoProjectile::VanillaTornadoProjectile() */

void __thiscall VanillaTornadoProjectile::VanillaTornadoProjectile(VanillaTornadoProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_066d58c0;
  *(undefined ***)(this + 0x10) = &PTR__VanillaTornadoProjectile_066d5ab0;
  return;
}


/* VanillaTornadoProjectile::StaticNew() */

VanillaTornadoProjectile * VanillaTornadoProjectile::StaticNew(void)

{
  VanillaTornadoProjectile *this;
  
  this = ::operator_new(0x1c0);
  VanillaTornadoProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VanillaTornadoProjectile::StaticClassInit() */

void VanillaTornadoProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"VanillaTornadoProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_03965478,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VanillaTornadoProjectile::StaticGetClass() */

long * VanillaTornadoProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"VanillaTornadoProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VanillaTornadoProjectile::GetClass() const */

long * VanillaTornadoProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"VanillaTornadoProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VanillaTornadoProjectile::isZombieShouldStun(Zombie*) */

byte __thiscall
VanillaTornadoProjectile::isZombieShouldStun(VanillaTornadoProjectile *this,Zombie *param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar5;
  
  cVar1 = Zombie::IsBoss(param_1);
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar1 == '\0'))
  {
    cVar1 = (**(code **)(*(long *)param_1 + 0x508))(param_1);
    if (cVar1 == '\0') {
      iVar4 = Zombie::GetSizeType(param_1);
      if (iVar4 == 2) {
        return 0;
      }
      iVar4 = Zombie::GetSizeType(param_1);
      if (iVar4 == 1) {
        return 0;
      }
      this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(param_1);
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      bVar2 = std::operator==((string *)(lVar5 + 8),"disco_mech");
      if (bVar2) {
        return 0;
      }
      bVar3 = Zombie::HasCondition(param_1,0x18);
      return bVar3 ^ 1;
    }
  }
  return 0;
}


/* VanillaTornadoProjectile::MakePositionAdjustment() */

void __thiscall VanillaTornadoProjectile::MakePositionAdjustment(VanillaTornadoProjectile *this)

{
  RtObject *this_00;
  VanillaTornadoProjectileProps *pVVar1;
  float *pfVar2;
  
  this_00 = (RtObject *)Projectile::GetProps((Projectile *)this);
  pVVar1 = Sexy::RtObject::Cast<VanillaTornadoProjectileProps>(this_00);
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  Projectile::SetPosition
            ((Projectile *)this,*pfVar2 + *(float *)(pVVar1 + 0x1e4),
             pfVar2[1] + *(float *)(pVVar1 + 0x1e8),pfVar2[2]);
  return;
}


/* VanillaTornadoProjectile::OnCollideEntity(BoardEntity*) */

undefined8 __thiscall
VanillaTornadoProjectile::OnCollideEntity(VanillaTornadoProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  Zombie *pZVar2;
  undefined4 uVar3;
  float fVar4;
  
  if (this[0x1bc] == (VanillaTornadoProjectile)0x0) {
    if (((param_1 != (BoardEntity *)0x0) &&
        (pZVar2 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), pZVar2 != (Zombie *)0x0)) &&
       (cVar1 = isZombieShouldStun(this,pZVar2), cVar1 != '\0')) {
                    /* WARNING: Load size is inaccurate */
      Zombie::ApplyCondition(*(Zombie **)(this + 0x1ac),0,pZVar2,2,1);
    }
    *(undefined4 *)(this + 0x1a8) = 1;
    uVar3 = PVZ_T();
    *(undefined4 *)(this + 0x1b4) = uVar3;
    fVar4 = (float)PVZ_T();
    *(float *)(this + 0x1b8) = fVar4 + *(float *)(this + 0x1ac);
    Projectile::SetVelocity((Projectile *)this,0.0,0.0,0.0);
    this[0x1bc] = (VanillaTornadoProjectile)0x1;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VanillaTornadoProjectile::dealTornadoAreaDamage() */

void __thiscall VanillaTornadoProjectile::dealTornadoAreaDamage(VanillaTornadoProjectile *this)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  GridItem *pGVar5;
  Zombie *this_00;
  ResourceInfo *pRVar6;
  ulong uVar7;
  RtObject *this_01;
  VanillaTornadoProjectileProps *pVVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  code *pcVar12;
  DamageInfo *pDVar13;
  RtWeakPtr<Sexy::SoundResource> aRStack_b8 [8];
  Point aPStack_b0 [8];
  undefined4 local_a8;
  undefined4 local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  Insets aIStack_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  string asStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_68,"Play_Bonk");
  uVar10 = 0;
  RealObject::PlayPositionalSound((RealObject *)this,asStack_68,0.0);
  std::string::~string(asStack_68);
  nop();
  lVar3 = Projectile::GetProps((Projectile *)this);
  Sexy::TRect<float>::TRect((TRect<float> *)&local_a0,(TRect *)(lVar3 + 0x120));
  Sexy::Insets::Insets
            (aIStack_90,(int)(local_a0 + *(float *)(this + 0x18)),
             (int)(local_9c + *(float *)(this + 0x1c)),(int)local_98,(int)local_94);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
  uVar2 = operator|(2,4);
  EntityFinder::GetEntitiesTouchingRectangle
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,uVar2,
             aIStack_90,0xffffffff,0xffffffff);
  uVar11 = local_80;
  lVar3 = FUN_03964758(local_80,local_78);
  if (lVar3 != 0) {
    do {
      FUN_03964764(uVar11,uVar10);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_b8,(RtWeakPtrBase *)asStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
      puVar4 = (undefined8 *)FUN_03964764(local_80,uVar10);
      pGVar5 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar4);
      puVar4 = (undefined8 *)FUN_03964764(local_80,uVar10);
      this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar4);
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_b8);
      if (cVar1 == '\0') {
LAB_03969518:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b8)
        ;
      }
      else {
        pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_b8);
        cVar1 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)pRVar6);
        if (((cVar1 == '\0') ||
            ((pGVar5 != (GridItem *)0x0 &&
             (cVar1 = (**(code **)(*(long *)pGVar5 + 0x200))(pGVar5), cVar1 == '\0')))) ||
           ((this_00 != (Zombie *)0x0 &&
            ((((cVar1 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar1 != '\0' ||
               (cVar1 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar1 != '\0')) ||
              (cVar1 = Zombie::IsControlled(this_00), cVar1 != '\0')) ||
             (cVar1 = Zombie::IsInvisible(this_00), cVar1 != '\0')))))) goto LAB_03969518;
        this_01 = (RtObject *)Projectile::GetProps((Projectile *)this);
        pVVar8 = Sexy::RtObject::Cast<VanillaTornadoProjectileProps>(this_01);
                    /* WARNING: Load size is inaccurate */
        pDVar13._0_4_ = *(DamageInfo **)(pVVar8 + 0x1e0);
        plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b8);
        pcVar12 = *(code **)(*plVar9 + 0x110);
        Sexy::Point::Point(aPStack_b0,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_a8,1.0,0.0);
        DamageInfo::DamageInfo(pDVar13._0_4_,local_a8,local_a4,asStack_68,aPStack_b0,0);
        (*pcVar12)(plVar9,asStack_68);
        DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b8)
        ;
      }
      uVar11 = local_80;
      uVar10 = uVar10 + 1;
      uVar7 = FUN_03964758(local_80,local_78);
    } while (uVar10 < uVar7);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VanillaTornadoProjectile::onUpdate(float) */

float VanillaTornadoProjectile::onUpdate(float param_1)

{
  VanillaTornadoProjectile *in_x0;
  float fVar1;
  float fVar2;
  
  if (*(int *)(in_x0 + 0x1a8) == 1) {
    fVar2 = *(float *)(in_x0 + 0x1b8);
    fVar1 = (float)PVZ_T();
    if (fVar2 < fVar1) {
      param_1 = (float)(**(code **)(*(long *)in_x0 + 0x48))();
    }
    else {
      fVar1 = *(float *)(in_x0 + 0x1b4);
      param_1 = (float)PVZ_T();
      if (fVar1 < param_1) {
        dealTornadoAreaDamage(in_x0);
        fVar1 = (float)PVZ_T();
        param_1 = fVar1 + *(float *)(in_x0 + 0x1b0);
        *(float *)(in_x0 + 0x1b4) = param_1;
      }
    }
  }
  return param_1;
}

