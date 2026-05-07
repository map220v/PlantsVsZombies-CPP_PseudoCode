// Class: PlantPeashooter


/* PlantPeashooter::PlantPeashooter() */

void __thiscall PlantPeashooter::PlantPeashooter(PlantPeashooter *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067c1650;
  ZombossSkyCityLineShoot::ZombossSkyCityLineShoot((ZombossSkyCityLineShoot *)(this + 0x28));
  return;
}


/* PlantPeashooter::StaticNew() */

PlantPeashooter * PlantPeashooter::StaticNew(void)

{
  PlantPeashooter *this;
  
  this = ::operator_new(0x50);
  PlantPeashooter(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPeashooter::StaticClassInit() */

void PlantPeashooter::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PeashooterPlantfood");
    (*pcVar3)(plVar2,asStack_10,FUN_04056524,0x1c,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlantPeashooter");
    (*pcVar3)(plVar2,asStack_10,FUN_04057960,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPeashooter::StaticGetClass() */

long * PlantPeashooter::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantPeashooter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPeashooter::GetClass() const */

long * PlantPeashooter::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantPeashooter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPeashooter::~PlantPeashooter() */

void __thiscall PlantPeashooter::~PlantPeashooter(PlantPeashooter *this)

{
  *(undefined ***)this = &PTR_GetClass_067c1650;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantPeashooter::~PlantPeashooter() */

void __thiscall PlantPeashooter::~PlantPeashooter(PlantPeashooter *this)

{
  ~PlantPeashooter(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPeashooter::UpdatePlantfood() */

void __thiscall PlantPeashooter::UpdatePlantfood(PlantPeashooter *this)

{
  char cVar1;
  float *pfVar2;
  long lVar3;
  undefined8 uVar4;
  PlantAction *pPVar5;
  undefined8 uVar6;
  Plant *pPVar7;
  SexyVector3 *local_38;
  float local_30;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  Vec3 aVStack_18 [16];
  long local_8;
  
  pPVar7 = *(Plant **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_040564f8(pPVar7);
  if (cVar1 == '\0') {
    cVar1 = Plant::GetAvatarEnable(pPVar7);
    if (cVar1 != '\0') goto LAB_04056d98;
    pfVar2 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      **)(this + 0x10));
    EATextSquish::Vec3::Vec3(aVStack_18,*pfVar2,pfVar2[1],pfVar2[2]);
    pPVar7 = *(Plant **)(this + 0x10);
    local_30 = *(float *)(pPVar7 + 0xc4);
    Plant::GetProps();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    uVar4 = *(undefined8 *)(lVar3 + 0x70);
    uVar6 = 0;
  }
  else {
    pfVar2 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)pPVar7);
    EATextSquish::Vec3::Vec3(aVStack_18,*pfVar2,pfVar2[1],pfVar2[2]);
    pPVar7 = *(Plant **)(this + 0x10);
    local_30 = *(float *)(pPVar7 + 0xc4);
    Plant::GetProps();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    uVar4 = *(undefined8 *)(lVar3 + 0x70);
    uVar6 = 2;
  }
  local_38 = (SexyVector3 *)aVStack_18;
  pPVar5 = (PlantAction *)FUN_040567c8(uVar4,uVar6);
  PeashooterPlantfood::Update((PeashooterPlantfood *)(this + 0x28),pPVar7,local_38,local_30,pPVar5);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
LAB_04056d98:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPeashooter::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantPeashooter::Fire
          (PlantPeashooter *this,RtWeakPtrBase *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var2;
  undefined8 *puVar3;
  float *pfVar4;
  undefined8 uVar5;
  long lVar6;
  Plant *this_00;
  RealObject *this_01;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (0 < *(int *)(this + 0x44)) {
LAB_04056fa4:
    lVar6 = 0;
    goto LAB_04056f50;
  }
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if (cVar1 == '\0') {
    lVar6 = *(long *)(this + 0x10);
    cVar1 = FUN_040564f8(lVar6);
    if (cVar1 != '\0') {
      *(undefined4 *)(lVar6 + 0x150) = 2;
    }
    fVar7 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
    if (fVar7 < *(float *)(this + 0x48)) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_18,param_2);
      p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)PlantFramework::Fire
                            ((PlantFramework *)this,(RtWeakPtr<Sexy::SoundResource> *)&local_18,
                             param_3,param_4);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      puVar3 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(p_Var2);
      local_18 = (float)*puVar3;
      local_10 = *(undefined4 *)(puVar3 + 1);
      _local_18 = CONCAT44((int)((ulong)*puVar3 >> 0x20),local_18 - 40.0);
      (**(code **)(*(long *)p_Var2 + 0x78))(p_Var2,(RtWeakPtr<Sexy::SoundResource> *)&local_18);
    }
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,param_2);
    lVar6 = PlantFramework::Fire
                      ((PlantFramework *)this,(RtWeakPtr<Sexy::SoundResource> *)&local_18,param_3,
                       param_4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    goto LAB_04056f50;
  }
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  this_00 = *(Plant **)(this + 0x10);
  if (cVar1 == '\0') {
    cVar1 = FUN_040564f8(this_00);
    if (cVar1 == '\0') goto LAB_04056fa4;
LAB_04056fac:
    cVar1 = Plant::GetAvatarEnable(this_00);
    if (cVar1 == '\0') {
      uVar5 = 2;
    }
    else {
      uVar5 = 3;
    }
  }
  else {
    cVar1 = FUN_040564f8(this_00);
    if (cVar1 != '\0') goto LAB_04056fac;
    uVar5 = 1;
  }
  Plant::GetProps();
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  lVar6 = FUN_040567c8(*(undefined8 *)(lVar6 + 0x70),uVar5);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  p_Var2 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             **)(this + 0x10);
  pfVar4 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(p_Var2);
  fVar10 = *(float *)(p_Var2 + 0xc4);
  fVar12 = *pfVar4;
  fVar11 = pfVar4[2];
  fVar8 = *(float *)(lVar6 + 0x6c);
  fVar7 = *(float *)(lVar6 + 0x68);
  fVar9 = pfVar4[1];
  uVar5 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)(lVar6 + 8));
  lVar6 = Board::AddProjectile
                    ((Board *)(fVar12 + fVar7 * fVar10),fVar9,fVar11 - fVar10 * fVar8,uVar5,
                     (RtWeakPtr<Sexy::ResourceInfo> *)&local_18,*(undefined8 *)(this + 0x10),0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  uVar5 = FUN_040564b8(*(undefined8 *)(lVar6 + 0xe0));
  uVar5 = operator|(uVar5,0x2000);
  FUN_040564bc((undefined8 *)(lVar6 + 0xe0),uVar5);
  this_01 = *(RealObject **)(this + 0x10);
  std::string::string((string *)&local_18,"Play_Repeater_Cannon_Fire");
  RealObject::PlayPositionalSound(this_01,(string *)&local_18,0.0);
  std::string::~string((string *)&local_18);
  nop();
LAB_04056f50:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar6);
}


/* PlantPeashooter::CancelPlantfood() */

void __thiscall PlantPeashooter::CancelPlantfood(PlantPeashooter *this)

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
/* PlantPeashooter::DoLevelSpecial(int, PlantWeapon) */

void PlantPeashooter::DoLevelSpecial(PlantFramework *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  float *pfVar5;
  undefined8 uVar6;
  code *pcVar7;
  UIEasyButtonWidget *this;
  undefined8 uVar8;
  Board *pBVar13;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 != 2) goto LAB_040571f4;
  this = *(UIEasyButtonWidget **)(param_1 + 0x10);
  iVar2 = FUN_040564f0(this);
  if (iVar2 == 2) {
    if (*(int *)(param_1 + 0x44) < 0) {
      fVar12 = (float)PlantFramework::Rand(param_1,1.0);
      cVar1 = Plant::IsSkillCheat(*(Plant **)(param_1 + 0x10));
      if (((cVar1 == '\0') ||
          (cVar1 = Plant::IsSkillActivate(*(Plant **)(param_1 + 0x10)), cVar1 == '\0')) &&
         ((cVar1 = Plant::IsSkillCheat(*(Plant **)(param_1 + 0x10)), cVar1 != '\0' ||
          (0.1 <= fVar12)))) goto LAB_040571f4;
LAB_04057554:
      *(undefined4 *)(param_1 + 0x44) = 4;
      Plant::GetProps();
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      lVar4 = FUN_040567c8(*(undefined8 *)(lVar4 + 0x70),0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      Sexy::FastCurve::SetOutRange
                ((FastCurve *)(*(long *)(param_1 + 0x10) + 0xbc),*(float *)(lVar4 + 0x24) * 0.1,
                 *(float *)(lVar4 + 0x28) * 0.1);
      Plant::ResetLaunchTimer(*(Plant **)(param_1 + 0x10),false);
      pcVar7 = *(code **)(*(long *)param_1 + 0x300);
      *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x150) = 0;
      (*pcVar7)(aRStack_10,param_1);
      cVar1 = FUN_0547419c(aRStack_10);
      if (cVar1 == '\0') {
        RealObject::PlayPositionalSound(*(RealObject **)(param_1 + 0x10),(string *)aRStack_10,0.0);
      }
      std::string::~string((string *)aRStack_10);
      goto LAB_040571f4;
    }
    if (*(int *)(param_1 + 0x44) == 0) {
LAB_04057440:
      plVar3 = (long *)UIEasyButtonWidget::GetImageNormal(this);
      (**(code **)(*plVar3 + 0x88))();
      *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
      Plant::GetProps();
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      lVar4 = FUN_040567c8(*(undefined8 *)(lVar4 + 0x70),0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      Sexy::FastCurve::SetOutRange
                ((FastCurve *)(*(long *)(param_1 + 0x10) + 0xbc),*(float *)(lVar4 + 0x24),
                 *(float *)(lVar4 + 0x28));
      goto LAB_040571f4;
    }
    plVar3 = (long *)UIEasyButtonWidget::GetImageNormal(this);
    (**(code **)(*plVar3 + 0x80))(0x41200000);
    Plant::GetProps();
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    lVar4 = FUN_040567c8(*(undefined8 *)(lVar4 + 0x70),0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)(lVar4 + 8));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_18);
    if (cVar1 != '\0') {
      pfVar5 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        **)(param_1 + 0x10));
      fVar12 = *pfVar5;
      Plant::GetProps();
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      lVar4 = FUN_040567c8(*(undefined8 *)(lVar4 + 0x70),0);
      pBVar13._0_4_ =
           (Board *)(fVar12 + *(float *)(lVar4 + 0x68) *
                              *(float *)(*(long *)(param_1 + 0x10) + 0xc4));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      lVar4 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              **)(param_1 + 0x10));
      uVar9 = *(undefined4 *)(lVar4 + 4);
      fVar12 = *(float *)(lVar4 + 8);
      Plant::GetProps();
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      uVar6 = *(undefined8 *)(lVar4 + 0x70);
      uVar8 = 0;
LAB_040573d8:
      lVar4 = FUN_040567c8(uVar6,uVar8);
      fVar10 = *(float *)(lVar4 + 0x6c);
      fVar11 = *(float *)(*(long *)(param_1 + 0x10) + 0xc4);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      uVar8 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_18);
      Board::AddProjectile
                (pBVar13._0_4_,uVar9,fVar12 - fVar10 * fVar11,uVar8,aRStack_10,
                 *(undefined8 *)(param_1 + 0x10),0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    }
  }
  else {
    if (iVar2 < 3) goto LAB_040571f4;
    if (*(int *)(param_1 + 0x44) < 0) {
      fVar12 = (float)PlantFramework::Rand(param_1,1.0);
      cVar1 = Plant::IsSkillCheat(*(Plant **)(param_1 + 0x10));
      if (((cVar1 == '\0') ||
          (cVar1 = Plant::IsSkillActivate(*(Plant **)(param_1 + 0x10)), cVar1 == '\0')) &&
         ((cVar1 = Plant::IsSkillCheat(*(Plant **)(param_1 + 0x10)), cVar1 != '\0' ||
          (0.2 <= fVar12)))) goto LAB_040571f4;
      goto LAB_04057554;
    }
    if (*(int *)(param_1 + 0x44) == 0) goto LAB_04057440;
    plVar3 = (long *)UIEasyButtonWidget::GetImageNormal(this);
    (**(code **)(*plVar3 + 0x80))(0x41200000);
    cVar1 = FUN_040564f8(*(undefined8 *)(param_1 + 0x10));
    uVar8 = 2;
    if (cVar1 == '\0') {
      uVar8 = 0;
    }
    Plant::GetProps();
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    lVar4 = FUN_040567c8(*(undefined8 *)(lVar4 + 0x70),uVar8);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)(lVar4 + 8));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_18);
    if (cVar1 != '\0') {
      pfVar5 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        **)(param_1 + 0x10));
      fVar12 = *pfVar5;
      Plant::GetProps();
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      lVar4 = FUN_040567c8(*(undefined8 *)(lVar4 + 0x70),uVar8);
      pBVar13._0_4_ =
           (Board *)(fVar12 + *(float *)(lVar4 + 0x68) *
                              *(float *)(*(long *)(param_1 + 0x10) + 0xc4));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      lVar4 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              **)(param_1 + 0x10));
      uVar9 = *(undefined4 *)(lVar4 + 4);
      fVar12 = *(float *)(lVar4 + 8);
      Plant::GetProps();
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      uVar6 = *(undefined8 *)(lVar4 + 0x70);
      goto LAB_040573d8;
    }
  }
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + -1;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
LAB_040571f4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPeashooter::FindTargetAndFire(PlantWeapon) */

void __thiscall PlantPeashooter::FindTargetAndFire(PlantPeashooter *this,undefined4 param_2)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Plant::CanFindTarget(*(undefined8 *)(this + 0x10));
  if (cVar1 == '\0') {
    plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    (**(code **)(*plVar2 + 0x88))();
    *(undefined4 *)(this + 0x44) = 0xffffffff;
    Plant::GetProps();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    lVar3 = FUN_040567c8(*(undefined8 *)(lVar3 + 0x70),0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)(*(long *)(this + 0x10) + 0xbc),*(float *)(lVar3 + 0x24),
               *(float *)(lVar3 + 0x28));
  }
  else {
    (**(code **)(*(long *)this + 0x1a0))(this);
    DoLevelSpecial(this,2,param_2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1 != '\0');
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPeashooter::Initialize() */

void __thiscall PlantPeashooter::Initialize(PlantPeashooter *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  NameMapperBase *pNVar5;
  RtObject *pRVar6;
  PeashooterBoostReShoot *pPVar7;
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  *(undefined4 *)(this + 0x44) = 0xffffffff;
  *(undefined4 *)(this + 0x48) = 0;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  pNVar5 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
  std::string::string(asStack_10,"peashooter_new_avatar_2");
  iVar3 = NameMapperBase::GetIdForName(pNVar5,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pNVar5 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
  std::string::string(asStack_10,"peashooter_new_avatar_3");
  iVar4 = NameMapperBase::GetIdForName(pNVar5,asStack_10);
  std::string::~string(asStack_10);
  nop();
  cVar1 = PlayerInfo::IsPlantNewAvatarUnLocked(this_01,iVar3);
  if (cVar1 != '\0') {
    NewAvatar::GetAvatarInfoByAvatarId(iVar3);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
    if (bVar2) {
      NewAvatar::GetAvatarInfoByAvatarId(iVar3);
      pRVar6 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10)
      ;
      pPVar7 = Sexy::RtObject::Cast<PeashooterBoostReShoot>(pRVar6);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      if (pPVar7 != (PeashooterBoostReShoot *)0x0) {
        *(undefined4 *)(this + 0x48) = *(undefined4 *)(pPVar7 + 100);
      }
    }
    else {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    }
  }
  cVar1 = PlayerInfo::IsPlantNewAvatarUnLocked(this_01,iVar4);
  if (cVar1 != '\0') {
    NewAvatar::GetAvatarInfoByAvatarId(iVar4);
    pRVar6 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    pPVar7 = Sexy::RtObject::Cast<PeashooterBoostReShoot>(pRVar6);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    if (pPVar7 != (PeashooterBoostReShoot *)0x0) {
      *(undefined4 *)(this + 0x48) = *(undefined4 *)(pPVar7 + 100);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPeashooter::ApplyPlantfood() */

void __thiscall PlantPeashooter::ApplyPlantfood(PlantPeashooter *this)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  float fVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (-1 < *(int *)(this + 0x44)) {
    plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    (**(code **)(*plVar2 + 0x88))();
    *(undefined4 *)(this + 0x44) = 0xffffffff;
    Plant::GetProps();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    lVar3 = FUN_040567c8(*(undefined8 *)(lVar3 + 0x70),0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)(*(long *)(this + 0x10) + 0xbc),*(float *)(lVar3 + 0x24),
               *(float *)(lVar3 + 0x28));
  }
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 == '\0') {
    plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    (**(code **)(*plVar2 + 0x80))(0x41200000);
    FUN_040564cc(aRStack_10,*(undefined8 *)(this + 0x10));
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    fVar4 = *(float *)(lVar3 + 0x38);
    lVar3 = FUN_04057ebc(*(undefined8 *)(this + 0x10));
    ZombossSkyCityLineShoot::Start
              ((ZombossSkyCityLineShoot *)(this + 0x28),fVar4,*(int *)(lVar3 + 0x2b8),1.0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

