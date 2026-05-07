// Class: PlantDeodarcedar


/* PlantDeodarcedar::PlantDeodarcedar() */

void __thiscall PlantDeodarcedar::PlantDeodarcedar(PlantDeodarcedar *this)

{
  undefined4 uVar1;
  
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_0666e4e0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x28) = 0x42a00000;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x38) = 1;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x30) = uVar1;
  *(undefined4 *)(this + 0x34) = uVar1;
  return;
}


/* PlantDeodarcedar::StaticNew() */

PlantDeodarcedar * PlantDeodarcedar::StaticNew(void)

{
  PlantDeodarcedar *this;
  
  this = ::operator_new(0x40);
  PlantDeodarcedar(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDeodarcedar::StaticClassInit() */

void PlantDeodarcedar::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantDeodarcedar");
    (*pcVar2)(plVar1,asStack_10,FUN_0363d1c4,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDeodarcedar::StaticGetClass() */

long * PlantDeodarcedar::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantDeodarcedar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantDeodarcedar::GetClass() const */

long * PlantDeodarcedar::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantDeodarcedar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantDeodarcedar::~PlantDeodarcedar() */

void __thiscall PlantDeodarcedar::~PlantDeodarcedar(PlantDeodarcedar *this)

{
  *(undefined ***)this = &PTR_GetClass_0666e4e0;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantDeodarcedar::~PlantDeodarcedar() */

void __thiscall PlantDeodarcedar::~PlantDeodarcedar(PlantDeodarcedar *this)

{
  ~PlantDeodarcedar(this);
  AK::FreeHook(this);
  return;
}


/* PlantDeodarcedar::getEnergySavedByPlants() */

float __thiscall PlantDeodarcedar::getEnergySavedByPlants(PlantDeodarcedar *this)

{
  long lVar1;
  
  lVar1 = FUN_0363f28c(*(undefined8 *)(this + 0x10));
  return *(float *)(this + 0x3c) * *(float *)(lVar1 + 0x2cc);
}


/* PlantDeodarcedar::getCurrentRuneLightningDamageFactor() */

undefined4 __thiscall PlantDeodarcedar::getCurrentRuneLightningDamageFactor(PlantDeodarcedar *this)

{
  long lVar1;
  undefined4 *puVar2;
  
  lVar1 = FUN_0363f28c(*(undefined8 *)(this + 0x10));
  puVar2 = (undefined4 *)
           FUN_0363cb04(*(undefined8 *)(lVar1 + 0x388),(long)(*(int *)(this + 0x38) + -1));
  return *puVar2;
}


/* PlantDeodarcedar::getCurrentRuneLightningDamageFactorWithEnergy() */

undefined1  [16] __thiscall
PlantDeodarcedar::getCurrentRuneLightningDamageFactorWithEnergy(PlantDeodarcedar *this)

{
  FUN_0363f28c(*(undefined8 *)(this + 0x10));
  return ZEXT816(0x3f800000);
}


/* PlantDeodarcedar::getCurrentRuneLaunchInterval() */

undefined4 __thiscall PlantDeodarcedar::getCurrentRuneLaunchInterval(PlantDeodarcedar *this)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_0363f28c(*(undefined8 *)(this + 0x10));
  iVar1 = FUN_0363ca64(*(undefined8 *)(this + 0x10));
  if (iVar1 < 3) {
    return *(undefined4 *)(lVar2 + 700);
  }
  return *(undefined4 *)(lVar2 + 0x2c0);
}


/* PlantDeodarcedar::getCurrentRuneCritRate() */

undefined4 __thiscall PlantDeodarcedar::getCurrentRuneCritRate(PlantDeodarcedar *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  
  lVar3 = FUN_0363f28c(*(undefined8 *)(this + 0x10));
  cVar1 = (**(code **)(*(long *)this + 0x180))(this);
  uVar4 = 0;
  if ((cVar1 == '\0') && (iVar2 = FUN_0363ca64(*(undefined8 *)(this + 0x10)), uVar4 = 0, 4 < iVar2))
  {
    uVar4 = *(undefined4 *)(lVar3 + 0x2e8);
  }
  return uVar4;
}


/* PlantDeodarcedar::getCurrentRuneCritDamageAmountFactor() */

undefined4 __thiscall PlantDeodarcedar::getCurrentRuneCritDamageAmountFactor(PlantDeodarcedar *this)

{
  long lVar1;
  
  lVar1 = FUN_0363f28c(*(undefined8 *)(this + 0x10));
  return *(undefined4 *)(lVar1 + 0x2ec);
}


/* PlantDeodarcedar::getCurrentRuneBaseDamageAmount() */

undefined4 __thiscall PlantDeodarcedar::getCurrentRuneBaseDamageAmount(PlantDeodarcedar *this)

{
  long lVar1;
  
  lVar1 = FUN_0363f28c(*(undefined8 *)(this + 0x10));
  return *(undefined4 *)(lVar1 + 0x2f0);
}


/* PlantDeodarcedar::getCurrentRuneVelocityXWithGridNum() */

undefined4 __thiscall PlantDeodarcedar::getCurrentRuneVelocityXWithGridNum(PlantDeodarcedar *this)

{
  long lVar1;
  
  lVar1 = FUN_0363f28c(*(undefined8 *)(this + 0x10));
  return *(undefined4 *)(lVar1 + 0x2f4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDeodarcedar::getCurrentRuneInitialVelocity() */

void __thiscall PlantDeodarcedar::getCurrentRuneInitialVelocity(PlantDeodarcedar *this)

{
  int iVar1;
  float fVar2;
  float local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DVec3::DVec3((DVec3 *)&local_28);
  fVar2 = (float)getCurrentRuneVelocityXWithGridNum(this);
  iVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
  local_10 = local_20;
  local_28 = (float)iVar1 * fVar2;
  local_18 = CONCAT44(uStack_24,local_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_28,uStack_24,local_20);
}


/* PlantDeodarcedar::getCurrentRuneStuckRate() */

undefined4 __thiscall PlantDeodarcedar::getCurrentRuneStuckRate(PlantDeodarcedar *this)

{
  char cVar1;
  long lVar2;
  undefined4 uVar3;
  
  lVar2 = FUN_0363f28c(*(undefined8 *)(this + 0x10));
  cVar1 = (**(code **)(*(long *)this + 0x180))(this);
  uVar3 = 0;
  if (cVar1 != '\0') {
    uVar3 = *(undefined4 *)(lVar2 + 0x2f8);
  }
  return uVar3;
}


/* PlantDeodarcedar::getCurrentRuneStuckDuration() */

undefined4 __thiscall PlantDeodarcedar::getCurrentRuneStuckDuration(PlantDeodarcedar *this)

{
  char cVar1;
  long lVar2;
  undefined4 uVar3;
  
  lVar2 = FUN_0363f28c(*(undefined8 *)(this + 0x10));
  cVar1 = (**(code **)(*(long *)this + 0x180))(this);
  uVar3 = 0;
  if (cVar1 != '\0') {
    uVar3 = *(undefined4 *)(lVar2 + 0x2fc);
  }
  return uVar3;
}


/* PlantDeodarcedar::getCurrentRuneLightningArcDiameterGridNum() */

undefined4 __thiscall
PlantDeodarcedar::getCurrentRuneLightningArcDiameterGridNum(PlantDeodarcedar *this)

{
  char cVar1;
  long lVar2;
  
  lVar2 = FUN_0363f28c(*(undefined8 *)(this + 0x10));
  cVar1 = (**(code **)(*(long *)this + 0x180))(this);
  if ((cVar1 != '\0') && (cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10)), cVar1 != '\0'))
  {
    return *(undefined4 *)(lVar2 + 0x300);
  }
  return 0;
}


/* PlantDeodarcedar::getCurrentRuneLightningArcDamageAmount() */

float __thiscall PlantDeodarcedar::getCurrentRuneLightningArcDamageAmount(PlantDeodarcedar *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  lVar3 = FUN_0363f28c(*(undefined8 *)(this + 0x10));
  cVar1 = (**(code **)(*(long *)this + 0x180))(this);
  if ((cVar1 != '\0') && (cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10)), cVar1 != '\0'))
  {
    fVar4 = *(float *)(lVar3 + 0x308);
    fVar5 = *(float *)(this + 0x3c);
    fVar6 = *(float *)(lVar3 + 0x310);
    iVar2 = FUN_0363ca64(*(undefined8 *)(this + 0x10));
    return (float)(iVar2 + 1) * (fVar4 + fVar6 * fVar5);
  }
  return 0.0;
}


/* PlantDeodarcedar::getCurrentRuneNormalAttackDamageAmountOverride() */

float __thiscall
PlantDeodarcedar::getCurrentRuneNormalAttackDamageAmountOverride(PlantDeodarcedar *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  lVar3 = FUN_0363f28c(*(undefined8 *)(this + 0x10));
  cVar1 = (**(code **)(*(long *)this + 0x180))(this);
  fVar4 = 0.0;
  if (cVar1 != '\0') {
    fVar5 = *(float *)(this + 0x3c);
    fVar4 = *(float *)(lVar3 + 0x314);
    fVar6 = *(float *)(lVar3 + 0x31c);
    iVar2 = FUN_0363ca64(*(undefined8 *)(this + 0x10));
    fVar4 = (float)(iVar2 + 1) * (fVar4 + fVar6 * fVar5);
  }
  return fVar4;
}


/* PlantDeodarcedar::getCurrentPlantfoodRuneStageIndex() */

bool __thiscall PlantDeodarcedar::getCurrentPlantfoodRuneStageIndex(PlantDeodarcedar *this)

{
  long lVar1;
  
  lVar1 = FUN_0363f28c(*(undefined8 *)(this + 0x10));
  return *(float *)(lVar1 + 800) <= *(float *)(this + 0x3c);
}


/* PlantDeodarcedar::getCurrentRuneDiameterGridNum() */

undefined4 __thiscall PlantDeodarcedar::getCurrentRuneDiameterGridNum(PlantDeodarcedar *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined4 *puVar4;
  
  lVar3 = FUN_0363f28c(*(undefined8 *)(this + 0x10));
  cVar1 = (**(code **)(*(long *)this + 0x180))(this);
  if (cVar1 == '\0') {
    puVar4 = (undefined4 *)
             FUN_0363cb04(*(undefined8 *)(lVar3 + 0x328),(long)(*(int *)(this + 0x38) + -1));
    return *puVar4;
  }
  iVar2 = getCurrentPlantfoodRuneStageIndex(this);
  puVar4 = (undefined4 *)FUN_0363cb04(*(undefined8 *)(lVar3 + 0x3a0),(long)iVar2);
  return *puVar4;
}


/* PlantDeodarcedar::getCurrentRuneLightningNumPerSecond() */

undefined4 __thiscall PlantDeodarcedar::getCurrentRuneLightningNumPerSecond(PlantDeodarcedar *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined4 *puVar4;
  
  lVar3 = FUN_0363f28c(*(undefined8 *)(this + 0x10));
  cVar1 = (**(code **)(*(long *)this + 0x180))(this);
  if (cVar1 == '\0') {
    puVar4 = (undefined4 *)
             FUN_0363caf8(*(undefined8 *)(lVar3 + 0x340),(long)(*(int *)(this + 0x38) + -1));
    return *puVar4;
  }
  iVar2 = getCurrentPlantfoodRuneStageIndex(this);
  puVar4 = (undefined4 *)FUN_0363caf8(*(undefined8 *)(lVar3 + 0x3b8),(long)iVar2);
  return *puVar4;
}


/* PlantDeodarcedar::getCurrentRuneLightningNumMax() */

undefined4 __thiscall PlantDeodarcedar::getCurrentRuneLightningNumMax(PlantDeodarcedar *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined4 *puVar4;
  
  lVar3 = FUN_0363f28c(*(undefined8 *)(this + 0x10));
  cVar1 = (**(code **)(*(long *)this + 0x180))(this);
  if (cVar1 == '\0') {
    puVar4 = (undefined4 *)
             FUN_0363caf8(*(undefined8 *)(lVar3 + 0x358),(long)(*(int *)(this + 0x38) + -1));
    return *puVar4;
  }
  iVar2 = getCurrentPlantfoodRuneStageIndex(this);
  puVar4 = (undefined4 *)FUN_0363caf8(*(undefined8 *)(lVar3 + 0x3d0),(long)iVar2);
  return *puVar4;
}


/* PlantDeodarcedar::getCurrentRuneAliveDuration() */

undefined4 __thiscall PlantDeodarcedar::getCurrentRuneAliveDuration(PlantDeodarcedar *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined4 *puVar4;
  
  lVar3 = FUN_0363f28c(*(undefined8 *)(this + 0x10));
  cVar1 = (**(code **)(*(long *)this + 0x180))(this);
  if (cVar1 == '\0') {
    puVar4 = (undefined4 *)
             FUN_0363cb04(*(undefined8 *)(lVar3 + 0x370),(long)(*(int *)(this + 0x38) + -1));
    return *puVar4;
  }
  iVar2 = getCurrentPlantfoodRuneStageIndex(this);
  puVar4 = (undefined4 *)FUN_0363cb04(*(undefined8 *)(lVar3 + 1000),(long)iVar2);
  return *puVar4;
}


/* PlantDeodarcedar::getCurrentRuneIdleAnimationToPlay() */

void PlantDeodarcedar::getCurrentRuneIdleAnimationToPlay(void)

{
  char cVar1;
  int iVar2;
  PlantDeodarcedar *in_x0;
  long lVar3;
  
  lVar3 = FUN_0363f28c(*(undefined8 *)(in_x0 + 0x10));
  cVar1 = (**(code **)(*(long *)in_x0 + 0x180))();
  if (cVar1 == '\0') {
    FUN_0363cb0c(*(undefined8 *)(lVar3 + 0x418),(long)(*(int *)(in_x0 + 0x38) + -1));
    FUN_05475d88();
    return;
  }
  iVar2 = getCurrentPlantfoodRuneStageIndex(in_x0);
  FUN_0363cb0c(*(undefined8 *)(lVar3 + 0x460),(long)iVar2);
  FUN_05475d88();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDeodarcedar::getCurrentRuneLightningArcAnimationToPlay() */

void PlantDeodarcedar::getCurrentRuneLightningArcAnimationToPlay(void)

{
  long lVar1;
  int iVar2;
  PlantDeodarcedar *in_x0;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  FUN_0363f28c(*(undefined8 *)(in_x0 + 0x10));
  iVar2 = getCurrentPlantfoodRuneStageIndex(in_x0);
  if (iVar2 == 0) {
    std::string::string(in_x8,"dq_06");
    nop();
  }
  else {
    std::string::string(in_x8,"dq_05");
    nop();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDeodarcedar::getCurrentRuneProjectileType() */

void __thiscall PlantDeodarcedar::getCurrentRuneProjectileType(PlantDeodarcedar *this)

{
  undefined8 uVar1;
  string asStack_28 [8];
  wstring awStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_28,"DeodarcedarLightningRune");
  nop();
  uVar1 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::ToWString(asStack_28);
  Sexy::RtName::RtName(aRStack_18,awStack_20);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(uVar1,0xc,aRStack_18);
  Sexy::RtName::~RtName(aRStack_18);
  FUN_05476c50(awStack_20);
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDeodarcedar::canFindTargets() */

void __thiscall PlantDeodarcedar::canFindTargets(PlantDeodarcedar *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  GridItem *pGVar4;
  undefined8 *puVar5;
  Zombie *this_00;
  undefined8 uVar6;
  RtObject *this_01;
  code *pcVar7;
  undefined8 local_50;
  undefined8 local_48;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  int local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  Sexy::Insets::Insets((Insets *)&local_30);
  local_30 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
  local_2c = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
  local_24 = 1;
  local_28 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) - local_30;
  uVar3 = operator|(4,2);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,uVar3,(Insets *)&local_30);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_50,(__normal_iterator *)&local_48);
    if (!bVar1) {
      uVar6 = 0;
LAB_0363fe28:
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar6);
    }
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    this_01 = (RtObject *)*puVar5;
    this_00 = Sexy::RtObject::Cast<Zombie>(this_01);
    if ((((((this_00 != (Zombie *)0x0) &&
           (cVar2 = (**(code **)(*(long *)this_00 + 0x328))(), cVar2 == '\0')) &&
          (cVar2 = Zombie::IsInvisible(this_00), cVar2 == '\0')) &&
         ((cVar2 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar2 == '\0' &&
          (cVar2 = RealObject::IsOnTeam(this_00,2), cVar2 != '\0')))) &&
        ((cVar2 = Zombie::IsTargetable(this_00), cVar2 != '\0' &&
         ((cVar2 = Zombie::IsIgnoringAllDamage(this_00), cVar2 == '\0' &&
          (cVar2 = Zombie::IsControlled(this_00), cVar2 == '\0')))))) &&
       (cVar2 = Zombie::HasFogImmune(this_00), cVar2 == '\0')) {
      pcVar7 = *(code **)(*(long *)this_00 + 0x3d0);
      Plant::GetType();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_40);
      cVar2 = (*pcVar7)(this_00,aRStack_38,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      if (cVar2 == '\0') goto LAB_0363fcf4;
LAB_0363fe24:
      uVar6 = 1;
      goto LAB_0363fe28;
    }
LAB_0363fcf4:
    pGVar4 = Sexy::RtObject::Cast<GridItem>(this_01);
    if ((pGVar4 != (GridItem *)0x0) &&
       (cVar2 = (**(code **)(*(long *)pGVar4 + 0x200))(), cVar2 != '\0')) goto LAB_0363fe24;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDeodarcedar::addPlantAttackUpEffect(Plant*) */

void __thiscall PlantDeodarcedar::addPlantAttackUpEffect(PlantDeodarcedar *this,Plant *param_1)

{
  GameObjectDictionary *this_00;
  AttachedEffect *this_01;
  ResourceInfo *pRVar1;
  code *pcVar2;
  string asStack_30 [16];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Plant *)0x0) {
    this_00 = (GameObjectDictionary *)Plant::GetAttachedEffectManager(param_1);
    std::string::string(asStack_20,"attackup_by_deodarcedar");
    this_01 = (AttachedEffect *)GameObjectDictionary::FindOrCreate(this_00,asStack_20);
    std::string::~string(asStack_20);
    nop();
    std::string::string(asStack_30,"POPANIM_EFFECTS_DEODARCEDAR_EFFECT_RUNE");
    GetPAMByName(asStack_30);
    pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_20);
    AttachedEffect::InitializeWithAnimation(this_01,(PopAnim *)pRVar1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20);
    std::string::~string(asStack_30);
    nop();
    Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)asStack_20);
    std::string::string(asStack_30,"speedup");
    AnimationSequence::AddLoopingAnimation(0x411547ae,asStack_20,asStack_30,0);
    std::string::~string(asStack_30);
    nop();
    std::string::string(asStack_30,"speedup");
    AnimationSequence::AddSingleAnimation(asStack_20,asStack_30,0);
    std::string::~string(asStack_30);
    nop();
    AttachedEffect::PlayAnimSequenceAndDestroy(this_01,(AnimationSequence *)asStack_20);
    pcVar2 = *(code **)(*(long *)this_01 + 0x18);
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_30,0.0,0.0,0.0);
    (*pcVar2)(this_01,param_1,asStack_30,1);
    AnimationSequence::~AnimationSequence((AnimationSequence *)asStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDeodarcedar::getCurrentRuneNormalAttackAnimationToPlay() */

void PlantDeodarcedar::getCurrentRuneNormalAttackAnimationToPlay(void)

{
  vector *pvVar1;
  char cVar2;
  long *in_x0;
  long lVar3;
  vector<std::string,std::allocator<std::string>> *in_x8;
  
  lVar3 = FUN_0363f28c(in_x0[2]);
  cVar2 = (**(code **)(*in_x0 + 0x180))();
  pvVar1 = (vector *)(lVar3 + 0x430);
  if (cVar2 != '\0') {
    pvVar1 = (vector *)(lVar3 + 0x478);
  }
  std::vector<std::string,std::allocator<std::string>>::vector(in_x8,pvVar1);
  return;
}


/* PlantDeodarcedar::getCurrentRuneCritAttackAnimationToPlay() */

void PlantDeodarcedar::getCurrentRuneCritAttackAnimationToPlay(void)

{
  vector *pvVar1;
  char cVar2;
  long *in_x0;
  long lVar3;
  vector<std::string,std::allocator<std::string>> *in_x8;
  
  lVar3 = FUN_0363f28c(in_x0[2]);
  cVar2 = (**(code **)(*in_x0 + 0x180))();
  pvVar1 = (vector *)(lVar3 + 0x448);
  if (cVar2 != '\0') {
    pvVar1 = (vector *)(lVar3 + 0x490);
  }
  std::vector<std::string,std::allocator<std::string>>::vector(in_x8,pvVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDeodarcedar::isElectricPlant(Plant*, bool) */

void __thiscall
PlantDeodarcedar::isElectricPlant(PlantDeodarcedar *this,Plant *param_1,bool param_2)

{
  bool bVar1;
  long lVar2;
  int *piVar3;
  undefined1 uVar4;
  undefined8 local_38;
  undefined8 local_30;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Plant *)0x0) {
    Plant::GetType();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    bVar1 = std::operator==((string *)(lVar2 + 8),"powervine");
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    if (!bVar1) {
      Plant::GetType();
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      std::vector<PlantTag,std::allocator<PlantTag>>::vector
                ((vector<PlantTag,std::allocator<PlantTag>> *)aRStack_20,(vector *)(lVar2 + 0xf0));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
      local_38 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)aRStack_20);
      local_30 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)aRStack_20);
      if (param_2) {
        while (bVar1 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30),
              bVar1) {
          piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
          if (*piVar3 == 0x1b) goto LAB_03641300;
          eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                    ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_38);
        }
      }
      else {
        while (bVar1 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30),
              bVar1) {
          piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
          if ((*piVar3 == 0x1b) && (*(Plant **)(this + 0x10) != param_1)) {
            Plant::GetType();
            lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
            bVar1 = std::operator!=((string *)(lVar2 + 8),"deodarcedar");
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
            if (bVar1) goto LAB_03641300;
          }
          eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                    ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_38);
        }
      }
      uVar4 = 0;
      goto LAB_03641344;
    }
  }
  uVar4 = 0;
  goto LAB_03641208;
LAB_03641300:
  uVar4 = 1;
LAB_03641344:
  std::vector<PlantTag,std::allocator<PlantTag>>::~vector
            ((vector<PlantTag,std::allocator<PlantTag>> *)aRStack_20);
LAB_03641208:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* PlantDeodarcedar::canAttackUpPlant(Plant*) */

undefined8 __thiscall PlantDeodarcedar::canAttackUpPlant(PlantDeodarcedar *this,Plant *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((((param_1 != (Plant *)0x0) && (cVar1 = Plant::HasCondition(param_1,1), cVar1 == '\0')) &&
      (cVar1 = Plant::HasCondition(param_1,6), cVar1 == '\0')) &&
     (((cVar1 = Plant::HasCondition(param_1,2), cVar1 == '\0' &&
       (cVar1 = Plant::HasCondition(param_1,0x16), cVar1 == '\0')) &&
      ((cVar1 = Plant::HasCondition(param_1,0x1d), cVar1 == '\0' &&
       (cVar1 = Plant::HasCondition(param_1,0x15), cVar1 == '\0')))))) {
    uVar2 = isElectricPlant(this,param_1,true);
    return uVar2;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDeodarcedar::applyAttackUpFeatures() */

void __thiscall PlantDeodarcedar::applyAttackUpFeatures(PlantDeodarcedar *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  float *pfVar5;
  undefined8 *puVar6;
  Plant *this_00;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  uVar7 = *(undefined8 *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_0363ca64(uVar7);
  if (1 < iVar3) {
    lVar4 = FUN_0363f28c(uVar7);
    pfVar5 = (float *)FUN_0363cb04(*(undefined8 *)(lVar4 + 0x328),(long)(*(int *)(this + 0x38) + -1)
                                  );
    fVar9 = *pfVar5;
    iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    pfVar5 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      **)(this + 0x10));
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_28,*pfVar5,pfVar5[1]);
    EntityFinder::GetEntitiesWithinCircle2D
              (fVar9 * (float)iVar3 * 0.5,avStack_20,1,(FastCurve *)&local_28);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1)
    {
      puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30)
      ;
      this_00 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar6);
      cVar2 = canAttackUpPlant(this,this_00);
      if (cVar2 != '\0') {
        fVar9 = *(float *)(lVar4 + 0x2e4);
        iVar3 = FUN_0363ca64(*(undefined8 *)(this + 0x10));
        if (iVar3 < 3) {
          fVar8 = *(float *)(lVar4 + 0x2dc);
        }
        else {
          fVar8 = *(float *)(lVar4 + 0x2e0);
        }
        Plant::SetAttackUpValue(this_00,true,fVar9,fVar8);
        addPlantAttackUpEffect(this,this_00);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDeodarcedar::fire() */

void __thiscall PlantDeodarcedar::fire(PlantDeodarcedar *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float *pfVar5;
  RtObject *this_00;
  DeodarcedarLightningRune *this_01;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  vector<std::string,std::allocator<std::string>> avStack_38 [24];
  undefined4 local_20;
  float local_1c;
  float local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  applyAttackUpFeatures(this);
  this_02 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              **)(this + 0x10);
  pfVar5 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(this_02);
  iVar1 = *(int *)(this_02 + 0x110);
  fVar7 = *pfVar5;
  fVar9 = pfVar5[2];
  iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
  iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
  getCurrentRuneProjectileType(this);
  uVar6 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)aRStack_40);
  fVar8 = (float)(iVar1 * iVar2 + 0xa0 + iVar3 / 2);
  this_00 = (RtObject *)
            Board::AddProjectile
                      ((Board *)(fVar7 + 3.0),uVar6,(RtWeakPtr<Sexy::SoundResource> *)&local_20,
                       *(undefined8 *)(this + 0x10),0);
  this_01 = Sexy::RtObject::Cast<DeodarcedarLightningRune>(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  FUN_0363ca7c(this_01 + 0x1a8,*(undefined4 *)(this + 0x38));
  Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
  FUN_0363ca3c(this_01 + 0x170);
  FUN_0363ca9c(*(undefined4 *)(this + 0x28),this_01 + 0x1bc);
  getCurrentRuneIdleAnimationToPlay();
  DeodarcedarLightningRune::setProjectileIdleAnimationToPlay
            (this_01,(RtWeakPtr<Sexy::SoundResource> *)&local_20);
  std::string::~string((string *)&local_20);
  getCurrentRuneNormalAttackAnimationToPlay();
  getCurrentRuneCritAttackAnimationToPlay();
  DeodarcedarLightningRune::setLightningAttackEffectAnimationToPlay
            (this_01,avStack_38,(RtWeakPtr<Sexy::SoundResource> *)&local_20);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)&local_20);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_38);
  getCurrentRuneLightningArcAnimationToPlay();
  DeodarcedarLightningRune::setLightningArcAnimationToPlay
            (this_01,(RtWeakPtr<Sexy::SoundResource> *)&local_20);
  std::string::~string((string *)&local_20);
  getCurrentRuneDiameterGridNum(this);
  FUN_0363ca84(this_01 + 0x1ac);
  uVar4 = getCurrentRuneLightningNumPerSecond(this);
  FUN_0363ca8c(this_01 + 0x1b0,uVar4);
  uVar4 = getCurrentRuneLightningNumMax(this);
  FUN_0363ca94(this_01 + 0x1b4,uVar4);
  getCurrentRuneAliveDuration(this);
  FUN_0363dda0(this_01 + 0x1ec);
  getCurrentRuneLightningDamageFactor(this);
  FUN_0363caa4(this_01 + 0x1c0);
  getCurrentRuneLightningDamageFactorWithEnergy(this);
  FUN_0363caac(this_01 + 0x1c4);
  local_20 = getCurrentRuneInitialVelocity(this);
  local_1c = fVar8;
  local_18 = fVar9;
  Projectile::SetVelocity((Projectile *)this_01,(SexyVector3 *)&local_20);
  getCurrentRuneBaseDamageAmount(this);
  FUN_0363ca44(this_01 + 0xd8);
  getCurrentRuneCritRate(this);
  FUN_0363cab4(this_01 + 0x1cc);
  getCurrentRuneCritDamageAmountFactor(this);
  FUN_0363cabc(this_01 + 0x1d0);
  getCurrentRuneStuckRate(this);
  FUN_0363cac4(this_01 + 0x1d4);
  getCurrentRuneStuckDuration(this);
  FUN_0363cacc(this_01 + 0x1d8);
  getCurrentRuneLightningArcDiameterGridNum(this);
  FUN_0363cad4(this_01 + 0x1e0);
  getCurrentRuneLightningArcDamageAmount(this);
  FUN_0363cadc(this_01 + 0x1dc);
  getCurrentRuneNormalAttackDamageAmountOverride(this);
  FUN_0363cae4(this_01 + 0x1e4);
  *(undefined4 *)(this + 0x3c) = 0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_01);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDeodarcedar::OnAnimCommand(std::string const&, std::string const&) */

void PlantDeodarcedar::OnAnimCommand(string *param_1,string *param_2)

{
  char cVar1;
  undefined1 uVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_0363fae0(*(undefined8 *)(param_1 + 0x10));
  FUN_0363cb5c(asStack_18);
  cVar1 = std::operator==(param_2,asStack_18);
  if (cVar1 == '\0') {
    FUN_0363cbc4(asStack_10);
    cVar1 = std::operator==(param_2,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    uVar2 = 0;
    if (cVar1 == '\0') goto LAB_036418f8;
  }
  else {
    std::string::~string(asStack_18);
  }
  uVar2 = 1;
  fire((PlantDeodarcedar *)param_1);
  MessageRouter::Post<Plant*,Plant*>
            ((MessageRouter *)gMessageRouter,Message::PlantCombos,*(Plant **)(param_1 + 0x10));
LAB_036418f8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDeodarcedar::DoProjectileCombo() */

void __thiscall PlantDeodarcedar::DoProjectileCombo(PlantDeodarcedar *this)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 *puVar1;
  float local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)fire(this);
  puVar1 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(this_00);
  local_18 = (float)*puVar1;
  local_10 = *(undefined4 *)(puVar1 + 1);
  _local_18 = CONCAT44((int)((ulong)*puVar1 >> 0x20),local_18 + 30.0);
  (**(code **)(*(long *)this_00 + 0x78))(this_00,&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDeodarcedar::gatherLightningEnergy(int) */

void __thiscall PlantDeodarcedar::gatherLightningEnergy(PlantDeodarcedar *this,int param_1)

{
  bool bVar1;
  char cVar2;
  BoardTransforms *this_00;
  undefined8 *puVar3;
  Plant *this_01;
  NewRayEntity *pNVar4;
  size_t __n;
  int local_74;
  undefined8 local_70;
  undefined8 local_68;
  string asStack_60 [8];
  int local_58;
  int local_54;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_50 [24];
  RayEntityData aRStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_74 = param_1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_50);
  this_00 = (BoardTransforms *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            **)(this + 0x10));
  if (local_74 == 1) {
    BoardTransforms::BoardSpaceToGrid(this_00,*(float *)this_00,*(float *)(this_00 + 4));
    Sexy::Insets::Insets((Insets *)aRStack_38,local_58 + -1,local_54 + -1,3,3);
    EntityFinder::GetEntitiesInGridSquares(avStack_50,1,(Insets *)aRStack_38);
  }
  else {
    EntityFinder::GetEntitiesOnBoard(avStack_50,1);
  }
  local_70 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_50);
  local_68 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_50);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_70,(__normal_iterator *)&local_68), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
    this_01 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar3);
    __n = 0;
    cVar2 = isElectricPlant(this,this_01,false);
    if (cVar2 != '\0') {
      *(float *)(this + 0x3c) = *(float *)(this + 0x3c) + 1.0;
      RayEntityData::RayEntityData(aRStack_38);
      std::to_string<ActivityTypeID>((ActivityTypeID *)&local_74);
      std::operator+("POPANIM_EFFECTS_DEODARCEDAR_EFFECT_SAVE_",asStack_60);
      FUN_05474278(aRStack_38,(string *)&local_58);
      std::string::~string((string *)&local_58);
      std::string::~string(asStack_60);
      std::string::append(asStack_30,"",__n);
      std::string::append(asStack_28,"",__n);
      std::string::append(asStack_20,"lightningreed_bolt_start",__n);
      std::string::append(asStack_18,"lightningreed_bolt_middle",__n);
      local_10 = 0x40cccccd;
      local_c = 0x41133333;
      pNVar4 = GameObject::Create<NewRayEntity>();
      std::
      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)this_01);
      BoardEntity::PlaceOnBoard((SexyVector3 *)pNVar4);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_58,(RtWeakPtrBase *)asStack_60);
      NewRayEntity::Initialize((NewRayEntity *)0x3f800000,pNVar4,aRStack_38,(string *)&local_58);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
      Sexy::Point::Point((Point *)&local_58,0,-0x14);
      NewRayEntity::SetHitOffset(pNVar4,(string *)&local_58);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_58,(RtWeakPtrBase *)asStack_60);
      RayEntity::InitiateWithTarget((RayEntity *)pNVar4,(string *)&local_58);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
      TGANFSLinkageData::~TGANFSLinkageData((TGANFSLinkageData *)aRStack_38);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_70);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDeodarcedar::setState(DeodarcedarState) */

void __thiscall PlantDeodarcedar::setState(PlantDeodarcedar *this,int param_2)

{
  PlantAnimRig_WizardThorns *pPVar1;
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(*(long *)(this + 0x10) + 200) == param_2) goto switchD_03641d60_caseD_5;
  *(int *)(*(long *)(this + 0x10) + 200) = param_2;
  pPVar1 = (PlantAnimRig_WizardThorns *)FUN_0363fae0();
  switch(*(undefined4 *)(*(long *)(this + 0x10) + 200)) {
  case 4:
    (**(code **)(*(long *)pPVar1 + 0x1e8))(asStack_58,pPVar1);
    PlantAnimRig_DevilsFlower::playLoopAnimation((PlantAnimRig_DevilsFlower *)pPVar1,asStack_58);
    std::string::~string(asStack_58);
  default:
    goto switchD_03641d60_caseD_5;
  case 0xb:
    gatherLightningEnergy(this,1);
    PlantAnimRig_Deodarcedar::getEnergySaveSelfAnimation();
    break;
  case 0xc:
    PlantAnimRig_Deodarcedar::getUpgradeAnimation();
    break;
  case 0xd:
    PlantAnimRig_Deodarcedar::getAttackNormalAnimation();
  }
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  PlantAnimRig_WizardThorns::PlayTapAnimation(pPVar1,asStack_70,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::~string(asStack_70);
switchD_03641d60_caseD_5:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDeodarcedar::updateEnergySaveSelf() */

void __thiscall PlantDeodarcedar::updateEnergySaveSelf(PlantDeodarcedar *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  if (fVar1 <= *(float *)(this + 0x34)) {
    return;
  }
  setState(this,0xb);
  return;
}


/* PlantDeodarcedar::updateShooter() */

void __thiscall PlantDeodarcedar::updateShooter(PlantDeodarcedar *this)

{
  char cVar1;
  long lVar2;
  float fVar3;
  
  lVar2 = FUN_0363f28c(*(undefined8 *)(this + 0x10));
  fVar3 = (float)PVZ_T();
  if (((*(float *)(this + 0x30) < fVar3) && (*(float *)(lVar2 + 0x2b8) < *(float *)(this + 0x28)))
     && (cVar1 = canFindTargets(this), cVar1 != '\0')) {
    setState(this,0xd);
    return;
  }
  return;
}


/* PlantDeodarcedar::UpdateActions() */

void __thiscall PlantDeodarcedar::UpdateActions(PlantDeodarcedar *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if ((cVar1 == '\0') &&
     (FUN_0363f28c(*(undefined8 *)(this + 0x10)), *(int *)(*(long *)(this + 0x10) + 200) == 4)) {
    updateEnergySaveSelf(this);
    updateShooter(this);
    return;
  }
  return;
}


/* PlantDeodarcedar::onAttackNormalAnimationDone() */

void __thiscall PlantDeodarcedar::onAttackNormalAnimationDone(PlantDeodarcedar *this)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  FUN_0363f28c(*(undefined8 *)(this + 0x10));
  lVar1 = FUN_0363fae0(*(undefined8 *)(this + 0x10));
  *(undefined4 *)(this + 0x38) = 1;
  *(undefined4 *)(this + 0x28) = 0;
  fVar2 = (float)PVZ_T();
  fVar3 = (float)getCurrentRuneLaunchInterval(this);
  *(float *)(this + 0x30) = fVar3 + fVar2;
  FUN_0363ca6c(lVar1 + 0x3b8,*(undefined4 *)(this + 0x38));
  setState(this,4);
  return;
}


/* PlantDeodarcedar::checkUpgradeStage() */

void __thiscall PlantDeodarcedar::checkUpgradeStage(PlantDeodarcedar *this)

{
  long lVar1;
  
  lVar1 = FUN_0363f28c(*(undefined8 *)(this + 0x10));
  if (((*(float *)(this + 0x28) < *(float *)(lVar1 + 0x2d0)) || (*(int *)(this + 0x38) != 1)) &&
     ((*(float *)(this + 0x28) < *(float *)(lVar1 + 0x2d4) || (*(int *)(this + 0x38) != 2)))) {
    return;
  }
  setState(this,0xc);
  return;
}


/* PlantDeodarcedar::Initialize() */

void __thiscall PlantDeodarcedar::Initialize(PlantDeodarcedar *this)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  
  PlantFramework::Initialize((PlantFramework *)this);
  lVar1 = FUN_0363f28c(*(undefined8 *)(this + 0x10));
  uVar2 = PVZ_T();
  *(undefined4 *)(this + 0x30) = uVar2;
  fVar3 = (float)PVZ_T();
  *(float *)(this + 0x34) = fVar3 + *(float *)(lVar1 + 0x2c4);
  setState(this,4);
  checkUpgradeStage(this);
  return;
}


/* PlantDeodarcedar::CancelPlantfood() */

void __thiscall PlantDeodarcedar::CancelPlantfood(PlantDeodarcedar *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  setState(this,4);
  checkUpgradeStage(this);
  return;
}


/* PlantDeodarcedar::Idle() */

void __thiscall PlantDeodarcedar::Idle(PlantDeodarcedar *this)

{
  PlantFramework::Idle((PlantFramework *)this);
  setState(this,4);
  checkUpgradeStage(this);
  return;
}


/* PlantDeodarcedar::onEnergySaveSelfAnimationDone() */

void __thiscall PlantDeodarcedar::onEnergySaveSelfAnimationDone(PlantDeodarcedar *this)

{
  long lVar1;
  float fVar2;
  undefined4 uVar3;
  
  lVar1 = FUN_0363f28c(*(undefined8 *)(this + 0x10));
  *(float *)(this + 0x28) = *(float *)(this + 0x28) + *(float *)(lVar1 + 0x2c8);
  fVar2 = (float)getEnergySavedByPlants(this);
  uVar3 = ClampFloat(fVar2 + *(float *)(this + 0x28),0.0,*(float *)(lVar1 + 0x2d8));
  *(undefined4 *)(this + 0x28) = uVar3;
  *(undefined4 *)(this + 0x3c) = 0;
  fVar2 = (float)PVZ_T();
  *(float *)(this + 0x34) = fVar2 + *(float *)(lVar1 + 0x2c4);
  setState(this,4);
  checkUpgradeStage(this);
  return;
}


/* PlantDeodarcedar::onUpgradeAnimationDone() */

void __thiscall PlantDeodarcedar::onUpgradeAnimationDone(PlantDeodarcedar *this)

{
  long lVar1;
  
  lVar1 = FUN_0363fae0(*(undefined8 *)(this + 0x10));
  *(int *)(this + 0x38) = *(int *)(this + 0x38) + 1;
  FUN_0363ca6c(lVar1 + 0x3b8);
  setState(this,4);
  checkUpgradeStage(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDeodarcedar::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantDeodarcedar::onAnimStoppedCallback(PlantDeodarcedar *this,string *param_1)

{
  int iVar1;
  char cVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_0363fae0(*(undefined8 *)(this + 0x10));
  iVar1 = *(int *)(*(long *)(this + 0x10) + 200);
  if (iVar1 == 0xc) {
    PlantAnimRig_Deodarcedar::getUpgradeAnimation();
    cVar2 = std::operator==(param_1,asStack_10);
    std::string::~string(asStack_10);
    if (cVar2 != '\0') {
      onUpgradeAnimationDone(this);
    }
  }
  else if (iVar1 == 0xd) {
    PlantAnimRig_Deodarcedar::getAttackNormalAnimation();
    cVar2 = std::operator==(param_1,asStack_10);
    std::string::~string(asStack_10);
    if (cVar2 != '\0') {
      onAttackNormalAnimationDone(this);
    }
  }
  else if (iVar1 == 0xb) {
    PlantAnimRig_Deodarcedar::getEnergySaveSelfAnimation();
    cVar2 = std::operator==(param_1,asStack_10);
    std::string::~string(asStack_10);
    if (cVar2 != '\0') {
      onEnergySaveSelfAnimationDone(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDeodarcedar::ApplyPlantfood() */

void __thiscall PlantDeodarcedar::ApplyPlantfood(PlantDeodarcedar *this)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x10);
  if (*(int *)(lVar2 + 200) == 0xb) {
    onEnergySaveSelfAnimationDone(this);
    lVar2 = *(long *)(this + 0x10);
  }
  lVar2 = FUN_0363fae0(lVar2);
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  gatherLightningEnergy(this,2);
  uVar1 = getCurrentPlantfoodRuneStageIndex(this);
  FUN_0363ca74(lVar2 + 0x3bc,uVar1);
  return;
}

