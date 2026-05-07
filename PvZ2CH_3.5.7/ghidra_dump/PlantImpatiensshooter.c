// Class: PlantImpatiensshooter


/* PlantImpatiensshooter::firePlantFoodProjectile(float) */

void PlantImpatiensshooter::firePlantFoodProjectile(float param_1)

{
  long in_x0;
  
  *(undefined4 *)(in_x0 + 0x34) = 0;
  *(undefined1 *)(in_x0 + 0x2c) = 1;
  return;
}


/* PlantImpatiensshooter::PlantImpatiensshooter() */

void __thiscall PlantImpatiensshooter::PlantImpatiensshooter(PlantImpatiensshooter *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067bfd70;
  return;
}


/* PlantImpatiensshooter::StaticNew() */

PlantImpatiensshooter * PlantImpatiensshooter::StaticNew(void)

{
  PlantImpatiensshooter *this;
  
  this = ::operator_new(0x48);
  PlantImpatiensshooter(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantImpatiensshooter::StaticClassInit() */

void PlantImpatiensshooter::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantImpatiensshooter");
    (*pcVar2)(plVar1,asStack_10,FUN_04051248,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantImpatiensshooter::StaticGetClass() */

long * PlantImpatiensshooter::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantImpatiensshooter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantImpatiensshooter::GetClass() const */

long * PlantImpatiensshooter::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantImpatiensshooter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantImpatiensshooter::~PlantImpatiensshooter() */

void __thiscall PlantImpatiensshooter::~PlantImpatiensshooter(PlantImpatiensshooter *this)

{
  *(undefined ***)this = &PTR_GetClass_067bfd70;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantImpatiensshooter::~PlantImpatiensshooter() */

void __thiscall PlantImpatiensshooter::~PlantImpatiensshooter(PlantImpatiensshooter *this)

{
  ~PlantImpatiensshooter(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantImpatiensshooter::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantImpatiensshooter::Fire
          (PlantImpatiensshooter *this,RtWeakPtrBase *param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  char *__s;
  Plant *pPVar3;
  RealObject *this_00;
  float fVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = *(RealObject **)(this + 0x10);
  std::string::string(asStack_10,"Play_Plant_Impatiensshooter_Attack");
  RealObject::PlayPositionalSound(this_00,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  iVar1 = *(int *)(this + 0x3c);
  if (iVar1 == 1) {
    pPVar3 = *(Plant **)(this + 0x10);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,param_2);
    __s = "Impatiensshooter_1_ProjectileDefault";
  }
  else if (iVar1 == 2) {
    pPVar3 = *(Plant **)(this + 0x10);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,param_2);
    __s = "Impatiensshooter_2_ProjectileDefault";
  }
  else if (iVar1 == 3) {
    pPVar3 = *(Plant **)(this + 0x10);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,param_2);
    __s = "Impatiensshooter_3_ProjectileDefault";
  }
  else {
    if (iVar1 != 4) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,param_2);
      uVar2 = PlantFramework::Fire((PlantFramework *)this,asStack_10,param_3,param_4);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      goto LAB_04052118;
    }
    fVar4 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
    pPVar3 = *(Plant **)(this + 0x10);
    if (0.2 < fVar4) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,param_2);
      __s = "Impatiensshooter_4_ProjectileDefault";
    }
    else {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,param_2);
      __s = "Impatiensshooter_5_ProjectileDefault";
    }
  }
  std::string::string(asStack_10,__s);
  uVar2 = Plant::SpecialFire(pPVar3,aRStack_18,param_3,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
LAB_04052118:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantImpatiensshooter::UpdatePlantfood() */

void __thiscall PlantImpatiensshooter::UpdatePlantfood(PlantImpatiensshooter *this)

{
  char cVar1;
  int iVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var3;
  SexyTransform2D *pSVar4;
  SexyTransform2D *pSVar5;
  SexyVector3 *pSVar6;
  code *pcVar7;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  Vec3 aVStack_c8 [16];
  undefined4 local_b8;
  float local_b4;
  undefined4 local_b0;
  SexyTransform2D local_a8 [40];
  SexyTransform2D local_80 [40];
  SexyTransform2D local_58 [40];
  SexyTransform2D local_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 == '\0') {
    if ((this[0x2c] == (PlantImpatiensshooter)0x0) ||
       (iVar2 = *(int *)(this + 0x30), *(int *)(this + 0x30) = iVar2 + 1,
       9 < ((iVar2 + 1) * 10) % 0xf)) goto LAB_04052380;
    *(int *)(this + 0x34) = *(int *)(this + 0x34) + 1;
    iVar2 = rand();
    p_Var3 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)PlantRiflebamboo::FireProjectile((PlantRiflebamboo *)this,1);
    pcVar7 = *(code **)(*(long *)p_Var3 + 0x78);
    pSVar6 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(p_Var3);
    uVar8 = 0;
    fVar9 = (float)(-0xc - iVar2 % 0x18);
    EATextSquish::Vec3::Vec3(aVStack_c8,0.0,fVar9,0.0);
    local_b8 = Sexy::SexyVector3::operator+(pSVar6,(SexyVector3 *)aVStack_c8);
    local_b4 = fVar9;
    local_b0 = uVar8;
    (*pcVar7)(p_Var3,&local_b8);
    iVar2 = rand();
    p_Var3 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)PlantRiflebamboo::FireProjectile((PlantRiflebamboo *)this,1);
    pcVar7 = *(code **)(*(long *)p_Var3 + 0x78);
    pSVar6 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(p_Var3);
    uVar8 = 0;
    fVar9 = (float)(iVar2 % 0x18 + -0xc);
    EATextSquish::Vec3::Vec3(aVStack_c8,0.0,fVar9,0.0);
    local_b8 = Sexy::SexyVector3::operator+(pSVar6,(SexyVector3 *)aVStack_c8);
    local_b4 = fVar9;
    local_b0 = uVar8;
    (*pcVar7)(p_Var3,&local_b8);
  }
  else {
    if (this[0x2c] == (PlantImpatiensshooter)0x0) goto LAB_04052380;
    iVar2 = *(int *)(this + 0x30);
    *(int *)(this + 0x30) = iVar2 + 1;
    if (((iVar2 + 1) * 10) % 0xf < 10) {
      *(int *)(this + 0x34) = *(int *)(this + 0x34) + 1;
      iVar2 = rand();
      Sexy::SexyTransform2D::SexyTransform2D(local_a8);
      pSVar4 = (SexyTransform2D *)PlantRiflebamboo::FireProjectile((PlantRiflebamboo *)this,1);
      pSVar5 = (SexyTransform2D *)Sexy::SexyMath::DegToRad((float)((iVar2 / 0x2d) * 0x2d - iVar2));
      Sexy::SexyTransform2D::CreateRotation(pSVar5,extraout_s0);
      FUN_04050d84(extraout_s0,pSVar4 + 0xc4);
      Projectile::ApplyRotationToVelocity(pSVar4);
      pcVar7 = *(code **)(*(long *)pSVar4 + 0x78);
      pSVar6 = (SexyVector3 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)pSVar4);
      uVar8 = 0x41200000;
      uVar10 = 0;
      EATextSquish::Vec3::Vec3(aVStack_c8,0.0,10.0,0.0);
      local_b8 = Sexy::SexyVector3::operator+(pSVar6,(SexyVector3 *)aVStack_c8);
      local_b4 = (float)uVar8;
      local_b0 = uVar10;
      (*pcVar7)(pSVar4,&local_b8);
      iVar2 = rand();
      pSVar4 = (SexyTransform2D *)PlantRiflebamboo::FireProjectile((PlantRiflebamboo *)this,1);
      Sexy::SexyTransform2D::SexyTransform2D(local_80);
      pSVar5 = (SexyTransform2D *)Sexy::SexyMath::DegToRad((float)((iVar2 / 0x2d) * 0x2d - iVar2));
      Sexy::SexyTransform2D::CreateRotation(pSVar5,extraout_s0_00);
      FUN_04050d84(extraout_s0_00,pSVar4 + 0xc4);
      Projectile::ApplyRotationToVelocity(pSVar4);
      pcVar7 = *(code **)(*(long *)pSVar4 + 0x78);
      pSVar6 = (SexyVector3 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)pSVar4);
      uVar8 = 0x41200000;
      uVar10 = 0;
      EATextSquish::Vec3::Vec3(aVStack_c8,0.0,10.0,0.0);
      local_b8 = Sexy::SexyVector3::operator+(pSVar6,(SexyVector3 *)aVStack_c8);
      local_b4 = (float)uVar8;
      local_b0 = uVar10;
      (*pcVar7)(pSVar4,&local_b8);
      iVar2 = rand();
      pSVar4 = (SexyTransform2D *)PlantRiflebamboo::FireProjectile((PlantRiflebamboo *)this,1);
      Sexy::SexyTransform2D::SexyTransform2D(local_58);
      pSVar5 = (SexyTransform2D *)Sexy::SexyMath::DegToRad((float)(iVar2 % 0x2d));
      Sexy::SexyTransform2D::CreateRotation(pSVar5,extraout_s0_01);
      FUN_04050d84(extraout_s0_01,pSVar4 + 0xc4);
      Projectile::ApplyRotationToVelocity(pSVar4);
      pcVar7 = *(code **)(*(long *)pSVar4 + 0x78);
      pSVar6 = (SexyVector3 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)pSVar4);
      uVar8 = 0x41200000;
      uVar10 = 0;
      EATextSquish::Vec3::Vec3(aVStack_c8,0.0,10.0,0.0);
      local_b8 = Sexy::SexyVector3::operator+(pSVar6,(SexyVector3 *)aVStack_c8);
      local_b4 = (float)uVar8;
      local_b0 = uVar10;
      (*pcVar7)(pSVar4,&local_b8);
      iVar2 = rand();
      pSVar4 = (SexyTransform2D *)PlantRiflebamboo::FireProjectile((PlantRiflebamboo *)this,1);
      Sexy::SexyTransform2D::SexyTransform2D(local_30);
      pSVar5 = (SexyTransform2D *)Sexy::SexyMath::DegToRad((float)(iVar2 % 0x2d));
      Sexy::SexyTransform2D::CreateRotation(pSVar5,extraout_s0_02);
      FUN_04050d84(extraout_s0_02,pSVar4 + 0xc4);
      Projectile::ApplyRotationToVelocity(pSVar4);
      pcVar7 = *(code **)(*(long *)pSVar4 + 0x78);
      pSVar6 = (SexyVector3 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)pSVar4);
      fVar9 = 10.0;
      uVar8 = 0;
      EATextSquish::Vec3::Vec3(aVStack_c8,0.0,10.0,0.0);
      local_b8 = Sexy::SexyVector3::operator+(pSVar6,(SexyVector3 *)aVStack_c8);
      local_b4 = fVar9;
      local_b0 = uVar8;
      (*pcVar7)(pSVar4,&local_b8);
    }
  }
  if (0x13 < *(int *)(this + 0x34)) {
    this[0x2c] = (PlantImpatiensshooter)0x0;
  }
LAB_04052380:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantImpatiensshooter::CancelPlantfood() */

void __thiscall PlantImpatiensshooter::CancelPlantfood(PlantImpatiensshooter *this)

{
  char cVar1;
  long *plVar2;
  
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 == '\0') {
    plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    (**(code **)(*plVar2 + 0x88))();
  }
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantImpatiensshooter::SetPopAnimDelegates(PlantAnimRig*) */

void __thiscall
PlantImpatiensshooter::SetPopAnimDelegates(PlantImpatiensshooter *this,PlantAnimRig *param_1)

{
  PlantAnimRig *pPVar1;
  CBMemberTranslatorX aCStack_98 [24];
  CBMemberTranslatorX aCStack_80 [24];
  Delegate1<float> aDStack_68 [48];
  Delegate1<float> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::SetPopAnimDelegates((PlantFramework *)this,param_1);
  pPVar1 = (PlantAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
  ;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,firePlantFoodProjectile);
  Sexy::Delegate1<float>::Delegate1<PlantImpatiensshooter,void(PlantImpatiensshooter::*)(float)>
            (aDStack_68,aCStack_98);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (*(ReceivedDataCallback **)(this + 0x10),Plant::OnUseActionAnimCommand);
  Sexy::Delegate1<float>::Delegate1<Plant,void(Plant::*)(float)>(aDStack_38,aCStack_80);
  PlantAnimRig::SetPlantDelegates(pPVar1,aDStack_68,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantImpatiensshooter::Initialize() */

void __thiscall PlantImpatiensshooter::Initialize(PlantImpatiensshooter *this)

{
  int iVar1;
  long *plVar2;
  undefined4 uVar3;
  
  PlantFramework::Initialize((PlantFramework *)this);
  iVar1 = FUN_04050d98(*(undefined8 *)(this + 0x10));
  uVar3 = 3;
  if (4 < iVar1) {
    uVar3 = 4;
  }
  *(undefined4 *)(this + 0x28) = uVar3;
  uVar3 = PVZ_T();
  *(undefined4 *)(this + 0x3c) = 1;
  *(undefined4 *)(this + 0x40) = uVar3;
  plVar2 = (long *)FUN_04052d20(*(undefined8 *)(this + 0x10));
  (**(code **)(*plVar2 + 0x118))();
  this[0x2c] = (PlantImpatiensshooter)0x0;
  *(undefined4 *)(this + 0x34) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantImpatiensshooter::setState(unsigned int) */

void __thiscall PlantImpatiensshooter::setState(PlantImpatiensshooter *this,uint param_1)

{
  int iVar1;
  PlantAnimRig_HollyKnight *this_00;
  PlantAnimRig_Riflebamboo *pPVar2;
  long *plVar3;
  PlantAnimRig_Lemon *this_01;
  long lVar4;
  float fVar5;
  undefined4 uVar6;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  lVar4 = *(long *)(this + 0x10);
  *(uint *)(lVar4 + 200) = param_1;
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04050d98(lVar4);
  if (iVar1 < 3) {
    if (iVar1 == 2) {
      *(undefined4 *)(this + 0x38) = 0x41880000;
    }
    else {
      *(undefined4 *)(this + 0x38) = 0x41a00000;
    }
  }
  else {
    *(undefined4 *)(this + 0x38) = 0x41600000;
  }
  this_00 = (PlantAnimRig_HollyKnight *)FUN_04052d20(lVar4);
  iVar1 = FUN_04050d98(*(undefined8 *)(this + 0x10));
  PlantAnimRig_HollyKnight::SetNumDamageStates(this_00,iVar1);
  switch(*(undefined4 *)(*(long *)(this + 0x10) + 200)) {
  case 4:
    fVar5 = (float)PVZ_T();
    if ((fVar5 - *(float *)(this + 0x40) <= *(float *)(this + 0x38)) ||
       (*(int *)(this + 0x28) <= *(int *)(this + 0x3c))) {
      plVar3 = (long *)FUN_04052d20(*(undefined8 *)(this + 0x10));
      (**(code **)(*plVar3 + 0x118))();
    }
    else {
      uVar6 = PVZ_T();
      *(undefined4 *)(this + 0x40) = uVar6;
      setState(this,0xb);
    }
    break;
  case 10:
    if (*(int *)(this + 0x3c) < *(int *)(this + 0x28)) {
      *(int *)(this + 0x3c) = *(int *)(this + 0x3c) + 1;
      this_01 = (PlantAnimRig_Lemon *)FUN_04052d20();
      PlantAnimRig_Lemon::setIdleState(this_01,*(int *)(this + 0x3c));
    }
    uVar6 = PVZ_T();
    *(undefined4 *)(this + 0x40) = uVar6;
    break;
  case 0xb:
    if (*(int *)(this + 0x3c) < *(int *)(this + 0x28)) {
      *(int *)(this + 0x3c) = *(int *)(this + 0x3c) + 1;
    }
    pPVar2 = (PlantAnimRig_Riflebamboo *)FUN_04052d20();
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PlantAnimRig_Riflebamboo::PlayPuff(pPVar2,aRStack_50,*(undefined4 *)(this + 0x3c));
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    break;
  case 0xd:
    (**(code **)(*(long *)this + 0x1a0))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantImpatiensshooter::ApplyPlantfood() */

void __thiscall PlantImpatiensshooter::ApplyPlantfood(PlantImpatiensshooter *this)

{
  this[0x2c] = (PlantImpatiensshooter)0x0;
  setState(this,10);
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantImpatiensshooter::FindTargetAndFire(PlantWeapon) */

void PlantImpatiensshooter::FindTargetAndFire(PlantImpatiensshooter *param_1)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Plant::CanFindTarget(*(undefined8 *)(param_1 + 0x10));
  if (cVar1 == '\0') {
    plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_1 + 0x10));
    (**(code **)(*plVar2 + 0x88))();
    Plant::GetProps();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    lVar3 = FUN_04050db0(*(undefined8 *)(lVar3 + 0x70));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)(*(long *)(param_1 + 0x10) + 0xbc),*(float *)(lVar3 + 0x24),
               *(float *)(lVar3 + 0x28));
  }
  else {
    setState(param_1,0xd);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1 != '\0');
}


/* PlantImpatiensshooter::UpdateActions() */

void __thiscall PlantImpatiensshooter::UpdateActions(PlantImpatiensshooter *this)

{
  char cVar1;
  int iVar2;
  PopAnimRig *pPVar3;
  long *plVar4;
  long lVar5;
  float fVar6;
  undefined4 uVar7;
  
  lVar5 = *(long *)(this + 0x10);
  iVar2 = FUN_04050d98(lVar5);
  if (iVar2 < 3) {
    if (iVar2 == 2) {
      *(undefined4 *)(this + 0x38) = 0x41880000;
    }
    else {
      *(undefined4 *)(this + 0x38) = 0x41a00000;
    }
  }
  else {
    *(undefined4 *)(this + 0x38) = 0x41600000;
  }
  switch(*(undefined4 *)(lVar5 + 200)) {
  case 4:
    fVar6 = (float)PVZ_T();
    if (fVar6 - *(float *)(this + 0x40) <= *(float *)(this + 0x38)) {
      return;
    }
    if (*(int *)(this + 0x28) <= *(int *)(this + 0x3c)) {
      return;
    }
LAB_040532b8:
    uVar7 = PVZ_T();
    *(undefined4 *)(this + 0x40) = uVar7;
    setState(this,0xb);
    return;
  default:
    goto switchD_0405319c_caseD_5;
  case 10:
    fVar6 = (float)PVZ_T();
    if ((*(float *)(this + 0x38) < fVar6 - *(float *)(this + 0x40)) &&
       (*(int *)(this + 0x3c) < *(int *)(this + 0x28))) {
      uVar7 = PVZ_T();
      *(undefined4 *)(this + 0x40) = uVar7;
      setState(this,0xb);
    }
    pPVar3 = (PopAnimRig *)FUN_04052e10(*(undefined8 *)(this + 0x10));
    cVar1 = PopAnimRig::IsPlayingAnything(pPVar3);
    if (cVar1 != '\0') {
      return;
    }
    (**(code **)(*(long *)this + 0x228))(this);
    goto LAB_0405327c;
  case 0xb:
    pPVar3 = (PopAnimRig *)FUN_04052e10(lVar5);
    cVar1 = PopAnimRig::IsPlayingAnything(pPVar3);
    break;
  case 0xc:
    pPVar3 = (PopAnimRig *)FUN_04052e10(lVar5);
    cVar1 = PopAnimRig::IsPlayingAnything(pPVar3);
    if (cVar1 == '\0') {
      plVar4 = (long *)FUN_04052d20(*(undefined8 *)(this + 0x10));
      (**(code **)(*plVar4 + 0x118))();
    }
    setState(this,0xb);
    return;
  case 0xd:
    fVar6 = (float)PVZ_T();
    if ((*(float *)(this + 0x38) < fVar6 - *(float *)(this + 0x40)) &&
       (*(int *)(this + 0x3c) < *(int *)(this + 0x28))) goto LAB_040532b8;
    pPVar3 = (PopAnimRig *)FUN_04052e10(*(undefined8 *)(this + 0x10));
    cVar1 = PopAnimRig::IsPlayingAnything(pPVar3);
  }
  if (cVar1 == '\0') {
LAB_0405327c:
    setState(this,4);
    return;
  }
switchD_0405319c_caseD_5:
  return;
}

