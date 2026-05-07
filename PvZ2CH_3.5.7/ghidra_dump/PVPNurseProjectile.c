// Class: PVPNurseProjectile


/* PVPNurseProjectile::~PVPNurseProjectile() */

void __thiscall PVPNurseProjectile::~PVPNurseProjectile(PVPNurseProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_0691d4a0;
  *(undefined ***)(this + 0x10) = &PTR__PVPNurseProjectile_0691d690;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to PVPNurseProjectile::~PVPNurseProjectile() */

void __thiscall PVPNurseProjectile::~PVPNurseProjectile(PVPNurseProjectile *this)

{
  ~PVPNurseProjectile(this + -0x10);
  return;
}


/* PVPNurseProjectile::~PVPNurseProjectile() */

void __thiscall PVPNurseProjectile::~PVPNurseProjectile(PVPNurseProjectile *this)

{
  ~PVPNurseProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PVPNurseProjectile::~PVPNurseProjectile() */

void __thiscall PVPNurseProjectile::~PVPNurseProjectile(PVPNurseProjectile *this)

{
  ~PVPNurseProjectile(this + -0x10);
  return;
}


/* PVPNurseProjectile::PVPNurseProjectile() */

void __thiscall PVPNurseProjectile::PVPNurseProjectile(PVPNurseProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  this[0x1a5] = (PVPNurseProjectile)0x0;
  this[0x1a6] = (PVPNurseProjectile)0x0;
  *(undefined ***)this = &PTR_GetClass_0691d4a0;
  *(undefined ***)(this + 0x10) = &PTR__PVPNurseProjectile_0691d690;
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined4 *)(this + 0x1b0) = 0;
  return;
}


/* PVPNurseProjectile::StaticNew() */

PVPNurseProjectile * PVPNurseProjectile::StaticNew(void)

{
  PVPNurseProjectile *this;
  
  this = ::operator_new(0x1b8);
  PVPNurseProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPNurseProjectile::StaticClassInit() */

void PVPNurseProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"PVPNurseProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_049969c8,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPNurseProjectile::StaticGetClass() */

long * PVPNurseProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PVPNurseProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVPNurseProjectile::GetClass() const */

long * PVPNurseProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"PVPNurseProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPNurseProjectile::DoArenaCollideProcess() */

void __thiscall PVPNurseProjectile::DoArenaCollideProcess(PVPNurseProjectile *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  RtObject *pRVar4;
  Zombie *this_00;
  float *pfVar5;
  float local_14;
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = (**(code **)(*(long *)this + 0x1a0))();
  if (lVar3 != 0) {
    (**(code **)(*(long *)this + 0x1a0))(this);
    ToolPacketData::GetProps();
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)local_10);
    if (cVar1 == '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
    }
    else {
      pRVar4 = (RtObject *)(**(code **)(*(long *)this + 0x1a0))(this);
      bVar2 = Sexy::RtObject::IsA<Zombie>(pRVar4);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
      if (bVar2) {
        pRVar4 = (RtObject *)(**(code **)(*(long *)this + 0x1a0))(this);
        this_00 = Sexy::RtObject::Cast<Zombie>(pRVar4);
        Zombie::PlayAidEffect(this_00);
        local_14 = (float)FUN_049962f4(*(undefined4 *)(this_00 + 0x280));
        local_14 = local_14 + (float)*(int *)(this + 0x1b4);
        local_10[0] = FUN_049962f8(*(undefined4 *)(this_00 + 0x284));
        pfVar5 = eastl::min_alt<float>(&local_14,(float *)local_10);
        Zombie::SetHitpoints(this_00,*pfVar5);
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
/* PVPNurseProjectile::DoBoardCollideProcess() */

void __thiscall PVPNurseProjectile::DoBoardCollideProcess(PVPNurseProjectile *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  RtObject *pRVar4;
  Zombie *this_00;
  Plant *pPVar5;
  float *pfVar6;
  Zombie *pZVar7;
  float local_14;
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = (**(code **)(*(long *)this + 0x1a0))();
  if (lVar3 != 0) {
    (**(code **)(*(long *)this + 0x1a0))(this);
    ToolPacketData::GetProps();
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
    if (cVar1 != '\0') {
      pRVar4 = (RtObject *)(**(code **)(*(long *)this + 0x1a0))(this);
      bVar2 = Sexy::RtObject::IsA<Zombie>(pRVar4);
      if (bVar2) {
        pRVar4 = (RtObject *)(**(code **)(*(long *)this + 0x1a0))(this);
        this_00 = Sexy::RtObject::Cast<Zombie>(pRVar4);
        cVar1 = Zombie::IsIZombie(this_00);
        if (cVar1 == '\0') {
          cVar1 = Zombie::HasCondition(this_00,0x3d);
          if (cVar1 == '\0') {
            pZVar7._0_4_ = (Zombie *)PVZ_EOT();
            Zombie::ApplyCondition(pZVar7._0_4_,0,this_00,0x3d,1);
          }
        }
        else {
          Zombie::PlayAidEffect(this_00);
          local_14 = (float)FUN_049962f4(*(undefined4 *)(this_00 + 0x280));
          local_14 = local_14 + (float)*(int *)(this + 0x1b4);
          local_10[0] = FUN_049962f8(*(undefined4 *)(this_00 + 0x284));
          pfVar6 = eastl::min_alt<float>(&local_14,(float *)local_10);
          Zombie::SetHitpoints(this_00,*pfVar6);
        }
      }
      else {
        pRVar4 = (RtObject *)(**(code **)(*(long *)this + 0x1a0))(this);
        bVar2 = Sexy::RtObject::IsA<Plant>(pRVar4);
        if (bVar2) {
          pRVar4 = (RtObject *)(**(code **)(*(long *)this + 0x1a0))(this);
          pPVar5 = Sexy::RtObject::Cast<Plant>(pRVar4);
          Plant::ApplyCondition(0x40a00000,0,pPVar5,0xe);
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


/* PVPNurseProjectile::moveThroughTime(float) */

void __thiscall PVPNurseProjectile::moveThroughTime(PVPNurseProjectile *this,float param_1)

{
  uint uVar1;
  char cVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  ProjectileHelpers::Integrate((Projectile *)this,param_1);
  pfVar3 = (float *)Projectile::GetVelocity((Projectile *)this);
  fVar5 = atan2f(pfVar3[2],*pfVar3);
  if (fVar5 < 0.0) {
    if (this[0x1a5] == (PVPNurseProjectile)0x0) {
      this[0x1a5] = (PVPNurseProjectile)0x1;
      FUN_049962e4(0,this + 0xcc);
      uVar6 = FUN_049962d4(*(undefined4 *)(this + 0xc4));
      fVar8 = *(float *)(this + 0x1a8);
      *(undefined4 *)(this + 0x1ac) = uVar6;
      fVar7 = (float)PVZ_T();
      fVar10 = *(float *)(this + 0x1ac);
      iVar4 = (int)(fVar10 * 0.3183099);
      fVar9 = ((float)(iVar4 % 2) - (float)iVar4) + fVar10 * 0.3183099;
      cVar2 = FUN_049962ec(this[0xd4]);
      if (cVar2 == '\0') {
        fVar9 = 2.0 - fVar9;
      }
      else {
        fVar9 = fVar9 + 2.0;
      }
      fVar7 = (fVar9 * 3.1415925) / (fVar8 - fVar7);
      *(float *)(this + 0x1b0) = fVar7;
    }
    else {
      fVar7 = *(float *)(this + 0x1b0);
      cVar2 = FUN_049962ec(this[0xd4]);
      fVar10 = *(float *)(this + 0x1ac);
    }
    if (cVar2 == '\0') {
      fVar10 = fVar7 * param_1 + fVar10;
      *(float *)(this + 0x1ac) = fVar10;
      uVar1 = (int)fVar5 >> 0x1f;
      fVar5 = 3.1415925 - (float)(int)(((int)fVar5 ^ uVar1) - uVar1);
    }
    else {
      fVar10 = fVar10 - fVar7 * param_1;
      *(float *)(this + 0x1ac) = fVar10;
    }
    fVar7 = (float)FUN_049962f0(*(undefined4 *)(this + 200));
    FUN_049962dc(fVar10 + fVar5 + fVar7,this + 0xc4);
    return;
  }
  fVar5 = (float)FUN_049962d4(*(undefined4 *)(this + 0xc4));
  fVar7 = (float)FUN_049962d8(*(undefined4 *)(this + 0xcc));
  FUN_049962dc(fVar5 + param_1 * fVar7,this + 0xc4);
  return;
}


/* PVPNurseProjectile::OnCollideGround() */

undefined4 __thiscall PVPNurseProjectile::OnCollideGround(PVPNurseProjectile *this)

{
  undefined4 uVar1;
  
  uVar1 = Projectile::OnCollideGround((Projectile *)this);
  if (this[0x1a6] == (PVPNurseProjectile)0x0) {
    DoBoardCollideProcess(this);
    return uVar1;
  }
  DoArenaCollideProcess(this);
  return uVar1;
}

