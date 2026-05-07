// Class: PlantLotusshooter


/* PlantLotusshooter::CanApplyPlantfood() */

byte __thiscall PlantLotusshooter::CanApplyPlantfood(PlantLotusshooter *this)

{
  return (byte)this[0xb4] ^ 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLotusshooter::StaticClassInit() */

void PlantLotusshooter::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantLotusshooter");
    (*pcVar2)(plVar1,asStack_10,FUN_03c040b4,0xb8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantLotusshooter::StaticGetClass() */

long * PlantLotusshooter::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantLotusshooter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantLotusshooter::GetClass() const */

long * PlantLotusshooter::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantLotusshooter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLotusshooter::boardToScreenSpace(Sexy::SexyVector3 const&) */

void __thiscall PlantLotusshooter::boardToScreenSpace(PlantLotusshooter *this,SexyVector3 *param_1)

{
  float fVar1;
  FastCurve local_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::FastCurve::SetOutRange
            (local_10,*(float *)param_1,*(float *)(param_1 + 4) - *(float *)(param_1 + 8));
  fVar1 = (float)FUN_03c00730();
  Sexy::SexyVector2::operator*=((SexyVector2 *)local_10,fVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10._0_4_,local_10._4_4_);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLotusshooter::artPointToScreenPoint(Sexy::Point const&) */

void __thiscall PlantLotusshooter::artPointToScreenPoint(PlantLotusshooter *this,Point *param_1)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  FastCurve aFStack_10 [8];
  long local_8;
  
  fVar3 = (float)*(int *)(param_1 + 4);
  local_8 = ___stack_chk_guard;
  Sexy::FastCurve::SetOutRange(aFStack_10,(float)*(int *)param_1,fVar3);
  fVar1 = (float)FUN_03c00730();
  uVar2 = Sexy::SexyVector2::operator*((SexyVector2 *)aFStack_10,fVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2,fVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLotusshooter::shouldDrawPreviousBeam(Sexy::SexyVector2&, Sexy::SexyVector2&) */

void __thiscall
PlantLotusshooter::shouldDrawPreviousBeam
          (PlantLotusshooter *this,SexyVector2 *param_1,SexyVector2 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  ResistenceValueInfo aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo(aRStack_10);
  cVar1 = DVec2::operator!=((DVec2 *)param_2,(DVec2 *)aRStack_10);
  uVar2 = 0;
  if (cVar1 != '\0') {
    uVar2 = DVec2::operator!=((DVec2 *)param_2,(DVec2 *)param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLotusshooter::UpdatePlantfood() */

void __thiscall PlantLotusshooter::UpdatePlantfood(PlantLotusshooter *this)

{
  float *pfVar1;
  long lVar2;
  Plant *pPVar3;
  float fVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  EATextSquish::Vec3::Vec3(aVStack_18,*pfVar1,pfVar1[1],pfVar1[2]);
  pPVar3 = *(Plant **)(this + 0x10);
  fVar4 = *(float *)(pPVar3 + 0xc4);
  Plant::GetProps();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  LotusshooterPlantfood::Update
            ((LotusshooterPlantfood *)(this + 0x28),pPVar3,(SexyVector3 *)aVStack_18,fVar4,
             (vector *)(lVar2 + 0x70));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLotusshooter::PlantLotusshooter() */

void __thiscall PlantLotusshooter::PlantLotusshooter(PlantLotusshooter *this)

{
  bool bVar1;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_06743c80;
  LotusshooterPlantfood::LotusshooterPlantfood((LotusshooterPlantfood *)(this + 0x28));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x58));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x60));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x68));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x70));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x78));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x80));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x88));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x90));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x98));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xa0));
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,0.0,0.0);
  *(undefined4 *)(this + 0x54) = 0;
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined8 *)(this + 0x80) = local_10;
  *(undefined4 *)(this + 0xa8) = 0xffffffff;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantLotusshooter::StaticNew() */

PlantLotusshooter * PlantLotusshooter::StaticNew(void)

{
  PlantLotusshooter *this;
  
  this = ::operator_new(0xb8);
  PlantLotusshooter(this);
  return this;
}


/* PlantLotusshooter::~PlantLotusshooter() */

void __thiscall PlantLotusshooter::~PlantLotusshooter(PlantLotusshooter *this)

{
  RtWeakPtr *this_00;
  RtWeakPtr *this_01;
  RtWeakPtr *this_02;
  bool bVar1;
  long *plVar2;
  RtWeakPtr *this_03;
  
  this_03 = (RtWeakPtr *)(this + 0x88);
  *(undefined ***)this = &PTR_GetClass_06743c80;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_03);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_03);
    (**(code **)(*plVar2 + 0x48))();
  }
  this_00 = (RtWeakPtr *)(this + 0x90);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  this_01 = (RtWeakPtr *)(this + 0x98);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
    (**(code **)(*plVar2 + 0x48))();
  }
  this_02 = (RtWeakPtr *)(this + 0xa0);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_02);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_03);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x78));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantLotusshooter::~PlantLotusshooter() */

void __thiscall PlantLotusshooter::~PlantLotusshooter(PlantLotusshooter *this)

{
  ~PlantLotusshooter(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLotusshooter::drawLaserFromToScreenSpace(Sexy::Graphics*, Sexy::SexyVector2 const&,
   Sexy::SexyVector2 const&, Sexy::SexyVector2 const&, Sexy::SexyVector2 const&, Effect_PopAnim*,
   int) */

void __thiscall
PlantLotusshooter::drawLaserFromToScreenSpace
          (PlantLotusshooter *this,Graphics *param_1,SexyVector2 *param_2,SexyVector2 *param_3,
          SexyVector2 *param_4,SexyVector2 *param_5,Effect_PopAnim *param_6,int param_7)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  UIWidget *this_01;
  long *plVar1;
  Insets aIStack_28 [16];
  Insets aIStack_18 [12];
  int local_c;
  long local_8;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x88);
  local_8 = ___stack_chk_guard;
  this_01 = (UIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  UIWidget::GetAtlasImage(this_01);
  PopAnimRig::GetPAMColor();
  Sexy::Insets::Insets(aIStack_18,aIStack_28);
  local_c = param_7;
  plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  (**(code **)(*plVar1 + 0x78))(plVar1,aIStack_18);
  WatergunBeamEntity::drawLaserFromToScreenSpace
            ((Graphics *)this,(SexyVector2 *)param_1,param_2,param_3,param_4,
             (Effect_PopAnim *)param_5);
  plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  (**(code **)(*plVar1 + 0x78))(plVar1,aIStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantLotusshooter::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantLotusshooter::onAnimStoppedCallback(PlantLotusshooter *this,string *param_1)

{
  bool bVar1;
  long *plVar2;
  
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 1;
  bVar1 = std::operator==(param_1,"xi");
  if (bVar1) {
    this[0x48] = (PlantLotusshooter)0x1;
    plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    (**(code **)(*plVar2 + 0x118))();
  }
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLotusshooter::DoLevelSpecial(int, PlantWeapon) */

void PlantLotusshooter::DoLevelSpecial(PlantFramework *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  float *pfVar5;
  code *pcVar6;
  UIEasyButtonWidget *this;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 != 2) goto LAB_03c01c3c;
  this = *(UIEasyButtonWidget **)(param_1 + 0x10);
  iVar2 = FUN_03c005bc(this);
  if (iVar2 == 2) {
    iVar2 = *(int *)(param_1 + 0x4c);
    if (iVar2 < 0) {
      fVar8 = (float)PlantFramework::Rand(param_1,1.0);
      cVar1 = Plant::IsSkillCheat(*(Plant **)(param_1 + 0x10));
      if (((cVar1 == '\0') ||
          (cVar1 = Plant::IsSkillActivate(*(Plant **)(param_1 + 0x10)), cVar1 == '\0')) &&
         ((cVar1 = Plant::IsSkillCheat(*(Plant **)(param_1 + 0x10)), cVar1 != '\0' || (0.1 <= fVar8)
          ))) goto LAB_03c01c3c;
LAB_03c01e50:
      *(undefined4 *)(param_1 + 0x4c) = 4;
      Plant::GetProps();
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      lVar4 = FUN_03c00604(*(undefined8 *)(lVar4 + 0x70),0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      Sexy::FastCurve::SetOutRange
                ((FastCurve *)(*(long *)(param_1 + 0x10) + 0xbc),*(float *)(lVar4 + 0x24) * 0.1,
                 *(float *)(lVar4 + 0x28) * 0.1);
      Plant::ResetLaunchTimer(*(Plant **)(param_1 + 0x10),false);
      pcVar6 = *(code **)(*(long *)param_1 + 0x300);
      *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x150) = 0;
      (*pcVar6)(aRStack_10,param_1);
      cVar1 = FUN_0547419c(aRStack_10);
      if (cVar1 == '\0') {
        RealObject::PlayPositionalSound(*(RealObject **)(param_1 + 0x10),(string *)aRStack_10,0.0);
      }
      std::string::~string((string *)aRStack_10);
      goto LAB_03c01c3c;
    }
  }
  else {
    if (iVar2 < 3) goto LAB_03c01c3c;
    iVar2 = *(int *)(param_1 + 0x4c);
    if (iVar2 < 0) {
      fVar8 = (float)PlantFramework::Rand(param_1,1.0);
      cVar1 = Plant::IsSkillCheat(*(Plant **)(param_1 + 0x10));
      if (((cVar1 == '\0') ||
          (cVar1 = Plant::IsSkillActivate(*(Plant **)(param_1 + 0x10)), cVar1 == '\0')) &&
         ((cVar1 = Plant::IsSkillCheat(*(Plant **)(param_1 + 0x10)), cVar1 != '\0' || (0.2 <= fVar8)
          ))) goto LAB_03c01c3c;
      goto LAB_03c01e50;
    }
  }
  if (iVar2 == 0) {
    plVar3 = (long *)UIEasyButtonWidget::GetImageNormal(this);
    (**(code **)(*plVar3 + 0x88))();
    *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
    Plant::GetProps();
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    lVar4 = FUN_03c00604(*(undefined8 *)(lVar4 + 0x70),0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)(*(long *)(param_1 + 0x10) + 0xbc),*(float *)(lVar4 + 0x24),
               *(float *)(lVar4 + 0x28));
  }
  else {
    plVar3 = (long *)UIEasyButtonWidget::GetImageNormal(this);
    (**(code **)(*plVar3 + 0x80))(0x41200000);
    Plant::GetProps();
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    lVar4 = FUN_03c00604(*(undefined8 *)(lVar4 + 0x70),0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)(lVar4 + 8));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_18);
    if (cVar1 != '\0') {
      pfVar5 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        **)(param_1 + 0x10));
      fVar13 = *pfVar5;
      Plant::GetProps();
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      lVar4 = FUN_03c00604(*(undefined8 *)(lVar4 + 0x70),0);
      fVar8 = *(float *)(lVar4 + 0x68);
      fVar9 = *(float *)(*(long *)(param_1 + 0x10) + 0xc4);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      lVar4 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              **)(param_1 + 0x10));
      uVar10 = *(undefined4 *)(lVar4 + 4);
      fVar14 = *(float *)(lVar4 + 8);
      Plant::GetProps();
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      lVar4 = FUN_03c00604(*(undefined8 *)(lVar4 + 0x70),0);
      fVar11 = *(float *)(lVar4 + 0x6c);
      fVar12 = *(float *)(*(long *)(param_1 + 0x10) + 0xc4);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      uVar7 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_18);
      Board::AddProjectile
                ((Board *)(fVar13 + fVar8 * fVar9),uVar10,fVar14 - fVar11 * fVar12,uVar7,aRStack_10,
                 *(undefined8 *)(param_1 + 0x10),0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    }
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
LAB_03c01c3c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLotusshooter::LoadPopanimEffect(std::string, int) */

void PlantLotusshooter::LoadPopanimEffect
               (undefined8 param_1,undefined8 param_2,string *param_3,undefined4 param_4)

{
  Effect_PopAnim *this;
  ResourceInfo *pRVar1;
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  GetPAMByName(param_3);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar1,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,0.0,0.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)aRStack_18,-1);
  FUN_03c0059c(this + 0x1c,param_4);
  std::string::string((string *)aRStack_18,"idle");
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(this,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  StandaloneEffect::SetIsScreenSpaceEffect((StandaloneEffect *)this,false);
  StandaloneEffect::SetVisibility((StandaloneEffect *)this,false);
  ToolPacketData::GetProps();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLotusshooter::LoadAvatarPopanimEffect(std::string, int) */

void PlantLotusshooter::LoadAvatarPopanimEffect
               (undefined8 param_1,long param_2,string *param_3,undefined4 param_4)

{
  char cVar1;
  Effect_PopAnim *this;
  ResourceInfo *pRVar2;
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  GetPAMByName(param_3);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,0.0,0.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)aRStack_18,-1);
  FUN_03c0059c(this + 0x1c,param_4);
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(param_2 + 0x10));
  if (cVar1 == '\0') {
    std::string::string((string *)aRStack_18,"idle");
    PVZ_EOT();
  }
  else {
    std::string::string((string *)aRStack_18,"idle");
    PVZ_EOT();
  }
  Effect_PopAnim::PlayLoopingAnimation(this,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  StandaloneEffect::SetIsScreenSpaceEffect((StandaloneEffect *)this,false);
  StandaloneEffect::SetVisibility((StandaloneEffect *)this,false);
  ToolPacketData::GetProps();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLotusshooter::Initialize() */

void __thiscall PlantLotusshooter::Initialize(PlantLotusshooter *this)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  string asStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  this[0x48] = (PlantLotusshooter)0x0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x4c) = 0xffffffff;
  *(undefined4 *)(this + 0xa8) = 0xffffffff;
  *(undefined4 *)(this + 0x54) = 0;
  uVar3 = PVZ_EOT();
  this[0xb4] = (PlantLotusshooter)0x0;
  *(undefined4 *)(this + 0xac) = uVar3;
  *(undefined4 *)(this + 0xb0) = uVar3;
  iVar2 = Board::MakeRenderOrder(0x64960,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc) + -1,0);
  std::string::string(asStack_18,"POPANIM_EFFECTS_LOTUSSHOOTER_LVL5_BEAM");
  LoadAvatarPopanimEffect((RtWeakPtr<Sexy::ResourceInfo> *)&local_10,this,asStack_18,iVar2);
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x88),(RtWeakPtrBase *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"POPANIM_EFFECTS_LOTUSSHOOTER_LVL5_BEAM_HIT");
  LoadAvatarPopanimEffect((RtWeakPtr<Sexy::ResourceInfo> *)&local_10,this,asStack_18,iVar2 + 1);
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x90),(RtWeakPtrBase *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"POPANIM_EFFECTS_LOTUSSHOOTER_LVL5_BEAM_IN");
  LoadPopanimEffect((RtWeakPtr<Sexy::ResourceInfo> *)&local_10,this,asStack_18,iVar2);
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x98),(RtWeakPtrBase *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  std::string::~string(asStack_18);
  nop();
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)&local_10)
  ;
  *(undefined8 *)(this + 0x58) = local_10;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)&local_10)
  ;
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x60) = local_10;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLotusshooter::AddToRenderQueue(RenderQueue*) */

void __thiscall PlantLotusshooter::AddToRenderQueue(PlantLotusshooter *this,RenderQueue *param_1)

{
  int iVar1;
  long *extraout_x0;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  iVar1 = (**(code **)(*extraout_x0 + 0x88))();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,drawMainBeamAndOrigin);
  Sexy::Delegate1<Sexy::Graphics*>::
  Delegate1<PlantLotusshooter,void(PlantLotusshooter::*)(Sexy::Graphics*)>(aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,iVar1 + 1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLotusshooter::setBeamState(PlantLotusshooter::BeamState) */

void __thiscall PlantLotusshooter::setBeamState(PlantLotusshooter *this,int param_2)

{
  int iVar1;
  StandaloneEffect *this_00;
  long lVar2;
  long lVar3;
  RealObject *pRVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x54) != param_2) {
    *(int *)(this + 0x54) = param_2;
    if (param_2 == 1) {
      *(undefined4 *)(this + 0xa8) = 0xffffffff;
      lVar2 = FUN_03c02e20(*(undefined8 *)(this + 0x10));
      lVar3 = *(long *)(this + 0x10);
      fVar7 = *(float *)(lVar3 + 0x1c);
      fVar6 = (float)FUN_03c00638(*(undefined4 *)(lVar3 + 0x18),fVar7,*(undefined4 *)(lVar3 + 0x20))
      ;
      iVar1 = *(int *)(lVar2 + 0x2d0);
      *(float *)(this + 0x70) = fVar6 + 5.0 + (float)*(int *)(lVar2 + 0x2cc);
      *(float *)(this + 0x74) = (float)iVar1 + fVar7;
      fVar6 = (float)PVZ_T();
      *(float *)(this + 0xb0) = fVar6 + *(float *)(lVar2 + 0x300);
      uVar5 = PVZ_T();
      pRVar4 = *(RealObject **)(this + 0x10);
      *(undefined4 *)(this + 0xac) = uVar5;
      std::string::string(asStack_10,"Play_Plant_MagGrass_Nitro_Start");
      RealObject::PlayPositionalSound(pRVar4,asStack_10,0.0);
      std::string::~string(asStack_10);
      nop();
    }
    else if (param_2 == 0) {
      this_00 = (StandaloneEffect *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x90));
      StandaloneEffect::SetVisibility(this_00,false);
      uVar5 = PVZ_EOT();
      this[0xb4] = (PlantLotusshooter)0x0;
      *(undefined4 *)(this + 0xac) = uVar5;
      *(undefined4 *)(this + 0xb0) = uVar5;
    }
    else if (param_2 == 2) {
      pRVar4 = *(RealObject **)(this + 0x10);
      std::string::string(asStack_10,"Play_Plant_MagGrass_Nitro_End");
      RealObject::PlayPositionalSound(pRVar4,asStack_10,0.0);
      std::string::~string(asStack_10);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLotusshooter::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantLotusshooter::Fire
          (PlantLotusshooter *this,RtWeakPtrBase *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  PlantAction *pPVar2;
  float *pfVar3;
  long lVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 uVar5;
  RealObject *this_01;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_88 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_80 [8];
  RtWeakPtrBase aRStack_78 [96];
  float local_18;
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xb4] == (PlantLotusshooter)0x0) {
    lVar4 = *(long *)(this + 0x10);
    if (*(int *)(lVar4 + 200) == 10) {
      Plant::GetProps();
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_88);
      pPVar2 = (PlantAction *)FUN_03c00604(*(undefined8 *)(lVar4 + 0x70),2);
      PlantAction::PlantAction((PlantAction *)aRStack_80,pPVar2);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_88);
      cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
      if (cVar1 != '\0') {
        Plant::GetProps();
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_88);
        pPVar2 = (PlantAction *)FUN_03c00604(*(undefined8 *)(lVar4 + 0x70),3);
        PlantAction::operator=((PlantAction *)aRStack_80,pPVar2);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_88);
      }
      this_00 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  **)(this + 0x10);
      pfVar3 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(this_00);
      fVar8 = *(float *)(this_00 + 0xc4);
      fVar6 = *pfVar3;
      fVar9 = pfVar3[2];
      fVar7 = pfVar3[1];
      uVar5 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_88,aRStack_78);
      lVar4 = Board::AddProjectile
                        ((Board *)(fVar6 + local_18 * fVar8),fVar7,fVar9 - fVar8 * local_14,uVar5,
                         aRStack_88,*(undefined8 *)(this + 0x10),0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_88);
      uVar5 = FUN_03c005a4(*(undefined8 *)(lVar4 + 0xe0));
      uVar5 = operator|(uVar5,0x2000);
      FUN_03c005a8((undefined8 *)(lVar4 + 0xe0),uVar5);
      this_01 = *(RealObject **)(this + 0x10);
      std::string::string((string *)aRStack_88,"Play_Repeater_Cannon_Fire");
      RealObject::PlayPositionalSound(this_01,(string *)aRStack_88,0.0);
      std::string::~string((string *)aRStack_88);
      nop();
      PlantAction::~PlantAction((PlantAction *)aRStack_80);
    }
    else if ((*(int *)(lVar4 + 200) == 5) || (0 < *(int *)(this + 0x4c))) {
      lVar4 = 0;
    }
    else {
      if (this[0x48] == (PlantLotusshooter)0x0) {
        *(undefined4 *)(lVar4 + 0x150) = 0;
      }
      else {
        *(undefined4 *)(lVar4 + 0x150) = 4;
        this[0x48] = (PlantLotusshooter)0x0;
      }
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_80,param_2);
      lVar4 = PlantFramework::Fire((PlantFramework *)this,aRStack_80,param_3,param_4);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
    }
  }
  else {
    lVar4 = 0;
    if (*(int *)(this + 0x54) == 0) {
      setBeamState(this,1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLotusshooter::drawMainBeamAndOrigin(Sexy::Graphics*) */

void __thiscall PlantLotusshooter::drawMainBeamAndOrigin(PlantLotusshooter *this,Graphics *param_1)

{
  RtWeakPtr *this_00;
  char cVar1;
  long lVar2;
  SexyVector3 *pSVar3;
  ResourceInfo *pRVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  GraphicsAutoState aGStack_90 [8];
  undefined4 local_88;
  float local_84;
  undefined4 local_80;
  float fStack_7c;
  undefined4 local_78;
  float local_74;
  undefined4 local_70;
  float local_6c;
  undefined4 local_68;
  float local_64;
  float local_60 [2];
  float local_58;
  DVec3 aDStack_50 [16];
  undefined4 local_40;
  float local_3c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_90,param_1);
  lVar2 = FUN_03c02e20(*(undefined8 *)(this + 0x10));
  DVec3::DVec3((DVec3 *)local_60);
  DVec3::DVec3(aDStack_50);
  if (*(int *)(this + 0x54) != 0) {
    this_00 = (RtWeakPtr *)(this + 0x88);
    pSVar3 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             **)(this + 0x10));
    Sexy::SexyVector3::operator=((SexyVector3 *)local_60,pSVar3);
    fVar7 = *(float *)(this + 0x74);
    local_60[0] = (float)*(int *)(lVar2 + 0x2cc) + local_60[0];
    local_58 = local_58 - (float)*(int *)(lVar2 + 0x2d0);
    EATextSquish::Vec3::Vec3((Vec3 *)&local_40,*(float *)(this + 0x70),fVar7,0.0);
    Sexy::SexyVector3::operator=((SexyVector3 *)aDStack_50,(SexyVector3 *)&local_40);
    local_88 = boardToScreenSpace(this,(SexyVector3 *)local_60);
    local_84 = fVar7;
    local_80 = boardToScreenSpace(this,(SexyVector3 *)aDStack_50);
    fStack_7c = fVar7;
    local_78 = artPointToScreenPoint(this,(Point *)(lVar2 + 0x2dc));
    local_74 = fVar7;
    local_70 = artPointToScreenPoint(this,(Point *)(lVar2 + 0x2e4));
    local_6c = fVar7;
    Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    WatergunBeamEntity::drawLaserFromToScreenSpace
              ((Graphics *)this,(SexyVector2 *)param_1,(SexyVector2 *)&local_88,
               (SexyVector2 *)&local_80,(SexyVector2 *)&local_78,(Effect_PopAnim *)&local_70);
    cVar1 = shouldDrawPreviousBeam(this,(SexyVector2 *)&local_80,(SexyVector2 *)(this + 0x58));
    if (cVar1 == '\0') {
      cVar1 = shouldDrawPreviousBeam(this,(SexyVector2 *)&local_80,(SexyVector2 *)(this + 0x60));
    }
    else {
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
      drawLaserFromToScreenSpace
                (this,param_1,(SexyVector2 *)&local_88,(SexyVector2 *)(this + 0x58),
                 (SexyVector2 *)&local_78,(SexyVector2 *)&local_70,(Effect_PopAnim *)pRVar4,0x4c);
      cVar1 = shouldDrawPreviousBeam(this,(SexyVector2 *)&local_80,(SexyVector2 *)(this + 0x60));
    }
    if (cVar1 != '\0') {
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
      drawLaserFromToScreenSpace
                (this,param_1,(SexyVector2 *)&local_88,(SexyVector2 *)(this + 0x60),
                 (SexyVector2 *)&local_78,(SexyVector2 *)&local_70,(Effect_PopAnim *)pRVar4,0x19);
    }
    *(undefined8 *)(this + 0x60) = *(undefined8 *)(this + 0x58);
    *(ulong *)(this + 0x58) = CONCAT44(fStack_7c,local_80);
    local_68 = Sexy::SexyVector2::operator-((SexyVector2 *)&local_80,(SexyVector2 *)&local_88);
    local_64 = fVar7;
    fVar5 = (float)WatergunBeamEntity::getAngleForVector
                             ((WatergunBeamEntity *)this,(SexyVector2 *)&local_68);
    fVar6 = (float)FUN_03c00730();
    local_40 = Sexy::SexyVector2::operator*((SexyVector2 *)&DAT_06acef90,fVar6);
    local_3c = fVar7;
    Sexy::SexyTransform2D::CreateTransformWithPivot
              ((SexyVector2 *)&local_88,fVar5,1.0,(SexyVector2 *)&local_40,true);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_90);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLotusshooter::positionBeamHitForBlasting(Sexy::SexyVector2 const&) */

void PlantLotusshooter::positionBeamHitForBlasting(SexyVector2 *param_1)

{
  long lVar1;
  StandaloneEffect *this;
  UIWidget *this_00;
  PopAnimRig *this_01;
  SexyVector2 *in_x1;
  float fVar2;
  float fVar3;
  undefined4 local_48 [2];
  undefined4 local_40 [2];
  FastCurve aFStack_38 [8];
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_03c02e20(*(undefined8 *)(param_1 + 0x10));
  fVar2 = (float)FUN_03c00730();
  local_48[0] = Sexy::SexyVector2::operator*(param_1 + 0x70,fVar2);
  local_40[0] = Sexy::SexyVector2::operator-((SexyVector2 *)local_48,in_x1);
  fVar3 = (float)*(int *)(lVar1 + 0x2f0);
  Sexy::FastCurve::SetOutRange(aFStack_38,(float)*(int *)(lVar1 + 0x2ec),fVar3);
  fVar2 = (float)FUN_03c00730();
  Sexy::SexyVector2::operator*=((SexyVector2 *)aFStack_38,fVar2);
  fVar2 = (float)Sexy::SexyVector2::Normalize((SexyVector2 *)local_40);
  fVar2 = acosf(fVar2);
  if (0.0 <= fVar3) {
    fVar2 = -fVar2;
  }
  this = (StandaloneEffect *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x90))
  ;
  StandaloneEffect::SetVisibility(this,true);
  Sexy::SexyTransform2D::CreateTransformWithPivot
            ((SexyVector2 *)local_48,fVar2,1.0,(SexyVector2 *)aFStack_38,true);
  this_00 = (UIWidget *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x90));
  this_01 = (PopAnimRig *)UIWidget::GetAtlasImage(this_00);
  PopAnimRig::SetRenderTransform(this_01,aSStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLotusshooter::ApplyPlantfood() */

void __thiscall PlantLotusshooter::ApplyPlantfood(PlantLotusshooter *this)

{
  int iVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar3 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  (**(code **)(*plVar3 + 0x80))(0x41200000);
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  lVar4 = *(long *)(this + 0x10);
  *(undefined4 *)(lVar4 + 200) = 5;
  FUN_03c00614(aRStack_10,lVar4);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  fVar5 = *(float *)(lVar4 + 0x38);
  lVar4 = FUN_03c02e20(*(undefined8 *)(this + 0x10));
  iVar1 = *(int *)(lVar4 + 0x2c0);
  bVar2 = (bool)Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  LotusshooterPlantfood::Start((LotusshooterPlantfood *)(this + 0x28),fVar5,iVar1,1.0,bVar2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLotusshooter::FindTargetAndFire(PlantWeapon) */

void __thiscall PlantLotusshooter::FindTargetAndFire(PlantLotusshooter *this,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  Effect_AngerFlame *this_00;
  undefined8 uVar3;
  RtObject *this_01;
  PlantAnimRig_Lotusshooter *this_02;
  long *plVar4;
  long lVar5;
  UIEasyButtonWidget *this_03;
  float fVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x54) != 1) {
    this_00 = (Effect_AngerFlame *)
              UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    iVar2 = Effect_AngerFlame::GetFlameCol(this_00);
    if (iVar2 != 0xe) {
      this_03 = *(UIEasyButtonWidget **)(this + 0x10);
      cVar1 = FUN_03c005c4(this_03);
      if ((cVar1 != '\0') && (*(int *)(this + 0x4c) == 0)) {
        fVar6 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
        lVar5 = FUN_03c02e20(*(undefined8 *)(this + 0x10));
        this_03 = *(UIEasyButtonWidget **)(this + 0x10);
        if (fVar6 < *(float *)(lVar5 + 0x304)) {
          this[0xb4] = (PlantLotusshooter)0x1;
          this_01 = (RtObject *)UIEasyButtonWidget::GetImageNormal(this_03);
          this_02 = Sexy::RtObject::Cast<PlantAnimRig_Lotusshooter>(this_01);
          if (this_02 != (PlantAnimRig_Lotusshooter *)0x0) {
            PlantAnimRig_Lotusshooter::PlaySuperAttack(this_02);
            uVar3 = 0;
            goto LAB_03c0381c;
          }
          goto LAB_03c03818;
        }
      }
      cVar1 = Plant::CanFindTarget(this_03,param_2);
      if (cVar1 == '\0') {
        plVar4 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
        (**(code **)(*plVar4 + 0x88))();
        *(undefined4 *)(this + 0x4c) = 0xffffffff;
        Plant::GetProps();
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        lVar5 = FUN_03c00604(*(undefined8 *)(lVar5 + 0x70),0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        Sexy::FastCurve::SetOutRange
                  ((FastCurve *)(*(long *)(this + 0x10) + 0xbc),*(float *)(lVar5 + 0x24),
                   *(float *)(lVar5 + 0x28));
        uVar3 = 0;
      }
      else {
        (**(code **)(*(long *)this + 0x1a0))(this);
        DoLevelSpecial(this,2,param_2);
        uVar3 = 1;
      }
      goto LAB_03c0381c;
    }
  }
LAB_03c03818:
  uVar3 = 0;
LAB_03c0381c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLotusshooter::CancelPlantfood() */

void __thiscall PlantLotusshooter::CancelPlantfood(PlantLotusshooter *this)

{
  char cVar1;
  long *plVar2;
  PopAnimRig *pPVar3;
  string *__n;
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(*(UIEasyButtonWidget **)(this + 0x10) + 200) == 5) {
    plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    (**(code **)(*plVar2 + 0x88))();
    *(undefined4 *)(*(long *)(this + 0x10) + 200) = 10;
    __n = asStack_58;
    std::string::string(asStack_70,"");
    nop();
    cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    if (cVar1 == '\0') {
      std::string::append(asStack_70,"plantfood_off",(size_t)__n);
    }
    else {
      std::string::append(asStack_70,"plantfood_off2",(size_t)__n);
    }
    pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PopAnimRig::PlayAndStop(pPVar3,asStack_70,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    std::string::~string(asStack_70);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLotusshooter::TryAbsorbPoison() */

void __thiscall PlantLotusshooter::TryAbsorbPoison(PlantLotusshooter *this)

{
  RtObject *this_00;
  PlantAnimRig_Lotusshooter *pPVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  pPVar1 = Sexy::RtObject::Cast<PlantAnimRig_Lotusshooter>(this_00);
  if (pPVar1 != (PlantAnimRig_Lotusshooter *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PlantAnimRig_Lotusshooter::PlayAbsorb(pPVar1,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLotusshooter::findClosestTarget() */

void __thiscall PlantLotusshooter::findClosestTarget(PlantLotusshooter *this)

{
  RtWeakPtr *this_00;
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ResourceInfo *pRVar7;
  ulong uVar8;
  undefined8 uVar9;
  ResourceInfo *pRVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float unaff_s10;
  ResistenceValueInfo aRStack_58 [8];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  Insets aIStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar8 = 0;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo(aRStack_58);
  pRVar10 = (ResourceInfo *)0x0;
  lVar4 = *(long *)(this + 0x10);
  uVar14 = *(undefined4 *)(lVar4 + 0x1c);
  local_50 = FUN_03c00638(*(undefined4 *)(lVar4 + 0x18),uVar14,*(undefined4 *)(lVar4 + 0x20));
  local_4c = uVar14;
  Sexy::Insets::Insets
            (aIStack_30,*(int *)(*(long *)(this + 0x10) + 0x114),
             *(int *)(*(long *)(this + 0x10) + 0x110),10,1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  uVar3 = operator|(4,2);
  EntityFinder::GetEntitiesInGridSquares
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,uVar3,
             aIStack_30);
  lVar4 = FUN_03c02e20(*(undefined8 *)(this + 0x10));
  fVar15 = *(float *)(lVar4 + 0x2f8);
  fVar11 = (float)Sexy::SexyMath::DegToRad(*(float *)(lVar4 + 0x2f4));
  uVar9 = local_20;
  lVar4 = FUN_03c005f0(local_20,local_18);
  pRVar7 = pRVar10;
  if (lVar4 != 0) {
    do {
      puVar5 = (undefined8 *)FUN_03c005fc(uVar9,uVar8);
      pRVar10 = (ResourceInfo *)*puVar5;
      cVar1 = PlantMagnifyingGrass::isTargetValid
                        ((PlantMagnifyingGrass *)this,(BoardEntity *)pRVar10);
      if (cVar1 == '\0') {
LAB_03c03d6c:
        pRVar10 = pRVar7;
        fVar12 = unaff_s10;
      }
      else {
        local_48 = PlantUltomato::getPositionForTarget((PlantUltomato *)this,(BoardEntity *)pRVar10)
        ;
        local_44 = uVar14;
        local_40 = Sexy::SexyVector2::operator-((SexyVector2 *)&local_48,(SexyVector2 *)&local_50);
        local_3c = uVar14;
        fVar12 = (float)VectorNorm((FPoint *)&local_40);
        if (fVar15 * fVar15 < fVar12) goto LAB_03c03d6c;
        uVar14 = 0;
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_38,1.0,0.0);
        fVar13 = (float)Sexy::SexyVector2::AngleBetween
                                  ((SexyVector2 *)&local_38,(SexyVector2 *)&local_40);
        if ((fVar11 < fVar13) || ((unaff_s10 <= fVar12 && (pRVar7 != (ResourceInfo *)0x0))))
        goto LAB_03c03d6c;
      }
      unaff_s10 = fVar12;
      uVar9 = local_20;
      uVar8 = uVar8 + 1;
      uVar6 = FUN_03c005f0(local_20,local_18);
      pRVar7 = pRVar10;
    } while (uVar8 < uVar6);
  }
  if (pRVar10 != (ResourceInfo *)0x0) {
    this_00 = (RtWeakPtr *)(this + 0x78);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar2) {
      pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
      cVar1 = PlantMagnifyingGrass::isTargetValid
                        ((PlantMagnifyingGrass *)this,(BoardEntity *)pRVar7);
      if (cVar1 != '\0') {
        pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
        local_40 = PlantUltomato::getPositionForTarget((PlantUltomato *)this,(BoardEntity *)pRVar7);
        local_3c = uVar14;
        local_38 = Sexy::SexyVector2::operator-((SexyVector2 *)&local_40,(SexyVector2 *)&local_50);
        local_34 = uVar14;
        fVar11 = (float)VectorNorm((FPoint *)&local_38);
        if (15.0 < ABS(fVar11 - unaff_s10)) {
          pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
        }
      }
    }
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pRVar10);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLotusshooter::CheckAbsorbPoison() */

void __thiscall PlantLotusshooter::CheckAbsorbPoison(PlantLotusshooter *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  Effect_AngerFlame *this_00;
  long lVar5;
  undefined8 *puVar6;
  GridItem *this_01;
  GridItemSmokeManhole *pGVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  Insets aIStack_40 [16];
  Insets aIStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  cVar2 = '\0';
  local_8 = ___stack_chk_guard;
  this_00 = (Effect_AngerFlame *)
            UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  iVar3 = Effect_AngerFlame::GetFlameCol(this_00);
  if (iVar3 == 1) {
    uVar9 = 0;
    iVar3 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
    iVar4 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
    Sexy::Insets::Insets(aIStack_40,iVar4,iVar3,1,1);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    EntityFinder::GetEntities
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,4);
    uVar10 = local_20;
    lVar5 = FUN_03c005f0(local_20,local_18);
    if (lVar5 != 0) {
      do {
        puVar6 = (undefined8 *)FUN_03c005fc(uVar10,uVar9);
        this_01 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar6);
        if ((this_01 != (GridItem *)0x0) &&
           (bVar1 = Sexy::RtObject::IsA<GridItemSmokeManhole>((RtObject *)this_01), bVar1)) {
          pGVar7 = Sexy::RtObject::Cast<GridItemSmokeManhole>((RtObject *)this_01);
          cVar2 = GridItemSmokeManhole::HasPollutionSmoke(pGVar7);
          if (cVar2 != '\0') {
            pGVar7 = Sexy::RtObject::Cast<GridItemSmokeManhole>((RtObject *)this_01);
            iVar3 = SharkMinion::getRow((SharkMinion *)pGVar7);
            pGVar7 = Sexy::RtObject::Cast<GridItemSmokeManhole>((RtObject *)this_01);
            iVar4 = BoardEntity::CalcColumnPosition((BoardEntity *)pGVar7);
            Sexy::Insets::Insets(aIStack_30,iVar4 + -1,iVar3 + -1,3,3);
            cVar2 = Sexy::TRect<int>::Intersects((TRect<int> *)aIStack_30,(TRect *)aIStack_40);
            if (cVar2 != '\0') goto LAB_03c0401c;
          }
        }
        uVar10 = local_20;
        uVar9 = uVar9 + 1;
        uVar8 = FUN_03c005f0(local_20,local_18);
      } while (uVar9 < uVar8);
    }
    cVar2 = '\0';
LAB_03c0401c:
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar2);
  }
  return;
}


/* PlantLotusshooter::UpdateActions() */

void __thiscall PlantLotusshooter::UpdateActions(PlantLotusshooter *this)

{
  char cVar1;
  
  cVar1 = CheckAbsorbPoison(this);
  if (cVar1 == '\0') {
    return;
  }
  TryAbsorbPoison(this);
  return;
}


/* PlantLotusshooter::OnAnimCommand(std::string const&, std::string const&) */

void PlantLotusshooter::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_2,"absorb");
  if (bVar1) {
    MessageRouter::Post<PlantLotusshooter*,PlantLotusshooter*>
              ((MessageRouter *)gMessageRouter,Message::AbsorbSmoke,(PlantLotusshooter *)param_1);
  }
  PlantFramework::OnAnimCommand(param_1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLotusshooter::damageTarget(BoardEntity*, bool) */

void PlantLotusshooter::damageTarget(BoardEntity *param_1,bool param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  Zombie *this;
  undefined8 *puVar9;
  long *extraout_x0;
  undefined8 uVar10;
  ZombieTosserSubSystem *pZVar11;
  code *pcVar12;
  RtObject *this_00;
  undefined8 uVar13;
  DamageInfo *pDVar14;
  undefined8 local_e8;
  undefined8 local_e0;
  Point aPStack_d8 [8];
  undefined4 local_d0;
  undefined4 local_cc;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_c8 [24];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_b0 [72];
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar8 = FUN_03c02e20(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Load size is inaccurate */
  pDVar14._0_4_ = *(DamageInfo **)(lVar8 + 0x2c4);
  uVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)(ulong)param_2);
  uVar4 = SharkMinion::getRow((SharkMinion *)(ulong)param_2);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_c8);
  uVar5 = operator|(2,4);
  EntityFinder::GetEntitiesAtGridSquare(avStack_c8,uVar5,uVar3,uVar4);
  local_e8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_c8);
  local_e0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_c8);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_e8,(__normal_iterator *)&local_e0), bVar1) {
    puVar9 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_e8);
    this_00 = (RtObject *)*puVar9;
    bVar1 = Sexy::RtObject::IsA<Zombie>(this_00);
    if (bVar1) {
      nop();
      if (((this != (Zombie *)0x0) &&
          (cVar2 = (**(code **)(*(long *)this + 0x328))(), cVar2 == '\0')) &&
         (cVar2 = (**(code **)(*(long *)this + 0x330))(this), cVar2 == '\0')) {
        cVar2 = Zombie::IsIgnoringAllDamage(this);
        if ((cVar2 == '\0') && (cVar2 = RealObject::IsOnTeam(this,2), cVar2 != '\0')) {
          cVar2 = Zombie::CanBeLaunchedByPlants(this);
          if (cVar2 != '\0') {
            iVar6 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
            iVar7 = BoardConstants::NUMBER_OF_COLUMNS();
            if (iVar6 < iVar7) {
              iVar6 = BoardTransforms::GridToBoardSpaceX(iVar6 + 1);
              lVar8 = std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
              EATextSquish::Vec3::Vec3
                        ((Vec3 *)aDStack_68,(float)iVar6,*(float *)(lVar8 + 4),*(float *)(lVar8 + 8)
                        );
              pZVar11 = Board::GetGameSubSystem<ZombieTosserSubSystem>
                                  (*(Board **)(gLawnApp + 0x9f0));
              RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_b0);
              ZombieTosserSubSystem::LaunchZombie
                        ((ZombieTosserSubSystem *)0x42480000,0x3ecccccd,pZVar11,this,aDStack_68,
                         aRStack_b0,0);
              RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              ::~RtReflectionDelegate
                        ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                          *)aRStack_b0);
            }
          }
          pcVar12 = *(code **)(*(long *)this + 0x110);
          uVar10 = operator|(0x1000000000000,0x2000);
          uVar10 = operator|(uVar10,0x1000);
          uVar13 = *(undefined8 *)(param_1 + 0x10);
          Sexy::Point::Point(aPStack_d8,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_d0,1.0,0.0);
          DamageInfo::DamageInfo
                    (pDVar14._0_4_,local_d0,local_cc,aDStack_68,uVar10,uVar13,aPStack_d8,0);
          (*pcVar12)(this,aDStack_68);
          DamageInfo::~DamageInfo(aDStack_68);
        }
      }
    }
    else {
      bVar1 = Sexy::RtObject::IsA<GridItem>(this_00);
      if (((bVar1) && (nop(), extraout_x0 != (long *)0x0)) &&
         (cVar2 = (**(code **)(*extraout_x0 + 0x200))(), cVar2 != '\0')) {
        pcVar12 = *(code **)(*extraout_x0 + 0x110);
        Sexy::Point::Point(aPStack_d8,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_d0,1.0,0.0);
        DamageInfo::DamageInfo(pDVar14._0_4_,local_d0,local_cc,aDStack_68,aPStack_d8,0);
        (*pcVar12)(extraout_x0,aDStack_68);
        DamageInfo::~DamageInfo(aDStack_68);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_e8);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_c8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLotusshooter::UpdateUnconditionally() */

void __thiscall PlantLotusshooter::UpdateUnconditionally(PlantLotusshooter *this)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  BoardEntity *pBVar5;
  float *pfVar6;
  StandaloneEffect *this_00;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_2c;
  float local_28;
  float fStack_24;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x54) != 0) {
    if ((*(int *)(this + 0x54) == 1) &&
       (fVar7 = *(float *)(this + 0xb0), fVar10 = (float)PVZ_T(), fVar7 < fVar10)) {
      setBeamState(this,2);
    }
    lVar3 = FUN_03c02e20(*(undefined8 *)(this + 0x10));
    lVar4 = *(long *)(this + 0x10);
    fVar10 = *(float *)(lVar4 + 0x1c);
    local_28 = (float)FUN_03c00638(*(undefined4 *)(lVar4 + 0x18),fVar10,
                                   *(undefined4 *)(lVar4 + 0x20));
    local_28 = local_28 + (float)*(int *)(lVar3 + 0x2cc);
    fVar10 = fVar10 + (float)*(int *)(lVar3 + 0x2d0);
    fStack_24 = fVar10;
    fVar7 = (float)FUN_03c00730();
    local_20 = Sexy::SexyVector2::operator*((SexyVector2 *)&local_28,fVar7);
    local_1c = fVar10;
    if (*(int *)(this + 0x54) == 2) {
      pBVar5 = (BoardEntity *)0x0;
      *(ulong *)(this + 0x68) = CONCAT44(fStack_24,local_28);
      fVar10 = 5.0;
      *(float *)(this + 0x68) = *(float *)(this + 0x68) + 5.0;
    }
    else {
      pBVar5 = (BoardEntity *)findClosestTarget(this);
      if (pBVar5 == (BoardEntity *)0x0) {
        *(ulong *)(this + 0x68) = CONCAT44(fStack_24,local_28);
        iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
        iVar2 = BoardTransforms::GridToBoardSpaceX(iVar2 + -1);
        fVar10 = (float)iVar2;
        *(float *)(this + 0x68) = *(float *)(this + 0x68) + fVar10;
      }
      else {
        uVar8 = PlantUltomato::getPositionForTarget((PlantUltomato *)this,pBVar5);
        uVar1 = CONCAT44(fVar10,uVar8);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                  ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x78),(RtWeakPtrBase *)&local_10)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
        *(undefined8 *)(this + 0x68) = uVar1;
      }
    }
    local_18 = Sexy::SexyVector2::operator-
                         ((SexyVector2 *)(this + 0x68),(SexyVector2 *)(this + 0x70));
    local_14 = fVar10;
    fVar7 = (float)DVec2::getLength((DVec2 *)&local_18);
    fVar11 = *(float *)(lVar3 + 0x2c8);
    fVar9 = (float)PVZ_Dt();
    local_10 = 0x3f800000;
    local_2c = (fVar9 * fVar11) / fVar7;
    pfVar6 = eastl::min_alt<float>(&local_2c,(float *)&local_10);
    local_10 = Sexy::SexyVector2::operator*((SexyVector2 *)&local_18,*pfVar6);
    local_c = fVar10;
    Sexy::TPoint<float>::operator+=((TPoint<float> *)(this + 0x70),(TPoint *)&local_10);
    if (5.0 <= fVar7) {
      this_00 = (StandaloneEffect *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x90));
      StandaloneEffect::SetVisibility(this_00,false);
    }
    else if (*(int *)(this + 0x54) == 2) {
      setBeamState(this,0);
    }
    else if ((pBVar5 != (BoardEntity *)0x0) && (*(int *)(this + 0x54) == 1)) {
      positionBeamHitForBlasting((SexyVector2 *)this);
      fVar7 = *(float *)(this + 0xac);
      fVar10 = (float)PVZ_T();
      if (fVar7 < fVar10) {
        damageTarget((BoardEntity *)this,SUB81(pBVar5,0));
        *(float *)(this + 0xac) = *(float *)(this + 0xac) + *(float *)(lVar3 + 0x2fc);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

