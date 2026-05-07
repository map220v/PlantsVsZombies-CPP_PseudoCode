// Class: PlantSunflower


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSunflower::ProduceCollectable(PlantAction const&, std::string const&) */

void __thiscall
PlantSunflower::ProduceCollectable(PlantSunflower *this,PlantAction *param_1,string *param_2)

{
  Collectable *this_00;
  undefined8 *puVar1;
  string asStack_40 [8];
  float local_38;
  float fStack_34;
  float local_30;
  float local_28 [4];
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_40,param_2);
  this_00 = (Collectable *)Board::AddCollectable(*(string **)(gLawnApp + 0x9f0));
  if (this_00 != (Collectable *)0x0) {
    puVar1 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             **)(this + 0x10));
    local_38 = (float)*puVar1;
    local_30 = *(float *)(puVar1 + 1) - *(float *)(param_1 + 0x6c);
    fStack_34 = (float)((ulong)*puVar1 >> 0x20);
    _local_38 = CONCAT44(fStack_34,*(float *)(param_1 + 0x68) + local_38);
    DVec3::DVec3((DVec3 *)local_28);
    local_28[0] = (float)PlantFramework::Rand((PlantFramework *)this,80.0);
    local_28[0] = local_28[0] - 40.0;
    local_28[1] = 5.0;
    local_28[2] = (float)PlantFramework::Rand((PlantFramework *)this,170.0);
    local_28[2] = local_28[2] + 170.0;
    if (3 < *(int *)(*(long *)(this + 0x10) + 0x110)) {
      _local_38 = CONCAT44(fStack_34 - 10.0,local_38);
      local_28[1] = 0.0;
    }
    (**(code **)(*(long *)this_00 + 0x78))(this_00,&local_38);
    EATextSquish::Vec3::Vec3(aVStack_18,0.0,0.0,-600.0);
    Collectable::SetMotionNewtonian(this_00,(SexyVector3 *)local_28,(SexyVector3 *)aVStack_18,true);
    Collectable::StartExpirationTimerAfterMotion(this_00);
  }
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* PlantSunflower::ProduceCoin(PlantAction const&, std::string const&) */

void __thiscall
PlantSunflower::ProduceCoin(PlantSunflower *this,PlantAction *param_1,string *param_2)

{
  int iVar1;
  int iVar2;
  ActivityConfig *this_00;
  long lVar3;
  long extraout_x0;
  
  this_00 = (ActivityConfig *)LawnApp::GetActivityConfig();
  iVar1 = ActivityConfig::GetMaxCoinSpecialCollected(this_00);
  iVar2 = UIBattleOrder::GetCurrentExp(*(UIBattleOrder **)(gLawnApp + 0x9f0));
  if (((iVar2 < iVar1) && (lVar3 = ProduceCollectable(this,param_1,param_2), lVar3 != 0)) &&
     (nop(), extraout_x0 != 0)) {
    iVar1 = CollectableCure::GetCureValue();
    UIGiftFoReturn::SetIntegral(*(UIGiftFoReturn **)(gLawnApp + 0x9f0),iVar2 + iVar1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSunflower::ProduceSun(PlantAction const&) */

void __thiscall PlantSunflower::ProduceSun(PlantSunflower *this,PlantAction *param_1)

{
  char cVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x1f0))();
  if (cVar1 != '\0') {
    (**(code **)(*(long *)this + 0x540))(asStack_10,this);
    (**(code **)(*(long *)this + 0x530))(this,param_1,asStack_10);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSunflower::ProduceCoin(PlantAction const&) */

void __thiscall PlantSunflower::ProduceCoin(PlantSunflower *this,PlantAction *param_1)

{
  code *pcVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x538);
  std::string::string(asStack_10,"coin_gold");
  (*pcVar1)(this,param_1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSunflower::Initialize() */

void __thiscall PlantSunflower::Initialize(PlantSunflower *this)

{
  float fVar1;
  
  PlantFramework::Initialize((PlantFramework *)this);
  fVar1 = *(float *)(*(long *)(this + 0x10) + 0xc0);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)(*(long *)(this + 0x10) + 0xb4),fVar1 * 0.125,fVar1 * 0.5);
  *(undefined4 *)(this + 0x28) = 0;
  return;
}


/* PlantSunflower::PlantSunflower() */

void __thiscall PlantSunflower::PlantSunflower(PlantSunflower *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  this[0x2c] = (PlantSunflower)0x1;
  *(undefined ***)this = &PTR_GetClass_067c6a30;
  return;
}


/* PlantSunflower::StaticNew() */

PlantSunflower * PlantSunflower::StaticNew(void)

{
  PlantSunflower *this;
  
  this = ::operator_new(0x30);
  PlantSunflower(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSunflower::StaticClassInit() */

void PlantSunflower::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantSunflower");
    (*pcVar2)(plVar1,asStack_10,FUN_0406fa08,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSunflower::StaticGetClass() */

long * PlantSunflower::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantSunflower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantSunflower::GetClass() const */

long * PlantSunflower::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantSunflower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantSunflower::~PlantSunflower() */

void __thiscall PlantSunflower::~PlantSunflower(PlantSunflower *this)

{
  *(undefined ***)this = &PTR_GetClass_067c6a30;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantSunflower::~PlantSunflower() */

void __thiscall PlantSunflower::~PlantSunflower(PlantSunflower *this)

{
  ~PlantSunflower(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSunflower::onGroundCherryApplyPlantFood() */

void __thiscall PlantSunflower::onGroundCherryApplyPlantFood(PlantSunflower *this)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  pcVar3 = *(code **)(*(long *)this + 0x1e8);
  local_8 = ___stack_chk_guard;
  Plant::GetProps();
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  uVar2 = FUN_0406f6c8(*(undefined8 *)(lVar1 + 0x70));
  (*pcVar3)(this,uVar2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSunflower::registerForEvents() */

void __thiscall PlantSunflower::registerForEvents(PlantSunflower *this)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGroundCherryApplyPlantFood);
  Sexy::Delegate0::Delegate0<PlantSunflower,void(PlantSunflower::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::PlantFoodByGroundCherry,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSunflower::onKilled(bool) */

void PlantSunflower::onKilled(bool param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  SexyVector3 *pSVar5;
  BoardTransforms *this;
  RtObject *this_00;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  NameMapperBase *this_03;
  RtObject *this_04;
  NewAvatarGeneralSkillBoost *pNVar6;
  GridItemSunSeed *this_05;
  Board *this_06;
  Plant *this_07;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var7;
  int local_20;
  int local_1c;
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  uVar4 = (ulong)param_1;
  local_8 = ___stack_chk_guard;
  this_07 = *(Plant **)(uVar4 + 0x10);
  std::string::string(asStack_10,"NoDiedMsg");
  cVar1 = Plant::HasTag(this_07,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (cVar1 == '\0') {
    cVar1 = Board::IsSunSpawningSuppressed(*(Board **)(gLawnApp + 0x9f0));
    if (cVar1 == '\0') {
      p_Var7 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 **)(uVar4 + 0x10);
      iVar3 = FUN_0406f6a8(p_Var7);
      if (iVar3 == 2) {
        pSVar5 = (SexyVector3 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost(p_Var7);
        Board::FanOutSun(*(Board **)(gLawnApp + 0x9f0),pSVar5,0x19,false,true,false,false,false);
      }
      else if (2 < iVar3) {
        pSVar5 = (SexyVector3 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost(p_Var7);
        Board::FanOutSun(*(Board **)(gLawnApp + 0x9f0),pSVar5,0x4b,false,true,false,false,false);
        p_Var7 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   **)(uVar4 + 0x10);
        iVar3 = FUN_0406f6a8(p_Var7);
        if (iVar3 == 5) {
          this = (BoardTransforms *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost(p_Var7);
          BoardTransforms::BoardSpaceToGrid(this,*(float *)this,*(float *)(this + 4));
          this_06 = *(Board **)(gLawnApp + 0x9f0);
          std::string::string(asStack_10,"sunseed");
          this_00 = (RtObject *)Board::AddGridItem(this_06,asStack_10,local_20,local_1c,1);
          std::string::~string(asStack_10);
          nop();
          this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
          this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
          this_03 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
          std::string::string(asStack_10,"sunflower_new_avatar_2");
          iVar3 = NameMapperBase::GetIdForName(this_03,asStack_10);
          std::string::~string(asStack_10);
          nop();
          cVar1 = PlayerInfo::IsPlantNewAvatarUnLocked(this_02,iVar3);
          if (cVar1 != '\0') {
            NewAvatar::GetAvatarInfoByAvatarId(iVar3);
            bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
            if (bVar2) {
              NewAvatar::GetAvatarInfoByAvatarId(iVar3);
              this_04 = (RtObject *)
                        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
              pNVar6 = Sexy::RtObject::Cast<NewAvatarGeneralSkillBoost>(this_04);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
              if (pNVar6 != (NewAvatarGeneralSkillBoost *)0x0) {
                this_05 = Sexy::RtObject::Cast<GridItemSunSeed>(this_00);
                GridItemWaterMist::SetExtraAttackRate
                          ((GridItemWaterMist *)this_05,*(float *)(pNVar6 + 100));
              }
            }
            else {
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
            }
          }
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


/* PlantSunflower::UpdateActions() */

void __thiscall PlantSunflower::UpdateActions(PlantSunflower *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  string *psVar5;
  Board *this_00;
  float fVar6;
  
  if ((*(int *)(*(long *)(this + 0x10) + 200) != 4) ||
     (fVar6 = (float)PVZ_T(), fVar6 <= *(float *)(*(long *)(this + 0x10) + 300))) {
    return;
  }
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  iVar3 = FUN_0406f6b0(*(undefined4 *)(this_00 + 0x104));
  if (iVar3 == 4) {
    psVar5 = (string *)Board::GetLevel(this_00);
    bVar2 = std::operator==(psVar5,"egypt1");
    if (!bVar2) {
      this_00 = *(Board **)(gLawnApp + 0x9f0);
      goto LAB_04070568;
    }
  }
  else {
LAB_04070568:
    cVar1 = Board::IsPlaying(this_00);
    if ((cVar1 == '\0') || (cVar1 = Board::IsSunSpawningSuppressed(this_00), cVar1 != '\0'))
    goto LAB_04070578;
  }
  plVar4 = (long *)FUN_040704ec(*(undefined8 *)(this + 0x10));
  (**(code **)(*plVar4 + 600))();
LAB_04070578:
  Plant::ResetLaunchTimer(*(Plant **)(this + 0x10),false);
  return;
}


/* PlantSunflower::getCollectableTypeName() */

void PlantSunflower::getCollectableTypeName(void)

{
  long in_x0;
  
  FUN_04070654(*(undefined8 *)(in_x0 + 0x10));
  FUN_05475d88();
  return;
}


/* PlantSunflower::ApplyPlantfood() */

void __thiscall PlantSunflower::ApplyPlantfood(PlantSunflower *this)

{
  long lVar1;
  
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  lVar1 = FUN_04070654(*(undefined8 *)(this + 0x10));
  *(int *)(this + 0x28) = *(int *)(this + 0x28) + *(int *)(lVar1 + 0x2b8);
  this[0x2c] = (PlantSunflower)0x1;
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 5;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSunflower::ProduceSun(PlantAction const&, std::string const&) */

void __thiscall
PlantSunflower::ProduceSun(PlantSunflower *this,PlantAction *param_1,string *param_2)

{
  char cVar1;
  bool bVar2;
  CollectableSun *pCVar3;
  long lVar4;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_18,param_2);
  pCVar3 = (CollectableSun *)ProduceCollectable(this,param_1,asStack_18);
  MessageRouter::Post<CollectableSun*,CollectableSun*>
            ((MessageRouter *)gMessageRouter,Message::SunProducedByPlant,pCVar3);
  cVar1 = (**(code **)(*(long *)this + 0x180))(this);
  if (cVar1 == '\0') {
    Plant::GetType();
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    bVar2 = std::operator!=((string *)(lVar4 + 8),"primalsunflower");
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if (bVar2) {
      MessageRouter::Post<BoardEntity*,Plant*>
                ((MessageRouter *)gMessageRouter,Message::SunProductionTriggered,
                 *(Plant **)(this + 0x10));
    }
  }
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSunflower::DoSpecial(int) */

void PlantSunflower::DoSpecial(int param_1)

{
  char cVar1;
  PlantFramework *this;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  float fVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this = (PlantFramework *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  if (0 < *(int *)(this + 0x28)) {
    *(int *)(this + 0x28) = *(int *)(this + 0x28) + -1;
    pcVar4 = *(code **)(*(long *)this + 0x1e8);
    Plant::GetProps();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    uVar3 = FUN_0406f6c8(*(undefined8 *)(lVar2 + 0x70));
    (*pcVar4)(this,uVar3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if (this[0x2c] == (PlantFramework)0x0) {
      cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    }
    else {
      MessageRouter::Post<BoardEntity*,Plant*>
                ((MessageRouter *)gMessageRouter,Message::SunProductionTriggered,
                 *(Plant **)(this + 0x10));
      this[0x2c] = (PlantFramework)0x0;
      cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    }
    if (cVar1 != '\0') {
      fVar5 = (float)PlantFramework::Rand(this,1.0);
      lVar2 = FUN_04070654(*(undefined8 *)(this + 0x10));
      if (fVar5 < *(float *)(lVar2 + 700)) {
        pcVar4 = *(code **)(*(long *)this + 0x528);
        Plant::GetProps();
        lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        uVar3 = FUN_0406f6c8(*(undefined8 *)(lVar2 + 0x70));
        (*pcVar4)(this,uVar3);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

