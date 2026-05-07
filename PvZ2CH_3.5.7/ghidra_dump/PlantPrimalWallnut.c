// Class: PlantPrimalWallnut


/* PlantPrimalWallnut::~PlantPrimalWallnut() */

void __thiscall PlantPrimalWallnut::~PlantPrimalWallnut(PlantPrimalWallnut *this)

{
  *(undefined ***)this = &PTR_GetClass_067f9090;
  PlantWallnut::~PlantWallnut((PlantWallnut *)this);
  return;
}


/* PlantPrimalWallnut::~PlantPrimalWallnut() */

void __thiscall PlantPrimalWallnut::~PlantPrimalWallnut(PlantPrimalWallnut *this)

{
  ~PlantPrimalWallnut(this);
  AK::FreeHook(this);
  return;
}


/* PlantPrimalWallnut::IsDelayDestroy() */

void __thiscall PlantPrimalWallnut::IsDelayDestroy(PlantPrimalWallnut *this)

{
  FUN_041843d8(this[0x30]);
  return;
}


/* PlantPrimalWallnut::CanApplyPlantfood() */

byte __thiscall PlantPrimalWallnut::CanApplyPlantfood(PlantPrimalWallnut *this)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = PlantWallnut::CanApplyPlantfood((PlantWallnut *)this);
  bVar2 = 0;
  if (cVar1 != '\0') {
    bVar2 = FUN_041843d8(this[0x30]);
    bVar2 = bVar2 ^ 1;
  }
  return bVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPrimalWallnut::ApplyPlantfood() */

void __thiscall PlantPrimalWallnut::ApplyPlantfood(PlantPrimalWallnut *this)

{
  string *psVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantWallnut::ApplyPlantfood((PlantWallnut *)this);
  psVar1 = (string *)Plant::GetAttachedEffectManager(*(Plant **)(this + 0x10));
  std::string::string(asStack_10,"growup");
  GameObjectDictionary::Remove(psVar1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPrimalWallnut::StaticClassInit() */

void PlantPrimalWallnut::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantPrimalWallnut");
    (*pcVar2)(plVar1,asStack_10,FUN_0418537c,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPrimalWallnut::StaticGetClass() */

long * PlantPrimalWallnut::StaticGetClass(void)

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
  uVar2 = PlantWallnut::StaticGetClass();
  (*pcVar3)(plVar1,"PlantPrimalWallnut",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPrimalWallnut::GetClass() const */

long * PlantPrimalWallnut::GetClass(void)

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
  uVar2 = PlantWallnut::StaticGetClass();
  (*pcVar3)(plVar1,"PlantPrimalWallnut",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPrimalWallnut::IsOutofBoard() */

void __thiscall PlantPrimalWallnut::IsOutofBoard(PlantPrimalWallnut *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Board *this_00;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
  iVar4 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
  Sexy::Point::Point(aPStack_10,iVar4,iVar3);
  if (((((gLawnApp == 0) || (this_00 = *(Board **)(gLawnApp + 0x9f0), this_00 == (Board *)0x0)) ||
       ((cVar1 = Board::IsPitOfDoom(this_00,aPStack_10), cVar1 == '\0' &&
        ((cVar1 = Board::IsSky(this_00,aPStack_10), cVar1 == '\0' &&
         (cVar1 = Board::IsShallowWater(this_00,aPStack_10), cVar1 == '\0')))))) && (-1 < iVar3)) &&
     ((iVar5 = BoardConstants::NUMBER_OF_ROWS(), iVar3 < iVar5 && (-1 < iVar4)))) {
    iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
    bVar2 = iVar3 < iVar4;
  }
  else {
    bVar2 = true;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* PlantPrimalWallnut::PlantPrimalWallnut() */

void __thiscall PlantPrimalWallnut::PlantPrimalWallnut(PlantPrimalWallnut *this)

{
  PlantWallnut::PlantWallnut((PlantWallnut *)this);
  *(undefined ***)this = &PTR_GetClass_067f9090;
  return;
}


/* PlantPrimalWallnut::StaticNew() */

PlantPrimalWallnut * PlantPrimalWallnut::StaticNew(void)

{
  PlantPrimalWallnut *this;
  
  this = ::operator_new(0x60);
  PlantPrimalWallnut(this);
  return this;
}


/* PlantPrimalWallnut::TakeSmashAttack(Sexy::RtWeakPtr<Zombie>) */

void __thiscall PlantPrimalWallnut::TakeSmashAttack(PlantPrimalWallnut *this,RtWeakPtr *param_2)

{
  char cVar1;
  BoardEntity *pBVar2;
  
  cVar1 = Plant::IsInvincible(*(Plant **)(this + 0x10),false);
  if (cVar1 == '\0') {
    pBVar2 = (BoardEntity *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
    Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(param_2);
    cVar1 = Shield::TakeSmashAttack(pBVar2);
    if (cVar1 == '\0') {
      Plant::KillPlant(*(Plant **)(this + 0x10),1,0,1);
      return;
    }
  }
  return;
}


/* PlantPrimalWallnut::CanBeTargeted() */

bool __thiscall PlantPrimalWallnut::CanBeTargeted(PlantPrimalWallnut *this)

{
  char cVar1;
  int iVar2;
  RtObject *this_00;
  PlantAnimRig_PrimalWallnut *this_01;
  
  this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  this_01 = Sexy::RtObject::Cast<PlantAnimRig_PrimalWallnut>(this_00);
  if (((this_01 != (PlantAnimRig_PrimalWallnut *)0x0) &&
      (cVar1 = PlantFramework::CanBeTargeted(), cVar1 != '\0')) &&
     (iVar2 = Effect_AngerFlame::GetFlameCol((Effect_AngerFlame *)this_01), iVar2 != 0xf)) {
    iVar2 = Effect_AngerFlame::GetFlameCol((Effect_AngerFlame *)this_01);
    return iVar2 != 0x12;
  }
  return false;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPrimalWallnut::Initialize() */

void __thiscall PlantPrimalWallnut::Initialize(PlantPrimalWallnut *this)

{
  char cVar1;
  long lVar2;
  float *pfVar3;
  float fVar4;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantWallnut::Initialize((PlantWallnut *)this);
  cVar1 = Plant::IsInHomeWorld();
  if (cVar1 != '\0') {
    fVar4 = (float)Plant::GetMaxHealth(*(Plant **)(this + 0x10));
    lVar2 = FUN_041858b8(*(undefined8 *)(this + 0x10));
    local_c = 100.0;
    pfVar3 = eastl::min_alt<float>((float *)(lVar2 + 0x2c0),&local_c);
    lVar2 = *(long *)(this + 0x10);
    fVar4 = (*pfVar3 * 0.01 + 1.0) * fVar4;
    *(float *)(lVar2 + 0xd8) = fVar4;
    *(float *)(lVar2 + 0xdc) = fVar4;
  }
  this[0x58] = (PlantPrimalWallnut)0x0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPrimalWallnut::BirthMiniWallnutHP() */

void __thiscall PlantPrimalWallnut::BirthMiniWallnutHP(PlantPrimalWallnut *this)

{
  char cVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  int local_14;
  int local_10 [2];
  long local_8;
  
  iVar4 = 0;
  local_8 = ___stack_chk_guard;
  cVar1 = Plant::IsThrownAway(*(Plant **)(this + 0x10));
  if (cVar1 == '\0') {
    lVar2 = FUN_041858b8(*(undefined8 *)(this + 0x10));
    uVar5 = *(undefined8 *)(lVar2 + 0x2f0);
    local_14 = FUN_0418441c(uVar5,*(undefined8 *)(lVar2 + 0x2f8));
    local_14 = local_14 + -1;
    local_10[1] = 0;
    local_10[0] = FUN_041843a8(*(undefined8 *)(this + 0x10));
    local_10[0] = local_10[0] + -1;
    piVar3 = eastl::min_alt<int>(&local_14,local_10);
    piVar3 = eastl::max_alt<int>(local_10 + 1,piVar3);
    piVar3 = (int *)FUN_04184428(uVar5,(long)*piVar3);
    iVar4 = *piVar3;
    cVar1 = FUN_041843d8(this[0x30]);
    if ((((cVar1 == '\0') && (cVar1 = IsOutofBoard(this), cVar1 == '\0')) && (gLawnApp != 0)) &&
       ((*(long *)(gLawnApp + 0x9f0) != 0 && (0 < iVar4)))) {
      if (*(long *)(*(long *)(this + 0x10) + 0x108) == 0x40000000000) {
        iVar4 = 0;
      }
    }
    else {
      iVar4 = 0;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPrimalWallnut::sendCureProjectile() */

void __thiscall PlantPrimalWallnut::sendCureProjectile(PlantPrimalWallnut *this)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  Board *pBVar6;
  float fVar4;
  undefined4 uVar5;
  RtMixedPtrBase aRStack_30 [8];
  string asStack_28 [8];
  wstring awStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  std::string::string(asStack_28,"PrimalWallnutBullet");
  Sexy::ToWString(asStack_28);
  Sexy::RtName::RtName(aRStack_18,awStack_20);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_30,uVar2,0xc,aRStack_18);
  Sexy::RtName::~RtName(aRStack_18);
  FUN_05476c50(awStack_20);
  std::string::~string(asStack_28);
  nop();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_30);
  if (cVar1 != '\0') {
    puVar3 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             **)(this + 0x10));
    fVar4 = *(float *)((long)puVar3 + 4);
                    /* WARNING: Load size is inaccurate */
    pBVar6._0_4_ = *puVar3;
    uVar5 = *(undefined4 *)(puVar3 + 1);
    uVar2 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_30);
    Board::AddProjectile
              (pBVar6._0_4_,fVar4 - 30.0,uVar5,uVar2,aRStack_18,*(undefined8 *)(this + 0x10),0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPrimalWallnut::OnAnimCommand(std::string const&, std::string const&) */

void PlantPrimalWallnut::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  GameObjectDictionary *this;
  AttachedEffect *this_00;
  ResourceInfo *pRVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  code *pcVar6;
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_2,"use_effects");
  if (bVar1) {
    this = (GameObjectDictionary *)Plant::GetAttachedEffectManager(*(Plant **)(param_1 + 0x10));
    std::string::string(asStack_18,"cureup");
    this_00 = (AttachedEffect *)GameObjectDictionary::FindOrCreate(this,asStack_18);
    std::string::~string(asStack_18);
    nop();
    std::string::string(asStack_20,"POPANIM_EFFECTS_PRIMAL_WALLNUT_CUREUP");
    GetPAMByName(asStack_20);
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_18);
    AttachedEffect::InitializeWithAnimation(this_00,(PopAnim *)pRVar2);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    std::string::~string(asStack_20);
    nop();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    pcVar6 = *(code **)(*(long *)this_00 + 0x18);
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,0.0,-30.0,0.0);
    (*pcVar6)(this_00,uVar4,asStack_18,1);
    std::string::string(asStack_18,"effects");
    AttachedEffect::PlayAnimAndDestroy(this_00,asStack_18,2);
    std::string::~string(asStack_18);
    nop();
    plVar5 = *(long **)(param_1 + 0x10);
    pcVar6 = *(code **)(*plVar5 + 0x1e0);
    lVar3 = FUN_041858b8(plVar5);
    (*pcVar6)(plVar5,(int)*(float *)(lVar3 + 0x2ec),0);
    bVar1 = true;
  }
  else {
    bVar1 = std::operator==(param_2,"use_bullet");
    if (bVar1) {
      sendCureProjectile((PlantPrimalWallnut *)param_1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPrimalWallnut::applySmashDamage(Sexy::RtWeakPtr<Zombie>) */

void __thiscall
PlantPrimalWallnut::applySmashDamage
          (PlantPrimalWallnut *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  long lVar1;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DamageInfo::DamageInfo((DamageInfo *)&local_68);
  local_68 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  lVar1 = FUN_041858b8(*(undefined8 *)(this + 0x10));
  local_60 = *(undefined4 *)(lVar1 + 0x2e0);
  local_58 = 0x200000;
  (**(code **)(**(long **)(this + 0x10) + 0x110))(*(long **)(this + 0x10),(DamageInfo *)&local_68);
  DamageInfo::~DamageInfo((DamageInfo *)&local_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPrimalWallnut::setState(unsigned int) */

void __thiscall PlantPrimalWallnut::setState(PlantPrimalWallnut *this,uint param_1)

{
  long lVar1;
  GameObjectDictionary *this_00;
  AttachedEffect *this_01;
  ResourceInfo *pRVar2;
  undefined8 uVar3;
  code *pcVar4;
  string asStack_38 [8];
  string asStack_30 [16];
  PIInterpolator aPStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(uint *)(*(long *)(this + 0x10) + 200) != param_1) &&
     (*(uint *)(*(long *)(this + 0x10) + 200) = param_1, param_1 == 0xb)) {
    this[0x58] = (PlantPrimalWallnut)0x0;
    *(undefined4 *)(this + 0x50) = 0;
    *(undefined4 *)(this + 0x54) = 0;
    Sexy::PIInterpolator::PIInterpolator(aPStack_20);
    std::string::string(asStack_30,"grow_up1_1");
    AnimationSequence::AddSingleAnimation(aPStack_20,asStack_30,0);
    std::string::~string(asStack_30);
    nop();
    std::string::string(asStack_30,"growup1_2");
    lVar1 = FUN_041858b8(*(undefined8 *)(this + 0x10));
    AnimationSequence::AddLoopingAnimation(*(float *)(lVar1 + 0x2e8) * 0.4,aPStack_20,asStack_30,0);
    std::string::~string(asStack_30);
    nop();
    std::string::string(asStack_30,"growup2_1");
    AnimationSequence::AddSingleAnimation(aPStack_20,asStack_30,0);
    std::string::~string(asStack_30);
    nop();
    std::string::string(asStack_30,"grow_up2_2");
    PVZ_EOT();
    AnimationSequence::AddLoopingAnimation(aPStack_20,asStack_30,0);
    std::string::~string(asStack_30);
    nop();
    this_00 = (GameObjectDictionary *)Plant::GetAttachedEffectManager(*(Plant **)(this + 0x10));
    std::string::string(asStack_30,"growup");
    this_01 = (AttachedEffect *)GameObjectDictionary::FindOrCreate(this_00,asStack_30);
    std::string::~string(asStack_30);
    nop();
    std::string::string(asStack_38,"POPANIM_EFFECTS_PRIMAL_WALLNUT_GROWUP");
    GetPAMByName(asStack_38);
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_30);
    AttachedEffect::InitializeWithAnimation(this_01,(PopAnim *)pRVar2);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_30);
    std::string::~string(asStack_38);
    nop();
    uVar3 = *(undefined8 *)(this + 0x10);
    pcVar4 = *(code **)(*(long *)this_01 + 0x18);
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_30,-5.0,-80.0,0.0);
    (*pcVar4)(this_01,uVar3,asStack_30,1);
    AttachedEffect::PlayAnimSequenceAndDestroy(this_01,(AnimationSequence *)aPStack_20);
    AnimationSequence::~AnimationSequence((AnimationSequence *)aPStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPrimalWallnut::onKilled(bool) */

void PlantPrimalWallnut::onKilled(bool param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  PlantPrimalWallnut *this;
  RtObject *this_00;
  PlantAnimRig_PrimalWallnut *this_01;
  string *psVar4;
  UIEasyButtonWidget *this_02;
  Plant *pPVar5;
  float fVar6;
  float fVar7;
  string asStack_10 [8];
  long local_8;
  
  this = (PlantPrimalWallnut *)(ulong)param_1;
  local_8 = ___stack_chk_guard;
  pPVar5 = *(Plant **)(this + 0x10);
  std::string::string(asStack_10,"NoDiedMsg");
  cVar1 = Plant::HasTag(pPVar5,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (cVar1 == '\0') {
    pPVar5 = *(Plant **)(this + 0x10);
    std::string::string(asStack_10,"xiu");
    cVar1 = Plant::HasTag(pPVar5,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if ((cVar1 == '\0') && (iVar2 = BirthMiniWallnutHP(this), 0 < iVar2)) {
      iVar3 = GeneEnhancement::GetGeneLevel(0x11da5);
      if ((iVar3 < 1) || (cVar1 = GeneEnhancement::IsGeneLocked(0x11da5), cVar1 != '\0')) {
        fVar6 = (float)PVZ_T();
        fVar7 = (float)PVZ_EOT();
        *(float *)(this + 0x5c) = fVar7 + fVar6;
      }
      else {
        fVar6 = (float)PVZ_T();
        fVar7 = (float)Plant::GetGeneSkillBoost(*(Plant **)(this + 0x10));
        *(float *)(this + 0x5c) = fVar7 + fVar6;
      }
      FUN_041843d0(this + 0x30,1);
      this_02 = *(UIEasyButtonWidget **)(this + 0x10);
      *(float *)(this_02 + 0xd8) = (float)iVar2;
      *(float *)(this_02 + 0xdc) = (float)iVar2;
      this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(this_02);
      this_01 = Sexy::RtObject::Cast<PlantAnimRig_PrimalWallnut>(this_00);
      if (this_01 != (PlantAnimRig_PrimalWallnut *)0x0) {
        PlantAnimRig_PrimalWallnut::PlayBabyIn(this_01);
      }
      if (*(int *)(*(Plant **)(this + 0x10) + 200) != 4) {
        psVar4 = (string *)Plant::GetAttachedEffectManager(*(Plant **)(this + 0x10));
        std::string::string(asStack_10,"growup");
        GameObjectDictionary::Remove(psVar4);
        std::string::~string(asStack_10);
        nop();
        setState(this,4);
      }
    }
    else {
      FUN_041843d0(this + 0x30,0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPrimalWallnut::OnAnimStopped(std::string const&) */

void PlantPrimalWallnut::OnAnimStopped(string *param_1)

{
  RtObject *this;
  PlantAnimRig_PrimalWallnut *pPVar1;
  
  setState((PlantPrimalWallnut *)param_1,4);
  this = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_1 + 0x10));
  pPVar1 = Sexy::RtObject::Cast<PlantAnimRig_PrimalWallnut>(this);
  if (pPVar1 != (PlantAnimRig_PrimalWallnut *)0x0) {
    (**(code **)(*(long *)pPVar1 + 0x118))();
  }
  param_1[0x58] = (string)0x0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPrimalWallnut::UpdateActions() */

void __thiscall PlantPrimalWallnut::UpdateActions(PlantPrimalWallnut *this)

{
  char cVar1;
  long lVar2;
  string *psVar3;
  RtObject *pRVar4;
  PlantAnimRig_PrimalWallnut *pPVar5;
  float *pfVar6;
  Shield *this_00;
  Plant *this_01;
  UIEasyButtonWidget *this_02;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float local_50 [6];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(*(long *)(this + 0x10) + 200) != 4) {
    if ((*(int *)(*(long *)(this + 0x10) + 200) == 0xb) && (this[0x58] == (PlantPrimalWallnut)0x0))
    {
      fVar7 = (float)PVZ_Dt();
      fVar9 = *(float *)(this + 0x54);
      *(float *)(this + 0x54) = fVar7 + fVar9;
      lVar2 = FUN_041858b8(*(undefined8 *)(this + 0x10));
      if (*(float *)(lVar2 + 0x2e8) <= fVar7 + fVar9) {
        psVar3 = (string *)Plant::GetAttachedEffectManager(*(Plant **)(this + 0x10));
        std::string::string((string *)local_50,"growup");
        GameObjectDictionary::Remove(psVar3);
        std::string::~string((string *)local_50);
        nop();
        pRVar4 = (RtObject *)
                 UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
        pPVar5 = Sexy::RtObject::Cast<PlantAnimRig_PrimalWallnut>(pRVar4);
        if (pPVar5 != (PlantAnimRig_PrimalWallnut *)0x0) {
          this[0x58] = (PlantPrimalWallnut)0x1;
          *(undefined4 *)(this + 0x50) = 0;
          *(undefined4 *)(this + 0x54) = 0;
          Sexy::
          MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                    ((ReceivedDataCallback *)this,OnAnimStopped);
          Sexy::Delegate1<std::string_const&>::
          Delegate1<PlantPrimalWallnut,void(PlantPrimalWallnut::*)(std::string_const&)>
                    (aDStack_38,(string *)local_50);
          PlantAnimRig_PrimalWallnut::PlayCure(pPVar5,aDStack_38);
        }
      }
    }
    goto LAB_04186444;
  }
  cVar1 = FUN_041843b0();
  if (cVar1 == '\0') {
LAB_041865fc:
    cVar1 = FUN_041843d8(this[0x30]);
    if (cVar1 == '\0') goto LAB_04186444;
  }
  else {
    cVar1 = FUN_041843d8(this[0x30]);
    if (cVar1 == '\0') {
      this_00 = (Shield *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
      cVar1 = Shield::hasShield(this_00);
      if (cVar1 == '\0') {
        fVar7 = (float)PVZ_Dt();
        fVar9 = *(float *)(this + 0x50);
        *(float *)(this + 0x50) = fVar7 + fVar9;
        lVar2 = FUN_041858b8(*(undefined8 *)(this + 0x10));
        if (*(float *)(lVar2 + 0x2e4) <= fVar7 + fVar9) {
          setState(this,0xb);
        }
        goto LAB_04186444;
      }
      goto LAB_041865fc;
    }
  }
  fVar7 = (float)PVZ_T();
  if (*(float *)(this + 0x5c) < fVar7) {
    FUN_041843d0(this + 0x30,0);
    cVar1 = Plant::IsInHomeWorld();
    this_01 = *(Plant **)(this + 0x10);
    if (cVar1 == '\0') {
      *(undefined4 *)(this_01 + 0xdc) = 0;
      uVar8 = Plant::GetMaxHealth(this_01);
      this_02 = *(UIEasyButtonWidget **)(this + 0x10);
      *(undefined4 *)(this_02 + 0xd8) = uVar8;
      *(undefined4 *)(this_02 + 0xdc) = uVar8;
    }
    else {
      *(undefined4 *)(this_01 + 0xdc) = 0;
      fVar7 = (float)Plant::GetMaxHealth(this_01);
      lVar2 = FUN_041858b8(*(undefined8 *)(this + 0x10));
      local_50[0] = 100.0;
      pfVar6 = eastl::min_alt<float>((float *)(lVar2 + 0x2c0),local_50);
      this_02 = *(UIEasyButtonWidget **)(this + 0x10);
      fVar7 = (*pfVar6 * 0.01 + 1.0) * fVar7;
      *(float *)(this_02 + 0xd8) = fVar7;
      *(float *)(this_02 + 0xdc) = fVar7;
    }
    pRVar4 = (RtObject *)UIEasyButtonWidget::GetImageNormal(this_02);
    pPVar5 = Sexy::RtObject::Cast<PlantAnimRig_PrimalWallnut>(pRVar4);
    if (pPVar5 != (PlantAnimRig_PrimalWallnut *)0x0) {
      PlantAnimRig_PrimalWallnut::PlayGrowUp(pPVar5);
    }
  }
LAB_04186444:
  PlantWallnut::UpdateActions((PlantWallnut *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

