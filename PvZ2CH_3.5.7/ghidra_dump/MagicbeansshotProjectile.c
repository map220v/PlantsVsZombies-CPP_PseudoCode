// Class: MagicbeansshotProjectile


/* MagicbeansshotProjectile::~MagicbeansshotProjectile() */

void __thiscall MagicbeansshotProjectile::~MagicbeansshotProjectile(MagicbeansshotProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067c2cc0;
  *(undefined ***)(this + 0x10) = &PTR__MagicbeansshotProjectile_067c2eb0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to MagicbeansshotProjectile::~MagicbeansshotProjectile() */

void __thiscall MagicbeansshotProjectile::~MagicbeansshotProjectile(MagicbeansshotProjectile *this)

{
  ~MagicbeansshotProjectile(this + -0x10);
  return;
}


/* MagicbeansshotProjectile::~MagicbeansshotProjectile() */

void __thiscall MagicbeansshotProjectile::~MagicbeansshotProjectile(MagicbeansshotProjectile *this)

{
  ~MagicbeansshotProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to MagicbeansshotProjectile::~MagicbeansshotProjectile() */

void __thiscall MagicbeansshotProjectile::~MagicbeansshotProjectile(MagicbeansshotProjectile *this)

{
  ~MagicbeansshotProjectile(this + -0x10);
  return;
}


/* MagicbeansshotProjectile::MagicbeansshotProjectile() */

void __thiscall MagicbeansshotProjectile::MagicbeansshotProjectile(MagicbeansshotProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined4 *)(this + 0x1b0) = 0xffffffff;
  *(undefined4 *)(this + 0x1b4) = 0;
  *(undefined ***)this = &PTR_GetClass_067c2cc0;
  *(undefined ***)(this + 0x10) = &PTR__MagicbeansshotProjectile_067c2eb0;
  return;
}


/* MagicbeansshotProjectile::StaticNew() */

MagicbeansshotProjectile * MagicbeansshotProjectile::StaticNew(void)

{
  MagicbeansshotProjectile *this;
  
  this = ::operator_new(0x1b8);
  MagicbeansshotProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagicbeansshotProjectile::StaticClassInit() */

void MagicbeansshotProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"MagicbeansshotProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_0405b0c8,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MagicbeansshotProjectile::StaticGetClass() */

long * MagicbeansshotProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MagicbeansshotProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MagicbeansshotProjectile::GetClass() const */

long * MagicbeansshotProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"MagicbeansshotProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MagicbeansshotProjectile::OnCollideRoof() */

void __thiscall MagicbeansshotProjectile::OnCollideRoof(MagicbeansshotProjectile *this)

{
  std::
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)this);
  nop();
  Projectile::OnCollideRoof((Projectile *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagicbeansshotProjectile::SetProjectileAnimation() */

void __thiscall MagicbeansshotProjectile::SetProjectileAnimation(MagicbeansshotProjectile *this)

{
  PopAnimRig *pPVar1;
  undefined1 *__n;
  undefined1 auStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  __n = auStack_48;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"");
  nop();
  std::string::append(asStack_40,"animation",(size_t)__n);
  pPVar1 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagicbeansshotProjectile::handleBounceAndReportConsumption() */

void __thiscall
MagicbeansshotProjectile::handleBounceAndReportConsumption(MagicbeansshotProjectile *this)

{
  int iVar1;
  int iVar2;
  RtObject *this_00;
  MagicbeansshotProjectileProps *pMVar3;
  int iVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)Projectile::GetProps((Projectile *)this);
  pMVar3 = Sexy::RtObject::Cast<MagicbeansshotProjectileProps>(this_00);
  iVar1 = *(int *)(this + 0x1b4) + 1;
  *(int *)(this + 0x1b4) = iVar1;
  iVar2 = FUN_04059fd8(*(undefined4 *)(this + 0x70));
  iVar4 = *(int *)(pMVar3 + 0x1e8);
  if (iVar2 == 2) {
    iVar4 = *(int *)(pMVar3 + 0x1ec);
  }
  else if (iVar2 == 3) {
    iVar4 = *(int *)(pMVar3 + 0x1f0);
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
/* MagicbeansshotProjectile::moveThroughTime(float) */

void __thiscall
MagicbeansshotProjectile::moveThroughTime(MagicbeansshotProjectile *this,float param_1)

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
    if (-1 < local_20) goto LAB_0405bf14;
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
  *(undefined4 *)(this + 0x1b0) = 0xffffff9c;
  cVar1 = handleBounceAndReportConsumption(this);
  SetProjectileAnimation(this);
  if (cVar1 != '\0') {
    nop();
  }
LAB_0405bf14:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagicbeansshotProjectile::OnCollideEntity(BoardEntity*) */

void MagicbeansshotProjectile::OnCollideEntity(BoardEntity *param_1)

{
  byte bVar1;
  byte bVar2;
  RtObject *this;
  MagicbeansshotProjectileProps *pMVar3;
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
  pMVar3 = Sexy::RtObject::Cast<MagicbeansshotProjectileProps>(this);
  BoardEntity::CalcGridPosition();
  if (local_54 == *(int *)(param_1 + 0x1b0)) {
    bVar2 = 0;
  }
  else {
    *(int *)(param_1 + 0x1b0) = local_54;
    puVar4 = (undefined8 *)Projectile::GetVelocity((Projectile *)param_1);
    uVar5 = *puVar4;
    local_48 = *(undefined4 *)(puVar4 + 1);
    local_50._4_4_ = (float)((ulong)uVar5 >> 0x20);
    fVar8 = ABS(local_50._4_4_);
    fVar6 = local_50._4_4_;
    local_50 = uVar5;
    if (fVar8 <= 0.5) {
      Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
      Sexy::SexyTransform2D::RotateRad(aSStack_30,-*(float *)(pMVar3 + 0x1e0));
      local_40[0] = Sexy::SexyMatrix3::operator*((SexyMatrix3 *)aSStack_30,(SexyVector3 *)&local_50)
      ;
      Sexy::SexyVector3::operator=((SexyVector3 *)&local_50,(SexyVector3 *)local_40);
      if (local_54 == 1) {
        fVar6 = (float)GrapeshotProjectile::determineBounceDirection(*(float *)(pMVar3 + 0x1e4));
        fVar6 = fVar6 * local_50._4_4_;
      }
      else if (local_54 == 3) {
        fVar6 = (float)GrapeshotProjectile::determineBounceDirection
                                 (1.0 - *(float *)(pMVar3 + 0x1e4));
        fVar6 = fVar6 * local_50._4_4_;
      }
      else {
        fVar6 = (float)GrapeshotProjectile::determineBounceDirection(0.5);
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
    FUN_0405a1b8(*(undefined4 *)(in_x1 + 0x18),*(undefined4 *)(in_x1 + 0x1c),
                 *(undefined4 *)(in_x1 + 0x20));
    SetProjectileAnimation((MagicbeansshotProjectile *)param_1);
    bVar1 = handleBounceAndReportConsumption((MagicbeansshotProjectile *)param_1);
    if (bVar1 != 0) {
      nop();
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

