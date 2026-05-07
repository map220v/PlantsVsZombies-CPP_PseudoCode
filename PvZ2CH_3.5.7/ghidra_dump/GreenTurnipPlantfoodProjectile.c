// Class: GreenTurnipPlantfoodProjectile


/* GreenTurnipPlantfoodProjectile::radiateSplashDamage(BoardEntity*) */

void GreenTurnipPlantfoodProjectile::radiateSplashDamage(BoardEntity *param_1)

{
  if (param_1[0x1a6] == (BoardEntity)0x0) {
    return;
  }
  Projectile::radiateSplashDamage(param_1);
  return;
}


/* GreenTurnipPlantfoodProjectile::~GreenTurnipPlantfoodProjectile() */

void __thiscall
GreenTurnipPlantfoodProjectile::~GreenTurnipPlantfoodProjectile
          (GreenTurnipPlantfoodProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067ddca0;
  *(undefined ***)(this + 0x10) = &PTR__GreenTurnipPlantfoodProjectile_067dde90;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to GreenTurnipPlantfoodProjectile::~GreenTurnipPlantfoodProjectile() */

void __thiscall
GreenTurnipPlantfoodProjectile::~GreenTurnipPlantfoodProjectile
          (GreenTurnipPlantfoodProjectile *this)

{
  ~GreenTurnipPlantfoodProjectile(this + -0x10);
  return;
}


/* GreenTurnipPlantfoodProjectile::~GreenTurnipPlantfoodProjectile() */

void __thiscall
GreenTurnipPlantfoodProjectile::~GreenTurnipPlantfoodProjectile
          (GreenTurnipPlantfoodProjectile *this)

{
  ~GreenTurnipPlantfoodProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GreenTurnipPlantfoodProjectile::~GreenTurnipPlantfoodProjectile() */

void __thiscall
GreenTurnipPlantfoodProjectile::~GreenTurnipPlantfoodProjectile
          (GreenTurnipPlantfoodProjectile *this)

{
  ~GreenTurnipPlantfoodProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GreenTurnipPlantfoodProjectile::StaticClassInit() */

void GreenTurnipPlantfoodProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"GreenTurnipPlantfoodProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_040e1754,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GreenTurnipPlantfoodProjectile::StaticGetClass() */

long * GreenTurnipPlantfoodProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GreenTurnipPlantfoodProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GreenTurnipPlantfoodProjectile::GetClass() const */

long * GreenTurnipPlantfoodProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"GreenTurnipPlantfoodProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GreenTurnipPlantfoodProjectile::GreenTurnipPlantfoodProjectile() */

void __thiscall
GreenTurnipPlantfoodProjectile::GreenTurnipPlantfoodProjectile(GreenTurnipPlantfoodProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  this[0x1a5] = (GreenTurnipPlantfoodProjectile)0x0;
  this[0x1a6] = (GreenTurnipPlantfoodProjectile)0x0;
  *(undefined ***)this = &PTR_GetClass_067ddca0;
  *(undefined ***)(this + 0x10) = &PTR__GreenTurnipPlantfoodProjectile_067dde90;
  return;
}


/* GreenTurnipPlantfoodProjectile::StaticNew() */

GreenTurnipPlantfoodProjectile * GreenTurnipPlantfoodProjectile::StaticNew(void)

{
  GreenTurnipPlantfoodProjectile *this;
  
  this = ::operator_new(0x1a8);
  GreenTurnipPlantfoodProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GreenTurnipPlantfoodProjectile::PlayExplodeEffect() */

void __thiscall
GreenTurnipPlantfoodProjectile::PlayExplodeEffect(GreenTurnipPlantfoodProjectile *this)

{
  SexyVector3 *this_00;
  Effect_PopAnim *this_01;
  ResourceInfo *pRVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  string asStack_38 [8];
  RtWeakPtr aRStack_30 [8];
  Vec3 aVStack_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  uVar2 = 0;
  uVar3 = 0;
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3(aVStack_28,0.0,0.0,0.0);
  this_00 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
  local_18 = Sexy::SexyVector3::operator+(this_00,(SexyVector3 *)aVStack_28);
  local_14 = uVar2;
  local_10 = uVar3;
  this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_38,"POPANIM_EFFECTS_GREENTURNIP_EFFECT");
  GetPAMByName(asStack_38);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_30);
  Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar1,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  std::string::~string(asStack_38);
  nop();
  Effect_PopAnim::SetCentered(this_01,true);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_01,(SexyVector3 *)&local_18,500000)
  ;
  std::string::string((string *)aRStack_30,"r7");
  Effect_PopAnim::PlaySingleAnimation(this_01,aRStack_30,0);
  std::string::~string((string *)aRStack_30);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GreenTurnipPlantfoodProjectile::moveThroughTime(float) */

void __thiscall
GreenTurnipPlantfoodProjectile::moveThroughTime(GreenTurnipPlantfoodProjectile *this,float param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  float *pfVar4;
  float fVar5;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::moveThroughTime((Projectile *)this,param_1);
  iVar1 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8);
  lVar3 = Projectile::GetProps((Projectile *)this);
  fVar5 = *(float *)(lVar3 + 0x60);
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  if (((this[0x1a5] != (GreenTurnipPlantfoodProjectile)0x0) &&
      (this[0x1a6] == (GreenTurnipPlantfoodProjectile)0x0)) &&
     (pfVar4 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)this),
     (float)(int)((float)iVar2 * ((float)iVar1 - SQRT(fVar5)) + 200.0) < *pfVar4)) {
    this[0x1a6] = (GreenTurnipPlantfoodProjectile)0x1;
    (**(code **)(*(long *)this + 0x170))(this,0);
    std::string::string(asStack_10,"Play_CherryBomb");
    RealObject::PlayPositionalSound((RealObject *)this,asStack_10,0.0);
    std::string::~string(asStack_10);
    nop();
    PlayExplodeEffect(this);
    (**(code **)(*(long *)this + 0x48))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GreenTurnipPlantfoodProjectile::OnCollideRoof() */

void __thiscall GreenTurnipPlantfoodProjectile::OnCollideRoof(GreenTurnipPlantfoodProjectile *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::GetProps((Projectile *)this);
  BoardConstants::GRIDSQUARE_WIDTH();
  if (this[0x1a6] == (GreenTurnipPlantfoodProjectile)0x0) {
    this[0x1a6] = (GreenTurnipPlantfoodProjectile)0x1;
    if (this[0x1a5] != (GreenTurnipPlantfoodProjectile)0x0) {
      (**(code **)(*(long *)this + 0x170))(this,0);
      std::string::string(asStack_10,"Play_CherryBomb");
      RealObject::PlayPositionalSound((RealObject *)this,asStack_10,0.0);
      std::string::~string(asStack_10);
      nop();
      PlayExplodeEffect(this);
    }
    (**(code **)(*(long *)this + 0x48))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

