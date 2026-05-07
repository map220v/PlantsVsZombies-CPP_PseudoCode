// Class: PlantHeliconiaGunner


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeliconiaGunner::CancelPlantfood() */

void __thiscall PlantHeliconiaGunner::CancelPlantfood(PlantHeliconiaGunner *this)

{
  RealObject *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  this[100] = (PlantHeliconiaGunner)0x0;
  this_00 = *(RealObject **)(this + 0x10);
  std::string::string(asStack_10,"Stop_Attack");
  RealObject::PlayPositionalSound(this_00,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHeliconiaGunner::PlantHeliconiaGunner() */

void __thiscall PlantHeliconiaGunner::PlantHeliconiaGunner(PlantHeliconiaGunner *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined4 *)(this + 0x60) = 2;
  *(undefined ***)this = &PTR_GetClass_069ac800;
  return;
}


/* PlantHeliconiaGunner::StaticNew() */

PlantHeliconiaGunner * PlantHeliconiaGunner::StaticNew(void)

{
  PlantHeliconiaGunner *this;
  
  this = ::operator_new(0x70);
  PlantHeliconiaGunner(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeliconiaGunner::StaticClassInit() */

void PlantHeliconiaGunner::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantHeliconiaGunner");
    (*pcVar2)(plVar1,asStack_10,FUN_04d31440,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHeliconiaGunner::StaticGetClass() */

long * PlantHeliconiaGunner::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantHeliconiaGunner",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantHeliconiaGunner::GetClass() const */

long * PlantHeliconiaGunner::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantHeliconiaGunner",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantHeliconiaGunner::canBeStun(Zombie*) */

undefined8 __thiscall PlantHeliconiaGunner::canBeStun(PlantHeliconiaGunner *this,Zombie *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = Zombie::IsBoss(param_1);
  if ((((cVar1 == '\0') && (cVar1 = Zombie::HasCondition(param_1,2), cVar1 == '\0')) &&
      (cVar1 = Zombie::HasCondition(param_1,0x18), cVar1 == '\0')) &&
     (cVar1 = Zombie::IsControlled(param_1), cVar1 == '\0')) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeliconiaGunner::~PlantHeliconiaGunner() */

void __thiscall PlantHeliconiaGunner::~PlantHeliconiaGunner(PlantHeliconiaGunner *this)

{
  RealObject *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_069ac800;
  this_00 = *(RealObject **)(this + 0x10);
  std::string::string(asStack_10,"Stop_Attack");
  RealObject::PlayPositionalSound(this_00,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  PlantFramework::~PlantFramework((PlantFramework *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHeliconiaGunner::~PlantHeliconiaGunner() */

void __thiscall PlantHeliconiaGunner::~PlantHeliconiaGunner(PlantHeliconiaGunner *this)

{
  ~PlantHeliconiaGunner(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeliconiaGunner::isValidTarget(BoardEntity*) */

void __thiscall PlantHeliconiaGunner::isValidTarget(PlantHeliconiaGunner *this,BoardEntity *param_1)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined4 uVar4;
  Zombie *extraout_x0;
  undefined8 uVar5;
  long *extraout_x0_00;
  code *pcVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (BoardEntity *)0x0) &&
     (cVar1 = GameObject::IsDestroyed((GameObject *)param_1), cVar1 == '\0')) {
    uVar2 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
    if (!(bool)uVar2) {
      bVar3 = Sexy::RtObject::IsA<GridItem>((RtObject *)param_1);
      if (bVar3) {
        nop();
        cVar1 = RealObject::IsOnTeam();
        if ((cVar1 == '\0') &&
           (cVar1 = (**(code **)(*extraout_x0_00 + 0x218))(extraout_x0_00,param_1), cVar1 != '\0'))
        {
          uVar2 = (**(code **)(*extraout_x0_00 + 0x200))(extraout_x0_00);
        }
      }
      goto LAB_04d32ab0;
    }
    nop();
    uVar5 = operator|(0x2d,0x80);
    uVar5 = operator|(uVar5,0x200);
    uVar5 = operator|(uVar5,0x800);
    uVar4 = operator|(uVar5,0x2000);
    cVar1 = Zombie::MatchesAny(extraout_x0,uVar4,*(undefined8 *)(this + 0x10));
    if (((cVar1 == '\0') &&
        (cVar1 = (**(code **)(*(long *)extraout_x0 + 0x328))(extraout_x0), cVar1 == '\0')) &&
       (cVar1 = FUN_04d32a64(*(undefined4 *)(extraout_x0 + 0xcc)), cVar1 == '\0')) {
      cVar1 = Zombie::HasCondition(extraout_x0,0x19);
      if (cVar1 == '\0') {
        pcVar6 = *(code **)(*(long *)extraout_x0 + 0x3d0);
        Plant::GetType();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
        uVar2 = (*pcVar6)(extraout_x0,aRStack_10,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
        goto LAB_04d32ab0;
      }
    }
  }
  uVar2 = 0;
LAB_04d32ab0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* PlantHeliconiaGunner::Initialize() */

void __thiscall PlantHeliconiaGunner::Initialize(PlantHeliconiaGunner *this)

{
  int iVar1;
  long lVar2;
  float *pfVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  PlantFramework::Initialize((PlantFramework *)this);
  lVar2 = FUN_04d3325c(*(undefined8 *)(this + 0x10));
  this[100] = (PlantHeliconiaGunner)0x0;
  *(undefined4 *)(this + 0x50) = 0xffffffff;
  uVar6 = PVZ_T();
  *(undefined4 *)(this + 0x54) = uVar6;
  uVar6 = PVZ_T();
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(lVar2 + 0x2f0);
  this[0x58] = (PlantHeliconiaGunner)0x0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x4c) = uVar6;
  *(undefined4 *)(this + 0x2c) = 0x3e20d97c;
  uVar6 = FUN_04d31074(*(undefined8 *)(this + 0x10));
  switch(uVar6) {
  case 1:
    uVar6 = *(undefined4 *)(lVar2 + 0x2e8);
    *(undefined4 *)(this + 0x44) = uVar6;
    *(undefined4 *)(this + 0x40) = uVar6;
    return;
  case 2:
    uVar4 = *(undefined8 *)(lVar2 + 0x2d0);
    uVar5 = 0;
    break;
  case 3:
  case 4:
  case 5:
    uVar4 = *(undefined8 *)(lVar2 + 0x2d0);
    uVar5 = 1;
    break;
  default:
    *(undefined4 *)(this + 0x40) = *(undefined4 *)(this + 0x44);
    return;
  }
  pfVar3 = (float *)FUN_04d310a8(uVar4,uVar5);
  iVar1 = (int)((*pfVar3 + 1.0) * (float)*(int *)(lVar2 + 0x2e8));
  *(int *)(this + 0x44) = iVar1;
  *(int *)(this + 0x40) = iVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeliconiaGunner::ApplyPlantfood() */

void __thiscall PlantHeliconiaGunner::ApplyPlantfood(PlantHeliconiaGunner *this)

{
  int iVar1;
  long lVar2;
  RealObject *this_00;
  undefined4 uVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  this_00 = *(RealObject **)(this + 0x10);
  std::string::string(asStack_10,"Stop_Attack");
  RealObject::PlayPositionalSound(this_00,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  lVar2 = FUN_04d3325c(*(undefined8 *)(this + 0x10));
  iVar1 = *(int *)(lVar2 + 0x2c0);
  FUN_04d31050(asStack_10,*(undefined8 *)(this + 0x10));
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  *(float *)(this + 0x30) = (float)iVar1 / *(float *)(lVar2 + 0x38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  lVar2 = FUN_04d3325c(*(undefined8 *)(this + 0x10));
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(lVar2 + 0x2c0);
  *(undefined4 *)(this + 0x50) = 0xffffffff;
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(this + 0x44);
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0x3e20d97c;
  uVar3 = PVZ_T();
  *(undefined4 *)(this + 0x54) = uVar3;
  uVar3 = PVZ_T();
  lVar2 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x68) = uVar3;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeliconiaGunner::fireProjectile(int, Sexy::RtWeakPtr<ProjectilePropertySheet>, bool) */

void __thiscall
PlantHeliconiaGunner::fireProjectile
          (PlantHeliconiaGunner *this,int param_1,RtWeakPtr<PowerPropertySheet> *param_3,
          byte param_4)

{
  long lVar1;
  float *pfVar2;
  Projectile *this_00;
  DVec3 *this_01;
  undefined8 uVar3;
  uint uVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  string asStack_30 [8];
  wstring awStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [16];
  long local_8;
  
  uVar4 = (uint)param_4;
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_04d3325c(*(undefined8 *)(this + 0x10));
  pfVar2 = (float *)FUN_04d310cc(DAT_06b970e0,(long)param_1);
  fVar12 = *pfVar2;
  fVar11 = pfVar2[1];
  if (param_4 != 0) {
    uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
    std::string::string(asStack_30,"HeliconiaGunnerRocket");
    Sexy::ToWString(asStack_30);
    Sexy::RtName::RtName((RtName *)aRStack_18,awStack_28);
    PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_20,uVar3,0xc,(RtName *)aRStack_18);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=(param_3,(RtWeakPtr *)aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    Sexy::RtName::~RtName((RtName *)aRStack_18);
    FUN_05476c50(awStack_28);
    std::string::~string(asStack_30);
    nop();
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_3);
    uVar4 = *(uint *)(lVar5 + 0x68);
    pfVar2 = (float *)FUN_04d310cc(DAT_06b971c8,(long)param_1);
    fVar12 = *pfVar2;
    fVar11 = pfVar2[1];
  }
  this_02 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              **)(this + 0x10);
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(this_02);
  fVar6 = *pfVar2;
  fVar8 = pfVar2[1];
  fVar10 = *(float *)(this_02 + 0xc4);
  fVar9 = 0.0;
  lVar5 = *(long *)(gLawnApp + 0x9f0);
  if (*(char *)(lVar5 + 0x119) != '\0') {
    fVar9 = pfVar2[2] + 1.0;
  }
  fVar7 = *(float *)(lVar1 + 0x2c4);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)param_3);
  this_00 = (Projectile *)
            Board::AddProjectile
                      ((Board *)(fVar6 + fVar10 * fVar12),fVar8 + fVar10 * fVar11,
                       fVar9 + fVar10 * fVar7,lVar5,aRStack_18,*(undefined8 *)(this + 0x10),uVar4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  DVec2::DVec2((DVec2 *)aRStack_18,-*(float *)(lVar1 + 0x2f4),*(float *)(lVar1 + 0x2f4));
  fVar11 = 45.0;
  switch(param_1) {
  case 0:
    fVar11 = (float)ValueRange::GetRandomValue((ValueRange *)aRStack_18);
    fVar11 = (float)(int)(fVar11 + 135.0);
    break;
  case 1:
    fVar11 = (float)ValueRange::GetRandomValue((ValueRange *)aRStack_18);
    fVar11 = (float)(int)(fVar11 + 45.0);
    break;
  case 2:
    fVar11 = (float)ValueRange::GetRandomValue((ValueRange *)aRStack_18);
    fVar11 = (float)(int)(fVar11 + 225.0);
    break;
  case 3:
    fVar11 = (float)ValueRange::GetRandomValue((ValueRange *)aRStack_18);
    fVar11 = (float)(int)(fVar11 + 315.0);
    break;
  case 4:
    fVar11 = (float)ValueRange::GetRandomValue((ValueRange *)aRStack_18);
    fVar11 = (float)(int)(fVar11 + 180.0);
    break;
  case 5:
    fVar11 = (float)ValueRange::GetRandomValue((ValueRange *)aRStack_18);
    fVar11 = (float)(int)fVar11;
  }
  Sexy::SexyMath::DegToRad(fVar11);
  FUN_04d31024(this_00 + 0xc4);
  this_01 = (DVec3 *)Projectile::GetVelocity(this_00);
  fVar11 = (float)DVec3::getLength(this_01);
  Projectile::SetRotatedVelocity(this_00,fVar11);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this_00);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeliconiaGunner::UpdatePlantfood() */

void __thiscall PlantHeliconiaGunner::UpdatePlantfood(PlantHeliconiaGunner *this)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int *piVar6;
  long lVar7;
  PopAnimRig *this_00;
  Projectile *pPVar8;
  undefined8 uVar9;
  SexyVector3 *pSVar10;
  RealObject *this_01;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  RtWeakPtr<Sexy::SoundResource> aRStack_58 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_50 [8];
  Vec3 aVStack_48 [16];
  undefined4 local_38;
  undefined4 local_34;
  int local_28;
  float local_24;
  undefined4 local_20;
  int local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[100] != (PlantHeliconiaGunner)0x0) {
    pfVar5 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      **)(this + 0x10));
    EATextSquish::Vec3::Vec3(aVStack_48,*pfVar5,pfVar5[1],pfVar5[2]);
    Plant::GetProps();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    fVar12 = (float)PVZ_T();
    iVar3 = *(int *)(this + 0x38);
    local_18[0] = *(int *)(this + 0x3c) - iVar3;
    local_28 = (int)((fVar12 - *(float *)(this + 0x34)) * *(float *)(this + 0x30)) - iVar3;
    piVar6 = eastl::min_alt<int>(&local_28,local_18);
    iVar1 = *piVar6;
    if (0 < iVar1) {
      iVar11 = 0;
      while( true ) {
        *(int *)(this + 0x38) = iVar3 + 1;
        FUN_04d31050((RtWeakPtr<Sexy::ResourceInfo> *)local_18,*(undefined8 *)(this + 0x10));
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
        lVar7 = FUN_04d310b0(*(undefined8 *)(lVar7 + 0x70),2);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,(RtWeakPtrBase *)(lVar7 + 8));
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
        Sexy::Insets::Insets((Insets *)local_18);
        this_00 = (PopAnimRig *)
                  UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
        std::string::string((string *)&local_28,"yd");
        PopAnimRig::CalcSymbolRect(this_00,(string *)&local_28,(TRect *)local_18);
        std::string::~string((string *)&local_28);
        nop();
        lVar7 = *(long *)(this + 0x10);
        fVar14 = *(float *)(lVar7 + 0x1c);
        fVar12 = (float)FUN_04d310d4(*(undefined4 *)(lVar7 + 0x18),fVar14,
                                     *(undefined4 *)(lVar7 + 0x20));
        Sexy::TRect<int>::GetCenter();
        iVar3 = FUN_04d31130(local_38);
        FUN_04d31050((string *)&local_28,*(undefined8 *)(this + 0x10));
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_28)
        ;
        fVar13 = *(float *)(lVar7 + 0x9c);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
        Sexy::TRect<int>::GetCenter();
        iVar4 = FUN_04d31130(local_34);
        FUN_04d31050((string *)&local_28,*(undefined8 *)(this + 0x10));
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_28)
        ;
        fVar15 = *(float *)(lVar7 + 0xa0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
        uVar16 = 0;
        fVar14 = (float)(int)((fVar14 - fVar15) + (float)iVar4);
        EATextSquish::Vec3::Vec3
                  ((Vec3 *)&local_38,(float)(int)((fVar12 - fVar13) + (float)iVar3),fVar14,0.0);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_28,(RtWeakPtrBase *)aRStack_58);
        pPVar8 = (Projectile *)fireProjectile(this,1,(string *)&local_28,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
        uVar9 = FUN_04d3102c(*(undefined8 *)(pPVar8 + 0xe0));
        uVar9 = operator|(uVar9,0x2000);
        FUN_04d31030(pPVar8 + 0xe0,uVar9);
        pSVar10 = (SexyVector3 *)Projectile::GetVelocity(pPVar8);
        local_28 = Sexy::SexyVector3::operator*(pSVar10,0.8);
        local_24 = fVar14;
        local_20 = uVar16;
        Projectile::SetVelocity(pPVar8,(SexyVector3 *)&local_28);
        FUN_04d31024(*(undefined4 *)(this + 0x28),pPVar8 + 0xc4);
        fVar12 = (float)DVec3::getLength((DVec3 *)pSVar10);
        Projectile::SetRotatedVelocity(pPVar8,fVar12);
        (**(code **)(*(long *)pPVar8 + 0x78))(pPVar8,(Vec3 *)&local_38);
        cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
        if ((cVar2 != '\0') && (*(int *)(this + 0x38) % 6 == 0)) {
          FUN_04d31050((string *)&local_28,*(undefined8 *)(this + 0x10));
          lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
          lVar7 = FUN_04d310b0(*(undefined8 *)(lVar7 + 0x70),3);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,(RtWeakPtrBase *)(lVar7 + 8));
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_28,(RtWeakPtrBase *)aRStack_50);
          pPVar8 = (Projectile *)fireProjectile(this,1,(string *)&local_28,0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
          uVar9 = FUN_04d3102c(*(undefined8 *)(pPVar8 + 0xe0));
          uVar9 = operator|(uVar9,0x2000);
          FUN_04d31030(pPVar8 + 0xe0,uVar9);
          pSVar10 = (SexyVector3 *)Projectile::GetVelocity(pPVar8);
          local_28 = Sexy::SexyVector3::operator*(pSVar10,0.8);
          local_24 = fVar14;
          local_20 = uVar16;
          Projectile::SetVelocity(pPVar8,(SexyVector3 *)&local_28);
          FUN_04d31024(*(undefined4 *)(this + 0x28),pPVar8 + 0xc4);
          fVar12 = (float)DVec3::getLength((DVec3 *)pSVar10);
          Projectile::SetRotatedVelocity(pPVar8,fVar12);
          (**(code **)(*(long *)pPVar8 + 0x78))(pPVar8,(Vec3 *)&local_38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
        }
        iVar11 = iVar11 + 1;
        *(float *)(this + 0x28) = *(float *)(this + 0x28) + *(float *)(this + 0x2c);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58)
        ;
        if (iVar11 == iVar1) break;
        iVar3 = *(int *)(this + 0x38);
      }
      fVar12 = (float)PVZ_T();
      if (*(float *)(this + 0x68) < fVar12) {
        this_01 = *(RealObject **)(this + 0x10);
        std::string::string((string *)local_18,"Play_Attack");
        RealObject::PlayPositionalSound(this_01,(string *)local_18,0.0);
        std::string::~string((string *)local_18);
        nop();
        fVar12 = (float)PVZ_T();
        *(float *)(this + 0x68) = fVar12 + 1.0;
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeliconiaGunner::onAnimStoppedCallback(std::string const&) */

void __thiscall
PlantHeliconiaGunner::onAnimStoppedCallback(PlantHeliconiaGunner *this,string *param_1)

{
  int iVar1;
  bool bVar2;
  PlantAnimRig_HeliconiaGunner *extraout_x0;
  long lVar3;
  UIEasyButtonWidget *this_00;
  PlantAnimRig_HeliconiaGunner *extraout_x0_00;
  PlantAnimRig_HeliconiaGunner *extraout_x0_01;
  PlantAnimRig_WizardThorns *extraout_x0_02;
  long *plVar4;
  PlantAnimRig_WizardThorns *extraout_x0_03;
  RealObject *this_01;
  float fVar5;
  RtMixedPtr aRStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar2 = std::operator==(param_1,"attack01");
  if ((((bVar2) || (bVar2 = std::operator==(param_1,"attack01_2"), bVar2)) ||
      (bVar2 = std::operator==(param_1,"attack01_3"), bVar2)) ||
     (((bVar2 = std::operator==(param_1,"attack01_hm"), bVar2 ||
       (bVar2 = std::operator==(param_1,"attack01_2_hm"), bVar2)) ||
      (bVar2 = std::operator==(param_1,"attack01_3_hm"), bVar2)))) {
    std::operator+(param_1,"_1111");
    UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    nop();
    PlantAnimRig_DevilsFlower::playLoopAnimation();
    std::string::~string(asStack_58);
  }
  else {
    bVar2 = std::operator==(param_1,"attack01_2222");
    if (((bVar2) || (bVar2 = std::operator==(param_1,"attack01_2_2222"), bVar2)) ||
       ((bVar2 = std::operator==(param_1,"attack01_3_2222"), bVar2 ||
        (((bVar2 = std::operator==(param_1,"attack01_hm_2222"), bVar2 ||
          (bVar2 = std::operator==(param_1,"attack01_2_hm_2222"), bVar2)) ||
         (bVar2 = std::operator==(param_1,"attack01_3_hm_2222"), bVar2)))))) {
      this_01 = *(RealObject **)(this + 0x10);
      std::string::string(asStack_58,"Stop_Attack");
      RealObject::PlayPositionalSound(this_01,asStack_58,0.0);
      std::string::~string(asStack_58);
      nop();
      UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      nop();
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 asStack_58);
      PlantAnimRig_HeliconiaGunner::PlayRefillMagazine(extraout_x0,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      lVar3 = FUN_04d3325c(*(undefined8 *)(this + 0x10));
      *(undefined4 *)(this + 0x5c) = *(undefined4 *)(lVar3 + 0x2f8);
    }
    else {
      bVar2 = std::operator==(param_1,"hd");
      if (bVar2) {
        this_00 = *(UIEasyButtonWidget **)(this + 0x10);
      }
      else {
        bVar2 = std::operator==(param_1,"hd03");
        if (!bVar2) {
          bVar2 = std::operator==(param_1,"hd04");
          if (bVar2) {
            plVar4 = (long *)UIEasyButtonWidget::GetImageNormal
                                       (*(UIEasyButtonWidget **)(this + 0x10));
            (**(code **)(*plVar4 + 0x118))();
          }
          else {
            bVar2 = std::operator==(param_1,"attack02");
            if (bVar2) {
              this[0x58] = (PlantHeliconiaGunner)0x0;
              *(undefined4 *)(this + 0x50) = 0xffffffff;
              plVar4 = (long *)UIEasyButtonWidget::GetImageNormal
                                         (*(UIEasyButtonWidget **)(this + 0x10));
              (**(code **)(*plVar4 + 0x118))();
            }
            else {
              lVar3 = FUN_05474374(param_1,"attacklv5",0);
              if ((lVar3 == -1) || (*(int *)(this + 0x60) < 1)) {
                UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
                nop();
                ToolPacketData::GetProps();
                Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
                std::string::string(asStack_58,"onAnimStoppedCallback");
                RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                          ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                           aRStack_60,asStack_58);
                PlantAnimRig_HeliconiaGunner::PlayRefillMagazine(extraout_x0_01,aRStack_50);
                RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                ::~RtReflectionDelegate(aRStack_50);
                std::string::~string(asStack_58);
                nop();
                Sexy::RtId::~RtId(aRStack_60);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
                lVar3 = FUN_04d3325c(*(undefined8 *)(this + 0x10));
                *(undefined4 *)(this + 0x5c) = *(undefined4 *)(lVar3 + 0x2f8);
                fVar5 = (float)PVZ_T();
                lVar3 = FUN_04d3325c(*(undefined8 *)(this + 0x10));
                *(float *)(this + 0x54) = fVar5 + *(float *)(lVar3 + 0x2ec);
              }
              else {
                *(int *)(this + 0x60) = *(int *)(this + 0x60) + -1;
                UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
                nop();
                ToolPacketData::GetProps();
                Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
                std::string::string(asStack_58,"onAnimStoppedCallback");
                RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                          ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                           aRStack_60,asStack_58);
                PlantAnimRig_WizardThorns::PlayTapAnimation(extraout_x0_03,param_1,aRStack_50);
                RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                ::~RtReflectionDelegate(aRStack_50);
                std::string::~string(asStack_58);
                nop();
                Sexy::RtId::~RtId(aRStack_60);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
              }
            }
          }
          goto LAB_04d33d28;
        }
        iVar1 = *(int *)(this + 0x5c);
        *(int *)(this + 0x5c) = iVar1 + -1;
        this_00 = *(UIEasyButtonWidget **)(this + 0x10);
        if (iVar1 + -1 < 1) {
          UIEasyButtonWidget::GetImageNormal(this_00);
          nop();
          std::string::string((string *)aRStack_68,"hd04");
          ToolPacketData::GetProps();
          Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
          std::string::string(asStack_58,"onAnimStoppedCallback");
          RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                     aRStack_60,asStack_58);
          PlantAnimRig_WizardThorns::PlayTapAnimation
                    (extraout_x0_02,(string *)aRStack_68,aRStack_50);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate(aRStack_50);
          std::string::~string(asStack_58);
          nop();
          Sexy::RtId::~RtId(aRStack_60);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
          std::string::~string((string *)aRStack_68);
          nop();
          goto LAB_04d33d28;
        }
      }
      UIEasyButtonWidget::GetImageNormal(this_00);
      nop();
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 asStack_58);
      PlantAnimRig_HeliconiaGunner::PlayRefileLoopingAnim(extraout_x0_00,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    }
  }
LAB_04d33d28:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeliconiaGunner::findFireTargets() */

void __thiscall PlantHeliconiaGunner::findFireTargets(PlantHeliconiaGunner *this)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  uint uVar11;
  SharkMinion *this_00;
  undefined8 local_48;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar3 = operator|(4,2);
  Sexy::Insets::Insets((Insets *)&local_40);
  local_40 = 0;
  lVar7 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          **)(this + 0x10));
  local_3c = BoardTransforms::BoardSpaceToGridY(*(float *)(lVar7 + 4));
  local_38 = 800;
  uVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
  iVar6 = local_3c;
  iVar5 = BoardConstants::GRIDSQUARE_HEIGHT();
  local_3c = iVar6 * iVar5 + 0xa0;
  local_34 = uVar4;
  EntityFinder::GetEntitiesTouchingRectangle
            (avStack_20,uVar3,(Insets *)&local_40,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),
             *(undefined4 *)(*(long *)(this + 0x10) + 0x110));
  Sexy::Insets::Insets
            ((Insets *)local_30,*(int *)(*(long *)(this + 0x10) + 0x114) + -2,
             *(int *)(*(long *)(this + 0x10) + 0x110) + -2,2,2);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,uVar3,(Insets *)local_30);
  Sexy::Insets::Insets
            ((Insets *)local_30,*(int *)(*(long *)(this + 0x10) + 0x114) + -3,
             *(int *)(*(long *)(this + 0x10) + 0x110) + -2,1,1);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,uVar3,(Insets *)local_30);
  Sexy::Insets::Insets
            ((Insets *)local_30,*(int *)(*(long *)(this + 0x10) + 0x114) + -2,
             *(int *)(*(long *)(this + 0x10) + 0x110) + -3,1,1);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,uVar3,(Insets *)local_30);
  Sexy::Insets::Insets
            ((Insets *)local_30,*(int *)(*(long *)(this + 0x10) + 0x114) + -4,
             *(int *)(*(long *)(this + 0x10) + 0x110) + -4,2,2);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,uVar3,(Insets *)local_30);
  Sexy::Insets::Insets
            ((Insets *)local_30,*(int *)(*(long *)(this + 0x10) + 0x114) + 1,
             *(int *)(*(long *)(this + 0x10) + 0x110) + -2,2,2);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,uVar3,(Insets *)local_30);
  Sexy::Insets::Insets
            ((Insets *)local_30,*(int *)(*(long *)(this + 0x10) + 0x114) + 3,
             *(int *)(*(long *)(this + 0x10) + 0x110) + -2,1,1);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,uVar3,(Insets *)local_30);
  Sexy::Insets::Insets
            ((Insets *)local_30,*(int *)(*(long *)(this + 0x10) + 0x114) + 2,
             *(int *)(*(long *)(this + 0x10) + 0x110) + -3,1,1);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,uVar3,(Insets *)local_30);
  Sexy::Insets::Insets
            ((Insets *)local_30,*(int *)(*(long *)(this + 0x10) + 0x114) + 3,
             *(int *)(*(long *)(this + 0x10) + 0x110) + -4,2,2);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,uVar3,(Insets *)local_30);
  Sexy::Insets::Insets
            ((Insets *)local_30,*(int *)(*(long *)(this + 0x10) + 0x114) + -2,
             *(int *)(*(long *)(this + 0x10) + 0x110) + 1,2,2);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,uVar3,(Insets *)local_30);
  Sexy::Insets::Insets
            ((Insets *)local_30,*(int *)(*(long *)(this + 0x10) + 0x114) + -3,
             *(int *)(*(long *)(this + 0x10) + 0x110) + 2,1,1);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,uVar3,(Insets *)local_30);
  Sexy::Insets::Insets
            ((Insets *)local_30,*(int *)(*(long *)(this + 0x10) + 0x114) + -2,
             *(int *)(*(long *)(this + 0x10) + 0x110) + 3,1,1);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,uVar3,(Insets *)local_30);
  Sexy::Insets::Insets
            ((Insets *)local_30,*(int *)(*(long *)(this + 0x10) + 0x114) + -4,
             *(int *)(*(long *)(this + 0x10) + 0x110) + 3,2,2);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,uVar3,(Insets *)local_30);
  Sexy::Insets::Insets
            ((Insets *)local_30,*(int *)(*(long *)(this + 0x10) + 0x114) + 1,
             *(int *)(*(long *)(this + 0x10) + 0x110) + 1,2,2);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,uVar3,(Insets *)local_30);
  Sexy::Insets::Insets
            ((Insets *)local_30,*(int *)(*(long *)(this + 0x10) + 0x114) + 3,
             *(int *)(*(long *)(this + 0x10) + 0x110) + 2,1,1);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,uVar3,(Insets *)local_30);
  Sexy::Insets::Insets
            ((Insets *)local_30,*(int *)(*(long *)(this + 0x10) + 0x114) + 2,
             *(int *)(*(long *)(this + 0x10) + 0x110) + 3,1,1);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,uVar3,(Insets *)local_30);
  Sexy::Insets::Insets
            ((Insets *)local_30,*(int *)(*(long *)(this + 0x10) + 0x114) + 3,
             *(int *)(*(long *)(this + 0x10) + 0x110) + 3,2,2);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,uVar3,(Insets *)local_30);
  uVar8 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_20);
  uVar9 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_20);
  Sexy::Point::Point((Point *)&local_48,0,*(int *)(*(long *)(this + 0x10) + 0x110));
  EntityFinder::BoardEntitySorter_ClosestByColumn::BoardEntitySorter_ClosestByColumn
            ((BoardEntitySorter_ClosestByColumn *)local_30,(Point *)&local_48);
  std::
  sort<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,EntityFinder::BoardEntitySorter_ClosestByColumn>
            (uVar8,uVar9,(Insets *)local_30);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_30[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_20);
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_48,(__normal_iterator *)local_30);
    if (!bVar2) {
      uVar11 = 0xffffffff;
LAB_04d34a30:
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar11);
      }
      return;
    }
    puVar10 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    this_00 = (SharkMinion *)*puVar10;
    cVar1 = isValidTarget(this,(BoardEntity *)this_00);
    if (cVar1 != '\0') {
      iVar6 = SharkMinion::getRow(this_00);
      if (iVar6 == *(int *)(*(long *)(this + 0x10) + 0x110)) {
        iVar6 = BoardEntity::CalcColumnPosition((BoardEntity *)this_00);
        uVar11 = 4;
        if (*(int *)(*(long *)(this + 0x10) + 0x114) <= iVar6) {
          uVar11 = 5;
        }
        goto LAB_04d34a30;
      }
      iVar6 = SharkMinion::getRow(this_00);
      if (iVar6 < *(int *)(*(long *)(this + 0x10) + 0x110)) {
        iVar6 = BoardEntity::CalcColumnPosition((BoardEntity *)this_00);
        uVar11 = (uint)(*(int *)(*(long *)(this + 0x10) + 0x114) <= iVar6);
        goto LAB_04d34a30;
      }
      iVar6 = SharkMinion::getRow(this_00);
      if (*(int *)(*(long *)(this + 0x10) + 0x110) < iVar6) {
        iVar6 = BoardEntity::CalcColumnPosition((BoardEntity *)this_00);
        uVar11 = 2;
        if (*(int *)(*(long *)(this + 0x10) + 0x114) <= iVar6) {
          uVar11 = 3;
        }
        goto LAB_04d34a30;
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeliconiaGunner::updateFire() */

void __thiscall PlantHeliconiaGunner::updateFire(PlantHeliconiaGunner *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  float *pfVar6;
  PlantAnimRig_WizardThorns *extraout_x0;
  PlantAnimRig_WizardThorns *extraout_x0_00;
  undefined8 uVar7;
  string *psVar8;
  undefined8 uVar9;
  RealObject *pRVar10;
  float fVar11;
  float local_90;
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((*(int *)(this + 0x50) == -1) ||
      (cVar1 = (**(code **)(*(long *)this + 0x180))(), cVar1 != '\0')) ||
     (this[0x58] != (PlantHeliconiaGunner)0x0)) goto LAB_04d34b18;
  iVar2 = findFireTargets(this);
  if (*(int *)(this + 0x50) != iVar2) {
    (**(code **)(*(long *)this + 0x150))(this,0);
    if ((iVar2 == -1) && (0 < *(int *)(this + 0x40))) {
      plVar4 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      (**(code **)(*plVar4 + 0x118))();
      *(undefined4 *)(this + 0x50) = 0xffffffff;
    }
    goto LAB_04d34b18;
  }
  iVar2 = *(int *)(this + 0x40);
  if (*(int *)(this + 0x50) == -1) goto LAB_04d34dc0;
  if (iVar2 < 1) goto LAB_04d34bc0;
  fVar11 = (float)PVZ_T();
  if (fVar11 <= *(float *)(this + 0x4c)) goto LAB_04d34dbc;
  uVar9 = *(undefined8 *)(this + 0x10);
  uVar3 = FUN_04d31074(uVar9);
  switch(uVar3) {
  case 1:
    fVar11 = (float)PVZ_T();
    uVar9 = *(undefined8 *)(this + 0x10);
    *(float *)(this + 0x4c) = fVar11 + 0.2;
    break;
  case 2:
    local_90 = (float)PVZ_T();
    lVar5 = FUN_04d3325c(*(undefined8 *)(this + 0x10));
    uVar9 = *(undefined8 *)(lVar5 + 0x2d0);
    uVar7 = 0;
    goto LAB_04d34c9c;
  case 3:
  case 4:
  case 5:
    local_90 = (float)PVZ_T();
    lVar5 = FUN_04d3325c(*(undefined8 *)(this + 0x10));
    uVar9 = *(undefined8 *)(lVar5 + 0x2d0);
    uVar7 = 1;
LAB_04d34c9c:
    pfVar6 = (float *)FUN_04d310a8(uVar9,uVar7);
    uVar9 = *(undefined8 *)(this + 0x10);
    *(float *)(this + 0x4c) = local_90 + (1.0 - *pfVar6) * 0.2;
  }
  FUN_04d31050((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58,uVar9);
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
  lVar5 = FUN_04d310b0(*(undefined8 *)(lVar5 + 0x70),0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_60,(RtWeakPtrBase *)(lVar5 + 8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
  uVar3 = *(undefined4 *)(this + 0x50);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_58,(RtWeakPtrBase *)aRStack_60);
  fireProjectile(this,uVar3,(RtWeakPtr<Sexy::ResourceInfo> *)asStack_58,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
  pRVar10 = *(RealObject **)(this + 0x10);
  *(int *)(this + 0x40) = *(int *)(this + 0x40) + -1;
  std::string::string(asStack_58,"Stop_Attack");
  RealObject::PlayPositionalSound(pRVar10,asStack_58,0.0);
  std::string::~string(asStack_58);
  nop();
  pRVar10 = *(RealObject **)(this + 0x10);
  std::string::string(asStack_58,"Play_Attack");
  RealObject::PlayPositionalSound(pRVar10,asStack_58,0.0);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
LAB_04d34dbc:
  iVar2 = *(int *)(this + 0x40);
LAB_04d34dc0:
  if (iVar2 < 1) {
LAB_04d34bc0:
    pRVar10 = *(RealObject **)(this + 0x10);
    std::string::string(asStack_58,"Stop_Attack");
    RealObject::PlayPositionalSound(pRVar10,asStack_58,0.0);
    std::string::~string(asStack_58);
    nop();
    *(undefined4 *)(this + 0x40) = *(undefined4 *)(this + 0x44);
    fVar11 = (float)PVZ_T();
    lVar5 = FUN_04d3325c(*(undefined8 *)(this + 0x10));
    *(float *)(this + 0x54) = fVar11 + *(float *)(lVar5 + 0x2ec);
    cVar1 = FUN_04d3107c(*(undefined8 *)(this + 0x10));
    if (cVar1 == '\0') {
      psVar8 = asStack_58;
      std::string::string(asStack_70,"attack01_2222");
      nop();
      switch(*(undefined4 *)(this + 0x50)) {
      case 0:
        std::string::append(asStack_70,"attack01_2_hm_2222",(size_t)psVar8);
        break;
      case 1:
        std::string::append(asStack_70,"attack01_2_2222",(size_t)psVar8);
        break;
      case 2:
        std::string::append(asStack_70,"attack01_3_hm_2222",(size_t)psVar8);
        break;
      case 3:
        std::string::append(asStack_70,"attack01_3_2222",(size_t)psVar8);
        break;
      case 4:
        std::string::append(asStack_70,"attack01_hm_2222",(size_t)psVar8);
      }
      UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      nop();
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                (aRStack_50,aRStack_60,asStack_58);
      PlantAnimRig_WizardThorns::PlayTapAnimation(extraout_x0,asStack_70,aRStack_50);
    }
    else {
      *(undefined4 *)(this + 0x60) = 2;
      psVar8 = asStack_58;
      std::string::string(asStack_70,"attacklv501");
      nop();
      switch(*(undefined4 *)(this + 0x50)) {
      case 0:
        std::string::append(asStack_70,"attacklv502_hm",(size_t)psVar8);
        break;
      case 1:
        std::string::append(asStack_70,"attacklv502",(size_t)psVar8);
        break;
      case 2:
        std::string::append(asStack_70,"attacklv503_hm",(size_t)psVar8);
        break;
      case 3:
        std::string::append(asStack_70,"attacklv503",(size_t)psVar8);
        break;
      case 4:
        std::string::append(asStack_70,"attacklv501_hm",(size_t)psVar8);
      }
      UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      nop();
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                (aRStack_50,aRStack_60,asStack_58);
      PlantAnimRig_WizardThorns::PlayTapAnimation(extraout_x0_00,asStack_70,aRStack_50);
    }
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    std::string::~string(asStack_70);
    *(undefined4 *)(this + 0x50) = 0xffffffff;
  }
LAB_04d34b18:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeliconiaGunner::UpdateActions() */

void __thiscall PlantHeliconiaGunner::UpdateActions(PlantHeliconiaGunner *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  float *pfVar6;
  PlantAnimRig_WizardThorns *extraout_x0;
  PlantAnimRig_WizardThorns *extraout_x0_00;
  undefined8 uVar7;
  string *psVar8;
  undefined8 uVar9;
  RealObject *pRVar10;
  float fVar11;
  float fStack_90;
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if (((*(int *)(this + 0x50) == -1) ||
      (cVar1 = (**(code **)(*(long *)this + 0x180))(), cVar1 != '\0')) ||
     (this[0x58] != (PlantHeliconiaGunner)0x0)) goto LAB_04d34b18;
  iVar2 = findFireTargets(this);
  if (*(int *)(this + 0x50) != iVar2) {
    (**(code **)(*(long *)this + 0x150))(this,0);
    if ((iVar2 == -1) && (0 < *(int *)(this + 0x40))) {
      plVar4 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      (**(code **)(*plVar4 + 0x118))();
      *(undefined4 *)(this + 0x50) = 0xffffffff;
    }
    goto LAB_04d34b18;
  }
  iVar2 = *(int *)(this + 0x40);
  if (*(int *)(this + 0x50) == -1) goto LAB_04d34dc0;
  if (iVar2 < 1) goto LAB_04d34bc0;
  fVar11 = (float)PVZ_T();
  if (fVar11 <= *(float *)(this + 0x4c)) goto LAB_04d34dbc;
  uVar9 = *(undefined8 *)(this + 0x10);
  uVar3 = FUN_04d31074(uVar9);
  switch(uVar3) {
  case 1:
    fVar11 = (float)PVZ_T();
    uVar9 = *(undefined8 *)(this + 0x10);
    *(float *)(this + 0x4c) = fVar11 + 0.2;
    break;
  case 2:
    fStack_90 = (float)PVZ_T();
    lVar5 = FUN_04d3325c(*(undefined8 *)(this + 0x10));
    uVar9 = *(undefined8 *)(lVar5 + 0x2d0);
    uVar7 = 0;
    goto LAB_04d34c9c;
  case 3:
  case 4:
  case 5:
    fStack_90 = (float)PVZ_T();
    lVar5 = FUN_04d3325c(*(undefined8 *)(this + 0x10));
    uVar9 = *(undefined8 *)(lVar5 + 0x2d0);
    uVar7 = 1;
LAB_04d34c9c:
    pfVar6 = (float *)FUN_04d310a8(uVar9,uVar7);
    uVar9 = *(undefined8 *)(this + 0x10);
    *(float *)(this + 0x4c) = fStack_90 + (1.0 - *pfVar6) * 0.2;
  }
  FUN_04d31050((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58,uVar9);
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
  lVar5 = FUN_04d310b0(*(undefined8 *)(lVar5 + 0x70),0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_60,(RtWeakPtrBase *)(lVar5 + 8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
  uVar3 = *(undefined4 *)(this + 0x50);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_58,(RtWeakPtrBase *)aRStack_60);
  fireProjectile(this,uVar3,(RtWeakPtr<Sexy::ResourceInfo> *)asStack_58,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
  pRVar10 = *(RealObject **)(this + 0x10);
  *(int *)(this + 0x40) = *(int *)(this + 0x40) + -1;
  std::string::string(asStack_58,"Stop_Attack");
  RealObject::PlayPositionalSound(pRVar10,asStack_58,0.0);
  std::string::~string(asStack_58);
  nop();
  pRVar10 = *(RealObject **)(this + 0x10);
  std::string::string(asStack_58,"Play_Attack");
  RealObject::PlayPositionalSound(pRVar10,asStack_58,0.0);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
LAB_04d34dbc:
  iVar2 = *(int *)(this + 0x40);
LAB_04d34dc0:
  if (iVar2 < 1) {
LAB_04d34bc0:
    pRVar10 = *(RealObject **)(this + 0x10);
    std::string::string(asStack_58,"Stop_Attack");
    RealObject::PlayPositionalSound(pRVar10,asStack_58,0.0);
    std::string::~string(asStack_58);
    nop();
    *(undefined4 *)(this + 0x40) = *(undefined4 *)(this + 0x44);
    fVar11 = (float)PVZ_T();
    lVar5 = FUN_04d3325c(*(undefined8 *)(this + 0x10));
    *(float *)(this + 0x54) = fVar11 + *(float *)(lVar5 + 0x2ec);
    cVar1 = FUN_04d3107c(*(undefined8 *)(this + 0x10));
    if (cVar1 == '\0') {
      psVar8 = asStack_58;
      std::string::string(asStack_70,"attack01_2222");
      nop();
      switch(*(undefined4 *)(this + 0x50)) {
      case 0:
        std::string::append(asStack_70,"attack01_2_hm_2222",(size_t)psVar8);
        break;
      case 1:
        std::string::append(asStack_70,"attack01_2_2222",(size_t)psVar8);
        break;
      case 2:
        std::string::append(asStack_70,"attack01_3_hm_2222",(size_t)psVar8);
        break;
      case 3:
        std::string::append(asStack_70,"attack01_3_2222",(size_t)psVar8);
        break;
      case 4:
        std::string::append(asStack_70,"attack01_hm_2222",(size_t)psVar8);
      }
      UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      nop();
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                (aRStack_50,aRStack_60,asStack_58);
      PlantAnimRig_WizardThorns::PlayTapAnimation(extraout_x0,asStack_70,aRStack_50);
    }
    else {
      *(undefined4 *)(this + 0x60) = 2;
      psVar8 = asStack_58;
      std::string::string(asStack_70,"attacklv501");
      nop();
      switch(*(undefined4 *)(this + 0x50)) {
      case 0:
        std::string::append(asStack_70,"attacklv502_hm",(size_t)psVar8);
        break;
      case 1:
        std::string::append(asStack_70,"attacklv502",(size_t)psVar8);
        break;
      case 2:
        std::string::append(asStack_70,"attacklv503_hm",(size_t)psVar8);
        break;
      case 3:
        std::string::append(asStack_70,"attacklv503",(size_t)psVar8);
        break;
      case 4:
        std::string::append(asStack_70,"attacklv501_hm",(size_t)psVar8);
      }
      UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      nop();
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                (aRStack_50,aRStack_60,asStack_58);
      PlantAnimRig_WizardThorns::PlayTapAnimation(extraout_x0_00,asStack_70,aRStack_50);
    }
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    std::string::~string(asStack_70);
    *(undefined4 *)(this + 0x50) = 0xffffffff;
  }
LAB_04d34b18:
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeliconiaGunner::findGrabTargets(std::vector<BoardEntity*, std::allocator<BoardEntity*> >&)
    */

void __thiscall PlantHeliconiaGunner::findGrabTargets(PlantHeliconiaGunner *this,vector *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  float *pfVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  Zombie *extraout_x0;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  Insets local_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  Sexy::Insets::Insets((Insets *)&local_40);
  local_40 = 200;
  lVar7 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          **)(this + 0x10));
  local_3c = BoardTransforms::BoardSpaceToGridY(*(float *)(lVar7 + 4));
  pfVar8 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  local_38 = BoardTransforms::BoardSpaceToGridX(*pfVar8);
  uVar5 = BoardConstants::GRIDSQUARE_HEIGHT();
  iVar1 = local_3c;
  iVar6 = BoardConstants::GRIDSQUARE_HEIGHT();
  iVar2 = local_38;
  local_3c = iVar1 * iVar6 + 0xa0;
  local_38 = BoardConstants::GRIDSQUARE_WIDTH();
  local_38 = iVar2 * local_38;
  local_34 = uVar5;
  EntityFinder::GetEntitiesTouchingRectangle
            (avStack_20,2,(Insets *)&local_40,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),
             *(undefined4 *)(*(long *)(this + 0x10) + 0x110));
  Sexy::Insets::Insets
            (local_30,*(int *)(*(long *)(this + 0x10) + 0x114) + -2,
             *(int *)(*(long *)(this + 0x10) + 0x110) + -2,2,2);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,2,local_30);
  Sexy::Insets::Insets
            (local_30,*(int *)(*(long *)(this + 0x10) + 0x114) + -3,
             *(int *)(*(long *)(this + 0x10) + 0x110) + -2,1,1);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,2,local_30);
  Sexy::Insets::Insets
            (local_30,*(int *)(*(long *)(this + 0x10) + 0x114) + -2,
             *(int *)(*(long *)(this + 0x10) + 0x110) + -3,1,1);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,2,local_30);
  Sexy::Insets::Insets
            (local_30,*(int *)(*(long *)(this + 0x10) + 0x114) + -4,
             *(int *)(*(long *)(this + 0x10) + 0x110) + -4,2,2);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,2,local_30);
  Sexy::Insets::Insets
            (local_30,*(int *)(*(long *)(this + 0x10) + 0x114) + -2,
             *(int *)(*(long *)(this + 0x10) + 0x110) + 1,2,2);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,2,local_30);
  Sexy::Insets::Insets
            (local_30,*(int *)(*(long *)(this + 0x10) + 0x114) + -3,
             *(int *)(*(long *)(this + 0x10) + 0x110) + 2,1,1);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,2,local_30);
  Sexy::Insets::Insets
            (local_30,*(int *)(*(long *)(this + 0x10) + 0x114) + -2,
             *(int *)(*(long *)(this + 0x10) + 0x110) + 3,1,1);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,2,local_30);
  Sexy::Insets::Insets
            (local_30,*(int *)(*(long *)(this + 0x10) + 0x114) + -4,
             *(int *)(*(long *)(this + 0x10) + 0x110) + 3,2,2);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,2,local_30);
  uVar9 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_20);
  uVar10 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)avStack_20);
  Sexy::Point::Point((Point *)&local_48,0,*(int *)(*(long *)(this + 0x10) + 0x110));
  EntityFinder::BoardEntitySorter_ClosestByColumn::BoardEntitySorter_ClosestByColumn
            ((BoardEntitySorter_ClosestByColumn *)local_30,(Point *)&local_48);
  std::
  sort<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,EntityFinder::BoardEntitySorter_ClosestByColumn>
            (uVar9,uVar10,local_30);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar3 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar3) {
    puVar11 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    cVar4 = isValidTarget(this,(BoardEntity *)*puVar11);
    if (cVar4 != '\0') {
      nop();
      cVar4 = canBeStun(this,extraout_x0);
      if (cVar4 != '\0') {
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)param_1,
                   (BoardEntity **)local_30);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeliconiaGunner::FindTargetAndFire(PlantWeapon) */

void PlantHeliconiaGunner::FindTargetAndFire(PlantHeliconiaGunner *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  PlantAnimRig_WizardThorns *extraout_x0;
  PlantAnimRig_HeliconiaGunner *extraout_x0_00;
  bool bVar5;
  float fVar6;
  string asStack_80 [8];
  RtMixedPtr aRStack_78 [8];
  RtId aRStack_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1[0x58] == (PlantHeliconiaGunner)0x0) &&
     (cVar2 = (**(code **)(*(long *)param_1 + 0x180))(), cVar2 == '\0')) {
    if (0 < *(int *)(param_1 + 0x48)) {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_68);
      findGrabTargets(param_1,(vector *)&local_68);
      lVar4 = FUN_04d310c0(local_68,local_60);
      if (lVar4 != 0) {
        param_1[0x58] = (PlantHeliconiaGunner)0x1;
        UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_1 + 0x10));
        nop();
        bVar5 = true;
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)asStack_80);
        std::string::string((string *)aRStack_70,"onAnimStoppedCallback");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                   (RtId *)aRStack_78,(string *)aRStack_70);
        PlantAnimRig_HeliconiaGunner::PlayGrabAnim(extraout_x0_00,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
        std::string::~string((string *)aRStack_70);
        nop();
        Sexy::RtId::~RtId((RtId *)aRStack_78);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_80)
        ;
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_68);
        goto LAB_04d35430;
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_68);
    }
    iVar3 = findFireTargets(param_1);
    if (iVar3 != -1) {
      fVar6 = (float)PVZ_T();
      if (*(float *)(param_1 + 0x54) <= fVar6) {
        iVar1 = *(int *)(param_1 + 0x50);
        bVar5 = iVar3 != iVar1 || iVar1 == -1;
        if (iVar3 != iVar1 || iVar1 == -1) {
          std::string::string(asStack_80,"attack01");
          nop();
          switch(iVar3) {
          case 0:
            FUN_05475ad8(asStack_80,"_2_hm");
            break;
          case 1:
            FUN_05475ad8(asStack_80,&DAT_055b1d58);
            break;
          case 2:
            FUN_05475ad8(asStack_80,"_3_hm");
            break;
          case 3:
            FUN_05475ad8(asStack_80,&DAT_0568cfd8);
            break;
          case 4:
            FUN_05475ad8(asStack_80,&DAT_0568cfe0);
          }
          UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_1 + 0x10));
          nop();
          ToolPacketData::GetProps();
          Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_78);
          std::string::string((string *)&local_68,"onAnimStoppedCallback");
          RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                     aRStack_70,(string *)&local_68);
          PlantAnimRig_WizardThorns::PlayTapAnimation(extraout_x0,asStack_80,aRStack_50);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate(aRStack_50);
          std::string::~string((string *)&local_68);
          nop();
          Sexy::RtId::~RtId(aRStack_70);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
          *(int *)(param_1 + 0x50) = iVar3;
          std::string::~string(asStack_80);
        }
        else {
          bVar5 = true;
        }
        goto LAB_04d35430;
      }
    }
  }
  bVar5 = false;
LAB_04d35430:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar5);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeliconiaGunner::OnAnimCommand(std::string const&, std::string const&) */

void PlantHeliconiaGunner::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  Projectile *this;
  Zombie *pZVar7;
  PopAnimRig *pPVar8;
  long lVar9;
  undefined4 uVar10;
  float fVar11;
  undefined8 local_58;
  undefined8 local_50;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  undefined4 local_30 [4];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_2,"use_action");
  if ((bVar1) && (0 < *(int *)(param_1 + 0x48))) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    findGrabTargets((PlantHeliconiaGunner *)param_1,(vector *)avStack_20);
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_50 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)&local_50);
    if (bVar2) {
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58)
      ;
      uVar6 = Sexy::LazySingleton<PVZDB>::GetInstance();
      std::string::string(asStack_40,"HeliconiaGunnerGrabNet");
      Sexy::ToWString(asStack_40);
      Sexy::RtName::RtName((RtName *)local_30,(wstring *)aRStack_38);
      PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_48,uVar6,0xc,(RtName *)local_30);
      Sexy::RtName::~RtName((RtName *)local_30);
      FUN_05476c50(aRStack_38);
      std::string::~string(asStack_40);
      nop();
      iVar4 = SharkMinion::getRow((SharkMinion *)*puVar5);
      uVar10 = 0;
      if (iVar4 == *(int *)(*(long *)(param_1 + 0x10) + 0x110)) {
        uVar10 = 4;
      }
      iVar4 = SharkMinion::getRow((SharkMinion *)*puVar5);
      if (iVar4 < *(int *)(*(long *)(param_1 + 0x10) + 0x110)) {
        uVar10 = 0;
      }
      iVar4 = SharkMinion::getRow((SharkMinion *)*puVar5);
      if (*(int *)(*(long *)(param_1 + 0x10) + 0x110) < iVar4) {
        uVar10 = 2;
      }
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_30,(RtWeakPtrBase *)aRStack_48);
      this = (Projectile *)
             fireProjectile((PlantHeliconiaGunner *)param_1,uVar10,(RtName *)local_30,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_30,(RtWeakPtrBase *)aRStack_38);
      Projectile::SetTarget(this,(RtWeakPtr *)local_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      pZVar7 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar5);
      local_30[0] = (**(code **)(*(long *)pZVar7 + 0x3b0))(0x3f000000);
      Projectile::LaunchAt(this,(SexyVector3 *)local_30,200.0,0.5);
      pPVar8 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_1 + 0x10));
      Sexy::StrFormat("wd0%d",aRStack_38,(ulong)*(uint *)(param_1 + 0x48));
      PopAnimRig::SetLayerVisibility(pPVar8,(string *)aRStack_38,false);
      std::string::~string((string *)aRStack_38);
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  }
  else {
    bVar1 = std::operator==(param_2,"attack_level5");
    if (bVar1) {
      uVar10 = 1;
      pPVar8 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_1 + 0x10));
      std::string::string((string *)avStack_20,"attacklv502");
      cVar3 = PopAnimRig::IsAnimStringActive(pPVar8,(string *)avStack_20);
      std::string::~string((string *)avStack_20);
      nop();
      if (cVar3 == '\0') {
        uVar10 = 3;
        pPVar8 = (PopAnimRig *)
                 UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_1 + 0x10));
        std::string::string((string *)avStack_20,"attacklv503");
        cVar3 = PopAnimRig::IsAnimStringActive(pPVar8,(string *)avStack_20);
        std::string::~string((string *)avStack_20);
        nop();
        if (cVar3 == '\0') {
          uVar10 = 4;
          pPVar8 = (PopAnimRig *)
                   UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_1 + 0x10));
          std::string::string((string *)avStack_20,"attacklv501_hm");
          cVar3 = PopAnimRig::IsAnimStringActive(pPVar8,(string *)avStack_20);
          std::string::~string((string *)avStack_20);
          nop();
          if (cVar3 == '\0') {
            uVar10 = 0;
            pPVar8 = (PopAnimRig *)
                     UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_1 + 0x10));
            std::string::string((string *)avStack_20,"attacklv502_hm");
            cVar3 = PopAnimRig::IsAnimStringActive(pPVar8,(string *)avStack_20);
            std::string::~string((string *)avStack_20);
            nop();
            if (cVar3 == '\0') {
              pPVar8 = (PopAnimRig *)
                       UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_1 + 0x10));
              std::string::string((string *)avStack_20,"attacklv503_hm");
              cVar3 = PopAnimRig::IsAnimStringActive(pPVar8,(string *)avStack_20);
              std::string::~string((string *)avStack_20);
              nop();
              uVar10 = 5;
              if (cVar3 != '\0') {
                uVar10 = 2;
              }
            }
          }
        }
      }
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)avStack_20);
      fireProjectile((PlantHeliconiaGunner *)param_1,uVar10,(string *)avStack_20,1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)avStack_20);
      fVar11 = (float)PVZ_T();
      lVar9 = FUN_04d3325c(*(undefined8 *)(param_1 + 0x10));
      *(float *)(param_1 + 0x54) = fVar11 + *(float *)(lVar9 + 0x2ec);
      bVar1 = std::operator==(param_2,"plantfood");
    }
    else {
      bVar1 = std::operator==(param_2,"plantfood");
    }
    if (bVar1) {
      param_1[100] = (string)0x1;
      uVar10 = PVZ_T();
      *(undefined4 *)(param_1 + 0x34) = uVar10;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}

