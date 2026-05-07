// Class: BoomerangRotateProjectile


/* BoomerangRotateProjectile::SetCenterPosition(Sexy::SexyVector3 const&) */

void __thiscall
BoomerangRotateProjectile::SetCenterPosition(BoomerangRotateProjectile *this,SexyVector3 *param_1)

{
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x1cc),param_1);
  return;
}


/* BoomerangRotateProjectile::GetTargetDegree(Sexy::SexyVector3 const&, Sexy::SexyVector3 const&) */

float __thiscall
BoomerangRotateProjectile::GetTargetDegree
          (BoomerangRotateProjectile *this,SexyVector3 *param_1,SexyVector3 *param_2)

{
  double dVar1;
  
  dVar1 = atan2((double)(*(float *)(param_2 + 4) - *(float *)(param_1 + 4)),
                (double)(*(float *)param_2 - *(float *)param_1));
  return (float)dVar1 * 57.295776;
}


/* BoomerangRotateProjectile::onAnimStoppedCallback(std::string const&) */

void BoomerangRotateProjectile::onAnimStoppedCallback(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x48))();
  return;
}


/* BoomerangRotateProjectile::SetStartPosition(Sexy::SexyVector3 const&) */

void __thiscall
BoomerangRotateProjectile::SetStartPosition(BoomerangRotateProjectile *this,SexyVector3 *param_1)

{
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x1f8),param_1);
  (**(code **)(*(long *)this + 0x78))(this,(SexyVector3 *)(this + 0x1f8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoomerangRotateProjectile::StaticClassInit() */

void BoomerangRotateProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"BoomerangRotateProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_0415c480,0x208,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoomerangRotateProjectile::StaticGetClass() */

long * BoomerangRotateProjectile::StaticGetClass(void)

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
  uVar2 = BoomerangProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"BoomerangRotateProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoomerangRotateProjectile::GetClass() const */

long * BoomerangRotateProjectile::GetClass(void)

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
  uVar2 = BoomerangProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"BoomerangRotateProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoomerangRotateProjectile::LaunchProjectileAt(Sexy::SexyVector3 const&, float, float) */

void __thiscall
BoomerangRotateProjectile::LaunchProjectileAt
          (BoomerangRotateProjectile *this,SexyVector3 *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(this + 0x1dc);
  fVar1 = (float)Sexy::Rand(param_3 * 0.3);
  Projectile::LaunchAt((Projectile *)this,param_1,fVar2 * 0.5 * (1.0 - param_2),fVar1 + 0.3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoomerangRotateProjectile::SetFinalPosition() */

void __thiscall BoomerangRotateProjectile::SetFinalPosition(BoomerangRotateProjectile *this)

{
  float fVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  float local_18;
  float local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DVec3::DVec3((DVec3 *)&local_18);
  fVar4 = *(float *)(this + 0x1d0);
  fVar1 = (float)Sexy::SexyMath::DegToRad(*(float *)(this + 0x1c8));
  dVar2 = cos((double)fVar1);
  fVar3 = *(float *)(this + 0x1dc);
  local_18 = (float)((double)*(float *)(this + 0x1cc) + (double)fVar3 * dVar2);
  dVar2 = sin((double)fVar1);
  local_10 = 0;
  local_14 = (float)((double)fVar4 + (double)fVar3 * dVar2);
  (**(code **)(*(long *)this + 0x78))(this,(DVec3 *)&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoomerangRotateProjectile::MoveOverTimeTo(float) */

void __thiscall
BoomerangRotateProjectile::MoveOverTimeTo(BoomerangRotateProjectile *this,float param_1)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x1c0) = fVar1;
  *(float *)(this + 0x1c4) = fVar1 + *(float *)(this + 0x1e0);
  *(float *)(this + 0x1c8) = param_1 + *(float *)(this + 0x1d8);
  return;
}


/* BoomerangRotateProjectile::isDoneMoving() const */

bool __thiscall BoomerangRotateProjectile::isDoneMoving(BoomerangRotateProjectile *this)

{
  bool bVar1;
  float fVar2;
  
  fVar2 = (float)PVZ_T();
  bVar1 = true;
  if (fVar2 < *(float *)(this + 0x1c4)) {
    fVar2 = (float)PVZ_EOT();
    bVar1 = *(float *)(this + 0x1c0) == fVar2;
  }
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoomerangRotateProjectile::getNextBoardPosition() */

void __thiscall BoomerangRotateProjectile::getNextBoardPosition(BoomerangRotateProjectile *this)

{
  undefined4 uVar1;
  float fVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float local_28;
  float fStack_24;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DVec3::DVec3((DVec3 *)&local_28);
  uVar5 = *(undefined4 *)(this + 0x1c0);
  uVar4 = *(undefined4 *)(this + 0x1c4);
  uVar1 = PVZ_T();
  fVar2 = CurveLerp<float>(uVar5,uVar4,uVar1,this + 0x1d8,this + 0x1c8,1);
  *(float *)(this + 0x1ec) = fVar2;
  fVar2 = (float)Sexy::SexyMath::DegToRad(fVar2);
  fVar7 = *(float *)(this + 0x1d0);
  dVar3 = cos((double)fVar2);
  fVar6 = *(float *)(this + 0x1dc);
  local_28 = (float)((double)*(float *)(this + 0x1cc) + (double)fVar6 * dVar3);
  dVar3 = sin((double)fVar2);
  local_10 = local_20;
  fStack_24 = (float)((double)fVar7 + (double)fVar6 * dVar3);
  local_18 = CONCAT44(fStack_24,local_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_28,fStack_24,local_20);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoomerangRotateProjectile::updatePosition(float) */

void BoomerangRotateProjectile::updatePosition(float param_1)

{
  BoomerangRotateProjectile *in_x0;
  long lVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 in_d2;
  DVec3 aDStack_58 [16];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
  fVar3 = (float)FUN_04159b08(*(undefined4 *)(lVar1 + 0x30));
  uVar7 = 0x3f800000;
  if (fVar3 != 1.0) {
    PVZ_RealDt();
  }
  DVec3::DVec3(aDStack_58);
  local_48 = getNextBoardPosition(in_x0);
  local_44 = (undefined4)uVar7;
  local_40 = (undefined4)in_d2;
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)in_x0);
  local_38 = *puVar2;
  local_30 = *(undefined4 *)(puVar2 + 1);
  local_18 = Sexy::SexyVector3::operator-((SexyVector3 *)&local_48,(SexyVector3 *)&local_38);
  local_14 = (undefined4)uVar7;
  local_10 = (undefined4)in_d2;
  uVar4 = Sexy::SexyVector3::Normalize((SexyVector3 *)&local_18);
  local_24 = (undefined4)uVar7;
  local_20 = (undefined4)in_d2;
  local_28 = uVar4;
  fVar3 = (float)FUN_04159ba4(*(undefined4 *)(in_x0 + 0xc4));
  fVar5 = (float)ArmorflameMissile::calcDesiredRot(uVar4,uVar7,in_d2,fVar3);
  dVar8 = ABS((double)ABS(fVar5 - fVar3));
  if ((long)(double)(fVar5 - fVar3) < 0) {
    dVar8 = -dVar8;
  }
  dVar8 = (double)fVar3 + dVar8;
  if (3.1415927410125732 < ABS(dVar8)) {
    dVar6 = 6.2831854820251465;
    if ((long)dVar8 < 0) {
      dVar6 = -6.2831854820251465;
    }
    dVar8 = dVar8 - dVar6;
  }
  if (in_x0[0x1e4] == (BoomerangRotateProjectile)0x0) {
    dVar6 = 0.4;
  }
  else {
    dVar6 = -0.4;
  }
  FUN_04159ba8((float)(dVar6 + dVar8),in_x0 + 0xc4);
  (**(code **)(*(long *)in_x0 + 0x78))();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoomerangRotateProjectile::BoomerangRotateProjectile() */

void __thiscall
BoomerangRotateProjectile::BoomerangRotateProjectile(BoomerangRotateProjectile *this)

{
  BoomerangProjectile::BoomerangProjectile((BoomerangProjectile *)this);
  *(undefined ***)this = &PTR_GetClass_067f2050;
  *(undefined ***)(this + 0x10) = &PTR__BoomerangRotateProjectile_067f2240;
  DVec3::DVec3((DVec3 *)(this + 0x1cc));
  this[500] = (BoomerangRotateProjectile)0x0;
  this[0x1e4] = (BoomerangRotateProjectile)0x1;
  DVec3::DVec3((DVec3 *)(this + 0x1f8));
  return;
}


/* BoomerangRotateProjectile::StaticNew() */

BoomerangRotateProjectile * BoomerangRotateProjectile::StaticNew(void)

{
  BoomerangRotateProjectile *this;
  
  this = ::operator_new(0x208);
  BoomerangRotateProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoomerangRotateProjectile::onProjectileInitialized() */

void __thiscall BoomerangRotateProjectile::onProjectileInitialized(BoomerangRotateProjectile *this)

{
  undefined4 uVar1;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BearberryPlantfoodProjectile::onDestroy((BearberryPlantfoodProjectile *)this);
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1c0) = uVar1;
  *(undefined4 *)(this + 0x1c4) = uVar1;
  *(undefined4 *)(this + 0x1c8) = 0;
  EATextSquish::Vec3::Vec3(aVStack_18,0.0,0.0,0.0);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x1cc),(SexyVector3 *)aVStack_18);
  this[0x1e4] = (BoomerangRotateProjectile)0x0;
  *(undefined4 *)(this + 0x1d8) = 0;
  *(undefined4 *)(this + 0x1dc) = 0;
  *(undefined4 *)(this + 0x1e0) = 0;
  Projectile::SetVelocity((Projectile *)this,0.0,0.0,0.0);
  FUN_04159c90(this + 0xd4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoomerangRotateProjectile::SetDegree() */

void __thiscall BoomerangRotateProjectile::SetDegree(BoomerangRotateProjectile *this)

{
  undefined4 uVar1;
  RtObject *this_00;
  BoomerangRotateProjectileProps *pBVar2;
  SexyVector3 *pSVar3;
  undefined4 uVar4;
  
  this_00 = (RtObject *)Projectile::GetProps((Projectile *)this);
  pBVar2 = Sexy::RtObject::Cast<BoomerangRotateProjectileProps>(this_00);
  pSVar3 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  uVar4 = GetTargetDegree(this,(SexyVector3 *)(this + 0x1cc),pSVar3);
  uVar1 = *(undefined4 *)(pBVar2 + 0x1e4);
  *(undefined4 *)(this + 0x1d8) = uVar4;
  *(undefined4 *)(this + 0x1e0) = uVar1;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1a8));
  if (this[0x1e4] == (BoomerangRotateProjectile)0x0) {
    MoveOverTimeTo(this,-180.0);
    *(undefined4 *)(this + 0x1f0) = *(undefined4 *)(pBVar2 + 0x1e0);
    return;
  }
  MoveOverTimeTo(this,180.0);
  *(undefined4 *)(this + 0x1f0) = *(undefined4 *)(pBVar2 + 0x1e0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoomerangRotateProjectile::onUpdate(float) */

void __thiscall BoomerangRotateProjectile::onUpdate(BoomerangRotateProjectile *this,float param_1)

{
  int iVar1;
  char cVar2;
  long lVar3;
  RtObject *pRVar4;
  BoomerangRotateProjectileProps *pBVar5;
  PopAnimRig *pPVar6;
  Plant *pPVar7;
  PlantChainsawburmannii *this_00;
  char *pcVar8;
  RtMixedPtrBase *__n;
  float fVar9;
  float fVar10;
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  RtMixedPtrBase aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
  fVar9 = (float)FUN_04159b08(*(undefined4 *)(lVar3 + 0x30));
  if (fVar9 != 1.0) {
    PVZ_RealDt();
  }
  fVar10 = *(float *)(this + 0x1e8);
  fVar9 = (float)PVZ_T();
  if ((fVar9 < fVar10) || (this[500] != (BoomerangRotateProjectile)0x0)) {
    cVar2 = isDoneMoving(this);
    goto joined_r0x0415dc60;
  }
  this[500] = (BoomerangRotateProjectile)0x1;
  PVPSeedBankModule::GetPVPSkillEnergyUI();
  cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  if (cVar2 != '\0') {
    Projectile::GetInstigator((Projectile *)this);
    ToolPacketData::GetProps();
    pRVar4 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
    pPVar7 = Sexy::RtObject::Cast<Plant>(pRVar4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
    if (pPVar7 != (Plant *)0x0) {
      nop();
      PlantChainsawburmannii::ResetBoomerang(this_00);
    }
  }
  pRVar4 = (RtObject *)Projectile::GetProps((Projectile *)this);
  pBVar5 = Sexy::RtObject::Cast<BoomerangRotateProjectileProps>(pRVar4);
  if (this[0x1e4] == (BoomerangRotateProjectile)0x0) {
    pcVar8 = "xiaoshi_1";
  }
  else {
    pcVar8 = "xiaoshi_2";
  }
  __n = aRStack_58;
  std::string::string(asStack_70,pcVar8);
  nop();
  iVar1 = *(int *)(pBVar5 + 0x1e8);
  if (iVar1 == 1) {
    if (this[0x1e4] == (BoomerangRotateProjectile)0x0) {
      pcVar8 = "xiaoshi_2";
    }
    else {
      pcVar8 = "xiaoshi_1_2";
    }
LAB_0415dcfc:
    std::string::append(asStack_70,pcVar8,(size_t)__n);
  }
  else {
    if (iVar1 == 2) {
      if (this[0x1e4] == (BoomerangRotateProjectile)0x0) {
        pcVar8 = "xiaoshi_3";
      }
      else {
        pcVar8 = "xiaoshi_1_3";
      }
      goto LAB_0415dcfc;
    }
    if (iVar1 == 0) {
      if (this[0x1e4] == (BoomerangRotateProjectile)0x0) {
        pcVar8 = "xiaoshi_1";
      }
      else {
        pcVar8 = "xiaoshi_1_1";
      }
      goto LAB_0415dcfc;
    }
  }
  pPVar6 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string((string *)aRStack_58,"onAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             aRStack_58);
  PopAnimRig::PlayAndStop(pPVar6,asStack_70,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)aRStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::~string(asStack_70);
  cVar2 = isDoneMoving(this);
joined_r0x0415dc60:
  if (cVar2 == '\0') {
    updatePosition(param_1);
  }
  else {
    SetDegree(this);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* BoomerangRotateProjectile::~BoomerangRotateProjectile() */

void __thiscall
BoomerangRotateProjectile::~BoomerangRotateProjectile(BoomerangRotateProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067f2050;
  *(undefined ***)(this + 0x10) = &PTR__BoomerangRotateProjectile_067f2240;
  BoomerangProjectile::~BoomerangProjectile((BoomerangProjectile *)this);
  return;
}


/* non-virtual thunk to BoomerangRotateProjectile::~BoomerangRotateProjectile() */

void __thiscall
BoomerangRotateProjectile::~BoomerangRotateProjectile(BoomerangRotateProjectile *this)

{
  ~BoomerangRotateProjectile(this + -0x10);
  return;
}


/* BoomerangRotateProjectile::~BoomerangRotateProjectile() */

void __thiscall
BoomerangRotateProjectile::~BoomerangRotateProjectile(BoomerangRotateProjectile *this)

{
  ~BoomerangRotateProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BoomerangRotateProjectile::~BoomerangRotateProjectile() */

void __thiscall
BoomerangRotateProjectile::~BoomerangRotateProjectile(BoomerangRotateProjectile *this)

{
  ~BoomerangRotateProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoomerangRotateProjectile::handleImpact(BoardEntity*) */

void __thiscall
BoomerangRotateProjectile::handleImpact(BoomerangRotateProjectile *this,BoardEntity *param_1)

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
  float fStack_20;
  float fStack_1c;
  Vec3 aVStack_18 [16];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x170))();
  lVar3 = Projectile::getProps((Projectile *)this);
  (**(code **)(*(long *)this + 0x180))(asStack_30,this);
  cVar2 = FUN_0547419c(asStack_30);
  if (cVar2 == '\0') {
    GetPAMByName(asStack_30);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_28);
    if (cVar2 != '\0') {
      ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                ((ResistenceValueInfo *)&fStack_20);
      Projectile::calcRandomSplatOffset((Projectile *)this,(SexyVector2 *)&fStack_20);
      if ((param_1 == (BoardEntity *)0x0) || (*(char *)(lVar3 + 0x6d) == '\0')) {
        fVar9 = fStack_20 + *(float *)(this + 0x18);
        fVar8 = (fStack_1c + *(float *)(this + 0x1c)) - *(float *)(this + 0x20);
      }
      else {
        pfVar4 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)param_1);
        fVar9 = fStack_20 + *pfVar4;
        fVar8 = (fStack_1c + pfVar4[1]) - pfVar4[2];
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
      lVar6 = Projectile::getProps((Projectile *)this);
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
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}

