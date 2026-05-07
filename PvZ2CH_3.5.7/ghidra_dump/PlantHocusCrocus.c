// Class: PlantHocusCrocus


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHocusCrocus::StaticClassInit() */

void PlantHocusCrocus::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantHocusCrocus");
    (*pcVar2)(plVar1,asStack_10,FUN_03b27bc0,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHocusCrocus::StaticGetClass() */

long * PlantHocusCrocus::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantHocusCrocus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantHocusCrocus::GetClass() const */

long * PlantHocusCrocus::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantHocusCrocus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHocusCrocus::createDownLevelFogEffect(Sexy::RtWeakPtr<Zombie>) */

void __thiscall
PlantHocusCrocus::createDownLevelFogEffect(undefined8 param_1,RtMixedPtrBase *param_2)

{
  char cVar1;
  int iVar2;
  Effect_PopAnim *this;
  ResourceInfo *pRVar3;
  long lVar4;
  BoardEntity *this_00;
  ulong uVar5;
  SharkMinion *this_01;
  int iVar6;
  float fVar7;
  float fVar8;
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if (cVar1 != '\0') {
    this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string(asStack_20,"POPANIM_EFFECTS_HOCUSCROCUS_DOWNLEVEL_EFFECT");
    GetPAMByName(asStack_20);
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
    iVar6 = 0;
    Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar3,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    std::string::~string(asStack_20);
    nop();
    Effect_PopAnim::SetCentered(this,true);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    fVar8 = *(float *)(lVar4 + 0x1c);
    fVar7 = (float)FUN_03b25828(*(undefined4 *)(lVar4 + 0x18),fVar8,*(undefined4 *)(lVar4 + 0x20));
    this_00 = (BoardEntity *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    uVar5 = BoardEntity::CalcColumnPosition(this_00);
    this_01 = (SharkMinion *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    iVar2 = SharkMinion::getRow(this_01);
    BoardTransforms::GridToBoardSpacePos((BoardTransforms *)(uVar5 & 0xffffffff),iVar2,iVar6);
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,fVar7,fVar8 - 30.0,0.0);
    StandaloneEffect::SetBoardSpaceOrigin
              ((StandaloneEffect *)this,(SexyVector3 *)aRStack_18,0x61e67);
    std::string::string((string *)aRStack_18,"fumeshroom_appear");
    Effect_PopAnim::PlaySingleAnimation(this,aRStack_18,0);
    std::string::~string((string *)aRStack_18);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHocusCrocus::PlantHocusCrocus() */

void __thiscall PlantHocusCrocus::PlantHocusCrocus(PlantHocusCrocus *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_0672df90;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  return;
}


/* PlantHocusCrocus::StaticNew() */

PlantHocusCrocus * PlantHocusCrocus::StaticNew(void)

{
  PlantHocusCrocus *this;
  
  this = ::operator_new(0x50);
  PlantHocusCrocus(this);
  return this;
}


/* PlantHocusCrocus::Initialize() */

void __thiscall PlantHocusCrocus::Initialize(PlantHocusCrocus *this)

{
  long lVar1;
  float fVar2;
  
  PlantFramework::Initialize((PlantFramework *)this);
  lVar1 = FUN_03b27300(*(undefined8 *)(this + 0x10));
  fVar2 = (float)PVZ_T();
  *(float *)(this + 0x40) = fVar2 + *(float *)(lVar1 + 0x2b8);
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 10;
  *(undefined4 *)(this + 0x44) = 0;
  this[0x48] = (PlantHocusCrocus)0x0;
  return;
}


/* PlantHocusCrocus::beginCasting() */

void __thiscall PlantHocusCrocus::beginCasting(PlantHocusCrocus *this)

{
  long lVar1;
  float fVar2;
  
  lVar1 = FUN_03b27300(*(undefined8 *)(this + 0x10));
  fVar2 = (float)PVZ_T();
  *(float *)(this + 0x40) = fVar2 + *(float *)(lVar1 + 700);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHocusCrocus::ApplyPlantfood() */

void __thiscall PlantHocusCrocus::ApplyPlantfood(PlantHocusCrocus *this)

{
  Plant *pPVar1;
  RtMixedPtr aRStack_f8 [8];
  RtId aRStack_f0 [8];
  string asStack_e8 [8];
  RtReflectionDelegate<Sexy::Delegate0> aRStack_e0 [72];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_98 [72];
  RtReflectionDelegate<Sexy::Delegate0> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate(aRStack_e0);
  pPVar1 = *(Plant **)(this + 0x10);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_f8);
  std::string::string(asStack_e8,"onPlantfoodLoopedCallback");
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate0> *)aRStack_98,aRStack_f0,asStack_e8);
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate(aRStack_50);
  Plant::EnablePlantfoodAnimation(pPVar1,aRStack_e0,aRStack_98,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_98);
  std::string::~string(asStack_e8);
  nop();
  Sexy::RtId::~RtId(aRStack_f0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_f8);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_e0);
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 5;
  beginCasting(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHocusCrocus::downZombieLevel(Sexy::RtWeakPtr<Zombie>) */

void __thiscall PlantHocusCrocus::downZombieLevel(undefined8 param_1,RtMixedPtrBase *param_2)

{
  char cVar1;
  int iVar2;
  Zombie *pZVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if (cVar1 != '\0') {
    pZVar3 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    cVar1 = Zombie::IsBoss(pZVar3);
    if (cVar1 == '\0') {
      pZVar3 = (Zombie *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      iVar2 = Zombie::GetSizeType(pZVar3);
      if (iVar2 != 2) {
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
        if (*(char *)(lVar4 + 0x7f4) == '\0') {
          lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2)
          ;
          *(undefined1 *)(lVar4 + 0x7f4) = 1;
          lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2)
          ;
          iVar2 = FUN_03b2568c(*(undefined4 *)(lVar4 + 0x50));
          iVar2 = iVar2 + -1;
          if (iVar2 < 1) {
            iVar2 = 1;
          }
          plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
          (**(code **)(*plVar5 + 0x198))(plVar5,iVar2);
          plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
          (**(code **)(*plVar5 + 0x430))(plVar5,0);
          lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2)
          ;
          fVar7 = (float)FUN_03b2569c(*(undefined4 *)(lVar4 + 0x284));
          lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2)
          ;
          fVar8 = (float)FUN_03b25698(*(undefined4 *)(lVar4 + 0x280));
          lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2)
          ;
          fVar9 = (float)FUN_03b256a4(*(undefined4 *)(lVar4 + 0x2ac));
          lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2)
          ;
          fVar10 = (float)FUN_03b256a0(*(undefined4 *)(lVar4 + 0x2a8));
          plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
          (**(code **)(*plVar5 + 0x9d8))();
          plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
          pcVar6 = *(code **)(*plVar5 + 0x110);
          Sexy::Point::Point(aPStack_78,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
          DamageInfo::DamageInfo
                    ((DamageInfo *)(((fVar9 + fVar7) - fVar8) - fVar10),local_70,local_6c,aDStack_68
                     ,0x400000000000,0,aPStack_78,0);
          (*pcVar6)(plVar5,aDStack_68);
          DamageInfo::~DamageInfo(aDStack_68);
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHocusCrocus::~PlantHocusCrocus() */

void __thiscall PlantHocusCrocus::~PlantHocusCrocus(PlantHocusCrocus *this)

{
  *(undefined ***)this = &PTR_GetClass_0672df90;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x28));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantHocusCrocus::~PlantHocusCrocus() */

void __thiscall PlantHocusCrocus::~PlantHocusCrocus(PlantHocusCrocus *this)

{
  ~PlantHocusCrocus(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHocusCrocus::canBeShrunkByHocusCrocus(Sexy::RtWeakPtr<Zombie>) */

void PlantHocusCrocus::canBeShrunkByHocusCrocus(RtWeakPtr<Sexy::ResourceInfo> *param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  RtObject *pRVar6;
  HocusCrocusProps *pHVar7;
  Zombie *pZVar8;
  ZombieZombossMech *pZVar9;
  ZombieGeneralBase *pZVar10;
  long lVar11;
  long *plVar12;
  string *psVar13;
  code *pcVar14;
  string asStack_30 [8];
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
  std::string::string(asStack_30,"HocusCrocusDefault");
  Sexy::ToWString(asStack_30);
  Sexy::RtName::RtName(aRStack_18,(wstring *)asStack_28);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_20,uVar5,5,aRStack_18);
  pRVar6 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  pHVar7 = Sexy::RtObject::Cast<HocusCrocusProps_const>(pRVar6);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  Sexy::RtName::~RtName(aRStack_18);
  FUN_05476c50(asStack_28);
  std::string::~string(asStack_30);
  nop();
  pZVar8 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
  uVar5 = operator|(1,8);
  uVar3 = operator|(uVar5,4);
  cVar1 = Zombie::MatchesAny(pZVar8,uVar3);
  if (cVar1 != '\0') {
    bVar2 = 0;
    goto LAB_03b28780;
  }
  uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
  cVar1 = Zombie::HasCondition(uVar5,0x3f);
  bVar2 = 0;
  if (cVar1 != '\0') goto LAB_03b28780;
  uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
  cVar1 = Zombie::HasCondition(uVar5,0x11);
  if (cVar1 != '\0') goto LAB_03b28780;
  uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
  cVar1 = Zombie::HasCondition(uVar5,0x40);
  if (cVar1 != '\0') goto LAB_03b28780;
  uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
  cVar1 = Zombie::HasCondition(uVar5,0x41);
  if (cVar1 != '\0') goto LAB_03b28780;
  uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
  cVar1 = Zombie::HasCondition(uVar5,0x42);
  if (cVar1 != '\0') goto LAB_03b28780;
  uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
  cVar1 = Zombie::HasCondition(uVar5,0x43);
  if (cVar1 != '\0') goto LAB_03b28780;
  uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
  cVar1 = Zombie::HasCondition(uVar5,0x44);
  if (cVar1 != '\0') goto LAB_03b28780;
  uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
  cVar1 = Zombie::HasCondition(uVar5,0x27);
  if (cVar1 != '\0') goto LAB_03b28780;
  uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
  cVar1 = Zombie::HasCondition(uVar5,0x2c);
  if (cVar1 != '\0') goto LAB_03b28780;
  uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
  cVar1 = Zombie::HasCondition(uVar5,0x27);
  if (cVar1 != '\0') goto LAB_03b28780;
  uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
  cVar1 = Zombie::HasCondition(uVar5,0x25);
  if (cVar1 != '\0') goto LAB_03b28780;
  pRVar6 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
  pZVar9 = Sexy::RtObject::Cast<ZombieZombossMech>(pRVar6);
  if (pZVar9 != (ZombieZombossMech *)0x0) goto LAB_03b28780;
  pRVar6 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
  pZVar10 = Sexy::RtObject::Cast<ZombieGeneralBase>(pRVar6);
  if (pZVar10 != (ZombieGeneralBase *)0x0) goto LAB_03b28780;
  pZVar8 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
  iVar4 = Zombie::GetSizeType(pZVar8);
  if (iVar4 == 2) goto LAB_03b28780;
  pZVar8 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
  cVar1 = Zombie::IsControlled(pZVar8);
  if (cVar1 != '\0') goto LAB_03b28780;
  lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
  cVar1 = FUN_02fd3c88(*(undefined4 *)(lVar11 + 0xcc));
  if (cVar1 != '\0') goto LAB_03b28780;
  plVar12 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
  pcVar14 = *(code **)(*plVar12 + 0x3d0);
  psVar13 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_28,"hocuscrocus");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar13);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_20);
  cVar1 = (*pcVar14)(plVar12,aRStack_18,0);
  if (cVar1 == '\0') {
LAB_03b28984:
    bVar2 = 1;
  }
  else {
    pZVar8 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
    cVar1 = Zombie::IsTargetable(pZVar8);
    if (cVar1 == '\0') goto LAB_03b28984;
    pZVar8 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
    bVar2 = ZombieRestrictionSet::IsExcluded((ZombieRestrictionSet *)(pHVar7 + 0x2f8),pZVar8);
  }
  bVar2 = bVar2 ^ 1;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  std::string::~string(asStack_28);
  nop();
LAB_03b28780:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHocusCrocus::fireProjectileAtTarget(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall
PlantHocusCrocus::fireProjectileAtTarget(PlantHocusCrocus *this,RtMixedPtrBase *param_2)

{
  PlantHocusCrocus PVar1;
  char cVar2;
  long lVar3;
  Insets *pIVar4;
  NewRayEntity *pNVar5;
  long *plVar6;
  RtObject *this_00;
  Zombie *this_01;
  EntityConditionTracker<Zombie,ZombieConditions> *pEVar7;
  size_t __n;
  undefined8 uVar8;
  code *pcVar9;
  float fVar10;
  float fVar11;
  Point aPStack_c8 [8];
  undefined4 local_c0;
  undefined4 local_bc;
  Vec3 aVStack_b8 [16];
  int local_a8;
  uint local_a4;
  RayEntityData aRStack_98 [8];
  string asStack_90 [8];
  string asStack_88 [8];
  string asStack_80 [8];
  string asStack_78 [12];
  undefined4 local_6c;
  RtWeakPtr<Sexy::SoundResource> aRStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if (cVar2 != '\0') {
    lVar3 = FUN_03b27300(*(undefined8 *)(this + 0x10));
    pIVar4 = (Insets *)(**(code **)(**(long **)(this + 0x10) + 0x178))(*(long **)(this + 0x10));
    Sexy::Insets::Insets((Insets *)&local_a8,pIVar4);
    __n = (size_t)local_a4;
    EATextSquish::Vec3::Vec3(aVStack_b8,(float)local_a8 + 75.0,(float)(int)local_a4 + 50.0,0.0);
    if (this[0x48] != (PlantHocusCrocus)0x0) {
      EATextSquish::Vec3::Vec3((Vec3 *)aRStack_68,0.0,-20.0,0.0);
      EATextSquish::Vec3::operator+=(aVStack_b8,(Vec3 *)aRStack_68);
    }
    RayEntityData::RayEntityData(aRStack_98);
    std::string::append((string *)aRStack_98,"POPANIM_EFFECTS_HOCUSCROCUS_BOLT",__n);
    if (this[0x48] != (PlantHocusCrocus)0x0) {
      std::string::append((string *)aRStack_98,"POPANIM_EFFECTS_HOCUSCROCUS_BOLT_PLUS",__n);
    }
    std::string::append(asStack_90,"POPANIM_EFFECTS_HOCUSCROCUS_ATTACK",__n);
    cVar2 = (**(code **)(*(long *)this + 0x180))(this);
    if (cVar2 != '\0') {
      std::string::append(asStack_90,"POPANIM_EFFECTS_HOCUSCROCUS_ATTACK_PLUS",__n);
    }
    std::string::append(asStack_88,"fumeshroom_appear",__n);
    cVar2 = (**(code **)(*(long *)this + 0x180))(this);
    if (cVar2 != '\0') {
      std::string::append(asStack_90,"",__n);
    }
    std::string::append(asStack_80,"hocuscrocus_beem",__n);
    std::string::append(asStack_78,"hocus_crocus_bolt_middle_rawa",__n);
    local_6c = 0x41b80000;
    pNVar5 = GameObject::Create<NewRayEntity>();
    BoardEntity::PlaceOnBoard((SexyVector3 *)pNVar5);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)&local_c0);
                    /* WARNING: Load size is inaccurate */
    NewRayEntity::Initialize(*(NewRayEntity **)(lVar3 + 0x2c0),pNVar5,aRStack_98,aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_c0);
    Sexy::Point::Point((Point *)aRStack_68,0,-0x14);
    NewRayEntity::SetHitOffset(pNVar5,aRStack_68);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)param_2);
    RayEntity::InitiateWithTarget((RayEntity *)pNVar5,aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    fVar11 = *(float *)(lVar3 + 0x2c8);
    pcVar9 = *(code **)(*plVar6 + 0x110);
    fVar10 = (float)Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
    uVar8 = *(undefined8 *)(this + 0x10);
    Sexy::Point::Point(aPStack_c8,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_c0,1.0,0.0);
    DamageInfo::DamageInfo
              ((DamageInfo *)(fVar10 * fVar11),local_c0,local_bc,aRStack_68,0x400000000000,uVar8,
               aPStack_c8,0);
    (*pcVar9)(plVar6,aRStack_68);
    DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    this_01 = Sexy::RtObject::Cast<Zombie>(this_00);
    if (this_01 != (Zombie *)0x0) {
      if (this[0x48] != (PlantHocusCrocus)0x0) {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)&local_c0);
        createDownLevelFogEffect(this,aRStack_68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_c0);
      }
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)&local_c0);
      cVar2 = canBeShrunkByHocusCrocus(aRStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_c0);
      if (cVar2 == '\0') {
        cVar2 = Zombie::HasCondition(this_01,0x43);
        if (cVar2 != '\0') {
          pEVar7 = (EntityConditionTracker<Zombie,ZombieConditions> *)
                   Zombie::GetConditionTracker(this_01);
          lVar3 = EntityConditionTracker<Zombie,ZombieConditions>::GetCondition(pEVar7,0x43);
          fVar10 = (float)PVZ_T();
          *(float *)(lVar3 + 4) = fVar10 + 5.0;
        }
        PVar1 = this[0x48];
      }
      else {
        Zombie::ApplyCondition((Zombie *)0x3fc00000,0,this_01,0x42,1);
        if (this[0x48] == (PlantHocusCrocus)0x0) {
          uVar8 = Zombie::GetConditionTracker(this_01);
          ZombieConditionTracker::SetAdditionalValue
                    ((ZombieConditionTracker *)0x3f400000,uVar8,0x42);
        }
        else {
          uVar8 = Zombie::GetConditionTracker(this_01);
          ZombieConditionTracker::SetAdditionalValue
                    ((ZombieConditionTracker *)0x3f000000,uVar8,0x42);
        }
        uVar8 = Zombie::GetConditionTracker(this_01);
        ZombieConditionTracker::SetExtraAdditionalValue
                  ((ZombieConditionTracker *)0x40a00000,uVar8,0x42);
        uVar8 = Zombie::GetConditionTracker(this_01);
        ZombieConditionTracker::SetExtraAdditionalValue2
                  ((ZombieConditionTracker *)0x3fc00000,uVar8,0x42);
        PVar1 = this[0x48];
      }
      if (PVar1 != (PlantHocusCrocus)0x0) {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)&local_c0);
        downZombieLevel(this,aRStack_68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_c0);
        TGANFSLinkageData::~TGANFSLinkageData((TGANFSLinkageData *)aRStack_98);
        goto LAB_03b28a2c;
      }
    }
    TGANFSLinkageData::~TGANFSLinkageData((TGANFSLinkageData *)aRStack_98);
  }
LAB_03b28a2c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHocusCrocus::fireChildProjectileBetweenTargets(Sexy::RtWeakPtr<BoardEntity>,
   Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall
PlantHocusCrocus::fireChildProjectileBetweenTargets
          (PlantHocusCrocus *this,RtMixedPtrBase *param_2,RtMixedPtrBase *param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  Insets *pIVar5;
  NewRayEntity *pNVar6;
  RtObject *this_00;
  Zombie *this_01;
  EntityConditionTracker<Zombie,ZombieConditions> *pEVar7;
  size_t __n;
  undefined8 uVar8;
  code *pcVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  Point aPStack_c8 [8];
  undefined4 local_c0;
  undefined4 local_bc;
  Vec3 aVStack_b8 [16];
  int local_a8;
  uint local_a4;
  int local_9c;
  RayEntityData aRStack_98 [8];
  string asStack_90 [8];
  string asStack_88 [8];
  string asStack_80 [8];
  string asStack_78 [12];
  undefined4 local_6c;
  RtWeakPtr<Sexy::SoundResource> aRStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if ((cVar1 != '\0') && (cVar1 = Sexy::RtMixedPtrBase::IsValid(param_3), cVar1 != '\0')) {
    lVar3 = FUN_03b27300(*(undefined8 *)(this + 0x10));
    iVar2 = FUN_03b2568c(*(undefined4 *)(*(long *)(this + 0x10) + 0x50));
    if (iVar2 < 3) {
      fVar11 = *(float *)(lVar3 + 0x2d4);
      fVar12 = *(float *)(lVar3 + 0x2dc);
    }
    else {
      fVar11 = *(float *)(lVar3 + 0x2d0);
      fVar12 = *(float *)(lVar3 + 0x2d8);
    }
    if (this[0x48] != (PlantHocusCrocus)0x0) {
      fVar12 = 1.0;
    }
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)param_3);
    pIVar5 = (Insets *)(**(code **)(*plVar4 + 0x178))();
    Sexy::Insets::Insets((Insets *)&local_a8,pIVar5);
    __n = (size_t)local_a4;
    EATextSquish::Vec3::Vec3
              (aVStack_b8,(float)local_a8,(float)(int)local_a4 + (float)local_9c * 0.5,0.0);
    RayEntityData::RayEntityData(aRStack_98);
    std::string::append((string *)aRStack_98,"POPANIM_EFFECTS_HOCUSCROCUS_BOLT",__n);
    if (this[0x48] != (PlantHocusCrocus)0x0) {
      std::string::append((string *)aRStack_98,"POPANIM_EFFECTS_HOCUSCROCUS_BOLT_PLUS",__n);
    }
    std::string::append(asStack_90,"POPANIM_EFFECTS_HOCUSCROCUS_ATTACK",__n);
    std::string::append(asStack_88,"fumeshroom_appear",__n);
    std::string::append(asStack_80,"hocuscrocus_beem",__n);
    std::string::append(asStack_78,"hocus_crocus_bolt_middle_rawa",__n);
    local_6c = 0x41b80000;
    pNVar6 = GameObject::Create<NewRayEntity>();
    BoardEntity::PlaceOnBoard((SexyVector3 *)pNVar6);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)&local_c0);
                    /* WARNING: Load size is inaccurate */
    NewRayEntity::Initialize(*(NewRayEntity **)(lVar3 + 0x2c0),pNVar6,aRStack_98,aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_c0);
    Sexy::Point::Point((Point *)aRStack_68,0,-0x14);
    NewRayEntity::SetHitOffset(pNVar6,aRStack_68);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)param_2);
    RayEntity::InitiateWithTarget((RayEntity *)pNVar6,aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    fVar13 = *(float *)(lVar3 + 0x2c8);
    pcVar9 = *(code **)(*plVar4 + 0x110);
    fVar10 = (float)Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
    uVar8 = *(undefined8 *)(this + 0x10);
    Sexy::Point::Point(aPStack_c8,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_c0,1.0,0.0);
    DamageInfo::DamageInfo
              ((DamageInfo *)(fVar11 * fVar13 * fVar10),local_c0,local_bc,aRStack_68,0x400000000000,
               uVar8,aPStack_c8,0);
    (*pcVar9)(plVar4,aRStack_68);
    DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    this_01 = Sexy::RtObject::Cast<Zombie>(this_00);
    if ((this_01 != (Zombie *)0x0) &&
       (fVar11 = (float)PlantFramework::Rand((PlantFramework *)this,1.0), fVar11 < fVar12)) {
      if (this[0x48] != (PlantHocusCrocus)0x0) {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)&local_c0);
        createDownLevelFogEffect(this,aRStack_68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_c0);
      }
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)&local_c0);
      cVar1 = canBeShrunkByHocusCrocus(aRStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_c0);
      if (cVar1 == '\0') {
        cVar1 = Zombie::HasCondition(this_01,0x43);
        if (cVar1 != '\0') {
          pEVar7 = (EntityConditionTracker<Zombie,ZombieConditions> *)
                   Zombie::GetConditionTracker(this_01);
          lVar3 = EntityConditionTracker<Zombie,ZombieConditions>::GetCondition(pEVar7,0x43);
          fVar11 = (float)PVZ_T();
          *(float *)(lVar3 + 4) = fVar11 + 5.0;
        }
      }
      else {
        Zombie::ApplyCondition((Zombie *)0x3fc00000,0,this_01,0x42,1);
        if (this[0x48] == (PlantHocusCrocus)0x0) {
          uVar8 = Zombie::GetConditionTracker(this_01);
          ZombieConditionTracker::SetAdditionalValue
                    ((ZombieConditionTracker *)0x3f400000,uVar8,0x42);
        }
        else {
          uVar8 = Zombie::GetConditionTracker(this_01);
          ZombieConditionTracker::SetAdditionalValue
                    ((ZombieConditionTracker *)0x3f000000,uVar8,0x42);
        }
        uVar8 = Zombie::GetConditionTracker(this_01);
        ZombieConditionTracker::SetExtraAdditionalValue
                  ((ZombieConditionTracker *)0x40a00000,uVar8,0x42);
        uVar8 = Zombie::GetConditionTracker(this_01);
        ZombieConditionTracker::SetExtraAdditionalValue2
                  ((ZombieConditionTracker *)0x3fc00000,uVar8,0x42);
      }
      if (this[0x48] != (PlantHocusCrocus)0x0) {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)&local_c0);
        downZombieLevel(this,aRStack_68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_c0);
      }
    }
    TGANFSLinkageData::~TGANFSLinkageData((TGANFSLinkageData *)aRStack_98);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHocusCrocus::canBeAttackedByHocusCrocus(Sexy::RtWeakPtr<BoardEntity>) */

void PlantHocusCrocus::canBeAttackedByHocusCrocus(RtWeakPtr *param_1)

{
  bool bVar1;
  char cVar2;
  Zombie *pZVar3;
  string *psVar4;
  RtObject *pRVar5;
  GridItem *pGVar6;
  code *pcVar7;
  string asStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_1);
  if (bVar1) {
    pRVar5 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
    pZVar3 = Sexy::RtObject::Cast<Zombie>(pRVar5);
    if (pZVar3 != (Zombie *)0x0) {
      pcVar7 = *(code **)(*(long *)pZVar3 + 0x3d0);
      psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      std::string::string(asStack_20,"hocuscrocus");
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar4);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
      cVar2 = (*pcVar7)(pZVar3,aRStack_10,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      std::string::~string(asStack_20);
      nop();
      if (cVar2 != '\0') goto LAB_03b294d8;
    }
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_1);
  if (bVar1) {
    pRVar5 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
    pGVar6 = Sexy::RtObject::Cast<GridItem>(pRVar5);
    if (pGVar6 != (GridItem *)0x0) {
      cVar2 = (**(code **)(*(long *)pGVar6 + 0x200))();
      goto LAB_03b294d8;
    }
  }
  cVar2 = '\0';
LAB_03b294d8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHocusCrocus::hasTargetToAttack() */

void PlantHocusCrocus::hasTargetToAttack(void)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined8 local_40;
  undefined8 local_38;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar3 = operator|(2,4);
  EntityFinder::GetEntitiesOnBoard(avStack_20,uVar3);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38),
        cVar1 = '\0', bVar2) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)aRStack_30);
    cVar1 = canBeAttackedByHocusCrocus(aRStack_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    if (cVar1 != '\0') break;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* PlantHocusCrocus::shouldBeginCasting() */

undefined8 __thiscall PlantHocusCrocus::shouldBeginCasting(PlantHocusCrocus *this)

{
  char cVar1;
  undefined8 uVar2;
  float fVar3;
  
  cVar1 = Plant::IsOnBoard(*(Plant **)(this + 0x10));
  if ((cVar1 != '\0') && (fVar3 = (float)PVZ_T(), *(float *)(this + 0x40) <= fVar3)) {
    uVar2 = hasTargetToAttack();
    return uVar2;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHocusCrocus::UpdateActions() */

void __thiscall PlantHocusCrocus::UpdateActions(PlantHocusCrocus *this)

{
  char cVar1;
  long *plVar2;
  code *pcVar3;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(*(long *)(this + 0x10) + 200) == 10) &&
     (cVar1 = shouldBeginCasting(this), cVar1 != '\0')) {
    *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0xb;
    beginCasting(this);
    plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    pcVar3 = *(code **)(*plVar2 + 0x130);
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
    (*pcVar3)(plVar2,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHocusCrocus::findTargetsForAttack(int) */

void PlantHocusCrocus::findTargetsForAttack(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  int in_w1;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  int iVar9;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_50 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  uVar5 = (ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_50);
  iVar9 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesOnBoard(avStack_38,2);
  EntityFinder::GetEntitiesOnBoard(avStack_20,4);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_38);
  uVar7 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_38);
  iVar3 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(uVar5 + 0x10));
  iVar4 = SharkMinion::getRow(*(SharkMinion **)(uVar5 + 0x10));
  Sexy::Point::Point((Point *)&local_68,iVar3,iVar4);
  EntityFinder::BoardEntitySorter_ClosestByColumn::BoardEntitySorter_ClosestByColumn
            ((BoardEntitySorter_ClosestByColumn *)local_60,(Point *)&local_68);
  std::
  sort<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,EntityFinder::BoardEntitySorter_ClosestByColumn>
            (uVar6,uVar7,
             (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)local_60);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_20);
  uVar7 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_20);
  iVar3 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(uVar5 + 0x10));
  iVar4 = SharkMinion::getRow(*(SharkMinion **)(uVar5 + 0x10));
  Sexy::Point::Point((Point *)&local_68,iVar3,iVar4);
  EntityFinder::BoardEntitySorter_ClosestByColumn::BoardEntitySorter_ClosestByColumn
            ((BoardEntitySorter_ClosestByColumn *)local_60,(Point *)&local_68);
  std::
  sort<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,EntityFinder::BoardEntitySorter_ClosestByColumn>
            (uVar6,uVar7,
             (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)local_60);
  local_68 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_50);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)local_60,(__normal_iterator *)&local_68);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_38);
  uVar7 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_38);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::
  insert<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,void>
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_50,local_60[0],uVar6,uVar7
            );
  local_68 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_50);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)local_60,(__normal_iterator *)&local_68);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_20);
  uVar7 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::
  insert<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,void>
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_50,local_60[0],uVar6,uVar7
            );
  local_70 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_50);
  while (iVar9 < in_w1) {
    local_60[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)avStack_50);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_70,(__normal_iterator *)local_60);
    if (!bVar1) break;
    plVar8 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
    if (*plVar8 != 0) {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_60,(RtWeakPtrBase *)&local_68);
      cVar2 = canBeAttackedByHocusCrocus
                        ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                          *)local_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
      if (cVar2 != '\0') {
        iVar9 = iVar9 + 1;
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)local_60,(RtWeakPtrBase *)&local_68);
        std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
        push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                   *)in_x8,(RtWeakPtr *)local_60);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_60);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_70);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHocusCrocus::onPlantfoodLooped() */

void __thiscall PlantHocusCrocus::onPlantfoodLooped(PlantHocusCrocus *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  RtWeakPtrBase *pRVar9;
  BoardEntity *this_00;
  SharkMinion *pSVar10;
  RtObject *this_01;
  EffectObject_HocusCrocusFog *pEVar11;
  Board *this_02;
  float fVar12;
  float fVar13;
  float fVar14;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  Insets aIStack_30 [16];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar7 = FUN_03b27300(*(undefined8 *)(this + 0x10));
  FUN_03b27300(*(undefined8 *)(this + 0x10));
  findTargetsForAttack((int)this);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_20);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar1) {
    pRVar9 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_58,pRVar9);
    this_02 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string((string *)aIStack_30,"EffectObject_HocusCrocusFog");
    this_00 = (BoardEntity *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
    iVar5 = BoardEntity::CalcColumnPosition(this_00);
    pSVar10 = (SharkMinion *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
    iVar6 = SharkMinion::getRow(pSVar10);
    this_01 = (RtObject *)Board::AddEffectObject(this_02,(string *)aIStack_30,iVar5,iVar6);
    pEVar11 = Sexy::RtObject::Cast<EffectObject_HocusCrocusFog>(this_01);
    std::string::~string((string *)aIStack_30);
    nop();
    Sexy::Insets::Insets((Insets *)&local_40);
    cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    if (cVar2 == '\0') {
      fVar13 = 1.0;
      fVar14 = *(float *)(lVar7 + 0x2f0);
    }
    else {
      fVar13 = 2.0;
      fVar14 = *(float *)(lVar7 + 0x2ec);
    }
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
    fVar12 = (float)FUN_03b25828(*(undefined4 *)(lVar8 + 0x18),*(undefined4 *)(lVar8 + 0x1c),
                                 *(undefined4 *)(lVar8 + 0x20));
    iVar5 = BoardConstants::GRIDSQUARE_HEIGHT();
    pSVar10 = (SharkMinion *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
    iVar6 = SharkMinion::getRow(pSVar10);
    iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
    iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
    local_38 = (int)((float)iVar4 * fVar13);
    iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
    local_34 = (int)((float)iVar4 * fVar13);
    local_40 = (int)(fVar12 - (float)local_38 * 0.5);
    local_3c = (int)((float)(iVar5 * iVar6 + 0xa0 + iVar3 / 2) - (float)local_34 * 0.5);
    (**(code **)(*(long *)pEVar11 + 0x80))(fVar13,pEVar11);
    FUN_03b256a8(fVar14 + 2.0,pEVar11 + 0x11c);
    Sexy::Insets::Insets(aIStack_30,(Insets *)&local_40);
    EffectObject_HocusCrocusFog::setShrinkRect(pEVar11,aIStack_30);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aIStack_30,(RtWeakPtrBase *)aRStack_58);
    fireProjectileAtTarget(this,aIStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
  }
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHocusCrocus::findChildTargets(std::vector<Sexy::RtWeakPtr<BoardEntity>,
   std::allocator<Sexy::RtWeakPtr<BoardEntity> > >&, Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall
PlantHocusCrocus::findChildTargets
          (int param_1_00,
          vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *param_1
          ,RtMixedPtrBase *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  SharkMinion *pSVar7;
  BoardEntity *pBVar8;
  RtWeakPtrBase *pRVar9;
  int iVar10;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  undefined8 local_40;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_3);
  if (cVar1 != '\0') {
    iVar10 = 0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
    findTargetsForAttack(param_1_00);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
    operator=((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              avStack_38,(vector *)local_20);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
              ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
               local_20);
    pSVar7 = (SharkMinion *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_3);
    iVar3 = SharkMinion::getRow(pSVar7);
    pBVar8 = (BoardEntity *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_3);
    iVar4 = BoardEntity::CalcColumnPosition(pBVar8);
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_38);
    local_20[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)avStack_38);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)local_20), bVar2)
    {
      pRVar9 = (RtWeakPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_48,pRVar9);
      if (1 < iVar10) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
        break;
      }
      pSVar7 = (SharkMinion *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
      iVar5 = SharkMinion::getRow(pSVar7);
      pBVar8 = (BoardEntity *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
      iVar6 = BoardEntity::CalcColumnPosition(pBVar8);
      if (((iVar3 + -1 <= iVar5) && (iVar5 <= iVar3 + 1)) && (iVar4 < iVar6)) {
        iVar10 = iVar10 + 1;
        std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
        push_back(param_1,(RtWeakPtr *)aRStack_48);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
    }
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
              ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
               avStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHocusCrocus::checkRayRefraction(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall PlantHocusCrocus::checkRayRefraction(PlantHocusCrocus *this,RtWeakPtrBase *param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  RtWeakPtrBase *pRVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_03b27300(*(undefined8 *)(this + 0x10));
  iVar2 = FUN_03b2568c(*(undefined4 *)(*(long *)(this + 0x10) + 0x50));
  if (iVar2 < 3) {
    if (iVar2 == 2) {
      fVar7 = *(float *)(lVar3 + 0x2e4);
    }
    else {
      fVar7 = 0.0;
    }
  }
  else {
    fVar7 = *(float *)(lVar3 + 0x2e0);
  }
  if (this[0x48] != (PlantHocusCrocus)0x0) {
    fVar7 = 1.0;
  }
  fVar6 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
  if (fVar6 < fVar7) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,param_2);
    findChildTargets(this,(vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20
                     ,aRStack_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    uVar1 = local_20;
    lVar3 = FUN_03b256bc(local_20,local_18);
    if (lVar3 != 0) {
      pRVar4 = (RtWeakPtrBase *)FUN_03b256c8(uVar1,0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,pRVar4);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,param_2);
      fireChildProjectileBetweenTargets(this,aRStack_30,aRStack_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
      uVar5 = FUN_03b256bc(local_20,local_18);
      if (1 < uVar5) {
        pRVar4 = (RtWeakPtrBase *)FUN_03b256c8(local_20,1);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,pRVar4);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,param_2);
        fireChildProjectileBetweenTargets(this,aRStack_30,aRStack_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
      }
    }
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
              ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
               &local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHocusCrocus::OnAnimCommand(std::string const&, std::string const&) */

void PlantHocusCrocus::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  RtWeakPtrBase *pRVar5;
  undefined4 uVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = FUN_03b27300(*(undefined8 *)(param_1 + 0x10));
  bVar1 = std::operator==(param_2,"use_action");
  if (bVar1) {
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
    findTargetsForAttack((int)param_1);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(avStack_20);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(avStack_20);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar2)
    {
      pRVar5 = (RtWeakPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,pRVar5);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)aRStack_40);
      fireProjectileAtTarget((PlantHocusCrocus *)param_1,aRStack_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)aRStack_40);
      checkRayRefraction((PlantHocusCrocus *)param_1,aRStack_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      if (param_1[0x48] != (string)0x0) {
        param_1[0x48] = (string)0x0;
        *(undefined4 *)(param_1 + 0x44) = 0;
      }
      iVar3 = FUN_03b25690(*(undefined8 *)(param_1 + 0x10));
      if ((4 < iVar3) && (*(int *)(lVar4 + 0x2e8) + -1 <= *(int *)(param_1 + 0x44))) {
        param_1[0x48] = (string)0x1;
        uVar6 = PVZ_T();
        *(undefined4 *)(param_1 + 0x40) = uVar6;
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
    }
    *(undefined4 *)(*(long *)(param_1 + 0x10) + 200) = 10;
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
              ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
               avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}

