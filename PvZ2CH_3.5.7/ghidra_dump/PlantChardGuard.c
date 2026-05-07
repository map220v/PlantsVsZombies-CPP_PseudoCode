// Class: PlantChardGuard


/* PlantChardGuard::GetEntityHeight() const */

undefined4 __thiscall PlantChardGuard::GetEntityHeight(PlantChardGuard *this)

{
  undefined4 uVar1;
  
  uVar1 = 2;
  if ((0 < *(int *)(this + 0x2c)) && (uVar1 = 3, *(int *)(*(long *)(this + 0x10) + 200) == 0xc)) {
    uVar1 = 1;
  }
  return uVar1;
}


/* PlantChardGuard::PlantChardGuard() */

void __thiscall PlantChardGuard::PlantChardGuard(PlantChardGuard *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined4 *)(this + 0x30) = 3;
  *(undefined ***)this = &PTR_GetClass_067d4d90;
  return;
}


/* PlantChardGuard::StaticNew() */

PlantChardGuard * PlantChardGuard::StaticNew(void)

{
  PlantChardGuard *this;
  
  this = ::operator_new(0x48);
  PlantChardGuard(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChardGuard::StaticClassInit() */

void PlantChardGuard::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantChardGuard");
    (*pcVar2)(plVar1,asStack_10,FUN_040b41d4,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantChardGuard::StaticGetClass() */

long * PlantChardGuard::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantChardGuard",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantChardGuard::GetClass() const */

long * PlantChardGuard::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantChardGuard",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantChardGuard::CanUpgrade() */

undefined8 __thiscall PlantChardGuard::CanUpgrade(PlantChardGuard *this)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((*(int *)(this + 0x2c) < *(int *)(this + 0x30)) &&
     (cVar1 = (**(code **)(*(long *)this + 0x180))(), cVar1 == '\0')) {
    uVar2 = LawnApp::HasPlayerUnlockedFeature(gLawnApp,0x17);
    return uVar2;
  }
  return 0;
}


/* PlantChardGuard::canBeFlippedByChardGuard(Zombie const*) const */

byte __thiscall PlantChardGuard::canBeFlippedByChardGuard(PlantChardGuard *this,Zombie *param_1)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = RealObject::IsOnOpposingTeam((RealObject *)param_1,*(RealObject **)(this + 0x10));
  if (((((cVar1 == '\0') ||
        (cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 != '\0')) ||
       (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 != '\0')) ||
      ((cVar1 = Zombie::IsIgnoringAllDamage(param_1), cVar1 != '\0' ||
       (cVar1 = Zombie::CanBeLaunchedByPlants(param_1), cVar1 == '\0')))) ||
     ((cVar1 = Zombie::IsControlled(param_1), cVar1 != '\0' ||
      ((cVar1 = Zombie::HasFogImmune(param_1), cVar1 != '\0' ||
       (cVar1 = Zombie::IsBerserk(param_1), cVar1 != '\0')))))) {
    bVar2 = 0;
  }
  else {
    bVar2 = Zombie::IsInvisible(param_1);
    bVar2 = bVar2 ^ 1;
  }
  return bVar2;
}


/* PlantChardGuard::~PlantChardGuard() */

void __thiscall PlantChardGuard::~PlantChardGuard(PlantChardGuard *this)

{
  *(undefined ***)this = &PTR_GetClass_067d4d90;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantChardGuard::~PlantChardGuard() */

void __thiscall PlantChardGuard::~PlantChardGuard(PlantChardGuard *this)

{
  ~PlantChardGuard(this);
  AK::FreeHook(this);
  return;
}


/* PlantChardGuard::isAnimDone() */

void __thiscall PlantChardGuard::isAnimDone(PlantChardGuard *this)

{
  undefined8 uVar1;
  
  uVar1 = UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  PopAnimRig::IsAnimFinished(uVar1,*(undefined4 *)(this + 0x28));
  return;
}


/* PlantChardGuard::updateLeafCount(int) */

void __thiscall PlantChardGuard::updateLeafCount(PlantChardGuard *this,int param_1)

{
  PlantAnimRig_HollyKnight *this_00;
  float fVar1;
  
  fVar1 = (float)PVZ_EOT();
  if ((*(float *)(this + 0x40) != fVar1) && (*(int *)(this + 0x30) != param_1)) {
    if ((param_1 <= *(int *)(this + 0x2c)) && (*(int *)(this + 0x30) != *(int *)(this + 0x2c)))
    goto LAB_040b589c;
    fVar1 = (float)PVZ_T();
    fVar1 = fVar1 + *(float *)(this + 0x40);
  }
  *(float *)(this + 0x3c) = fVar1;
LAB_040b589c:
  *(int *)(this + 0x2c) = param_1;
  this_00 = (PlantAnimRig_HollyKnight *)FUN_040b5834(*(undefined8 *)(this + 0x10));
  PlantAnimRig_HollyKnight::SetNumDamageStates(this_00,param_1);
  return;
}


/* PlantChardGuard::onHealed() */

void __thiscall PlantChardGuard::onHealed(PlantChardGuard *this)

{
  long *plVar1;
  
  *(undefined4 *)(this + 0x34) = 0;
  updateLeafCount(this,*(int *)(this + 0x30));
  if (*(int *)(*(UIEasyButtonWidget **)(this + 0x10) + 200) != 10) {
    return;
  }
  plVar1 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  (**(code **)(*plVar1 + 0x118))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChardGuard::setState(unsigned int) */

void __thiscall PlantChardGuard::setState(PlantChardGuard *this,uint param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  long *plVar4;
  PopAnimRig *pPVar5;
  long lVar6;
  string *this_00;
  string *this_01;
  code *pcVar7;
  int local_60 [2];
  string asStack_58 [8];
  string asStack_50 [24];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(uint *)(*(long *)(this + 0x10) + 200) == param_1) goto switchD_040b5998_default;
  *(uint *)(*(long *)(this + 0x10) + 200) = param_1;
  switch(param_1) {
  case 10:
    lVar6 = FUN_040b5834();
    FUN_040b3d44(lVar6 + 0x218);
    plVar4 = (long *)FUN_040b5834(*(undefined8 *)(this + 0x10));
    (**(code **)(*plVar4 + 0x118))();
    break;
  case 0xb:
    pPVar5 = (PopAnimRig *)FUN_040b5834();
    std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x2c));
    pcVar3 = "attack_leaves";
    goto LAB_040b5a48;
  case 0xc:
    plVar4 = (long *)FUN_040b5834();
    this_00 = (string *)local_60;
    this_01 = asStack_58;
    pcVar7 = *(code **)(*plVar4 + 0x78);
    std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x2c));
    std::operator+("attack_idle_leaves",this_00);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_50);
    (*pcVar7)(plVar4,this_01,1,0,
              (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_50);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)asStack_50);
    goto LAB_040b5a78;
  case 0xd:
    pPVar5 = (PopAnimRig *)FUN_040b5834();
    std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x2c));
    pcVar3 = "attack_flip_leaves";
LAB_040b5a48:
    this_01 = asStack_50;
    this_00 = asStack_58;
    std::operator+(pcVar3,this_00);
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    uVar2 = PopAnimRig::PlayAndStop(pPVar5,this_01,0,aDStack_38);
    *(undefined4 *)(this + 0x28) = uVar2;
LAB_040b5a78:
    std::string::~string(this_01);
    std::string::~string(this_00);
    lVar6 = FUN_040b5834(*(undefined8 *)(this + 0x10));
    FUN_040b3d38(lVar6 + 0x218);
    break;
  case 0xe:
    pPVar5 = (PopAnimRig *)FUN_040b5834();
    PopAnimRig::DebugPrintLayerNames(pPVar5);
    cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    if (cVar1 == '\0') {
      pcVar3 = "plantfood";
    }
    else {
      pcVar3 = "plantfood_01";
    }
    std::string::string(asStack_50,pcVar3);
    nop();
    pPVar5 = (PopAnimRig *)FUN_040b5834(*(undefined8 *)(this + 0x10));
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    uVar2 = PopAnimRig::PlayAndStop(pPVar5,asStack_50,0,aDStack_38);
    *(undefined4 *)(this + 0x28) = uVar2;
    std::string::~string(asStack_50);
    break;
  case 0xf:
    pPVar5 = (PopAnimRig *)FUN_040b5834();
    local_60[0] = *(int *)(this + 0x2c) + 1;
    std::to_string<ActivityTypeID>((ActivityTypeID *)local_60);
    std::operator+("growth_",asStack_58);
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    uVar2 = PopAnimRig::PlayAndStop(pPVar5,asStack_50,0,aDStack_38);
    *(undefined4 *)(this + 0x28) = uVar2;
    std::string::~string(asStack_50);
    std::string::~string(asStack_58);
    lVar6 = FUN_040b5834(*(undefined8 *)(this + 0x10));
    FUN_040b3d50(lVar6 + 0x218);
  }
switchD_040b5998_default:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantChardGuard::Idle() */

void __thiscall PlantChardGuard::Idle(PlantChardGuard *this)

{
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0xe;
  setState(this,10);
  return;
}


/* PlantChardGuard::ApplyPlantfood() */

void __thiscall PlantChardGuard::ApplyPlantfood(PlantChardGuard *this)

{
  Plant::Heal(*(Plant **)(this + 0x10));
  setState(this,0xe);
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  return;
}


/* PlantChardGuard::CancelPlantfood() */

void __thiscall PlantChardGuard::CancelPlantfood(PlantChardGuard *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  setState(this,10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChardGuard::GetRecoverTime() */

void __thiscall PlantChardGuard::GetRecoverTime(PlantChardGuard *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  NameMapperBase *this_02;
  long lVar5;
  ulong uVar6;
  float *pfVar7;
  RtObject *this_03;
  ChardGuardBoostRecover *pCVar8;
  undefined8 uVar9;
  float fVar10;
  float local_18 [2];
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar10 = (float)PVZ_EOT();
  iVar3 = FUN_040b3d10(*(undefined8 *)(this + 0x10));
  if (iVar3 < 2) goto LAB_040b5e5c;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  this_02 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
  std::string::string((string *)local_10,"chardguard_new_avatar_1");
  iVar4 = NameMapperBase::GetIdForName(this_02,(string *)local_10);
  std::string::~string((string *)local_10);
  nop();
  cVar1 = PlayerInfo::IsPlantNewAvatarUnLocked(this_01,iVar4);
  if (cVar1 == '\0') {
LAB_040b5df4:
    iVar4 = 0;
  }
  else {
    NewAvatar::GetAvatarInfoByAvatarId(iVar4);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)local_18);
    if (bVar2) {
      NewAvatar::GetAvatarInfoByAvatarId(iVar4);
      this_03 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
      pCVar8 = Sexy::RtObject::Cast<ChardGuardBoostRecover>(this_03);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
      if (pCVar8 == (ChardGuardBoostRecover *)0x0) goto LAB_040b5df4;
      iVar4 = (int)*(float *)(pCVar8 + 100);
    }
    else {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
      iVar4 = 0;
    }
  }
  lVar5 = FUN_040b5cd8(*(undefined8 *)(this + 0x10));
  uVar9 = *(undefined8 *)(lVar5 + 0x2f8);
  uVar6 = FUN_040b3d60(uVar9,*(undefined8 *)(lVar5 + 0x300));
  if ((ulong)(long)iVar3 <= uVar6) {
    pfVar7 = (float *)FUN_040b3d9c(uVar9,(long)(iVar3 + -1));
    fVar10 = *pfVar7 - (float)iVar4;
  }
  local_18[0] = (float)Plant::GetGeneSkillBoost(*(Plant **)(this + 0x10));
  local_18[0] = fVar10 - local_18[0];
  local_10[0] = 0x3f800000;
  pfVar7 = eastl::max_alt<float>(local_18,(float *)local_10);
  fVar10 = *pfVar7;
LAB_040b5e5c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar10);
}


/* PlantChardGuard::Initialize() */

void __thiscall PlantChardGuard::Initialize(PlantChardGuard *this)

{
  char cVar1;
  long lVar2;
  PlantChardGuardTossSystem *this_00;
  undefined4 uVar3;
  
  PlantFramework::Initialize((PlantFramework *)this);
  Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  cVar1 = PVPManager::IsInBattle();
  uVar3 = 3;
  if (cVar1 != '\0') {
    uVar3 = 1;
  }
  *(undefined4 *)(this + 0x30) = uVar3;
  uVar3 = GetRecoverTime(this);
  *(undefined4 *)(this + 0x40) = uVar3;
  updateLeafCount(this,*(int *)(this + 0x30));
  *(undefined4 *)(this + 0x34) = 0;
  lVar2 = FUN_040b5cd8(*(undefined8 *)(this + 0x10));
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(lVar2 + 0x2b8);
  this_00 = Board::GetGameSubSystem<PlantChardGuardTossSystem>(*(Board **)(gLawnApp + 0x9f0));
  lVar2 = FUN_040b5cd8(*(undefined8 *)(this + 0x10));
  PlantPhatBeetTossSystem::setStunTime((PlantPhatBeetTossSystem *)this_00,*(float *)(lVar2 + 0x2e0))
  ;
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0;
  *(undefined4 *)(this + 0x28) = 0xffffffff;
  setState(this,10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChardGuard::isFlippableZombieClose() */

void __thiscall PlantChardGuard::isFlippableZombieClose(PlantChardGuard *this)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  float *pfVar5;
  Zombie *extraout_x0;
  undefined8 local_40;
  undefined8 local_38;
  int local_30;
  int local_2c;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  uVar1 = *(undefined4 *)(*(long *)(this + 0x10) + 0x110);
  local_8 = ___stack_chk_guard;
  lVar4 = FUN_040b5cd8(*(long *)(this + 0x10));
  cVar2 = '\0';
  Sexy::Insets::Insets((Insets *)&local_30,(Insets *)(lVar4 + 0x2e4));
  pfVar5 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  local_30 = (int)((float)local_30 + *pfVar5);
  local_2c = (int)((float)local_2c + pfVar5[1]);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntitiesTouchingRectangle
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2,
             (Insets *)&local_30,uVar1,uVar1);
  lVar4 = FUN_040b3d78(local_20,local_18);
  if (lVar4 != 0) {
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_20);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38),
          cVar2 = '\0', bVar3) {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
      nop();
      cVar2 = canBeFlippedByChardGuard(this,extraout_x0);
      if (cVar2 != '\0') break;
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
    }
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChardGuard::UpdateActions() */

void __thiscall PlantChardGuard::UpdateActions(PlantChardGuard *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  Zombie *extraout_x0;
  int iVar5;
  float fVar6;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar5 = *(int *)(*(long *)(this + 0x10) + 200);
  do {
    switch(iVar5) {
    case 10:
      cVar2 = isFlippableZombieClose(this);
      if (cVar2 == '\0') {
        iVar3 = *(int *)(this + 0x2c);
      }
      else {
        iVar3 = *(int *)(this + 0x2c);
        if (0 < iVar3) {
          setState(this,0xb);
          iVar3 = *(int *)(*(long *)(this + 0x10) + 200);
          break;
        }
      }
      if ((*(int *)(this + 0x30) <= iVar3) ||
         (fVar6 = (float)PVZ_T(), fVar6 <= *(float *)(this + 0x3c))) {
LAB_040b6530:
        iVar3 = *(int *)(*(long *)(this + 0x10) + 200);
      }
      else {
        setState(this,0xf);
        iVar3 = *(int *)(*(long *)(this + 0x10) + 200);
      }
      break;
    case 0xb:
      cVar2 = isAnimDone(this);
      if (cVar2 == '\0') goto LAB_040b64e4;
      setState(this,0xc);
      iVar3 = *(int *)(*(long *)(this + 0x10) + 200);
      break;
    case 0xc:
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
      (**(code **)(**(long **)(this + 0x10) + 0xb0))
                ((__normal_iterator *)local_30,*(long **)(this + 0x10));
      EntityFinder::GetEntitiesTouchingRectangle
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2,
                 (__normal_iterator *)local_30,0xffffffff,0xffffffff);
      lVar4 = FUN_040b3d78(local_20,local_18);
      if (lVar4 == 0) {
        cVar2 = isFlippableZombieClose(this);
        if (cVar2 == '\0') {
          setState(this,10);
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
          iVar3 = *(int *)(*(long *)(this + 0x10) + 200);
          break;
        }
      }
      else {
        local_38 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)&local_20);
        local_30[0] = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)&local_20);
        while (bVar1 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_38,(__normal_iterator *)local_30),
              bVar1) {
          std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
          nop();
          cVar2 = canBeFlippedByChardGuard(this,extraout_x0);
          if (cVar2 != '\0') {
            setState(this,0xd);
            std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
            iVar3 = *(int *)(*(long *)(this + 0x10) + 200);
            goto LAB_040b64ec;
          }
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
        }
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
      iVar3 = *(int *)(*(long *)(this + 0x10) + 200);
      break;
    case 0xd:
      cVar2 = isAnimDone(this);
      if (cVar2 != '\0') {
        iVar3 = *(int *)(this + 0x34);
        *(int *)(this + 0x34) = iVar3 + 1;
        if (*(int *)(this + 0x38) <= iVar3 + 1) {
          *(undefined4 *)(this + 0x34) = 0;
          updateLeafCount(this,*(int *)(this + 0x2c) + -1);
        }
LAB_040b6524:
        setState(this,10);
        goto LAB_040b6530;
      }
      goto LAB_040b64e4;
    case 0xe:
      cVar2 = isAnimDone(this);
      if (cVar2 != '\0') goto LAB_040b6524;
      goto LAB_040b64e4;
    case 0xf:
      cVar2 = isAnimDone(this);
      if (cVar2 != '\0') {
        updateLeafCount(this,*(int *)(this + 0x2c) + 1);
        goto LAB_040b6524;
      }
LAB_040b64e4:
      iVar3 = *(int *)(*(long *)(this + 0x10) + 200);
      break;
    default:
      goto switchD_040b64d0_default;
    }
LAB_040b64ec:
    bVar1 = iVar5 != iVar3;
    iVar5 = iVar3;
  } while (bVar1);
switchD_040b64d0_default:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChardGuard::flipZombie(Zombie*) */

void __thiscall PlantChardGuard::flipZombie(PlantChardGuard *this,Zombie *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  PlantChardGuardTossSystem *this_00;
  ZombieTosserSubSystem *pZVar5;
  float *pfVar6;
  undefined8 uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  ZombieTosserSubSystem *pZVar13;
  float local_c8 [2];
  float local_c0;
  undefined4 local_bc;
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_b0 [72];
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar7 = *(undefined8 *)(this + 0x10);
  Sexy::Point::Point((Point *)local_c8,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_c0,1.0,0.0);
  DamageInfo::DamageInfo((DamageInfo *)0x0,local_c0,local_bc,aDStack_68,1,uVar7,(Point *)local_c8,0)
  ;
  (**(code **)(*(long *)param_1 + 0x110))(param_1,aDStack_68);
  lVar8 = *(long *)(this + 0x10);
  cVar1 = FUN_040b3d18(lVar8);
  if (cVar1 == '\0') {
    if (*(int *)(lVar8 + 200) == 0xe) goto LAB_040b6c30;
    lVar8 = FUN_040b5cd8(lVar8);
    uVar11 = *(undefined4 *)(lVar8 + 700);
    lVar8 = FUN_040b5cd8(*(undefined8 *)(this + 0x10));
    fVar10 = *(float *)(lVar8 + 0x2c4);
    lVar8 = FUN_040b5cd8(*(undefined8 *)(this + 0x10));
                    /* WARNING: Load size is inaccurate */
    pZVar13._0_4_ = *(ZombieTosserSubSystem **)(lVar8 + 0x2c0);
    pfVar6 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)param_1);
    local_c8[0] = *pfVar6;
    fVar9 = pfVar6[1];
  }
  else {
    if (*(int *)(lVar8 + 200) != 0xe) {
      lVar8 = FUN_040b5cd8(lVar8);
      fVar10 = *(float *)(lVar8 + 0x2d4);
      FUN_040b5cd8(*(undefined8 *)(this + 0x10));
      lVar8 = FUN_040b5cd8(*(undefined8 *)(this + 0x10));
      fVar12 = *(float *)(lVar8 + 0x2d8);
      lVar8 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)param_1);
      fVar9 = *(float *)(lVar8 + 4);
      iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)param_1);
      iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
      local_c8[0] = (float)(iVar3 + -1);
      lVar8 = FUN_040b5cd8(*(undefined8 *)(this + 0x10));
      local_c0 = (float)(*(int *)(lVar8 + 0x2dc) + iVar2);
      piVar4 = eastl::min_alt<int>((int *)local_c8,(int *)&local_c0);
      iVar2 = BoardTransforms::GridToBoardSpaceX(*piVar4);
      EATextSquish::Vec3::Vec3((Vec3 *)&local_c0,(float)iVar2,fVar9,0.0);
      this_00 = Board::GetGameSubSystem<PlantChardGuardTossSystem>(*(Board **)(gLawnApp + 0x9f0));
      PlantChardGuardTossSystem::TossZombies(this_00,param_1,(SexyVector3 *)&local_c0,fVar12,fVar10)
      ;
      goto LAB_040b6b1c;
    }
LAB_040b6c30:
    lVar8 = FUN_040b5cd8(lVar8);
    uVar11 = *(undefined4 *)(lVar8 + 0x2c8);
    lVar8 = FUN_040b5cd8(*(undefined8 *)(this + 0x10));
    fVar10 = *(float *)(lVar8 + 0x2d0);
    lVar8 = FUN_040b5cd8(*(undefined8 *)(this + 0x10));
                    /* WARNING: Load size is inaccurate */
    pZVar13._0_4_ = *(ZombieTosserSubSystem **)(lVar8 + 0x2cc);
    pfVar6 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)param_1);
    local_c8[0] = *pfVar6;
    fVar9 = pfVar6[1];
  }
  local_c8[0] = local_c8[0] + fVar10;
  iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
  local_c0 = (float)(iVar2 * iVar3 + 200);
  pfVar6 = eastl::min_alt<float>(local_c8,&local_c0);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_c0,*pfVar6,fVar9,0.0);
  pZVar5 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_b0);
  ZombieTosserSubSystem::LaunchZombie
            (pZVar13._0_4_,uVar11,pZVar5,param_1,(FastCurve *)&local_c0,aRStack_b0,1);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_b0);
LAB_040b6b1c:
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChardGuard::damageEntitiesInGridRegion(DamageInfo, BoardEntityTypeFlag, Sexy::TRect<int>,
   bool) */

void PlantChardGuard::damageEntitiesInGridRegion
               (PlantChardGuard *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  Zombie *this;
  ulong uVar5;
  GridItem *pGVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntitiesTouchingRectangle
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,param_3,
             param_4,0xffffffff,0xffffffff);
  if (*(code **)(*(long *)param_1 + 400) == PlantFramework::GetCollisionFlags) {
    uVar2 = PlantFramework::GetCollisionFlags();
  }
  else {
    uVar2 = (**(code **)(*(long *)param_1 + 400))(param_1,0);
  }
  uVar8 = local_20;
  uVar7 = 0;
  lVar3 = FUN_040b3d78(local_20,local_18);
  if (lVar3 != 0) {
    do {
      puVar4 = (undefined8 *)FUN_040b3d84(uVar8,uVar7);
      this = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar4);
      if ((((this != (Zombie *)0x0) &&
           (cVar1 = RealObject::IsOnOpposingTeam
                              ((RealObject *)this,*(RealObject **)(param_1 + 0x10)), cVar1 != '\0'))
          && (cVar1 = (**(code **)(*(long *)this + 0x328))(this), cVar1 == '\0')) &&
         (cVar1 = (**(code **)(*(long *)this + 0xb8))(this,uVar2), cVar1 != '\0')) {
        cVar1 = canBeFlippedByChardGuard(param_1,this);
        if (cVar1 != '\0') {
          flipZombie(param_1,this);
        }
        puVar4 = (undefined8 *)FUN_040b3d84(local_20,uVar7);
        pGVar6 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar4);
        if ((pGVar6 == (GridItem *)0x0) ||
           (cVar1 = (**(code **)(*(long *)pGVar6 + 0x200))(), cVar1 != '\0')) {
          puVar4 = (undefined8 *)FUN_040b3d84(local_20,uVar7);
          (**(code **)(*(long *)*puVar4 + 0x110))((long *)*puVar4,param_2);
        }
      }
      uVar8 = local_20;
      uVar7 = uVar7 + 1;
      uVar5 = FUN_040b3d78(local_20,local_18);
    } while (uVar7 < uVar5);
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
/* PlantChardGuard::OnAnimCommand(std::string const&, std::string const&) */

void PlantChardGuard::OnAnimCommand(string *param_1,string *param_2)

{
  int iVar1;
  undefined1 uVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  long lVar6;
  undefined1 auStack_d8 [16];
  DamageInfo aDStack_c8 [96];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar3 = std::operator==(param_2,"use_action");
  if (bVar3) {
    iVar1 = *(int *)(*(Plant **)(param_1 + 0x10) + 200);
    if (iVar1 - 0xdU < 2) {
      uVar2 = iVar1 != 0xd;
      if (((bool)uVar2) &&
         (cVar4 = Plant::GetAvatarEnable(*(Plant **)(param_1 + 0x10)), cVar4 != '\0')) {
        uVar2 = 2;
      }
      Plant::GetProps();
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
      FUN_040b3d8c(*(undefined8 *)(lVar6 + 0x70),uVar2);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
      Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(param_1 + 0x10));
      DamageInfo::DamageInfo((DamageInfo *)aRStack_68,aDStack_c8);
      uVar5 = operator|(2,4);
      (**(code **)(*(long *)param_1 + 0x2b8))(auStack_d8,param_1,uVar2);
      damageEntitiesInGridRegion(param_1,aRStack_68,uVar5,auStack_d8,0);
      DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
      DamageInfo::~DamageInfo(aDStack_c8);
    }
    else {
      bVar3 = false;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar3);
  }
  return;
}

