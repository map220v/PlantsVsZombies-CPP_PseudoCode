// Class: PlantPeanut


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPeanut::PlayChewedOnSound() */

void __thiscall PlantPeanut::PlayChewedOnSound(PlantPeanut *this)

{
  RealObject *this_00;
  string asStack_10 [8];
  long local_8;
  
  this_00 = *(RealObject **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Play_Chomp_Soft");
  RealObject::PlayPositionalSound(this_00,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPeanut::Initialize() */

void __thiscall PlantPeanut::Initialize(PlantPeanut *this)

{
  code *pcVar1;
  
  PlantPeashooter::Initialize((PlantPeashooter *)this);
  pcVar1 = *(code **)(*(long *)this + 0x528);
  *(undefined4 *)(this + 0x4c) = 0xbf800000;
  (*pcVar1)(0,this);
  return;
}


/* PlantPeanut::TakeSmashAttack(Sexy::RtWeakPtr<Zombie>) */

void PlantPeanut::TakeSmashAttack(long *param_1)

{
  char cVar1;
  
  cVar1 = Plant::IsInvincible((Plant *)param_1[2],false);
  if (cVar1 == '\0') {
    if (*(float *)((long)param_1 + 0x4c) <= 0.0) {
      Plant::KillPlant((Plant *)param_1[2],0,0,1);
      return;
    }
    (**(code **)(*param_1 + 0x528))(0,param_1);
  }
  return;
}


/* PlantPeanut::PlantPeanut() */

void __thiscall PlantPeanut::PlantPeanut(PlantPeanut *this)

{
  PlantPeashooter::PlantPeashooter((PlantPeashooter *)this);
  *(undefined4 *)(this + 0x4c) = 0xbf800000;
  *(undefined ***)this = &PTR_GetClass_0680a0d0;
  return;
}


/* PlantPeanut::StaticNew() */

PlantPeanut * PlantPeanut::StaticNew(void)

{
  PlantPeanut *this;
  
  this = ::operator_new(0x50);
  PlantPeanut(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPeanut::StaticClassInit() */

void PlantPeanut::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantPeanut");
    (*pcVar2)(plVar1,asStack_10,FUN_0420b250,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPeanut::StaticGetClass() */

long * PlantPeanut::StaticGetClass(void)

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
  uVar2 = PlantPeashooter::StaticGetClass();
  (*pcVar3)(plVar1,"PlantPeanut",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPeanut::GetClass() const */

long * PlantPeanut::GetClass(void)

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
  uVar2 = PlantPeashooter::StaticGetClass();
  (*pcVar3)(plVar1,"PlantPeanut",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPeanut::~PlantPeanut() */

void __thiscall PlantPeanut::~PlantPeanut(PlantPeanut *this)

{
  *(undefined ***)this = &PTR_GetClass_0680a0d0;
  PlantPeashooter::~PlantPeashooter((PlantPeashooter *)this);
  return;
}


/* PlantPeanut::~PlantPeanut() */

void __thiscall PlantPeanut::~PlantPeanut(PlantPeanut *this)

{
  ~PlantPeanut(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPeanut::UpdatePlantfood() */

void __thiscall PlantPeanut::UpdatePlantfood(PlantPeanut *this)

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
  pPVar3 = (PlantAction *)FUN_0420ae20(*(undefined8 *)(lVar2 + 0x70));
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
/* PlantPeanut::TryBlockZombossRush(Zombie*) */

void PlantPeanut::TryBlockZombossRush(Zombie *param_1)

{
  code *pcVar1;
  float fVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  fVar2 = *(float *)(param_1 + 0x4c);
  local_8 = ___stack_chk_guard;
  if (0.0 < fVar2) {
    pcVar1 = *(code **)(*(long *)param_1 + 0x310);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    (*pcVar1)(param_1,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0.0 < fVar2);
}


/* PlantPeanut::CancelPlantfood() */

void __thiscall PlantPeanut::CancelPlantfood(PlantPeanut *this)

{
  long *plVar1;
  
  plVar1 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  (**(code **)(*plVar1 + 0x88))();
  PlantPeashooter::CancelPlantfood((PlantPeashooter *)this);
  return;
}


/* PlantPeanut::GetLaunchDelayMultiplier() */

undefined4 __thiscall PlantPeanut::GetLaunchDelayMultiplier(PlantPeanut *this)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  
  lVar2 = UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  iVar1 = FUN_0420adc0(*(undefined4 *)(lVar2 + 0x22c));
  uVar3 = 0x40000000;
  if (iVar1 < 2) {
    uVar3 = 0x3f800000;
  }
  return uVar3;
}


/* PlantPeanut::FindTargetAndFire(PlantWeapon) */

bool __thiscall PlantPeanut::FindTargetAndFire(PlantPeanut *this,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  RtObject *this_00;
  PlantAnimRig_Peanut *pPVar5;
  UIEasyButtonWidget *this_01;
  
  uVar4 = time((time_t *)0x0);
  Sexy::SRand(uVar4);
  iVar2 = PlantFramework::Rand((PlantFramework *)this);
  this_01 = *(UIEasyButtonWidget **)(this + 0x10);
  iVar3 = FUN_0420adec(this_01);
  if (iVar3 == 2) {
    if (0.2 < (float)iVar2 * 4.656613e-10) goto LAB_0420bda0;
  }
  else if (((iVar3 < 2) || (5 < iVar3)) || (0.4 < (float)iVar2 * 4.656613e-10)) goto LAB_0420bda0;
  this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(this_01);
  pPVar5 = Sexy::RtObject::Cast<PlantAnimRig_Peanut>(this_00);
  FUN_0420adf8(pPVar5 + 0x3bc);
  this_01 = *(UIEasyButtonWidget **)(this + 0x10);
LAB_0420bda0:
  cVar1 = Plant::CanFindTarget(this_01,param_2);
  if (cVar1 != '\0') {
    (**(code **)(*(long *)this + 0x1a0))(this);
  }
  return cVar1 != '\0';
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPeanut::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantPeanut::Fire(PlantPeanut *this,RtWeakPtrBase *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  RtObject *pRVar3;
  PlantAnimRig_Peanut *pPVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  UIEasyButtonWidget *this_01;
  undefined8 *puVar5;
  Plant *pPVar6;
  undefined4 local_18;
  float fStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if (cVar1 == '\0') {
    pRVar3 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    pPVar4 = Sexy::RtObject::Cast<PlantAnimRig_Peanut>(pRVar3);
    iVar2 = FUN_0420adf4(*(undefined4 *)(pPVar4 + 0x3bc));
    if (iVar2 == 1) {
      pPVar6 = *(Plant **)(this + 0x10);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_18,param_2);
      this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Plant::Fire(pPVar6,(RtWeakPtr<Sexy::SoundResource> *)&local_18,param_3,param_4);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      this_01 = *(UIEasyButtonWidget **)(this + 0x10);
    }
    else {
      if (iVar2 != 2) {
        if (iVar2 == 0) {
          pPVar6 = *(Plant **)(this + 0x10);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_18,param_2);
          this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)Plant::Fire(pPVar6,(RtWeakPtr<Sexy::SoundResource> *)&local_18,param_3,
                                   param_4);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
          puVar5 = (undefined8 *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_leftmost(this_00);
          fStack_14 = (float)((ulong)*puVar5 >> 0x20);
          local_10 = *(undefined4 *)(puVar5 + 1);
          local_18 = (undefined4)*puVar5;
          _local_18 = CONCAT44(fStack_14 + 20.0,local_18);
          (**(code **)(*(long *)this_00 + 0x78))
                    (this_00,(RtWeakPtr<Sexy::SoundResource> *)&local_18);
          pRVar3 = (RtObject *)
                   UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
          pPVar4 = Sexy::RtObject::Cast<PlantAnimRig_Peanut>(pRVar3);
          FUN_0420ae04(pPVar4 + 0x3bc);
          goto LAB_0420be88;
        }
        goto LAB_0420be84;
      }
      pPVar6 = *(Plant **)(this + 0x10);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_18,param_2);
      Plant::Fire(pPVar6,(RtWeakPtr<Sexy::SoundResource> *)&local_18,param_3,param_4);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      pPVar6 = *(Plant **)(this + 0x10);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_18,param_2);
      this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Plant::Fire(pPVar6,(RtWeakPtr<Sexy::SoundResource> *)&local_18,param_3,param_4);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      puVar5 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(this_00);
      fStack_14 = (float)((ulong)*puVar5 >> 0x20);
      local_10 = *(undefined4 *)(puVar5 + 1);
      local_18 = (undefined4)*puVar5;
      _local_18 = CONCAT44(fStack_14 + 20.0,local_18);
      (**(code **)(*(long *)this_00 + 0x78))(this_00,(RtWeakPtr<Sexy::SoundResource> *)&local_18);
      iVar2 = PlantFramework::Rand((PlantFramework *)this);
      this_01 = *(UIEasyButtonWidget **)(this + 0x10);
      if (0.5 < (float)iVar2 * _FUN_0420c074) {
        pRVar3 = (RtObject *)UIEasyButtonWidget::GetImageNormal(this_01);
        pPVar4 = Sexy::RtObject::Cast<PlantAnimRig_Peanut>(pRVar3);
        FUN_0420ae04(pPVar4 + 0x3bc);
        goto LAB_0420be88;
      }
    }
    pRVar3 = (RtObject *)UIEasyButtonWidget::GetImageNormal(this_01);
    pPVar4 = Sexy::RtObject::Cast<PlantAnimRig_Peanut>(pRVar3);
    FUN_0420ae10(pPVar4 + 0x3bc);
  }
  else {
LAB_0420be84:
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)0x0;
  }
LAB_0420be88:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPeanut::updateShieldHealth(float) */

void __thiscall PlantPeanut::updateShieldHealth(PlantPeanut *this,float param_1)

{
  char cVar1;
  bool bVar2;
  float *pfVar3;
  RtObject *this_00;
  PlantAnimRig_Peanut *this_01;
  long lVar4;
  float fVar5;
  float fVar6;
  float local_14 [2];
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_14[0] = param_1;
  if (*(float *)(this + 0x4c) != param_1) {
    fVar6 = 1.0;
    local_c = 0.0;
    pfVar3 = eastl::max_alt<float>(&local_c,local_14);
    *(float *)(this + 0x4c) = *pfVar3;
    this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    this_01 = Sexy::RtObject::Cast<PlantAnimRig_Peanut>(this_00);
    cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    if (cVar1 != '\0') {
      fVar6 = 1.5;
    }
    lVar4 = FUN_0420c2c0(*(undefined8 *)(this + 0x10));
    fVar5 = *(float *)(this + 0x4c);
    fVar6 = fVar6 * *(float *)(lVar4 + 0x2d8);
    bVar2 = (bool)Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    PlantAnimRig_Peanut::ShowArmorHelmet
              (this_01,0.0 < fVar5,bVar2,(int)(((fVar6 - fVar5) / fVar6) * 3.0));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPeanut::ApplyPlantfood() */

void __thiscall PlantPeanut::ApplyPlantfood(PlantPeanut *this)

{
  int iVar1;
  char cVar2;
  UIEasyButtonWidget *this_00;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::Heal(*(Plant **)(this + 0x10));
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  iVar1 = *(int *)(this + 0x44);
  *(undefined4 *)(this_00 + 200) = 5;
  if (-1 < iVar1) {
    plVar3 = (long *)UIEasyButtonWidget::GetImageNormal(this_00);
    (**(code **)(*plVar3 + 0x88))();
    *(undefined4 *)(this + 0x44) = 0xffffffff;
    Plant::GetProps();
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    lVar4 = FUN_0420ae20(*(undefined8 *)(lVar4 + 0x70));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)(*(long *)(this + 0x10) + 0xbc),*(float *)(lVar4 + 0x24),
               *(float *)(lVar4 + 0x28));
  }
  fVar7 = 1.0;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  plVar3 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  (**(code **)(*plVar3 + 0x80))(0x41200000);
  FUN_0420adc8(aRStack_10,*(undefined8 *)(this + 0x10));
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  fVar6 = *(float *)(lVar4 + 0x38);
  lVar4 = FUN_0420c41c(*(undefined8 *)(this + 0x10));
  ZombossSkyCityLineShoot::Start
            ((ZombossSkyCityLineShoot *)(this + 0x28),fVar6,*(int *)(lVar4 + 0x2b8),1.0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar2 != '\0') {
    fVar7 = 1.5;
  }
  pcVar5 = *(code **)(*(long *)this + 0x528);
  lVar4 = FUN_0420c2c0(*(undefined8 *)(this + 0x10));
  (*pcVar5)(fVar7 * *(float *)(lVar4 + 0x2d8),this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPeanut::TakeDamage(DamageInfo const&) */

void PlantPeanut::TakeDamage(DamageInfo *param_1)

{
  DamageInfo *in_x1;
  DamageInfo *in_x8;
  float fVar1;
  DamageInfo aDStack_68 [8];
  float local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(float *)(param_1 + 0x4c) <= 0.0) {
    DamageInfo::DamageInfo(in_x8,in_x1);
  }
  else {
    DamageInfo::DamageInfo(aDStack_68,in_x1);
    local_60 = 0.0;
    fVar1 = *(float *)(param_1 + 0x4c) - *(float *)(in_x1 + 8);
    if (fVar1 < 0.0) {
      local_60 = -fVar1;
      fVar1 = 0.0;
    }
    (**(code **)(*(long *)param_1 + 0x528))(fVar1,param_1);
    if (*(float *)(param_1 + 0x4c) <= 0.0) {
      DamageInfo::DamageInfo(in_x8,aDStack_68);
    }
    else {
      local_60 = 0.0;
      DamageInfo::DamageInfo(in_x8,aDStack_68);
    }
    DamageInfo::~DamageInfo(aDStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

