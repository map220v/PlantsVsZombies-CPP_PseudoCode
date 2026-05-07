// Class: PlantBloomerang


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBloomerang::FindTargetAndFire(PlantWeapon) */

void PlantBloomerang::FindTargetAndFire(long param_1)

{
  char cVar1;
  RealObject *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = PlantFramework::FindTargetAndFire();
  if (cVar1 != '\0') {
    this = *(RealObject **)(param_1 + 0x10);
    std::string::string(asStack_10,"Play_Plant_Bloomerange_Attack");
    RealObject::PlayPositionalSound(this,asStack_10,0.0);
    std::string::~string(asStack_10);
    nop();
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* PlantBloomerang::CancelPlantfood() */

void __thiscall PlantBloomerang::CancelPlantfood(PlantBloomerang *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  this[0x30] = (PlantBloomerang)0x0;
  return;
}


/* PlantBloomerang::PlantBloomerang() */

void __thiscall PlantBloomerang::PlantBloomerang(PlantBloomerang *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067affc0;
  return;
}


/* PlantBloomerang::StaticNew() */

PlantBloomerang * PlantBloomerang::StaticNew(void)

{
  PlantBloomerang *this;
  
  this = ::operator_new(0x38);
  PlantBloomerang(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBloomerang::StaticClassInit() */

void PlantBloomerang::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantBloomerang");
    (*pcVar2)(plVar1,asStack_10,FUN_03feafb8,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBloomerang::StaticGetClass() */

long * PlantBloomerang::StaticGetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantBloomerang",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantBloomerang::GetClass() const */

long * PlantBloomerang::GetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantBloomerang",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantBloomerang::~PlantBloomerang() */

void __thiscall PlantBloomerang::~PlantBloomerang(PlantBloomerang *this)

{
  *(undefined ***)this = &PTR_GetClass_067affc0;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantBloomerang::~PlantBloomerang() */

void __thiscall PlantBloomerang::~PlantBloomerang(PlantBloomerang *this)

{
  ~PlantBloomerang(this);
  AK::FreeHook(this);
  return;
}


/* PlantBloomerang::ApplyPlantfood() */

void __thiscall PlantBloomerang::ApplyPlantfood(PlantBloomerang *this)

{
  float fVar1;
  
  *(undefined4 *)(this + 0x2c) = 0;
  fVar1 = (float)PVZ_T();
  this[0x30] = (PlantBloomerang)0x1;
  *(float *)(this + 0x28) = fVar1 + 0.7;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBloomerang::OnProjectileReturned(BloomerangProjectile*) */

void __thiscall
PlantBloomerang::OnProjectileReturned(PlantBloomerang *this,BloomerangProjectile *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  PopAnimRig *pPVar3;
  PlantAnimRig *pPVar4;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x30] == (PlantBloomerang)0x0) {
    uVar2 = FUN_03feadec(*(undefined8 *)(param_1 + 0xe0));
    bVar1 = TestFlag<DamageTypeFlags>(uVar2,0x2000);
    if (!bVar1) {
      pPVar3 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string(asStack_40,"attack_02");
      Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
      PopAnimRig::PlayAndStop(pPVar3,asStack_40,0,aDStack_38);
      std::string::~string(asStack_40);
      nop();
      pPVar4 = (PlantAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      PlantAnimRig::SetState(pPVar4,1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBloomerang::fireBoomerang(Sexy::SexyVector2 const&, Sexy::SexyVector3 const&, bool) */

void PlantBloomerang::fireBoomerang(SexyVector2 *param_1,SexyVector3 *param_2,bool param_3)

{
  int iVar1;
  char cVar2;
  float *pfVar3;
  Projectile *this;
  DVec3 *this_00;
  long lVar4;
  undefined8 uVar5;
  _func_void *extraout_x1;
  _func_void *p_Var6;
  _func_void *extraout_x1_00;
  _func_void *extraout_x1_01;
  SexyVector3 *this_01;
  char in_w3;
  long lVar7;
  Plant *this_02;
  float fVar8;
  double dVar9;
  float fVar10;
  undefined4 uVar11;
  float local_30;
  float local_2c;
  undefined4 local_28;
  float local_24;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  long local_8;
  
  this_01 = (SexyVector3 *)(ulong)param_3;
  local_8 = ___stack_chk_guard;
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(param_1 + 0x10));
  fVar10 = pfVar3[1];
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_30,*pfVar3,fVar10);
  this_02 = *(Plant **)(param_1 + 0x10);
  *(undefined4 *)(this_02 + 0x150) = 0;
  if (*(code **)(*(long *)this_02 + 0x1f8) == Plant::IsInPlantFoodState) {
    cVar2 = Plant::IsInPlantFoodState(this_02);
    p_Var6 = extraout_x1;
  }
  else {
    cVar2 = (**(code **)(*(long *)this_02 + 0x1f8))();
    this_02 = *(Plant **)(param_1 + 0x10);
    p_Var6 = extraout_x1_00;
  }
  if (cVar2 != '\0') {
    cVar2 = Plant::GetAvatarEnable(this_02);
    this_02 = *(Plant **)(param_1 + 0x10);
    p_Var6 = extraout_x1_01;
    if (cVar2 != '\0') {
      *(undefined4 *)(this_02 + 0x150) = 1;
    }
  }
  std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)&local_28,p_Var6);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)&local_28);
  Plant::Fire(this_02,(RtWeakPtr<Sexy::SoundResource> *)&local_18,0xffffffff,0);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  Sexy::RtId::~RtId((RtId *)&local_28);
  lVar7 = *(long *)(param_1 + 0x10);
  *(undefined4 *)(lVar7 + 0x150) = 0xffffffff;
  lVar7 = FUN_03feba04(lVar7);
  this_00 = (DVec3 *)Projectile::GetVelocity(this);
  fVar8 = (float)DVec3::getLength(this_00);
  local_28 = Sexy::SexyVector3::operator*(this_01,fVar8);
  local_24 = fVar10;
  if (in_w3 == '\0') {
    BloomerangProjectile::SetBoundaryPosition
              ((BloomerangProjectile *)this,(SexyVector2 *)&local_30,(SexyVector2 *)param_2);
    BloomerangProjectile::SetOutgoingHitCount((BloomerangProjectile *)this,*(int *)(lVar7 + 700));
  }
  else {
    BloomerangProjectile::SetTargets
              ((BloomerangProjectile *)this,(SexyVector2 *)&local_30,(SexyVector2 *)param_2);
    lVar4 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
    iVar1 = DAT_06ae7048 + 1;
    dVar9 = sin((double)((float)DAT_06ae7048 * 10.0));
    local_30 = (float)((double)local_30 + dVar9 * (double)*(float *)(this_01 + 4) * 15.0);
    local_2c = (float)((double)local_2c + dVar9 * (double)*(float *)this_01 * 10.0);
    fVar8 = (float)((double)*(float *)(lVar4 + 8) + dVar9 * (double)*(float *)this_01 * 15.0);
    DAT_06ae7048 = iVar1;
    Projectile::SetPosition(this,local_30,local_2c,fVar8);
    uVar5 = FUN_03feadec(*(undefined8 *)(this + 0xe0));
    uVar5 = operator|(uVar5,0x2000);
    FUN_03feadf0(this + 0xe0,uVar5);
    BloomerangProjectile::SetOutgoingHitCount((BloomerangProjectile *)this,-1);
    fVar10 = (float)PlantFramework::Rand((PlantFramework *)param_1,0.6);
    uVar11 = 0x3f333333;
    local_18 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_28,fVar10 + 0.7);
    local_14 = uVar11;
    local_10 = fVar8;
    Sexy::SexyVector3::operator=((SexyVector3 *)&local_28,(SexyVector3 *)&local_18);
  }
  BloomerangProjectile::SetBaseVelocity((BloomerangProjectile *)this,(SexyVector3 *)&local_28);
  BloomerangProjectile::SetPauseDuration
            ((BloomerangProjectile *)this,*(float *)(lVar7 + 0x2cc),*(bool *)(lVar7 + 0x2c0));
  BloomerangProjectile::SetSlowdown
            ((BloomerangProjectile *)this,*(float *)(lVar7 + 0x2c4),*(float *)(lVar7 + 0x2c8));
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBloomerang::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantBloomerang::Fire(SexyVector2 *param_1)

{
  long lVar1;
  FastCurve aFStack_20 [8];
  Vec3 aVStack_18 [16];
  long local_8;
  
  param_1[0x30] = (SexyVector2)0x0;
  local_8 = ___stack_chk_guard;
  lVar1 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          **)(param_1 + 0x10));
  Sexy::FastCurve::SetOutRange(aFStack_20,800.0,*(float *)(lVar1 + 4));
  EATextSquish::Vec3::Vec3(aVStack_18,1.0,0.0,0.0);
  fireBoomerang(param_1,(SexyVector3 *)aFStack_20,SUB81(aVStack_18,0));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBloomerang::UpdatePlantfood() */

void __thiscall PlantBloomerang::UpdatePlantfood(PlantBloomerang *this)

{
  long lVar1;
  float *pfVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  SexyVector3 *this_01;
  int iVar3;
  code *pcVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float local_98;
  float local_94;
  undefined8 local_90;
  undefined4 local_88;
  float fStack_84;
  undefined4 local_80;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  Vec3 aVStack_68 [12];
  Vec3 aVStack_5c [12];
  Vec3 aVStack_50 [12];
  Vec3 aVStack_44 [12];
  Vec3 aVStack_38 [12];
  Vec3 aVStack_2c [12];
  Vec3 aVStack_20 [12];
  Vec3 aVStack_14 [12];
  long local_8;
  
  fVar7 = *(float *)(this + 0x28);
  local_8 = ___stack_chk_guard;
  fVar5 = (float)PVZ_T();
  if ((fVar7 <= fVar5) &&
     (iVar3 = *(int *)(this + 0x2c), lVar1 = FUN_03feba04(*(undefined8 *)(this + 0x10)),
     iVar3 < *(int *)(lVar1 + 0x2b8))) {
    iVar3 = 0;
    EATextSquish::Vec3::Vec3(aVStack_68,1.0,0.0,0.0);
    EATextSquish::Vec3::Vec3(aVStack_5c,0.0,-1.0,0.0);
    EATextSquish::Vec3::Vec3(aVStack_50,-1.0,0.0,0.0);
    EATextSquish::Vec3::Vec3(aVStack_44,0.0,1.0,0.0);
    EATextSquish::Vec3::Vec3(aVStack_38,10.0,0.0,0.0);
    EATextSquish::Vec3::Vec3(aVStack_2c,0.0,-20.0,0.0);
    EATextSquish::Vec3::Vec3(aVStack_20,-40.0,0.0,0.0);
    uVar6 = 0;
    EATextSquish::Vec3::Vec3(aVStack_14,0.0,20.0,0.0);
    do {
      Board::GetGridBoundingRect();
      pfVar2 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        **)(this + 0x10));
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,*pfVar2,pfVar2[1]);
      ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                ((ResistenceValueInfo *)&local_90);
      fVar5 = local_94;
      if (iVar3 == 2) {
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,(float)local_78,local_94);
        local_90 = CONCAT44(fStack_84,local_88);
      }
      else if (iVar3 == 3) {
        fVar5 = (float)(local_74 + local_6c);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,local_98,fVar5);
        local_90 = CONCAT44(fStack_84,local_88);
      }
      else if (iVar3 == 1) {
        fVar5 = (float)local_74;
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,local_98,fVar5);
        local_90 = CONCAT44(fStack_84,local_88);
      }
      else {
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,(float)(local_78 + local_70),local_94);
        local_90 = CONCAT44(fStack_84,local_88);
      }
      lVar1 = (long)iVar3;
      iVar3 = iVar3 + 1;
      this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)fireBoomerang((SexyVector2 *)this,(SexyVector3 *)&local_90,
                                 (bool)((char)aVStack_68 + (char)(lVar1 * 0xc)));
      pcVar4 = *(code **)(*(long *)this_00 + 0x78);
      this_01 = (SexyVector3 *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost(this_00);
      local_88 = Sexy::SexyVector3::operator+(this_01,(SexyVector3 *)(aVStack_38 + lVar1 * 0xc));
      fStack_84 = fVar5;
      local_80 = uVar6;
      (*pcVar4)(this_00,(FastCurve *)&local_88);
    } while (iVar3 != 4);
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
    fVar5 = (float)PVZ_T();
    *(float *)(this + 0x28) = fVar5 + 0.07;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBloomerang::GetRefundSunAmount() */

void __thiscall PlantBloomerang::GetRefundSunAmount(PlantBloomerang *this)

{
  int iVar1;
  PlantTypeBloomerang *this_00;
  float fVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_03feae00(*(undefined8 *)(this + 0x10));
  if (iVar1 < 2) {
    fVar2 = (float)PlantFramework::GetRefundSunAmount((PlantFramework *)this);
  }
  else {
    Plant::GetType();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    iVar1 = PlantTypeBloomerang::GetPlantCount(this_00);
    iVar1 = PlantTypeBloomerang::GetCost(this_00,iVar1 + -1,0xfffffffe);
    fVar2 = (float)iVar1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBloomerang::Initialize() */

void __thiscall PlantBloomerang::Initialize(PlantBloomerang *this)

{
  int iVar1;
  long *plVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  this[0x30] = (PlantBloomerang)0x0;
  iVar1 = FUN_03feae00(*(undefined8 *)(this + 0x10));
  if (1 < iVar1) {
    Plant::GetType();
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    iVar1 = (**(code **)(*plVar2 + 0x70))(plVar2,0xfffffffe);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    MessageRouter::Post<Plant*,int,Plant*,int>
              ((MessageRouter *)gMessageRouter,Message::PlantCostChanged,*(Plant **)(this + 0x10),
               iVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBloomerang::onKilled(bool) */

void PlantBloomerang::onKilled(bool param_1)

{
  int iVar1;
  PlantTypeBloomerang *this;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_03feae00(*(undefined8 *)((ulong)param_1 + 0x10));
  if (1 < iVar1) {
    Plant::GetType();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    iVar1 = PlantTypeBloomerang::GetPlantCount(this);
    iVar1 = PlantTypeBloomerang::GetCost(this,iVar1 + -1,0xfffffffe);
    MessageRouter::Post<Plant*,int,Plant*,int>
              ((MessageRouter *)gMessageRouter,Message::PlantCostChanged,
               *(Plant **)((ulong)param_1 + 0x10),iVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBloomerang::OverrideProjectileCollision(Projectile*) */

undefined8 __thiscall
PlantBloomerang::OverrideProjectileCollision(PlantBloomerang *this,Projectile *param_1)

{
  BloomerangProjectile *pBVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_1 != (Projectile *)0x0) {
    pBVar1 = Sexy::RtObject::Cast<BloomerangProjectile>((RtObject *)param_1);
    if (pBVar1 != (BloomerangProjectile *)0x0) {
      lVar2 = Projectile::GetInstigator(param_1);
      if (*(long *)(this + 0x10) == lVar2) {
        return 0;
      }
    }
  }
  uVar3 = PlantFramework::OverrideProjectileCollision((PlantFramework *)this,param_1);
  return uVar3;
}

