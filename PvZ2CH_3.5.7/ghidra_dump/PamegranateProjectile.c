// Class: PamegranateProjectile


/* PamegranateProjectile::~PamegranateProjectile() */

void __thiscall PamegranateProjectile::~PamegranateProjectile(PamegranateProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067b1b00;
  *(undefined ***)(this + 0x10) = &PTR__PamegranateProjectile_067b1cf0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to PamegranateProjectile::~PamegranateProjectile() */

void __thiscall PamegranateProjectile::~PamegranateProjectile(PamegranateProjectile *this)

{
  ~PamegranateProjectile(this + -0x10);
  return;
}


/* PamegranateProjectile::~PamegranateProjectile() */

void __thiscall PamegranateProjectile::~PamegranateProjectile(PamegranateProjectile *this)

{
  ~PamegranateProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PamegranateProjectile::~PamegranateProjectile() */

void __thiscall PamegranateProjectile::~PamegranateProjectile(PamegranateProjectile *this)

{
  ~PamegranateProjectile(this + -0x10);
  return;
}


/* PamegranateProjectile::onDeflection(BoardEntity*) */

void PamegranateProjectile::onDeflection(BoardEntity *param_1)

{
  FUN_03ff5340(0,param_1 + 0xc4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PamegranateProjectile::onUpdate(float) */

void PamegranateProjectile::onUpdate(float param_1)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  float *pfVar1;
  undefined8 *puVar2;
  SexyVector3 *pSVar3;
  float fVar4;
  float fVar5;
  FastCurve aFStack_98 [8];
  undefined4 local_90;
  float local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_68;
  float local_64;
  undefined4 local_58;
  float local_54;
  undefined4 local_48;
  float local_44;
  undefined4 local_38;
  float local_34;
  undefined4 local_28;
  float local_24;
  undefined4 local_18;
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar4 = (float)VectorNorm((FPoint *)(in_x0 + 0x1a8));
  if (0.0 < fVar4) {
    pfVar1 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(in_x0);
    fVar5 = pfVar1[1];
    Sexy::FastCurve::SetOutRange(aFStack_98,*pfVar1,fVar5);
    local_90 = Sexy::SexyVector2::operator-
                         ((SexyVector2 *)(in_x0 + 0x1a8),(SexyVector2 *)aFStack_98);
    local_8c = fVar5;
    fVar4 = (float)DVec2::getLength((DVec2 *)&local_90);
    puVar2 = (undefined8 *)Projectile::GetVelocity((Projectile *)in_x0);
    local_88 = *puVar2;
    local_80 = *(undefined4 *)(puVar2 + 1);
    puVar2 = (undefined8 *)AssetsManagerManifest::getAssets((AssetsManagerManifest *)in_x0);
    local_78 = *puVar2;
    local_70 = *(undefined4 *)(puVar2 + 1);
    pSVar3 = (SexyVector3 *)Projectile::GetVelocityScale((Projectile *)in_x0);
    local_68 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_88,pSVar3);
    local_64 = fVar5;
    local_58 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_68,param_1);
    local_54 = fVar5;
    local_48 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_78,param_1);
    local_44 = fVar5;
    local_38 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_48,param_1);
    local_34 = fVar5;
    local_28 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_38,0.5);
    local_24 = fVar5;
    local_18 = Sexy::SexyVector3::operator+((SexyVector3 *)&local_58,(SexyVector3 *)&local_28);
    local_14 = fVar5;
    fVar5 = (float)DVec3::getLength((DVec3 *)&local_18);
    if (fVar4 <= fVar5) {
      (**(code **)(*(long *)in_x0 + 0x118))();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PamegranateProjectile::PamegranateProjectile() */

void __thiscall PamegranateProjectile::PamegranateProjectile(PamegranateProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067b1b00;
  *(undefined ***)(this + 0x10) = &PTR__PamegranateProjectile_067b1cf0;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x1a8));
  return;
}


/* PamegranateProjectile::StaticNew() */

PamegranateProjectile * PamegranateProjectile::StaticNew(void)

{
  PamegranateProjectile *this;
  
  this = ::operator_new(0x1b0);
  PamegranateProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PamegranateProjectile::StaticClassInit() */

void PamegranateProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"PamegranateProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_03ff5e14,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PamegranateProjectile::StaticGetClass() */

long * PamegranateProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PamegranateProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PamegranateProjectile::GetClass() const */

long * PamegranateProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"PamegranateProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

