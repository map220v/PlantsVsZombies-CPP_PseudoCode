// Class: GridItemEnergyGrid


/* GridItemEnergyGrid::CalcRenderOrder() const */

void __thiscall GridItemEnergyGrid::CalcRenderOrder(GridItemEnergyGrid *this)

{
  undefined4 uVar1;
  
  uVar1 = FUN_03e08614(*(undefined4 *)(this + 0x134));
  Board::MakeRenderOrder(300000,uVar1,0);
  return;
}


/* non-virtual thunk to GridItemEnergyGrid::CalcRenderOrder() const */

void __thiscall GridItemEnergyGrid::CalcRenderOrder(GridItemEnergyGrid *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemEnergyGrid::StaticClassInit() */

void GridItemEnergyGrid::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemEnergyGrid");
    (*pcVar2)(plVar1,asStack_10,FUN_03e098b0,0x1d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemEnergyGrid::StaticGetClass() */

long * GridItemEnergyGrid::StaticGetClass(void)

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
  uVar2 = GridItem::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemEnergyGrid",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemEnergyGrid::GetClass() const */

long * GridItemEnergyGrid::GetClass(void)

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
  uVar2 = GridItem::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemEnergyGrid",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemEnergyGrid::CanSpawnZombies() const */

bool __thiscall GridItemEnergyGrid::CanSpawnZombies(GridItemEnergyGrid *this)

{
  return *(int *)(this + 0x198) == 2;
}


/* GridItemEnergyGrid::~GridItemEnergyGrid() */

void __thiscall GridItemEnergyGrid::~GridItemEnergyGrid(GridItemEnergyGrid *this)

{
  *(undefined ***)this = &PTR_GetClass_06782360;
  *(undefined ***)(this + 0x10) = &PTR__GridItemEnergyGrid_067825f8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1c0));
  GridItem::~GridItem((GridItem *)this);
  return;
}


/* non-virtual thunk to GridItemEnergyGrid::~GridItemEnergyGrid() */

void __thiscall GridItemEnergyGrid::~GridItemEnergyGrid(GridItemEnergyGrid *this)

{
  ~GridItemEnergyGrid(this + -0x10);
  return;
}


/* GridItemEnergyGrid::~GridItemEnergyGrid() */

void __thiscall GridItemEnergyGrid::~GridItemEnergyGrid(GridItemEnergyGrid *this)

{
  ~GridItemEnergyGrid(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemEnergyGrid::~GridItemEnergyGrid() */

void __thiscall GridItemEnergyGrid::~GridItemEnergyGrid(GridItemEnergyGrid *this)

{
  ~GridItemEnergyGrid(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemEnergyGrid::GridItemEnergyGrid() */

void __thiscall GridItemEnergyGrid::GridItemEnergyGrid(GridItemEnergyGrid *this)

{
  bool bVar1;
  undefined4 uVar2;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GridItem((GridItem *)this);
  *(undefined4 *)(this + 0x198) = 0xffffffff;
  *(undefined ***)this = &PTR_GetClass_06782360;
  *(undefined ***)(this + 0x10) = &PTR__GridItemEnergyGrid_067825f8;
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x1a4) = 0;
  *(undefined4 *)(this + 0x1a8) = 5;
  *(undefined4 *)(this + 0x1b0) = 0;
  *(undefined4 *)(this + 0x1b4) = 0;
  this[0x1b8] = (GridItemEnergyGrid)0x0;
  this[0x1b9] = (GridItemEnergyGrid)0x0;
  *(undefined4 *)(this + 0x1a0) = 0x3f800000;
  *(undefined4 *)(this + 0x19c) = uVar2;
  *(undefined4 *)(this + 0x1ac) = uVar2;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1c0));
  *(undefined4 *)(this + 0x1d4) = 1;
  *(undefined4 *)(this + 0x1d0) = 0x3f800000;
  *(undefined4 *)(this + 0x1c8) = uVar2;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1c0),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined4 *)(this + 0x194) = 0x41200000;
  *(undefined4 *)(this + 0x1cc) = 0x41200000;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemEnergyGrid::StaticNew() */

GridItemEnergyGrid * GridItemEnergyGrid::StaticNew(void)

{
  GridItemEnergyGrid *this;
  
  this = ::operator_new(0x1d8);
  GridItemEnergyGrid(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemEnergyGrid::calcDamageState() */

void __thiscall GridItemEnergyGrid::calcDamageState(GridItemEnergyGrid *this)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  int local_10;
  int local_c;
  long local_8;
  
  lVar4 = *(long *)this;
  iVar1 = *(int *)(this + 0x1a8);
  pcVar3 = *(code **)(lVar4 + 0x1d8);
  local_8 = ___stack_chk_guard;
  if (pcVar3 == GridItem::GetHitpoints) {
    fVar5 = (float)GridItem::GetHitpoints((GridItem *)this);
    pcVar3 = *(code **)(lVar4 + 0x1e0);
  }
  else {
    fVar5 = (float)(*pcVar3)();
    pcVar3 = *(code **)(*(long *)this + 0x1e0);
  }
  if (pcVar3 == GridItem::GetMaxHitpoints) {
    fVar6 = (float)GridItem::GetMaxHitpoints((GridItem *)this);
  }
  else {
    fVar6 = (float)(*pcVar3)();
  }
  local_c = *(int *)(this + 0x1a8) + -1;
  local_10 = iVar1 - (int)((fVar5 * (float)iVar1) / fVar6);
  piVar2 = eastl::min_alt<int>(&local_10,&local_c);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(*piVar2);
  }
  return;
}


/* GridItemEnergyGrid::SetRiseDelay(float) */

void __thiscall GridItemEnergyGrid::SetRiseDelay(GridItemEnergyGrid *this,float param_1)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x19c) = fVar1 + param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemEnergyGrid::spawnDirt() */

void __thiscall GridItemEnergyGrid::spawnDirt(GridItemEnergyGrid *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  int iVar1;
  Effect_PopAnim *this_01;
  ResourceInfo *pRVar2;
  StandaloneEffect *this_02;
  long lVar3;
  undefined8 local_28;
  Point aPStack_20 [8];
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x1c0);
  *(undefined4 *)(this + 0x1cc) = *(undefined4 *)(this + 0x194);
  Sexy::Point::Point((Point *)&local_28);
  GridItem::GetGridLocation();
  BoardTransforms::GridToBoardSpace(aPStack_20);
  local_28 = local_18[0];
  Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  this_01 = (Effect_PopAnim *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  std::string::string((string *)aPStack_20,"POPANIM_EFFECTS_ENERGYGRID_BAGUA");
  GetPAMByName((string *)aPStack_20);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_18);
  Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  std::string::~string((string *)aPStack_20);
  nop();
  this_02 = (StandaloneEffect *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)local_18,(float)((int)local_28 + DAT_06adc790),
             (float)(local_28._4_4_ + DAT_06adc794),0.0);
  StandaloneEffect::SetBoardSpaceOrigin(this_02,(SexyVector3 *)local_18,-1);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  iVar1 = (**(code **)(*(long *)this + 0x170))(this);
  FUN_03e085f0(lVar3 + 0x1c,iVar1 + 1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemEnergyGrid::setState(EnergyGridState) */

void __thiscall GridItemEnergyGrid::setState(GridItemEnergyGrid *this,int param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  
  if (*(int *)(this + 0x198) != param_2) {
    if (param_2 == 0) {
      fVar2 = (float)PVZ_T();
      fVar3 = (float)Sexy::Rand(0.5);
      *(float *)(this + 0x19c) = fVar2 + fVar3 + 2.0;
    }
    else if (param_2 == 4) {
      spawnDirt(this);
      uVar1 = PVZ_T();
      *(undefined4 *)(this + 0x19c) = uVar1;
    }
    *(int *)(this + 0x198) = param_2;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemEnergyGrid::onUpdate() */

void __thiscall GridItemEnergyGrid::onUpdate(GridItemEnergyGrid *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  LevelModuleManager *pLVar5;
  LastStandMinigameModule *pLVar6;
  ZombossLastStandMinigameModule *pZVar7;
  RtObject *this_01;
  PlantSquash *pPVar8;
  long *plVar9;
  ProfileMgr *this_02;
  long lVar10;
  EnergyGridModule *this_03;
  UIWidget *this_04;
  PopAnimRig *this_05;
  Effect_PopAnim *pEVar11;
  StandaloneEffect *pSVar12;
  Board *pBVar13;
  float fVar14;
  int local_28;
  int local_24;
  ulong local_20;
  int local_18;
  int iStack_14;
  long local_8;
  
  iVar4 = *(int *)(this + 0x198);
  local_8 = ___stack_chk_guard;
  if (iVar4 == 1) goto LAB_03e08ed8;
LAB_03e08d3c:
  if (iVar4 != 4) {
    if (iVar4 != 0) goto LAB_03e08d48;
    fVar14 = (float)PVZ_T();
    if (fVar14 <= *(float *)(this + 0x19c)) goto LAB_03e08ec0;
  }
  setState(this,1);
LAB_03e08ec0:
  do {
    iVar3 = iVar4;
    iVar4 = *(int *)(this + 0x198);
    while( true ) {
      if (iVar4 == iVar3) goto LAB_03e08d48;
      if (iVar4 != 1) goto LAB_03e08d3c;
LAB_03e08ed8:
      if ((this[0x1b8] == (GridItemEnergyGrid)0x0) &&
         (fVar14 = (float)PVZ_T(), *(float *)(this + 0x19c) + 0.25 < fVar14)) {
        spawnDirt(this);
        this[0x1b8] = SUB41(iVar4,0);
      }
      fVar14 = (float)PVZ_T();
      local_20 = local_20 & 0xffffffff00000000;
      local_18 = 1000;
      fVar14 = (1.0 - *(float *)(this + 0x1a0)) + fVar14;
      iVar3 = CurveLerp<int>(*(float *)(this + 0x19c),*(float *)(this + 0x19c) + 1.0,fVar14,
                             &local_20,&local_18,4);
      *(int *)(this + 0x1a4) = iVar3;
      if (fVar14 <= *(float *)(this + 0x19c) + 1.0) break;
      setState(this,2);
      iVar3 = iVar4;
      iVar4 = *(int *)(this + 0x198);
    }
  } while( true );
LAB_03e08d48:
  pLVar5 = (LevelModuleManager *)FUN_03e0864c(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  pLVar6 = LevelModuleManager::GetModuleByClass<LastStandMinigameModule>(pLVar5);
  if ((pLVar6 == (LastStandMinigameModule *)0x0) ||
     (cVar1 = FUN_03e08650(*(undefined4 *)(pLVar6 + 0x4c)), cVar1 != '\0')) {
    pLVar5 = (LevelModuleManager *)
             FUN_03e0864c(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    pZVar7 = LevelModuleManager::GetModuleByClass<ZombossLastStandMinigameModule>(pLVar5);
    if ((pZVar7 == (ZombossLastStandMinigameModule *)0x0) ||
       (cVar1 = FUN_03e0865c(*(undefined4 *)(pZVar7 + 0x4c)), cVar1 != '\0')) {
      GridItem::GetGridLocation();
      pBVar13 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string((string *)&local_18,"");
      this_01 = (RtObject *)Board::GetPlantAt(pBVar13,local_28,local_24,(string *)&local_18);
      std::string::~string((string *)&local_18);
      nop();
      if (this_01 != (RtObject *)0x0) {
        pPVar8 = Sexy::RtObject::Cast<PlantSquash>(this_01);
        if ((pPVar8 == (PlantSquash *)0x0) ||
           (cVar1 = (**(code **)(*(long *)pPVar8 + 0x180))(), cVar1 == '\0')) {
          bVar2 = false;
        }
        else {
          PooyanModule::GetPooyanShooter();
          bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_18);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        }
        cVar1 = FUN_03e085f8(*(undefined4 *)(this_01 + 0x1d0));
        if (cVar1 == '\0') {
          Plant::GetType();
          plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
          iVar4 = (**(code **)(*plVar9 + 0x70))(plVar9,0xfffffffe);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
          if (bVar2 == false && 0 < iVar4) {
            this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
            lVar10 = ProfileMgr::GetCurrentProfile(this_02);
            if ((lVar10 != 0) &&
               (cVar1 = FUN_03e08648(*(undefined1 *)(lVar10 + 0xd9a)), cVar1 != '\0')) {
              FUN_03e08674(lVar10 + 0xd9a);
              pBVar13 = *(Board **)(gLawnApp + 0x9f0);
              FUN_05478178((string *)&local_18,L"[ADVICE_ENERGY_GRID_PLANT]",(Point *)&local_20);
              Board::DisplayAdvice(pBVar13,(string *)&local_18,7,0);
              FUN_05476c50((string *)&local_18);
              nop();
            }
            this[0x1b9] = (GridItemEnergyGrid)0x1;
            this_00 = (RtMixedPtrBase *)(this + 0x1c0);
            fVar14 = (float)PVZ_Dt();
            Plant::GetType();
            plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                       ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
            iVar4 = (**(code **)(*plVar9 + 0x70))(plVar9,0xfffffffe);
            *(float *)(this + 0x1cc) = *(float *)(this + 0x1cc) - (float)iVar4 * fVar14 * 0.01;
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
            cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
            if (cVar1 != '\0') {
              this_04 = (UIWidget *)
                        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
              this_05 = (PopAnimRig *)UIWidget::GetAtlasImage(this_04);
              std::string::string((string *)&local_18,"bagua");
              cVar1 = PopAnimRig::IsAnimStringActive(this_05,(string *)&local_18);
              std::string::~string((string *)&local_18);
              nop();
              if (cVar1 == '\0') {
                pEVar11 = (Effect_PopAnim *)
                          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
                std::string::string((string *)&local_18,"bagua");
                PVZ_EOT();
                Effect_PopAnim::PlayLoopingAnimation(pEVar11,(string *)&local_18,0);
                std::string::~string((string *)&local_18);
                nop();
              }
            }
            cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
            if (cVar1 != '\0') {
              pSVar12 = (StandaloneEffect *)
                        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
              StandaloneEffect::SetVisibility(pSVar12,true);
            }
            if (*(float *)(this + 0x1cc) <= 0.0) {
              Sexy::Point::Point((Point *)&local_20);
              BoardTransforms::GridToBoardSpace((Point *)&local_28);
              local_20 = CONCAT44(iStack_14,local_18);
              pBVar13 = *(Board **)(gLawnApp + 0x9f0);
              EATextSquish::Vec3::Vec3((Vec3 *)&local_18,(float)local_18,(float)iStack_14,0.0);
              Board::AddPlantfood(pBVar13,(SexyVector3 *)&local_18,0);
              pLVar5 = (LevelModuleManager *)
                       FUN_03e0864c(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
              this_03 = LevelModuleManager::GetModuleByClass<EnergyGridModule>(pLVar5);
              if (this_03 != (EnergyGridModule *)0x0) {
                EnergyGridModule::onePlantfoodSpawn(this_03);
              }
              (**(code **)(*(long *)this + 0x48))(this);
            }
            goto LAB_03e08d78;
          }
        }
      }
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x1c0));
      if (cVar1 != '\0') {
        pSVar12 = (StandaloneEffect *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1c0));
        StandaloneEffect::SetVisibility(pSVar12,false);
      }
      this[0x1b9] = (GridItemEnergyGrid)0x0;
      *(undefined4 *)(this + 0x1cc) = *(undefined4 *)(this + 0x194);
    }
  }
LAB_03e08d78:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemEnergyGrid::onGridItemInitialize() */

void __thiscall GridItemEnergyGrid::onGridItemInitialize(GridItemEnergyGrid *this)

{
  undefined4 uVar1;
  GridItemPropertySheet *pGVar2;
  float fVar3;
  
  pGVar2 = GridItem::GetProps<GridItemPropertySheet>();
  FUN_03e08604(*(undefined4 *)(pGVar2 + 0x10),this + 300);
  if (*(code **)(*(long *)this + 0x1e0) == GridItem::GetMaxHitpoints) {
    GridItem::GetMaxHitpoints((GridItem *)this);
  }
  else {
    (**(code **)(*(long *)this + 0x1e0))();
  }
  FUN_03e0860c(this + 0x128);
  *(undefined4 *)(this + 0x1a8) = 5;
  uVar1 = Sexy::Rand(2);
  this[0x1b8] = (GridItemEnergyGrid)0x0;
  *(undefined4 *)(this + 0x1b4) = uVar1;
  *(undefined4 *)(this + 0x1a0) = 0x3f800000;
  fVar3 = (float)PVZ_T();
  *(float *)(this + 0x1ac) = fVar3 + 0.25;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1a4) = 0;
  *(undefined4 *)(this + 0x1b0) = 0;
  *(undefined4 *)(this + 0x1d4) = 1;
  *(undefined4 *)(this + 0x198) = 0xffffffff;
  *(undefined4 *)(this + 0x1d0) = 0x3f800000;
  *(undefined4 *)(this + 0x19c) = uVar1;
  setState(this);
  uVar1 = PVZ_T();
  this[0x1b9] = (GridItemEnergyGrid)0x0;
  *(undefined4 *)(this + 0x1c8) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemEnergyGrid::drawGridItem(Sexy::Graphics*) */

void __thiscall GridItemEnergyGrid::drawGridItem(GridItemEnergyGrid *this,Graphics *param_1)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  wchar16 *pwVar9;
  Image *pIVar10;
  GraphicsAutoState *pGVar11;
  LineBreakCategory *pLVar12;
  LineBreakCategory *pLVar13;
  float fVar14;
  float fVar15;
  int local_38;
  int local_34;
  GraphicsAutoState aGStack_30 [8];
  Insets aIStack_28 [16];
  undefined4 local_18 [4];
  long local_8;
  
  iVar5 = *(int *)(this + 0x1a4);
  local_8 = ___stack_chk_guard;
  lVar8 = CachedResourcePtr<Sexy::Image>::operator->
                    ((CachedResourcePtr<Sexy::Image> *)&DAT_06adc6c8);
  local_18[0] = 0;
  iVar4 = CurveLerp<int>(0,0x447a0000,(float)iVar5,lVar8 + 0x3c,(string *)local_18,4);
  GridItem::GetGridLocation();
  iVar5 = BoardTransforms::GridToBoardSpaceX(local_38);
  iVar5 = FUN_03e08680(iVar5 + 3);
  lVar8 = CachedResourcePtr<Sexy::Image>::operator->
                    ((CachedResourcePtr<Sexy::Image> *)&DAT_06adc6c8);
  iVar5 = iVar5 - *(int *)(lVar8 + 0x38) / 2;
  iVar6 = BoardTransforms::GridToBoardSpaceY(local_34);
  iVar6 = FUN_03e08680(iVar6 + 0xd);
  lVar8 = CachedResourcePtr<Sexy::Image>::operator->
                    ((CachedResourcePtr<Sexy::Image> *)&DAT_06adc6c8);
  iVar6 = iVar6 - *(int *)(lVar8 + 0x3c);
  lVar8 = CachedResourcePtr<Sexy::Image>::operator->
                    ((CachedResourcePtr<Sexy::Image> *)&DAT_06adc6c8);
  uVar1 = *(uint *)(lVar8 + 0x38);
  lVar8 = CachedResourcePtr<Sexy::Image>::operator->
                    ((CachedResourcePtr<Sexy::Image> *)&DAT_06adc6c8);
  pLVar13 = (LineBreakCategory *)(ulong)*(uint *)(lVar8 + 0x3c);
  pLVar12 = (LineBreakCategory *)(ulong)uVar1;
  Sexy::Insets::Insets(aIStack_28,iVar5,iVar6,uVar1,*(uint *)(lVar8 + 0x3c));
  Sexy::Graphics::SetClipRect(param_1,(TRect *)aIStack_28);
  bVar2 = CachedResourcePtr::operator_cast_to_bool((CachedResourcePtr *)&DAT_06adc6c8);
  if (bVar2) {
    pIVar10 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                 ((CachedResourcePtr<Sexy::Image> *)&DAT_06adc6c8);
    pLVar12 = (LineBreakCategory *)(ulong)(uint)(iVar6 + iVar4);
    Sexy::Graphics::DrawImage(param_1,pIVar10,iVar5,iVar6 + iVar4);
  }
  Sexy::Graphics::ClearClipRect(param_1);
  pwVar9 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  pGVar11 = aGStack_30;
  std::string::string((string *)local_18,"HealthBars");
  cVar3 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar9,(wchar16 *)local_18,(LineBreakCategory *)pGVar11,pLVar12,pLVar13);
  if (cVar3 != '\0') {
    if (*(code **)(*(long *)this + 0x1d8) == GridItem::GetHitpoints) {
      fVar14 = (float)GridItem::GetHitpoints((GridItem *)this);
    }
    else {
      fVar14 = (float)(**(code **)(*(long *)this + 0x1d8))();
    }
    if (0.0 < fVar14) {
      std::string::~string((string *)local_18);
      nop();
      Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_30,param_1);
      fVar14 = *(float *)(this + 0x1cc);
      fVar15 = *(float *)(this + 0x194);
      iVar4 = FUN_03e08680(0x3c);
      iVar7 = FUN_03e08680(10);
      Sexy::Graphics::Translate(param_1,iVar5,iVar6);
      iVar5 = FUN_03e08680(0);
      iVar6 = FUN_03e08680(0x39);
      Sexy::Graphics::Translate(param_1,iVar5,iVar6);
      Sexy::Color::Color((Color *)local_18,0xff00);
      Sexy::Graphics::SetColor(param_1,(Color *)local_18);
      iVar5 = FUN_03e08680(0);
      Sexy::Graphics::FillRect(param_1,iVar5,iVar5,iVar4,iVar7);
      Sexy::Color::Color((Color *)local_18,0xff);
      Sexy::Graphics::SetColor(param_1,(Color *)local_18);
      iVar5 = FUN_03e08680(2);
      iVar6 = FUN_03e08680(4);
      Sexy::Graphics::FillRect
                (param_1,iVar5,iVar5,(int)((float)(iVar4 - iVar6) * (fVar14 / fVar15)),iVar7 - iVar6
                );
      Sexy::Color::Color((Color *)local_18,-1);
      Sexy::Graphics::SetColor(param_1,(Color *)local_18);
      Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_30);
      goto LAB_03e094e8;
    }
  }
  std::string::~string((string *)local_18);
  nop();
LAB_03e094e8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemEnergyGrid::onDraw(Sexy::Graphics*) */

void __thiscall GridItemEnergyGrid::onDraw(GridItemEnergyGrid *this,Graphics *param_1)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  double dVar4;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x198) - 1U < 2) {
    if (this[0x1b9] == (GridItemEnergyGrid)0x0) {
      drawGridItem(this,param_1);
    }
    else {
      Sexy::Color::Color((Color *)&local_28,1);
      fVar3 = (float)PVZ_T();
      if (*(float *)(this + 0x1cc) / *(float *)(this + 0x194) < 0.3) {
        dVar4 = 0.30000001192092896;
        DAT_06a885d0 = 0x3e99999a;
      }
      else if (0.7 <= *(float *)(this + 0x1cc) / *(float *)(this + 0x194)) {
        DAT_06a885d0 = 0x3f8ccccd;
        dVar4 = 1.100000023841858;
      }
      else {
        dVar4 = 0.699999988079071;
        DAT_06a885d0 = 0x3f333333;
      }
      uVar1 = DAT_06a885d0;
      dVar4 = fmod((double)(fVar3 - *(float *)(this + 0x1c8)),dVar4);
      local_2c = 0;
      local_18 = 0x3f800000;
      CurveLerp<float>(0,uVar1,(float)dVar4,&local_2c,(Insets *)&local_18,8);
      local_18 = 0;
      fVar3 = CurveEvaluate<float>((Insets *)&local_18,&DAT_06a885cc,1);
      iVar2 = (int)((1.0 - fVar3) * 255.0);
      Sexy::Insets::Insets((Insets *)&local_18,iVar2,iVar2,iVar2,0xff);
      local_28 = CONCAT44(uStack_14,local_18);
      uStack_20 = uStack_10;
      Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)&local_18,param_1);
      Sexy::Graphics::SetDrawMode(param_1,1);
      Sexy::Graphics::SetColorizeImages(param_1,true);
      Sexy::Graphics::SetColor(param_1,(Color *)&local_28);
      drawGridItem(this,param_1);
      Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)&local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemEnergyGrid::Destroy() */

void __thiscall GridItemEnergyGrid::Destroy(GridItemEnergyGrid *this)

{
  char cVar1;
  long *plVar2;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x1c0));
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1c0));
    (**(code **)(*plVar2 + 0x48))();
  }
  GameObject::Destroy((GameObject *)this);
  return;
}

