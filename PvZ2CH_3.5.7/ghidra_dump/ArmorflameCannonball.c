// Class: ArmorflameCannonball


/* ArmorflameCannonball::~ArmorflameCannonball() */

void __thiscall ArmorflameCannonball::~ArmorflameCannonball(ArmorflameCannonball *this)

{
  *(undefined ***)this = &PTR_GetClass_0682d260;
  *(undefined ***)(this + 0x10) = &PTR__ArmorflameCannonball_0682d450;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to ArmorflameCannonball::~ArmorflameCannonball() */

void __thiscall ArmorflameCannonball::~ArmorflameCannonball(ArmorflameCannonball *this)

{
  ~ArmorflameCannonball(this + -0x10);
  return;
}


/* ArmorflameCannonball::~ArmorflameCannonball() */

void __thiscall ArmorflameCannonball::~ArmorflameCannonball(ArmorflameCannonball *this)

{
  ~ArmorflameCannonball(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ArmorflameCannonball::~ArmorflameCannonball() */

void __thiscall ArmorflameCannonball::~ArmorflameCannonball(ArmorflameCannonball *this)

{
  ~ArmorflameCannonball(this + -0x10);
  return;
}


/* ArmorflameCannonball::ArmorflameCannonball() */

void __thiscall ArmorflameCannonball::ArmorflameCannonball(ArmorflameCannonball *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_0682d260;
  *(undefined ***)(this + 0x10) = &PTR__ArmorflameCannonball_0682d450;
  return;
}


/* ArmorflameCannonball::StaticNew() */

ArmorflameCannonball * ArmorflameCannonball::StaticNew(void)

{
  ArmorflameCannonball *this;
  
  this = ::operator_new(0x1c8);
  ArmorflameCannonball(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArmorflameCannonball::StaticClassInit() */

void ArmorflameCannonball::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArmorflameCannonball");
    (*pcVar2)(plVar1,asStack_10,FUN_042c0cd0,0x1c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArmorflameCannonball::StaticGetClass() */

long * ArmorflameCannonball::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArmorflameCannonball",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArmorflameCannonball::GetClass() const */

long * ArmorflameCannonball::GetClass(void)

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
  (*pcVar3)(plVar1,"ArmorflameCannonball",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArmorflameCannonball::InitializeArmorflameCannonball(bool) */

void __thiscall
ArmorflameCannonball::InitializeArmorflameCannonball(ArmorflameCannonball *this,bool param_1)

{
  RtWeakPtr *this_00;
  bool bVar1;
  RtObject *pRVar2;
  Plant *pPVar3;
  PlantArmorflame *this_01;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  
  this_00 = (RtWeakPtr *)(this + 0x68);
  *(undefined4 *)(this + 0x1bc) = 0x3f000000;
  *(undefined4 *)(this + 0x1b8) = 0;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    pRVar2 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    bVar1 = Sexy::RtObject::IsA<Plant>(pRVar2);
    if (bVar1) {
      pRVar2 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      pPVar3 = Sexy::RtObject::Cast<Plant>(pRVar2);
      this_01 = Sexy::RtObject::Cast<PlantArmorflame>(*(RtObject **)(pPVar3 + 0xa8));
      if (this_01 != (PlantArmorflame *)0x0) {
        uVar6 = PlantArmorflame::GetCannonballPiercingDamageImprove(this_01);
        *(undefined4 *)(this + 0x1b8) = uVar6;
        uVar6 = PlantArmorflame::GetCannonballPiercingSlowDownRate(this_01);
        *(undefined4 *)(this + 0x1bc) = uVar6;
        fVar5 = (float)PlantArmorflame::GetCannonballExtensionOfTime(this_01);
        fVar5 = (float)(int)fVar5;
        goto LAB_042c1eb0;
      }
    }
  }
  fVar5 = 6.0;
LAB_042c1eb0:
  this[0x1a5] = (ArmorflameCannonball)param_1;
  fVar4 = (float)PVZ_T();
  *(float *)(this + 0x1a8) = fVar5 + fVar4 + -1.0;
  fVar4 = (float)PVZ_T();
  *(float *)(this + 0x1ac) = fVar4 + fVar5;
  fVar5 = (float)PVZ_T();
  *(float *)(this + 0x1b0) = fVar5 + 1.0;
  uVar6 = PVZ_T();
  this[0x1c0] = (ArmorflameCannonball)0x0;
  *(undefined4 *)(this + 0x1b4) = uVar6;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArmorflameCannonball::OnCollideEntity(BoardEntity*) */

void __thiscall
ArmorflameCannonball::OnCollideEntity(ArmorflameCannonball *this,BoardEntity *param_1)

{
  char cVar1;
  int iVar2;
  Zombie *this_00;
  UnchartedBoostMgr *pUVar3;
  long lVar4;
  code *pcVar5;
  float fVar6;
  Point aPStack_d8 [8];
  undefined4 local_d0;
  undefined4 local_cc;
  DamageInfo aDStack_c8 [8];
  float local_c0;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar6 = (float)PVZ_T();
  if (fVar6 <= *(float *)(this + 0x1b4)) goto LAB_042c32ac;
  fVar6 = (float)PVZ_T();
  *(float *)(this + 0x1b4) = fVar6 + 0.2;
  DamageInfo::DamageInfo(aDStack_c8);
  (**(code **)(*(long *)this + 0x178))(this,aDStack_c8,param_1);
  if (this[0x1a5] == (ArmorflameCannonball)0x0) {
    local_c0 = *(float *)(this + 0x1b8) * local_c0 * 0.2 + local_c0 * 0.2;
  }
  else {
    lVar4 = Projectile::GetInstigator((Projectile *)this);
    if (lVar4 != 0) {
      iVar2 = FUN_042c0140(*(undefined4 *)(lVar4 + 0x50));
      local_c0 = (float)(iVar2 + 1) * 32.0;
    }
  }
  if ((((param_1 == (BoardEntity *)0x0) ||
       (this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), this_00 == (Zombie *)0x0)) ||
      (cVar1 = Zombie::IsBoss(this_00), cVar1 != '\0')) ||
     ((cVar1 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar1 != '\0' ||
      (cVar1 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar1 != '\0')))) {
LAB_042c3350:
    (**(code **)(*(long *)param_1 + 0x110))(param_1,aDStack_c8);
  }
  else {
    Zombie::ApplyCondition((Zombie *)0x3dcccccd,0,this_00,0x33,1);
    pUVar3 = (UnchartedBoostMgr *)Sexy::LazySingleton<UnchartedBoostMgr>::GetInstancePtr();
    fVar6 = (float)UnchartedBoostMgr::GetBoostValue(pUVar3,0,0x12,0);
    if (fVar6 <= 0.0) goto LAB_042c3350;
    fVar6 = (float)Zombie::getLeftHitPer(this_00,true);
    if (0.5 <= fVar6) {
      cVar1 = Zombie::HasCondition(this_00,0x32);
      if (cVar1 == '\0') {
        Zombie::ApplyCondition((Zombie *)0x40a00000,0,this_00,0x32,1);
        Zombie::SetConditionTracker(0x42480000,this_00,0x32);
      }
      goto LAB_042c3350;
    }
    cVar1 = (**(code **)(*(long *)this_00 + 0x378))(this_00);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)this_00 + 0x240))(this_00);
    }
    cVar1 = Zombie::CanTakeFatalDamage(this_00);
    if (cVar1 != '\0') {
      pcVar5 = *(code **)(*(long *)this_00 + 0x120);
      Sexy::Point::Point(aPStack_d8,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_d0,1.0,0.0);
      DamageInfo::DamageInfo((DamageInfo *)0x0,local_d0,local_cc,aDStack_68,4,0,aPStack_d8,0);
      (*pcVar5)(this_00,aDStack_68);
      DamageInfo::~DamageInfo(aDStack_68);
    }
  }
  DamageInfo::~DamageInfo(aDStack_c8);
LAB_042c32ac:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArmorflameCannonball::explode() */

void __thiscall ArmorflameCannonball::explode(ArmorflameCannonball *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  UnchartedBoostMgr *pUVar5;
  long lVar6;
  undefined8 *puVar7;
  Zombie *this_00;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  code *pcVar11;
  float fVar12;
  float fVar13;
  int local_f8;
  int local_f4;
  Point aPStack_f0 [8];
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  DamageInfo aDStack_c8 [8];
  float local_c0;
  string asStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_68,"Play_CherryBomb");
  RealObject::PlayPositionalSound((RealObject *)this,asStack_68,0.0);
  std::string::~string(asStack_68);
  nop();
  pfVar4 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  iVar2 = BoardTransforms::BoardSpaceToGridXUnbounded(*pfVar4);
  iVar3 = BoardTransforms::BoardSpaceToGridYUnbounded(pfVar4[1]);
  Sexy::Point::Point((Point *)&local_f8,iVar2,iVar3);
  BoardTransforms::GridToBoardSpaceX(local_f8);
  BoardTransforms::GridToBoardSpaceY(local_f4);
  DamageInfo::DamageInfo(aDStack_c8);
  (**(code **)(*(long *)this + 0x178))(this,aDStack_c8,0);
  if (this[0x1a5] == (ArmorflameCannonball)0x0) {
    local_c0 = local_c0 * 3.0;
  }
  else {
    lVar6 = Projectile::GetInstigator((Projectile *)this);
    if (lVar6 != 0) {
      iVar2 = FUN_042c0140(*(undefined4 *)(lVar6 + 0x50));
      local_c0 = (float)((iVar2 + 1) * 0x1e0);
    }
  }
  pUVar5 = (UnchartedBoostMgr *)Sexy::LazySingleton<UnchartedBoostMgr>::GetInstancePtr();
  uVar10 = 0;
  fVar12 = (float)UnchartedBoostMgr::GetBoostValue(pUVar5,0,0x12,0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_e0);
  EntityFinder::GetEntitiesAtGridSquare
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_e0,2,local_f8,
             local_f4);
  uVar9 = local_e0;
  lVar6 = FUN_042c0164(local_e0,local_d8);
  if (lVar6 != 0) {
    do {
      puVar7 = (undefined8 *)FUN_042c0170(uVar9,uVar10);
      this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar7);
      if (this_00 != (Zombie *)0x0) {
        if ((((0.0 < fVar12) && (cVar1 = Zombie::IsBoss(this_00), cVar1 == '\0')) &&
            (cVar1 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar1 == '\0')) &&
           (cVar1 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar1 == '\0')) {
          fVar13 = (float)Zombie::getLeftHitPer(this_00,true);
          if (fVar13 < 0.5) {
            cVar1 = (**(code **)(*(long *)this_00 + 0x378))(this_00);
            if (cVar1 != '\0') {
              (**(code **)(*(long *)this_00 + 0x240))(this_00);
            }
            cVar1 = Zombie::CanTakeFatalDamage(this_00);
            if (cVar1 != '\0') {
              pcVar11 = *(code **)(*(long *)this_00 + 0x120);
              Sexy::Point::Point(aPStack_f0,-1,-1);
              Sexy::FastCurve::SetOutRange((FastCurve *)&local_e8,1.0,0.0);
              DamageInfo::DamageInfo
                        ((DamageInfo *)0x0,local_e8,local_e4,asStack_68,4,0,aPStack_f0,0);
              (*pcVar11)(this_00,asStack_68);
              DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
            }
            goto LAB_042c36b8;
          }
          cVar1 = Zombie::HasCondition(this_00,0x32);
          if (cVar1 == '\0') {
            Zombie::ApplyCondition((Zombie *)0x40a00000,0,this_00,0x32,1);
            Zombie::SetConditionTracker(0x42480000,this_00,0x32);
          }
        }
        (**(code **)(*(long *)this_00 + 0x110))(this_00,aDStack_c8);
      }
LAB_042c36b8:
      uVar9 = local_e0;
      uVar10 = uVar10 + 1;
      uVar8 = FUN_042c0164(local_e0,local_d8);
    } while (uVar10 < uVar8);
  }
  (**(code **)(*(long *)this + 0x168))(this,0);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_e0);
  DamageInfo::~DamageInfo(aDStack_c8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArmorflameCannonball::spawnProjectile() */

void __thiscall ArmorflameCannonball::spawnProjectile(ArmorflameCannonball *this)

{
  int *piVar1;
  undefined8 uVar2;
  float *pfVar3;
  Projectile *this_00;
  DVec3 *this_01;
  BoardEntity *pBVar4;
  ArmorflameMissile *this_02;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  string asStack_48 [8];
  wstring awStack_40 [8];
  RtName aRStack_38 [16];
  int local_28 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  std::string::string(asStack_48,"ArmorflameMissile");
  lVar6 = 0;
  Sexy::ToWString(asStack_48);
  Sexy::RtName::RtName(aRStack_38,awStack_40);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_50,uVar2,0xc,aRStack_38);
  Sexy::RtName::~RtName(aRStack_38);
  FUN_05476c50(awStack_40);
  std::string::~string(asStack_48);
  nop();
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar8 = *pfVar3;
  fVar10 = pfVar3[1];
  fVar9 = pfVar3[2];
  local_28[0] = 0x5a;
  local_28[1] = 0x6e;
  local_28[2] = 0x82;
  local_28[3] = 0x96;
  local_28[4] = 0xd2;
  local_28[5] = 0xe6;
  local_28[6] = 0xfa;
  local_28[7] = 0x10e;
  do {
    uVar5 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_50);
    uVar2 = Projectile::GetInstigator((Projectile *)this);
    this_00 = (Projectile *)
              Board::AddProjectile((Board *)(fVar8 - 20.0),fVar10,fVar9,uVar5,aRStack_38,uVar2,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    piVar1 = local_28 + lVar6;
    lVar6 = lVar6 + 1;
    Sexy::SexyMath::DegToRad((float)*piVar1);
    FUN_042c0138(this_00 + 0xc4);
    FUN_042c01c8(this_00 + 0x24);
    this_01 = (DVec3 *)Projectile::GetVelocity(this_00);
    fVar7 = (float)DVec3::getLength(this_01);
    Projectile::SetRotatedVelocity(this_00,fVar7);
    pBVar4 = (BoardEntity *)Projectile::GetInstigator((Projectile *)this);
    Projectile::SetInstigator(this_00,pBVar4);
    nop();
    ArmorflameMissile::InitializeArmorflameMissile(this_02,(bool)this[0x1a5]);
  } while (lVar6 != 8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArmorflameCannonball::onUpdate(float) */

void ArmorflameCannonball::onUpdate(float param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *pRVar1;
  char cVar2;
  int iVar3;
  RealObject *in_x0;
  ulong uVar4;
  undefined8 *puVar5;
  Zombie *pZVar6;
  GridItem *pGVar7;
  BoardEntity **ppBVar8;
  long lVar9;
  PopAnimRig *pPVar10;
  char *pcVar11;
  ulong uVar12;
  undefined8 uVar13;
  float fVar14;
  undefined4 uVar15;
  DummyInit *local_a8;
  string asStack_90 [8];
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 local_48;
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar14 = (float)PVZ_T();
  if (*(float *)(in_x0 + 0x1ac) < fVar14) {
    uVar15 = PVZ_EOT();
    *(undefined4 *)(in_x0 + 0x1ac) = uVar15;
    explode((ArmorflameCannonball *)in_x0);
    goto LAB_042c5708;
  }
  fVar14 = (float)PVZ_T();
  if (*(float *)(in_x0 + 0x1a8) < fVar14) {
    uVar15 = PVZ_EOT();
    pRVar1 = (RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x38);
    *(undefined4 *)(in_x0 + 0x1a8) = uVar15;
    pPVar10 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    std::string::string((string *)&local_50,"stage1");
    cVar2 = PopAnimRig::IsAnimStringActive(pPVar10,(string *)&local_50);
    std::string::~string((string *)&local_50);
    nop();
    if (cVar2 == '\0') {
      pPVar10 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
      std::string::string((string *)&local_50,"stage1_drill");
      cVar2 = PopAnimRig::IsAnimStringActive(pPVar10,(string *)&local_50);
      std::string::~string((string *)&local_50);
      nop();
      if (cVar2 == '\0') {
        pPVar10 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
        std::string::string((string *)&local_50,"pf_stage1");
        cVar2 = PopAnimRig::IsAnimStringActive(pPVar10,(string *)&local_50);
        std::string::~string((string *)&local_50);
        nop();
        if (cVar2 != '\0') {
          pPVar10 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
          std::string::string((string *)&local_50,"pf_stage2");
          Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
          goto LAB_042c58e0;
        }
        pPVar10 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
        std::string::string((string *)&local_50,"pf_stage1_drill");
        cVar2 = PopAnimRig::IsAnimStringActive(pPVar10,(string *)&local_50);
        std::string::~string((string *)&local_50);
        nop();
        if (cVar2 == '\0') goto LAB_042c5538;
        pPVar10 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
        pcVar11 = "pf_stage2_drill";
      }
      else {
        pPVar10 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
        pcVar11 = "stage2_drill";
      }
      std::string::string((string *)&local_50,pcVar11);
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    }
    else {
      pPVar10 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
      std::string::string((string *)&local_50,"stage2");
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    }
LAB_042c58e0:
    local_a8 = aDStack_38;
    PopAnimRig::PlayAndContinue(pPVar10,(string *)&local_50,0,local_a8);
    std::string::~string((string *)&local_50);
    nop();
    fVar14 = (float)PVZ_T();
    if (*(float *)(in_x0 + 0x1b0) < fVar14) goto LAB_042c5908;
  }
  else {
LAB_042c5538:
    fVar14 = (float)PVZ_T();
    if (*(float *)(in_x0 + 0x1b0) < fVar14) {
LAB_042c5908:
      fVar14 = (float)PVZ_T();
      *(float *)(in_x0 + 0x1b0) = fVar14 + 1.0;
      spawnProjectile((ArmorflameCannonball *)in_x0);
    }
  }
  uVar12 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_68);
  Projectile::CalcSweptCollisionRectBoardSpace();
  (**(code **)(*(long *)in_x0 + 0x188))();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50);
  uVar13 = local_68;
  uVar4 = FUN_042c0164(local_68,local_60);
  if (uVar4 != 0) {
    do {
      puVar5 = (undefined8 *)FUN_042c0170(uVar13,uVar12);
      if ((RtObject *)*puVar5 != (RtObject *)0x0) {
        pZVar6 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar5);
        if ((((pZVar6 != (Zombie *)0x0) &&
             (cVar2 = RealObject::IsOnOpposingTeam(pZVar6,1), cVar2 != '\0')) &&
            (cVar2 = (**(code **)(*(long *)pZVar6 + 0x328))(pZVar6), cVar2 == '\0')) &&
           (cVar2 = (**(code **)(*(long *)pZVar6 + 0x330))(pZVar6), cVar2 == '\0')) {
          ppBVar8 = (BoardEntity **)FUN_042c0170(local_68,uVar12);
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50,ppBVar8);
        }
        uVar13 = local_68;
        puVar5 = (undefined8 *)FUN_042c0170(local_68,uVar12);
        if ((((RtObject *)*puVar5 != (RtObject *)0x0) &&
            (pGVar7 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar5), uVar13 = local_68,
            pGVar7 != (GridItem *)0x0)) &&
           (cVar2 = (**(code **)(*(long *)pGVar7 + 0x200))(), uVar13 = local_68, cVar2 != '\0')) {
          ppBVar8 = (BoardEntity **)FUN_042c0170(local_68,uVar12);
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50,ppBVar8);
          uVar13 = local_68;
        }
        uVar4 = FUN_042c0164(uVar13,local_60);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar4);
  }
  iVar3 = FUN_042c0164(local_50,local_48);
  if (in_x0[0x1c0] == (RealObject)0x0) {
    if (0 < iVar3) {
      in_x0[0x1c0] = (RealObject)0x1;
      pRVar1 = (RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x38);
      puVar5 = (undefined8 *)Projectile::GetVelocity((Projectile *)in_x0);
      local_88 = *puVar5;
      local_80 = *(undefined4 *)(puVar5 + 1);
      lVar9 = Projectile::getProps((Projectile *)in_x0);
      lVar9 = FUN_042c01c4(*(undefined8 *)(lVar9 + 0x78));
      local_88 = CONCAT44(local_88._4_4_,*(float *)(in_x0 + 0x1bc) * *(float *)(lVar9 + 4));
      Projectile::SetVelocity((Projectile *)in_x0,(SexyVector3 *)&local_88);
      pPVar10 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
      std::string::string(asStack_90,"stage1");
      cVar2 = PopAnimRig::IsAnimStringActive(pPVar10,asStack_90);
      std::string::~string(asStack_90);
      nop();
      if (cVar2 == '\0') {
        pPVar10 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
        std::string::string(asStack_90,"stage2");
        cVar2 = PopAnimRig::IsAnimStringActive(pPVar10,asStack_90);
        std::string::~string(asStack_90);
        nop();
        if (cVar2 == '\0') {
          pPVar10 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
          std::string::string(asStack_90,"pf_stage1");
          cVar2 = PopAnimRig::IsAnimStringActive(pPVar10,asStack_90);
          std::string::~string(asStack_90);
          nop();
          if (cVar2 != '\0') {
            pPVar10 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
            pcVar11 = "pf_stage1_drill";
            goto LAB_042c57f8;
          }
          pPVar10 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
          std::string::string(asStack_90,"pf_stage2");
          cVar2 = PopAnimRig::IsAnimStringActive(pPVar10,asStack_90);
          std::string::~string(asStack_90);
          nop();
          if (cVar2 == '\0') goto LAB_042c5698;
          pPVar10 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
          pcVar11 = "pf_stage2_drill";
        }
        else {
          pPVar10 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
          pcVar11 = "stage2_drill";
        }
        std::string::string(asStack_90,pcVar11);
        Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
      }
      else {
        pPVar10 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
        pcVar11 = "stage1_drill";
LAB_042c57f8:
        std::string::string(asStack_90,pcVar11);
        Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
      }
      local_a8 = aDStack_38;
      PopAnimRig::PlayAndContinue(pPVar10,asStack_90,0,local_a8);
      std::string::~string(asStack_90);
      nop();
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_68);
      goto LAB_042c5708;
    }
  }
  else if (iVar3 == 0) {
    in_x0[0x1c0] = (RealObject)0x0;
    pRVar1 = (RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x38);
    puVar5 = (undefined8 *)Projectile::GetVelocity((Projectile *)in_x0);
    local_88 = *puVar5;
    local_80 = *(undefined4 *)(puVar5 + 1);
    lVar9 = Projectile::getProps((Projectile *)in_x0);
    lVar9 = FUN_042c01c4(*(undefined8 *)(lVar9 + 0x78));
    local_88 = CONCAT44(local_88._4_4_,*(undefined4 *)(lVar9 + 4));
    Projectile::SetVelocity((Projectile *)in_x0,(SexyVector3 *)&local_88);
    pPVar10 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    std::string::string(asStack_90,"stage1_drill");
    cVar2 = PopAnimRig::IsAnimStringActive(pPVar10,asStack_90);
    std::string::~string(asStack_90);
    nop();
    if (cVar2 == '\0') {
      pPVar10 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
      std::string::string(asStack_90,"stage2_drill");
      cVar2 = PopAnimRig::IsAnimStringActive(pPVar10,asStack_90);
      std::string::~string(asStack_90);
      nop();
      if (cVar2 == '\0') {
        pPVar10 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
        std::string::string(asStack_90,"pf_stage1_drill");
        cVar2 = PopAnimRig::IsAnimStringActive(pPVar10,asStack_90);
        std::string::~string(asStack_90);
        nop();
        if (cVar2 != '\0') {
          pPVar10 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
          pcVar11 = "pf_stage1";
          goto LAB_042c5c5c;
        }
        pPVar10 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
        std::string::string(asStack_90,"pf_stage2_drill");
        cVar2 = PopAnimRig::IsAnimStringActive(pPVar10,asStack_90);
        std::string::~string(asStack_90);
        nop();
        if (cVar2 == '\0') goto LAB_042c5698;
        pPVar10 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
        pcVar11 = "pf_stage2";
      }
      else {
        pPVar10 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
        pcVar11 = "stage2";
      }
      std::string::string(asStack_90,pcVar11);
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    }
    else {
      pPVar10 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
      pcVar11 = "stage1";
LAB_042c5c5c:
      std::string::string(asStack_90,pcVar11);
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    }
    local_a8 = aDStack_38;
    PopAnimRig::PlayAndContinue(pPVar10,asStack_90,0,local_a8);
    std::string::~string(asStack_90);
    nop();
  }
  else {
    std::string::string((string *)&local_88,"Play_Plant_Inferno_Projectile_Loop_01");
    RealObject::PlayPositionalSound(in_x0,(string *)&local_88,0.0);
    std::string::~string((string *)&local_88);
    nop();
  }
LAB_042c5698:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_68);
LAB_042c5708:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

