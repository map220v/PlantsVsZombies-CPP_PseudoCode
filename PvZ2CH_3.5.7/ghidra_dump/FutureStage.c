// Class: FutureStage


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FutureStage::StaticClassInit() */

void FutureStage::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"LinkedTilePropagationInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_03cec630,0x98,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"FutureStage");
    (*pcVar3)(plVar2,asStack_10,FUN_03cee2ac,0x168,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FutureStage::StaticGetClass() */

long * FutureStage::StaticGetClass(void)

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
  uVar2 = StageModule::StaticGetClass();
  (*pcVar3)(plVar1,"FutureStage",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FutureStage::SetIsBossFight(bool) */

void __thiscall FutureStage::SetIsBossFight(FutureStage *this,bool param_1)

{
  this[0x160] = (FutureStage)param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FutureStage::GetRandomLinkedTileLocation() const */

void FutureStage::GetRandomLinkedTileLocation(void)

{
  int iVar1;
  long in_x0;
  long lVar2;
  TPoint *pTVar3;
  Point *in_x8;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_03cea3dc(*(undefined8 *)(in_x0 + 0xe8),*(undefined8 *)(in_x0 + 0xf0));
  if (lVar2 == 0) {
    Sexy::Point::Point(in_x8,-1,-1);
  }
  else {
    iVar1 = Sexy::Rand((int)lVar2);
    pTVar3 = (TPoint *)FUN_03cea420(*(undefined8 *)(in_x0 + 0xe8),(long)iVar1);
    Sexy::Point::Point(aPStack_10,pTVar3);
    Sexy::Point::Point(in_x8,(TPoint *)aPStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FutureStage::GetPlantedPacketCount(std::string const&) */

uint __thiscall FutureStage::GetPlantedPacketCount(FutureStage *this,string *param_1)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  
  iVar8 = 0;
  bVar2 = std::operator==(param_1,"tool_powertile_alpha");
  if (!bVar2) {
    iVar8 = 1;
    bVar2 = std::operator==(param_1,"tool_powertile_beta");
    if (!bVar2) {
      iVar8 = 2;
      bVar2 = std::operator==(param_1,"tool_powertile_gamma");
      if (!bVar2) {
        iVar8 = 3;
        bVar2 = std::operator==(param_1,"tool_powertile_delta");
        if (!bVar2) {
          bVar2 = std::operator==(param_1,"tool_powertile_epsilon");
          if (!bVar2) {
            return (uint)bVar2;
          }
          iVar8 = 4;
        }
      }
    }
  }
  uVar7 = *(undefined8 *)(this + 0xe8);
  uVar6 = 0;
  lVar3 = FUN_03cea3dc(uVar7,*(undefined8 *)(this + 0xf0));
  lVar5 = 0;
  while (lVar1 = lVar5 + 1, lVar5 != lVar3) {
    lVar4 = FUN_03cea40c(uVar7,lVar5);
    lVar5 = lVar1;
    if (iVar8 == *(int *)(lVar4 + 8)) {
      uVar6 = uVar6 + 1;
    }
  }
  return uVar6;
}


/* FutureStage::CanZombieSpawnInRow(int, Sexy::RtWeakPtr<ZombieType const>) */

bool __thiscall
FutureStage::CanZombieSpawnInRow
          (undefined8 param_1_00,int param_1,RtWeakPtr<Sexy::ResourceInfo> *param_3)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
  bVar2 = std::operator==((string *)(lVar3 + 8),"disco_mech");
  bVar1 = true;
  if ((bVar2) && (bVar1 = false, param_1 != 0)) {
    bVar1 = param_1 != *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc) + -1;
  }
  return bVar1;
}


/* FutureStage::GetLinkedTileClassAt(Sexy::Point const&) */

undefined4 __thiscall FutureStage::GetLinkedTileClassAt(FutureStage *this,Point *param_1)

{
  char cVar1;
  long lVar2;
  TPoint<int> *this_00;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(this + 0xe8);
  lVar2 = FUN_03cea3dc(uVar4,*(undefined8 *)(this + 0xf0));
  lVar3 = 0;
  do {
    if (lVar3 == lVar2) {
      return 0xffffffff;
    }
    this_00 = (TPoint<int> *)FUN_03cea40c(uVar4,lVar3);
    cVar1 = Sexy::TPoint<int>::operator==(this_00,(TPoint *)param_1);
    lVar3 = lVar3 + 1;
  } while (cVar1 == '\0');
  return *(undefined4 *)(this_00 + 8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FutureStage::onPlantPlanted(Plant*) */

void __thiscall FutureStage::onPlantPlanted(FutureStage *this,Plant *param_1)

{
  char cVar1;
  long lVar2;
  TPoint<int> *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar3;
  EffectAnimRig_LinkedTile *this_01;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_10,*(int *)(param_1 + 0x114),*(int *)(param_1 + 0x110));
  uVar6 = *(undefined8 *)(this + 0xe8);
  lVar2 = FUN_03cea3dc(uVar6,*(undefined8 *)(this + 0xf0));
  lVar4 = 0;
  do {
    lVar5 = lVar4;
    if (lVar5 == lVar2) goto LAB_03cebde4;
    this_00 = (TPoint<int> *)FUN_03cea40c(uVar6,lVar5);
    cVar1 = Sexy::TPoint<int>::operator==(this_00,(TPoint *)aPStack_10);
    lVar4 = lVar5 + 1;
  } while (cVar1 == '\0');
  pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03cea418(*(undefined8 *)(this + 0x118),lVar5);
  this_01 = (EffectAnimRig_LinkedTile *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
  EffectAnimRig_LinkedTile::PlayPlantEnteredTile(this_01);
  pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03cea418(*(undefined8 *)(this + 0x118),lVar5);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
  FUN_03cea3b4(lVar4 + 0x20d,1);
LAB_03cebde4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FutureStage::onPlantDied(Plant*) */

void __thiscall FutureStage::onPlantDied(FutureStage *this,Plant *param_1)

{
  char cVar1;
  long lVar2;
  TPoint<int> *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar3;
  EffectAnimRig_LinkedTile *this_01;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_10,*(int *)(param_1 + 0x114),*(int *)(param_1 + 0x110));
  uVar6 = *(undefined8 *)(this + 0xe8);
  lVar2 = FUN_03cea3dc(uVar6,*(undefined8 *)(this + 0xf0));
  lVar4 = 0;
  do {
    lVar5 = lVar4;
    if (lVar5 == lVar2) goto LAB_03cebed4;
    this_00 = (TPoint<int> *)FUN_03cea40c(uVar6,lVar5);
    cVar1 = Sexy::TPoint<int>::operator==(this_00,(TPoint *)aPStack_10);
    lVar4 = lVar5 + 1;
  } while (cVar1 == '\0');
  pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03cea418(*(undefined8 *)(this + 0x118),lVar5);
  this_01 = (EffectAnimRig_LinkedTile *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
  EffectAnimRig_LinkedTile::PlayPlantLeftTile(this_01);
  pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03cea418(*(undefined8 *)(this + 0x118),lVar5);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
  FUN_03cea3b4(lVar4 + 0x20d,0);
LAB_03cebed4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FutureStage::renderBackground(Sexy::Graphics*) */

void FutureStage::renderBackground(Graphics *param_1)

{
  int iVar1;
  int iVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this;
  PopAnimRig *this_00;
  ulong uVar3;
  uint *puVar4;
  ResilienceTutorialIntroProperties *pRVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  Graphics *in_x1;
  int in_w4;
  undefined8 uVar9;
  ulong uVar10;
  float fVar11;
  GraphicsAutoState aGStack_78 [8];
  Insets aIStack_70 [16];
  Insets aIStack_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StageModule::renderBackground((StageModule *)param_1,in_x1);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_78,in_x1);
  Sexy::Graphics::SetColorizeImages(in_x1,true);
  uVar10 = 0;
  while( true ) {
    uVar9 = *(undefined8 *)(param_1 + 0xe8);
    uVar3 = FUN_03cea3dc(uVar9,*(undefined8 *)(param_1 + 0xf0));
    if (uVar3 <= uVar10) break;
    puVar4 = (uint *)FUN_03cea40c(uVar9,uVar10);
    pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)param_1);
    Sexy::Insets::Insets(aIStack_70,(Insets *)(pRVar5 + ((long)(int)puVar4[2] + 0x13) * 0x10));
    Sexy::Insets::Insets(aIStack_60,aIStack_70);
    Sexy::Graphics::SetColor(in_x1,(Color *)aIStack_60);
    Sexy::Insets::Insets((Insets *)&local_50);
    if (((DAT_06ad4f98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06ad4f98), iVar1 != 0)) {
      iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
      iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
      Sexy::Point::Point((Point *)&DAT_06ad4f80,-iVar1,-iVar2);
      __cxa_guard_release(&DAT_06ad4f98);
    }
    BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)(ulong)*puVar4,puVar4[1],1,1,in_w4);
    local_50 = local_40;
    uStack_48 = uStack_38;
    Sexy::TRect<int>::Offset((TRect<int> *)&local_50,(TPoint *)&DAT_06ad4f80);
    fVar11 = (float)FUN_03ceada0();
    Sexy::TRect<int>::Scale((TRect<int> *)&local_50,(double)fVar11,(double)fVar11);
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
    FUN_03cea2e0((float)(int)local_50,(float)local_50._4_4_,auStack_28,auStack_1c);
    this = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03cea418(*(undefined8 *)(param_1 + 0x118),uVar10);
    this_00 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
    PopAnimRig::Draw(this_00,in_x1,aSStack_30);
    uVar10 = uVar10 + 1;
  }
  uVar9 = *(undefined8 *)(param_1 + 0x100);
  uVar10 = 0;
  lVar6 = FUN_03cea42c(uVar9,*(undefined8 *)(param_1 + 0x108));
  if (lVar6 != 0) {
    do {
      lVar6 = FUN_03cea468(uVar9,uVar10);
      uVar3 = 0;
      while( true ) {
        uVar9 = *(undefined8 *)(lVar6 + 0x20);
        uVar8 = FUN_03cea484(uVar9,*(undefined8 *)(lVar6 + 0x28));
        if (uVar8 <= uVar3) break;
        puVar7 = (undefined8 *)FUN_03cea490(uVar9,uVar3);
        LinkedTilePropagation_ConnectingDotHandler::Draw
                  ((LinkedTilePropagation_ConnectingDotHandler *)*puVar7,in_x1);
        uVar3 = uVar3 + 1;
      }
      uVar9 = *(undefined8 *)(param_1 + 0x100);
      uVar10 = uVar10 + 1;
      uVar3 = FUN_03cea42c(uVar9,*(undefined8 *)(param_1 + 0x108));
    } while (uVar10 < uVar3);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_78);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* FutureStage::GetLinkedTileColor(LinkedTileClass) */

Insets * FutureStage::GetLinkedTileColor(Insets *param_1,LevelModule *param_2,uint param_3)

{
  ResilienceTutorialIntroProperties *pRVar1;
  
  if (4 < param_3) {
    Sexy::Color::Color((Color *)param_1,0);
    return param_1;
  }
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>(param_2);
  Sexy::Insets::Insets(param_1,(Insets *)(pRVar1 + ((long)(int)param_3 + 0x13) * 0x10));
  return param_1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FutureStage::addToRenderQueue(RenderQueue*) */

void __thiscall FutureStage::addToRenderQueue(FutureStage *this,RenderQueue *param_1)

{
  undefined4 uVar1;
  long lVar2;
  ReceivedDataCallback *pRVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar5 = 0;
  while( true ) {
    uVar6 = *(undefined8 *)(this + 0x130);
    uVar4 = FUN_03cea498(uVar6,*(undefined8 *)(this + 0x138));
    if (uVar4 <= uVar5) break;
    lVar2 = FUN_03cea4b8(uVar6,uVar5);
    uVar1 = BoardEntity::CalcRenderOrderFromPosition((SexyVector3 *)(lVar2 + 0x14));
    pRVar3 = (ReceivedDataCallback *)FUN_03cea4b8(*(undefined8 *)(this + 0x130),uVar5);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              (pRVar3,FactoryArmStatus::Draw);
    Sexy::Delegate1<Sexy::Graphics*>::
    Delegate1<FactoryArmStatus,void(FactoryArmStatus::*)(Sexy::Graphics*)>(aDStack_38,aCStack_50);
    RenderQueue::Add(param_1,uVar1,aDStack_38);
    uVar5 = uVar5 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FutureStage::FutureStage() */

void __thiscall FutureStage::FutureStage(FutureStage *this)

{
  StageModule::StageModule((StageModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06761500;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x100));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x118));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x130));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x148));
  return;
}


/* FutureStage::StaticNew() */

FutureStage * FutureStage::StaticNew(void)

{
  FutureStage *this;
  
  this = ::operator_new(0x168);
  FutureStage(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FutureStage::initializeModule() */

void __thiscall FutureStage::initializeModule(FutureStage *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  string *psVar2;
  ulong uVar3;
  ulong uVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StageModule::initializeModule((StageModule *)this);
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  uVar4 = 0;
  while( true ) {
    uVar3 = FUN_03cea3c8(*(undefined8 *)(pRVar1 + 0x180),*(undefined8 *)(pRVar1 + 0x188));
    if (uVar3 <= uVar4) break;
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    FUN_03cea3d4(*(undefined8 *)(pRVar1 + 0x180),uVar4);
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
    std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
    ::push_back((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
                 *)(this + 0x148),(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    uVar4 = uVar4 + 1;
  }
  this[0x160] = (FutureStage)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FutureStage::addLinkedTile(LinkedTileEntry const&) */

void __thiscall FutureStage::addLinkedTile(FutureStage *this,LinkedTileEntry *param_1)

{
  PopAnim *pPVar1;
  EffectAnimRig_LinkedTile *this_00;
  char *__s;
  string asStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<LinkedTileEntry,std::allocator<LinkedTileEntry>>::push_back
            ((vector<LinkedTileEntry,std::allocator<LinkedTileEntry>> *)(this + 0xe8),param_1);
  if (*(uint *)(param_1 + 8) < 5) {
    switch(*(uint *)(param_1 + 8)) {
    case 0:
      __s = "POPANIM_BACKGROUNDS_LINKTILE_01";
      break;
    case 1:
      __s = "POPANIM_BACKGROUNDS_LINKTILE_02";
      break;
    case 2:
      __s = "POPANIM_BACKGROUNDS_LINKTILE_03";
      break;
    case 3:
      __s = "POPANIM_BACKGROUNDS_LINKTILE_04";
      break;
    case 4:
      __s = "POPANIM_BACKGROUNDS_LINKTILE_05";
    }
    std::string::string(asStack_20,__s);
    GetPAMByName(asStack_20);
    pPVar1 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    pPVar1 = (PopAnim *)Sexy::PopAnim::Duplicate(pPVar1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    std::string::~string(asStack_20);
    nop();
    if (pPVar1 != (PopAnim *)0x0) {
      this_00 = PopAnimRig::CreateRig<EffectAnimRig_LinkedTile>(pPVar1);
      EffectAnimRig_LinkedTile::PlayIdle(this_00);
      VaseConfiguration::VaseConfiguration((VaseConfiguration *)aRStack_18);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)aRStack_18,(RtWeakPtrBase *)asStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20);
      std::vector<LinkedTileInstanceData,std::allocator<LinkedTileInstanceData>>::push_back
                ((vector<LinkedTileInstanceData,std::allocator<LinkedTileInstanceData>> *)
                 (this + 0x118),(LinkedTileInstanceData *)aRStack_18);
      (**(code **)(*(long *)pPVar1 + 0x18))(pPVar1);
      std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aRStack_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FutureStage::SetLinkedTiles(std::vector<LinkedTileEntry, std::allocator<LinkedTileEntry> >
   const&) */

void __thiscall FutureStage::SetLinkedTiles(FutureStage *this,vector *param_1)

{
  LinkedTileEntry *pLVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)param_1;
    uVar2 = FUN_03cea3dc(uVar4,*(undefined8 *)(param_1 + 8));
    if (uVar2 <= uVar3) break;
    pLVar1 = (LinkedTileEntry *)FUN_03cea420(uVar4,uVar3);
    addLinkedTile(this,pLVar1);
    uVar3 = uVar3 + 1;
  }
  std::vector<LinkedTilePropagationInfo,std::allocator<LinkedTilePropagationInfo>>::clear
            ((vector<LinkedTilePropagationInfo,std::allocator<LinkedTilePropagationInfo>> *)
             (this + 0x100));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FutureStage::UseToolAt(std::string const&, int, int, int) */

void FutureStage::UseToolAt(string *param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  BoardTransforms *this;
  undefined8 uVar3;
  long lVar4;
  TPoint<int> *this_00;
  string *psVar5;
  long lVar6;
  undefined4 uVar7;
  float fVar8;
  float extraout_s0;
  int local_28;
  int iStack_24;
  LinkedTileEntry local_20 [8];
  undefined4 local_18;
  undefined4 local_10;
  long local_8;
  
  psVar5 = (string *)(ulong)(uint)param_2;
  local_8 = ___stack_chk_guard;
  uVar7 = 0;
  bVar1 = std::operator==(psVar5,"tool_powertile_alpha");
  if (!bVar1) {
    uVar7 = 1;
    bVar1 = std::operator==(psVar5,"tool_powertile_beta");
    if (!bVar1) {
      uVar7 = 2;
      bVar1 = std::operator==(psVar5,"tool_powertile_gamma");
      if (!bVar1) {
        uVar7 = 3;
        bVar1 = std::operator==(psVar5,"tool_powertile_delta");
        if (!bVar1) {
          bVar1 = std::operator==(psVar5,"tool_powertile_epsilon");
          if (!bVar1) goto LAB_03cf0704;
          uVar7 = 4;
        }
      }
    }
  }
  fVar8 = (float)FUN_03ceadb4((float)param_3);
  this = (BoardTransforms *)FUN_03ceadb4((float)param_4);
  BoardTransforms::BoardSpaceToGrid(this,fVar8,extraout_s0);
  if ((-1 < local_28) && (-1 < iStack_24)) {
    uVar3 = *(undefined8 *)(param_1 + 0xe8);
    lVar4 = FUN_03cea3dc(uVar3,*(undefined8 *)(param_1 + 0xf0));
    lVar6 = 0;
    do {
      if (lVar6 == lVar4) {
        LinkedTileEntry::LinkedTileEntry(local_20);
        local_10 = 0x3e800000;
        local_18 = uVar7;
        addLinkedTile((FutureStage *)param_1,local_20);
        uVar3 = 1;
        goto LAB_03cf0708;
      }
      this_00 = (TPoint<int> *)FUN_03cea40c(uVar3,lVar6);
      cVar2 = Sexy::TPoint<int>::operator==(this_00,(TPoint *)&local_28);
      lVar6 = lVar6 + 1;
    } while (cVar2 == '\0');
  }
LAB_03cf0704:
  uVar3 = 0;
LAB_03cf0708:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


/* FutureStage::~FutureStage() */

void __thiscall FutureStage::~FutureStage(FutureStage *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06761500;
  std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>::
  ~vector((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
           *)(this + 0x148));
  std::vector<FactoryArmStatus,std::allocator<FactoryArmStatus>>::~vector
            ((vector<FactoryArmStatus,std::allocator<FactoryArmStatus>> *)(this + 0x130));
  std::vector<LinkedTileInstanceData,std::allocator<LinkedTileInstanceData>>::~vector
            ((vector<LinkedTileInstanceData,std::allocator<LinkedTileInstanceData>> *)(this + 0x118)
            );
  std::vector<LinkedTilePropagationInfo,std::allocator<LinkedTilePropagationInfo>>::~vector
            ((vector<LinkedTilePropagationInfo,std::allocator<LinkedTilePropagationInfo>> *)
             (this + 0x100));
  std::vector<LinkedTileEntry,std::allocator<LinkedTileEntry>>::~vector
            ((vector<LinkedTileEntry,std::allocator<LinkedTileEntry>> *)(this + 0xe8));
  StageModule::~StageModule((StageModule *)this);
  return;
}


/* FutureStage::~FutureStage() */

void __thiscall FutureStage::~FutureStage(FutureStage *this)

{
  ~FutureStage(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FutureStage::destroyLinkedTileAtIndex(int) */

void __thiscall FutureStage::destroyLinkedTileAtIndex(FutureStage *this,int param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  TPoint *pTVar4;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long *plVar5;
  LinkedTilePropagationInfo *this_01;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_02;
  long lVar10;
  Point aPStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  lVar6 = (long)param_1;
  this_02 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0xe8);
  local_8 = ___stack_chk_guard;
  pTVar4 = (TPoint *)FUN_03cea40c(*(undefined8 *)this_02,lVar6);
  Sexy::Point::Point(aPStack_28,pTVar4);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_02);
  local_18 = __gnu_cxx::
             __normal_iterator<S2C_PVP_LeagueInfo*,std::vector<S2C_PVP_LeagueInfo,std::allocator<S2C_PVP_LeagueInfo>>>
             ::operator+((__normal_iterator<S2C_PVP_LeagueInfo*,std::vector<S2C_PVP_LeagueInfo,std::allocator<S2C_PVP_LeagueInfo>>>
                          *)&local_20,lVar6);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_10,(__normal_iterator *)&local_18);
  std::vector<LinkedTileEntry,std::allocator<LinkedTileEntry>>::erase
            ((vector<LinkedTileEntry,std::allocator<LinkedTileEntry>> *)this_02,local_10);
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03cea418(*(undefined8 *)(this + 0x118),lVar6);
  plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  (**(code **)(*plVar5 + 0x48))();
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x118));
  local_18 = __gnu_cxx::
             __normal_iterator<Sexy::RtInvokeVariant*,std::vector<Sexy::RtInvokeVariant,std::allocator<Sexy::RtInvokeVariant>>>
             ::operator+((__normal_iterator<Sexy::RtInvokeVariant*,std::vector<Sexy::RtInvokeVariant,std::allocator<Sexy::RtInvokeVariant>>>
                          *)&local_20,lVar6);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_10,(__normal_iterator *)&local_18);
  std::vector<LinkedTileInstanceData,std::allocator<LinkedTileInstanceData>>::erase
            ((vector<LinkedTileInstanceData,std::allocator<LinkedTileInstanceData>> *)(this + 0x118)
             ,local_10);
  uVar7 = *(undefined8 *)(this + 0x100);
  iVar3 = FUN_03cea42c(uVar7,*(undefined8 *)(this + 0x108));
  uVar1 = iVar3 - 1;
  if (-1 < (int)uVar1) {
    lVar8 = (long)(int)uVar1 + -1;
    lVar6 = lVar8;
    lVar10 = (long)(int)uVar1;
    while( true ) {
      lVar9 = lVar6;
      this_01 = (LinkedTilePropagationInfo *)FUN_03cea468(uVar7,lVar10);
      cVar2 = Sexy::TPoint<int>::operator==((TPoint<int> *)(this_01 + 8),(TPoint *)aPStack_28);
      if ((cVar2 != '\0') && (this_01[0x1c] == (LinkedTilePropagationInfo)0x0)) {
        LinkedTilePropagationInfo::DestroyTileGlows(this_01);
        local_20 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(this + 0x100));
        local_18 = __gnu_cxx::
                   __normal_iterator<LinkedTilePropagationInfo*,std::vector<LinkedTilePropagationInfo,std::allocator<LinkedTilePropagationInfo>>>
                   ::operator+((__normal_iterator<LinkedTilePropagationInfo*,std::vector<LinkedTilePropagationInfo,std::allocator<LinkedTilePropagationInfo>>>
                                *)&local_20,lVar10);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_10,(__normal_iterator *)&local_18);
        std::vector<LinkedTilePropagationInfo,std::allocator<LinkedTilePropagationInfo>>::erase
                  ((vector<LinkedTilePropagationInfo,std::allocator<LinkedTilePropagationInfo>> *)
                   (this + 0x100),local_10);
      }
      if (lVar9 == lVar8 - (ulong)uVar1) break;
      uVar7 = *(undefined8 *)(this + 0x100);
      lVar6 = lVar9 + -1;
      lVar10 = lVar9;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FutureStage::onLevelEnded() */

void __thiscall FutureStage::onLevelEnded(FutureStage *this)

{
  int iVar1;
  int iVar2;
  
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  iVar1 = FUN_03cea3dc(*(undefined8 *)(this + 0xe8),*(undefined8 *)(this + 0xf0));
  iVar2 = iVar1 + -1;
  if (-1 < iVar1 + -1) {
    do {
      iVar1 = iVar2 + -1;
      destroyLinkedTileAtIndex(this,iVar2);
      iVar2 = iVar1;
    } while (iVar1 != -1);
  }
  return;
}


/* FutureStage::DestroyLinkedTileAt(Sexy::Point const&) */

void __thiscall FutureStage::DestroyLinkedTileAt(FutureStage *this,Point *param_1)

{
  long lVar1;
  char cVar2;
  long lVar3;
  TPoint<int> *this_00;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0xe8);
  lVar3 = FUN_03cea3dc(uVar5,*(undefined8 *)(this + 0xf0));
  lVar1 = 0;
  do {
    lVar4 = lVar1;
    if (lVar4 == lVar3) {
      return;
    }
    this_00 = (TPoint<int> *)FUN_03cea40c(uVar5,lVar4);
    cVar2 = Sexy::TPoint<int>::operator==(this_00,(TPoint *)param_1);
    lVar1 = lVar4 + 1;
  } while (cVar2 == '\0');
  destroyLinkedTileAtIndex(this,(int)lVar4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FutureStage::onUpdate() */

void __thiscall FutureStage::onUpdate(FutureStage *this)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar6;
  PopAnimRig *this_00;
  ulong uVar7;
  LinkedTilePropagationInfo *pLVar8;
  undefined8 *puVar9;
  int *piVar10;
  ResilienceTutorialIntroProperties *pRVar11;
  FactoryArmStatus *this_01;
  long lVar12;
  TPoint<int> *this_02;
  Plant *pPVar13;
  EffectAnimRig_LinkedTile *pEVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  Board *pBVar19;
  long lVar20;
  float fVar21;
  float fVar22;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  uVar15 = 0;
  uVar17 = *(undefined8 *)(this + 0x118);
  local_8 = ___stack_chk_guard;
  lVar5 = FUN_03cea478(uVar17,*(undefined8 *)(this + 0x120));
  if (lVar5 != 0) {
    do {
      pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03cea418(uVar17,uVar15);
      this_00 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
      fVar21 = (float)PVZ_T();
      fVar22 = (float)PVZ_Dt();
      PopAnimRig::UpdateAnim(this_00,fVar21,fVar22);
      uVar17 = *(undefined8 *)(this + 0x118);
      lVar5 = FUN_03cea418(uVar17,uVar15);
      if (*(char *)(lVar5 + 8) != '\0') {
        pBVar19 = *(Board **)(gLawnApp + 0x9f0);
        piVar10 = (int *)FUN_03cea40c(*(undefined8 *)(this + 0xe8),uVar15);
        iVar4 = piVar10[1];
        iVar1 = *piVar10;
        std::string::string((string *)&local_10,"");
        pPVar13 = (Plant *)Board::GetPlantAt(pBVar19,iVar1,iVar4,(string *)&local_10);
        std::string::~string((string *)&local_10);
        nop();
        if (pPVar13 != (Plant *)0x0) {
          if (*(code **)(*(long *)pPVar13 + 0x1f8) == Plant::IsInPlantFoodState) {
            cVar3 = Plant::IsInPlantFoodState(pPVar13);
          }
          else {
            cVar3 = (**(code **)(*(long *)pPVar13 + 0x1f8))();
          }
          if (cVar3 != '\0') {
            uVar17 = *(undefined8 *)(this + 0x118);
            goto LAB_03cf1d44;
          }
        }
        pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03cea418(*(undefined8 *)(this + 0x118),uVar15)
        ;
        pRVar6[8] = (RtWeakPtr<Sexy::ResourceInfo>)0x0;
        pEVar14 = (EffectAnimRig_LinkedTile *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
        EffectAnimRig_LinkedTile::PlayIdle(pEVar14);
        uVar17 = *(undefined8 *)(this + 0x118);
      }
LAB_03cf1d44:
      uVar15 = uVar15 + 1;
      uVar7 = FUN_03cea478(uVar17,*(undefined8 *)(this + 0x120));
    } while (uVar15 < uVar7);
  }
  uVar17 = *(undefined8 *)(this + 0x100);
  iVar4 = FUN_03cea42c(uVar17,*(undefined8 *)(this + 0x108));
  uVar2 = iVar4 - 1;
  if (-1 < (int)uVar2) {
    lVar20 = (long)(int)uVar2 + -1;
    lVar5 = lVar20;
    lVar18 = (long)(int)uVar2;
    while( true ) {
      lVar16 = lVar5;
      pLVar8 = (LinkedTilePropagationInfo *)FUN_03cea468(uVar17,lVar18);
      fVar21 = (float)PVZ_Dt();
      TimeLine::Update((TimeLine *)(pLVar8 + 0x38),fVar21);
      uVar15 = 0;
      while( true ) {
        uVar17 = *(undefined8 *)(pLVar8 + 0x20);
        uVar7 = FUN_03cea484(uVar17,*(undefined8 *)(pLVar8 + 0x28));
        if (uVar7 <= uVar15) break;
        puVar9 = (undefined8 *)FUN_03cea490(uVar17,uVar15);
        LinkedTilePropagation_ConnectingDotHandler::Update
                  ((LinkedTilePropagation_ConnectingDotHandler *)*puVar9);
        uVar15 = uVar15 + 1;
      }
      if (0.0 < *(float *)(pLVar8 + 0x18)) {
        fVar21 = (float)PVZ_Dt();
        fVar22 = *(float *)(pLVar8 + 0x18);
        *(float *)(pLVar8 + 0x18) = fVar22 - fVar21;
        if (fVar22 - fVar21 < 0.0) {
          if (pLVar8[0x1c] == (LinkedTilePropagationInfo)0x0) {
            uVar17 = *(undefined8 *)(this + 0xe8);
            lVar5 = 0;
            pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)0x0;
            lVar12 = FUN_03cea3dc(uVar17,*(undefined8 *)(this + 0xf0));
            if (lVar12 != 0) {
              do {
                this_02 = (TPoint<int> *)FUN_03cea40c(uVar17,lVar5);
                cVar3 = Sexy::TPoint<int>::operator==(this_02,(TPoint *)(pLVar8 + 8));
                if (cVar3 != '\0') {
                  pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                           FUN_03cea418(*(undefined8 *)(this + 0x118),lVar5);
                }
                lVar5 = lVar5 + 1;
              } while (lVar5 != lVar12);
            }
            iVar4 = *(int *)(pLVar8 + 0xc);
            iVar1 = *(int *)(pLVar8 + 8);
            pBVar19 = *(Board **)(gLawnApp + 0x9f0);
            std::string::string((string *)&local_10,"");
            pPVar13 = (Plant *)Board::GetPlantAt(pBVar19,iVar1,iVar4,(string *)&local_10);
            std::string::~string((string *)&local_10);
            nop();
            if ((pPVar13 == (Plant *)0x0) ||
               (cVar3 = Plant::CanApplyPlantfood(pPVar13), cVar3 == '\0')) {
              if (pRVar6 != (RtWeakPtr<Sexy::ResourceInfo> *)0x0) {
                pEVar14 = (EffectAnimRig_LinkedTile *)
                          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
                EffectAnimRig_LinkedTile::PlayPlantEnteredTile(pEVar14);
              }
            }
            else {
              (**(code **)(**(long **)(pPVar13 + 0xa8) + 0x220))(*(long **)(pPVar13 + 0xa8));
            }
          }
          else {
            (**(code **)(*(long *)this + 0x100))(this,pLVar8 + 8);
            Board::KillPlantAt(*(Board **)(gLawnApp + 0x9f0),*(int *)(pLVar8 + 8),
                               *(int *)(pLVar8 + 0xc));
          }
        }
      }
      cVar3 = LinkedTilePropagationInfo::IsDone(pLVar8);
      if (cVar3 != '\0') {
        pLVar8 = (LinkedTilePropagationInfo *)FUN_03cea468(*(undefined8 *)(this + 0x100),lVar18);
        LinkedTilePropagationInfo::DestroyTileGlows(pLVar8);
        local_20 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(this + 0x100));
        local_18 = __gnu_cxx::
                   __normal_iterator<LinkedTilePropagationInfo*,std::vector<LinkedTilePropagationInfo,std::allocator<LinkedTilePropagationInfo>>>
                   ::operator+((__normal_iterator<LinkedTilePropagationInfo*,std::vector<LinkedTilePropagationInfo,std::allocator<LinkedTilePropagationInfo>>>
                                *)&local_20,lVar18);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_10,(__normal_iterator *)&local_18);
        std::vector<LinkedTilePropagationInfo,std::allocator<LinkedTilePropagationInfo>>::erase
                  ((vector<LinkedTilePropagationInfo,std::allocator<LinkedTilePropagationInfo>> *)
                   (this + 0x100),local_10);
      }
      if (lVar16 == lVar20 - (ulong)uVar2) break;
      uVar17 = *(undefined8 *)(this + 0x100);
      lVar5 = lVar16 + -1;
      lVar18 = lVar16;
    }
  }
  pRVar11 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  uVar17 = *(undefined8 *)(this + 0x130);
  iVar4 = FUN_03cea498(uVar17,*(undefined8 *)(this + 0x138));
  uVar2 = iVar4 - 1;
  if (-1 < (int)uVar2) {
    lVar20 = (long)(int)uVar2 + -1;
    lVar5 = lVar20;
    lVar18 = (long)(int)uVar2;
    while( true ) {
      lVar16 = lVar5;
      this_01 = (FactoryArmStatus *)FUN_03cea4b8(uVar17,lVar18);
      FactoryArmStatus::Update(this_01,(FutureStageProperties *)pRVar11);
      lVar5 = FUN_03cea4b8(*(undefined8 *)(this + 0x130),lVar18);
      if (*(int *)(lVar5 + 0x20) == 4) {
        local_20 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(this + 0x130));
        local_18 = __gnu_cxx::
                   __normal_iterator<Sexy::SexyTransform2D*,std::vector<Sexy::SexyTransform2D,std::allocator<Sexy::SexyTransform2D>>>
                   ::operator+((__normal_iterator<Sexy::SexyTransform2D*,std::vector<Sexy::SexyTransform2D,std::allocator<Sexy::SexyTransform2D>>>
                                *)&local_20,lVar18);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_10,(__normal_iterator *)&local_18);
        std::vector<FactoryArmStatus,std::allocator<FactoryArmStatus>>::erase
                  ((vector<FactoryArmStatus,std::allocator<FactoryArmStatus>> *)(this + 0x130),
                   local_10);
      }
      if (lVar16 == lVar20 - (ulong)uVar2) break;
      uVar17 = *(undefined8 *)(this + 0x130);
      lVar5 = lVar16 + -1;
      lVar18 = lVar16;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FutureStage::onPlantPlantfooded(Plant*) */

void __thiscall FutureStage::onPlantPlantfooded(FutureStage *this,Plant *param_1)

{
  uint uVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  TPoint<int> *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  EffectAnimRig_LinkedTile *this_02;
  LinkedTilePropagationInfo *this_03;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  Point aPStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_38,*(int *)(param_1 + 0x114),*(int *)(param_1 + 0x110));
  uVar9 = *(undefined8 *)(this + 0xe8);
  lVar5 = FUN_03cea3dc(uVar9,*(undefined8 *)(this + 0xf0));
  lVar2 = 0;
  do {
    lVar7 = lVar2;
    if (lVar7 == lVar5) goto LAB_03cf2220;
    this_00 = (TPoint<int> *)FUN_03cea40c(uVar9,lVar7);
    cVar3 = Sexy::TPoint<int>::operator==(this_00,(TPoint *)aPStack_38);
    lVar2 = lVar7 + 1;
  } while (cVar3 == '\0');
  this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03cea418(*(undefined8 *)(this + 0x118),lVar7);
  if (this_00 != (TPoint<int> *)0x0) {
    GetLinkedTileColor(aCStack_18,this,*(undefined4 *)(this_00 + 8));
    Plant::SetPlantfoodShineColor(param_1,aCStack_18);
    this_02 = (EffectAnimRig_LinkedTile *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
    EffectAnimRig_LinkedTile::PlayActivation(this_02);
    uVar9 = *(undefined8 *)(this + 0x100);
    uVar6 = *(undefined8 *)(this + 0x108);
    this_01[8] = (RtWeakPtr<Sexy::ResourceInfo>)0x1;
    iVar4 = FUN_03cea42c(uVar9,uVar6);
    uVar1 = iVar4 - 1;
    if (-1 < (int)uVar1) {
      lVar7 = (long)(int)uVar1 + -1;
      lVar2 = lVar7;
      lVar5 = (long)(int)uVar1;
      while( true ) {
        lVar8 = lVar2;
        this_03 = (LinkedTilePropagationInfo *)FUN_03cea468(uVar9,lVar5);
        cVar3 = Sexy::TPoint<int>::operator==((TPoint<int> *)(this_03 + 8),(TPoint *)aPStack_38);
        if ((cVar3 != '\0') && (this_03[0x1c] != (LinkedTilePropagationInfo)0x0)) {
          LinkedTilePropagationInfo::DestroyTileGlows(this_03);
          local_30 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)(this + 0x100));
          local_28 = __gnu_cxx::
                     __normal_iterator<LinkedTilePropagationInfo*,std::vector<LinkedTilePropagationInfo,std::allocator<LinkedTilePropagationInfo>>>
                     ::operator+((__normal_iterator<LinkedTilePropagationInfo*,std::vector<LinkedTilePropagationInfo,std::allocator<LinkedTilePropagationInfo>>>
                                  *)&local_30,lVar5);
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_20,(__normal_iterator *)&local_28);
          std::vector<LinkedTilePropagationInfo,std::allocator<LinkedTilePropagationInfo>>::erase
                    ((vector<LinkedTilePropagationInfo,std::allocator<LinkedTilePropagationInfo>> *)
                     (this + 0x100),local_20);
        }
        if (lVar8 == lVar7 - (ulong)uVar1) break;
        uVar9 = *(undefined8 *)(this + 0x100);
        lVar2 = lVar8 + -1;
        lVar5 = lVar8;
      }
    }
  }
LAB_03cf2220:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FutureStage::onZombieDied(Zombie*, DamageInfo const*) */

void FutureStage::onZombieDied(Zombie *param_1,DamageInfo *param_2)

{
  char cVar1;
  RtWeakPtrBase *pRVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  SexyVector3 *pSVar6;
  ResilienceTutorialIntroProperties *pRVar7;
  undefined8 uVar8;
  float fVar9;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  FactoryArmStatus aFStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 != (DamageInfo *)0x0) {
    pRVar2 = (RtWeakPtrBase *)Zombie::GetType((Zombie *)param_2);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,pRVar2);
    uVar8 = *(undefined8 *)(param_1 + 0x148);
    lVar3 = FUN_03cea4c4(uVar8,*(undefined8 *)(param_1 + 0x150));
    lVar4 = 0;
    do {
      if (lVar4 == lVar3) goto LAB_03cf25e8;
      pRVar2 = (RtWeakPtrBase *)FUN_03cea4d0(uVar8,lVar4);
      cVar1 = Sexy::RtWeakPtrBase::operator==(pRVar2,(RtWeakPtrBase *)aRStack_38);
      lVar4 = lVar4 + 1;
    } while (cVar1 == '\0');
    FactoryArmStatus::FactoryArmStatus(aFStack_30);
    std::vector<FactoryArmStatus,std::allocator<FactoryArmStatus>>::push_back
              ((vector<FactoryArmStatus,std::allocator<FactoryArmStatus>> *)(param_1 + 0x130),
               aFStack_30);
    uVar8 = *(undefined8 *)(param_1 + 0x130);
    lVar4 = FUN_03cea498(uVar8,*(undefined8 *)(param_1 + 0x138));
    piVar5 = (int *)FUN_03cea4b8(uVar8,lVar4 + -1);
    pSVar6 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)param_2);
    Sexy::SexyVector3::operator=((SexyVector3 *)(piVar5 + 5),pSVar6);
    pRVar7 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)param_1);
    fVar9 = *(float *)(pRVar7 + 0x1a8);
    piVar5[1] = *(int *)(pRVar7 + 0x1a4);
    *piVar5 = (int)fVar9;
LAB_03cf25e8:
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FutureStage::gatherPlantingRestrictions(Sexy::Point const&, PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) */

void __thiscall
FutureStage::gatherPlantingRestrictions
          (FutureStage *this,Point *param_1,PlantType *param_2,vector *param_3)

{
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((this[0x160] != (FutureStage)0x0) && (7 < *(int *)param_1)) {
    local_c = 4;
    std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
              ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
               (PlantingReason *)&local_c);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FutureStage::propagateFromTile(LinkedTileEntry const*, bool) */

void __thiscall
FutureStage::propagateFromTile(FutureStage *this,LinkedTileEntry *param_1,bool param_2)

{
  int iVar1;
  char cVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  ulong uVar4;
  TPoint<int> *this_00;
  long lVar5;
  LinkedTilePropagationInfo *this_01;
  ulong uVar6;
  undefined8 uVar7;
  int local_c8;
  int iStack_c4;
  Color local_c0 [8];
  undefined8 uStack_b8;
  Color local_b0 [8];
  undefined8 uStack_a8;
  LinkedTilePropagationInfo local_a0 [8];
  undefined8 local_98;
  undefined4 local_90;
  float local_8c;
  float local_88;
  undefined1 local_84;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar6 = 0;
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  Sexy::Point::Point((Point *)&local_c8,(TPoint *)param_1);
  uVar7 = *(undefined8 *)(this + 0xe8);
  iVar1 = *(int *)(param_1 + 8);
  uVar4 = FUN_03cea3dc(uVar7,*(undefined8 *)(this + 0xf0));
  if (uVar4 != 0) {
    do {
      this_00 = (TPoint<int> *)FUN_03cea40c(uVar7,uVar6);
      if ((*(int *)(this_00 + 8) == iVar1) &&
         (cVar2 = Sexy::TPoint<int>::operator!=(this_00,(TPoint *)&local_c8), cVar2 != '\0')) {
        LinkedTilePropagationInfo::LinkedTilePropagationInfo(local_a0);
        local_90 = *(undefined4 *)(this_00 + 8);
        local_8c = (float)Distance2D((float)local_c8,(float)iStack_c4,(float)*(int *)this_00,
                                     (float)*(int *)(this_00 + 4));
        local_98 = *(undefined8 *)this_00;
        local_8c = local_8c * *(float *)(param_1 + 0x10);
        local_88 = local_8c;
        local_84 = param_2;
        std::vector<LinkedTilePropagationInfo,std::allocator<LinkedTilePropagationInfo>>::push_back
                  ((vector<LinkedTilePropagationInfo,std::allocator<LinkedTilePropagationInfo>> *)
                   (this + 0x100),local_a0);
        Sexy::Color::Color(local_c0);
        if (param_2) {
          Sexy::Color::Color(local_b0,2);
          uStack_b8 = uStack_a8;
        }
        else {
          GetLinkedTileColor(local_b0,this,*(undefined4 *)(this_00 + 8));
          uStack_b8 = CONCAT44((int)(*(float *)(pRVar3 + 0x1ac) * 255.0),(int)uStack_a8);
        }
        uVar7 = *(undefined8 *)(this + 0x100);
        lVar5 = FUN_03cea42c(uVar7,*(undefined8 *)(this + 0x108));
        this_01 = (LinkedTilePropagationInfo *)FUN_03cea468(uVar7,lVar5 + -1);
        LinkedTilePropagationInfo::BuildTileGlows(this_01,this,local_c0);
        LinkedTilePropagationInfo::~LinkedTilePropagationInfo(local_a0);
        uVar7 = *(undefined8 *)(this + 0xe8);
        uVar4 = FUN_03cea3dc(uVar7,*(undefined8 *)(this + 0xf0));
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar4);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* FutureStage::DestroyLinkedNetworkAt(Sexy::Point const&) */

void __thiscall FutureStage::DestroyLinkedNetworkAt(FutureStage *this,Point *param_1)

{
  char cVar1;
  long lVar2;
  TPoint<int> *this_00;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(this + 0xe8);
  lVar2 = FUN_03cea3dc(uVar4,*(undefined8 *)(this + 0xf0));
  lVar3 = 0;
  do {
    if (lVar3 == lVar2) {
      return;
    }
    this_00 = (TPoint<int> *)FUN_03cea40c(uVar4,lVar3);
    cVar1 = Sexy::TPoint<int>::operator==(this_00,(TPoint *)param_1);
    lVar3 = lVar3 + 1;
  } while (cVar1 == '\0');
  if (this_00 == (TPoint<int> *)0x0) {
    return;
  }
  propagateFromTile(this,(LinkedTileEntry *)this_00,true);
  (**(code **)(*(long *)this + 0x100))(this,this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FutureStage::onToolAppliedPlantFood(PlantGroup*) */

void __thiscall FutureStage::onToolAppliedPlantFood(FutureStage *this,PlantGroup *param_1)

{
  char cVar1;
  long lVar2;
  TPoint<int> *this_00;
  long lVar3;
  undefined8 uVar4;
  TPoint aTStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_03ceb99c(aTStack_10,*(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0xa8));
  uVar4 = *(undefined8 *)(this + 0xe8);
  lVar2 = FUN_03cea3dc(uVar4,*(undefined8 *)(this + 0xf0));
  lVar3 = 0;
  do {
    if (lVar3 == lVar2) goto LAB_03cf35cc;
    this_00 = (TPoint<int> *)FUN_03cea40c(uVar4,lVar3);
    cVar1 = Sexy::TPoint<int>::operator==(this_00,aTStack_10);
    lVar3 = lVar3 + 1;
  } while (cVar1 == '\0');
  if (this_00 != (TPoint<int> *)0x0) {
    propagateFromTile(this,(LinkedTileEntry *)this_00,false);
  }
LAB_03cf35cc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FutureStage::registerForEvents() */

void __thiscall FutureStage::registerForEvents(FutureStage *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StageModule::registerForEvents((StageModule *)this);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<FutureStage,void(FutureStage::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x110);
  Sexy::Delegate0::Delegate0<FutureStage,void(FutureStage::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLevelEnded(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,addToRenderQueue);
  Sexy::Delegate1<RenderQueue*>::Delegate1<FutureStage,void(FutureStage::*)(RenderQueue*)>
            ((Delegate1<RenderQueue*> *)aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterAddToRenderQueue(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onToolAppliedPlantFood);
  local_f0 = local_c8;
  uStack_e8 = uStack_c0;
  local_e0 = local_b8;
  MessageRouter::
  Subscribe<PlantGroup*,Sexy::CBMemberTranslatorX<FutureStage,void(FutureStage::*)(PlantGroup*)>>
            ((MessageRouter *)puVar1,Message::ToolAppliedPlantfood,&local_f0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDied);
  local_110 = local_b0;
  uStack_108 = uStack_a8;
  local_100 = local_a0;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<FutureStage,void(FutureStage::*)(Zombie*,DamageInfo_const*)>>
            ((MessageRouter *)puVar1,Message::ZombieDied,&local_110);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantPlanted);
  local_120 = local_88;
  local_130 = local_98;
  uStack_128 = uStack_90;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<FutureStage,void(FutureStage::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantPlanted,&local_130);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantDied);
  local_130 = local_80;
  uStack_128 = uStack_78;
  local_120 = local_70;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<FutureStage,void(FutureStage::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantDied,&local_130);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantPlantfooded);
  local_130 = local_68;
  uStack_128 = uStack_60;
  local_120 = local_58;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<FutureStage,void(FutureStage::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantPlantfooded,&local_130);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gatherPlantingRestrictions);
  local_150 = local_50;
  uStack_148 = uStack_48;
  local_140 = local_40;
  MessageRouter::
  Subscribe<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,Sexy::CBMemberTranslatorX<FutureStage,void(FutureStage::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>>
            ((MessageRouter *)puVar1,Message::GatherPlantingRestrictions,&local_150);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

