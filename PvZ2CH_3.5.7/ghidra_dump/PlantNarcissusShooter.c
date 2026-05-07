// Class: PlantNarcissusShooter


/* PlantNarcissusShooter::onAnimStopped(std::string const&) */

void PlantNarcissusShooter::onAnimStopped(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x1a0))();
  return;
}


/* PlantNarcissusShooter::CanApplyPlantfood() */

byte __thiscall PlantNarcissusShooter::CanApplyPlantfood(PlantNarcissusShooter *this)

{
  byte bVar1;
  
  bVar1 = 0;
  if (this[0x2c] == (PlantNarcissusShooter)0x0) {
    bVar1 = (byte)this[0x4c] ^ 1;
  }
  return bVar1;
}


/* PlantNarcissusShooter::CancelPlantfood() */

void __thiscall PlantNarcissusShooter::CancelPlantfood(PlantNarcissusShooter *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  *(undefined4 *)(this + 0x48) = 0;
  return;
}


/* PlantNarcissusShooter::FindTargetAndFire(PlantWeapon) */

undefined8 PlantNarcissusShooter::FindTargetAndFire(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x4c) != '\0') {
    return 0;
  }
  uVar1 = PlantFramework::FindTargetAndFire();
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantNarcissusShooter::StaticClassInit() */

void PlantNarcissusShooter::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantNarcissusShooter");
    (*pcVar2)(plVar1,asStack_10,FUN_0424ea80,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantNarcissusShooter::StaticGetClass() */

long * PlantNarcissusShooter::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantNarcissusShooter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantNarcissusShooter::GetClass() const */

long * PlantNarcissusShooter::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantNarcissusShooter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantNarcissusShooter::PlayAttackAnimation() */

void __thiscall PlantNarcissusShooter::PlayAttackAnimation(PlantNarcissusShooter *this)

{
  char cVar1;
  long extraout_x0;
  float fVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0424d224(*(undefined8 *)(this + 0x10));
  if ((cVar1 != '\0') && (this[0x2c] == (PlantNarcissusShooter)0x0)) {
    Plant::GetProps();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if ((extraout_x0 != 0) &&
       (fVar2 = (float)PlantFramework::Rand((PlantFramework *)this,1.0),
       fVar2 < *(float *)(extraout_x0 + 0x2c8))) {
      this[0x4c] = (PlantNarcissusShooter)0x1;
    }
  }
  PlantFramework::PlayAttackAnimation((PlantFramework *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantNarcissusShooter::playZombieHitEffect(Zombie*, Sexy::SexyVector3) */

void PlantNarcissusShooter::playZombieHitEffect
               (undefined4 param_1_00,undefined4 param_2,undefined4 param_3,long param_1,
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *param_5)

{
  float *pfVar1;
  Effect_PopAnim *this;
  ResourceInfo *pRVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  float local_30;
  float local_2c;
  string asStack_28 [16];
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_50 = param_1_00;
  local_4c = param_2;
  local_48 = param_3;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)&local_30)
  ;
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(param_5);
  fVar4 = *pfVar1;
  fVar3 = (pfVar1[1] + local_2c) - pfVar1[2];
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_28,"POPANIM_EFFECTS_NARCISSUS_BUBBLES_HIT");
  GetPAMByName(asStack_28);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
  Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  std::string::~string(asStack_28);
  nop();
  Effect_PopAnim::SetCentered(this,true);
  uVar5 = 0;
  EATextSquish::Vec3::Vec3((Vec3 *)asStack_28,fVar4 + local_30,fVar3,0.0);
  local_18 = Sexy::SexyVector3::operator+((SexyVector3 *)asStack_28,(SexyVector3 *)&local_50);
  local_14 = fVar3;
  local_10 = uVar5;
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)&local_18,-1);
  uVar5 = Board::MakeRenderOrder(0x64961,*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x110),0);
  FUN_0424d1f4(this + 0x1c,uVar5);
  std::string::string((string *)&local_18,"animation");
  Effect_PopAnim::PlaySingleAnimation(this,(RtWeakPtr *)&local_18,2);
  std::string::~string((string *)&local_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantNarcissusShooter::PlantNarcissusShooter() */

void __thiscall PlantNarcissusShooter::PlantNarcissusShooter(PlantNarcissusShooter *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_06817890;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  return;
}


/* PlantNarcissusShooter::StaticNew() */

PlantNarcissusShooter * PlantNarcissusShooter::StaticNew(void)

{
  PlantNarcissusShooter *this;
  
  this = ::operator_new(0x60);
  PlantNarcissusShooter(this);
  return this;
}


/* PlantNarcissusShooter::~PlantNarcissusShooter() */

void __thiscall PlantNarcissusShooter::~PlantNarcissusShooter(PlantNarcissusShooter *this)

{
  *(undefined ***)this = &PTR_GetClass_06817890;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x30));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantNarcissusShooter::~PlantNarcissusShooter() */

void __thiscall PlantNarcissusShooter::~PlantNarcissusShooter(PlantNarcissusShooter *this)

{
  ~PlantNarcissusShooter(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantNarcissusShooter::DoPlantfoodEffect(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantNarcissusShooter::DoPlantfoodEffect
               (long param_1,RtWeakPtrBase *param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  SexyVector3 *pSVar4;
  long lVar5;
  Plant *pPVar6;
  int iVar7;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  RealObject *this_00;
  Projectile *this_01;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = *(RealObject **)(param_1 + 0x10);
  std::string::string(asStack_18,"Play_Plant_StarFruit_Attack");
  uVar8 = 1;
  RealObject::PlayPositionalSound(this_00,asStack_18,0.0);
  std::string::~string(asStack_18);
  nop();
  pPVar6 = *(Plant **)(param_1 + 0x10);
  *(undefined4 *)(pPVar6 + 0x150) = 1;
  cVar2 = Plant::GetAvatarEnable(pPVar6);
  if (cVar2 != '\0') {
    uVar8 = 2;
    *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x150) = 2;
  }
  iVar7 = 0;
  this_01 = (Projectile *)0x0;
  while( true ) {
    iVar1 = *(int *)(param_1 + 0x48);
    piVar3 = (int *)FUN_0424d254(*(undefined8 *)(param_1 + 0x30),(long)iVar1);
    if (*piVar3 <= iVar7) break;
    pPVar6 = *(Plant **)(param_1 + 0x10);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_18,param_2);
    this_01 = (Projectile *)Plant::Fire(pPVar6,asStack_18,param_3,uVar8);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    this = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             **)(param_1 + 0x10);
    pSVar4 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this);
    cVar2 = RealObject::IsOnWaterTile((RealObject *)this,pSVar4);
    if (cVar2 != '\0') {
      fVar10 = (float)FUN_0424d204(*(undefined4 *)(this_01 + 0xd8));
      lVar5 = FUN_0424f2b0(*(undefined8 *)(param_1 + 0x10));
      FUN_0424d208(fVar10 + *(float *)(lVar5 + 0x2d4),this_01 + 0xd8);
    }
    iVar7 = iVar7 + 1;
    fVar10 = (float)RandRangeFloat(-30.0,30.0);
    fVar10 = (float)Sexy::SexyMath::DegToRad(fVar10);
    fVar9 = cosf(fVar10);
    fVar10 = sinf(fVar10);
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,fVar9 * 333.0,fVar10 * 333.0,0.0);
    Projectile::SetVelocity(this_01,(SexyVector3 *)asStack_18);
  }
  *(int *)(param_1 + 0x48) = iVar1 + 1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_01);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantNarcissusShooter::LaunchBubble(Zombie*) */

void __thiscall PlantNarcissusShooter::LaunchBubble(PlantNarcissusShooter *this,Zombie *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  Board *pBVar6;
  undefined4 uVar4;
  float fVar5;
  string asStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  wstring awStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_30,"NarcissusBasic");
  fVar5 = 20.0;
  nop();
  uVar1 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::ToWString(asStack_30);
  Sexy::RtName::RtName(aRStack_18,awStack_20);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_28,uVar1,0xc,aRStack_18);
  Sexy::RtName::~RtName(aRStack_18);
  FUN_05476c50(awStack_20);
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_1);
                    /* WARNING: Load size is inaccurate */
  pBVar6._0_4_ = *puVar2;
  uVar4 = *(undefined4 *)((long)puVar2 + 4);
  lVar3 = *(long *)(gLawnApp + 0x9f0);
  if (*(char *)(lVar3 + 0x119) != '\0') {
    fVar5 = *(float *)(puVar2 + 1) + 20.0;
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_28);
  lVar3 = Board::AddProjectile
                    (pBVar6._0_4_,uVar4,fVar5,lVar3,aRStack_18,*(undefined8 *)(this + 0x10),0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  uVar4 = SharkMinion::getRow((SharkMinion *)param_1);
  uVar4 = Board::MakeRenderOrder(0xdbba1,uVar4,0);
  FUN_0424d1fc(lVar3 + 0x50,uVar4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  std::string::~string(asStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
}


/* PlantNarcissusShooter::ShouldClipWithWater() const */

bool __thiscall PlantNarcissusShooter::ShouldClipWithWater(PlantNarcissusShooter *this)

{
  long lVar1;
  
  lVar1 = FUN_0424f8d0(*(undefined4 *)(*(long *)(this + 0x10) + 0x114),
                       *(undefined4 *)(*(long *)(this + 0x10) + 0x110));
  return lVar1 == 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantNarcissusShooter::damageZombies(PlantWeapon, DamageInfo, bool) */

void __thiscall
PlantNarcissusShooter::damageZombies
          (PlantNarcissusShooter *this,undefined4 param_2,long param_3,char param_4)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  Zombie *this_00;
  ulong uVar8;
  GridItem *pGVar9;
  ZombieSkyCityTwinsPlane *pZVar10;
  ZombieCavalry *pZVar11;
  ZombieModernSolarTruck *pZVar12;
  ZombieSkycityBattlePlane *pZVar13;
  long extraout_x0;
  code *pcVar14;
  long lVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  lVar15 = *(long *)this;
  pcVar14 = *(code **)(lVar15 + 400);
  local_8 = ___stack_chk_guard;
  if (pcVar14 == PlantFramework::GetCollisionFlags) {
    uVar3 = PlantFramework::GetCollisionFlags();
    pcVar14 = *(code **)(lVar15 + 0x198);
  }
  else {
    uVar3 = (*pcVar14)();
    pcVar14 = *(code **)(*(long *)this + 0x198);
  }
  if (pcVar14 == PlantFramework::GetDamageFlags) {
    uVar6 = PlantFramework::GetDamageFlags();
  }
  else {
    uVar6 = (*pcVar14)(this,param_2);
  }
  operator|=(param_3 + 0x10,uVar6);
  uVar16 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  uVar4 = operator|(4,2);
  (**(code **)(*(long *)this + 0x2b8))((RtWeakPtr<Sexy::ResourceInfo> *)&local_30,this,param_2);
  EntityFinder::GetEntitiesTouchingRectangle
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,uVar4,
             (RtWeakPtr<Sexy::ResourceInfo> *)&local_30,
             *(undefined4 *)(*(long *)(this + 0x10) + 0x110),
             *(undefined4 *)(*(long *)(this + 0x10) + 0x110));
  uVar6 = local_20;
  lVar15 = FUN_0424d26c(local_20,local_18);
  if (lVar15 != 0) {
    do {
      puVar7 = (undefined8 *)FUN_0424d278(uVar6,uVar16);
      this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar7);
      if (this_00 == (Zombie *)0x0) {
        puVar7 = (undefined8 *)FUN_0424d278(local_20,uVar16);
        pGVar9 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar7);
        cVar1 = (**(code **)(*(long *)pGVar9 + 0x200))();
        if (cVar1 == '\0') goto LAB_0424fb18;
LAB_0424fc34:
        puVar7 = (undefined8 *)FUN_0424d278(local_20,uVar16);
        (**(code **)(*(long *)*puVar7 + 0x110))((long *)*puVar7,param_3);
      }
      else {
        cVar1 = RealObject::IsOnOpposingTeam((RealObject *)this_00,*(RealObject **)(this + 0x10));
        if ((((cVar1 != '\0') &&
             (cVar1 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar1 == '\0')) &&
            (cVar1 = Zombie::IsIgnoringAllDamage(this_00), cVar1 == '\0')) &&
           (cVar1 = (**(code **)(*(long *)this_00 + 0xb8))(this_00,uVar3), cVar1 != '\0')) {
          if (this[0x4c] == (PlantNarcissusShooter)0x0) {
LAB_0424fca0:
            EATextSquish::Vec3::Vec3((Vec3 *)&local_30,-10.0,-40.0,0.0);
            playZombieHitEffect(local_30,local_2c,local_28,this,this_00);
          }
          else {
            cVar1 = Zombie::IsBoss(this_00);
            if (((((cVar1 == '\0') && (iVar5 = Zombie::GetSizeType(this_00), iVar5 != 2)) &&
                 ((iVar5 = Zombie::GetSizeType(this_00), iVar5 != 1 &&
                  ((pZVar10 = Sexy::RtObject::Cast<ZombieSkyCityTwinsPlane>((RtObject *)this_00),
                   pZVar10 == (ZombieSkyCityTwinsPlane *)0x0 &&
                   (pZVar11 = Sexy::RtObject::Cast<ZombieCavalry>((RtObject *)this_00),
                   pZVar11 == (ZombieCavalry *)0x0)))))) &&
                (pZVar12 = Sexy::RtObject::Cast<ZombieModernSolarTruck>((RtObject *)this_00),
                pZVar12 == (ZombieModernSolarTruck *)0x0)) &&
               (((pZVar13 = Sexy::RtObject::Cast<ZombieSkycityBattlePlane>((RtObject *)this_00),
                 pZVar13 == (ZombieSkycityBattlePlane *)0x0 &&
                 (cVar1 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar1 == '\0')) &&
                (cVar1 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar1 == '\0')))) {
              lVar15 = FUN_0424f2b0(*(undefined8 *)(this + 0x10));
                    /* WARNING: Load size is inaccurate */
              Zombie::ApplyCondition(*(Zombie **)(lVar15 + 0x2d0),0,this_00,2,1);
            }
            if ((*(float *)(this + 0x54) == 0.0) ||
               (fVar17 = (float)PVZ_T(), *(float *)(this + 0x54) < fVar17)) {
              fVar17 = (float)PVZ_T();
              fVar18 = (float)PlantFramework::Rand((PlantFramework *)this,0.5);
              *(float *)(this + 0x54) = fVar17 + fVar18 + 1.5;
              goto LAB_0424fca0;
            }
          }
          if (param_4 != '\0') {
            bVar2 = Sexy::RtObject::IsA<Zomboss>((RtObject *)this_00);
            if (((bVar2) ||
                (bVar2 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)this_00), bVar2)) ||
               ((cVar1 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar1 != '\0' ||
                (cVar1 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar1 != '\0'))))
            goto LAB_0424fb18;
            fVar17 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
            Plant::GetProps();
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
            nop();
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
            if (fVar17 < *(float *)(extraout_x0 + 0x2b8)) {
              LaunchBubble(this,this_00);
            }
          }
          iVar5 = FUN_0424d244(*(undefined4 *)(this_00 + 0xb0));
          if (((iVar5 != 0) && (cVar1 = Zombie::IsHelmTypeMetallic(), cVar1 == '\0')) &&
             (iVar5 = FUN_0424d244(*(undefined4 *)(this_00 + 0xb0)), iVar5 != 1)) {
            Zombie::SetDamageScale(this_00,2.0);
          }
          bVar2 = Sexy::RtObject::IsA<ZombiePirateBarrel>((RtObject *)this_00);
          if (bVar2) {
            *(float *)(param_3 + 8) = *(float *)(param_3 + 8) + *(float *)(param_3 + 8);
          }
          goto LAB_0424fc34;
        }
      }
LAB_0424fb18:
      uVar6 = local_20;
      uVar16 = uVar16 + 1;
      uVar8 = FUN_0424d26c(local_20,local_18);
    } while (uVar16 < uVar8);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantNarcissusShooter::EndSuperAttack() */

void __thiscall PlantNarcissusShooter::EndSuperAttack(PlantNarcissusShooter *this)

{
  long lVar1;
  float *pfVar2;
  float local_cc;
  DamageInfo aDStack_c8 [8];
  float local_c0;
  undefined1 auStack_b8 [80];
  float local_68 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetProps();
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
  FUN_0424d25c(*(undefined8 *)(lVar1 + 0x70),3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
  Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
  if (*(float *)(this + 0x50) < local_c0) {
    local_68[0] = local_c0 - *(float *)(this + 0x50);
    local_cc = 0.0;
    pfVar2 = eastl::max_alt<float>(&local_cc,local_68);
    local_c0 = *pfVar2;
    operator|=(auStack_b8,0x2000);
    DamageInfo::DamageInfo((DamageInfo *)local_68,aDStack_c8);
    damageZombies(this,1,(RtWeakPtr<Sexy::ResourceInfo> *)local_68,0);
    DamageInfo::~DamageInfo((DamageInfo *)local_68);
  }
  this[0x4d] = (PlantNarcissusShooter)0x0;
  this[0x4c] = (PlantNarcissusShooter)0x0;
  *(undefined4 *)(this + 0x50) = 0;
  DamageInfo::~DamageInfo(aDStack_c8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantNarcissusShooter::UpdateActions() */

void __thiscall PlantNarcissusShooter::UpdateActions(PlantNarcissusShooter *this)

{
  PlantNarcissusShooter PVar1;
  char cVar2;
  PlantAnimRig_NarcissusShooter *this_00;
  SexyVector3 *pSVar3;
  long lVar4;
  float *pfVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_cc;
  DamageInfo aDStack_c8 [8];
  float local_c0;
  undefined8 local_b8;
  float local_68 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PlantAnimRig_NarcissusShooter *)
            UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  if (this_00 != (PlantAnimRig_NarcissusShooter *)0x0) {
    this_01 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                **)(this + 0x10);
    pSVar3 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this_01);
    cVar2 = RealObject::IsOnWaterTile((RealObject *)this_01,pSVar3);
    if (cVar2 == '\0') {
      PlantAnimRig_NarcissusShooter::setIsInWater(this_00,false);
      PVar1 = this[0x4d];
      goto joined_r0x04250368;
    }
    PlantAnimRig_NarcissusShooter::setIsInWater(this_00,true);
  }
  PVar1 = this[0x4d];
joined_r0x04250368:
  if (PVar1 != (PlantNarcissusShooter)0x0) {
    fVar6 = (float)PVZ_T();
    if (*(float *)(this + 0x58) < fVar6) {
      EndSuperAttack(this);
    }
    else {
      Plant::GetProps();
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
      FUN_0424d25c(*(undefined8 *)(lVar4 + 0x70),3);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
      Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
      fVar6 = local_c0;
      if (*(float *)(this + 0x50) < local_c0) {
        fVar7 = (float)PVZ_Dt();
        lVar4 = FUN_0424f2b0(*(undefined8 *)(this + 0x10));
        fVar8 = *(float *)(this + 0x50);
        fVar6 = (fVar7 / *(float *)(lVar4 + 0x2cc)) * fVar6;
        if (local_c0 < fVar6 + fVar8) {
          local_68[0] = local_c0 - fVar8;
          local_cc = 0.0;
          pfVar5 = eastl::max_alt<float>(&local_cc,local_68);
          fVar6 = *pfVar5;
        }
        if (0.0 < fVar6) {
          local_b8 = 0x1000000000000;
          *(float *)(this + 0x50) = fVar6 + fVar8;
          local_c0 = fVar6;
          DamageInfo::DamageInfo((DamageInfo *)local_68,aDStack_c8);
          damageZombies(this,1,(RtWeakPtr<Sexy::ResourceInfo> *)local_68,0);
          DamageInfo::~DamageInfo((DamageInfo *)local_68);
        }
      }
      DamageInfo::~DamageInfo(aDStack_c8);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantNarcissusShooter::damageZombies(PlantWeapon, bool) */

void __thiscall
PlantNarcissusShooter::damageZombies
          (PlantNarcissusShooter *this,undefined4 param_2,undefined1 param_3)

{
  char cVar1;
  long lVar2;
  SexyVector3 *pSVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  DamageInfo aDStack_c8 [8];
  float local_c0;
  undefined1 auStack_b8 [80];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetProps();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
  FUN_0424d25c(*(undefined8 *)(lVar2 + 0x70),param_2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
  operator|=(auStack_b8,0x1000000000000);
  this_00 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              **)(this + 0x10);
  pSVar3 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(this_00);
  cVar1 = RealObject::IsOnWaterTile((RealObject *)this_00,pSVar3);
  if (cVar1 != '\0') {
    lVar2 = FUN_0424f2b0(*(undefined8 *)(this + 0x10));
    local_c0 = *(float *)(lVar2 + 0x2d4) + local_c0;
  }
  DamageInfo::DamageInfo((DamageInfo *)aRStack_68,aDStack_c8);
  damageZombies(this,param_2,aRStack_68,param_3);
  DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
  DamageInfo::~DamageInfo(aDStack_c8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantNarcissusShooter::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantNarcissusShooter::Fire
          (PlantNarcissusShooter *this,RtWeakPtrBase *param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  NarcissusShooter_Effect_PopAnim *this_00;
  ResourceInfo *pRVar5;
  long lVar6;
  PopAnimRig *pPVar7;
  float *pfVar8;
  long lVar9;
  RealObject *this_01;
  float fVar10;
  float fVar11;
  string asStack_58 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if (cVar1 != '\0') {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,param_2);
    uVar4 = DoPlantfoodEffect(this,aRStack_50,param_3,param_4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
    goto LAB_04250628;
  }
  this_01 = *(RealObject **)(this + 0x10);
  std::string::string((string *)aRStack_50,"Play_Plant_DarkAges_FumeShroom_Attack");
  RealObject::PlayPositionalSound(this_01,(string *)aRStack_50,0.0);
  std::string::~string((string *)aRStack_50);
  nop();
  this_00 = Board::AddEffect<NarcissusShooter_Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  NarcissusShooter_Effect_PopAnim::SetPlant((Plant *)this_00);
  std::string::string(asStack_58,"POPANIM_EFFECTS_NARCISSUS_BUBBLES");
  GetPAMByName(asStack_58);
  pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_50);
  Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this_00,(PopAnim *)pRVar5,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  uVar2 = Board::MakeRenderOrder(0x64960,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),0);
  FUN_0424d1f4(this_00 + 0x1c,uVar2);
  Plant::GetProps();
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  lVar6 = FUN_0424d25c(*(undefined8 *)(lVar6 + 0x70),param_4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  if (param_4 == 0) {
    if (this[0x4c] == (PlantNarcissusShooter)0x0) {
      if (this[0x2c] == (PlantNarcissusShooter)0x0) {
        iVar3 = FUN_0424d21c(*(undefined8 *)(this + 0x10));
        if (1 < iVar3) {
          fVar10 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
          iVar3 = FUN_0424d21c(*(undefined8 *)(this + 0x10));
          if (iVar3 < 3) {
            fVar11 = 0.8;
          }
          else {
            fVar11 = 1.6;
          }
          if (fVar10 < fVar11) {
            this[0x2c] = (PlantNarcissusShooter)0x1;
            pPVar7 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this_00);
            std::string::string(asStack_58,"special2");
            Sexy::
            MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                      ((ReceivedDataCallback *)this_00,
                       NarcissusShooter_Effect_PopAnim::DoubleAttackCallBack);
            Sexy::Delegate1<std::string_const&>::
            Delegate1<NarcissusShooter_Effect_PopAnim,void(NarcissusShooter_Effect_PopAnim::*)(std::string_const&)>
                      (aDStack_38,(string *)aRStack_50);
            PopAnimRig::PlayAndStop(pPVar7,asStack_58,0,aDStack_38);
            std::string::~string(asStack_58);
            nop();
            goto LAB_0425082c;
          }
        }
        std::string::string((string *)aRStack_50,"special");
        Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this_00,(string *)aRStack_50,0);
        std::string::~string((string *)aRStack_50);
        nop();
      }
      else {
        std::string::string((string *)aRStack_50,"special2");
        Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this_00,(string *)aRStack_50,0);
        std::string::~string((string *)aRStack_50);
        nop();
        this[0x2c] = (PlantNarcissusShooter)0x0;
      }
LAB_0425082c:
      damageZombies(this,0,1);
    }
    else {
      std::string::string((string *)aRStack_50,"plantfood");
      Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this_00,(string *)aRStack_50,0);
      std::string::~string((string *)aRStack_50);
      nop();
      this[0x4d] = (PlantNarcissusShooter)0x1;
      fVar10 = (float)PVZ_T();
      lVar9 = FUN_0424f2b0(*(undefined8 *)(this + 0x10));
      *(float *)(this + 0x58) = fVar10 + *(float *)(lVar9 + 0x2cc);
    }
  }
  uVar4 = 0;
  pfVar8 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  EATextSquish::Vec3::Vec3
            ((Vec3 *)aRStack_50,*(float *)(lVar6 + 0x68) + *pfVar8,
             *(float *)(lVar6 + 0x6c) + pfVar8[1],pfVar8[2]);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_50,-1);
LAB_04250628:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantNarcissusShooter::separatePlantfoodProjectiles() */

void __thiscall PlantNarcissusShooter::separatePlantfoodProjectiles(PlantNarcissusShooter *this)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_0424f2b0(*(undefined8 *)(this + 0x10));
  iVar1 = *(int *)(lVar2 + 0x2c4);
  local_c = iVar1 / 9;
  std::vector<int,std::allocator<int>>::resize
            ((vector<int,std::allocator<int>> *)(this + 0x30),9,&local_c);
  iVar1 = iVar1 + local_c * -9;
  if (0 < iVar1) {
    uVar5 = *(undefined8 *)(this + 0x30);
    lVar2 = 8;
    do {
      lVar4 = lVar2 + -1;
      piVar3 = (int *)FUN_0424d254(uVar5,lVar2);
      *piVar3 = *piVar3 + 1;
      lVar2 = lVar4;
    } while (lVar4 != 7 - (ulong)(iVar1 - 1));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantNarcissusShooter::Initialize() */

void __thiscall PlantNarcissusShooter::Initialize(PlantNarcissusShooter *this)

{
  undefined4 uVar1;
  
  PlantFramework::Initialize((PlantFramework *)this);
  this[0x2c] = (PlantNarcissusShooter)0x0;
  *(undefined4 *)(this + 0x28) = 0xffffffff;
  *(undefined4 *)(this + 0x48) = 0;
  this[0x4c] = (PlantNarcissusShooter)0x0;
  this[0x4d] = (PlantNarcissusShooter)0x0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x58) = uVar1;
  separatePlantfoodProjectiles(this);
  return;
}

