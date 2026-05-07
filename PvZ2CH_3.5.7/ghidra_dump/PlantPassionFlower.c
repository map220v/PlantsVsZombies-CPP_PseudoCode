// Class: PlantPassionFlower


/* PlantPassionFlower::Initialize() */

void __thiscall PlantPassionFlower::Initialize(PlantPassionFlower *this)

{
  this[0x28] = (PlantPassionFlower)0x0;
  this[0x29] = (PlantPassionFlower)0x0;
  this[0x2a] = (PlantPassionFlower)0x0;
  this[0x2b] = (PlantPassionFlower)0x0;
  PlantFramework::Initialize((PlantFramework *)this);
  return;
}


/* PlantPassionFlower::ApplyPlantfood() */

void __thiscall PlantPassionFlower::ApplyPlantfood(PlantPassionFlower *this)

{
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  this[0x28] = (PlantPassionFlower)0x0;
  return;
}


/* PlantPassionFlower::CancelPlantfood() */

void __thiscall PlantPassionFlower::CancelPlantfood(PlantPassionFlower *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  this[0x28] = (PlantPassionFlower)0x0;
  return;
}


/* PlantPassionFlower::PlantPassionFlower() */

void __thiscall PlantPassionFlower::PlantPassionFlower(PlantPassionFlower *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  this[0x28] = (PlantPassionFlower)0x0;
  *(undefined ***)this = &PTR_GetClass_066d44c0;
  return;
}


/* PlantPassionFlower::StaticNew() */

PlantPassionFlower * PlantPassionFlower::StaticNew(void)

{
  PlantPassionFlower *this;
  
  this = ::operator_new(0x30);
  PlantPassionFlower(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPassionFlower::StaticClassInit() */

void PlantPassionFlower::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantPassionFlower");
    (*pcVar2)(plVar1,asStack_10,FUN_03963170,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPassionFlower::StaticGetClass() */

long * PlantPassionFlower::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantPassionFlower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPassionFlower::GetClass() const */

long * PlantPassionFlower::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantPassionFlower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPassionFlower::getFoodDegree(Sexy::RtWeakPtr<Zombie>, Sexy::SexyVector3 const&) */

float __thiscall
PlantPassionFlower::getFoodDegree(PlantPassionFlower *this,undefined8 param_2,float *param_3)

{
  float *pfVar1;
  float fVar2;
  
  fVar2 = 0.0;
  if (this[0x2a] != (PlantPassionFlower)0x0) {
    pfVar1 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      **)(this + 0x10));
    fVar2 = 0.0;
    if (*pfVar1 < *param_3) {
      fVar2 = atan2f(param_3[1] - pfVar1[1],*param_3 - *pfVar1);
      fVar2 = -(fVar2 * 57.295776);
    }
  }
  return fVar2;
}


/* PlantPassionFlower::~PlantPassionFlower() */

void __thiscall PlantPassionFlower::~PlantPassionFlower(PlantPassionFlower *this)

{
  *(undefined ***)this = &PTR_GetClass_066d44c0;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantPassionFlower::~PlantPassionFlower() */

void __thiscall PlantPassionFlower::~PlantPassionFlower(PlantPassionFlower *this)

{
  ~PlantPassionFlower(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPassionFlower::superFire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantPassionFlower::superFire
          (PlantPassionFlower *this,RtWeakPtrBase *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  PassionFlowerProjectile *this_00;
  Plant *pPVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Plant::CanFindTarget(*(undefined8 *)(this + 0x10),1);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    pPVar4 = *(Plant **)(this + 0x10);
    *(undefined4 *)(pPVar4 + 0x150) = 1;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
    uVar3 = Plant::Fire(pPVar4,aRStack_10,param_3,param_4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    nop();
    iVar2 = FUN_03962b6c(*(undefined4 *)(*(long *)(this + 0x10) + 0x50));
    PassionFlowerProjectile::SetLevelAttack(this_00,iVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPassionFlower::getDegree(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall PlantPassionFlower::getDegree(PlantPassionFlower *this,RtMixedPtrBase *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 *puVar4;
  float *pfVar5;
  SharkMinion *this_01;
  Point *extraout_x1;
  float fVar6;
  float fVar7;
  BoardTransforms aBStack_38 [8];
  int local_30;
  int local_2c;
  undefined8 local_28;
  float local_20;
  float local_18;
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if (cVar1 != '\0') {
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    puVar4 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this_00);
    local_28 = *puVar4;
    local_20 = *(float *)(puVar4 + 1);
    BoardTransforms::BoardSpaceToGridUnbounded
              ((BoardTransforms *)&local_28,(SexyVector3 *)(ulong)(uint)local_20);
    BoardTransforms::GridToBoardSpaceUnbounded(aBStack_38,extraout_x1);
    EATextSquish::Vec3::Vec3((Vec3 *)&local_18,(float)local_30,(float)local_2c,local_20);
    pfVar5 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      **)(this + 0x10));
    fVar6 = *pfVar5;
    fVar7 = pfVar5[1];
    this_01 = (SharkMinion *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    iVar2 = SharkMinion::getRow(this_01);
    iVar3 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
    if ((iVar2 != iVar3) && (fVar6 < local_18)) {
      fVar6 = atan2f(local_14 - fVar7,local_18 - fVar6);
      fVar6 = -(fVar6 * 57.295776);
      goto LAB_03963624;
    }
  }
  fVar6 = 0.0;
LAB_03963624:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPassionFlower::normalFire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantPassionFlower::normalFire
          (PlantPassionFlower *this,RtWeakPtrBase *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  SexyTransform2D *pSVar2;
  PassionFlowerProjectile *this_00;
  SexyTransform2D *this_01;
  Plant *pPVar3;
  float fVar4;
  float extraout_s0;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [48];
  long local_8;
  
  pPVar3 = *(Plant **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  if (this[0x2b] != (PlantPassionFlower)0x0) {
    *(undefined4 *)(pPVar3 + 0x150) = 2;
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,param_2);
  pSVar2 = (SexyTransform2D *)Plant::Fire(pPVar3,aRStack_38,param_3,param_4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  nop();
  if (this[0x2b] == (PlantPassionFlower)0x0) {
    Plant::FindTarget(aRStack_38,*(long *)(this + 0x10),
                      *(undefined4 *)(*(long *)(this + 0x10) + 0x150));
    fVar4 = (float)getDegree(this,aRStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    this_01 = (SexyTransform2D *)Sexy::SexyMath::DegToRad(fVar4);
    Sexy::SexyTransform2D::CreateRotation(this_01,extraout_s0);
    FUN_03962b64(extraout_s0,pSVar2 + 0xc4);
    Projectile::ApplyRotationToVelocity(pSVar2);
  }
  else {
    PassionFlowerProjectile::setShouldStun(this_00,true);
  }
  iVar1 = FUN_03962b6c(*(undefined4 *)(*(long *)(this + 0x10) + 0x50));
  PassionFlowerProjectile::SetLevelAttack(this_00,iVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pSVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPassionFlower::getFoodTargetPos(Sexy::RtWeakPtr<Zombie>) */

void __thiscall
PlantPassionFlower::getFoodTargetPos(PlantPassionFlower *this,RtMixedPtr<Sexy::Image> *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  float *pfVar8;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var9;
  float *pfVar10;
  undefined8 *puVar11;
  Point *extraout_x1;
  float fVar12;
  float fVar13;
  undefined8 local_38;
  int local_30;
  int local_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point((Point *)&local_38);
  cVar3 = Sexy::RtMixedPtr<Sexy::Image>::operator!(param_2);
  if ((cVar3 == '\0') &&
     (cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)param_2), cVar3 != '\0')) {
    p_Var9 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    pfVar8 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(p_Var9);
    pfVar10 = (float *)std::
                       _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       **)(this + 0x10));
    if (*pfVar8 != *pfVar10) goto LAB_03963898;
    p_Var9 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    puVar11 = (undefined8 *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost(p_Var9);
    local_18 = *puVar11;
    fVar13 = *(float *)(puVar11 + 1);
    local_10 = fVar13;
    BoardTransforms::BoardSpaceToGridUnbounded
              ((BoardTransforms *)&local_18,(SexyVector3 *)(ulong)(uint)fVar13);
    local_38 = local_28;
    uVar1 = local_38;
    local_38._0_4_ = (int)local_28;
    iVar4 = (int)local_38;
    local_38 = uVar1;
    iVar6 = BoardConstants::NUMBER_OF_COLUMNS();
    if (iVar6 + -1 <= iVar4) goto LAB_03963a28;
LAB_039638d4:
    if ((int)local_38 < 1) goto LAB_03963a44;
LAB_039638e0:
    iVar4 = local_38._4_4_;
    iVar6 = BoardConstants::NUMBER_OF_ROWS();
    if (iVar6 + -1 <= iVar4) goto LAB_03963a64;
  }
  else {
LAB_03963898:
    iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
    local_38 = CONCAT44(local_38._4_4_,iVar4 + -1);
    uVar5 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
    local_38 = CONCAT44(uVar5,(int)local_38);
    lVar7 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            **)(this + 0x10));
    iVar4 = (int)local_38;
    fVar13 = *(float *)(lVar7 + 8);
    iVar6 = BoardConstants::NUMBER_OF_COLUMNS();
    if (iVar4 < iVar6 + -1) goto LAB_039638d4;
LAB_03963a28:
    iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
    local_38 = CONCAT44(local_38._4_4_,iVar4 + -2);
    this[0x2a] = (PlantPassionFlower)0x1;
    if (0 < iVar4 + -2) goto LAB_039638e0;
LAB_03963a44:
    this[0x2a] = (PlantPassionFlower)0x1;
    iVar4 = local_38._4_4_;
    local_38 = CONCAT44(local_38._4_4_,1);
    iVar6 = BoardConstants::NUMBER_OF_ROWS();
    if (iVar6 + -1 <= iVar4) {
LAB_03963a64:
      iVar4 = BoardConstants::NUMBER_OF_ROWS();
      local_38 = CONCAT44(iVar4 + -2,(int)local_38);
      this[0x2a] = (PlantPassionFlower)0x1;
      iVar4 = iVar4 + -2;
      goto joined_r0x03963a7c;
    }
  }
  iVar4 = local_38._4_4_;
joined_r0x03963a7c:
  if (iVar4 < 1) {
    local_38 = CONCAT44(1,(int)local_38);
    this[0x2a] = (PlantPassionFlower)0x1;
  }
  pfVar8 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  fVar12 = *pfVar8;
  iVar4 = BoardTransforms::GridToBoardSpaceXUnbounded((int)local_38);
  if (iVar4 + -1 <= (int)fVar12) {
    local_38 = CONCAT44(local_38._4_4_,(int)local_38 + 1);
  }
  BoardTransforms::GridToBoardSpaceUnbounded((BoardTransforms *)&local_38,extraout_x1);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_28,(float)local_30,(float)local_2c,fVar13);
  local_18 = local_28;
  uVar1 = local_18;
  local_10 = (float)local_20;
  local_18._0_4_ = (undefined4)local_28;
  uVar5 = (undefined4)local_18;
  local_18._4_4_ = (undefined4)((ulong)local_28 >> 0x20);
  uVar2 = local_18._4_4_;
  if (local_8 != ___stack_chk_guard) {
    local_18 = uVar1;
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5,uVar2,local_20);
  }
  return;
}


/* PlantPassionFlower::UpdatePlantfood() */

void __thiscall PlantPassionFlower::UpdatePlantfood(PlantPassionFlower *this)

{
  char cVar1;
  PopAnimRig *this_00;
  
  this_00 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  cVar1 = PopAnimRig::IsPlayingAnything(this_00);
  if (cVar1 == '\0') {
    (**(code **)(*(long *)this + 0x228))(this);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPassionFlower::PlaySuperAnimation() */

void __thiscall PlantPassionFlower::PlaySuperAnimation(PlantPassionFlower *this)

{
  int iVar1;
  PopAnimRig *pPVar2;
  PlantAnimRig *pPVar3;
  undefined1 *__n;
  undefined1 auStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  __n = auStack_48;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"attack");
  nop();
  if (this[0x29] != (PlantPassionFlower)0x0) {
    std::string::append(asStack_40,"attack_3",(size_t)__n);
  }
  pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = PopAnimRig::PlayAndStop(pPVar2,asStack_40,0,aDStack_38);
  if (iVar1 == -1) {
    std::string::~string(asStack_40);
  }
  else {
    pPVar3 = (PlantAnimRig *)
             UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    PlantAnimRig::SetState(pPVar3,2);
    std::string::~string(asStack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPassionFlower::foodFire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantPassionFlower::foodFire
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,
               PlantPassionFlower *param_4,RtWeakPtrBase *param_5,undefined8 param_6,
               undefined8 param_7)

{
  char cVar1;
  int iVar2;
  long lVar3;
  SexyTransform2D *pSVar4;
  PassionFlowerProjectile *this;
  SexyTransform2D *this_00;
  Plant *pPVar5;
  float fVar6;
  float extraout_s0;
  RtWeakPtr<Sexy::SoundResource> aRStack_48 [8];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  long local_8;
  
  pPVar5 = *(Plant **)(param_4 + 0x10);
  *(undefined4 *)(pPVar5 + 0x150) = 3;
  local_8 = ___stack_chk_guard;
  cVar1 = Plant::GetAvatarEnable(pPVar5);
  if (cVar1 == '\0') {
    lVar3 = *(long *)(param_4 + 0x10);
  }
  else {
    lVar3 = *(long *)(param_4 + 0x10);
    *(undefined4 *)(lVar3 + 0x150) = 4;
  }
  FUN_03963c40(lVar3);
  pPVar5 = *(Plant **)(param_4 + 0x10);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_40,param_5);
  pSVar4 = (SexyTransform2D *)
           Plant::Fire(pPVar5,(RtWeakPtr<Sexy::SoundResource> *)&local_40,param_6,param_7);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  nop();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_48,param_5);
  local_40 = getFoodTargetPos(param_4,aRStack_48);
  local_3c = param_2;
  local_38 = param_3;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_48,param_5);
  fVar6 = (float)getFoodDegree(param_4,aRStack_48,(RtWeakPtr<Sexy::SoundResource> *)&local_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  PassionFlowerProjectile::setIsFoodProj(this,true);
  BoomerangRotateProjectile::SetCenterPosition
            ((BoomerangRotateProjectile *)this,(SexyVector3 *)&local_40);
  this_00 = (SexyTransform2D *)Sexy::SexyMath::DegToRad(fVar6);
  Sexy::SexyTransform2D::CreateRotation(this_00,extraout_s0);
  FUN_03962b64(extraout_s0,pSVar4 + 0xc4);
  Projectile::ApplyRotationToVelocity(pSVar4);
  iVar2 = FUN_03962b6c(*(undefined4 *)(*(long *)(param_4 + 0x10) + 0x50));
  PassionFlowerProjectile::SetLevelAttack(this,iVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pSVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPassionFlower::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantPassionFlower::Fire
          (PlantPassionFlower *this,RtWeakPtr<Zombie> *param_2,undefined4 param_3,undefined4 param_4
          )

{
  char cVar1;
  undefined8 uVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if (cVar1 == '\0') {
    Sexy::RtWeakPtr<Zombie>::GetPtr(param_2);
    if (this[0x29] == (PlantPassionFlower)0x0) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_2);
      uVar2 = normalFire(this,aRStack_10,param_3,param_4);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
    else {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_2);
      uVar2 = superFire(this,aRStack_10,param_3,param_4);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
  }
  else {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_2);
    uVar2 = foodFire(this,aRStack_10,param_3,param_4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPassionFlower::FindTargetAndFire(PlantWeapon) */

void PlantPassionFlower::FindTargetAndFire(PlantFramework *param_1)

{
  PlantFramework PVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = FUN_03963c40(*(undefined8 *)(param_1 + 0x10));
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  iVar3 = FUN_03962b70(uVar5);
  if (iVar3 == 5) {
    param_1[0x29] = (PlantFramework)0x0;
    fVar7 = (float)PlantFramework::Rand(param_1,1.0);
    fVar8 = *(float *)(lVar4 + 0x2c4);
    PlantFramework::FindTargetZombie(aRStack_10,param_1,3);
    Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    if (fVar8 < fVar7) goto LAB_03963fc8;
    param_1[0x29] = (PlantFramework)0x1;
    cVar2 = Plant::CanFindTarget(uVar5,1);
    if (cVar2 != '\0') {
      cVar2 = '\x01';
      PlaySuperAnimation((PlantPassionFlower *)param_1);
      goto LAB_03964034;
    }
  }
  else {
LAB_03963fc8:
    lVar4 = FUN_03963c40(uVar5);
    *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x150) = 0;
    fVar7 = (float)PlantFramework::Rand(param_1,1.0);
    lVar6 = *(long *)(param_1 + 0x10);
    iVar3 = FUN_03962b6c(*(undefined4 *)(lVar6 + 0x50));
    if (iVar3 == 2) {
      PVar1 = (PlantFramework)(fVar7 <= *(float *)(lVar4 + 0x2c8));
      param_1[0x2b] = PVar1;
      if (!(bool)PVar1) goto LAB_0396401c;
LAB_03964060:
      *(undefined4 *)(lVar6 + 0x150) = 2;
      cVar2 = Plant::CanFindTarget(lVar6);
    }
    else {
      fVar8 = 0.0;
      if (2 < iVar3) {
        fVar8 = *(float *)(lVar4 + 0x2cc);
      }
      param_1[0x2b] = (PlantFramework)(fVar7 <= fVar8);
      if (fVar7 <= fVar8) goto LAB_03964060;
LAB_0396401c:
      cVar2 = Plant::CanFindTarget(lVar6,*(undefined4 *)(lVar6 + 0x150));
    }
    if (cVar2 != '\0') {
      (**(code **)(*(long *)param_1 + 0x1a0))(param_1);
      goto LAB_03964034;
    }
  }
  cVar2 = '\0';
LAB_03964034:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar2);
  }
  return;
}

