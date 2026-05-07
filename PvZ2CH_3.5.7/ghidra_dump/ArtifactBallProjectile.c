// Class: ArtifactBallProjectile


/* ArtifactBallProjectile::~ArtifactBallProjectile() */

void __thiscall ArtifactBallProjectile::~ArtifactBallProjectile(ArtifactBallProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_066941d0;
  *(undefined ***)(this + 0x10) = &PTR__ArtifactBallProjectile_066943c0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to ArtifactBallProjectile::~ArtifactBallProjectile() */

void __thiscall ArtifactBallProjectile::~ArtifactBallProjectile(ArtifactBallProjectile *this)

{
  ~ArtifactBallProjectile(this + -0x10);
  return;
}


/* ArtifactBallProjectile::~ArtifactBallProjectile() */

void __thiscall ArtifactBallProjectile::~ArtifactBallProjectile(ArtifactBallProjectile *this)

{
  ~ArtifactBallProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ArtifactBallProjectile::~ArtifactBallProjectile() */

void __thiscall ArtifactBallProjectile::~ArtifactBallProjectile(ArtifactBallProjectile *this)

{
  ~ArtifactBallProjectile(this + -0x10);
  return;
}


/* ArtifactBallProjectile::ArtifactBallProjectile() */

void __thiscall ArtifactBallProjectile::ArtifactBallProjectile(ArtifactBallProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  this[0x1a5] = (ArtifactBallProjectile)0x1;
  *(undefined ***)this = &PTR_GetClass_066941d0;
  *(undefined ***)(this + 0x10) = &PTR__ArtifactBallProjectile_066943c0;
  return;
}


/* ArtifactBallProjectile::StaticNew() */

ArtifactBallProjectile * ArtifactBallProjectile::StaticNew(void)

{
  ArtifactBallProjectile *this;
  
  this = ::operator_new(0x1a8);
  ArtifactBallProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactBallProjectile::StaticClassInit() */

void ArtifactBallProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactBallProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_03738f2c,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactBallProjectile::StaticGetClass() */

long * ArtifactBallProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactBallProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactBallProjectile::GetClass() const */

long * ArtifactBallProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactBallProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactBallProjectile::moveThroughTime(float) */

void __thiscall ArtifactBallProjectile::moveThroughTime(ArtifactBallProjectile *this,float param_1)

{
  long lVar1;
  PopAnimRig *pPVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::moveThroughTime((Projectile *)this,param_1);
  if (this[0x1a5] == (ArtifactBallProjectile)0x0) {
    lVar1 = Projectile::GetVelocity((Projectile *)this);
    if (*(float *)(lVar1 + 4) < 0.0) {
      pPVar2 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
      std::string::string(asStack_40,"fly_up");
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
      PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
      std::string::~string(asStack_40);
      nop();
      this[0x1a5] = (ArtifactBallProjectile)0x1;
    }
  }
  else {
    lVar1 = Projectile::GetVelocity((Projectile *)this);
    if (0.0 <= *(float *)(lVar1 + 4)) {
      pPVar2 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
      std::string::string(asStack_40,"fly_down");
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
      PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
      std::string::~string(asStack_40);
      nop();
      this[0x1a5] = (ArtifactBallProjectile)0x0;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactBallProjectile::spawnBall(Sexy::Point const&) */

void __thiscall ArtifactBallProjectile::spawnBall(ArtifactBallProjectile *this,Point *param_1)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  GridItemBall *pGVar4;
  RtObject *this_00;
  Board *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Board::IsPitOfDoom(*(Board **)(gLawnApp + 0x9f0),param_1);
  if ((((cVar1 == '\0') &&
       (cVar1 = Board::IsSky(*(Board **)(gLawnApp + 0x9f0),param_1), cVar1 == '\0')) &&
      (cVar1 = Board::IsShallowWater(*(Board **)(gLawnApp + 0x9f0),param_1), cVar1 == '\0')) &&
     (((*(int *)param_1 != -1 && (*(int *)(param_1 + 4) != -1)) &&
      (lVar3 = FUN_03754d00(), lVar3 == 0)))) {
    pGVar4 = (GridItemBall *)FUN_03758984(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4));
    lVar3 = FUN_03754ec8(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4));
    if (pGVar4 == (GridItemBall *)0x0) {
      if (lVar3 == 0) {
        this_01 = *(Board **)(gLawnApp + 0x9f0);
        std::string::string(asStack_10,"ball");
        this_00 = (RtObject *)
                  Board::AddGridItem(this_01,asStack_10,*(int *)param_1,*(int *)(param_1 + 4),1);
        pGVar4 = Sexy::RtObject::Cast<GridItemBall>(this_00);
        std::string::~string(asStack_10);
        nop();
        FUN_03726e14(pGVar4 + 0x1b0);
        uVar2 = FUN_03723aa8(*(undefined4 *)(this + 0x24));
        FUN_03723aac(pGVar4 + 0x24,uVar2);
        GridItemBall::SetResetting(pGVar4);
      }
    }
    else {
      GridItemBall::ResetTimer(pGVar4);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactBallProjectile::spawnBall() */

void __thiscall ArtifactBallProjectile::spawnBall(ArtifactBallProjectile *this)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  iVar1 = BoardTransforms::BoardSpaceToGridX(*pfVar3);
  iVar2 = BoardTransforms::BoardSpaceToGridY(pfVar3[1]);
  Sexy::Point::Point(aPStack_10,iVar1,iVar2);
  spawnBall(this,aPStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactBallProjectile::handleImpact(BoardEntity*) */

void __thiscall
ArtifactBallProjectile::handleImpact(ArtifactBallProjectile *this,BoardEntity *param_1)

{
  spawnBall(this);
  Projectile::handleImpact((Projectile *)this,param_1);
  return;
}

