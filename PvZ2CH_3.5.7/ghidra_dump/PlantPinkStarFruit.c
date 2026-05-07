// Class: PlantPinkStarFruit


/* PlantPinkStarFruit::CancelPlantfood() */

void __thiscall PlantPinkStarFruit::CancelPlantfood(PlantPinkStarFruit *this)

{
  undefined4 uVar1;
  
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  this[0x49] = (PlantPinkStarFruit)0x0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x28) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPinkStarFruit::Initialize() */

void __thiscall PlantPinkStarFruit::Initialize(PlantPinkStarFruit *this)

{
  undefined4 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  *(undefined4 *)(this + 0x44) = 0;
  this[0x48] = (PlantPinkStarFruit)0x0;
  this[0x49] = (PlantPinkStarFruit)0x0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x28) = uVar1;
  *(undefined4 *)(this + 0x30) = 0x3e4ccccd;
  std::string::string(asStack_10,"pinkstarfruit_new_avatar_1");
  uVar1 = NewAvatar::GetGeneralBoostValueByNewAvatarName(asStack_10);
  *(undefined4 *)(this + 0x4c) = uVar1;
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPinkStarFruit::PlantPinkStarFruit() */

void __thiscall PlantPinkStarFruit::PlantPinkStarFruit(PlantPinkStarFruit *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067e2b30;
  return;
}


/* PlantPinkStarFruit::StaticNew() */

PlantPinkStarFruit * PlantPinkStarFruit::StaticNew(void)

{
  PlantPinkStarFruit *this;
  
  this = ::operator_new(0x50);
  PlantPinkStarFruit(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPinkStarFruit::StaticClassInit() */

void PlantPinkStarFruit::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantPinkStarFruit");
    (*pcVar2)(plVar1,asStack_10,FUN_041000d4,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPinkStarFruit::StaticGetClass() */

long * PlantPinkStarFruit::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantPinkStarFruit",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPinkStarFruit::GetClass() const */

long * PlantPinkStarFruit::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantPinkStarFruit",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPinkStarFruit::~PlantPinkStarFruit() */

void __thiscall PlantPinkStarFruit::~PlantPinkStarFruit(PlantPinkStarFruit *this)

{
  *(undefined ***)this = &PTR_GetClass_067e2b30;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantPinkStarFruit::~PlantPinkStarFruit() */

void __thiscall PlantPinkStarFruit::~PlantPinkStarFruit(PlantPinkStarFruit *this)

{
  ~PlantPinkStarFruit(this);
  AK::FreeHook(this);
  return;
}


/* PlantPinkStarFruit::setState(PlantPinkStarFruit::FruitState) */

void __thiscall PlantPinkStarFruit::setState(PlantPinkStarFruit *this,undefined8 param_2)

{
  long lVar1;
  
  *(int *)(this + 0x44) = (int)param_2;
  lVar1 = FUN_04100b20(*(undefined8 *)(this + 0x10));
  FUN_040ffacc(lVar1 + 0x3b8,param_2);
  return;
}


/* PlantPinkStarFruit::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantPinkStarFruit::onAnimStoppedCallback(PlantPinkStarFruit *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"xz");
  if ((!bVar1) && (bVar1 = std::operator==(param_1,"xz02"), !bVar1)) {
    return;
  }
  this[0x48] = (PlantPinkStarFruit)0x0;
  if (*(int *)(this + 0x44) != 0) {
    if (*(int *)(this + 0x44) == 1) {
      setState(this,0);
    }
    Plant::PlayAttackAnimation(*(Plant **)(this + 0x10));
    return;
  }
  setState(this,1);
  Plant::PlayAttackAnimation(*(Plant **)(this + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPinkStarFruit::ApplyPlantfood() */

void __thiscall PlantPinkStarFruit::ApplyPlantfood(PlantPinkStarFruit *this)

{
  int iVar1;
  long lVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  lVar2 = FUN_04100c00(*(undefined8 *)(this + 0x10));
  iVar1 = *(int *)(lVar2 + 0x2c0);
  FUN_040ffa80(aRStack_10,*(undefined8 *)(this + 0x10));
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  *(float *)(this + 0x34) = (float)iVar1 / *(float *)(lVar2 + 0x38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  lVar2 = FUN_04100c00(*(undefined8 *)(this + 0x10));
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(lVar2 + 0x2c0);
  lVar2 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0x3e4ccccd;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPinkStarFruit::pickProjectileIndex(bool, bool) */

undefined8 __thiscall
PlantPinkStarFruit::pickProjectileIndex(PlantPinkStarFruit *this,bool param_1,bool param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  lVar2 = FUN_04100d24(*(undefined8 *)(this + 0x10));
  fVar6 = *(float *)(this + 0x4c) + *(float *)(lVar2 + 0x2b8);
  lVar2 = FUN_04100d24(*(undefined8 *)(this + 0x10));
  fVar5 = *(float *)(this + 0x4c) + *(float *)(lVar2 + 700) + fVar6;
  fVar4 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
  if (param_1) {
    uVar3 = 4;
    if (fVar6 <= fVar4) {
      if ((fVar4 < fVar6) || (fVar5 <= fVar4)) {
        uVar3 = 3;
      }
      else {
        uVar3 = 5;
      }
    }
  }
  else {
    uVar3 = 6;
    if ((!param_2) &&
       ((iVar1 = FUN_040ffaa4(*(undefined8 *)(this + 0x10)), iVar1 < 2 ||
        (uVar3 = 1, fVar6 <= fVar4)))) {
      if ((iVar1 < 3) || ((fVar4 < fVar6 || (fVar5 <= fVar4)))) {
        uVar3 = 0;
      }
      else {
        uVar3 = 2;
      }
    }
  }
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPinkStarFruit::fireProjectile(int, Sexy::RtWeakPtr<ProjectilePropertySheet>, bool) */

void __thiscall
PlantPinkStarFruit::fireProjectile
          (PlantPinkStarFruit *this,int param_1,RtWeakPtrBase *param_3,byte param_4)

{
  long lVar1;
  float *pfVar2;
  Projectile *this_00;
  undefined8 uVar3;
  int iVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  long lVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  string asStack_28 [8];
  wstring awStack_20 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_04100c00(*(undefined8 *)(this + 0x10));
  if (*(int *)(this + 0x44) == 0) {
    pfVar2 = (float *)FUN_040ffaf0(DAT_06aed3f8,(long)param_1);
    fVar13 = *pfVar2;
    fVar11 = pfVar2[1];
  }
  else if (*(int *)(this + 0x44) == 1) {
    pfVar2 = (float *)FUN_040ffaf0(DAT_06aed480,(long)param_1);
    fVar13 = *pfVar2;
    fVar11 = pfVar2[1];
  }
  else {
    fVar13 = 0.0;
    fVar11 = fVar13;
  }
  this_01 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              **)(this + 0x10);
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(this_01);
  fVar9 = *(float *)(this_01 + 0xc4);
  fVar7 = *pfVar2;
  fVar12 = pfVar2[1];
  lVar5 = *(long *)(gLawnApp + 0x9f0);
  fVar8 = 0.0;
  if (*(char *)(lVar5 + 0x119) != '\0') {
    fVar8 = pfVar2[2] + 1.0;
  }
  fVar10 = *(float *)(lVar1 + 0x2c4);
  uVar6 = (uint)param_4;
  if (param_4 != 0) {
    uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
    std::string::string(asStack_28,"PinkStarFruitSuperShot");
    Sexy::ToWString(asStack_28);
    Sexy::RtName::RtName((RtName *)aRStack_18,awStack_20);
    PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_30,uVar3,0xc,(RtName *)aRStack_18);
    Sexy::RtName::~RtName((RtName *)aRStack_18);
    FUN_05476c50(awStack_20);
    std::string::~string(asStack_28);
    nop();
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
    uVar6 = *(uint *)(lVar1 + 0x68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    lVar5 = *(long *)(gLawnApp + 0x9f0);
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,param_3);
  this_00 = (Projectile *)
            Board::AddProjectile
                      ((Board *)(fVar7 + fVar9 * fVar13),fVar12 + fVar9 * fVar11,
                       fVar8 + fVar9 * fVar10,lVar5,aRStack_18,*(undefined8 *)(this + 0x10),uVar6);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (*(int *)(this + 0x44) == 0) {
    iVar4 = 0;
    switch(param_1) {
    case 0:
      EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,200.0,-100.0,0.0);
      Projectile::SetVelocity(this_00,(SexyVector3 *)aRStack_18);
      iVar4 = 0x2d;
      break;
    case 1:
      EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,0.0,-225.0,0.0);
      Projectile::SetVelocity(this_00,(SexyVector3 *)aRStack_18);
      iVar4 = 0x5a;
      break;
    case 2:
      EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,-225.0,0.0,0.0);
      Projectile::SetVelocity(this_00,(SexyVector3 *)aRStack_18);
      iVar4 = 0xb4;
      break;
    case 3:
      EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,0.0,225.0,0.0);
      Projectile::SetVelocity(this_00,(SexyVector3 *)aRStack_18);
      iVar4 = 0x10e;
      break;
    case 4:
      EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,200.0,100.0,0.0);
      Projectile::SetVelocity(this_00,(SexyVector3 *)aRStack_18);
      iVar4 = 0x13b;
    }
  }
  else {
    iVar4 = 0;
    if (*(int *)(this + 0x44) == 1) {
      switch(param_1) {
      case 0:
        fVar11 = 124.0;
        fVar13 = -187.0;
        break;
      case 1:
        fVar11 = -112.0;
        fVar13 = -195.0;
        break;
      case 2:
        fVar11 = -195.0;
        fVar13 = 112.0;
        break;
      case 3:
        fVar11 = 112.0;
        fVar13 = 195.0;
        break;
      case 4:
        fVar11 = 224.0;
        fVar13 = -14.0;
        break;
      default:
        goto switchD_04101040_default;
      }
      EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,fVar11,fVar13,0.0);
      Projectile::SetVelocity(this_00,(SexyVector3 *)aRStack_18);
      iVar4 = 0;
    }
  }
switchD_04101040_default:
  if (param_4 != 0) {
    Sexy::SexyMath::DegToRad((float)iVar4);
    FUN_040ffa64(this_00 + 0xc4);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this_00);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPinkStarFruit::UpdatePlantfood() */

void __thiscall PlantPinkStarFruit::UpdatePlantfood(PlantPinkStarFruit *this)

{
  int iVar1;
  char cVar2;
  int iVar3;
  float *pfVar4;
  int *piVar5;
  long lVar6;
  Projectile *this_00;
  undefined8 uVar7;
  SexyVector3 *this_01;
  SexyTransform2D *this_02;
  long lVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int local_58 [2];
  Vec3 aVStack_50 [16];
  int local_40;
  float local_3c;
  float local_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x49] != (PlantPinkStarFruit)0x0) {
    fVar13 = *(float *)(this + 0x28);
    fVar11 = (float)PVZ_T();
    if (fVar13 < fVar11) {
      fVar11 = (float)PVZ_T();
      *(float *)(this + 0x30) = -*(float *)(this + 0x30);
      *(float *)(this + 0x28) = fVar11 + 0.6;
    }
    pfVar4 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      **)(this + 0x10));
    EATextSquish::Vec3::Vec3(aVStack_50,*pfVar4,pfVar4[1],pfVar4[2]);
    Plant::GetProps();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    fVar11 = (float)PVZ_T();
    fVar13 = *(float *)(this + 0x38);
    fVar12 = *(float *)(this + 0x34);
    local_40 = *(int *)(this + 0x40) - *(int *)(this + 0x3c);
    local_58[0] = (int)((fVar11 - fVar13) * fVar12) - *(int *)(this + 0x3c);
    piVar5 = eastl::min_alt<int>(local_58,&local_40);
    iVar1 = *piVar5;
    if (0 < iVar1) {
      iVar10 = 0;
      do {
        iVar9 = 0;
        do {
          lVar8 = 3;
          cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
          if (cVar2 != '\0') {
            iVar3 = pickProjectileIndex(this,true,false);
            lVar8 = (long)iVar3;
          }
          FUN_040ffa80((RtWeakPtr<Sexy::ResourceInfo> *)&local_40,*(undefined8 *)(this + 0x10));
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
          lVar8 = FUN_040ffae0(*(undefined8 *)(lVar6 + 0x70),lVar8);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)local_58,(RtWeakPtrBase *)(lVar8 + 8));
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)local_58);
          iVar3 = iVar9 + 1;
          this_00 = (Projectile *)
                    fireProjectile(this,iVar9,(RtWeakPtr<Sexy::ResourceInfo> *)&local_40,0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
          uVar7 = FUN_040ffa6c(*(undefined8 *)(this_00 + 0xe0));
          uVar7 = operator|(uVar7,0x2000);
          FUN_040ffa70(this_00 + 0xe0,uVar7);
          this_01 = (SexyVector3 *)Projectile::GetVelocity(this_00);
          local_40 = Sexy::SexyVector3::operator*(this_01,0.8);
          local_3c = fVar13;
          local_38 = fVar12;
          this_02 = (SexyTransform2D *)Projectile::SetVelocity(this_00,(SexyVector3 *)&local_40);
          Sexy::SexyTransform2D::CreateRotation(this_02,*(float *)(this + 0x2c));
          Projectile::ApplyRotationToVelocity((SexyTransform2D *)this_00);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_58)
          ;
          iVar9 = iVar3;
        } while (iVar3 != 5);
        fVar13 = *(float *)(this + 0x30);
        iVar10 = iVar10 + 1;
        *(int *)(this + 0x3c) = *(int *)(this + 0x3c) + 1;
        *(float *)(this + 0x2c) = *(float *)(this + 0x2c) + fVar13;
      } while (iVar10 != iVar1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPinkStarFruit::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantPinkStarFruit::Fire(PlantPinkStarFruit *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  RealObject *pRVar7;
  float fVar8;
  undefined4 uVar9;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = (**(code **)(*(long *)param_1 + 0x180))();
  if (cVar2 == '\0') {
    pRVar7 = *(RealObject **)(param_1 + 0x10);
    std::string::string(asStack_10,"Play_Plant_StarFruit_Attack");
    RealObject::PlayPositionalSound(pRVar7,asStack_10,0.0);
    std::string::~string(asStack_10);
    nop();
    cVar2 = FUN_040ffaac(*(undefined8 *)(param_1 + 0x10));
    bVar1 = false;
    if (cVar2 != '\0') {
      fVar8 = (float)PlantFramework::Rand((PlantFramework *)param_1,1.0);
      lVar4 = FUN_04100c00(*(undefined8 *)(param_1 + 0x10));
      bVar1 = fVar8 < *(float *)(lVar4 + 0x2c8);
    }
    iVar6 = 0;
    do {
      iVar3 = pickProjectileIndex(param_1,false,bVar1);
      FUN_040ffa80(asStack_10,*(undefined8 *)(param_1 + 0x10));
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      lVar4 = FUN_040ffae0(*(undefined8 *)(lVar4 + 0x70),(long)iVar3);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)(lVar4 + 8));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_18);
      iVar3 = iVar6 + 1;
      uVar5 = fireProjectile(param_1,iVar6,asStack_10,bVar1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      iVar6 = iVar3;
    } while (iVar3 != 5);
  }
  else {
    param_1[0x49] = (PlantPinkStarFruit)0x1;
    uVar9 = PVZ_T();
    *(undefined4 *)(param_1 + 0x38) = uVar9;
    fVar8 = (float)PVZ_T();
    pRVar7 = *(RealObject **)(param_1 + 0x10);
    *(float *)(param_1 + 0x28) = fVar8 + 0.6;
    std::string::string(asStack_10,"Play_Plant_StarFruit_Nitro");
    RealObject::PlayPositionalSound(pRVar7,asStack_10,0.0);
    std::string::~string(asStack_10);
    nop();
    uVar5 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPinkStarFruit::FindTargetInNormalState(PVZDB::TableIndex) */

void PlantPinkStarFruit::FindTargetInNormalState
               (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1,long param_2
               ,undefined4 param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var6;
  long lVar7;
  float *pfVar8;
  float *pfVar9;
  RtObject *pRVar10;
  Zombie *pZVar11;
  GridItem *pGVar12;
  SharkMinion *this;
  long *plVar13;
  Insets *pIVar14;
  int extraout_w1;
  float fVar15;
  float fVar16;
  float fVar17;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38 [2];
  int local_30;
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(param_1)
  ;
  uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar5,param_3);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) {
LAB_04101954:
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(param_1);
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_50,(RtWeakPtrBase *)local_38);
    Sexy::RtId::~RtId((RtId *)local_38);
    pRVar10 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
    pZVar11 = Sexy::RtObject::Cast<Zombie>(pRVar10);
    if (pZVar11 == (Zombie *)0x0) {
LAB_041018a0:
      pRVar10 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
      pGVar12 = Sexy::RtObject::Cast<GridItem>(pRVar10);
      if ((pGVar12 == (GridItem *)0x0) ||
         (cVar2 = (**(code **)(*(long *)pGVar12 + 0x200))(), cVar2 != '\0')) {
        this = (SharkMinion *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
        iVar4 = SharkMinion::getRow(this);
        plVar13 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
        pIVar14 = (Insets *)(**(code **)(*plVar13 + 0x178))();
        Sexy::Insets::Insets((Insets *)&local_48,pIVar14);
        pIVar14 = (Insets *)
                  (**(code **)(**(long **)(param_2 + 0x10) + 0x178))(*(long **)(param_2 + 0x10));
        Sexy::Insets::Insets((Insets *)local_38,pIVar14);
        if (*(int *)(*(long *)(param_2 + 0x10) + 0x110) == iVar4) {
          if (local_38[0] + local_30 <= local_48) goto LAB_04101818;
        }
        else if ((local_38[0] + local_30 <= local_48) || (local_48 + local_40 <= local_38[0])) {
          p_Var6 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
          lVar7 = std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_leftmost(p_Var6);
          p_Var6 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     **)(param_2 + 0x10);
          pfVar8 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost(p_Var6);
          fVar17 = pfVar8[1];
          if (fVar17 <= *(float *)(lVar7 + 4)) {
            pfVar9 = (float *)FUN_040ffaf0(DAT_06aed3f8,4);
            fVar16 = *pfVar8 + *pfVar9 * *(float *)(p_Var6 + 0xc4);
            fVar17 = fVar17 + *(float *)(p_Var6 + 0xc4) * pfVar9[1];
            fVar15 = ((float)(local_44 + local_3c) - fVar17) / ((float)local_48 - fVar16);
            fVar17 = ((float)local_44 - fVar17) / ((float)(local_48 + local_40) - fVar16);
          }
          else {
            pfVar9 = (float *)FUN_040ffaf0(DAT_06aed3f8,0);
            fVar16 = *pfVar8 + *pfVar9 * *(float *)(p_Var6 + 0xc4);
            fVar17 = (fVar17 + *(float *)(p_Var6 + 0xc4) * pfVar9[1]) - (float)local_44;
            fVar15 = fVar17 / ((float)local_48 - fVar16);
            fVar17 = (fVar17 - (float)local_3c) / ((float)(local_48 + local_40) - fVar16);
          }
          if ((0.5 <= fVar17) || (fVar15 <= 0.5)) goto LAB_04101818;
        }
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)param_1,(RtWeakPtr *)aRStack_50);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
        goto LAB_04101954;
      }
    }
    else {
      uVar5 = operator|(1,0x200);
      uVar5 = operator|(uVar5,0x800);
      uVar3 = operator|(uVar5,0x2000);
      cVar2 = Zombie::MatchesAny(pZVar11,uVar3,*(undefined8 *)(param_2 + 0x10));
      if (cVar2 == '\0') goto LAB_041018a0;
    }
LAB_04101818:
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPinkStarFruit::FindTargetInRotateState(PVZDB::TableIndex) */

void PlantPinkStarFruit::FindTargetInRotateState
               (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1,long param_2
               ,undefined4 param_3)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  RtObject *pRVar6;
  Zombie *pZVar7;
  GridItem *pGVar8;
  SharkMinion *this;
  long *plVar9;
  Insets *pIVar10;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var11;
  float *pfVar12;
  float *pfVar13;
  long lVar14;
  int extraout_w1;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  RtId aRStack_38 [16];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(param_1)
  ;
  uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar5,param_3);
  do {
    bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar2) {
LAB_04101d64:
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(param_1);
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_50,(RtWeakPtrBase *)aRStack_38);
    Sexy::RtId::~RtId(aRStack_38);
    pRVar6 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
    pZVar7 = Sexy::RtObject::Cast<Zombie>(pRVar6);
    if (pZVar7 == (Zombie *)0x0) {
LAB_04101c0c:
      pRVar6 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
      pGVar8 = Sexy::RtObject::Cast<GridItem>(pRVar6);
      if ((pGVar8 == (GridItem *)0x0) ||
         (cVar3 = (**(code **)(*(long *)pGVar8 + 0x200))(), cVar3 != '\0')) {
        this = (SharkMinion *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
        SharkMinion::getRow(this);
        plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
        pIVar10 = (Insets *)(**(code **)(*plVar9 + 0x178))();
        Sexy::Insets::Insets((Insets *)&local_48,pIVar10);
        pIVar10 = (Insets *)
                  (**(code **)(**(long **)(param_2 + 0x10) + 0x178))(*(long **)(param_2 + 0x10));
        Sexy::Insets::Insets((Insets *)aRStack_38,pIVar10);
        p_Var11 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
        pfVar12 = (float *)std::
                           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           ::_M_leftmost(p_Var11);
        pfVar13 = (float *)std::
                           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                           **)(param_2 + 0x10));
        if (*pfVar13 < *pfVar12) {
          p_Var11 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
          lVar14 = std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_leftmost(p_Var11);
          p_Var11 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      **)(param_2 + 0x10);
          pfVar12 = (float *)std::
                             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             ::_M_leftmost(p_Var11);
          uVar5 = DAT_06aed480;
          fVar19 = pfVar12[1];
          if (fVar19 <= *(float *)(lVar14 + 4)) {
            pfVar13 = (float *)FUN_040ffaf0(DAT_06aed480,3);
            fVar17 = *pfVar12 + *pfVar13 * *(float *)(p_Var11 + 0xc4);
            fVar19 = fVar19 + *(float *)(p_Var11 + 0xc4) * pfVar13[1];
            if ((1.73 <= ((float)local_44 - fVar19) / ((float)(local_48 + local_40) - fVar17)) ||
               (((float)(local_44 + local_3c) - fVar19) / ((float)local_48 - fVar17) <= 1.73))
            goto LAB_04101b84;
          }
          else {
            fVar21 = *pfVar12;
            pfVar12 = (float *)FUN_040ffaf0(DAT_06aed480,0);
            fVar18 = *(float *)(p_Var11 + 0xc4);
            fVar15 = fVar21 + *pfVar12 * fVar18;
            iVar1 = local_48 + local_40;
            fVar16 = (float)local_44;
            fVar20 = (float)local_3c;
            fVar22 = (float)local_48;
            fVar17 = (fVar19 + fVar18 * pfVar12[1]) - fVar16;
            if ((1.51 <= (fVar17 - fVar20) / ((float)iVar1 - fVar15)) ||
               (fVar17 / (fVar22 - fVar15) <= 1.51)) {
              pfVar12 = (float *)FUN_040ffaf0(uVar5,4);
              fVar21 = fVar21 + fVar18 * *pfVar12;
              fVar16 = (fVar19 + fVar18 * pfVar12[1]) - fVar16;
              if ((0.06 <= (fVar16 - fVar20) / ((float)iVar1 - fVar21)) ||
                 (fVar16 / (fVar22 - fVar21) <= 0.06)) goto LAB_04101b84;
            }
          }
LAB_04101d50:
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                    ((RtWeakPtr<PowerPropertySheet> *)param_1,(RtWeakPtr *)aRStack_50);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
          goto LAB_04101d64;
        }
        p_Var11 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
        lVar14 = std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost(p_Var11);
        p_Var11 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    **)(param_2 + 0x10);
        pfVar12 = (float *)std::
                           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           ::_M_leftmost(p_Var11);
        fVar19 = pfVar12[1];
        if (fVar19 <= *(float *)(lVar14 + 4)) {
          pfVar13 = (float *)FUN_040ffaf0(DAT_06aed480,2);
          fVar19 = fVar19 + *(float *)(p_Var11 + 0xc4) * pfVar13[1];
          fVar17 = (*pfVar12 + *pfVar13 * *(float *)(p_Var11 + 0xc4)) - (float)local_48;
          if (1.73 < ((float)local_44 - fVar19) / fVar17) {
            fVar17 = ((float)(local_44 + local_3c) - fVar19) / (fVar17 - (float)local_40);
            goto joined_r0x04101ea4;
          }
        }
        else {
          pfVar13 = (float *)FUN_040ffaf0(DAT_06aed480,1);
          fVar17 = (*pfVar12 + *pfVar13 * *(float *)(p_Var11 + 0xc4)) - (float)local_48;
          fVar19 = (fVar19 + *(float *)(p_Var11 + 0xc4) * pfVar13[1]) - (float)local_44;
          if (1.73 < fVar19 / (fVar17 - (float)local_40)) {
            fVar17 = (fVar19 - (float)local_3c) / fVar17;
joined_r0x04101ea4:
            if (fVar17 < 1.73) goto LAB_04101d50;
          }
        }
      }
    }
    else {
      uVar5 = operator|(1,0x200);
      uVar5 = operator|(uVar5,0x800);
      uVar4 = operator|(uVar5,0x2000);
      cVar3 = Zombie::MatchesAny(pZVar7,uVar4,*(undefined8 *)(param_2 + 0x10));
      if (cVar3 == '\0') goto LAB_04101c0c;
    }
LAB_04101b84:
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPinkStarFruit::FindTargetDamageableGridItem(Sexy::TRect<int>&, PlantWeapon) */

void PlantPinkStarFruit::FindTargetDamageableGridItem
               (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1_00,
               long param_1)

{
  char cVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (param_1_00);
  if (*(int *)(param_1 + 0x44) == 0) {
    FindTargetInNormalState(aRStack_10,param_1,0x2f);
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)param_1_00,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)param_1_00);
    if (cVar1 != '\0') goto LAB_04101f0c;
    FindTargetInRotateState(aRStack_10,param_1,0x2f);
  }
  else {
    if (*(int *)(param_1 + 0x44) != 1) goto LAB_04101f0c;
    FindTargetInRotateState(aRStack_10,param_1,0x2f);
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)param_1_00,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)param_1_00);
    if (cVar1 != '\0') goto LAB_04101f0c;
    FindTargetInNormalState(aRStack_10,param_1,0x2f);
  }
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)param_1_00,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)param_1_00);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x48) = 1;
  }
LAB_04101f0c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPinkStarFruit::FindTargetZombie(Sexy::TRect<int>&, PlantWeapon, PlantTargetParams&) */

void PlantPinkStarFruit::FindTargetZombie
               (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1_00,
               long param_1)

{
  char cVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (param_1_00);
  if (*(int *)(param_1 + 0x44) == 0) {
    FindTargetInNormalState(aRStack_10,param_1,0x29);
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)param_1_00,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)param_1_00);
    if (cVar1 != '\0') goto LAB_04102040;
    FindTargetInRotateState(aRStack_10,param_1,0x29);
  }
  else {
    if (*(int *)(param_1 + 0x44) != 1) goto LAB_04102040;
    FindTargetInRotateState(aRStack_10,param_1,0x29);
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)param_1_00,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)param_1_00);
    if (cVar1 != '\0') goto LAB_04102040;
    FindTargetInNormalState(aRStack_10,param_1,0x29);
  }
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)param_1_00,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)param_1_00);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x48) = 1;
  }
LAB_04102040:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPinkStarFruit::FindTargetAndFire(PlantWeapon) */

void PlantPinkStarFruit::FindTargetAndFire(long *param_1)

{
  char cVar1;
  PlantAnimRig_PinkStarFruit *pPVar2;
  undefined8 uVar3;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  uVar3 = 0;
  local_8 = ___stack_chk_guard;
  cVar1 = Plant::CanFindTarget(param_1[2]);
  if (cVar1 != '\0') {
    if ((char)param_1[9] == '\0') {
      uVar3 = 1;
      (**(code **)(*param_1 + 0x1a0))(param_1);
    }
    else {
      pPVar2 = (PlantAnimRig_PinkStarFruit *)FUN_04100b20(param_1[2]);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 asStack_58);
      PlantAnimRig_PinkStarFruit::playRotate(pPVar2,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

