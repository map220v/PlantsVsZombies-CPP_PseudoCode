// Class: PlantGhostPepper


/* PlantGhostPepper::CanApplyPlantfood() */

bool __thiscall PlantGhostPepper::CanApplyPlantfood(PlantGhostPepper *this)

{
  return *(int *)(*(long *)(this + 0x10) + 200) != 0x10;
}


/* PlantGhostPepper::IsInvincible() const */

bool __thiscall PlantGhostPepper::IsInvincible(PlantGhostPepper *this)

{
  return *(int *)(*(long *)(this + 0x10) + 200) == 0x10;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGhostPepper::StaticClassInit() */

void PlantGhostPepper::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantGhostPepper");
    (*pcVar2)(plVar1,asStack_10,FUN_040924b4,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGhostPepper::StaticGetClass() */

long * PlantGhostPepper::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantGhostPepper",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantGhostPepper::GetClass() const */

long * PlantGhostPepper::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantGhostPepper",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGhostPepper::GetLevel2AppendTarget(std::vector<BoardEntity*, std::allocator<BoardEntity*>
   >&) */

void __thiscall PlantGhostPepper::GetLevel2AppendTarget(PlantGhostPepper *this,vector *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  Insets aIStack_18 [16];
  long local_8;
  
  lVar6 = *(long *)(this + 0x10);
  iVar5 = *(int *)(lVar6 + 0x110);
  local_8 = ___stack_chk_guard;
  iVar4 = iVar5 + -2;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else {
    iVar5 = 2;
  }
  uVar1 = operator|(2,4);
  Sexy::Insets::Insets(aIStack_18,*(int *)(lVar6 + 0x114),iVar4,1,iVar5);
  EntityFinder::GetEntitiesInGridSquares(param_1,uVar1,aIStack_18);
  iVar4 = *(int *)(*(long *)(this + 0x10) + 0x110);
  iVar2 = BoardConstants::NUMBER_OF_ROWS();
  iVar3 = 2;
  iVar5 = iVar4 + 1;
  if (iVar2 < iVar4 + 3) {
    iVar3 = BoardConstants::NUMBER_OF_ROWS();
    iVar3 = iVar3 - iVar5;
  }
  Sexy::Insets::Insets(aIStack_18,*(int *)(*(long *)(this + 0x10) + 0x114),iVar5,1,iVar3);
  EntityFinder::GetEntitiesInGridSquares(param_1,uVar1,aIStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGhostPepper::causeDamage(std::vector<BoardEntity*, std::allocator<BoardEntity*> > const&,
   DamageInfo const&) */

void __thiscall
PlantGhostPepper::causeDamage(PlantGhostPepper *this,vector *param_1,DamageInfo *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  Zombie *pZVar3;
  ulong uVar4;
  long *extraout_x0;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar5 = 0;
  uVar6 = *(undefined8 *)param_1;
  lVar1 = FUN_04090618(uVar6,*(undefined8 *)(param_1 + 8));
  if (lVar1 != 0) {
    do {
      puVar2 = (undefined8 *)FUN_04090624(uVar6,uVar5);
      if ((RtObject *)*puVar2 == (RtObject *)0x0) {
LAB_04091abc:
        nop();
        (**(code **)(*extraout_x0 + 0x110))();
      }
      else {
        pZVar3 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar2);
        if (pZVar3 == (Zombie *)0x0) {
          FUN_04090624(*(undefined8 *)param_1,uVar5);
          goto LAB_04091abc;
        }
        (**(code **)(*(long *)pZVar3 + 0x110))(pZVar3,param_2);
      }
      uVar5 = uVar5 + 1;
      uVar6 = *(undefined8 *)param_1;
      uVar4 = FUN_04090618(uVar6,*(undefined8 *)(param_1 + 8));
    } while (uVar5 < uVar4);
  }
  return;
}


/* PlantGhostPepper::PlantGhostPepper() */

void __thiscall PlantGhostPepper::PlantGhostPepper(PlantGhostPepper *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067cd880;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  return;
}


/* PlantGhostPepper::StaticNew() */

PlantGhostPepper * PlantGhostPepper::StaticNew(void)

{
  PlantGhostPepper *this;
  
  this = ::operator_new(0x60);
  PlantGhostPepper(this);
  return this;
}


/* PlantGhostPepper::destroyAttackOverlay() */

void __thiscall PlantGhostPepper::destroyAttackOverlay(PlantGhostPepper *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  GhostPepperAttackAnim *this_01;
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = 0;
  while( true ) {
    uVar3 = *(undefined8 *)(this + 0x30);
    uVar1 = FUN_0409062c(uVar3,*(undefined8 *)(this + 0x38));
    if (uVar1 <= uVar2) break;
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04090654(uVar3,uVar2);
    this_01 = (GhostPepperAttackAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    GhostPepperAttackAnim::StopFog(this_01);
    uVar2 = uVar2 + 1;
  }
  std::
  vector<Sexy::RtWeakPtr<GhostPepperAttackAnim>,std::allocator<Sexy::RtWeakPtr<GhostPepperAttackAnim>>>
  ::clear((vector<Sexy::RtWeakPtr<GhostPepperAttackAnim>,std::allocator<Sexy::RtWeakPtr<GhostPepperAttackAnim>>>
           *)(this + 0x30));
  return;
}


/* PlantGhostPepper::~PlantGhostPepper() */

void __thiscall PlantGhostPepper::~PlantGhostPepper(PlantGhostPepper *this)

{
  *(undefined ***)this = &PTR_GetClass_067cd880;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x48));
  std::
  vector<Sexy::RtWeakPtr<GhostPepperAttackAnim>,std::allocator<Sexy::RtWeakPtr<GhostPepperAttackAnim>>>
  ::~vector((vector<Sexy::RtWeakPtr<GhostPepperAttackAnim>,std::allocator<Sexy::RtWeakPtr<GhostPepperAttackAnim>>>
             *)(this + 0x30));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantGhostPepper::~PlantGhostPepper() */

void __thiscall PlantGhostPepper::~PlantGhostPepper(PlantGhostPepper *this)

{
  ~PlantGhostPepper(this);
  AK::FreeHook(this);
  return;
}


/* PlantGhostPepper::onDestroy() */

void __thiscall PlantGhostPepper::onDestroy(PlantGhostPepper *this)

{
  char *pcVar1;
  
  destroyAttackOverlay(this);
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_Plant_GhostPepper_Attack_Stop_Loop");
  PlantFramework::onDestroy((PlantFramework *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGhostPepper::ApplyStun(std::vector<BoardEntity*, std::allocator<BoardEntity*> > const&) */

void __thiscall PlantGhostPepper::ApplyStun(PlantGhostPepper *this,vector *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  Zombie *this_01;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  Zombie *pZVar9;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x48);
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_04091f64(*(undefined8 *)(this + 0x10));
  uVar8 = *(undefined8 *)param_1;
                    /* WARNING: Load size is inaccurate */
  pZVar9._0_4_ = *(Zombie **)(lVar3 + 0x2dc);
  uVar7 = 0;
  uVar4 = FUN_04090618(uVar8,*(undefined8 *)(param_1 + 8));
  if (uVar4 != 0) {
    do {
      puVar5 = (undefined8 *)FUN_04090624(uVar8,uVar7);
      if ((RtObject *)*puVar5 != (RtObject *)0x0) {
        this_01 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar5);
        if ((((this_01 != (Zombie *)0x0) &&
             (cVar1 = (**(code **)(*(long *)this_01 + 0x328))(), cVar1 == '\0')) &&
            (cVar1 = (**(code **)(*(long *)this_01 + 0x330))(this_01), cVar1 == '\0')) &&
           (((bVar2 = Sexy::RtObject::IsA<Zomboss>((RtObject *)this_01), !bVar2 &&
             (cVar1 = (**(code **)(*(long *)this_01 + 0x4d8))(this_01), cVar1 == '\0')) &&
            ((cVar1 = (**(code **)(*(long *)this_01 + 0x508))(this_01), cVar1 == '\0' &&
             (bVar2 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)this_01), !bVar2)))))) {
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)&local_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
          uVar8 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin(this_00);
          uVar6 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(this_00);
          local_18 = std::
                     find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Zombie>*,std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>>,Sexy::RtWeakPtr<Zombie>>
                               (uVar8,uVar6,aRStack_20);
          local_10 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end(this_00);
          bVar2 = __gnu_cxx::operator==
                            ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
          if (bVar2) {
            Zombie::ApplyCondition(pZVar9._0_4_,0,this_01,2,1);
            std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                      ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                       this_00,(RtWeakPtr *)aRStack_20);
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
        }
        uVar8 = *(undefined8 *)param_1;
        uVar4 = FUN_04090618(uVar8,*(undefined8 *)(param_1 + 8));
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGhostPepper::createAttackOverlay() */

void __thiscall PlantGhostPepper::createAttackOverlay(PlantGhostPepper *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  GhostPepperAttackAnim *pGVar4;
  Effect_PopAnim *pEVar5;
  ResourceInfo *pRVar6;
  StandaloneEffect *pSVar7;
  long lVar8;
  int *piVar9;
  RealObject *pRVar10;
  int iVar11;
  float fVar12;
  int iVar13;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  int local_20 [2];
  int local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar13 = *(int *)(*(long *)(this + 0x10) + 0x110);
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  iVar11 = iVar13;
  if (cVar1 != '\0') {
    iVar13 = *(int *)(*(long *)(this + 0x10) + 0x110);
    local_18[0] = 0;
    local_20[0] = iVar13 + -1;
    piVar9 = eastl::max_alt<int>(local_20,local_18);
    iVar11 = *piVar9;
    local_20[0] = iVar13 + 1;
    local_18[0] = BoardConstants::NUMBER_OF_ROWS();
    local_18[0] = local_18[0] + -1;
    piVar9 = eastl::min_alt<int>(local_20,local_18);
    iVar13 = *piVar9;
    if (iVar13 < iVar11) goto LAB_04092edc;
  }
  do {
    Board::AddEffect<GhostPepperAttackAnim>(*(Board **)(gLawnApp + 0x9f0));
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_28,(RtWeakPtrBase *)local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    pEVar5 = (Effect_PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
    std::string::string((string *)local_20,"POPANIM_EFFECTS_GHOSTPEPPER_ATTACK_OVERLAY");
    GetPAMByName((string *)local_20);
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_18);
    Effect_PopAnim::CreatePopAnimRig(pEVar5,(PopAnim *)pRVar6,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    std::string::~string((string *)local_20);
    nop();
    pEVar5 = (Effect_PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
    Effect_PopAnim::SetCentered(pEVar5,true);
    iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
    iVar3 = *(int *)(*(long *)(this + 0x10) + 0x110);
    pSVar7 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
    pRVar10 = *(RealObject **)(this + 0x10);
    EATextSquish::Vec3::Vec3((Vec3 *)local_18,0.0,(float)(iVar2 * (iVar11 - iVar3)),20.0);
    StandaloneEffect::SetAttached(pSVar7,pRVar10,(SexyVector3 *)local_18,1);
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
    FUN_040906d0(lVar8 + 0x1c);
    cVar1 = (**(code **)(*(long *)this + 0x180))(this);
    if (cVar1 == '\0') {
      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      iVar3 = FUN_040905f4(*(undefined8 *)(this + 0x10));
      FUN_040905fc(lVar8 + 0x109,2 < iVar3);
    }
    pGVar4 = (GhostPepperAttackAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
    GhostPepperAttackAnim::StartFog(pGVar4);
    std::
    vector<Sexy::RtWeakPtr<GhostPepperAttackAnim>,std::allocator<Sexy::RtWeakPtr<GhostPepperAttackAnim>>>
    ::push_back((vector<Sexy::RtWeakPtr<GhostPepperAttackAnim>,std::allocator<Sexy::RtWeakPtr<GhostPepperAttackAnim>>>
                 *)(this + 0x30),(RtWeakPtr *)aRStack_28);
    cVar1 = (**(code **)(*(long *)this + 0x180))(this);
    if ((cVar1 == '\0') && (iVar3 = FUN_040905f4(*(undefined8 *)(this + 0x10)), 1 < iVar3)) {
      Board::AddEffect<GhostPepperAttackAnim>(*(Board **)(gLawnApp + 0x9f0));
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)aRStack_28,(RtWeakPtrBase *)local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
      pEVar5 = (Effect_PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      std::string::string((string *)local_20,"POPANIM_EFFECTS_GHOSTPEPPER_ATTACK_OVERLAY");
      GetPAMByName((string *)local_20);
      pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_18);
      Effect_PopAnim::CreatePopAnimRig(pEVar5,(PopAnim *)pRVar6,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
      std::string::~string((string *)local_20);
      nop();
      pEVar5 = (Effect_PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      Effect_PopAnim::SetCentered(pEVar5,true);
      pSVar7 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      pRVar10 = *(RealObject **)(this + 0x10);
      EATextSquish::Vec3::Vec3((Vec3 *)local_18,-10.0,-10.0,0.0);
      StandaloneEffect::SetAttached(pSVar7,pRVar10,(SexyVector3 *)local_18,1);
      pEVar5 = (Effect_PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      fVar12 = (float)Sexy::SexyMath::DegToRad(90.0);
      Effect_PopAnim::SetOrientation(pEVar5,fVar12);
      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      FUN_040906d0(lVar8 + 0x1c);
      pGVar4 = (GhostPepperAttackAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      GhostPepperAttackAnim::StartFog(pGVar4);
      std::
      vector<Sexy::RtWeakPtr<GhostPepperAttackAnim>,std::allocator<Sexy::RtWeakPtr<GhostPepperAttackAnim>>>
      ::push_back((vector<Sexy::RtWeakPtr<GhostPepperAttackAnim>,std::allocator<Sexy::RtWeakPtr<GhostPepperAttackAnim>>>
                   *)(this + 0x30),(RtWeakPtr *)aRStack_28);
    }
    iVar11 = iVar11 + 1;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  } while (iVar11 <= iVar13);
LAB_04092edc:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGhostPepper::UniqueAppend(std::vector<BoardEntity*, std::allocator<BoardEntity*> >&,
   std::vector<BoardEntity*, std::allocator<BoardEntity*> > const&) */

void __thiscall
PlantGhostPepper::UniqueAppend(PlantGhostPepper *this,vector *param_1,vector *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  BoardEntity **ppBVar5;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_20 = FUN_04091aec(*(undefined8 *)param_2);
  while( true ) {
    local_10 = FUN_04091b3c(*(undefined8 *)(param_2 + 8));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_10);
    if (!bVar1) break;
    uVar2 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)param_1);
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)param_1);
    uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    local_18 = std::
               find<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,BoardEntity*>
                         (uVar2,uVar3,uVar4);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)param_1);
    bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (bVar1) {
      ppBVar5 = (BoardEntity **)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)param_1,ppBVar5);
    }
    FUN_04091b8c((__normal_iterator *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGhostPepper::filterTargets(std::vector<BoardEntity*, std::allocator<BoardEntity*> > const&,
   std::vector<BoardEntity*, std::allocator<BoardEntity*> >*) */

void __thiscall
PlantGhostPepper::filterTargets(PlantGhostPepper *this,vector *param_1,vector *param_2)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  Zombie *this_00;
  ulong uVar5;
  BoardEntity **ppBVar6;
  long *extraout_x0;
  code *pcVar7;
  ulong uVar8;
  undefined8 uVar9;
  code *pcVar10;
  
  uVar9 = *(undefined8 *)param_1;
  uVar8 = 0;
  lVar3 = FUN_04090618(uVar9,*(undefined8 *)(param_1 + 8));
  if (lVar3 != 0) {
    do {
      puVar4 = (undefined8 *)FUN_04090624(uVar9,uVar8);
      if ((RtObject *)*puVar4 == (RtObject *)0x0) {
LAB_04093178:
        nop();
        cVar1 = (**(code **)(*extraout_x0 + 0x200))();
        if (cVar1 != '\0') {
LAB_04093148:
          ppBVar6 = (BoardEntity **)FUN_04090624(*(undefined8 *)param_1,uVar8);
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)param_2,ppBVar6);
        }
      }
      else {
        this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar4);
        if (this_00 == (Zombie *)0x0) {
          FUN_04090624(*(undefined8 *)param_1,uVar8);
          goto LAB_04093178;
        }
        cVar1 = (**(code **)(*(long *)this_00 + 0x328))();
        if ((cVar1 == '\0') &&
           (cVar1 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar1 == '\0')) {
          if (*(long *)(this + 0x10) != 0) {
            pcVar10 = *(code **)(*(long *)this_00 + 0xb8);
            pcVar7 = *(code **)(**(long **)(*(long *)(this + 0x10) + 0xa8) + 400);
            if (pcVar7 == PlantFramework::GetCollisionFlags) {
              uVar2 = PlantFramework::GetCollisionFlags();
            }
            else {
              uVar2 = (*pcVar7)();
            }
            cVar1 = (*pcVar10)(this_00,uVar2);
            if ((cVar1 == '\0') ||
               ((*(RealObject **)(this + 0x10) != (RealObject *)0x0 &&
                (cVar1 = RealObject::IsOnOpposingTeam
                                   ((RealObject *)this_00,*(RealObject **)(this + 0x10)),
                cVar1 == '\0')))) goto LAB_040930a8;
          }
          goto LAB_04093148;
        }
      }
LAB_040930a8:
      uVar8 = uVar8 + 1;
      uVar9 = *(undefined8 *)param_1;
      uVar5 = FUN_04090618(uVar9,*(undefined8 *)(param_1 + 8));
    } while (uVar8 < uVar5);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGhostPepper::findTargets(std::vector<BoardEntity*, std::allocator<BoardEntity*> >*,
   PlantWeapon) */

void __thiscall
PlantGhostPepper::findTargets
          (PlantGhostPepper *this,
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *param_1,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  float *pfVar6;
  float *pfVar7;
  undefined8 local_50;
  undefined1 auStack_48 [8];
  int local_40;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_040905f4(*(undefined8 *)(this + 0x10));
  (**(code **)(*(long *)this + 0x2b8))(auStack_48,this,param_3);
  if ((2 < iVar2) && (param_3 == 0)) {
    iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
    local_40 = local_40 + iVar4;
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  uVar3 = operator|(4,2);
  EntityFinder::GetEntitiesTouchingRectangle(avStack_38,uVar3,auStack_48,0xffffffff,0xffffffff);
  if ((1 < iVar2) && (param_3 == 0)) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    GetLevel2AppendTarget(this,(vector *)local_20);
    UniqueAppend(this,(vector *)avStack_38,(vector *)local_20);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_20);
  }
  iVar2 = 0;
  filterTargets(this,(vector *)avStack_38,(vector *)param_1);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(param_1);
  local_20[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(param_1);
  while (bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_50,(__normal_iterator *)local_20)
        , bVar1) {
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    pfVar6 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)*puVar5);
    pfVar7 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      **)(this + 0x10));
    iVar4 = -1;
    if (*pfVar7 <= *pfVar6) {
      iVar4 = 1;
    }
    iVar2 = iVar2 + iVar4;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
  }
  *(byte *)(*(long *)(this + 0x10) + 0x14c) = (byte)((uint)iVar2 >> 0x1f);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGhostPepper::explode() */

void __thiscall PlantGhostPepper::explode(PlantGhostPepper *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float *pfVar5;
  long lVar6;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  Plant *this_01;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  Point aPStack_a8 [8];
  undefined4 local_a0;
  undefined4 local_9c;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_98 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  FastCurve aFStack_68 [96];
  long local_8;
  
  this_00 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  pfVar5 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(this_00);
  fVar10 = pfVar5[1];
  fVar8 = *pfVar5;
  lVar6 = FUN_04091f64(this_00);
  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
  fVar12 = *(float *)(lVar6 + 0x2d0);
  iVar2 = *(int *)(*(long *)(this + 0x10) + 0x110);
  iVar1 = (int)fVar12 / 2;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_98);
  uVar4 = operator|(2,4);
  Sexy::FastCurve::SetOutRange(aFStack_68,fVar8,fVar10 - 30.0);
  EntityFinder::GetEntitiesTouchingCircle2D
            ((float)iVar3 * SQRT(fVar12),avStack_98,uVar4,aFStack_68,iVar2 - iVar1,iVar1 + iVar2);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  filterTargets(this,(vector *)avStack_98,(vector *)avStack_80);
  this_01 = *(Plant **)(this + 0x10);
  fVar8 = (float)FUN_040905d8(*(undefined4 *)(this_01 + 0xf4),*(undefined4 *)(this_01 + 0x100),
                              *(undefined4 *)(this_01 + 0x104),*(undefined4 *)(this_01 + 0x3b8));
  fVar10 = (float)FUN_040905e8(*(undefined4 *)(this_01 + 0x3bc));
  fVar12 = (float)Plant::GetExtraDPSmodifier(this_01);
  lVar7 = *(long *)(this + 0x10);
  fVar9 = (float)FUN_040905ec(*(undefined4 *)(lVar7 + 0x424));
  fVar11 = *(float *)(lVar6 + 0x2cc);
  Sexy::Point::Point(aPStack_a8,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_a0,1.0,0.0);
  DamageInfo::DamageInfo
            ((DamageInfo *)(fVar8 * fVar10 * fVar11 * fVar12 * fVar9),local_a0,local_9c,aFStack_68,
             lVar7,aPStack_a8,0);
  causeDamage(this,(vector *)avStack_80,(DamageInfo *)aFStack_68);
  DamageInfo::~DamageInfo((DamageInfo *)aFStack_68);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_98);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGhostPepper::haunt(PlantWeapon) */

void __thiscall PlantGhostPepper::haunt(PlantGhostPepper *this,int param_2)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [16];
  undefined1 auStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetProps();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
  FUN_04090608(*(undefined8 *)(lVar3 + 0x70),param_2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
  if (*(code **)(*(long *)this + 0x198) == PlantFramework::GetDamageFlags) {
    uVar4 = PlantFramework::GetDamageFlags();
  }
  else {
    uVar4 = (**(code **)(*(long *)this + 0x198))(this,param_2);
  }
  operator|=(auStack_58,uVar4);
  DamageInfo::AddCondition((DamageInfo *)0x3f5dddde,aRStack_68,0x21);
  DamageInfo::AddCondition((DamageInfo *)0x3f5dddde,aRStack_68,2);
  cVar1 = (**(code **)(*(long *)this + 0x180))(this);
  if (cVar1 == '\0') {
    fVar5 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
    fVar6 = (float)Plant::GetGeneSkillBoost(*(Plant **)(this + 0x10));
    if (fVar6 <= fVar5) goto LAB_04093664;
  }
  else {
    operator|=(auStack_58,0x2000);
    fVar5 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
    fVar6 = (float)Plant::GetGeneSkillBoost(*(Plant **)(this + 0x10));
    if (fVar6 <= fVar5) goto LAB_04093664;
  }
  DamageInfo::AddCondition((DamageInfo *)0x3f000000,aRStack_68,2);
LAB_04093664:
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  findTargets(this,avStack_80,param_2);
  causeDamage(this,(vector *)avStack_80,(DamageInfo *)aRStack_68);
  if ((param_2 == 1) && (cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10)), cVar1 != '\0')) {
    ApplyStun(this,(vector *)avStack_80);
  }
  bVar2 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2 ^ 1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGhostPepper::setState(GhostPepperState) */

void __thiscall PlantGhostPepper::setState(PlantGhostPepper *this,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  PlantAnimRig_GhostPepper *extraout_x0;
  PlantAnimRig_GhostPepper *extraout_x0_00;
  long lVar3;
  UIEasyButtonWidget *this_00;
  undefined4 uVar4;
  float fVar5;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  if (*(int *)(this_00 + 200) == param_2) goto switchD_040937e8_caseD_e;
  if (*(int *)(this_00 + 200) == 0xd) {
    destroyAttackOverlay(this);
    cVar1 = (**(code **)(*(long *)this + 0x180))(this);
    if (cVar1 == '\0') {
      this_00 = *(UIEasyButtonWidget **)(this + 0x10);
    }
    else {
      uVar4 = PVZ_EOT();
      this_00 = *(UIEasyButtonWidget **)(this + 0x10);
      *(undefined4 *)(this + 0x2c) = uVar4;
    }
  }
  *(int *)(this_00 + 200) = param_2;
  switch(param_2) {
  case 0xb:
    (**(code **)(*(long *)this + 0x1a0))(this);
    break;
  case 0xc:
    std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
              ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
               (this + 0x48));
    break;
  case 0xd:
    uVar4 = PVZ_T();
    *(undefined4 *)(this + 0x28) = uVar4;
    fVar5 = (float)PVZ_EOT();
    if ((*(float *)(this + 0x2c) == fVar5) &&
       (cVar1 = (**(code **)(*(long *)this + 0x180))(this), cVar1 == '\0')) {
      fVar5 = (float)PVZ_T();
      lVar3 = FUN_04091f64(*(undefined8 *)(this + 0x10));
      *(float *)(this + 0x2c) = fVar5 + *(float *)(lVar3 + 0x2c8);
    }
    createAttackOverlay(this);
    uVar2 = (**(code **)(*(long *)this + 0x180))(this);
    haunt(this,uVar2);
    break;
  case 0xf:
    UIEasyButtonWidget::GetImageNormal(this_00);
    nop();
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_60,asStack_58);
    PlantAnimRig_GhostPepper::StopAttacking(extraout_x0,aRStack_50);
    goto LAB_040938ac;
  case 0x10:
    UIEasyButtonWidget::GetImageNormal(this_00);
    nop();
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_60,asStack_58);
    PlantAnimRig_GhostPepper::StartDeathExplosion(extraout_x0_00,aRStack_50);
LAB_040938ac:
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
switchD_040937e8_caseD_e:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGhostPepper::Initialize() */

void __thiscall PlantGhostPepper::Initialize(PlantGhostPepper *this)

{
  undefined4 uVar1;
  
  PlantFramework::Initialize((PlantFramework *)this);
  setState(this,10);
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x2c) = uVar1;
  return;
}


/* PlantGhostPepper::endHaunting() */

void __thiscall PlantGhostPepper::endHaunting(PlantGhostPepper *this)

{
  setState(this,0xf);
  return;
}


/* PlantGhostPepper::ApplyPlantfood() */

void __thiscall PlantGhostPepper::ApplyPlantfood(PlantGhostPepper *this)

{
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  setState(this,0xc);
  return;
}


/* PlantGhostPepper::CancelPlantfood() */

void __thiscall PlantGhostPepper::CancelPlantfood(PlantGhostPepper *this)

{
  setState(this,10);
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  return;
}


/* PlantGhostPepper::OnAnimCommand(std::string const&, std::string const&) */

bool PlantGhostPepper::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_2,"use_action");
  if (bVar1) {
    setState((PlantGhostPepper *)param_1,0xd);
    return true;
  }
  bVar1 = std::operator==(param_2,"death_explosion");
  if (!bVar1) {
    return bVar1;
  }
  explode((PlantGhostPepper *)param_1);
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGhostPepper::findTargetsAndPlayAttackAnim() */

void __thiscall PlantGhostPepper::findTargetsAndPlayAttackAnim(PlantGhostPepper *this)

{
  long lVar1;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  findTargets(this,(vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,0);
  lVar1 = FUN_04090618(local_20,local_18);
  if (lVar1 != 0) {
    setState(this,0xb);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGhostPepper::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantGhostPepper::onAnimStoppedCallback(PlantGhostPepper *this,string *param_1)

{
  bool bVar1;
  long *plVar2;
  
  bVar1 = std::operator==(param_1,"Fade_out");
  if (bVar1) {
    Plant::KillPlant(*(Plant **)(this + 0x10),1,0,0x8000000000);
    return;
  }
  bVar1 = std::operator==(param_1,"attack_end");
  if (!bVar1) {
    setState(this,10);
    return;
  }
  plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  (**(code **)(*plVar2 + 0x118))();
  setState(this,10);
  return;
}


/* PlantGhostPepper::startDeathExplosion() */

void __thiscall PlantGhostPepper::startDeathExplosion(PlantGhostPepper *this)

{
  setState(this,0x10);
  return;
}


/* PlantGhostPepper::TakeSmashAttack(Sexy::RtWeakPtr<Zombie>) */

void PlantGhostPepper::TakeSmashAttack(PlantGhostPepper *param_1)

{
  char cVar1;
  
  cVar1 = Plant::IsInvincible(*(Plant **)(param_1 + 0x10),false);
  if (cVar1 != '\0') {
    return;
  }
  startDeathExplosion(param_1);
  return;
}


/* PlantGhostPepper::TakeDamage(DamageInfo const&) */

void PlantGhostPepper::TakeDamage(DamageInfo *param_1)

{
  DamageInfo *in_x1;
  DamageInfo *in_x8;
  
  DamageInfo::DamageInfo(in_x8,in_x1);
  if (*(float *)(*(long *)(param_1 + 0x10) + 0xd8) <= *(float *)(in_x8 + 8)) {
    *(float *)(in_x8 + 8) = *(float *)(*(long *)(param_1 + 0x10) + 0xd8) - 1.0;
    startDeathExplosion((PlantGhostPepper *)param_1);
  }
  return;
}


/* PlantGhostPepper::updateAttack() */

void __thiscall PlantGhostPepper::updateAttack(PlantGhostPepper *this)

{
  undefined1 uVar1;
  char cVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar1 = (**(code **)(*(long *)this + 0x180))();
  lVar3 = FUN_04091f64(*(undefined8 *)(this + 0x10));
  fVar6 = *(float *)(this + 0x28);
  fVar4 = *(float *)(lVar3 + 700);
  fVar5 = (float)PVZ_T();
  if (fVar4 + fVar6 < fVar5) {
    cVar2 = haunt(this,uVar1);
    *(float *)(this + 0x28) = *(float *)(this + 0x28) + *(float *)(lVar3 + 700);
    if ((cVar2 == '\0') && (cVar2 = (**(code **)(*(long *)this + 0x180))(this), cVar2 == '\0')) {
      endHaunting(this);
      return;
    }
  }
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x04093ed0 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* PlantGhostPepper::UpdateActions() */

void __thiscall PlantGhostPepper::UpdateActions(PlantGhostPepper *this)

{
  undefined1 auVar1 [16];
  char cVar2;
  UIEasyButtonWidget *this_00;
  PopAnimRig *pPVar3;
  long lVar4;
  float fVar5;
  undefined1 extraout_var [12];
  float fVar6;
  undefined4 local_1c;
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = Board::IsPlaying(*(Board **)(gLawnApp + 0x9f0));
  if (((cVar2 != '\0') &&
      (cVar2 = Plant::IsInvincible(*(Plant **)(this + 0x10),false), cVar2 == '\0')) &&
     (fVar5 = (float)PVZ_T(), *(float *)(this + 0x2c) <= fVar5)) {
    startDeathExplosion(this);
  }
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  if (*(int *)(this_00 + 200) == 10) {
    cVar2 = Board::IsGameplayEnded(*(Board **)(gLawnApp + 0x9f0));
    if (cVar2 == '\0') {
      findTargetsAndPlayAttackAnim(this);
      this_00 = *(UIEasyButtonWidget **)(this + 0x10);
      goto LAB_04093df0;
    }
  }
  else {
    if (*(int *)(this_00 + 200) != 0xd) goto LAB_04093df0;
    updateAttack(this);
  }
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
LAB_04093df0:
  pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_00);
  Sexy::Insets::Insets((Insets *)local_18,0xff,0xff,0xff,0xff);
  PopAnimRig::SetPAMColor(pPVar3,(Color *)local_18);
  fVar6 = *(float *)(this + 0x2c);
  fVar5 = (float)PVZ_EOT();
  if (fVar6 < fVar5) {
    fVar5 = (float)PVZ_T();
    fVar6 = fVar6 - fVar5;
    lVar4 = FUN_04091f64(*(undefined8 *)(this + 0x10));
    if ((0.0 < fVar6) && (fVar6 < *(float *)(lVar4 + 0x2c8))) {
      fVar5 = 1.0 - fVar6 / *(float *)(lVar4 + 0x2c8);
      fVar5 = fVar5 * fVar5;
      fVar5 = fVar5 * fVar5 * 125.66371;
      cosf(fVar5);
      local_18[0] = 0x3f800000;
      local_1c = 0x3ecccccd;
      auVar1._4_12_ = extraout_var;
      auVar1._0_4_ = fVar5;
      fVar5 = CurveEvaluate<float>(auVar1,0x3f000000,&local_1c,(Insets *)local_18,1);
      pPVar3 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      Sexy::Insets::Insets((Insets *)local_18,0xff,0xff,0xff,(int)(fVar5 * 255.0));
      PopAnimRig::SetPAMColor(pPVar3,(Color *)local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

