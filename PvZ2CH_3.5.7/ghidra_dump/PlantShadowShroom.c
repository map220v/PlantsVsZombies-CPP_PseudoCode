// Class: PlantShadowShroom


/* PlantShadowShroom::PlantShadowShroom() */

void __thiscall PlantShadowShroom::PlantShadowShroom(PlantShadowShroom *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_0673bd70;
  return;
}


/* PlantShadowShroom::StaticNew() */

PlantShadowShroom * PlantShadowShroom::StaticNew(void)

{
  PlantShadowShroom *this;
  
  this = ::operator_new(0x28);
  PlantShadowShroom(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShadowShroom::StaticClassInit() */

void PlantShadowShroom::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantShadowShroom");
    (*pcVar2)(plVar1,asStack_10,FUN_03bd0de4,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantShadowShroom::StaticGetClass() */

long * PlantShadowShroom::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantShadowShroom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantShadowShroom::GetClass() const */

long * PlantShadowShroom::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantShadowShroom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantShadowShroom::~PlantShadowShroom() */

void __thiscall PlantShadowShroom::~PlantShadowShroom(PlantShadowShroom *this)

{
  *(undefined ***)this = &PTR_GetClass_0673bd70;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantShadowShroom::~PlantShadowShroom() */

void __thiscall PlantShadowShroom::~PlantShadowShroom(PlantShadowShroom *this)

{
  ~PlantShadowShroom(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShadowShroom::playSplatEffect() */

void __thiscall PlantShadowShroom::playSplatEffect(PlantShadowShroom *this)

{
  undefined4 uVar1;
  Effect_PopAnim *this_00;
  PopAnim *pPVar2;
  float *pfVar3;
  string asStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_SHADOWSHROOM_SPLAT_EFFECT");
  GetPAMByName(asStack_20);
  pPVar2 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,pPVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  std::string::~string(asStack_20);
  nop();
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,*pfVar3 - 100.0,pfVar3[1] - 105.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,-1);
  uVar1 = Board::MakeRenderOrder(0x64960,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),0);
  FUN_03bd097c(this_00 + 0x1c,uVar1);
  std::string::string((string *)aRStack_18,"special");
  Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShadowShroom::UpdateUnconditionally() */

void __thiscall PlantShadowShroom::UpdateUnconditionally(PlantShadowShroom *this)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  Plant *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = FUN_03bd1ebc(*(undefined8 *)(this + 0x10));
  cVar1 = PlantShadowvanilla::IsBoosted((PlantShadowvanilla *)this);
  if (cVar1 == '\0') {
    puVar4 = &k_boostedOffLayerSetName;
  }
  else {
    puVar4 = &k_boostedOnLayerSetName;
  }
  FUN_05475d88(asStack_10,puVar4);
  PlantAnimRig_DragonBabyBruit::ShowBoostedLayerSet(uVar3,asStack_10);
  std::string::~string(asStack_10);
  this_00 = *(Plant **)(this + 0x10);
  bVar2 = (bool)PlantShadowvanilla::IsBoosted((PlantShadowvanilla *)this);
  Plant::setShowShadowBoost(this_00,bVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantShadowShroom::poisonZombie(Zombie*) */

void __thiscall PlantShadowShroom::poisonZombie(PlantShadowShroom *this,Zombie *param_1)

{
  char cVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  lVar2 = FUN_03bd1ff8(*(undefined8 *)(this + 0x10));
                    /* WARNING: Load size is inaccurate */
  Zombie::ApplyCondition(*(Zombie **)(lVar2 + 700),0,param_1,0x30,1);
  fVar4 = *(float *)(lVar2 + 0x2b8);
  fVar3 = (float)Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
  Zombie::SetConditionTracker(fVar3 * fVar4,param_1,0x30);
  cVar1 = Plant::HasCondition(*(undefined8 *)(this + 0x10),0x13);
  if (cVar1 == '\0') {
    return;
  }
                    /* WARNING: Load size is inaccurate */
  Zombie::ApplyCondition(*(Zombie **)(lVar2 + 700),0,param_1,0x47,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShadowShroom::OnAnimCommand(std::string const&, std::string const&) */

void PlantShadowShroom::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  Zombie *this;
  EntityConditionTracker<Zombie,ZombieConditions> *pEVar4;
  long lVar5;
  Plant *this_00;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_a0;
  undefined8 local_98;
  Point aPStack_90 [8];
  undefined4 local_88;
  undefined4 local_84;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_2,"use_action");
  if (bVar1) {
    if (*(int *)(*(long *)(param_1 + 0x10) + 200) == 5) {
      lVar3 = FUN_03bd1ff8();
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
      EntityFinder::GetEntitiesOnBoard(avStack_80,2);
      local_a0 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_80);
      local_98 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_80);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98),
            bVar1) {
        std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
        nop();
        if ((((this != (Zombie *)0x0) && (cVar2 = RealObject::IsOnTeam(), cVar2 != '\0')) &&
            (cVar2 = (**(code **)(*(long *)this + 0x330))(this), cVar2 == '\0')) &&
           ((cVar2 = (**(code **)(*(long *)this + 0x328))(this), cVar2 == '\0' &&
            (cVar2 = Zombie::IsIgnoringAllDamage(this), cVar2 == '\0')))) {
          cVar2 = FUN_03bd12ec(*(undefined4 *)(this + 0xcc));
          if (cVar2 == '\0') {
            cVar2 = Zombie::HasCondition(this,0x30);
            if (cVar2 == '\0') {
              cVar2 = Plant::GetAvatarEnable(*(Plant **)(param_1 + 0x10));
              if (cVar2 == '\0') {
                    /* WARNING: Load size is inaccurate */
                Zombie::ApplyCondition(*(Zombie **)(lVar3 + 700),0,this,0x30,1);
                this_00 = *(Plant **)(param_1 + 0x10);
                fVar7 = *(float *)(lVar3 + 0x2b8);
              }
              else {
                    /* WARNING: Load size is inaccurate */
                Zombie::ApplyCondition(*(Zombie **)(lVar3 + 0x2c4),0,this,0x30,1);
                fVar7 = *(float *)(lVar3 + 0x2c0);
                this_00 = *(Plant **)(param_1 + 0x10);
              }
              fVar8 = (float)Plant::GetTotalDamageRate(this_00);
              Zombie::SetConditionTracker(fVar8 * fVar7,this,0x30);
            }
            else {
              pEVar4 = (EntityConditionTracker<Zombie,ZombieConditions> *)
                       Zombie::GetConditionTracker(this);
              lVar5 = EntityConditionTracker<Zombie,ZombieConditions>::GetCondition(pEVar4,0x30);
              fVar9 = *(float *)(lVar5 + 4);
              fVar8 = *(float *)(lVar5 + 0xc);
              fVar7 = (float)PVZ_T();
              pcVar6 = *(code **)(*(long *)this + 0x110);
              Sexy::Point::Point(aPStack_90,-1,-1);
              Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
              DamageInfo::DamageInfo
                        ((DamageInfo *)((fVar9 - fVar7) * fVar8),local_88,local_84,aDStack_68,
                         aPStack_90,0);
              (*pcVar6)(this,aDStack_68);
              DamageInfo::~DamageInfo(aDStack_68);
              Zombie::EndCondition(this,0x30);
            }
          }
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a0);
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShadowShroom::isZombieBlacklisted(Zombie*) */

void __thiscall PlantShadowShroom::isZombieBlacklisted(PlantShadowShroom *this,Zombie *param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_03bd1ff8(*(undefined8 *)(this + 0x10));
  uVar3 = FUN_03bd1a70(*(undefined8 *)(lVar2 + 0x2c8));
  uVar4 = FUN_03bd1ac0(*(undefined8 *)(lVar2 + 0x2d0));
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(param_1);
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                       (uVar3,uVar4,lVar5 + 8);
  local_10 = FUN_03bd1ac0(*(undefined8 *)(lVar2 + 0x2d0));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* PlantShadowShroom::TakeDamage(DamageInfo const&) */

void PlantShadowShroom::TakeDamage(DamageInfo *param_1)

{
  char cVar1;
  bool bVar2;
  Zombie *pZVar3;
  DamageInfo *in_x1;
  DamageInfo *in_x8;
  undefined8 uVar4;
  
  if (((*(RtObject **)in_x1 != (RtObject *)0x0) &&
      (pZVar3 = Sexy::RtObject::Cast<Zombie>(*(RtObject **)in_x1), pZVar3 != (Zombie *)0x0)) &&
     (cVar1 = isZombieBlacklisted((PlantShadowShroom *)param_1,pZVar3), cVar1 == '\0')) {
    uVar4 = *(undefined8 *)(in_x1 + 0x10);
    bVar2 = TestFlag<DamageTypeFlags>(uVar4,0x40000);
    if (((bVar2) || (bVar2 = TestFlag<DamageTypeFlags>(uVar4,0x100000), bVar2)) &&
       ((0.0 < *(float *)(*(long *)(param_1 + 0x10) + 0xd8) &&
        (*(float *)(*(long *)(param_1 + 0x10) + 0xd8) - *(float *)(in_x1 + 8) <= 0.0)))) {
      if (*(code **)(*(long *)param_1 + 0x348) == PlantFramework::IsInvincible) {
        cVar1 = PlantFramework::IsInvincible();
      }
      else {
        cVar1 = (**(code **)(*(long *)param_1 + 0x348))(param_1);
      }
      if (cVar1 == '\0') {
        playSplatEffect((PlantShadowShroom *)param_1);
        poisonZombie((PlantShadowShroom *)param_1,pZVar3);
      }
    }
  }
  DamageInfo::DamageInfo(in_x8,in_x1);
  return;
}


/* PlantShadowShroom::pushZombieAway(Zombie*) */

void __thiscall PlantShadowShroom::pushZombieAway(PlantShadowShroom *this,Zombie *param_1)

{
  float *pfVar1;
  PlantShadowShroomSubSystem *pPVar2;
  float fVar3;
  
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
  fVar3 = *pfVar1;
  pPVar2 = Board::GetGameSubSystem<PlantShadowShroomSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  PlantShadowShroomSubSystem::MarkZombie((Zombie *)pPVar2,fVar3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShadowShroom::onKilled(bool) */

void PlantShadowShroom::onKilled(bool param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  PlantFramework *this;
  long lVar4;
  undefined8 *puVar5;
  Zombie *this_00;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  Insets aIStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  this = (PlantFramework *)(ulong)param_1;
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_03bd098c(*(undefined8 *)(this + 0x10));
  if (1 < iVar2) {
    fVar9 = (float)PlantFramework::Rand(this,1.0);
    lVar4 = FUN_03bd1ff8(*(undefined8 *)(this + 0x10));
    uVar7 = *(undefined8 *)(this + 0x10);
    fVar10 = *(float *)(lVar4 + 0x2e0);
    iVar2 = FUN_03bd098c(uVar7);
    if (2 < iVar2) {
      lVar4 = FUN_03bd1ff8(uVar7);
      fVar10 = *(float *)(lVar4 + 0x2e4) * fVar10 + fVar10;
    }
    if (fVar9 < fVar10) {
      uVar8 = 0;
      iVar2 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
      iVar3 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
      Sexy::Insets::Insets(aIStack_30,iVar2,iVar3,1,1);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
      EntityFinder::GetEntitiesInGridSquares
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2,
                 aIStack_30);
      uVar7 = local_20;
      lVar4 = FUN_03bd09d0(local_20,local_18);
      if (lVar4 != 0) {
        do {
          puVar5 = (undefined8 *)FUN_03bd09dc(uVar7,uVar8);
          this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar5);
          if ((this_00 != (Zombie *)0x0) && (cVar1 = Zombie::IsControlled(this_00), cVar1 == '\0'))
          {
            pushZombieAway((PlantShadowShroom *)this,this_00);
          }
          uVar7 = local_20;
          uVar8 = uVar8 + 1;
          uVar6 = FUN_03bd09d0(local_20,local_18);
        } while (uVar8 < uVar6);
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

