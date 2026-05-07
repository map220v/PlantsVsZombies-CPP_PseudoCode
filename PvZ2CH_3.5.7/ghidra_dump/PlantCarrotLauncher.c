// Class: PlantCarrotLauncher


/* PlantCarrotLauncher::PlantCarrotLauncher() */

void __thiscall PlantCarrotLauncher::PlantCarrotLauncher(PlantCarrotLauncher *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067ccd40;
  return;
}


/* PlantCarrotLauncher::StaticNew() */

PlantCarrotLauncher * PlantCarrotLauncher::StaticNew(void)

{
  PlantCarrotLauncher *this;
  
  this = ::operator_new(0x30);
  PlantCarrotLauncher(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCarrotLauncher::StaticClassInit() */

void PlantCarrotLauncher::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantCarrotLauncher");
    (*pcVar2)(plVar1,asStack_10,FUN_0408c450,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantCarrotLauncher::StaticGetClass() */

long * PlantCarrotLauncher::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantCarrotLauncher",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantCarrotLauncher::GetClass() const */

long * PlantCarrotLauncher::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantCarrotLauncher",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantCarrotLauncher::CheckRocketState() */

undefined4 __thiscall PlantCarrotLauncher::CheckRocketState(PlantCarrotLauncher *this)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0408bf64(*(undefined8 *)(this + 0x10));
  if (iVar1 == 1) {
    uVar2 = 0;
    if (*(int *)(this + 0x28) - 1U < 4) {
      return *(undefined4 *)(&DAT_05753010 + (ulong)(*(int *)(this + 0x28) - 1U) * 4);
    }
  }
  else if (iVar1 == 2) {
    if (*(int *)(this + 0x28) != 2) {
      uVar2 = 5;
      if (*(int *)(this + 0x28) != 4) {
        uVar2 = 0;
      }
      return uVar2;
    }
    uVar2 = 6;
  }
  else {
    uVar2 = 0;
    if (2 < iVar1) {
      uVar2 = 7;
    }
  }
  return uVar2;
}


/* PlantCarrotLauncher::isReadyToFire() */

bool __thiscall PlantCarrotLauncher::isReadyToFire(PlantCarrotLauncher *this)

{
  int iVar1;
  
  iVar1 = *(int *)(*(long *)(this + 0x10) + 200);
  if (iVar1 == 1) {
    return true;
  }
  if (iVar1 != 10) {
    return false;
  }
  iVar1 = FUN_0408bf64(*(long *)(this + 0x10));
  return iVar1 < 3;
}


/* PlantCarrotLauncher::FindTargetAndFire(PlantWeapon) */

void __thiscall PlantCarrotLauncher::FindTargetAndFire(PlantCarrotLauncher *this,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = isReadyToFire(this);
  if (cVar1 == '\0') {
    return;
  }
  PlantFramework::FindTargetAndFire(this,param_2);
  return;
}


/* PlantCarrotLauncher::GetRandomHitWidth() */

void __thiscall PlantCarrotLauncher::GetRandomHitWidth(PlantCarrotLauncher *this)

{
  int iVar1;
  
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  PlantFramework::Rand((PlantFramework *)this,iVar1 << 1);
  return;
}


/* PlantCarrotLauncher::GetRocketCooldown() */

float __thiscall PlantCarrotLauncher::GetRocketCooldown(PlantCarrotLauncher *this)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  
  lVar2 = *(long *)(this + 0x10);
  iVar1 = FUN_0408bf64(lVar2);
  uVar3 = *(undefined4 *)(lVar2 + 0x420);
  if (iVar1 == 2) {
    fVar4 = (float)FUN_0408bf58(uVar3);
    return (fVar4 + -0.25) * 20.0;
  }
  if (iVar1 < 3) {
    fVar4 = (float)FUN_0408bf58(uVar3);
    return fVar4 * 20.0;
  }
  fVar4 = (float)FUN_0408bf58(uVar3);
  return (fVar4 + -0.4) * 20.0;
}


/* PlantCarrotLauncher::onAnimStoppedCallback(std::string const&) */

bool __thiscall
PlantCarrotLauncher::onAnimStoppedCallback(PlantCarrotLauncher *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"charge");
  return bVar1;
}


/* PlantCarrotLauncher::~PlantCarrotLauncher() */

void __thiscall PlantCarrotLauncher::~PlantCarrotLauncher(PlantCarrotLauncher *this)

{
  *(undefined ***)this = &PTR_GetClass_067ccd40;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantCarrotLauncher::~PlantCarrotLauncher() */

void __thiscall PlantCarrotLauncher::~PlantCarrotLauncher(PlantCarrotLauncher *this)

{
  ~PlantCarrotLauncher(this);
  AK::FreeHook(this);
  return;
}


/* PlantCarrotLauncher::ApplyPlantfood() */

void __thiscall PlantCarrotLauncher::ApplyPlantfood(PlantCarrotLauncher *this)

{
  char cVar1;
  long lVar2;
  
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 != '\0') {
    lVar2 = FUN_0408d04c(*(undefined8 *)(this + 0x10));
    FUN_0408c020(lVar2 + 0x3c4);
  }
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  this[0x2c] = (PlantCarrotLauncher)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCarrotLauncher::setState(int) */

void __thiscall PlantCarrotLauncher::setState(PlantCarrotLauncher *this,int param_1)

{
  UIEasyButtonWidget *this_00;
  PlantAnimRig_CarrotLauncher *pPVar1;
  PlantAnimRig *pPVar2;
  long *plVar3;
  PopAnimRig *this_01;
  PlantAnimRig_Mandrake *this_02;
  Color aCStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  if (*(int *)(this_00 + 200) != param_1) {
    *(int *)(this_00 + 200) = param_1;
    if (param_1 == 0xb) {
      this_02 = (PlantAnimRig_Mandrake *)FUN_0408d04c();
      PlantAnimRig_Mandrake::PlayRecoverLooped(this_02);
    }
    else if (param_1 == 0xc) {
      pPVar1 = (PlantAnimRig_CarrotLauncher *)FUN_0408d04c();
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
      PlantAnimRig_CarrotLauncher::PlayRecoverEnd(pPVar1,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
      pPVar2 = (PlantAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      PlantAnimRig::SetState(pPVar2,0xe);
    }
    else if (param_1 == 1) {
      plVar3 = (long *)UIEasyButtonWidget::GetImageNormal(this_00);
      (**(code **)(*plVar3 + 0x118))();
      this_01 = (PopAnimRig *)
                UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      Sexy::Color::Color(aCStack_60,1);
      PopAnimRig::SetPAMColor(this_01,aCStack_60);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCarrotLauncher::Initialize() */

void __thiscall PlantCarrotLauncher::Initialize(PlantCarrotLauncher *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  float *pfVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float local_1c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  lVar5 = *(long *)(this + 0x10);
  local_1c = 1.0;
  iVar1 = FUN_0408bf64(lVar5);
  if (*(code **)(*(long *)this + 0x410) == PlantFramework::GetMiniLevel) {
    iVar2 = PlantFramework::GetMiniLevel((PlantFramework *)this);
  }
  else {
    iVar2 = (**(code **)(*(long *)this + 0x410))();
    lVar5 = *(long *)(this + 0x10);
  }
  if (iVar1 - iVar2 == 1) {
    lVar3 = FUN_0408cf6c(lVar5);
    lVar5 = *(long *)(this + 0x10);
    fVar6 = 1.0 - *(float *)(lVar3 + 0x2b8);
  }
  else if (iVar1 - iVar2 < 2) {
    fVar6 = 1.0;
  }
  else {
    lVar3 = FUN_0408cf6c(lVar5);
    lVar5 = *(long *)(this + 0x10);
    fVar6 = 1.0 - *(float *)(lVar3 + 700);
  }
  local_1c = (float)FUN_0408bf54(*(undefined4 *)(lVar5 + 0x3cc));
  local_1c = local_1c * fVar6;
  local_10[0] = 0x3c23d70a;
  pfVar4 = eastl::max_alt<float>((float *)local_10,&local_1c);
  fVar7 = *pfVar4;
  Plant::GetProps();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  lVar3 = FUN_0408c01c(*(undefined8 *)(lVar3 + 0x70));
  fVar6 = *(float *)(lVar3 + 0x20);
  Plant::GetProps();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
  lVar3 = FUN_0408c01c(*(undefined8 *)(lVar3 + 0x70));
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)(lVar5 + 0xb4),fVar7 * fVar6,fVar7 * *(float *)(lVar3 + 0x28));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  lVar3 = *(long *)(this + 0x10);
  Plant::GetProps();
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  lVar5 = FUN_0408c01c(*(undefined8 *)(lVar5 + 0x70));
  fVar6 = *(float *)(lVar5 + 0x24);
  Plant::GetProps();
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
  lVar5 = FUN_0408c01c(*(undefined8 *)(lVar5 + 0x70));
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)(lVar3 + 0xbc),fVar7 * fVar6,fVar7 * *(float *)(lVar5 + 0x28));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  this[0x2c] = (PlantCarrotLauncher)0x0;
  *(undefined4 *)(this + 0x28) = 4;
  setState(this,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCarrotLauncher::PlayAttackAnimation() */

void __thiscall PlantCarrotLauncher::PlayAttackAnimation(PlantCarrotLauncher *this)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = CheckRocketState(this);
  lVar2 = FUN_0408d04c(*(undefined8 *)(this + 0x10));
  FUN_0408bf6c(lVar2 + 0x3b8,uVar1);
  plVar3 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  pcVar4 = *(code **)(*plVar3 + 0x130);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
  (*pcVar4)(plVar3,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  setState(this,10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantCarrotLauncher::LaunchProjectileAt(Projectile*, Sexy::SexyVector3 const&, float, float) */

void __thiscall
PlantCarrotLauncher::LaunchProjectileAt
          (PlantCarrotLauncher *this,Projectile *param_1,SexyVector3 *param_2,float param_3,
          float param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = FUN_0408d4e0(*(undefined8 *)(this + 0x10));
  fVar5 = *(float *)(lVar1 + 0x2c4);
  lVar1 = FUN_0408d4e0(*(undefined8 *)(this + 0x10));
  fVar2 = (float)PlantFramework::Rand((PlantFramework *)this,param_3 * *(float *)(lVar1 + 0x2c4));
  lVar1 = FUN_0408d4e0(*(undefined8 *)(this + 0x10));
  fVar4 = *(float *)(lVar1 + 0x2c0);
  lVar1 = FUN_0408d4e0(*(undefined8 *)(this + 0x10));
  fVar3 = (float)PlantFramework::Rand((PlantFramework *)this,param_4 * *(float *)(lVar1 + 0x2c0));
  Projectile::LaunchAt(param_1,param_2,fVar2 + fVar5,fVar3 + fVar4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCarrotLauncher::normalFire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantCarrotLauncher::normalFire
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,
               PlantCarrotLauncher *param_4,RtWeakPtrBase *param_5,undefined4 param_6,
               undefined4 param_7)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  Projectile *pPVar4;
  Projectile *pPVar5;
  Projectile *pPVar6;
  Projectile *pPVar7;
  long *plVar8;
  long lVar9;
  float *pfVar10;
  code *pcVar11;
  RealObject *this;
  Plant *pPVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  RtMixedPtrBase aRStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  int local_30;
  int local_2c;
  float local_28;
  float fStack_24;
  undefined4 local_20;
  float local_18;
  float fStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)param_4 + 0x180))();
  if (cVar1 == '\0') {
    pPVar12 = *(Plant **)(param_4 + 0x10);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,param_5);
    pPVar4 = (Projectile *)
             Plant::Fire(pPVar12,(RtWeakPtr<Sexy::SoundResource> *)&local_18,param_6,param_7);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    if (*(int *)(param_4 + 0x28) == 4) {
      lVar9 = *(long *)(param_4 + 0x10);
      fVar14 = (float)PVZ_T();
      fVar15 = (float)GetRocketCooldown(param_4);
      *(float *)(lVar9 + 0x128) = fVar15 + fVar14;
    }
    pPVar12 = *(Plant **)(param_4 + 0x10);
    iVar3 = FUN_0408bf64(pPVar12);
    if (iVar3 == 1) {
      pPVar7 = (Projectile *)0x0;
      pPVar6 = (Projectile *)0x0;
      *(int *)(param_4 + 0x28) = *(int *)(param_4 + 0x28) + -1;
      pPVar5 = (Projectile *)0x0;
    }
    else if (iVar3 == 2) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_18,param_5);
      pPVar7 = (Projectile *)0x0;
      pPVar6 = (Projectile *)0x0;
      pPVar5 = (Projectile *)
               Plant::Fire(pPVar12,(RtWeakPtr<Sexy::SoundResource> *)&local_18,param_6,param_7);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      *(int *)(param_4 + 0x28) = *(int *)(param_4 + 0x28) + -2;
    }
    else {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_18,param_5);
      pPVar5 = (Projectile *)
               Plant::Fire(pPVar12,(RtWeakPtr<Sexy::SoundResource> *)&local_18,param_6,param_7);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      pPVar12 = *(Plant **)(param_4 + 0x10);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_18,param_5);
      pPVar6 = (Projectile *)
               Plant::Fire(pPVar12,(RtWeakPtr<Sexy::SoundResource> *)&local_18,param_6,param_7);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      pPVar12 = *(Plant **)(param_4 + 0x10);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_18,param_5);
      pPVar7 = (Projectile *)
               Plant::Fire(pPVar12,(RtWeakPtr<Sexy::SoundResource> *)&local_18,param_6,param_7);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      *(undefined4 *)(param_4 + 0x28) = 0;
    }
    PlantFramework::FindTargetZombie(aRStack_40,param_4,0);
    (**(code **)(*(long *)param_4 + 0xf8))(aRStack_38,param_4,param_7);
    DVec3::DVec3((DVec3 *)&local_28);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_40);
    if (cVar1 == '\0') {
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
      if (bVar2) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
        GridItem::GetGridLocation();
        BoardTransforms::GridToBoardSpace((Point *)&local_18);
        local_28 = (float)local_30;
        local_20 = 0x41c80000;
        fStack_24 = (float)local_2c;
      }
      else {
        pfVar10 = (float *)std::
                           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                           **)(param_4 + 0x10));
        fStack_24 = pfVar10[1];
        local_28 = *pfVar10 + 600.0;
        local_20 = 0;
      }
    }
    else {
      plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
      pcVar11 = *(code **)(*plVar8 + 0x3b0);
      lVar9 = FUN_0408d4e0(*(undefined8 *)(param_4 + 0x10));
      uVar13 = (*pcVar11)(*(undefined4 *)(lVar9 + 0x2c0),plVar8);
      _local_18 = CONCAT44(param_2,uVar13);
      local_10 = param_3;
      Sexy::SexyVector3::operator=((SexyVector3 *)&local_28,(SexyVector3 *)&local_18);
    }
    LaunchProjectileAt(param_4,pPVar4,(SexyVector3 *)&local_28,0.1,0.1);
    if (pPVar5 != (Projectile *)0x0) {
      local_18 = local_28;
      fStack_14 = fStack_24;
      local_10 = local_20;
      iVar3 = GetRandomHitWidth(param_4);
      _local_18 = CONCAT44(fStack_14,(float)iVar3 + local_18);
      LaunchProjectileAt(param_4,pPVar5,(SexyVector3 *)&local_18,0.1,0.1);
    }
    if (pPVar6 != (Projectile *)0x0) {
      local_18 = local_28;
      fStack_14 = fStack_24;
      local_10 = local_20;
      iVar3 = GetRandomHitWidth(param_4);
      _local_18 = CONCAT44(fStack_14,(float)iVar3 + local_18);
      LaunchProjectileAt(param_4,pPVar6,(SexyVector3 *)&local_18,0.1,0.1);
    }
    if (pPVar7 != (Projectile *)0x0) {
      local_18 = local_28;
      fStack_14 = fStack_24;
      local_10 = local_20;
      iVar3 = GetRandomHitWidth(param_4);
      _local_18 = CONCAT44(fStack_14,(float)iVar3 + local_18);
      LaunchProjectileAt(param_4,pPVar7,(SexyVector3 *)&local_18,0.1,0.1);
    }
    this = *(RealObject **)(param_4 + 0x10);
    std::string::string((string *)&local_18,"Play_CabbagePult_Throw");
    RealObject::PlayPositionalSound(this,(string *)&local_18,0.0);
    std::string::~string((string *)&local_18);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  }
  else {
    pPVar4 = (Projectile *)0x0;
    if (*(code **)(*(long *)param_4 + 0xa8) != PlantFramework::DoSpecial) {
      (**(code **)(*(long *)param_4 + 0xa8))(param_4,0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pPVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCarrotLauncher::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantCarrotLauncher::Fire
          (PlantCarrotLauncher *this,RtWeakPtrBase *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  uVar1 = normalFire(this,aRStack_10,param_3,param_4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x0408fa14 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* PlantCarrotLauncher::UpdateActions() */

void __thiscall PlantCarrotLauncher::UpdateActions(PlantCarrotLauncher *this)

{
  undefined1 auVar1 [16];
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  UIEasyButtonWidget *this_00;
  PopAnimRig *pPVar6;
  SharkMinion *this_01;
  BoardEntity *this_02;
  CarrotMissileSubsystem *this_03;
  long lVar7;
  Plant *pPVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 extraout_var [12];
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x28) < 4) {
    fVar9 = (float)PVZ_T();
    this_00 = *(UIEasyButtonWidget **)(this + 0x10);
    if (fVar9 <= *(float *)(this_00 + 0x128)) goto LAB_0408f7bc;
    if (*(int *)(this_00 + 200) == 0xb) {
      pPVar6 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_00);
      Sexy::Color::Color((Color *)&local_18,1);
      PopAnimRig::SetPAMColor(pPVar6,(Color *)&local_18);
    }
    setState(this,0xc);
  }
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
LAB_0408f7bc:
  iVar5 = *(int *)(this_00 + 200);
  if (iVar5 == 0xb) {
    fVar11 = *(float *)(this_00 + 0x128);
    fVar9 = (float)PVZ_T();
    fVar10 = (float)GetRocketCooldown(this);
    fVar9 = 1.0 - (fVar11 - fVar9) / fVar10;
    fVar9 = fVar9 * fVar9;
    fVar9 = fVar9 * fVar9 * 125.66371 + 3.1415927;
    cosf(fVar9);
    local_18 = 0x3f800000;
    local_1c = 0x3ecccccd;
    auVar1._4_12_ = extraout_var;
    auVar1._0_4_ = fVar9;
    fVar9 = CurveEvaluate<float>(auVar1,0x3f000000,&local_1c,(Color *)&local_18,1);
    Sexy::Color::Color((Color *)&local_18);
    local_18 = (int)(fVar9 * 255.0);
    local_14 = local_18;
    local_10 = local_18;
    pPVar6 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    PopAnimRig::SetPAMColor(pPVar6,(Color *)&local_18);
  }
  else if (iVar5 == 0xc) {
    pPVar6 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_00);
    cVar2 = PopAnimRig::IsPlayingAnything(pPVar6);
    if (cVar2 == '\0') {
      *(undefined4 *)(this + 0x28) = 4;
      lVar7 = FUN_0408d04c(*(undefined8 *)(this + 0x10));
      FUN_0408bf6c(lVar7 + 0x3b8,0);
      setState(this,1);
    }
  }
  else if (iVar5 == 10) {
    pPVar6 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_00);
    cVar2 = PopAnimRig::IsPlayingAnything(pPVar6);
    if (cVar2 == '\0') {
      if (*(int *)(this + 0x28) == 0) {
        setState(this,0xb);
      }
      else {
        setState(this,1);
      }
    }
  }
  if ((this[0x2c] != (PlantCarrotLauncher)0x0) &&
     (cVar2 = (**(code **)(*(long *)this + 0x180))(this), cVar2 == '\0')) {
    this[0x2c] = (PlantCarrotLauncher)0x0;
    PlantFramework::FindTargetZombie((RtMixedPtrBase *)&local_18,this);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_18);
    if (cVar2 == '\0') {
      iVar5 = 8;
      iVar4 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
    }
    else {
      this_01 = (SharkMinion *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18)
      ;
      iVar4 = SharkMinion::getRow(this_01);
      this_02 = (BoardEntity *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18)
      ;
      iVar5 = BoardEntity::CalcColumnPosition(this_02);
      iVar5 = iVar5 + -1;
      if (8 < iVar5) {
        iVar5 = 8;
      }
      if (iVar5 < 0) {
        iVar5 = 0;
      }
    }
    pPVar8 = *(Plant **)(this + 0x10);
    fVar9 = (float)FUN_0408bf40(*(undefined4 *)(pPVar8 + 0xf4),*(undefined4 *)(pPVar8 + 0x100),
                                *(undefined4 *)(pPVar8 + 0x104),*(undefined4 *)(pPVar8 + 0x3b8));
    fVar10 = (float)FUN_0408bf50(*(undefined4 *)(pPVar8 + 0x3bc));
    fVar11 = (float)Plant::GetExtraDPSmodifier(pPVar8);
    pPVar8 = *(Plant **)(this + 0x10);
    fVar12 = (float)FUN_0408bf5c(*(undefined4 *)(pPVar8 + 0x424));
    bVar3 = (bool)Plant::GetAvatarEnable(pPVar8);
    this_03 = Board::GetGameSubSystem<CarrotMissileSubsystem>(*(Board **)(gLawnApp + 0x9f0));
    CarrotMissileSubsystem::ActivateCarrotMissile
              (this_03,true,0.5,iVar4,iVar5,fVar10 * fVar9 * fVar11 * fVar12,bVar3);
    lVar7 = FUN_0408d04c(*(undefined8 *)(this + 0x10));
    FUN_0408c02c(lVar7 + 0x3c0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

