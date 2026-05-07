// Class: Projectile


/* Projectile::GetAnimRig() const */

void __thiscall Projectile::GetAnimRig(Projectile *this)

{
  Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x38));
  return;
}


/* Projectile::onDeflection(BoardEntity*) */

void Projectile::onDeflection(BoardEntity *param_1)

{
  return;
}


/* Projectile::NotifyDeflection(BoardEntity*) */

void Projectile::NotifyDeflection(BoardEntity *param_1)

{
  if (*(code **)(*(long *)param_1 + 0x1c0) != onDeflection) {
    (**(code **)(*(long *)param_1 + 0x1c0))();
  }
  return;
}


/* Projectile::GetVelocity() const */

Projectile * __thiscall Projectile::GetVelocity(Projectile *this)

{
  return this + 0x84;
}


/* Projectile::GetVelocityScale() const */

Projectile * __thiscall Projectile::GetVelocityScale(Projectile *this)

{
  return this + 0x9c;
}


/* Projectile::SetVelocity(Sexy::SexyVector3 const&) */

void __thiscall Projectile::SetVelocity(Projectile *this,SexyVector3 *param_1)

{
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x84),param_1);
  return;
}


/* Projectile::SetAcceleration(Sexy::SexyVector3 const&) */

void __thiscall Projectile::SetAcceleration(Projectile *this,SexyVector3 *param_1)

{
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x90),param_1);
  return;
}


/* Projectile::SetTarget(Sexy::RtWeakPtr<BoardEntity> const&) */

void __thiscall Projectile::SetTarget(Projectile *this,RtWeakPtr *param_1)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x108),param_1);
  return;
}


/* Projectile::getProps() const */

void __thiscall Projectile::getProps(Projectile *this)

{
  ResourceInfo *pRVar1;
  
  if (*(long *)(this + 0x58) != 0) {
    return;
  }
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x60));
  *(ResourceInfo **)(this + 0x58) = pRVar1;
  return;
}


/* Projectile::GetProps() const */

void __thiscall Projectile::GetProps(Projectile *this)

{
  ResourceInfo *pRVar1;
  
  if (*(long *)(this + 0x58) != 0) {
    return;
  }
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x60));
  *(ResourceInfo **)(this + 0x58) = pRVar1;
  return;
}


/* Projectile::OnHeadShot(BoardEntity*) */

void Projectile::OnHeadShot(BoardEntity *param_1)

{
  return;
}


/* Projectile::onProjectileConverted() */

void Projectile::onProjectileConverted(void)

{
  return;
}


/* Projectile::ignoreDeathBox() */

undefined8 Projectile::ignoreDeathBox(void)

{
  return 0;
}


/* Projectile::onSetInstigator(BoardEntity*) */

void Projectile::onSetInstigator(BoardEntity *param_1)

{
  return;
}


/* Projectile::onUpdate(float) */

void Projectile::onUpdate(float param_1)

{
  return;
}


/* Projectile::onPostUpdate() */

void Projectile::onPostUpdate(void)

{
  return;
}


/* Projectile::onProjectileInitialized() */

void Projectile::onProjectileInitialized(void)

{
  return;
}


/* Projectile::CalcRenderOrder() const */

undefined4 __thiscall Projectile::CalcRenderOrder(Projectile *this)

{
  return *(undefined4 *)(this + 0x50);
}


/* non-virtual thunk to Projectile::CalcRenderOrder() const */

void __thiscall Projectile::CalcRenderOrder(Projectile *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* Projectile::GetRenderOrder() const */

void __thiscall Projectile::GetRenderOrder(Projectile *this)

{
  if (*(code **)(*(long *)this + 400) == CalcRenderOrder) {
    CalcRenderOrder(this);
    return;
  }
  (**(code **)(*(long *)this + 400))();
  return;
}


/* Projectile::onSplashDamageHitEntity(BoardEntity*) */

void Projectile::onSplashDamageHitEntity(BoardEntity *param_1)

{
  return;
}


/* Projectile::SetPosition(Sexy::SexyVector3 const&) */

void __thiscall Projectile::SetPosition(Projectile *this,SexyVector3 *param_1)

{
  SetPosition(this,*(float *)param_1,*(float *)(param_1 + 4),*(float *)(param_1 + 8));
  return;
}


/* Projectile::GetTarget() */

void __thiscall Projectile::GetTarget(Projectile *this)

{
  Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x108));
  return;
}


/* Projectile::SetVelocityScale(Sexy::SexyVector3 const&) */

void __thiscall Projectile::SetVelocityScale(Projectile *this,SexyVector3 *param_1)

{
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x9c),param_1);
  return;
}


/* Projectile::SetCollisionRect(Sexy::TRect<float>) */

void __thiscall Projectile::SetCollisionRect(Projectile *this,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(this + 0x194) = *param_2;
  *(undefined8 *)(this + 0x19c) = uVar1;
  return;
}


/* Projectile::SetVelocity(float, float, float) */

void __thiscall Projectile::SetVelocity(Projectile *this,float param_1,float param_2,float param_3)

{
  *(float *)(this + 0x84) = param_1;
  *(float *)(this + 0x88) = param_2;
  *(float *)(this + 0x8c) = param_3;
  return;
}


/* Projectile::GetInstigator() const */

void __thiscall Projectile::GetInstigator(Projectile *this)

{
  Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x68));
  return;
}


/* Projectile::SetVelocityScale(float, float, float) */

void __thiscall
Projectile::SetVelocityScale(Projectile *this,float param_1,float param_2,float param_3)

{
  *(float *)(this + 0x9c) = param_1;
  *(float *)(this + 0xa0) = param_2;
  *(float *)(this + 0xa4) = param_3;
  return;
}


/* Projectile::SetAcceleration(float, float, float) */

void __thiscall
Projectile::SetAcceleration(Projectile *this,float param_1,float param_2,float param_3)

{
  *(float *)(this + 0x90) = param_1;
  *(float *)(this + 0x94) = param_2;
  *(float *)(this + 0x98) = param_3;
  return;
}


/* Projectile::GetPreviousPosition() const */

Projectile * __thiscall Projectile::GetPreviousPosition(Projectile *this)

{
  return this + 0x78;
}


/* Projectile::OnCollideRoof() */

undefined4 __thiscall Projectile::OnCollideRoof(Projectile *this)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = (**(code **)(*(long *)this + 0x118))();
  cVar1 = GameObject::IsDestroyed((GameObject *)this);
  if (cVar1 == '\0') {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  return uVar2;
}


/* Projectile::CollidesWithType(CollisionTypeFlags) const */

bool __thiscall Projectile::CollidesWithType(Projectile *this,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = operator&(param_2,*(undefined4 *)(this + 0x30));
  return iVar1 != 0;
}


/* Projectile::SnapToGround(bool) */

void __thiscall Projectile::SnapToGround(Projectile *this,bool param_1)

{
  SexyVector3 *pSVar1;
  float fVar2;
  
  pSVar1 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  fVar2 = (float)RealObject::CalcGroundZHeight((RealObject *)this,pSVar1);
  if ((!param_1) || (*(float *)(pSVar1 + 8) < fVar2)) {
    *(float *)(this + 0x20) = fVar2 + *(float *)(this + 0xd0);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Projectile::InitialSetPosition(float, float, float) */

void __thiscall
Projectile::InitialSetPosition(Projectile *this,float param_1,float param_2,float param_3)

{
  undefined4 uVar1;
  SexyVector3 *pSVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3(aVStack_18,param_1,param_2,param_3);
  pSVar2 = (SexyVector3 *)
           Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x18),(SexyVector3 *)aVStack_18);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x78),pSVar2);
  uVar1 = BoardTransforms::BoardSpaceToGridYKeepOnBoard(param_2);
  FUN_0434ad94(this + 0xa8,uVar1);
  *(undefined4 *)(this + 0xac) = uVar1;
  *(float *)(this + 0xd0) = param_3;
  uVar1 = Board::MakeRenderOrder(0x64960,uVar1,0);
  FUN_0434ada0(this + 0x50,uVar1);
  if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
    pfVar3 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    fVar5 = pfVar3[2];
    fVar4 = (float)Board::calculateRoofOffsetZ(*pfVar3);
    *(float *)(this + 0x18c) = fVar5 - fVar4;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Projectile::StaticClassInit() */

void Projectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"Projectile");
    (*pcVar2)(plVar1,asStack_10,FUN_0434dcec,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Projectile::StaticGetClass() */

long * Projectile::StaticGetClass(void)

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
  uVar2 = RealObject::StaticGetClass();
  (*pcVar3)(plVar1,"Projectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Projectile::GetClass() const */

long * Projectile::GetClass(void)

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
  uVar2 = RealObject::StaticGetClass();
  (*pcVar3)(plVar1,"Projectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Projectile::SetUpdateTimeOverride(float) */

void __thiscall Projectile::SetUpdateTimeOverride(Projectile *this,float param_1)

{
  *(float *)(this + 0x74) = param_1;
  return;
}


/* Projectile::SetPosition(float, float, float) */

void __thiscall Projectile::SetPosition(Projectile *this,float param_1,float param_2,float param_3)

{
  char cVar1;
  undefined4 uVar2;
  float fVar3;
  
  *(undefined4 *)(this + 0xac) = *(undefined4 *)(this + 0xa8);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x78),(SexyVector3 *)(this + 0x18));
  fVar3 = *(float *)(this + 0x1c);
  *(float *)(this + 0x1c) = param_2;
  *(float *)(this + 0x18) = param_1;
  *(float *)(this + 0x20) = param_3;
  if (fVar3 != param_2) {
    cVar1 = LawnApp::IsInModule(gLawnApp,1);
    if (cVar1 == '\0') {
      uVar2 = BoardTransforms::BoardSpaceToGridYKeepOnBoard(param_2);
    }
    else {
      uVar2 = BoardTransforms::BoardSpaceToGridYUnbounded(param_2);
    }
    FUN_0434ad94(this + 0xa8,uVar2);
    uVar2 = Board::MakeRenderOrder(0x64960,uVar2,0);
    FUN_0434ada0(this + 0x50,uVar2);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Projectile::ApplyRotationToVelocity(Sexy::SexyTransform2D const&) */

void Projectile::ApplyRotationToVelocity(SexyTransform2D *param_1)

{
  SexyMatrix3 *in_x1;
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18[0] = Sexy::SexyMatrix3::operator*(in_x1,(SexyVector3 *)(param_1 + 0x84));
  Sexy::SexyVector3::operator=((SexyVector3 *)(param_1 + 0x84),(SexyVector3 *)local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Projectile::IsLobbed() const */

bool __thiscall Projectile::IsLobbed(Projectile *this)

{
  long lVar1;
  
  lVar1 = AssetsManagerManifest::getAssets((AssetsManagerManifest *)this);
  return *(float *)(lVar1 + 8) != 0.0;
}


/* Projectile::updateGroundEffect() */

void __thiscall Projectile::updateGroundEffect(Projectile *this)

{
  char cVar1;
  SexyVector3 *pSVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_0434acdc(this[0x118]);
  if (cVar1 == '\0') {
    pSVar2 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    cVar1 = RealObject::IsOnWaterTile((RealObject *)this,pSVar2);
    if (((cVar1 == '\0') || (cVar1 = (**(code **)(*(long *)this + 0xa0))(this), cVar1 == '\0')) ||
       (uVar3 = 0, *(float *)(this + 0xd0) < *(float *)(pSVar2 + 8))) {
      uVar3 = 0xffffffff;
    }
    EntityComponent_GroundEffect::SetGroundEffect
              ((EntityComponent_GroundEffect *)(this + 0x110),this,uVar3,0);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Projectile::SetRotatedVelocity(float) */

void __thiscall Projectile::SetRotatedVelocity(Projectile *this,float param_1)

{
  float fVar1;
  float fVar2;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar1 = (float)FUN_0434ada8(*(undefined4 *)(this + 0xc4));
  fVar2 = cosf(fVar1);
  fVar1 = sinf(fVar1);
  EATextSquish::Vec3::Vec3(aVStack_18,fVar2 * param_1,-(fVar1 * param_1),0.0);
  SetVelocity(this,(SexyVector3 *)aVStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Projectile::RotateTowardTarget() */

void __thiscall Projectile::RotateTowardTarget(Projectile *this)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  SexyVector3 *pSVar1;
  DVec3 *this_01;
  SexyVector3 *this_02;
  float fVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)(**(code **)(*(long *)this + 0x1a0))();
  if (this_00 !=
      (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
       *)0x0) {
    pSVar1 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    this_01 = (DVec3 *)GetVelocity(this);
    this_02 = (SexyVector3 *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost(this_00);
    fVar2 = (float)FUN_0434af28(0xc1700000);
    uVar4 = (ulong)(uint)fVar2;
    uVar5 = 0;
    EATextSquish::Vec3::Vec3((Vec3 *)&local_18,0.0,fVar2,0.0);
    local_38 = Sexy::SexyVector3::operator+(this_02,(SexyVector3 *)&local_18);
    local_34 = (undefined4)uVar4;
    local_30 = uVar5;
    local_18 = Sexy::SexyVector3::operator-((SexyVector3 *)&local_38,pSVar1);
    local_14 = (undefined4)uVar4;
    local_10 = uVar5;
    uVar3 = Sexy::SexyVector3::Normalize((SexyVector3 *)&local_18);
    local_24 = (undefined4)uVar4;
    local_28 = uVar3;
    local_20 = uVar5;
    uVar5 = FUN_0434ada8(*(undefined4 *)(this + 0xc4));
    FUN_0434ae50(uVar3,uVar4,uVar5);
    FUN_0434adb0(this + 0xc4);
    fVar2 = (float)DVec3::getLength(this_01);
    SetRotatedVelocity(this,fVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Projectile::GetOrCreateAttachedBoardEntity(std::string const&) */

void __thiscall Projectile::GetOrCreateAttachedBoardEntity(Projectile *this,string *param_1)

{
  GameObjectDictionary::FindOrCreate((GameObjectDictionary *)(this + 0x150),param_1);
  return;
}


/* Projectile::GetAttachedBoardEntity(std::string) */

undefined8 __thiscall Projectile::GetAttachedBoardEntity(Projectile *this,string *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = GameObjectDictionary::Contains((string *)(this + 0x150));
  if (cVar1 != '\0') {
    uVar2 = GameObjectDictionary::FindOrCreate((GameObjectDictionary *)(this + 0x150),param_2);
    return uVar2;
  }
  return 0;
}


/* Projectile::clearAttachedEffects() */

void __thiscall Projectile::clearAttachedEffects(Projectile *this)

{
  AttachedEffectManager::Clear((AttachedEffectManager *)(this + 0x130));
  return;
}


/* Projectile::GetAttachedEffect(std::string const&) */

undefined8 __thiscall Projectile::GetAttachedEffect(Projectile *this,string *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = GameObjectDictionary::Contains((string *)(this + 0x130));
  if (cVar1 != '\0') {
    uVar2 = GameObjectDictionary::FindOrCreate((GameObjectDictionary *)(this + 0x130),param_1);
    return uVar2;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Projectile::DetachAttachedEffect(char const*) */

void __thiscall Projectile::DetachAttachedEffect(Projectile *this,char *param_1)

{
  char cVar1;
  CthulhuSubSystem *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,param_1);
  this_00 = (CthulhuSubSystem *)GetAttachedEffect(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  cVar1 = CthulhuSubSystem::Update(this_00);
  if (cVar1 != '\0') {
    AttachedEffect::Detach((AttachedEffect *)this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Projectile::RemoveAttachedEffect(char const*) */

void __thiscall Projectile::RemoveAttachedEffect(Projectile *this,char *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,param_1);
  GameObjectDictionary::Remove((string *)(this + 0x130));
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Projectile::LaunchAt(Sexy::SexyVector3 const&, float, float) */

void __thiscall
Projectile::LaunchAt(Projectile *this,SexyVector3 *param_1,float param_2,float param_3)

{
  undefined8 *puVar1;
  undefined8 local_38;
  undefined4 local_30;
  DVec3 aDStack_28 [16];
  DVec3 aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar1 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  local_38 = *puVar1;
  local_30 = *(undefined4 *)(puVar1 + 1);
  DVec3::DVec3(aDStack_28);
  DVec3::DVec3(aDStack_18);
  CalculateTossVelocity
            ((SexyVector3 *)&local_38,param_1,param_2,param_3,(SexyVector3 *)aDStack_28,
             (SexyVector3 *)aDStack_18);
  SetVelocity(this,(SexyVector3 *)aDStack_28);
  SetAcceleration(this,(SexyVector3 *)aDStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Projectile::LaunchAtFromProps(Sexy::SexyVector3 const&, PultProjectileProps const&) */

void __thiscall
Projectile::LaunchAtFromProps(Projectile *this,SexyVector3 *param_1,PultProjectileProps *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *(float *)(param_2 + 0x18);
  fVar1 = (float)Sexy::Rand(fVar4 * *(float *)(param_2 + 0x1c));
  fVar3 = *(float *)(param_2 + 0x10);
  fVar2 = (float)Sexy::Rand(fVar3 * *(float *)(param_2 + 0x14));
  LaunchAt(this,param_1,fVar1 + fVar4,fVar2 + fVar3);
  return;
}


/* Projectile::SetPaused(bool) */

void __thiscall Projectile::SetPaused(Projectile *this,bool param_1)

{
  SetFlag<DebugLogFlags>(this + 0x100,1,param_1);
  return;
}


/* Projectile::SetShadow(bool) */

void __thiscall Projectile::SetShadow(Projectile *this,bool param_1)

{
  SetFlag<DebugLogFlags>(this + 0x100,4,!param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Projectile::SetInstigator(BoardEntity*) */

void __thiscall Projectile::SetInstigator(Projectile *this,BoardEntity *param_1)

{
  undefined4 uVar1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x68),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  if (param_1 != (BoardEntity *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x68),(RtWeakPtrBase *)a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
    uVar1 = FUN_0434ace0(*(undefined4 *)(param_1 + 0x24));
    *(undefined4 *)(this + 0x24) = uVar1;
    uVar1 = FUN_0434ace8(*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(this + 0x70) = uVar1;
  }
  if (*(code **)(*(long *)this + 0x140) != onSetInstigator) {
    (**(code **)(*(long *)this + 0x140))(this,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Projectile::AddAttachedEffect(char const*, char const*, char const*, Sexy::SexyVector3 const&,
   int, bool, bool, AnimSelectionMethod) */

void __thiscall
Projectile::AddAttachedEffect
          (Projectile *this,char *param_1,char *param_2,char *param_3,undefined8 param_4,
          undefined4 param_5,char param_6,AttachedEffect param_7,undefined4 param_9)

{
  AttachedEffect *this_00;
  PopAnim *pPVar1;
  long lVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,param_1);
  this_00 = (AttachedEffect *)
            GameObjectDictionary::FindOrCreate((GameObjectDictionary *)(this + 0x130),asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_18,param_2);
  GetPAMByName(asStack_18);
  pPVar1 = (PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  AttachedEffect::InitializeWithAnimation(this_00,pPVar1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  std::string::~string(asStack_18);
  nop();
  if (param_6 == '\0') {
    std::string::string(asStack_10,param_3);
    AttachedEffect::PlayAnimLooped(this_00,asStack_10,param_9);
    std::string::~string(asStack_10);
    nop();
  }
  else {
    std::string::string(asStack_10,param_3);
    AttachedEffect::PlayAnimAndDestroy(this_00,asStack_10,param_9);
    std::string::~string(asStack_10);
    nop();
  }
  (**(code **)(*(long *)this_00 + 0x20))(this_00,this,param_4,param_5);
  lVar2 = *(long *)this;
  this_00[0x3c] = param_7;
  (**(code **)(lVar2 + 0x1d0))(this,this_00,param_7);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* Projectile::GetCollisionRect() const */

void Projectile::GetCollisionRect(void)

{
  Projectile *in_x0;
  long lVar1;
  TRect<float> *in_x8;
  
  if ((*(float *)(in_x0 + 0x19c) != 0.0) && (*(float *)(in_x0 + 0x1a0) != 0.0)) {
    Sexy::TRect<float>::TRect(in_x8,(TRect *)(in_x0 + 0x194));
    return;
  }
  lVar1 = GetProps(in_x0);
  Sexy::TRect<float>::TRect(in_x8,(TRect *)(lVar1 + 0x120));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Projectile::CalcCollisionRectBoardSpace() const */

void Projectile::CalcCollisionRectBoardSpace(void)

{
  char cVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  float *pfVar2;
  Insets *in_x8;
  float fVar3;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = CardGameUtils::IsPlayingCardGame();
  if ((cVar1 == '\0') && (cVar1 = NewPVPUtils::IsPlayingNewPVP(), cVar1 == '\0')) {
    fVar3 = 1.0;
  }
  else {
    fVar3 = *(float *)(in_x0 + 0xc0);
  }
  GetCollisionRect();
  local_18 = fVar3 * local_18;
  local_14 = fVar3 * local_14;
  local_10 = fVar3 * local_10;
  local_c = fVar3 * local_c;
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(in_x0);
  Sexy::TRect<float>::Offset((TRect<float> *)&local_18,*pfVar2,pfVar2[1] - pfVar2[2]);
  Sexy::Insets::Insets(in_x8,(int)local_18,(int)local_14,(int)local_10,(int)local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Projectile::calcCollisionRectBoardSpace(Sexy::SexyVector3 const&) const */

void Projectile::calcCollisionRectBoardSpace(SexyVector3 *param_1)

{
  char cVar1;
  float *in_x1;
  TRect<float> *in_x8;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  cVar1 = CardGameUtils::IsPlayingCardGame();
  if (cVar1 == '\0') {
    cVar1 = NewPVPUtils::IsPlayingNewPVP();
    fVar5 = 1.0;
    if (cVar1 == '\0') goto LAB_0434be00;
  }
  fVar5 = *(float *)(param_1 + 0xc0);
LAB_0434be00:
  GetCollisionRect();
  fVar4 = in_x1[1];
  fVar3 = in_x1[2];
  fVar2 = *in_x1;
  *(float *)in_x8 = *(float *)in_x8 * fVar5;
  *(float *)(in_x8 + 4) = *(float *)(in_x8 + 4) * fVar5;
  *(float *)(in_x8 + 8) = *(float *)(in_x8 + 8) * fVar5;
  *(float *)(in_x8 + 0xc) = *(float *)(in_x8 + 0xc) * fVar5;
  Sexy::TRect<float>::Offset(in_x8,fVar2,fVar4 - fVar3);
  return;
}


/* Projectile::IsHeadShot() const */

undefined1 __thiscall Projectile::IsHeadShot(Projectile *this)

{
  long lVar1;
  
  lVar1 = GetProps(this);
  return *(undefined1 *)(lVar1 + 0x6f);
}


/* Projectile::IsSkipAdditionalAngularVelocity() */

undefined1 __thiscall Projectile::IsSkipAdditionalAngularVelocity(Projectile *this)

{
  long lVar1;
  
  lVar1 = GetProps(this);
  return *(undefined1 *)(lVar1 + 0xe0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Projectile::moveThroughTime(float) */

void __thiscall Projectile::moveThroughTime(Projectile *this,float param_1)

{
  bool bVar1;
  long lVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  undefined8 local_18;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ProjectileHelpers::Integrate(this,param_1);
  lVar2 = GetProps(this);
  if (*(char *)(lVar2 + 0x6e) == '\0') {
    fVar4 = (float)FUN_0434ada8(*(undefined4 *)(this + 0xc4));
    fVar5 = (float)FUN_0434adac(*(undefined4 *)(this + 0xcc));
    FUN_0434adb0(fVar4 + param_1 * fVar5,this + 0xc4);
    bVar1 = TestFlag<VaseFlags>(*(undefined4 *)(this + 0x100),0x10);
  }
  else {
    pfVar3 = (float *)GetVelocity(this);
    fVar4 = atan2f(pfVar3[2],*pfVar3);
    FUN_0434adb0(fVar4 + *(float *)(this + 200),this + 0xc4);
    bVar1 = TestFlag<VaseFlags>(*(undefined4 *)(this + 0x100),0x10);
  }
  if (bVar1) {
    (**(code **)(*(long *)this + 0xa8))(this,0);
  }
  if ((this[0x189] != (Projectile)0x0) && (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0'))
  {
    pfVar3 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    local_18 = *(undefined8 *)pfVar3;
    local_10 = pfVar3[2];
    local_10 = (float)Board::calculateRoofOffsetZ(*pfVar3);
    local_10 = local_10 + *(float *)(this + 0x18c);
    (**(code **)(*(long *)this + 0x78))(this,&local_18);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* Projectile::calcRandomSplatOffset(Sexy::SexyVector2&) */

void __thiscall Projectile::calcRandomSplatOffset(Projectile *this,SexyVector2 *param_1)

{
  long lVar1;
  ValueRange *pVVar2;
  float fVar3;
  
  lVar1 = getProps(this);
  pVVar2 = (ValueRange *)FUN_0434ae10(*(undefined8 *)(lVar1 + 0x150),0);
  fVar3 = (float)ValueRange::GetRandomValue(pVVar2);
  *(float *)param_1 = fVar3 + gCheat_X;
  lVar1 = getProps(this);
  pVVar2 = (ValueRange *)FUN_0434ae10(*(undefined8 *)(lVar1 + 0x150),1);
  fVar3 = (float)ValueRange::GetRandomValue(pVVar2);
  *(float *)(param_1 + 4) = fVar3 + gCheat_Y;
  return;
}


/* Projectile::getImpactPam() */

void Projectile::getImpactPam(void)

{
  Projectile *in_x0;
  
  getProps(in_x0);
  FUN_05475d88();
  return;
}


/* Projectile::GetDamageAmount() */

float __thiscall Projectile::GetDamageAmount(Projectile *this)

{
  float fVar1;
  
  getProps(this);
  fVar1 = (float)FUN_0434adc4(*(undefined4 *)(this + 0x170),*(undefined4 *)(this + 0x17c),
                              *(undefined4 *)(this + 0x180),*(undefined4 *)(this + 0x184));
  return fVar1 * *(float *)(this + 0xd8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Projectile::onDraw(Sexy::Graphics*) */

void Projectile::onDraw(Graphics *param_1)

{
  RtMixedPtrBase *this;
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ResourceInfo *this_00;
  long lVar5;
  Image *pIVar6;
  Graphics *in_x1;
  undefined1 in_w4;
  undefined1 uVar7;
  Insets *pIVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 local_80;
  undefined4 local_7c;
  GraphicsAutoState aGStack_78 [8];
  Insets aIStack_70 [16];
  FastCurve aFStack_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  float fStack_3c;
  undefined8 uStack_38;
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = FUN_0434b98c(*(undefined4 *)(param_1 + 0x28));
  if (cVar2 == '\0') {
    this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(param_1 + 0x38));
    (**(code **)(**(long **)(gLawnApp + 0x9f0) + 0xd0))(&local_80,*(long **)(gLawnApp + 0x9f0));
    iVar3 = FUN_0434af38(local_80);
    fVar11 = *(float *)(param_1 + 0x1c);
    fVar14 = *(float *)(param_1 + 0x20);
    fVar15 = (float)iVar3 + *(float *)(param_1 + 0x18);
    iVar3 = FUN_0434af38(local_7c);
    fVar11 = (fVar11 - fVar14) + (float)iVar3;
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_78,in_x1);
    (**(code **)(*(long *)param_1 + 0xf8))(param_1);
    lVar5 = getProps((Projectile *)param_1);
    Sexy::Color::Color((Color *)&local_40,1);
    cVar2 = Sexy::TRect<int>::operator!=((TRect<int> *)(lVar5 + 0x110),(TRect *)&local_40);
    if (cVar2 != '\0') {
      Sexy::Graphics::SetColorizeImages(in_x1,true);
      if (this_00 != (ResourceInfo *)0x0) {
        lVar5 = getProps((Projectile *)param_1);
        PopAnimRig::SetPAMColor((PopAnimRig *)this_00,(Color *)(lVar5 + 0x110));
      }
      lVar5 = getProps((Projectile *)param_1);
      Sexy::Graphics::SetColor(in_x1,(Color *)(lVar5 + 0x110));
    }
    this = (RtMixedPtrBase *)(param_1 + 0xb8);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this);
    if (cVar2 != '\0') {
      fVar14 = -1.0;
      pIVar6 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)this);
      iVar3 = Sexy::Image::GetCelWidth(pIVar6);
      pIVar6 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)this);
      iVar4 = Sexy::Image::GetCelHeight(pIVar6);
      Sexy::Insets::Insets((Insets *)&local_50,0,0,iVar3,iVar4);
      bVar1 = *(float *)(param_1 + 0x9c) >= 0.0;
      if (param_1[0xd4] == (Graphics)0x0) {
        bVar1 = *(float *)(param_1 + 0x9c) < 0.0;
      }
      if (!bVar1) {
        fVar14 = 1.0;
      }
      if (param_1[0x1a4] == (Graphics)0x0) {
        fVar9 = (float)FUN_0434af28(fVar15);
        fVar16 = *(float *)(in_x1 + 0x20);
        fVar12 = *(float *)(in_x1 + 0x18);
        fVar10 = (float)FUN_0434af28(fVar11);
        fVar13 = *(float *)(in_x1 + 0x24);
        fVar17 = *(float *)(in_x1 + 0x1c);
        Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
        TodScaleRotateTransformMatrix
                  ((SexyMatrix3 *)aSStack_30,(float)(int)((fVar9 - fVar16) * fVar12) + fVar16,
                   (float)(int)((fVar10 - fVar13) * fVar17) + fVar13,*(float *)(param_1 + 0xc4),
                   *(float *)(param_1 + 0xc0) * *(float *)(in_x1 + 0x18) * fVar14,
                   *(float *)(param_1 + 0xc0) * *(float *)(in_x1 + 0x1c));
        pIVar6 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)this);
        Sexy::Color::Color((Color *)&local_40,1);
      }
      else {
        fVar12 = *(float *)(in_x1 + 0x20);
        fVar9 = (float)FUN_0434af28(fVar15);
        fVar16 = *(float *)(in_x1 + 0x18);
        fVar17 = *(float *)(in_x1 + 0x24);
        fVar10 = (float)FUN_0434af28(fVar11);
        fVar13 = *(float *)(in_x1 + 0x1c);
        Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
        Sexy::Insets::Insets((Insets *)&local_40,0x48,0xe6,0xea,0xff);
        TodScaleRotateTransformMatrix
                  ((SexyMatrix3 *)aSStack_30,fVar12 + 20.0 + (float)(int)((fVar9 - fVar12) * fVar16)
                   ,fVar17 + -20.0 + (float)(int)((fVar10 - fVar17) * fVar13),
                   *(float *)(param_1 + 0xc4),
                   *(float *)(param_1 + 0xc0) * *(float *)(in_x1 + 0x18) * fVar14,
                   *(float *)(param_1 + 0xc0) * *(float *)(in_x1 + 0x1c));
        pIVar6 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)this);
      }
      pIVar8 = (Insets *)&local_40;
      TodBltMatrix(in_x1,pIVar6,(SexyMatrix3 *)aSStack_30,(TRect *)(in_x1 + 0x28),(Color *)&local_40
                   ,*(int *)(in_x1 + 0x78),(TRect *)&local_50);
      in_w4 = SUB81(pIVar8,0);
    }
    if (this_00 != (ResourceInfo *)0x0) {
      fVar14 = -1.0;
      if (param_1[0xd4] == (Graphics)0x0) {
        fVar14 = 1.0;
      }
      fVar9 = *(float *)(param_1 + 0x40);
      iVar3 = FUN_0434af38(local_80);
      fVar10 = *(float *)(param_1 + 0x44);
      fVar15 = (fVar15 + fVar9 * fVar14) - (float)iVar3;
      iVar3 = FUN_0434af38(local_7c);
      fVar11 = (fVar11 + fVar10) - (float)iVar3;
      if (param_1[0x1a4] == (Graphics)0x0) {
        fVar15 = (float)FUN_0434af28(fVar15);
        fVar9 = *(float *)(in_x1 + 0x20);
        fVar10 = *(float *)(in_x1 + 0x18);
        fVar11 = (float)FUN_0434af28(fVar11);
        Sexy::FastCurve::SetOutRange
                  (aFStack_60,(float)(int)((fVar15 - fVar9) * fVar10) + fVar9,
                   (float)(int)((fVar11 - *(float *)(in_x1 + 0x24)) * *(float *)(in_x1 + 0x1c)) +
                   *(float *)(in_x1 + 0x24));
        fVar15 = *(float *)(param_1 + 0xc0);
        fVar9 = *(float *)(param_1 + 0xc4);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_50,fVar14 * fVar15,fVar15);
        fVar11 = (float)FUN_0434af28(0xbf800000);
        local_40 = Sexy::SexyVector2::operator*((SexyVector2 *)(param_1 + 0x40),fVar11);
        fStack_3c = fVar15;
        Sexy::SexyTransform2D::CreateTransformWithPivot
                  ((SexyTransform2D *)aFStack_60,(SexyVector2 *)&local_50,fVar9,
                   (SexyVector2 *)&local_40,(SexyVector2 *)0x0,(bool)in_w4);
        PopAnimRig::Draw((PopAnimRig *)this_00,in_x1,aSStack_30);
      }
      else {
        uVar7 = 0xff;
        Sexy::Insets::Insets(aIStack_70,0x48,0xe6,0xea,0xff);
        fVar10 = *(float *)(in_x1 + 0x20);
        fVar15 = (float)FUN_0434af28(fVar15);
        fVar17 = *(float *)(in_x1 + 0x18);
        fVar9 = *(float *)(in_x1 + 0x24);
        fVar11 = (float)FUN_0434af28(fVar11);
        Sexy::FastCurve::SetOutRange
                  (aFStack_60,fVar10 + 20.0 + (float)(int)((fVar15 - fVar10) * fVar17),
                   fVar9 + -20.0 + (float)(int)((fVar11 - fVar9) * *(float *)(in_x1 + 0x1c)));
        fVar15 = *(float *)(param_1 + 0xc0);
        fVar9 = *(float *)(param_1 + 0xc4);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_50,fVar14 * fVar15,fVar15);
        fVar11 = (float)FUN_0434af28(0xbf800000);
        local_40 = Sexy::SexyVector2::operator*((SexyVector2 *)(param_1 + 0x40),fVar11);
        fStack_3c = fVar15;
        Sexy::SexyTransform2D::CreateTransformWithPivot
                  ((SexyTransform2D *)aFStack_60,(SexyVector2 *)&local_50,fVar9,
                   (SexyVector2 *)&local_40,(SexyVector2 *)0x0,(bool)uVar7);
        PopAnimRig::GetPAMColor();
        Sexy::Insets::Insets((Insets *)&local_50,(Insets *)aFStack_60);
        Sexy::Color::operator*((Color *)&local_50,(Color *)aIStack_70);
        local_50 = CONCAT44(fStack_3c,local_40);
        uStack_48 = uStack_38;
        PopAnimRig::SetPAMColor((PopAnimRig *)this_00,(Color *)&local_50);
        PopAnimRig::Draw((PopAnimRig *)this_00,in_x1,aSStack_30);
        PopAnimRig::SetPAMColor((PopAnimRig *)this_00,(Color *)aFStack_60);
      }
    }
    lVar5 = getProps((Projectile *)param_1);
    Sexy::Color::Color((Color *)&local_40,1);
    cVar2 = Sexy::TRect<int>::operator!=((TRect<int> *)(lVar5 + 0x110),(TRect *)&local_40);
    if (cVar2 == '\0') {
      Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_78);
    }
    else {
      Sexy::Graphics::SetColorizeImages(in_x1,false);
      Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_78);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Projectile::playSound(BoardEntity*) */

void __thiscall Projectile::playSound(Projectile *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = getProps(this);
  bVar1 = TestFlag<VaseFlags>(*(undefined4 *)(this + 0x100),8);
  if ((bVar1) || (cVar2 = FUN_0434b994(*(undefined4 *)(param_1 + 0x70)), cVar2 == '\0')) {
    cVar2 = FUN_0547419c((string *)(lVar4 + 0x130));
    if (cVar2 == '\0') {
      if ((param_1 == (BoardEntity *)0x0) ||
         (bVar1 = Sexy::RtObject::IsA<GridItemArmrack>((RtObject *)param_1), !bVar1)) {
        RealObject::PlayPositionalSound
                  ((RealObject *)param_1,(string *)(lVar4 + 0x130),*(float *)(lVar4 + 0x138));
      }
      else {
        iVar3 = Sexy::Rand(3);
        Sexy::StrFormat("Play_Zomb_Kongfu_Armrack_Hit%d",asStack_10,(ulong)(iVar3 + 1));
        RealObject::PlayPositionalSound((RealObject *)param_1,asStack_10,0.0);
        std::string::~string(asStack_10);
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
/* Projectile::SetAttachedPAM(Sexy::PopAnim*, Sexy::SexyVector2) */

void Projectile::SetAttachedPAM
               (undefined4 param_1_00,undefined4 param_2,Projectile *param_1,PopAnim *param_4)

{
  RtMixedPtrBase *this;
  char cVar1;
  long lVar2;
  char *pcVar3;
  RtClass *pRVar4;
  PopAnimRig *pPVar5;
  long *plVar6;
  string asStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  this = (RtMixedPtrBase *)(param_1 + 0x38);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this);
  if (cVar1 != '\0') {
    plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this)
    ;
    (**(code **)(*plVar6 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this);
  if (param_4 != (PopAnim *)0x0) {
    std::string::string(asStack_48,"PopAnimRig");
    nop();
    lVar2 = getProps(param_1);
    lVar2 = FUN_05474178(lVar2 + 0xf0);
    if (lVar2 != 0) {
      lVar2 = getProps(param_1);
      thunk_FUN_05475e00(asStack_48,lVar2 + 0xf0);
    }
    pcVar3 = (char *)FUN_0547429c(asStack_48);
    pRVar4 = (RtClass *)Sexy::RtClass::StaticGetClassNamed(pcVar3);
    pPVar5 = (PopAnimRig *)PopAnimRig::CreateRig(param_4,pRVar4);
    lVar2 = getProps(param_1);
    lVar2 = FUN_05474178(lVar2 + 0x100);
    if (lVar2 != 0) {
      lVar2 = getProps(param_1);
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
      PopAnimRig::PlayAndContinue(pPVar5,lVar2 + 0x100,0,aDStack_38);
    }
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)this,(RtWeakPtrBase *)aRStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    *(ulong *)(param_1 + 0x40) = CONCAT44(param_2,param_1_00);
    std::string::~string(asStack_48);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Projectile::handleImpact(BoardEntity*) */

void __thiscall Projectile::handleImpact(Projectile *this,BoardEntity *param_1)

{
  int iVar1;
  char cVar2;
  long lVar3;
  float *pfVar4;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar5;
  long lVar6;
  char *__s;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  string asStack_30 [8];
  RtMixedPtrBase aRStack_28 [8];
  float local_20;
  float local_1c;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x170))();
  lVar3 = getProps(this);
  (**(code **)(*(long *)this + 0x180))(asStack_30,this);
  cVar2 = FUN_0547419c(asStack_30);
  if (cVar2 == '\0') {
    GetPAMByName(asStack_30);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_28);
    if (cVar2 != '\0') {
      ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                ((ResistenceValueInfo *)&local_20);
      calcRandomSplatOffset(this,(SexyVector2 *)&local_20);
      if ((param_1 == (BoardEntity *)0x0) || (*(char *)(lVar3 + 0x6d) == '\0')) {
        fVar9 = local_20 + *(float *)(this + 0x18);
        fVar8 = (local_1c + *(float *)(this + 0x1c)) - *(float *)(this + 0x20);
      }
      else {
        pfVar4 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)param_1);
        fVar9 = local_20 + *pfVar4;
        fVar8 = (local_1c + pfVar4[1]) - pfVar4[2];
      }
      cVar2 = CardGameUtils::IsPlayingCardGame();
      if ((cVar2 == '\0') && (cVar2 = NewPVPUtils::IsPlayingNewPVP(), cVar2 == '\0')) {
        uVar7 = 0x3f800000;
      }
      else {
        uVar7 = *(undefined4 *)(this + 0xc0);
      }
      this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_28);
      Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar5,(RtClass *)0x0);
      Effect_PopAnim::SetCentered(this_00,true);
      (**(code **)(*(long *)this_00 + 0x80))(uVar7,this_00);
      EATextSquish::Vec3::Vec3(aVStack_18,fVar9,fVar8,0.0);
      StandaloneEffect::SetBoardSpaceOrigin
                ((StandaloneEffect *)this_00,(SexyVector3 *)aVStack_18,-1);
      FUN_0434ad84(this_00 + 0x1c,*(int *)(this + 0x50) + 1);
      lVar6 = getProps(this);
      __s = (char *)FUN_0547429c(lVar6 + 0x148);
      std::string::string((string *)aVStack_18,__s);
      Effect_PopAnim::PlaySingleAnimation(this_00,aVStack_18,2);
      std::string::~string((string *)aVStack_18);
      nop();
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  }
  if (((*(int *)(this + 0x4c) < 1) ||
      (iVar1 = *(int *)(this + 0x4c) + -1, *(int *)(this + 0x4c) = iVar1, iVar1 == 0)) &&
     (cVar2 = *(char *)(lVar3 + 0x65), cVar2 != '\0')) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  else {
    cVar2 = '\0';
  }
  std::string::~string(asStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Projectile::CreateCriticalEffect() */

void __thiscall Projectile::CreateCriticalEffect(Projectile *this)

{
  StandaloneEffect *this_00;
  SexyVector3 *pSVar1;
  Effect_PopAnim *pEVar2;
  ResourceInfo *pRVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  this_00 = (StandaloneEffect *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  pSVar1 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  StandaloneEffect::SetBoardSpaceOrigin(this_00,pSVar1,900000);
  pEVar2 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  std::string::string(asStack_18,"POPANIM_EFFECTS_HEADSHOT");
  GetPAMByName(asStack_18);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_10);
  Effect_PopAnim::CreatePopAnimRig(pEVar2,(PopAnim *)pRVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  nop();
  pEVar2 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Effect_PopAnim::SetCentered(pEVar2,true);
  pEVar2 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  std::string::string((string *)aRStack_10,"animation");
  Effect_PopAnim::PlaySingleAnimation(pEVar2,aRStack_10,0);
  std::string::~string((string *)aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Projectile::CalcSweptCollisionRectBoardSpace() const */

void Projectile::CalcSweptCollisionRectBoardSpace(void)

{
  SexyVector3 *in_x0;
  Insets *in_x8;
  TRect aTStack_38 [32];
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  calcCollisionRectBoardSpace(in_x0);
  calcCollisionRectBoardSpace(in_x0);
  Sexy::TRect<float>::Union(aTStack_38);
  Sexy::Insets::Insets(in_x8,(int)local_18,(int)local_14,(int)local_10,(int)local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Projectile::Projectile() */

void __thiscall Projectile::Projectile(Projectile *this)

{
  RealObject::RealObject((RealObject *)this);
  *(undefined ***)this = &PTR_GetClass_06833b50;
  *(undefined ***)(this + 0x10) = &PTR__Projectile_06833d40;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x38));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x40));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x60));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x68));
  DVec3::DVec3((DVec3 *)(this + 0x78));
  DVec3::DVec3((DVec3 *)(this + 0x84));
  DVec3::DVec3((DVec3 *)(this + 0x90));
  DVec3::DVec3((DVec3 *)(this + 0x9c));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xb8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x108));
  EntityComponent_GroundEffect::EntityComponent_GroundEffect
            ((EntityComponent_GroundEffect *)(this + 0x110));
  AttachedEffectManager::AttachedEffectManager((AttachedEffectManager *)(this + 0x130));
  AttachedBoardEntityManager::AttachedBoardEntityManager
            ((AttachedBoardEntityManager *)(this + 0x150));
  *(undefined4 *)(this + 0x184) = 0x3f800000;
  Sexy::SexyVector4::SexyVector4((SexyVector4 *)(this + 0x194));
  *(undefined8 *)(this + 0x58) = 0;
  this[0xd5] = (Projectile)0x1;
  this[0x189] = (Projectile)0x0;
  *(undefined4 *)(this + 0x70) = 1;
  this[400] = (Projectile)0x0;
  this[0x191] = (Projectile)0x0;
  this[0x1a4] = (Projectile)0x0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0x18c) = 0;
  return;
}


/* Projectile::StaticNew() */

Projectile * Projectile::StaticNew(void)

{
  Projectile *this;
  
  this = ::operator_new(0x1a8);
  Projectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Projectile::onDrawShadow(Sexy::Graphics*) */

void __thiscall Projectile::onDrawShadow(Projectile *this,Graphics *param_1)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  Image *this_00;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 local_58;
  undefined4 local_54;
  Insets aIStack_50 [16];
  Color aCStack_40 [16];
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  uVar1 = *(undefined4 *)(this + 0x28);
  local_8 = ___stack_chk_guard;
  cVar2 = FUN_0434b98c(uVar1);
  if ((((cVar2 == '\0') && (bVar3 = TestFlag<VaseFlags>(uVar1,1), !bVar3)) &&
      (bVar3 = TestFlag<VaseFlags>(*(undefined4 *)(this + 0x100),4), !bVar3)) &&
     (this_00 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                   ((CachedResourcePtr<Sexy::Image> *)&DAT_06afbd88),
     this_00 != (Image *)0x0)) {
    fVar6 = *(float *)(this + 0x20);
    if (200.0 < fVar6) {
      if ((800.0 <= fVar6) || (fVar6 = (200.0 - fVar6) * 0.0016666667 + 1.0, fVar6 <= 0.01))
      goto LAB_0434d4f0;
    }
    else {
      fVar6 = 1.0;
    }
    iVar4 = Sexy::Image::GetCelWidth(this_00);
    iVar5 = Sexy::Image::GetCelHeight(this_00);
    Sexy::Insets::Insets(aIStack_50,0,0,iVar4,iVar5);
    (**(code **)(**(long **)(gLawnApp + 0x9f0) + 0xd0))(&local_58,*(long **)(gLawnApp + 0x9f0));
    fVar12 = *(float *)(this + 0x18);
    iVar4 = FUN_0434af38(local_58);
    fVar9 = (float)iVar4 + fVar12;
    iVar4 = FUN_0434af38(local_54);
    fVar11 = (float)iVar4 + *(float *)(this + 0x1c);
    if (this[0x1a4] != (Projectile)0x0) {
      fVar9 = fVar9 + 20.0;
    }
    if ((*(long *)(gLawnApp + 0x9f0) != 0) &&
       (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0')) {
      fVar12 = (float)Board::calculateRoofOffsetZ(fVar12);
      fVar11 = fVar11 - fVar12;
    }
    fVar9 = (float)FUN_0434af28(fVar9);
    fVar10 = *(float *)(param_1 + 0x20);
    fVar7 = *(float *)(param_1 + 0x18);
    fVar11 = (float)FUN_0434af28(fVar11);
    fVar8 = *(float *)(param_1 + 0x24);
    fVar12 = *(float *)(param_1 + 0x1c);
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
    TodScaleRotateTransformMatrix
              ((SexyMatrix3 *)aSStack_30,(float)(int)((fVar9 - fVar10) * fVar7) + fVar10,
               (float)(int)((fVar11 - fVar8) * fVar12) + fVar8,0.0,
               *(float *)(this + 0xc0) * *(float *)(param_1 + 0x18) * fVar6,
               *(float *)(this + 0xc0) * *(float *)(param_1 + 0x1c) * fVar6);
    Sexy::Color::Color(aCStack_40,1);
    TodBltMatrix(param_1,this_00,(SexyMatrix3 *)aSStack_30,(TRect *)(param_1 + 0x28),aCStack_40,
                 *(int *)(param_1 + 0x78),(TRect *)aIStack_50);
  }
LAB_0434d4f0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Projectile::Update() */

void __thiscall Projectile::Update(Projectile *this)

{
  long lVar1;
  char cVar2;
  int iVar3;
  ResourceInfo *this_00;
  float fVar4;
  float fVar5;
  int local_18;
  
  lVar1 = ___stack_chk_guard;
  updateGroundEffect(this);
  cVar2 = FUN_0434b99c(*(undefined4 *)(this + 0x100));
  if (cVar2 == '\0') {
    fVar4 = (float)PVZ_Dt();
    fVar5 = (float)FUN_0434ad8c(*(undefined4 *)(this + 0x74));
    if (0.0 <= fVar5) {
      SetUpdateTimeOverride(this,-1.0);
      fVar4 = fVar5;
    }
    (**(code **)(*(long *)this + 0x160))(fVar4,this);
    (**(code **)(*(long *)this + 0x1d8))(this);
    if (*(code **)(*(long *)this + 0x148) != onUpdate) {
      (**(code **)(*(long *)this + 0x148))(fVar4,this);
    }
    if ((this[400] != (Projectile)0x0) &&
       (cVar2 = GameObject::IsDestroyed((GameObject *)this), cVar2 == '\0')) {
      CalcSweptCollisionRectBoardSpace();
      iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
      if (800 - iVar3 < local_18) {
        (**(code **)(*(long *)this + 0x48))(this);
      }
    }
    ProjectileHelpers::CheckForCollisions(this);
    if (*(code **)(*(long *)this + 0x150) != onPostUpdate) {
      (**(code **)(*(long *)this + 0x150))(this);
    }
  }
  this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x38));
  if (this_00 != (ResourceInfo *)0x0) {
    fVar4 = (float)PVZ_T();
    fVar5 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim((PopAnimRig *)this_00,fVar4,fVar5);
  }
  if ((*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') &&
     (fVar5 = *(float *)(this + 0x20),
     fVar4 = (float)Board::calculateRoofOffsetZ(*(float *)(this + 0x18)), fVar5 < fVar4)) {
    (**(code **)(*(long *)this + 0x120))(this);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Projectile::OnCollideEntity(BoardEntity*) */

void __thiscall Projectile::OnCollideEntity(Projectile *this,BoardEntity *param_1)

{
  if (this[0x191] != (Projectile)0x0) {
    MessageRouter::Post<Projectile*,BoardEntity*,Projectile*,BoardEntity*>
              ((MessageRouter *)gMessageRouter,Message::NotifyProjectileCollideEntity,this,param_1);
  }
  playSound(this,param_1);
  (**(code **)(*(long *)this + 0x1b0))(this,param_1);
  (**(code **)(*(long *)this + 0x168))(this,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Projectile::updateOverlayEffects() */

void __thiscall Projectile::updateOverlayEffects(Projectile *this)

{
  float fVar1;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  fVar1 = *(float *)(this + 0xc0);
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  AttachedEffectManager::UpdateDynamicScaleForAllEffects
            ((AttachedEffectManager *)(this + 0x130),fVar1,(vector *)avStack_20);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  PVZ_Dt();
  _JNIEnv::ExceptionOccurred((_JNIEnv *)(this + 0x130));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Projectile::healEntity(BoardEntity*) */

void __thiscall Projectile::healEntity(Projectile *this,BoardEntity *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 local_70;
  DamageInfo aDStack_68 [8];
  float local_60;
  undefined8 local_50;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DamageInfo::DamageInfo(aDStack_68);
  (**(code **)(*(long *)this + 0x178))(this,aDStack_68,0);
  lVar3 = GetProps(this);
  local_60 = -*(float *)(lVar3 + 0x1c);
  iVar1 = BoardEntity::CalcColumnPosition(param_1);
  iVar2 = FUN_0434ad90(*(undefined4 *)(this + 0xa8));
  Sexy::Point::Point((Point *)&local_70,iVar1,iVar2);
  local_50 = local_70;
  (**(code **)(*(long *)param_1 + 0x110))(param_1,aDStack_68);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Projectile::damageEntity(BoardEntity*) */

void __thiscall Projectile::damageEntity(Projectile *this,BoardEntity *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 local_70;
  DamageInfo aDStack_68 [24];
  undefined8 local_50;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x48] != (Projectile)0x0) {
    DamageInfo::DamageInfo(aDStack_68);
    (**(code **)(*(long *)this + 0x178))(this,aDStack_68,param_1);
    iVar1 = BoardEntity::CalcColumnPosition(param_1);
    iVar2 = FUN_0434ad90(*(undefined4 *)(this + 0xa8));
    Sexy::Point::Point((Point *)&local_70,iVar1,iVar2);
    local_50 = local_70;
    (**(code **)(*(long *)param_1 + 0x110))(param_1,aDStack_68);
    DamageInfo::~DamageInfo(aDStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Projectile::OnCollideGround() */

void __thiscall Projectile::OnCollideGround(Projectile *this)

{
  char cVar1;
  long lVar2;
  string *psVar3;
  
  lVar2 = getProps(this);
  cVar1 = FUN_0547419c((void *)(lVar2 + 0x130));
  if (cVar1 == '\0') {
    psVar3 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEventThrottled(psVar3,*(float *)(lVar2 + 0x138),(void *)(lVar2 + 0x130));
  }
  (**(code **)(*(long *)this + 0x168))(this,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Projectile::SetPropertySheet(Sexy::RtWeakPtr<ProjectilePropertySheet>) */

void __thiscall Projectile::SetPropertySheet(Projectile *this,RtWeakPtr *param_2)

{
  RtWeakPtr *this_00;
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  ResourceInfo *pRVar5;
  long lVar6;
  RtObject *this_01;
  PlantNameMapperServerID *pPVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x60),param_2);
  pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x60));
  *(ResourceInfo **)(this + 0x58) = pRVar5;
  lVar6 = getProps(this);
  *(undefined8 *)(this + 0xe0) = *(undefined8 *)(lVar6 + 0x30);
  lVar6 = getProps(this);
  *(undefined4 *)(this + 0xd8) = *(undefined4 *)(lVar6 + 0x18);
  lVar6 = getProps(this);
  std::vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>>::operator=
            ((vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>> *)(this + 0xe8),
             (vector *)(lVar6 + 0x168));
  lVar6 = getProps(this);
  *(undefined4 *)(this + 0xdc) = *(undefined4 *)(lVar6 + 0x40);
  lVar6 = getProps(this);
  cVar2 = FUN_0547419c(lVar6 + 0x108);
  if (cVar2 == '\0') {
    lVar6 = getProps(this);
    GetImageByName((string *)(lVar6 + 0x108));
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)aRStack_18);
    CloudBase::SetOwner((CloudBase *)this,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    lVar6 = getProps(this);
    cVar2 = FUN_0547419c(lVar6 + 0xe8);
  }
  else {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_10);
    CloudBase::SetOwner((CloudBase *)this,
                        (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_10)
    ;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    lVar6 = getProps(this);
    cVar2 = FUN_0547419c(lVar6 + 0xe8);
  }
  if (cVar2 == '\0') {
    lVar6 = getProps(this);
    GetPAMByName((string *)(lVar6 + 0xe8));
    pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_10);
    lVar6 = getProps(this);
    SetAttachedPAM(*(undefined4 *)(lVar6 + 0xf8),*(undefined4 *)(lVar6 + 0xfc),this,pRVar5);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  }
  else {
    ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
              ((ResistenceValueInfo *)&local_10);
    SetAttachedPAM(local_10,local_c,this,0);
  }
  this_00 = (RtWeakPtr *)(this + 0x68);
  lVar6 = getProps(this);
  ValueRange::GetRandomValue((ValueRange *)(lVar6 + 0xd8));
  FUN_0434addc(this + 0xc0);
  lVar6 = getProps(this);
  SetShadow(this,*(bool *)(lVar6 + 0x6c));
  lVar6 = getProps(this);
  SetFlag<DebugLogFlags>(this + 0x100,0x10,*(undefined1 *)(lVar6 + 0x70));
  bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if ((bVar3) && (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00), cVar2 != '\0'))
  {
    this_01 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    bVar3 = Sexy::RtObject::IsA<Plant>(this_01);
    if (bVar3) {
      fVar14 = 1.0;
      uVar12 = 0;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      nop();
      pPVar7 = (PlantNameMapperServerID *)PlantNameMapper::GetInstance();
      Plant::GetType();
      uVar4 = PlantNameMapperServerID::GetIdForType
                        (pPVar7,(RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      lVar6 = getProps(this);
      uVar11 = *(undefined8 *)(lVar6 + 0x198);
      uVar8 = FUN_0434adfc(uVar11,*(undefined8 *)(lVar6 + 0x1a0));
      if (uVar8 != 0) {
        do {
          piVar9 = (int *)FUN_0434ae08(uVar11,uVar12);
          iVar1 = *piVar9;
          if (iVar1 == 1) {
            uVar11 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
            uVar10 = 0xd;
LAB_0434fa50:
            fVar13 = (float)PlantBoostMgr::GetPlantBoostValue
                                      ((PlantBoostMgr *)0x0,uVar11,uVar4,uVar10,0);
            uVar11 = *(undefined8 *)(lVar6 + 0x198);
            fVar14 = fVar14 + fVar13;
            uVar8 = FUN_0434adfc(uVar11,*(undefined8 *)(lVar6 + 0x1a0));
          }
          else {
            if (iVar1 == 2) {
              uVar11 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
              uVar10 = 0xe;
              goto LAB_0434fa50;
            }
            if (iVar1 == 3) {
              uVar11 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
              uVar10 = 0xf;
              goto LAB_0434fa50;
            }
            if (iVar1 == 4) {
              uVar11 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
              uVar10 = 0xc;
              goto LAB_0434fa50;
            }
            if (iVar1 == 5) {
              uVar11 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
              uVar10 = 0x15;
              goto LAB_0434fa50;
            }
            if (iVar1 == 6) {
              uVar11 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
              uVar10 = 0x10;
              goto LAB_0434fa50;
            }
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar8);
      }
      *(float *)(this + 0x180) = fVar14;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Projectile::InitializeProjectile(Sexy::RtWeakPtr<ProjectilePropertySheet>, float, float, float)
    */

void __thiscall
Projectile::InitializeProjectile
          (float param_1,undefined4 param_2,undefined4 param_3,Projectile *this,
          RtWeakPtr<Sexy::ResourceInfo> *param_5)

{
  char cVar1;
  long lVar2;
  undefined4 *puVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  *(undefined4 *)(this + 0xa8) = 0xffffffff;
  *(undefined4 *)(this + 0xac) = 0xffffffff;
  *(undefined4 *)(this + 0xb0) = 1;
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x184) = 0x3f800000;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0x17c) = param_2;
  *(undefined4 *)(this + 0x180) = param_3;
  *(undefined4 *)(this + 0x74) = 0xbf800000;
  *(float *)(this + 0x170) = param_1;
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_5);
  cVar1 = std::vector<float,std::allocator<float>>::empty
                    ((vector<float,std::allocator<float>> *)(lVar2 + 0x48));
  if (cVar1 == '\0') {
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_5);
    puVar3 = (undefined4 *)FUN_0434adf4(*(undefined8 *)(lVar2 + 0x48),(long)param_1);
    *(undefined4 *)(this + 0x178) = *puVar3;
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_5);
    cVar1 = std::vector<float,std::allocator<float>>::empty
                      ((vector<float,std::allocator<float>> *)(lVar2 + 0x48));
  }
  else {
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_5);
    *(undefined4 *)(this + 0x178) = *(undefined4 *)(lVar2 + 0x38);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_5);
    cVar1 = std::vector<float,std::allocator<float>>::empty
                      ((vector<float,std::allocator<float>> *)(lVar2 + 0x48));
  }
  if (cVar1 == '\0') {
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_5);
    puVar3 = (undefined4 *)FUN_0434adf4(*(undefined8 *)(lVar2 + 0x48),(long)param_1);
    *(undefined4 *)(this + 0x178) = *puVar3;
  }
  else {
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_5);
    *(undefined4 *)(this + 0x178) = *(undefined4 *)(lVar2 + 0x38);
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_5);
  SetPropertySheet(this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ProjectileHelpers::RandomizeVelocities(this);
  if (*(code **)(*(long *)this + 0x158) != onProjectileInitialized) {
    (**(code **)(*(long *)this + 0x158))(this);
  }
  lVar2 = GetProps(this);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(lVar2 + 0x2c);
  this[0x48] = (Projectile)0x1;
  this[0xd4] = (Projectile)0x0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x174) = 0;
  this[0x34] = (Projectile)0x0;
  this[0x188] = (Projectile)0x0;
  MessageRouter::Post<Projectile*,Projectile*>
            ((MessageRouter *)gMessageRouter,Message::NotifyProjectileCreated,this);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Projectile::getCollisionEntities(std::vector<BoardEntity*, std::allocator<BoardEntity*> >&,
   Sexy::TRect<int> const&) const */

void __thiscall Projectile::getCollisionEntities(Projectile *this,vector *param_1,TRect *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_0434ad9c(*(undefined4 *)(this + 0xb0));
  local_1c = FUN_0434ad90(*(undefined4 *)(this + 0xa8));
  local_14 = *(int *)(this + 0xac);
  local_18 = iVar3 + local_1c + -1;
  local_10 = iVar3 + local_14 + -1;
  piVar4 = eastl::min_alt<int>(&local_1c,&local_14);
  iVar3 = *piVar4;
  piVar4 = eastl::max_alt<int>(&local_18,&local_10);
  iVar1 = *piVar4;
  local_c = 0;
  cVar2 = (**(code **)(*(long *)this + 0xb8))(this,8);
  if (cVar2 != '\0') {
    operator|=(&local_c,4);
  }
  cVar2 = (**(code **)(*(long *)this + 0xb8))(this,7);
  if (cVar2 != '\0') {
    operator|=(&local_c,2);
  }
  cVar2 = (**(code **)(*(long *)this + 0xb8))(this,0xf0);
  if (cVar2 != '\0') {
    operator|=(&local_c,0x10);
  }
  cVar2 = (**(code **)(*(long *)this + 0xb8))(this,0x3ff);
  if (cVar2 != '\0') {
    operator|=(&local_c,0x20);
  }
  EntityFinder::GetEntitiesTouchingRectangle(param_1,local_c,param_2,iVar3,iVar1);
  if (this[0xd5] == (Projectile)0x0) {
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)param_1);
    uVar6 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)param_1);
    std::
    sort<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,bool(*)(BoardEntity*,BoardEntity*)>
              (uVar5,uVar6,BoardEntity::BoardEntityRightToLeftSortFunc);
  }
  else {
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)param_1);
    uVar6 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)param_1);
    std::
    sort<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,bool(*)(BoardEntity*,BoardEntity*)>
              (uVar5,uVar6,BoardEntity::BoardEntityLeftToRightSortFunc);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Projectile::radiateSplashDamage(BoardEntity*) */

void Projectile::radiateSplashDamage(BoardEntity *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  Zombie *pZVar10;
  long *plVar11;
  long *in_x1;
  int in_w4;
  ulong uVar12;
  undefined8 uVar13;
  code *pcVar14;
  float fVar15;
  uint local_9c;
  FastCurve aFStack_98 [4];
  float local_94;
  int local_8c;
  int local_84;
  undefined8 local_80;
  undefined8 local_78;
  DamageInfo aDStack_68 [8];
  float local_60;
  undefined1 auStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (in_x1 != (long *)0x0) {
    if (*(code **)(*in_x1 + 0x128) == BoardEntity::NeutralizeSplashDamage) {
      cVar3 = BoardEntity::NeutralizeSplashDamage();
    }
    else {
      cVar3 = (**(code **)(*in_x1 + 0x128))();
    }
    if (cVar3 != '\0') goto LAB_0434fef0;
  }
  lVar7 = getProps((Projectile *)param_1);
  if ((0.0 < *(float *)(lVar7 + 0x38)) && (0.0 < *(float *)(lVar7 + 0x60))) {
    DamageInfo::DamageInfo(aDStack_68);
    (**(code **)(*(long *)param_1 + 0x178))(param_1,aDStack_68,0);
    fVar15 = *(float *)(param_1 + 0x178);
    local_60 = 1.0;
    if (*(char *)(lVar7 + 0x3c) == '\0') {
      local_60 = (float)FUN_0434adc4(*(undefined4 *)(param_1 + 0x170),
                                     *(undefined4 *)(param_1 + 0x17c),
                                     *(undefined4 *)(param_1 + 0x180),
                                     *(undefined4 *)(param_1 + 0x184));
    }
    local_60 = local_60 * fVar15;
                    /* WARNING: Load size is inaccurate */
    DamageInfo::AddCondition(*(DamageInfo **)(param_1 + 0xdc),aDStack_68,2);
    SetFlag<DamageTypeFlags>(auStack_58,0x2000000000,0);
    SetFlag<DamageTypeFlags>(auStack_58,0x800,0);
    Sexy::FastCurve::SetOutRange(aFStack_98,*(float *)(param_1 + 0x18),*(float *)(param_1 + 0x1c));
    BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)0x0,*(int *)(param_1 + 0xa8),1,1,in_w4)
    ;
    iVar2 = *(int *)(param_1 + 0xa8);
    iVar1 = (int)*(float *)(lVar7 + 0x60) / 2;
    local_94 = (float)(local_8c + local_84 / 2);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
    uVar4 = operator|(2,4);
    local_9c = uVar4;
    iVar5 = FUN_0434ace0(*(undefined4 *)(param_1 + 0x24));
    if (iVar5 == 2) {
      operator|=(&local_9c,1);
      uVar4 = local_9c;
    }
    iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
    uVar12 = 0;
    EntityFinder::GetEntitiesTouchingCircle2D
              ((float)iVar5 * SQRT(*(float *)(lVar7 + 0x60)),
               (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,uVar4,
               aFStack_98,iVar2 - iVar1,iVar1 + iVar2);
    uVar13 = local_80;
    lVar7 = FUN_0434ae38(local_80,local_78);
    if (lVar7 != 0) {
      do {
        puVar8 = (undefined8 *)FUN_0434ae44(uVar13,uVar12);
        uVar6 = FUN_0434ace0(*(undefined4 *)(param_1 + 0x24));
        cVar3 = RealObject::IsOnOpposingTeam(*puVar8,uVar6);
        uVar13 = local_80;
        if (cVar3 != '\0') {
          puVar8 = (undefined8 *)FUN_0434ae44(local_80,uVar12);
          pZVar10 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar8);
          if ((pZVar10 == (Zombie *)0x0) ||
             (cVar3 = (**(code **)(*(long *)pZVar10 + 0xb8))(pZVar10,7), uVar13 = local_80,
             cVar3 != '\0')) {
            uVar13 = local_80;
            puVar8 = (undefined8 *)FUN_0434ae44(local_80,uVar12);
            plVar11 = (long *)*puVar8;
            if (in_x1 != plVar11) {
              (**(code **)(*plVar11 + 0x110))(plVar11,aDStack_68);
              uVar13 = local_80;
              pcVar14 = *(code **)(*(long *)param_1 + 0x1c8);
              puVar8 = (undefined8 *)FUN_0434ae44(local_80,uVar12);
              if (pcVar14 != onSplashDamageHitEntity) {
                (*pcVar14)(param_1,*puVar8);
                uVar13 = local_80;
              }
            }
          }
        }
        uVar12 = uVar12 + 1;
        uVar9 = FUN_0434ae38(uVar13,local_78);
      } while (uVar12 < uVar9);
    }
    lVar7 = getProps((Projectile *)param_1);
    if (*(char *)(lVar7 + 100) != '\0') {
      Board::ShakeBoard(*(Board **)(gLawnApp + 0x9f0),3,-4,0.25);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
    DamageInfo::~DamageInfo(aDStack_68);
  }
LAB_0434fef0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Projectile::fillDamageInfo(DamageInfo&, BoardEntity*) */

void Projectile::fillDamageInfo(DamageInfo *param_1,BoardEntity *param_2)

{
  RtWeakPtr *this;
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  ResourceInfo *pRVar5;
  undefined8 uVar6;
  int *piVar7;
  RtObject *this_00;
  Plant *this_01;
  long lVar8;
  ulong uVar9;
  undefined4 *puVar10;
  ValueRange *this_02;
  float fVar11;
  float fVar12;
  undefined8 local_48 [3];
  undefined4 local_30;
  undefined8 local_28 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = getProps((Projectile *)param_1);
  fVar11 = (float)FUN_0434adc4(*(undefined4 *)(param_1 + 0x170),*(undefined4 *)(param_1 + 0x17c),
                               *(undefined4 *)(param_1 + 0x180),*(undefined4 *)(param_1 + 0x184));
  fVar12 = *(float *)(param_1 + 0xd8);
  iVar3 = *(int *)(param_1 + 0x174);
  *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(lVar4 + 0x28);
  *(float *)(param_2 + 8) = fVar11 * fVar12;
  if ((0 < iVar3) && (*(int *)(param_1 + 0x4c) < iVar3)) {
    *(float *)(param_2 + 8) = fVar11 * fVar12 * 0.5;
  }
  if (0.0 < *(float *)(param_1 + 0xdc)) {
    DamageInfo::AddCondition((DamageInfo *)param_2,2);
  }
  if (param_1[0x34] != (DamageInfo)0x0) {
    *(float *)(param_2 + 8) = *(float *)(param_2 + 8) * 3.0;
  }
  if (*(char *)(lVar4 + 0x71) != '\0') {
    param_2[0x58] = (BoardEntity)0x1;
  }
  this = (RtWeakPtr *)(param_1 + 0x68);
  pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this);
  *(ResourceInfo **)param_2 = pRVar5;
  uVar6 = *(undefined8 *)(lVar4 + 0x168);
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0xe0);
  local_48[0] = FUN_0434cc68(uVar6);
  local_28[0] = FUN_0434ccb8(*(undefined8 *)(lVar4 + 0x170));
  while (bVar1 = __gnu_cxx::operator!=((__normal_iterator *)local_48,(__normal_iterator *)local_28),
        bVar1) {
    piVar7 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_48);
    this_02 = (ValueRange *)(piVar7 + 1);
    iVar3 = *piVar7;
    ValueRange::GetRandomValue(this_02);
    DamageInfo::AddCondition((DamageInfo *)param_2,iVar3);
    iVar3 = *piVar7;
    if (iVar3 == 0) {
      ValueRange::GetRandomValue(this_02);
      DamageInfo::AddCondition((DamageInfo *)param_2,4);
    }
    else if (iVar3 == 1) {
      ValueRange::GetRandomValue(this_02);
      DamageInfo::AddCondition((DamageInfo *)param_2,5);
    }
    else if (iVar3 == 0x10) {
      ValueRange::GetRandomValue(this_02);
      DamageInfo::AddCondition((DamageInfo *)param_2,6);
    }
    __gnu_cxx::
    __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
    ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                  *)local_48);
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
  if (bVar1) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    bVar1 = Sexy::RtObject::IsA<Plant>(this_00);
    if (bVar1) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      nop();
      if ((this_01 != (Plant *)0x0) &&
         (lVar8 = FUN_0434ae18(*(undefined8 *)(lVar4 + 0x180),*(undefined8 *)(lVar4 + 0x188)),
         lVar8 != 0)) {
        iVar3 = FUN_0434ace8(*(undefined4 *)(this_01 + 0x50));
        iVar3 = iVar3 + -1;
        fVar11 = (float)Sexy::Rand(1.0);
        if (-1 < iVar3) {
          uVar6 = *(undefined8 *)(lVar4 + 0x180);
          uVar9 = FUN_0434ae18(uVar6,*(undefined8 *)(lVar4 + 0x188));
          if ((ulong)(long)iVar3 < uVar9) {
            puVar10 = (undefined4 *)FUN_0434ae2c(uVar6,(long)iVar3);
            cVar2 = Plant::IsSkillCheat(this_01);
            if (((cVar2 != '\0') && (cVar2 = Plant::IsSkillActivate(this_01), cVar2 != '\0')) ||
               ((cVar2 = Plant::IsSkillCheat(this_01), cVar2 == '\0' && (fVar11 < (float)puVar10[2])
                ))) {
              TriRepGenerator::SpanSet::SpanSet((SpanSet *)local_48);
              local_30 = *puVar10;
              std::vector<std::string,std::allocator<std::string>>::operator=
                        ((vector<std::string,std::allocator<std::string>> *)local_48,
                         (vector *)(puVar10 + 4));
              ZombieConditionInfo::ZombieConditionInfo
                        ((ZombieConditionInfo *)local_28,(ZombieConditionInfo *)local_48);
                    /* WARNING: Load size is inaccurate */
              DamageInfo::AddCondition
                        (*(DamageInfo **)(puVar10 + 1),param_2,(ZombieConditionInfo *)local_28);
              PlantWarsNodeData::~PlantWarsNodeData((PlantWarsNodeData *)local_28);
              PlantWarsNodeData::~PlantWarsNodeData((PlantWarsNodeData *)local_48);
            }
          }
        }
      }
      fVar11 = (float)Plant::GetDamageConstValue(this_01);
      *(float *)(param_2 + 8) = *(float *)(param_2 + 8) + fVar11;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Projectile::~Projectile() */

void __thiscall Projectile::~Projectile(Projectile *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  long *plVar2;
  
  this_00 = (RtMixedPtrBase *)(this + 0x38);
  *(undefined ***)this = &PTR_GetClass_06833b50;
  *(undefined ***)(this + 0x10) = &PTR__Projectile_06833d40;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  EntityComponent_GroundEffect::Destroy((EntityComponent_GroundEffect *)(this + 0x110));
  AttachedEffectManager::Clear((AttachedEffectManager *)(this + 0x130));
  AttachedBoardEntityManager::~AttachedBoardEntityManager
            ((AttachedBoardEntityManager *)(this + 0x150));
  AttachedEffectManager::~AttachedEffectManager((AttachedEffectManager *)(this + 0x130));
  EntityComponent_GroundEffect::~EntityComponent_GroundEffect
            ((EntityComponent_GroundEffect *)(this + 0x110));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x108));
  std::vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>>::~vector
            ((vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>> *)(this + 0xe8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  RealObject::~RealObject((RealObject *)this);
  return;
}


/* non-virtual thunk to Projectile::~Projectile() */

void __thiscall Projectile::~Projectile(Projectile *this)

{
  ~Projectile(this + -0x10);
  return;
}


/* Projectile::~Projectile() */

void __thiscall Projectile::~Projectile(Projectile *this)

{
  ~Projectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to Projectile::~Projectile() */

void __thiscall Projectile::~Projectile(Projectile *this)

{
  ~Projectile(this + -0x10);
  return;
}


/* Projectile::ShouldDrawShadow() const */

bool __thiscall Projectile::ShouldDrawShadow(Projectile *this)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  
  cVar1 = RealObject::ShouldDrawShadow((RealObject *)this);
  bVar3 = false;
  if (cVar1 != '\0') {
    bVar2 = TestFlag<VaseFlags>(*(undefined4 *)(this + 0x28),1);
    bVar3 = false;
    if (!bVar2) {
      bVar3 = TestFlag<VaseFlags>(*(undefined4 *)(this + 0x100),4);
      bVar3 = !bVar3;
    }
  }
  return bVar3;
}


/* Projectile::CanBeBlocked() */

bool __thiscall Projectile::CanBeBlocked(Projectile *this)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = getProps(this);
  bVar1 = std::operator==((string *)(lVar2 + 0x20),"CanBlock");
  return bVar1;
}


/* Projectile::GetDamageConditions() const */

vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>> *
Projectile::GetDamageConditions(void)

{
  long in_x0;
  vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>> *in_x8;
  
  std::vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>>::vector
            (in_x8,(vector *)(in_x0 + 0xe8));
  return in_x8;
}


/* Projectile::SetDamageConditions(std::vector<ZombieConditionEntry,
   std::allocator<ZombieConditionEntry> >) */

void __thiscall Projectile::SetDamageConditions(Projectile *this,vector *param_2)

{
  std::vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>>::operator=
            ((vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>> *)(this + 0xe8),
             param_2);
  return;
}

