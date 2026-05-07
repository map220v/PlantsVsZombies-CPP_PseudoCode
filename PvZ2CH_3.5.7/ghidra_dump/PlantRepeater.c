// Class: PlantRepeater


/* PlantRepeater::PlantRepeater() */

void __thiscall PlantRepeater::PlantRepeater(PlantRepeater *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067c3450;
  ZombossSkyCityLineShoot::ZombossSkyCityLineShoot((ZombossSkyCityLineShoot *)(this + 0x28));
  return;
}


/* PlantRepeater::StaticNew() */

PlantRepeater * PlantRepeater::StaticNew(void)

{
  PlantRepeater *this;
  
  this = ::operator_new(0x48);
  PlantRepeater(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantRepeater::StaticClassInit() */

void PlantRepeater::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantRepeater");
    (*pcVar2)(plVar1,asStack_10,FUN_0405fe00,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantRepeater::StaticGetClass() */

long * PlantRepeater::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantRepeater",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantRepeater::GetClass() const */

long * PlantRepeater::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantRepeater",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantRepeater::~PlantRepeater() */

void __thiscall PlantRepeater::~PlantRepeater(PlantRepeater *this)

{
  *(undefined ***)this = &PTR_GetClass_067c3450;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantRepeater::~PlantRepeater() */

void __thiscall PlantRepeater::~PlantRepeater(PlantRepeater *this)

{
  ~PlantRepeater(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantRepeater::UpdatePlantfood() */

void __thiscall PlantRepeater::UpdatePlantfood(PlantRepeater *this)

{
  float *pfVar1;
  long lVar2;
  PlantAction *pPVar3;
  Plant *pPVar4;
  float fVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  EATextSquish::Vec3::Vec3(aVStack_18,*pfVar1,pfVar1[1],pfVar1[2]);
  pPVar4 = *(Plant **)(this + 0x10);
  fVar5 = *(float *)(pPVar4 + 0xc4);
  Plant::GetProps();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  pPVar3 = (PlantAction *)FUN_0405fb3c(*(undefined8 *)(lVar2 + 0x70),0);
  PeashooterPlantfood::Update
            ((PeashooterPlantfood *)(this + 0x28),pPVar4,(SexyVector3 *)aVStack_18,fVar5,pPVar3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantRepeater::ApplyPlantfood() */

void __thiscall PlantRepeater::ApplyPlantfood(PlantRepeater *this)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  (**(code **)(*plVar1 + 0x80))(0x41200000);
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  lVar2 = *(long *)(this + 0x10);
  *(undefined4 *)(lVar2 + 200) = 5;
  FUN_0405fb4c(aRStack_10,lVar2);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  fVar3 = *(float *)(lVar2 + 0x38);
  lVar2 = FUN_0405ffd8(*(undefined8 *)(this + 0x10));
  ZombossSkyCityLineShoot::Start
            ((ZombossSkyCityLineShoot *)(this + 0x28),fVar3,*(int *)(lVar2 + 0x2b8),1.0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantRepeater::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantRepeater::Fire(PlantRepeater *this,RtWeakPtrBase *param_2,undefined4 param_3,undefined4 param_4
                   )

{
  char cVar1;
  int iVar2;
  int iVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var4;
  undefined8 *puVar5;
  long lVar6;
  float *pfVar7;
  wchar_t *pwVar8;
  Plant *pPVar9;
  undefined8 uVar10;
  RealObject *pRVar11;
  char *__s;
  float fVar12;
  Board *pBVar18;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  float local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  pPVar9 = *(Plant **)(this + 0x10);
  if (((cVar1 == '\0') || ((*(int *)(pPVar9 + 200) != 10 && (*(int *)(pPVar9 + 200) != 5)))) &&
     (iVar2 = FUN_0405fb34(pPVar9), iVar2 < 2)) {
    if (*(int *)(pPVar9 + 200) == 10) {
      Plant::GetProps();
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      lVar6 = FUN_0405fb3c(*(undefined8 *)(lVar6 + 0x70),1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      p_Var4 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 **)(this + 0x10);
      pfVar7 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(p_Var4);
      fVar15 = *(float *)(p_Var4 + 0xc4);
      fVar17 = *pfVar7;
      fVar16 = pfVar7[2];
      fVar13 = *(float *)(lVar6 + 0x6c);
      fVar12 = *(float *)(lVar6 + 0x68);
      fVar14 = pfVar7[1];
      uVar10 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)(lVar6 + 8));
      p_Var4 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Board::AddProjectile
                            ((Board *)(fVar17 + fVar12 * fVar15),fVar14,fVar16 - fVar15 * fVar13,
                             uVar10,(RtWeakPtr<Sexy::ResourceInfo> *)&local_18,
                             *(undefined8 *)(this + 0x10),0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      uVar10 = FUN_0405fb20(*(undefined8 *)(p_Var4 + 0xe0));
      uVar10 = operator|(uVar10,0x2000);
      FUN_0405fb24(p_Var4 + 0xe0,uVar10);
      pRVar11 = *(RealObject **)(this + 0x10);
      std::string::string((string *)&local_18,"Play_Repeater_Cannon_Fire");
      RealObject::PlayPositionalSound(pRVar11,(string *)&local_18,0.0);
      std::string::~string((string *)&local_18);
      nop();
      goto LAB_04060230;
    }
    p_Var4 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)0x0;
    if (*(int *)(pPVar9 + 200) == 5) goto LAB_04060230;
LAB_04060190:
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,param_2);
    Plant::Fire(pPVar9,(RtWeakPtr<Sexy::SoundResource> *)&local_18,param_3,param_4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    pPVar9 = *(Plant **)(this + 0x10);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,param_2);
    p_Var4 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Plant::Fire(pPVar9,(RtWeakPtr<Sexy::SoundResource> *)&local_18,param_3,param_4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
LAB_040601ec:
    puVar5 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(p_Var4);
    local_18 = (float)*puVar5;
    local_10 = *(undefined4 *)(puVar5 + 1);
    _local_18 = CONCAT44((int)((ulong)*puVar5 >> 0x20),local_18 - 40.0);
    (**(code **)(*(long *)p_Var4 + 0x78))(p_Var4,&local_18);
    goto LAB_04060230;
  }
  fVar12 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
  pPVar9 = *(Plant **)(this + 0x10);
  iVar2 = FUN_0405fb34(pPVar9);
  if (iVar2 < 3) {
    fVar15 = 0.15;
    fVar14 = 0.16666667;
    cVar1 = Plant::GetAvatarEnable(pPVar9);
    pPVar9 = *(Plant **)(this + 0x10);
    fVar13 = fVar14;
    if (cVar1 != '\0') goto LAB_040602ac;
LAB_04060458:
    iVar2 = FUN_0405fb34(pPVar9);
    if (*(int *)(pPVar9 + 200) == 10) {
      Plant::GetProps();
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      lVar6 = FUN_0405fb3c(*(undefined8 *)(lVar6 + 0x70),1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      p_Var4 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 **)(this + 0x10);
      pfVar7 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(p_Var4);
      fVar13 = *(float *)(lVar6 + 0x6c);
      fVar17 = *pfVar7;
      fVar16 = pfVar7[2];
      fVar15 = *(float *)(p_Var4 + 0xc4);
      fVar12 = *(float *)(lVar6 + 0x68);
      fVar14 = pfVar7[1];
      uVar10 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)(lVar6 + 8));
      p_Var4 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Board::AddProjectile
                            ((Board *)(fVar17 + fVar12 * fVar15),fVar14,fVar16 - fVar15 * fVar13,
                             uVar10,(RtWeakPtr<Sexy::ResourceInfo> *)&local_18,
                             *(undefined8 *)(this + 0x10),0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      uVar10 = FUN_0405fb20(*(undefined8 *)(p_Var4 + 0xe0));
      uVar10 = operator|(uVar10,0x2000);
      FUN_0405fb24(p_Var4 + 0xe0,uVar10);
      pRVar11 = *(RealObject **)(this + 0x10);
      std::string::string((string *)&local_18,"Play_Repeater_Cannon_Fire");
      RealObject::PlayPositionalSound(pRVar11,(string *)&local_18,0.0);
      std::string::~string((string *)&local_18);
      nop();
      goto LAB_04060230;
    }
    if (*(int *)(pPVar9 + 200) != 5) {
      if (iVar2 < 3) goto LAB_0406069c;
      goto LAB_04060478;
    }
LAB_040604bc:
    p_Var4 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)0x0;
    goto LAB_04060230;
  }
  fVar15 = 0.083333336;
  fVar14 = 0.25;
  fVar13 = 0.25;
  cVar1 = Plant::GetAvatarEnable(pPVar9);
  pPVar9 = *(Plant **)(this + 0x10);
  if (cVar1 == '\0') goto LAB_04060458;
LAB_040602ac:
  iVar3 = FUN_0405fb34(pPVar9);
  iVar2 = *(int *)(pPVar9 + 200);
  fVar13 = fVar14;
  if ((iVar3 == 2) || (iVar3 < 3)) {
    if (iVar2 == 5) goto LAB_040604bc;
    if (iVar2 != 10) {
LAB_0406069c:
      if (fVar12 < fVar13) goto LAB_040604c4;
      if (fVar13 + fVar13 <= fVar12) goto LAB_04060190;
LAB_040606b0:
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,param_2);
      __s = "SnowPeaDefault";
      goto LAB_040604e4;
    }
  }
  else {
    if (iVar2 == 5) goto LAB_040604bc;
    if (iVar2 != 10) {
LAB_04060478:
      if (fVar12 < fVar13) {
LAB_040604c4:
        __s = "FirePeaDefault";
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,param_2);
      }
      else {
        if (fVar12 < fVar13 + fVar13) goto LAB_040606b0;
        if (fVar13 + fVar13 + fVar15 <= fVar12) goto LAB_04060190;
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,param_2);
        __s = "UltraFirePeaDefault";
      }
LAB_040604e4:
      std::string::string((string *)&local_18,__s);
      Plant::SpecialFire(pPVar9,aRStack_20,param_3,(string *)&local_18);
      std::string::~string((string *)&local_18);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
      pPVar9 = *(Plant **)(this + 0x10);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,param_2);
      std::string::string((string *)&local_18,__s);
      p_Var4 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Plant::SpecialFire(pPVar9,aRStack_20,param_3,(string *)&local_18);
      std::string::~string((string *)&local_18);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
      goto LAB_040601ec;
    }
  }
  if (fVar12 < 0.33333334) {
    Plant::GetProps();
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    lVar6 = FUN_0405fb3c(*(undefined8 *)(lVar6 + 0x70),1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    p_Var4 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               **)(this + 0x10);
    pfVar7 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(p_Var4);
    fVar12 = *(float *)(p_Var4 + 0xc4);
    pBVar18._0_4_ = (Board *)(*pfVar7 + *(float *)(lVar6 + 0x68) * fVar12);
    fVar13 = pfVar7[2] - fVar12 * *(float *)(lVar6 + 0x6c);
    fVar12 = pfVar7[1];
    uVar10 = Sexy::LazySingleton<PVZDB>::GetInstance();
    pwVar8 = L"GiantUltraFirePeaDefault";
LAB_04060368:
    Sexy::RtName::RtName((RtName *)&local_18,pwVar8);
    PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_20,uVar10,0xc,(RtName *)&local_18);
    Sexy::RtName::~RtName((RtName *)&local_18);
    uVar10 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_20);
    p_Var4 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Board::AddProjectile
                          (pBVar18._0_4_,fVar12,fVar13,uVar10,(RtName *)&local_18,
                           *(undefined8 *)(this + 0x10),0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    uVar10 = FUN_0405fb20(*(undefined8 *)(p_Var4 + 0xe0));
    uVar10 = operator|(uVar10,0x2000);
    FUN_0405fb24(p_Var4 + 0xe0,uVar10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  }
  else {
    if (fVar12 < 0.6666667) {
      Plant::GetProps();
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      lVar6 = FUN_0405fb3c(*(undefined8 *)(lVar6 + 0x70),1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      p_Var4 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 **)(this + 0x10);
      pfVar7 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(p_Var4);
      fVar12 = *(float *)(p_Var4 + 0xc4);
      pBVar18._0_4_ = (Board *)(*pfVar7 + *(float *)(lVar6 + 0x68) * fVar12);
      fVar13 = pfVar7[2] - fVar12 * *(float *)(lVar6 + 0x6c);
      fVar12 = pfVar7[1];
      uVar10 = Sexy::LazySingleton<PVZDB>::GetInstance();
      pwVar8 = L"GiantFirePeaDefault";
      goto LAB_04060368;
    }
    Plant::GetProps();
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    lVar6 = FUN_0405fb3c(*(undefined8 *)(lVar6 + 0x70),1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    p_Var4 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               **)(this + 0x10);
    pfVar7 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(p_Var4);
    fVar15 = *(float *)(p_Var4 + 0xc4);
    fVar17 = *pfVar7;
    fVar16 = pfVar7[2];
    fVar13 = *(float *)(lVar6 + 0x6c);
    fVar12 = *(float *)(lVar6 + 0x68);
    fVar14 = pfVar7[1];
    uVar10 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)(lVar6 + 8));
    p_Var4 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Board::AddProjectile
                          ((Board *)(fVar17 + fVar12 * fVar15),fVar14,fVar16 - fVar15 * fVar13,
                           uVar10,(RtWeakPtr<Sexy::ResourceInfo> *)&local_18,
                           *(undefined8 *)(this + 0x10),0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    uVar10 = FUN_0405fb20(*(undefined8 *)(p_Var4 + 0xe0));
    uVar10 = operator|(uVar10,0x2000);
    FUN_0405fb24(p_Var4 + 0xe0,uVar10);
  }
  pRVar11 = *(RealObject **)(this + 0x10);
  std::string::string((string *)&local_18,"Play_Repeater_Cannon_Fire");
  RealObject::PlayPositionalSound(pRVar11,(string *)&local_18,0.0);
  std::string::~string((string *)&local_18);
  nop();
LAB_04060230:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(p_Var4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantRepeater::CancelPlantfood() */

void __thiscall PlantRepeater::CancelPlantfood(PlantRepeater *this)

{
  long *plVar1;
  PopAnimRig *pPVar2;
  UIEasyButtonWidget *this_00;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(*(UIEasyButtonWidget **)(this + 0x10) + 200) == 5) {
    plVar1 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    (**(code **)(*plVar1 + 0x88))();
    this_00 = *(UIEasyButtonWidget **)(this + 0x10);
    *(undefined4 *)(this_00 + 200) = 10;
    pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_00);
    std::string::string(asStack_58,"plantfood2");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_60,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
               asStack_60);
    PopAnimRig::PlayAndStop(pPVar2,asStack_58,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_60);
    nop();
    Sexy::RtId::~RtId(aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

