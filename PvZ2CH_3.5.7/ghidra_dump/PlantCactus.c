// Class: PlantCactus


/* PlantCactus::GetEntityHeight() const */

undefined4 __thiscall PlantCactus::GetEntityHeight(PlantCactus *this)

{
  undefined4 uVar1;
  
  uVar1 = 2;
  if (*(int *)(*(long *)(this + 0x10) + 200) - 10U < 2) {
    uVar1 = 0;
  }
  return uVar1;
}


/* PlantCactus::CanApplyPlantfood() */

byte __thiscall PlantCactus::CanApplyPlantfood(PlantCactus *this)

{
  byte bVar1;
  
  bVar1 = 0;
  if (*(int *)(*(Plant **)(this + 0x10) + 200) != 0xc) {
    bVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    if (bVar1 == 0) {
      bVar1 = (byte)this[0x2c] ^ 1;
    }
  }
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCactus::GetShadowOffset() */

void PlantCactus::GetShadowOffset(void)

{
  FastCurve local_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::FastCurve::SetOutRange(local_10,2.0,8.0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10._0_4_,local_10._4_4_);
}


/* PlantCactus::PlantCactus() */

void __thiscall PlantCactus::PlantCactus(PlantCactus *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067f68f0;
  return;
}


/* PlantCactus::StaticNew() */

PlantCactus * PlantCactus::StaticNew(void)

{
  PlantCactus *this;
  
  this = ::operator_new(0x50);
  PlantCactus(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCactus::StaticClassInit() */

void PlantCactus::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantCactus");
    (*pcVar2)(plVar1,asStack_10,FUN_0417b25c,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantCactus::StaticGetClass() */

long * PlantCactus::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantCactus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantCactus::GetClass() const */

long * PlantCactus::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantCactus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantCactus::calcRectForPlantPosition(Sexy::TRect<int>) */

Insets * PlantCactus::calcRectForPlantPosition(Insets *param_1,long param_2,Insets *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  Sexy::Insets::Insets(param_1,param_3);
  lVar1 = *(long *)(param_2 + 0x10);
  fVar3 = *(float *)(lVar1 + 0x1c);
  fVar2 = (float)FUN_0417b008(*(undefined4 *)(lVar1 + 0x18),fVar3,*(undefined4 *)(lVar1 + 0x20));
  *(int *)param_1 = (int)((float)*(int *)param_1 + fVar2);
  *(int *)(param_1 + 4) = (int)((float)*(int *)(param_1 + 4) + fVar3);
  return param_1;
}


/* PlantCactus::~PlantCactus() */

void __thiscall PlantCactus::~PlantCactus(PlantCactus *this)

{
  *(undefined ***)this = &PTR_GetClass_067f68f0;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantCactus::~PlantCactus() */

void __thiscall PlantCactus::~PlantCactus(PlantCactus *this)

{
  ~PlantCactus(this);
  AK::FreeHook(this);
  return;
}


/* PlantCactus::OnAnimCommand(std::string const&, std::string const&) */

void PlantCactus::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  char cVar2;
  float fVar3;
  
  bVar1 = std::operator==(param_2,"use_action");
  if ((bVar1) && (cVar2 = Plant::GetAvatarEnable(*(Plant **)(param_1 + 0x10)), cVar2 != '\0')) {
    fVar3 = (float)PVZ_T();
    *(float *)(param_1 + 0x3c) = fVar3 + 0.005;
    PlantFramework::OnAnimCommand(param_1,param_2);
    return;
  }
  PlantFramework::OnAnimCommand(param_1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCactus::Initialize() */

void __thiscall PlantCactus::Initialize(PlantCactus *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  PlantAnimRig_Cactus *this_00;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  NameMapperBase *this_03;
  RtObject *this_04;
  cactusBoostReShoot *pcVar4;
  undefined8 uVar5;
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0x2c] = (PlantCactus)0x0;
  *(undefined4 *)(this + 0x28) = 0;
  PlantFramework::Initialize((PlantFramework *)this);
  uVar5 = *(undefined8 *)(this + 0x10);
  *(undefined4 *)(this + 0x34) = 0x37;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x38) = 0xf;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  iVar3 = FUN_0417af84(uVar5);
  if (1 < iVar3) {
    this_00 = (PlantAnimRig_Cactus *)FUN_0417cd74(uVar5);
    PlantAnimRig_Cactus::TurnPlantFoodEffectOn(this_00);
  }
  *(undefined4 *)(this + 0x48) = 0;
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  this_03 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
  std::string::string(asStack_10,"cactus_new_avatar_1");
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
      pcVar4 = Sexy::RtObject::Cast<cactusBoostReShoot>(this_04);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      if (pcVar4 != (cactusBoostReShoot *)0x0) {
        *(undefined4 *)(this + 0x48) = *(undefined4 *)(pcVar4 + 100);
      }
    }
    else {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCactus::getCowerRect() */

void PlantCactus::getCowerRect(void)

{
  long in_x0;
  long lVar1;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_0417cf74(*(undefined8 *)(in_x0 + 0x10));
  Sexy::Insets::Insets(aIStack_18,(Insets *)(lVar1 + 0x2b8));
  calcRectForPlantPosition();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCactus::getUncowerRect() */

void PlantCactus::getUncowerRect(void)

{
  long in_x0;
  long lVar1;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_0417cf74(*(undefined8 *)(in_x0 + 0x10));
  Sexy::Insets::Insets(aIStack_18,(Insets *)(lVar1 + 0x2c8));
  calcRectForPlantPosition();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCactus::getSpikeRect() */

void PlantCactus::getSpikeRect(void)

{
  long in_x0;
  long lVar1;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_0417cf74(*(undefined8 *)(in_x0 + 0x10));
  Sexy::Insets::Insets(aIStack_18,(Insets *)(lVar1 + 0x2d8));
  calcRectForPlantPosition();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCactus::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantCactus::Fire(PlantCactus *this,RtWeakPtrBase *param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  GridItemWaterMist *this_00;
  CactusProjectile *extraout_x0;
  int iVar4;
  long lVar5;
  undefined1 uVar6;
  CactusProjectile *this_01;
  float fVar7;
  float fVar8;
  float fVar9;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = (**(code **)(*(long *)this + 0x180))();
  if (cVar2 == '\0') {
    if (this[0x2c] == (PlantCactus)0x0) {
      lVar5 = *(long *)(this + 0x10);
      iVar3 = FUN_0417af84(lVar5);
      uVar6 = 0;
      if (iVar3 < 2) {
        iVar3 = 0;
        iVar4 = 0;
      }
      else {
        lVar5 = FUN_0417cf74(lVar5);
        fVar9 = *(float *)(this + 0x48);
        fVar8 = *(float *)(lVar5 + 0x2f8);
        fVar7 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
        if (fVar7 < fVar8 + fVar9) {
          lVar5 = *(long *)(this + 0x10);
          iVar4 = 1;
          uVar6 = 1;
          iVar3 = 1;
        }
        else {
          lVar5 = *(long *)(this + 0x10);
          iVar3 = 0;
          iVar4 = iVar3;
        }
      }
    }
    else {
      lVar5 = *(long *)(this + 0x10);
      uVar6 = 2;
      iVar3 = 0;
      iVar4 = 2;
    }
    *(int *)(lVar5 + 0x150) = iVar4;
    fVar7 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
    fVar8 = (float)Plant::GetGeneSkillBoost(*(Plant **)(this + 0x10));
    if (fVar7 < fVar8) {
      *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 3;
    }
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
    PlantFramework::Fire((PlantFramework *)this,aRStack_10,param_3,uVar6);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    bVar1 = this_00 == (GridItemWaterMist *)0x0;
    if ((!bVar1) && (iVar3 != 0)) {
      GridItemWaterMist::SetType(this_00,1);
    }
    iVar3 = FUN_0417af84(*(undefined8 *)(this + 0x10));
    this_01 = (CactusProjectile *)this_00;
    if (iVar3 < 3) goto LAB_0417d24c;
  }
  else {
    cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    if ((cVar2 == '\0') || (param_4 != 2)) {
      this_01 = (CactusProjectile *)0x0;
      goto LAB_0417d24c;
    }
    *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 2;
    fVar7 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
    fVar8 = (float)Plant::GetGeneSkillBoost(*(Plant **)(this + 0x10));
    if (fVar7 < fVar8) {
      *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 3;
    }
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
    PlantFramework::Fire((PlantFramework *)this,aRStack_10,param_3,2);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    iVar3 = FUN_0417af84(*(undefined8 *)(this + 0x10));
    this_01 = extraout_x0;
    if (iVar3 < 3) goto LAB_0417d24c;
    bVar1 = extraout_x0 == (CactusProjectile *)0x0;
  }
  if (!bVar1) {
    CactusProjectile::IncreaseInitialPierceChance(this_01);
  }
LAB_0417d24c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this_01);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCactus::FindTargetAndFire(PlantWeapon) */

void PlantCactus::FindTargetAndFire(PlantFramework *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long extraout_x0;
  PlantAnimRig_Cactus *pPVar4;
  long lVar5;
  float fVar6;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(*(long *)(param_1 + 0x10) + 200) - 10U < 3) ||
     (cVar1 = Plant::CanFindTarget(), cVar1 == '\0')) {
LAB_0417d3d8:
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_0417af84(*(undefined8 *)(param_1 + 0x10));
    if (4 < iVar2) {
      Plant::GetProps();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
      if ((extraout_x0 != 0) &&
         (fVar6 = (float)PlantFramework::Rand(param_1,1.0), fVar6 < *(float *)(extraout_x0 + 0x2fc))
         ) {
        lVar5 = *(long *)(param_1 + 0x10);
        *(undefined4 *)(lVar5 + 200) = 0xc;
        pPVar4 = (PlantAnimRig_Cactus *)FUN_0417cd74(lVar5);
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
        std::string::string((string *)aRStack_58,"onAnimStoppedCallback");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                   aRStack_60,aRStack_58);
        PlantAnimRig_Cactus::PlayLevel5Attack(pPVar4,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
        std::string::~string((string *)aRStack_58);
        nop();
        Sexy::RtId::~RtId(aRStack_60);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68)
        ;
        goto LAB_0417d3d8;
      }
    }
    (**(code **)(*(long *)param_1 + 0x1a0))(param_1);
    uVar3 = 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCactus::shouldBeCowering() */

void __thiscall PlantCactus::shouldBeCowering(PlantCactus *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  Zombie *extraout_x0;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = FUN_0417cf74(*(undefined8 *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  if (*(int *)(*(long *)(this + 0x10) + 200) - 10U < 2) {
    getUncowerRect();
    EntityFinder::GetEntitiesInRectangle
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2,
               (__normal_iterator *)local_30);
  }
  else {
    getCowerRect();
    EntityFinder::GetEntitiesInRectangle
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2,
               (__normal_iterator *)local_30);
  }
  lVar5 = FUN_0417af98(local_20,local_18);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
  local_30[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)&local_20);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)local_30);
  if (bVar1) {
    do {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
      nop();
      cVar2 = (**(code **)(*(long *)extraout_x0 + 0x328))();
      if (cVar2 == '\0') {
        uVar3 = FUN_0417ae74(*(undefined4 *)(*(long *)(this + 0x10) + 0x24));
        cVar2 = RealObject::IsOnTeam(extraout_x0,uVar3);
        if ((cVar2 != '\0') ||
           (cVar2 = ZombieRestrictionSet::IsIncluded
                              ((ZombieRestrictionSet *)(lVar4 + 0x300),extraout_x0), cVar2 != '\0'))
        goto LAB_0417d944;
      }
      else {
LAB_0417d944:
        lVar5 = lVar5 + -1;
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)local_30);
    } while (bVar1);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar5 != 0);
  }
  return;
}


/* PlantCactus::CancelPlantfood() */

void __thiscall PlantCactus::CancelPlantfood(PlantCactus *this)

{
  char cVar1;
  long *plVar2;
  PlantAnimRig_Cactus *this_00;
  undefined4 uVar3;
  
  Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  uVar3 = PVZ_EOT();
  *(undefined4 *)(this + 0x3c) = uVar3;
  cVar1 = shouldBeCowering(this);
  if (cVar1 == '\0') {
    plVar2 = (long *)FUN_0417cd74(*(undefined8 *)(this + 0x10));
    (**(code **)(*plVar2 + 0x118))();
    *(undefined4 *)(*(long *)(this + 0x10) + 200) = 4;
    return;
  }
  this_00 = (PlantAnimRig_Cactus *)FUN_0417cd74(*(undefined8 *)(this + 0x10));
  PlantAnimRig_Cactus::PlayEnterCower(this_00);
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 10;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCactus::ApplyPlantfood() */

void __thiscall PlantCactus::ApplyPlantfood(PlantCactus *this)

{
  char cVar1;
  PlantAnimRig_Cactus *pPVar2;
  undefined4 uVar3;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 5;
  cVar1 = shouldBeCowering(this);
  if (cVar1 == '\0') {
    cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    if (cVar1 == '\0') {
      pPVar2 = (PlantAnimRig_Cactus *)FUN_0417cd74(*(undefined8 *)(this + 0x10));
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 asStack_58);
      PlantAnimRig_Cactus::PlayPlantfood(pPVar2,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      this[0x2c] = (PlantCactus)0x1;
    }
    else {
      pPVar2 = (PlantAnimRig_Cactus *)FUN_0417cd74(*(undefined8 *)(this + 0x10));
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 asStack_58);
      PlantAnimRig_Cactus::PlayAvatarPlantfood(pPVar2,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      *(undefined4 *)(this + 0x30) = *(undefined4 *)(this + 0x34);
      uVar3 = PVZ_EOT();
      *(undefined4 *)(this + 0x44) = 0;
      this[0x2c] = (PlantCactus)0x1;
      *(undefined4 *)(this + 0x3c) = uVar3;
    }
  }
  else {
    pPVar2 = (PlantAnimRig_Cactus *)FUN_0417cd74();
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PlantAnimRig_Cactus::PlayPlantfoodUp(pPVar2,aRStack_50);
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
/* PlantCactus::UpdateActions() */

void __thiscall PlantCactus::UpdateActions(PlantCactus *this)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  PlantAnimRig_Cactus *pPVar7;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 *puVar8;
  long lVar9;
  long *extraout_x0;
  Zombie *this_01;
  code *pcVar10;
  Plant *this_02;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  double dVar18;
  double dVar19;
  float fVar20;
  undefined8 local_a0;
  undefined8 local_98;
  Point aPStack_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar6 = FUN_0417cf74(*(undefined8 *)(this + 0x10));
  cVar3 = Plant::IsSuspended(*(Plant **)(this + 0x10));
  if (cVar3 == '\0') {
    iVar5 = *(int *)(*(Plant **)(this + 0x10) + 200);
    if (iVar5 == 10) {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_68);
      getSpikeRect();
      EntityFinder::GetEntitiesInRectangle
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_68,2,
                 &local_80);
      lVar6 = FUN_0417af98(local_68,CONCAT44(uStack_5c,local_60));
      if (lVar6 != 0) {
        pPVar7 = (PlantAnimRig_Cactus *)FUN_0417cd74(*(undefined8 *)(this + 0x10));
        PlantAnimRig_Cactus::PlayCowerAttack(pPVar7);
        *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0xb;
      }
      cVar3 = shouldBeCowering(this);
      if (cVar3 == '\0') {
        pPVar7 = (PlantAnimRig_Cactus *)FUN_0417cd74(*(undefined8 *)(this + 0x10));
        PlantAnimRig_Cactus::PlayExitCower(pPVar7);
        *(undefined4 *)(*(long *)(this + 0x10) + 200) = 4;
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_68);
    }
    else if (iVar5 == 0xb) {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
      getSpikeRect();
      EntityFinder::GetEntitiesInRectangle
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,2,
                 (DamageInfo *)&local_68);
      lVar9 = FUN_0417af98(local_80,local_78);
      local_88 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_80);
      local_68 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_80);
      while (bVar4 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_88,(__normal_iterator *)&local_68),
            bVar4) {
        std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_88);
        nop();
        cVar3 = (**(code **)(*extraout_x0 + 0x328))();
        lVar9 = lVar9 - (ulong)(cVar3 != '\0');
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_88);
      }
      if (lVar9 == 0) {
        cVar3 = shouldBeCowering(this);
        if (cVar3 == '\0') {
          pPVar7 = (PlantAnimRig_Cactus *)FUN_0417cd74(*(undefined8 *)(this + 0x10));
          PlantAnimRig_Cactus::PlayExitCower(pPVar7);
          *(undefined4 *)(*(long *)(this + 0x10) + 200) = 4;
        }
        else {
          pPVar7 = (PlantAnimRig_Cactus *)FUN_0417cd74(*(undefined8 *)(this + 0x10));
          PlantAnimRig_Cactus::PlayCowerIdle(pPVar7);
          *(undefined4 *)(*(long *)(this + 0x10) + 200) = 10;
        }
      }
      else {
        if (this[0x2c] == (PlantCactus)0x0) {
          fVar11 = *(float *)(lVar6 + 0x2ec);
          iVar5 = *(int *)(lVar6 + 0x2e8);
        }
        else {
          fVar11 = *(float *)(lVar6 + 0x2f4);
          iVar5 = *(int *)(lVar6 + 0x2f0);
        }
        this_02 = *(Plant **)(this + 0x10);
        fVar12 = (float)FUN_0417af1c(*(undefined4 *)(this_02 + 0xf4),
                                     *(undefined4 *)(this_02 + 0x100),
                                     *(undefined4 *)(this_02 + 0x104),
                                     *(undefined4 *)(this_02 + 0x3b8));
        fVar13 = (float)FUN_0417af2c(*(undefined4 *)(this_02 + 0x3bc));
        fVar14 = (float)Plant::GetExtraDPSmodifier(this_02);
        fVar15 = (float)FUN_0417af30(*(undefined4 *)(*(long *)(this + 0x10) + 0x424));
        fVar20 = *(float *)(this + 0x28);
        fVar16 = (float)PVZ_T();
        if (fVar11 + fVar20 <= fVar16) {
          local_a0 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)&local_80);
          local_98 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)&local_80);
          while (bVar4 = __gnu_cxx::operator!=
                                   ((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98),
                bVar4) {
            puVar8 = (undefined8 *)
                     std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
            this_01 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar8);
            if (((this_01 != (Zombie *)0x0) && (cVar3 = Zombie::IsFlying(this_01), cVar3 == '\0'))
               && (cVar3 = (**(code **)(*(long *)this_01 + 0x328))(this_01), cVar3 == '\0')) {
              Sexy::Point::Point(aPStack_90,-1,-1);
              Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
              DamageInfo::DamageInfo
                        ((DamageInfo *)(fVar13 * fVar12 * fVar14 * fVar15 * (float)iVar5),
                         local_88 & 0xffffffff,local_88._4_4_,(DamageInfo *)&local_68,aPStack_90,0);
              (**(code **)(*(long *)this_01 + 0x110))(this_01,(DamageInfo *)&local_68);
              DamageInfo::~DamageInfo((DamageInfo *)&local_68);
            }
            eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                      ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a0);
          }
          uVar17 = PVZ_T();
          *(undefined4 *)(this + 0x28) = uVar17;
        }
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
    }
    else if (iVar5 == 5) {
      Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
      cVar3 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
      if ((cVar3 != '\0') && (fVar11 = (float)PVZ_T(), *(float *)(this + 0x3c) < fVar11)) {
        if ((*(uint *)(this + 0x44) & 1) == 0) {
          iVar5 = *(int *)(this + 0x30) - *(int *)(this + 0x38);
        }
        else {
          iVar5 = *(int *)(this + 0x30) + *(int *)(this + 0x38);
        }
        iVar1 = *(int *)(this + 0x34);
        *(int *)(this + 0x30) = iVar5;
        iVar2 = -iVar1;
        if (iVar5 <= iVar2) {
          *(int *)(this + 0x30) = iVar2;
          *(uint *)(this + 0x44) = *(uint *)(this + 0x44) + 1;
          iVar5 = iVar2;
        }
        if (iVar1 <= iVar5) {
          *(int *)(this + 0x30) = iVar1;
          *(int *)(this + 0x44) = *(int *)(this + 0x44) + 1;
          iVar5 = iVar1;
        }
        fVar11 = (float)Sexy::SexyMath::DegToRad((float)iVar5);
        dVar18 = cos((double)fVar11);
        dVar19 = sin((double)fVar11);
        pcVar10 = *(code **)(*(long *)this + 0xb0);
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_68);
        this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)(*pcVar10)(this,(_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>
                                      *)&local_68,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),2)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
        if (this_00 !=
            (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)0x0) {
          puVar8 = (undefined8 *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_leftmost(this_00);
          local_68 = *puVar8;
          local_60 = *(undefined4 *)(puVar8 + 1);
          (**(code **)(*(long *)this_00 + 0x78))
                    (this_00,(_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                             &local_68);
          Projectile::SetVelocity
                    ((Projectile *)this_00,(float)(dVar18 * 333.0),-(float)(dVar19 * 333.0),0.0);
          *(float *)(this + 0x3c) = *(float *)(this + 0x3c) + 0.075;
          FUN_0417af10(fVar11,this_00 + 0xc4);
          *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0;
        }
      }
    }
    else {
      cVar3 = shouldBeCowering(this);
      if (cVar3 != '\0') {
        pPVar7 = (PlantAnimRig_Cactus *)FUN_0417cd74(*(undefined8 *)(this + 0x10));
        PlantAnimRig_Cactus::PlayEnterCower(pPVar7);
        *(undefined4 *)(*(long *)(this + 0x10) + 200) = 10;
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantCactus::onDestroy() */

void __thiscall PlantCactus::onDestroy(PlantCactus *this)

{
  char *pcVar1;
  
  if (this[0x2c] != (PlantCactus)0x0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_Plant_Cactus_Plantfood_Stop");
  }
  PlantFramework::onDestroy((PlantFramework *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCactus::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantCactus::onAnimStoppedCallback(PlantCactus *this,string *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  long *plVar8;
  PlantAnimRig_Cactus *pPVar9;
  string *psVar10;
  Plant *this_00;
  PlantSmallCactus *this_01;
  undefined8 *puVar11;
  undefined8 uVar12;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  string asStack_68 [8];
  undefined8 local_60;
  undefined4 local_58;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar3 = std::operator==(param_1,"plantfood");
  if (bVar3) {
LAB_0417e3c8:
    PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
    cVar4 = shouldBeCowering(this);
    if (cVar4 != '\0') {
      pPVar9 = (PlantAnimRig_Cactus *)FUN_0417cd74(*(undefined8 *)(this + 0x10));
      PlantAnimRig_Cactus::PlayEnterCower(pPVar9);
      *(undefined4 *)(*(long *)(this + 0x10) + 200) = 10;
      goto LAB_0417e400;
    }
  }
  else {
    bVar3 = std::operator==(param_1,"attack_plantfoot02");
    if (bVar3) goto LAB_0417e3c8;
    bVar3 = std::operator==(param_1,"up");
    if ((bVar3) && (cVar4 = (**(code **)(*(long *)this + 0x180))(this), cVar4 != '\0')) {
      cVar4 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
      if (cVar4 == '\0') {
        pPVar9 = (PlantAnimRig_Cactus *)FUN_0417cd74(*(undefined8 *)(this + 0x10));
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)&local_70);
        std::string::string((string *)&local_60,"onAnimStoppedCallback");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                   (RtId *)asStack_68,(string *)&local_60);
        PlantAnimRig_Cactus::PlayPlantfood(pPVar9,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
        std::string::~string((string *)&local_60);
        nop();
        Sexy::RtId::~RtId((RtId *)asStack_68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
      }
      else {
        pPVar9 = (PlantAnimRig_Cactus *)FUN_0417cd74(*(undefined8 *)(this + 0x10));
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)&local_70);
        std::string::string((string *)&local_60,"onAnimStoppedCallback");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                   (RtId *)asStack_68,(string *)&local_60);
        PlantAnimRig_Cactus::PlayAvatarPlantfood(pPVar9,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
        std::string::~string((string *)&local_60);
        nop();
        Sexy::RtId::~RtId((RtId *)asStack_68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
        *(undefined4 *)(this + 0x30) = *(undefined4 *)(this + 0x34);
        uVar7 = PVZ_EOT();
        *(undefined4 *)(this + 0x44) = 0;
        *(undefined4 *)(this + 0x3c) = uVar7;
      }
      this[0x2c] = (PlantCactus)0x1;
      goto LAB_0417e400;
    }
    bVar3 = std::operator==(param_1,"attack5");
    if (!bVar3) goto LAB_0417e400;
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_78,66.0,0.0);
    uVar7 = *(undefined4 *)(*(long *)(this + 0x10) + 0x110);
    uVar1 = *(undefined4 *)(*(long *)(this + 0x10) + 0x114);
    uVar12 = *(undefined8 *)(gLawnApp + 0x9f0);
    psVar10 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string(asStack_68,"smallcactus");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar10);
    this_00 = (Plant *)Board::AddPlant((Board *)0x0,uVar12,uVar1,uVar7,
                                       (RtWeakPtr<Sexy::ResourceInfo> *)&local_60,0,1,1,0,0,1,0,0,0,
                                       0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
    std::string::~string(asStack_68);
    nop();
    Plant::CopyBoostProperty(this_00,*(undefined8 *)(this + 0x10),4);
    Plant::CopyBoostProperty(this_00,*(undefined8 *)(this + 0x10),6);
    Plant::CopyBoostProperty(this_00,*(undefined8 *)(this + 0x10),7);
    Plant::Heal(this_00);
    nop();
    PlantSmallCactus::StartWalk(this_01);
    ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
              ((ResistenceValueInfo *)&local_70);
    iVar5 = PlantFramework::Rand((PlantFramework *)this,0x14);
    local_70 = (float)(iVar5 + -10);
    iVar5 = PlantFramework::Rand((PlantFramework *)this,10);
    local_6c = (float)(5 - iVar5);
    puVar11 = (undefined8 *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this_00);
    local_60 = *puVar11;
    local_58 = *(undefined4 *)(puVar11 + 1);
    iVar5 = BoardTransforms::BoardSpaceToGridX((float)local_60);
    iVar6 = BoardTransforms::BoardSpaceToGridY(local_60._4_4_);
    cVar4 = GameObject::IsDestroyed((GameObject *)this_00);
    puVar2 = gMessageRouter;
    if (cVar4 == '\0') {
      Sexy::Point::Point((Point *)asStack_68,iVar5,iVar6);
      MessageRouter::Broadcast<Plant*,Sexy::Point&,Plant*,Sexy::Point>
                ((MessageRouter *)puVar2,Message::PlantMoving,this_00,asStack_68);
    }
    local_60 = CONCAT44(local_74 + local_60._4_4_ + local_6c,local_78 + (float)local_60 + local_70);
    (**(code **)(*(long *)this_00 + 0x78))(this_00,(RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
    uVar7 = SharkMinion::getRow((SharkMinion *)this_00);
    *(undefined4 *)(this_00 + 0x110) = uVar7;
    uVar7 = BoardEntity::CalcColumnPosition((BoardEntity *)this_00);
    *(undefined4 *)(this_00 + 0x114) = uVar7;
    cVar4 = GameObject::IsDestroyed((GameObject *)this_00);
    if (cVar4 == '\0') {
      MessageRouter::Broadcast<Plant*,Plant*>
                ((MessageRouter *)gMessageRouter,Message::PlantPlaced,this_00);
    }
  }
  plVar8 = (long *)FUN_0417cd74(*(undefined8 *)(this + 0x10));
  (**(code **)(*plVar8 + 0x118))();
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 4;
LAB_0417e400:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

