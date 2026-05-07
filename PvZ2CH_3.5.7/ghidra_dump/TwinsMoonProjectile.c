// Class: TwinsMoonProjectile


/* TwinsMoonProjectile::TwinsMoonProjectile() */

void __thiscall TwinsMoonProjectile::TwinsMoonProjectile(TwinsMoonProjectile *this)

{
  NekotailStab::NekotailStab((NekotailStab *)this);
  *(undefined ***)this = &PTR_GetClass_069afa30;
  *(undefined ***)(this + 0x10) = &PTR__TwinsMoonProjectile_069afc20;
  return;
}


/* TwinsMoonProjectile::StaticNew() */

TwinsMoonProjectile * TwinsMoonProjectile::StaticNew(void)

{
  TwinsMoonProjectile *this;
  
  this = ::operator_new(0x1e0);
  TwinsMoonProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TwinsMoonProjectile::StaticClassInit() */

void TwinsMoonProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"TwinsMoonProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04d40c2c,0x1e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TwinsMoonProjectile::StaticGetClass() */

long * TwinsMoonProjectile::StaticGetClass(void)

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
  uVar2 = NekotailStab::StaticGetClass();
  (*pcVar3)(plVar1,"TwinsMoonProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TwinsMoonProjectile::GetClass() const */

long * TwinsMoonProjectile::GetClass(void)

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
  uVar2 = NekotailStab::StaticGetClass();
  (*pcVar3)(plVar1,"TwinsMoonProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TwinsMoonProjectile::launchBuleStarsProjectile() */

void __thiscall TwinsMoonProjectile::launchBuleStarsProjectile(TwinsMoonProjectile *this)

{
  RtWeakPtrBase *pRVar1;
  int iVar2;
  RtObject *this_00;
  TwinsMoonProps *pTVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  Projectile *pPVar6;
  undefined8 uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  Board *pBVar12;
  undefined4 uVar11;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)Projectile::GetProps((Projectile *)this);
  pTVar3 = Sexy::RtObject::Cast<TwinsMoonProps>(this_00);
  pRVar1 = (RtWeakPtrBase *)(pTVar3 + 0x1e8);
  uVar7 = *(undefined8 *)(gLawnApp + 0x9f0);
  puVar4 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
                    /* WARNING: Load size is inaccurate */
  pBVar12._0_4_ = *puVar4;
  uVar11 = *(undefined4 *)((long)puVar4 + 4);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,pRVar1);
  uVar5 = Projectile::GetInstigator((Projectile *)this);
  pPVar6 = (Projectile *)Board::AddProjectile(pBVar12._0_4_,uVar11,0,uVar7,aRStack_18,uVar5,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (pPVar6 != (Projectile *)0x0) {
    fVar9 = (float)FUN_04d3fc28(0xc2200000,0x42200000);
    fVar10 = (float)FUN_04d3fc28(0xc2200000,0x41f00000);
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,fVar9 - 60.0,fVar10 - 300.0,0.0);
    Projectile::SetVelocity(pPVar6,(SexyVector3 *)aRStack_18);
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,0.0,400.0,0.0);
    Projectile::SetAcceleration(pPVar6,(SexyVector3 *)aRStack_18);
  }
                    /* WARNING: Load size is inaccurate */
  pBVar12._0_4_ = *puVar4;
  uVar11 = *(undefined4 *)((long)puVar4 + 4);
  uVar7 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,pRVar1);
  uVar5 = Projectile::GetInstigator((Projectile *)this);
  pPVar6 = (Projectile *)Board::AddProjectile(pBVar12._0_4_,uVar11,0,uVar7,aRStack_18,uVar5,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (pPVar6 != (Projectile *)0x0) {
    fVar9 = (float)FUN_04d3fc28(0xc2200000,0x42200000);
    fVar10 = (float)FUN_04d3fc28(0xc2200000,0x41f00000);
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,fVar9 + 60.0,fVar10 - 300.0,0.0);
    Projectile::SetVelocity(pPVar6,(SexyVector3 *)aRStack_18);
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,0.0,400.0,0.0);
    Projectile::SetAcceleration(pPVar6,(SexyVector3 *)aRStack_18);
  }
  iVar8 = 0;
  if (2 < *(int *)(this + 0x1dc)) {
    do {
                    /* WARNING: Load size is inaccurate */
      pBVar12._0_4_ = *puVar4;
      uVar11 = *(undefined4 *)((long)puVar4 + 4);
      uVar7 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,pRVar1);
      uVar5 = Projectile::GetInstigator((Projectile *)this);
      pPVar6 = (Projectile *)Board::AddProjectile(pBVar12._0_4_,uVar11,0,uVar7,aRStack_18,uVar5,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      if (pPVar6 != (Projectile *)0x0) {
        iVar2 = Sexy::Rand(2);
        fVar9 = (float)FUN_04d3fc28(0xc2200000,0x42200000);
        fVar10 = (float)FUN_04d3fc28(0xc2200000,0x41f00000);
        if (iVar2 == 0) {
          fVar9 = fVar9 - 60.0;
        }
        else {
          fVar9 = fVar9 + 60.0;
        }
        EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,fVar9,fVar10 - 300.0,0.0);
        Projectile::SetVelocity(pPVar6,(SexyVector3 *)aRStack_18);
        EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,0.0,400.0,0.0);
        Projectile::SetAcceleration(pPVar6,(SexyVector3 *)aRStack_18);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(this + 0x1dc) + -2);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* TwinsMoonProjectile::handleImpact(BoardEntity*) */

void __thiscall TwinsMoonProjectile::handleImpact(TwinsMoonProjectile *this,BoardEntity *param_1)

{
  launchBuleStarsProjectile(this);
  Projectile::handleImpact((Projectile *)this,param_1);
  return;
}


/* TwinsMoonProjectile::~TwinsMoonProjectile() */

void __thiscall TwinsMoonProjectile::~TwinsMoonProjectile(TwinsMoonProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_069afa30;
  *(undefined ***)(this + 0x10) = &PTR__TwinsMoonProjectile_069afc20;
  NekotailStab::~NekotailStab((NekotailStab *)this);
  return;
}


/* non-virtual thunk to TwinsMoonProjectile::~TwinsMoonProjectile() */

void __thiscall TwinsMoonProjectile::~TwinsMoonProjectile(TwinsMoonProjectile *this)

{
  ~TwinsMoonProjectile(this + -0x10);
  return;
}


/* TwinsMoonProjectile::~TwinsMoonProjectile() */

void __thiscall TwinsMoonProjectile::~TwinsMoonProjectile(TwinsMoonProjectile *this)

{
  ~TwinsMoonProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to TwinsMoonProjectile::~TwinsMoonProjectile() */

void __thiscall TwinsMoonProjectile::~TwinsMoonProjectile(TwinsMoonProjectile *this)

{
  ~TwinsMoonProjectile(this + -0x10);
  return;
}

