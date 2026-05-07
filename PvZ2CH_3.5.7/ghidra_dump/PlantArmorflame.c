// Class: PlantArmorflame


/* PlantArmorflame::unregisterForEvents() */

void __thiscall PlantArmorflame::unregisterForEvents(PlantArmorflame *this)

{
  MinigameWhackAZombieModule::unregisterForEvents((MinigameWhackAZombieModule *)this);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  return;
}


/* PlantArmorflame::onZombieDied(Zombie*, DamageInfo const*) */

void PlantArmorflame::onZombieDied(Zombie *param_1,DamageInfo *param_2)

{
  HeroPlantFramework::AddExperience((HeroPlantFramework *)param_1,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantArmorflame::StaticClassInit() */

void PlantArmorflame::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantArmorflame");
    (*pcVar2)(plVar1,asStack_10,FUN_042c2a68,0x90,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantArmorflame::StaticGetClass() */

long * PlantArmorflame::StaticGetClass(void)

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
  uVar2 = HeroPlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantArmorflame",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantArmorflame::GetClass() const */

long * PlantArmorflame::GetClass(void)

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
  uVar2 = HeroPlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantArmorflame",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantArmorflame::GetMissileDamageImprove() */

float __thiscall PlantArmorflame::GetMissileDamageImprove(PlantArmorflame *this)

{
  int iVar1;
  
  iVar1 = HeroPlantFramework::GetTalentLevel((HeroPlantFramework *)this,1);
  return (float)iVar1 * _FUN_042c080c;
}


/* PlantArmorflame::GetMissileDeprioritizeRate() */

undefined4 __thiscall PlantArmorflame::GetMissileDeprioritizeRate(PlantArmorflame *this)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = HeroPlantFramework::IsTalentLevelMax((HeroPlantFramework *)this,1);
  uVar2 = 0x3f000000;
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  return uVar2;
}


/* PlantArmorflame::GetCannonballPiercingDamageImprove() */

float __thiscall PlantArmorflame::GetCannonballPiercingDamageImprove(PlantArmorflame *this)

{
  int iVar1;
  
  iVar1 = HeroPlantFramework::GetTalentLevel((HeroPlantFramework *)this,2);
  return (float)iVar1 * 0.2;
}


/* PlantArmorflame::GetCannonballPiercingSlowDownRate() */

undefined4 __thiscall PlantArmorflame::GetCannonballPiercingSlowDownRate(PlantArmorflame *this)

{
  char cVar1;
  
  cVar1 = HeroPlantFramework::IsTalentLevelMax((HeroPlantFramework *)this,2);
  if (cVar1 == '\0') {
    return 0x3eaa7efa;
  }
  return 0x3e2b020c;
}


/* PlantArmorflame::GetCannonballExtensionOfTime() */

undefined4 __thiscall PlantArmorflame::GetCannonballExtensionOfTime(PlantArmorflame *this)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = HeroPlantFramework::IsTalentLevelMax((HeroPlantFramework *)this,2);
  uVar2 = 0x41000000;
  if (cVar1 == '\0') {
    uVar2 = 0x40c00000;
  }
  return uVar2;
}


/* PlantArmorflame::FindTargetAndFire(PlantWeapon) */

char PlantArmorflame::FindTargetAndFire(long *param_1)

{
  char cVar1;
  PlantAnimRig_Armorflame *this;
  char cVar2;
  float fVar3;
  
  cVar2 = '\0';
  cVar1 = Plant::CanFindTarget(param_1[2]);
  if (cVar1 != '\0') {
    cVar1 = FUN_042c0144(param_1[2]);
    if (cVar1 != '\0') {
      fVar3 = (float)PVZ_T();
      if (*(float *)(param_1 + 0x10) < fVar3) {
        *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + 30.0;
        this = (PlantAnimRig_Armorflame *)FUN_042c1cbc(param_1[2]);
        PlantAnimRig_Armorflame::PlayLevel5Attack(this);
        return cVar1;
      }
    }
    cVar2 = '\x01';
    (**(code **)(*param_1 + 0x1a0))(param_1);
  }
  return cVar2;
}


/* PlantArmorflame::PlantArmorflame() */

void __thiscall PlantArmorflame::PlantArmorflame(PlantArmorflame *this)

{
  HeroPlantFramework::HeroPlantFramework((HeroPlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_0682ca70;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x88));
  return;
}


/* PlantArmorflame::StaticNew() */

PlantArmorflame * PlantArmorflame::StaticNew(void)

{
  PlantArmorflame *this;
  
  this = ::operator_new(0x90);
  PlantArmorflame(this);
  return this;
}


/* PlantArmorflame::~PlantArmorflame() */

void __thiscall PlantArmorflame::~PlantArmorflame(PlantArmorflame *this)

{
  *(undefined ***)this = &PTR_GetClass_0682ca70;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x88));
  HeroPlantFramework::~HeroPlantFramework((HeroPlantFramework *)this);
  return;
}


/* PlantArmorflame::~PlantArmorflame() */

void __thiscall PlantArmorflame::~PlantArmorflame(PlantArmorflame *this)

{
  ~PlantArmorflame(this);
  AK::FreeHook(this);
  return;
}


/* PlantArmorflame::ApplyPlantfood() */

void __thiscall PlantArmorflame::ApplyPlantfood(PlantArmorflame *this)

{
  bool bVar1;
  ComponentWarmingRadius *this_00;
  long lVar2;
  
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  *(undefined4 *)(this + 0x60) = 0;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x88));
  if (!bVar1) {
    return;
  }
  this_00 = (ComponentWarmingRadius *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x88))
  ;
  lVar2 = FUN_042c2254(*(undefined8 *)(this + 0x10));
  ComponentWarmingRadius::SetRadiusProps(this_00,(ComponentWarmingRadiusProps *)(lVar2 + 0x3e0));
  return;
}


/* PlantArmorflame::CancelPlantfood() */

void __thiscall PlantArmorflame::CancelPlantfood(PlantArmorflame *this)

{
  bool bVar1;
  ComponentWarmingRadius *this_00;
  long lVar2;
  
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x88));
  if (!bVar1) {
    return;
  }
  this_00 = (ComponentWarmingRadius *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x88))
  ;
  lVar2 = FUN_042c2254(*(undefined8 *)(this + 0x10));
  ComponentWarmingRadius::SetRadiusProps(this_00,(ComponentWarmingRadiusProps *)(lVar2 + 0x2c8));
  return;
}


/* PlantArmorflame::registerForEvents() */

void __thiscall PlantArmorflame::registerForEvents(PlantArmorflame *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  HeroPlantFramework::registerForEvents((HeroPlantFramework *)this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDied);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<PlantArmorflame,void(PlantArmorflame::*)(Zombie*,DamageInfo_const*)>>
            ((MessageRouter *)puVar1,Message::ZombieDied,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantArmorflame::OnAnimCommand(std::string const&, std::string const&) */

void __thiscall
PlantArmorflame::OnAnimCommand(PlantArmorflame *this,string *param_1,string *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  float *pfVar6;
  ArmorflameClusterBomb *this_00;
  string *psVar7;
  string *psVar8;
  long lVar9;
  float local_30 [4];
  undefined8 local_20;
  undefined8 local_18;
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"lv5_attack");
  if (bVar1) {
    lVar9 = 0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    EntityFinder::GetEntitiesOnBoard
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2);
    iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
    iVar2 = BoardTransforms::GridToBoardSpaceX(iVar2 + -1);
    iVar3 = BoardTransforms::GridToBoardSpaceY(2);
    EATextSquish::Vec3::Vec3((Vec3 *)local_30,(float)iVar2,(float)iVar3,0.0);
    lVar4 = FUN_042c0164(local_20,local_18);
    if (lVar4 != 0) {
      do {
        puVar5 = (undefined8 *)FUN_042c0170(local_20,lVar9);
        if ((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)*puVar5 !=
            (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)0x0) {
          pfVar6 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                           *)*puVar5);
          if (*pfVar6 < local_30[0]) {
            local_30[0] = *pfVar6;
          }
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 != lVar4);
    }
    this_00 = GameObject::Create<ArmorflameClusterBomb>();
    ArmorflameClusterBomb::initialize(this_00);
    (**(code **)(*(long *)this_00 + 0x78))(this_00,(Vec3 *)local_30);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
    psVar7 = (string *)0x1;
    psVar8 = ___stack_chk_guard;
    param_2 = local_8;
    if (local_8 == ___stack_chk_guard) {
      return;
    }
  }
  else {
    psVar7 = ___stack_chk_guard;
    psVar8 = local_8;
    if (local_8 == ___stack_chk_guard) {
      PlantFramework::OnAnimCommand((string *)this,param_1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(psVar7,psVar8,param_2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantArmorflame::refreshBuff() */

void __thiscall PlantArmorflame::refreshBuff(PlantArmorflame *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  Plant *this_00;
  EntityConditionTracker<Plant,PlantConditions> *pEVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  int local_38;
  int local_34;
  Insets aIStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar9 = PVZ_EOT();
  Plant::ApplyAddition
            ((Plant *)((float)*(int *)(this + 0x6c) * 0.25),uVar9,*(undefined8 *)(this + 0x10),1,2);
  iVar2 = HeroPlantFramework::GetTalentLevel((HeroPlantFramework *)this,0);
  if (0 < iVar2) {
    uVar7 = 0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    BoardEntity::CalcGridPosition();
    Sexy::Insets::Insets(aIStack_30,local_38 + -1,local_34 + -1,4,3);
    EntityFinder::GetEntitiesInGridSquares
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,1,
               aIStack_30);
    uVar8 = local_20;
    lVar3 = FUN_042c0164(local_20,local_18);
    if (lVar3 != 0) {
      do {
        puVar4 = (undefined8 *)FUN_042c0170(uVar8,uVar7);
        this_00 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar4);
        if ((this_00 != (Plant *)0x0) && (*(Plant **)(this + 0x10) != this_00)) {
          Plant::ApplyCondition(0x3f800000,0,this_00,0x20);
          pEVar5 = (EntityConditionTracker<Plant,PlantConditions> *)
                   PlayerInfo::GetDisplayingBundleList((PlayerInfo *)this_00);
          lVar3 = EntityConditionTracker<Plant,PlantConditions>::GetCondition(pEVar5,0x20);
          iVar2 = HeroPlantFramework::GetTalentLevel((HeroPlantFramework *)this,0);
          *(float *)(lVar3 + 0xc) = (float)iVar2 * 0.03;
          cVar1 = HeroPlantFramework::IsTalentLevelMax((HeroPlantFramework *)this,0);
          if (cVar1 != '\0') {
            Plant::ApplyAddition((Plant *)0x3e4ccccd,0x3f800000,this_00,2,3);
          }
        }
        uVar8 = local_20;
        uVar7 = uVar7 + 1;
        uVar6 = FUN_042c0164(local_20,local_18);
      } while (uVar7 < uVar6);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantArmorflame::UpdateUnconditionally() */

void __thiscall PlantArmorflame::UpdateUnconditionally(PlantArmorflame *this)

{
  int *piVar1;
  float fVar2;
  int local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  HeroPlantFramework::UpdateUnconditionally((HeroPlantFramework *)this);
  fVar2 = (float)PVZ_T();
  if (*(float *)(this + 0x78) < fVar2) {
    fVar2 = (float)PVZ_T();
    local_10[1] = 0;
    local_10[0] = *(int *)(this + 0x6c) + -1;
    *(float *)(this + 0x78) = fVar2 + *(float *)(this + 0x74);
    piVar1 = eastl::max_alt<int>(local_10,local_10 + 1);
    *(int *)(this + 0x6c) = *piVar1;
    refreshBuff(this);
  }
  fVar2 = (float)PVZ_T();
  if (*(float *)(this + 0x7c) < fVar2) {
    fVar2 = (float)PVZ_T();
    *(float *)(this + 0x7c) = fVar2 + 1.0;
    if (local_8 == ___stack_chk_guard) {
      refreshBuff(this);
      return;
    }
  }
  else if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x042c4030 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* PlantArmorflame::Initialize() */

void __thiscall PlantArmorflame::Initialize(PlantArmorflame *this)

{
  long lVar1;
  RtObject *this_00;
  PlantAnimRig_Armorflame *this_01;
  BoardEntity *this_02;
  ComponentWarmingRadius *this_03;
  float fVar2;
  undefined4 uVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  lVar1 = FUN_042c2254(*(undefined8 *)(this + 0x10));
  uVar3 = *(undefined4 *)(lVar1 + 700);
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(lVar1 + 0x2b8);
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 2;
  *(undefined4 *)(this + 0x74) = uVar3;
  fVar2 = (float)PVZ_T();
  *(float *)(this + 0x78) = fVar2 + *(float *)(this + 0x74);
  fVar2 = (float)PVZ_T();
  *(float *)(this + 0x7c) = fVar2 + 1.0;
  uVar3 = PVZ_T();
  *(undefined4 *)(this + 0x80) = uVar3;
  this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  this_01 = Sexy::RtObject::Cast<PlantAnimRig_Armorflame>(this_00);
  PlantAnimRig_Armorflame::SetEnhancementLevel(this_01,0);
  this_02 = *(BoardEntity **)(this + 0x10);
  BoardEntity::GetComponentRunner(this_02);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_28);
  std::string::string(asStack_18,"WarmingRadius");
  ComponentRunner::Add<ComponentWarmingRadiusForHeroPlant>
            ((ComponentRunner *)this_02,aRStack_20,asStack_18);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x88),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  this_03 = (ComponentWarmingRadius *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x88))
  ;
  ComponentWarmingRadius::SetRadiusProps(this_03,(ComponentWarmingRadiusProps *)(lVar1 + 0x2c8));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantArmorflame::increaseAttackCount() */

void __thiscall PlantArmorflame::increaseAttackCount(PlantArmorflame *this)

{
  int iVar1;
  int *piVar2;
  RtObject *this_00;
  PlantAnimRig_Armorflame *this_01;
  float fVar3;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar3 = (float)PVZ_T();
  iVar1 = *(int *)(this + 100);
  *(int *)(this + 100) = iVar1 + 1;
  *(float *)(this + 0x78) = fVar3 + *(float *)(this + 0x74);
  if (iVar1 + 1 < *(int *)(this + 0x68)) {
    if (local_8 == ___stack_chk_guard) {
      return;
    }
  }
  else {
    *(undefined4 *)(this + 100) = 0;
    local_c = *(int *)(this + 0x6c) + 1;
    piVar2 = eastl::min_alt<int>(&local_c,(int *)(this + 0x70));
    *(int *)(this + 0x6c) = *piVar2;
    this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    this_01 = Sexy::RtObject::Cast<PlantAnimRig_Armorflame>(this_00);
    if (local_8 == ___stack_chk_guard) {
      PlantAnimRig_Armorflame::SetEnhancementLevel(this_01,*(int *)(this + 0x6c));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantArmorflame::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantArmorflame::Fire
          (PlantArmorflame *this,RtWeakPtrBase *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  undefined8 uVar4;
  ArmorflameCannonball *this_00;
  RtObject *this_01;
  ArmorflameCannonball *this_02;
  Projectile *this_03;
  DVec3 *this_04;
  ArmorflameMissile *this_05;
  RealObject *this_06;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  wstring awStack_38 [8];
  float local_30 [6];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if (cVar1 == '\0') {
    increaseAttackCount(this);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,param_2);
    this_01 = (RtObject *)
              PlantFramework::Fire
                        ((PlantFramework *)this,(RtWeakPtr<Sexy::SoundResource> *)aRStack_18,param_3
                         ,param_4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    if ((this_01 != (RtObject *)0x0) &&
       (this_02 = Sexy::RtObject::Cast<ArmorflameCannonball>(this_01),
       this_02 != (ArmorflameCannonball *)0x0)) {
      ArmorflameCannonball::InitializeArmorflameCannonball(this_02,false);
    }
  }
  else {
    pfVar3 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      **)(this + 0x10));
    fVar11 = *pfVar3;
    fVar10 = pfVar3[1];
    fVar12 = pfVar3[2];
    uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
    std::string::string(asStack_40,"ArmorflameCannonball");
    Sexy::ToWString(asStack_40);
    Sexy::RtName::RtName(aRStack_18,awStack_38);
    PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_50,uVar4,0xc,aRStack_18);
    Sexy::RtName::~RtName(aRStack_18);
    FUN_05476c50(awStack_38);
    std::string::~string(asStack_40);
    nop();
    if (*(int *)(this + 0x60) == 0) {
      iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
      fVar7 = (float)-iVar2;
    }
    else {
      fVar7 = 0.0;
      if (*(int *)(this + 0x60) == 1) {
        iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
        fVar7 = (float)iVar2;
      }
    }
    uVar4 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_50);
    Board::AddProjectile
              ((Board *)(fVar11 + 120.0),fVar7 + fVar10,fVar12,uVar4,aRStack_18,
               *(undefined8 *)(this + 0x10),0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    nop();
    ArmorflameCannonball::InitializeArmorflameCannonball(this_00,true);
    iVar2 = *(int *)(this + 0x60);
    if (iVar2 == 2) {
      uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
      lVar5 = 0;
      std::string::string(asStack_40,"ArmorflameMissile");
      Sexy::ToWString(asStack_40);
      Sexy::RtName::RtName(aRStack_18,awStack_38);
      PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_48,uVar4,0xc,aRStack_18);
      Sexy::RtName::~RtName(aRStack_18);
      FUN_05476c50(awStack_38);
      std::string::~string(asStack_40);
      nop();
      local_30[0] = -40.0;
      local_30[1] = 60.0;
      local_30[2] = -40.0;
      local_30[3] = -40.0;
      local_30[4] = 30.0;
      local_30[5] = 30.0;
      do {
        iVar2 = 0;
        fVar9 = *(float *)((long)local_30 + lVar5);
        fVar8 = *(float *)((long)local_30 + lVar5 + 8);
        fVar7 = *(float *)((long)local_30 + lVar5 + 0x10);
        do {
          uVar4 = *(undefined8 *)(gLawnApp + 0x9f0);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_48);
          this_03 = (Projectile *)
                    Board::AddProjectile
                              ((Board *)(fVar11 + fVar9),fVar10 + fVar8,fVar12 + fVar7,uVar4,
                               aRStack_18,*(undefined8 *)(this + 0x10),0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
          fVar6 = (float)iVar2;
          iVar2 = iVar2 + 1;
          Sexy::SexyMath::DegToRad((float)(int)(fVar6 * -600.0));
          FUN_042c0138(this_03 + 0xc4);
          this_04 = (DVec3 *)Projectile::GetVelocity(this_03);
          fVar6 = (float)DVec3::getLength(this_04);
          Projectile::SetRotatedVelocity(this_03,fVar6);
          nop();
          ArmorflameMissile::InitializeArmorflameMissile(this_05,true);
        } while (iVar2 != 4);
        lVar5 = lVar5 + 4;
      } while (lVar5 != 8);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
      iVar2 = *(int *)(this + 0x60);
    }
    *(int *)(this + 0x60) = iVar2 + 1;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  }
  this_06 = *(RealObject **)(this + 0x10);
  std::string::string((string *)aRStack_18,"Play_Coconut_Cannon_Fire");
  RealObject::PlayPositionalSound(this_06,(string *)aRStack_18,0.0);
  std::string::~string((string *)aRStack_18);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}

