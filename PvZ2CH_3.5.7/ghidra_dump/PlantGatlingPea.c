// Class: PlantGatlingPea


/* PlantGatlingPea::onAnimStoppedCallback(std::string const&) */

void PlantGatlingPea::onAnimStoppedCallback(string *param_1)

{
  *(undefined4 *)(*(long *)(param_1 + 0x10) + 200) = 1;
  PlantFramework::ManualCancelPlantfood((PlantFramework *)param_1);
  return;
}


/* PlantGatlingPea::CancelPlantfood() */

void __thiscall PlantGatlingPea::CancelPlantfood(PlantGatlingPea *this)

{
  Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGatlingPea::StaticClassInit() */

void PlantGatlingPea::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantGatlingPea");
    (*pcVar2)(plVar1,asStack_10,FUN_0413af9c,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGatlingPea::StaticGetClass() */

long * PlantGatlingPea::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantGatlingPea",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantGatlingPea::GetClass() const */

long * PlantGatlingPea::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantGatlingPea",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantGatlingPea::PlantGatlingPea() */

void __thiscall PlantGatlingPea::PlantGatlingPea(PlantGatlingPea *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR_GetClass_067ecaa0;
  *(undefined4 *)(this + 0x2c) = 0;
  GatlingPeaPlantfood::GatlingPeaPlantfood((GatlingPeaPlantfood *)(this + 0x38));
  *(undefined4 *)(this + 0x60) = 0;
  this[0x34] = (PlantGatlingPea)0x0;
  *(undefined4 *)(this + 0x30) = 0x3f800000;
  return;
}


/* PlantGatlingPea::StaticNew() */

PlantGatlingPea * PlantGatlingPea::StaticNew(void)

{
  PlantGatlingPea *this;
  
  this = ::operator_new(0x68);
  PlantGatlingPea(this);
  return this;
}


/* PlantGatlingPea::getPlantActionIdx() */

undefined4 __thiscall PlantGatlingPea::getPlantActionIdx(PlantGatlingPea *this)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_0413a3cc(*(undefined8 *)(this + 0x10));
  uVar2 = 2;
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  return uVar2;
}


/* PlantGatlingPea::IsInGeneBuffAttack() */

bool __thiscall PlantGatlingPea::IsInGeneBuffAttack(PlantGatlingPea *this)

{
  return 0 < *(int *)(this + 0x60);
}


/* PlantGatlingPea::~PlantGatlingPea() */

void __thiscall PlantGatlingPea::~PlantGatlingPea(PlantGatlingPea *this)

{
  *(undefined ***)this = &PTR_GetClass_067ecaa0;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantGatlingPea::~PlantGatlingPea() */

void __thiscall PlantGatlingPea::~PlantGatlingPea(PlantGatlingPea *this)

{
  ~PlantGatlingPea(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGatlingPea::launchArcPelletAtTarget(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantGatlingPea::launchArcPelletAtTarget
          (PlantGatlingPea *this,RtWeakPtrBase *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 *puVar2;
  Plant *pPVar3;
  long lVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  undefined8 local_40;
  undefined4 local_38;
  float local_30;
  float fStack_2c;
  undefined4 local_28;
  int local_20 [6];
  long local_8;
  
  lVar4 = 0;
  local_8 = ___stack_chk_guard;
  local_20[1] = 0x1e;
  local_20[2] = 0x3c;
  local_20[3] = 0xffffffe2;
  local_20[0] = 0;
  local_20[4] = 0xffffffc4;
  do {
    pPVar3 = *(Plant **)(this + 0x10);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_30,param_2);
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Plant::Fire(pPVar3,(RtWeakPtr<Sexy::SoundResource> *)&local_30,param_3,param_4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
    puVar2 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this_00);
    local_40 = *puVar2;
    piVar1 = (int *)((long)local_20 + lVar4);
    lVar4 = lVar4 + 4;
    local_38 = *(undefined4 *)(puVar2 + 1);
    fVar5 = (float)Sexy::SexyMath::DegToRad((float)*piVar1);
    dVar6 = cos((double)fVar5);
    local_40._0_4_ = (float)((double)(float)local_40 + (dVar6 + -1.5) * 20.0);
    dVar7 = sin((double)fVar5);
    local_40 = CONCAT44((float)((double)local_40._4_4_ + dVar7 * 20.0),(float)local_40);
    (**(code **)(*(long *)this_00 + 0x78))(this_00,&local_40);
    puVar2 = (undefined8 *)Projectile::GetVelocity((Projectile *)this_00);
    local_30 = (float)*puVar2;
    local_28 = *(undefined4 *)(puVar2 + 1);
    _local_30 = CONCAT44((float)(dVar7 * (double)local_30),(float)(dVar6 * (double)local_30));
    Projectile::SetVelocity((Projectile *)this_00,(SexyVector3 *)&local_30);
    FUN_0413a360(-fVar5,this_00 + 0xc4);
  } while (lVar4 != 0x14);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGatlingPea::UpdateActions() */

void __thiscall PlantGatlingPea::UpdateActions(PlantGatlingPea *this)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  float fVar4;
  undefined4 uVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((this[0x34] != (PlantGatlingPea)0x0) && (0 < *(int *)(this + 0x28))) &&
     (fVar4 = (float)PVZ_T(), 0.15 <= fVar4 - *(float *)(this + 0x2c))) {
    PlantFramework::FindTargetZombie(aRStack_18,this,0);
    lVar3 = *(long *)(this + 0x10);
    uVar5 = *(undefined4 *)(lVar3 + 0x150);
    uVar2 = getPlantActionIdx(this);
    *(undefined4 *)(lVar3 + 0x150) = uVar2;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    launchArcPelletAtTarget(this,aRStack_10,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    iVar1 = *(int *)(this + 0x28);
    *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = uVar5;
    *(int *)(this + 0x28) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      this[0x34] = (PlantGatlingPea)0x0;
    }
    uVar5 = PVZ_T();
    *(undefined4 *)(this + 0x2c) = uVar5;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGatlingPea::Initialize() */

void __thiscall PlantGatlingPea::Initialize(PlantGatlingPea *this)

{
  RtObject *this_00;
  PlantAnimRig_GatlingPea *pPVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  pPVar1 = Sexy::RtObject::Cast<PlantAnimRig_GatlingPea>(this_00);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  PlantAnimRig_DevilsFlower::SetPlantPtr((PlantAnimRig_DevilsFlower *)pPVar1,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGatlingPea::onPlantfoodStarted() */

void __thiscall PlantGatlingPea::onPlantfoodStarted(PlantGatlingPea *this)

{
  bool bVar1;
  long lVar2;
  RealObject *this_00;
  float fVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_0413a3a0(aRStack_10,*(undefined8 *)(this + 0x10));
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  fVar3 = *(float *)(lVar2 + 0x38);
  lVar2 = FUN_0413b780(*(undefined8 *)(this + 0x10));
  GatlingPeaPlantfood::Start((GatlingPeaPlantfood *)(this + 0x38),fVar3,*(int *)(lVar2 + 0x2b8),1.0)
  ;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  this_00 = *(RealObject **)(this + 0x10);
  std::string::string((string *)aRStack_10,"Play_Peashooter_Food");
  RealObject::PlayPositionalSound(this_00,(string *)aRStack_10,0.0);
  std::string::~string((string *)aRStack_10);
  nop();
  fVar3 = (float)Plant::GetGeneSkillBoost(*(Plant **)(this + 0x10));
  bVar1 = local_8 == ___stack_chk_guard;
  *(int *)(this + 0x60) = (int)fVar3;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGatlingPea::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantGatlingPea::Fire
          (PlantGatlingPea *this,RtWeakPtrBase *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 *puVar5;
  long lVar6;
  Plant *pPVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float local_18;
  float fStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if (cVar1 != '\0') {
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)0x0;
    goto LAB_0413bac8;
  }
  lVar6 = *(long *)(this + 0x10);
  this[0x34] = (PlantGatlingPea)0x0;
  iVar2 = FUN_0413a3c4(lVar6);
  if (iVar2 == 2) {
    lVar6 = FUN_0413b780(lVar6);
    fVar9 = *(float *)(this + 0x30);
    fVar10 = *(float *)(lVar6 + 700);
LAB_0413bb10:
    fVar9 = (float)PlantFramework::Rand((PlantFramework *)this,fVar9);
    this[0x34] = (PlantGatlingPea)(fVar9 < fVar10);
    if (fVar9 < fVar10) {
      *(undefined4 *)(this + 0x28) = 2;
      fVar9 = 20.0;
      uVar3 = PVZ_T();
      lVar6 = *(long *)(this + 0x10);
      *(undefined4 *)(this + 0x2c) = uVar3;
    }
    else {
      lVar6 = *(long *)(this + 0x10);
      fVar9 = 0.0;
    }
  }
  else {
    if (2 < iVar2) {
      lVar6 = FUN_0413b780(lVar6);
      fVar9 = *(float *)(this + 0x30);
      fVar10 = *(float *)(lVar6 + 0x2c0);
      goto LAB_0413bb10;
    }
    fVar9 = 0.0;
  }
  iVar2 = 0x50;
  uVar3 = getPlantActionIdx(this);
  *(undefined4 *)(lVar6 + 0x150) = uVar3;
  do {
    pPVar7 = *(Plant **)(this + 0x10);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,param_2);
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Plant::Fire(pPVar7,(RtWeakPtr<Sexy::SoundResource> *)&local_18,param_3,param_4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    puVar5 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this_00);
    fVar10 = (float)iVar2;
    iVar2 = iVar2 + -0x28;
    local_18 = (float)*puVar5;
    local_10 = *(undefined4 *)(puVar5 + 1);
    fStack_14 = (float)((ulong)*puVar5 >> 0x20);
    _local_18 = CONCAT44(fStack_14,fVar9 + local_18 + fVar10);
    (**(code **)(*(long *)this_00 + 0x78))(this_00,(RtWeakPtr<Sexy::SoundResource> *)&local_18);
  } while (iVar2 != -0x50);
  cVar1 = IsInGeneBuffAttack(this);
  if (cVar1 != '\0') {
    iVar2 = 0;
    do {
      iVar8 = -1;
      do {
        pPVar7 = *(Plant **)(this + 0x10);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_18,param_2);
        this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)Plant::Fire(pPVar7,(RtWeakPtr<Sexy::SoundResource> *)&local_18,param_3,param_4)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        puVar5 = (undefined8 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost(this_00);
        local_18 = (float)*puVar5;
        local_10 = *(undefined4 *)(puVar5 + 1);
        local_18 = fVar9 + local_18 + ((float)iVar2 + -1.6) * 24.0;
        fStack_14 = (float)((ulong)*puVar5 >> 0x20);
        iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
        iVar4 = iVar4 * iVar8;
        iVar8 = iVar8 + 1;
        _local_18 = CONCAT44((float)iVar4 + fStack_14,local_18);
        (**(code **)(*(long *)this_00 + 0x78))(this_00,(RtWeakPtr<Sexy::SoundResource> *)&local_18);
      } while (iVar8 != 2);
      iVar2 = iVar2 + 1;
    } while (iVar2 != 6);
    if (*(int *)(this + 0x60) < 1) {
      *(undefined4 *)(this + 0x60) = 0;
    }
    else {
      *(int *)(this + 0x60) = *(int *)(this + 0x60) + -1;
    }
  }
LAB_0413bac8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGatlingPea::ApplyPlantfood() */

void __thiscall PlantGatlingPea::ApplyPlantfood(PlantGatlingPea *this)

{
  Plant *pPVar1;
  RtMixedPtr aRStack_128 [8];
  RtId aRStack_120 [8];
  string asStack_118 [8];
  RtMixedPtr aRStack_110 [8];
  RtId aRStack_108 [8];
  string asStack_100 [8];
  RtMixedPtr aRStack_f8 [8];
  RtId aRStack_f0 [8];
  string asStack_e8 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_e0 [72];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_98 [72];
  RtReflectionDelegate<Sexy::Delegate0> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_128);
  std::string::string(asStack_118,"onPlantfoodStartedCallback");
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate0> *)aRStack_e0,aRStack_120,asStack_118);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_110);
  std::string::string(asStack_100,"onPlantfoodLoopedCallback");
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate0> *)aRStack_98,aRStack_108,asStack_100);
  pPVar1 = *(Plant **)(this + 0x10);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_f8);
  std::string::string(asStack_e8,"onPlantfoodEndedCallback");
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate(aRStack_50,aRStack_f0,asStack_e8);
  Plant::EnablePlantfoodAnimation(pPVar1,aRStack_e0,aRStack_98,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_e8);
  nop();
  Sexy::RtId::~RtId(aRStack_f0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_f8);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_98);
  std::string::~string(asStack_100);
  nop();
  Sexy::RtId::~RtId(aRStack_108);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_110);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_e0);
  std::string::~string(asStack_118);
  nop();
  Sexy::RtId::~RtId(aRStack_120);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_128);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGatlingPea::UpdatePlantfood() */

void __thiscall PlantGatlingPea::UpdatePlantfood(PlantGatlingPea *this)

{
  int iVar1;
  float *pfVar2;
  long lVar3;
  PlantAction *pPVar4;
  Plant *pPVar5;
  float fVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  EATextSquish::Vec3::Vec3(aVStack_18,*pfVar2,pfVar2[1],pfVar2[2]);
  pPVar5 = *(Plant **)(this + 0x10);
  fVar6 = *(float *)(pPVar5 + 0xc4);
  Plant::GetProps();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  iVar1 = getPlantActionIdx(this);
  pPVar4 = (PlantAction *)FUN_0413a3f8(*(undefined8 *)(lVar3 + 0x70),(long)iVar1);
  GatlingPeaPlantfood::Update
            ((GatlingPeaPlantfood *)(this + 0x38),pPVar5,(SexyVector3 *)aVStack_18,fVar6,pPVar4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

