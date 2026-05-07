// Class: GrapeshotProjectile


/* GrapeshotProjectile::determineBounceDirection(float) */

undefined4 GrapeshotProjectile::determineBounceDirection(float param_1)

{
  float fVar1;
  undefined4 uVar2;
  
  fVar1 = (float)Sexy::Rand(1.0);
  uVar2 = 0xbf800000;
  if (fVar1 <= param_1) {
    uVar2 = 0x3f800000;
  }
  return uVar2;
}


/* GrapeshotProjectile::~GrapeshotProjectile() */

void __thiscall GrapeshotProjectile::~GrapeshotProjectile(GrapeshotProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06810ba0;
  *(undefined ***)(this + 0x10) = &PTR__GrapeshotProjectile_06810d90;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to GrapeshotProjectile::~GrapeshotProjectile() */

void __thiscall GrapeshotProjectile::~GrapeshotProjectile(GrapeshotProjectile *this)

{
  ~GrapeshotProjectile(this + -0x10);
  return;
}


/* GrapeshotProjectile::~GrapeshotProjectile() */

void __thiscall GrapeshotProjectile::~GrapeshotProjectile(GrapeshotProjectile *this)

{
  ~GrapeshotProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GrapeshotProjectile::~GrapeshotProjectile() */

void __thiscall GrapeshotProjectile::~GrapeshotProjectile(GrapeshotProjectile *this)

{
  ~GrapeshotProjectile(this + -0x10);
  return;
}


/* GrapeshotProjectile::GrapeshotProjectile() */

void __thiscall GrapeshotProjectile::GrapeshotProjectile(GrapeshotProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined4 *)(this + 0x1a8) = 0xffffffff;
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined ***)this = &PTR_GetClass_06810ba0;
  *(undefined ***)(this + 0x10) = &PTR__GrapeshotProjectile_06810d90;
  return;
}


/* GrapeshotProjectile::StaticNew() */

GrapeshotProjectile * GrapeshotProjectile::StaticNew(void)

{
  GrapeshotProjectile *this;
  
  this = ::operator_new(0x1b0);
  GrapeshotProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GrapeshotProjectile::StaticClassInit() */

void GrapeshotProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"GrapeshotProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_0422dd9c,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GrapeshotProjectile::StaticGetClass() */

long * GrapeshotProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GrapeshotProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GrapeshotProjectile::GetClass() const */

long * GrapeshotProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"GrapeshotProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GrapeshotProjectile::SetProjectileAnimation() */

void __thiscall GrapeshotProjectile::SetProjectileAnimation(GrapeshotProjectile *this)

{
  float *pfVar1;
  PopAnimRig *pPVar2;
  undefined1 *__n;
  float fVar3;
  float fVar4;
  undefined1 auStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  __n = auStack_48;
  local_8 = ___stack_chk_guard;
  pfVar1 = (float *)Projectile::GetVelocity((Projectile *)this);
  fVar4 = pfVar1[1];
  fVar3 = *pfVar1;
  std::string::string(asStack_40,"");
  nop();
  if ((ABS(fVar4) <= 1.0) || (1.0 < ABS(fVar3))) {
    if (ABS(fVar3) <= 0.0) {
      std::string::append(asStack_40,"animation_backward",(size_t)__n);
    }
    else {
      std::string::append(asStack_40,"animation_forward",(size_t)__n);
    }
  }
  else if (fVar4 < 0.0) {
    std::string::append(asStack_40,"animation_verticle_up",(size_t)__n);
  }
  else {
    std::string::append(asStack_40,"animation_verticle_down",(size_t)__n);
  }
  pPVar2 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GrapeshotProjectile::handleBounceAndReportConsumption() */

void __thiscall GrapeshotProjectile::handleBounceAndReportConsumption(GrapeshotProjectile *this)

{
  int iVar1;
  int iVar2;
  RtObject *this_00;
  GrapeshotProjectileProps *pGVar3;
  int iVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)Projectile::GetProps((Projectile *)this);
  pGVar3 = Sexy::RtObject::Cast<GrapeshotProjectileProps>(this_00);
  iVar1 = *(int *)(this + 0x1ac) + 1;
  *(int *)(this + 0x1ac) = iVar1;
  iVar2 = FUN_0422d378(*(undefined4 *)(this + 0x70));
  iVar4 = *(int *)(pGVar3 + 0x1e8);
  if (iVar2 == 2) {
    iVar4 = *(int *)(pGVar3 + 0x1ec);
  }
  else if (iVar2 == 3) {
    iVar4 = *(int *)(pGVar3 + 0x1f0);
  }
  if (iVar4 <= iVar1) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  else {
    std::string::string(asStack_10,"Play_Plant_GrapeShot_Riccochet");
    RealObject::PlayPositionalSound((RealObject *)this,asStack_10,0.0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar4 <= iVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GrapeshotProjectile::showHitExplosion(float, float) */

void __thiscall
GrapeshotProjectile::showHitExplosion(GrapeshotProjectile *this,float param_1,float param_2)

{
  Effect_PopAnim *this_00;
  long extraout_x0;
  PopAnim *pPVar1;
  float fVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  Projectile::GetProps((Projectile *)this);
  nop();
  GetPAMByName((string *)(extraout_x0 + 0x1f8));
  pPVar1 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,pPVar1,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  (**(code **)(*(long *)this_00 + 0x80))(0x3fc00000,this_00);
  fVar2 = 0.0;
  if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
    fVar2 = (float)Board::calculateRoofOffsetZ((float)(int)(param_1 - 145.0));
    fVar2 = (float)(int)fVar2;
  }
  EATextSquish::Vec3::Vec3
            ((Vec3 *)aRStack_18,(float)(int)(param_1 - 145.0),(float)(int)(param_2 - 192.0),fVar2);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,-1);
  FUN_0422d444(this_00 + 0x1c);
  std::string::string((string *)aRStack_18,"animation");
  Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GrapeshotProjectile::OnCollideEntity(BoardEntity*) */

void GrapeshotProjectile::OnCollideEntity(BoardEntity *param_1)

{
  byte bVar1;
  byte bVar2;
  RtObject *this;
  GrapeshotProjectileProps *pGVar3;
  undefined8 *puVar4;
  BoardEntity *in_x1;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_40 [4];
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (RtObject *)Projectile::GetProps((Projectile *)param_1);
  pGVar3 = Sexy::RtObject::Cast<GrapeshotProjectileProps>(this);
  BoardEntity::CalcGridPosition();
  if (local_54 == *(int *)(param_1 + 0x1a8)) {
    bVar2 = 0;
  }
  else {
    *(int *)(param_1 + 0x1a8) = local_54;
    puVar4 = (undefined8 *)Projectile::GetVelocity((Projectile *)param_1);
    uVar5 = *puVar4;
    local_48 = *(undefined4 *)(puVar4 + 1);
    local_50._4_4_ = (float)((ulong)uVar5 >> 0x20);
    fVar8 = ABS(local_50._4_4_);
    fVar6 = local_50._4_4_;
    local_50 = uVar5;
    if (fVar8 <= 0.5) {
      Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
      Sexy::SexyTransform2D::RotateRad(aSStack_30,-*(float *)(pGVar3 + 0x1e0));
      local_40[0] = Sexy::SexyMatrix3::operator*((SexyMatrix3 *)aSStack_30,(SexyVector3 *)&local_50)
      ;
      Sexy::SexyVector3::operator=((SexyVector3 *)&local_50,(SexyVector3 *)local_40);
      if (local_54 == 1) {
        fVar6 = (float)determineBounceDirection(*(float *)(pGVar3 + 0x1e4));
        fVar6 = fVar6 * local_50._4_4_;
      }
      else if (local_54 == 3) {
        fVar6 = (float)determineBounceDirection(1.0 - *(float *)(pGVar3 + 0x1e4));
        fVar6 = fVar6 * local_50._4_4_;
      }
      else {
        fVar6 = (float)determineBounceDirection(0.5);
        fVar6 = fVar6 * local_50._4_4_;
      }
      fVar8 = ABS(fVar6);
    }
    fVar7 = 1.0;
    if (local_54 != 0) {
      if (local_54 == 4) {
        fVar7 = -1.0;
      }
      else {
        fVar7 = -1.0;
        if (fVar6 <= 0.0) {
          fVar7 = 1.0;
        }
      }
    }
    local_50 = CONCAT44(fVar7 * fVar8,(undefined4)local_50);
    Projectile::SetVelocity((Projectile *)param_1,(SexyVector3 *)&local_50);
    fVar8 = *(float *)(in_x1 + 0x1c);
    fVar6 = (float)FUN_0422d454(*(undefined4 *)(in_x1 + 0x18),fVar8,*(undefined4 *)(in_x1 + 0x20));
    SetProjectileAnimation((GrapeshotProjectile *)param_1);
    bVar1 = handleBounceAndReportConsumption((GrapeshotProjectile *)param_1);
    if (bVar1 != 0) {
      showHitExplosion((GrapeshotProjectile *)param_1,fVar6,fVar8);
    }
    bVar2 = Projectile::OnCollideEntity((Projectile *)param_1,in_x1);
    bVar2 = bVar2 | bVar1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GrapeshotProjectile::moveThroughTime(float) */

void __thiscall GrapeshotProjectile::moveThroughTime(GrapeshotProjectile *this,float param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  int local_20;
  int local_1c;
  float local_18;
  float fStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::moveThroughTime((Projectile *)this,param_1);
  if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) == '\0') {
    pfVar4 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    fVar6 = pfVar4[1];
  }
  else {
    pfVar4 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    fVar7 = pfVar4[1];
    fVar6 = (float)Board::calculateRoofOffsetZ(*pfVar4);
    fVar6 = fVar6 + fVar7;
  }
  iVar2 = BoardTransforms::BoardSpaceToGridXUnbounded(*pfVar4);
  iVar3 = BoardTransforms::BoardSpaceToGridYUnbounded((int)fVar6);
  Sexy::Point::Point((Point *)&local_20,iVar2,iVar3);
  if (local_1c < 0) {
    puVar5 = (undefined8 *)Projectile::GetVelocity((Projectile *)this);
    local_10 = *(undefined4 *)(puVar5 + 1);
    fStack_14 = (float)((ulong)*puVar5 >> 0x20);
    local_18 = (float)*puVar5;
    _local_18 = CONCAT44(ABS(fStack_14),local_18);
  }
  else if (local_1c < 5) {
    if (-1 < local_20) goto LAB_0422ea3c;
    puVar5 = (undefined8 *)Projectile::GetVelocity((Projectile *)this);
    local_10 = *(undefined4 *)(puVar5 + 1);
    local_18 = (float)*puVar5;
    fStack_14 = (float)((ulong)*puVar5 >> 0x20);
    _local_18 = CONCAT44(fStack_14,ABS(local_18));
  }
  else {
    puVar5 = (undefined8 *)Projectile::GetVelocity((Projectile *)this);
    local_10 = *(undefined4 *)(puVar5 + 1);
    fStack_14 = (float)((ulong)*puVar5 >> 0x20);
    local_18 = (float)*puVar5;
    _local_18 = CONCAT44(-ABS(fStack_14),local_18);
  }
  Projectile::SetVelocity((Projectile *)this,(SexyVector3 *)&local_18);
  *(undefined4 *)(this + 0x1a8) = 0xffffff9c;
  cVar1 = handleBounceAndReportConsumption(this);
  SetProjectileAnimation(this);
  if (cVar1 != '\0') {
    showHitExplosion(this,*pfVar4,pfVar4[1]);
  }
LAB_0422ea3c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GrapeshotProjectile::OnCollideRoof() */

void __thiscall GrapeshotProjectile::OnCollideRoof(GrapeshotProjectile *this)

{
  float *pfVar1;
  
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  showHitExplosion(this,*pfVar1,pfVar1[1]);
  Projectile::OnCollideRoof((Projectile *)this);
  return;
}

