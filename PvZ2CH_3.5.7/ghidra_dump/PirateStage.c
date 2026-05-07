// Class: PirateStage


/* PirateStage::CanGraveStoneSpawnAt(int, int) */

bool __thiscall PirateStage::CanGraveStoneSpawnAt(PirateStage *this,int param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  
  bVar2 = false;
  if (param_2 < 5) {
    piVar1 = (int *)FUN_03f18ae0(*(undefined8 *)(this + 0xe8),(long)param_2);
    bVar2 = *piVar1 == 1 || param_1 < 5;
  }
  return bVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PirateStage::StaticClassInit() */

void PirateStage::StaticClassInit(void)

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
    std::string::string(asStack_10,"PirateStage");
    (*pcVar2)(plVar1,asStack_10,FUN_03f1a900,0x140,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PirateStage::StaticGetClass() */

long * PirateStage::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PirateStage",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PirateStage::ShowGuides(bool) */

void __thiscall PirateStage::ShowGuides(PirateStage *this,bool param_1)

{
  this[0x13c] = (PirateStage)param_1;
  return;
}


/* PirateStage::IsPlankOnRow(int) */

bool __thiscall PirateStage::IsPlankOnRow(PirateStage *this,int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_03f18ae0(*(undefined8 *)(this + 0xe8),(long)param_1);
  return *piVar1 != 0;
}


/* PirateStage::CanZombieSpawnInRow(int, Sexy::RtWeakPtr<ZombieType const>) */

bool __thiscall
PirateStage::CanZombieSpawnInRow
          (PirateStage *this,int param_1,RtWeakPtr<Sexy::ResourceInfo> *param_3)

{
  bool bVar1;
  int *piVar2;
  long lVar3;
  
  piVar2 = (int *)FUN_03f18ae0(*(undefined8 *)(this + 0xe8),(long)param_1);
  if (*piVar2 != 1) {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
    bVar1 = std::operator==((string *)(lVar3 + 8),"seagull");
    if (!bVar1) {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
      bVar1 = std::operator==((string *)(lVar3 + 8),"swashbuckler");
      if (!bVar1) {
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
        bVar1 = std::operator==((string *)(lVar3 + 8),"cannon");
        if (!bVar1) {
          return bVar1;
        }
      }
    }
    return true;
  }
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
  bVar1 = std::operator==((string *)(lVar3 + 8),"swashbuckler");
  if (!bVar1) {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
    bVar1 = std::operator==((string *)(lVar3 + 8),"seagull");
    if (!bVar1) {
      return true;
    }
  }
  return false;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PirateStage::generatePlanks() */

void __thiscall PirateStage::generatePlanks(PirateStage *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  BoardRegionDeepWater *pBVar4;
  long *plVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  Board *pBVar9;
  ulong uVar10;
  ulong uVar11;
  Insets aIStack_18 [16];
  long local_8;
  
  uVar11 = 0;
  local_8 = ___stack_chk_guard;
  uVar10 = 0;
  iVar2 = *(int *)(*(Board **)(gLawnApp + 0x9f0) + 0xf8) + -5;
  pBVar4 = Board::AddRegion<BoardRegionDeepWater>(*(Board **)(gLawnApp + 0x9f0));
  Sexy::Insets::Insets(aIStack_18,5,-2,iVar2,2);
  BoardRegion::SetRegionFromGridSquares((BoardRegion *)pBVar4,(TRect *)aIStack_18);
  PoolBoardUDWater::SetSplashHorizontalMinDistances((PoolBoardUDWater *)pBVar4,40.0,101.0);
  pBVar4 = Board::AddRegion<BoardRegionDeepWater>(*(Board **)(gLawnApp + 0x9f0));
  Sexy::Insets::Insets(aIStack_18,5,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc),iVar2,2);
  BoardRegion::SetRegionFromGridSquares((BoardRegion *)pBVar4,(TRect *)aIStack_18);
  PoolBoardUDWater::SetSplashHorizontalMinDistances((PoolBoardUDWater *)pBVar4,40.0,101.0);
  iVar3 = BoardConstants::NUMBER_OF_ROWS();
  if (0 < iVar3) {
    do {
      pBVar9 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string((string *)aIStack_18,"plank");
      iVar3 = (int)uVar11;
      plVar5 = (long *)Board::GetGridItemAt(pBVar9,(string *)aIStack_18,5,iVar3);
      std::string::~string((string *)aIStack_18);
      nop();
      piVar6 = (int *)FUN_03f18ae0(*(undefined8 *)(this + 0xe8),uVar11);
      if (*piVar6 == 1) {
        uVar8 = 1;
        if (plVar5 != (long *)0x0) goto LAB_03f19c88;
        pBVar9 = *(Board **)(gLawnApp + 0x9f0);
        std::string::string((string *)aIStack_18,"plank");
        Board::AddGridItem(pBVar9,(string *)aIStack_18,5,iVar3,1);
        std::string::~string((string *)aIStack_18);
        nop();
        iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
        if (5 < iVar3) goto LAB_03f19c98;
      }
      else {
        uVar8 = 3;
        pBVar4 = Board::AddRegion<BoardRegionDeepWater>(*(Board **)(gLawnApp + 0x9f0));
        Sexy::Insets::Insets(aIStack_18,5,iVar3,iVar2,1);
        BoardRegion::SetRegionFromGridSquares((BoardRegion *)pBVar4,(TRect *)aIStack_18);
        PoolBoardUDWater::SetSplashHorizontalMinDistances((PoolBoardUDWater *)pBVar4,40.0,101.0);
LAB_03f19c88:
        iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
        if (5 < iVar3) {
LAB_03f19c98:
          iVar7 = 5;
          do {
            iVar1 = iVar7 + 1;
            Board::SetGridSquareType(*(Board **)(gLawnApp + 0x9f0),iVar7,uVar10,uVar8);
            iVar7 = iVar1;
          } while (iVar1 < iVar3);
        }
        piVar6 = (int *)FUN_03f18ae0(*(undefined8 *)(this + 0xe8),uVar11);
        if ((*piVar6 == 0) && (plVar5 != (long *)0x0)) {
          (**(code **)(*plVar5 + 0x48))(plVar5);
        }
      }
      uVar11 = uVar11 + 1;
      iVar3 = BoardConstants::NUMBER_OF_ROWS();
      uVar10 = uVar11 & 0xffffffff;
    } while ((int)uVar11 < iVar3);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PirateStage::InitPlanks(std::vector<int, std::allocator<int> > const&) */

void __thiscall PirateStage::InitPlanks(PirateStage *this,vector *param_1)

{
  long lVar1;
  int *piVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar5 = *(undefined8 *)(this + 0xe8);
  lVar1 = FUN_03f18ac4(uVar5,*(undefined8 *)(this + 0xf0));
  lVar4 = 0;
  while (lVar4 + 1 != lVar1 + 1) {
    puVar3 = (undefined4 *)FUN_03f18ae0(uVar5,lVar4);
    *puVar3 = 0;
    lVar4 = lVar4 + 1;
  }
  uVar6 = *(undefined8 *)param_1;
  lVar1 = FUN_03f18ac4(uVar6,*(undefined8 *)(param_1 + 8));
  lVar4 = 0;
  while (lVar4 + 1 != lVar1 + 1) {
    piVar2 = (int *)FUN_03f18ad0(uVar6,lVar4);
    puVar3 = (undefined4 *)FUN_03f18ae0(uVar5,(long)*piVar2);
    *puVar3 = 1;
    lVar4 = lVar4 + 1;
  }
  generatePlanks(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PirateStage::SpawnWaterSplashEffect(Sexy::SexyVector2, int) */

void PirateStage::SpawnWaterSplashEffect
               (float param_1,float param_2,undefined8 param_3,undefined4 param_4)

{
  Effect_PopAnim *this;
  ResourceInfo *pRVar1;
  RtClass *pRVar2;
  float fVar3;
  string asStack_38 [8];
  RtWeakPtr aRStack_30 [8];
  Vec3 aVStack_28 [16];
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar3 = (float)ClampFloat(param_1,560.0,675.0);
  EATextSquish::Vec3::Vec3(aVStack_28,-95.0,-90.0,0.0);
  EATextSquish::Vec3::Vec3(aVStack_18,fVar3,param_2,0.0);
  EATextSquish::Vec3::operator+=(aVStack_18,aVStack_28);
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_38,"POPANIM_EFFECTS_WATER_SPLASH");
  GetPAMByName(asStack_38);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_30);
  pRVar2 = (RtClass *)EffectAnimRig_WaterSplash::StaticGetClass();
  Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar1,pRVar2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  std::string::~string(asStack_38);
  nop();
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)aVStack_18,-1);
  FUN_03f18ab8(this + 0x1c,param_4);
  std::string::string((string *)aRStack_30,"water_splash_01");
  Effect_PopAnim::PlaySingleAnimation(this,aRStack_30,2);
  std::string::~string((string *)aRStack_30);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PirateStage::PirateStage() */

void __thiscall PirateStage::PirateStage(PirateStage *this)

{
  StageModule::StageModule((StageModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06796d50;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x100));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x108));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x110));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x11c));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x128));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x134));
  return;
}


/* PirateStage::StaticNew() */

PirateStage * PirateStage::StaticNew(void)

{
  PirateStage *this;
  
  this = ::operator_new(0x140);
  PirateStage(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PirateStage::renderBackground(Sexy::Graphics*) */

void __thiscall PirateStage::renderBackground(PirateStage *this,Graphics *param_1)

{
  int iVar1;
  PopAnimRig *pPVar2;
  Image *pIVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  SexyTransform2D aSStack_a8 [8];
  undefined1 auStack_a0 [12];
  undefined1 auStack_94 [20];
  SexyTransform2D aSStack_80 [8];
  undefined1 auStack_78 [12];
  undefined1 auStack_6c [20];
  SexyTransform2D aSStack_58 [8];
  undefined1 auStack_50 [12];
  undefined1 auStack_44 [20];
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StageModule::renderBackground((StageModule *)this,param_1);
  if (((DAT_06ae2b10 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06ae2b10), iVar1 != 0)) {
    Sexy::FastCurve::SetOutRange((FastCurve *)&DAT_06ae2bc8,490.0,220.0);
    __cxa_guard_release(&DAT_06ae2b10);
  }
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_a8);
  uVar4 = FUN_03f18c60(DAT_06ae2bc8);
  uVar5 = FUN_03f18c60(DAT_06ae2bcc);
  FUN_03f18a1c(uVar4,uVar5,auStack_a0,auStack_94);
  pPVar2 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x100))
  ;
  PopAnimRig::Draw(pPVar2,param_1,aSStack_a8);
  if (((DAT_06ae2b80 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06ae2b80), iVar1 != 0)) {
    Sexy::FastCurve::SetOutRange((FastCurve *)&DAT_06ae2c18,580.0,300.0);
    __cxa_guard_release(&DAT_06ae2b80);
  }
  Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_a8);
  uVar4 = FUN_03f18c60(DAT_06ae2c18);
  uVar5 = FUN_03f18c60(DAT_06ae2c1c);
  FUN_03f18a1c(uVar4,uVar5,auStack_a0,auStack_94);
  pPVar2 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x108))
  ;
  PopAnimRig::Draw(pPVar2,param_1,aSStack_a8);
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_80);
  uVar4 = FUN_03f18c60(*(undefined4 *)(this + 0x11c));
  uVar5 = FUN_03f18c60(*(undefined4 *)(this + 0x120));
  FUN_03f18a1c(uVar4,uVar5,auStack_78,auStack_6c);
  pPVar2 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x110))
  ;
  PopAnimRig::Draw(pPVar2,param_1,aSStack_80);
  Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_80);
  uVar4 = FUN_03f18c60(*(undefined4 *)(this + 0x134));
  uVar5 = FUN_03f18c60(*(undefined4 *)(this + 0x138));
  FUN_03f18a1c(uVar4,uVar5,auStack_78,auStack_6c);
  pPVar2 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x128))
  ;
  PopAnimRig::Draw(pPVar2,param_1,aSStack_80);
  if (this[0x13c] != (PirateStage)0x0) {
    if (((DAT_06ae2b08 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06ae2b08), iVar1 != 0)) {
      Sexy::FastCurve::SetOutRange((FastCurve *)&DAT_06ae2af8,520.0,350.0);
      __cxa_guard_release(&DAT_06ae2b08);
    }
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_58);
    uVar4 = FUN_03f18c60(DAT_06ae2af8);
    uVar5 = FUN_03f18c60(DAT_06ae2afc);
    FUN_03f18a1c(uVar4,uVar5,auStack_50,auStack_44);
    pIVar3 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                ((CachedResourcePtr<Sexy::Image> *)&DAT_06ae2bf0);
    Sexy::Graphics::DrawImageMatrix(param_1,pIVar3,(SexyMatrix3 *)aSStack_58,0.0,0.0);
    if (((DAT_06ae2bd0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06ae2bd0), iVar1 != 0)) {
      Sexy::FastCurve::SetOutRange((FastCurve *)&DAT_06ae2b78,770.0,350.0);
      __cxa_guard_release(&DAT_06ae2bd0);
    }
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
    uVar4 = FUN_03f18c60(DAT_06ae2b78);
    uVar5 = FUN_03f18c60(DAT_06ae2b7c);
    FUN_03f18a1c(uVar4,uVar5,auStack_28,auStack_1c);
    pIVar3 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                ((CachedResourcePtr<Sexy::Image> *)&DAT_06ae2b30);
    Sexy::Graphics::DrawImageMatrix(param_1,pIVar3,(SexyMatrix3 *)aSStack_30,0.0,0.0);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PirateStage::onLoadComplete() */

void __thiscall PirateStage::onLoadComplete(PirateStage *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  ResourceInfo *pRVar2;
  RtClass *pRVar3;
  PopAnimRig *pPVar4;
  char *pcVar5;
  float fVar6;
  string asStack_50 [8];
  RtWeakPtr aRStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  std::string::string(asStack_50,"POPANIM_EFFECTS_WATER_FOAM");
  GetPAMByName(asStack_50);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_48);
  pRVar3 = (RtClass *)PopAnimRig::StaticGetClass();
  PopAnimRig::CreateRig((PopAnim *)pRVar2,pRVar3);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x108),(RtWeakPtrBase *)aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  std::string::~string(asStack_50);
  nop();
  pPVar4 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x108))
  ;
  std::string::string((string *)aRStack_40,"water_foam_left");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar4,aRStack_40,0,aDStack_38);
  std::string::~string((string *)aRStack_40);
  nop();
  std::string::string(asStack_50,"POPANIM_EFFECTS_WATER_FOAM");
  GetPAMByName(asStack_50);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_48);
  pRVar3 = (RtClass *)PopAnimRig::StaticGetClass();
  PopAnimRig::CreateRig((PopAnim *)pRVar2,pRVar3);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x100),(RtWeakPtrBase *)aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  std::string::~string(asStack_50);
  nop();
  pPVar4 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x100))
  ;
  std::string::string((string *)aRStack_40,"water_foam_right");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar4,aRStack_40,0,aDStack_38);
  std::string::~string((string *)aRStack_40);
  nop();
  std::string::string(asStack_50,"POPANIM_EFFECTS_WATER_BREAKER");
  GetPAMByName(asStack_50);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_48);
  pRVar3 = (RtClass *)PopAnimRig::StaticGetClass();
  PopAnimRig::CreateRig((PopAnim *)pRVar2,pRVar3);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x110),(RtWeakPtrBase *)aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  std::string::~string(asStack_50);
  nop();
  fVar6 = (float)PVZ_T();
  *(float *)(this + 0x118) = fVar6 + *(float *)(pRVar1 + 0x130);
  std::string::string(asStack_50,"POPANIM_EFFECTS_WATER_BREAKER");
  GetPAMByName(asStack_50);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_48);
  pRVar3 = (RtClass *)PopAnimRig::StaticGetClass();
  PopAnimRig::CreateRig((PopAnim *)pRVar2,pRVar3);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x128),(RtWeakPtrBase *)aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  std::string::~string(asStack_50);
  nop();
  fVar6 = (float)PVZ_T();
  *(float *)(this + 0x130) = fVar6 + *(float *)(pRVar1 + 0x130) * 0.618034;
  pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar5,"Play_Bow_Wash_BG");
  generatePlanks(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PirateStage::DropZombieInOcean(Sexy::RtWeakPtr<Zombie>) */

void __thiscall PirateStage::DropZombieInOcean(PirateStage *this,RtWeakPtr *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ResourceInfo *this_00;
  float *pfVar4;
  Zombie *this_01;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  long lVar5;
  char *pcVar6;
  undefined4 local_20;
  undefined4 local_1c;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(param_2);
  MessageRouter::Post<Zombie*,Zombie*>
            ((MessageRouter *)gMessageRouter,Message::ZombieInOcean,(Zombie *)this_00);
  pfVar4 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this_00);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_20,*pfVar4,pfVar4[1]);
  iVar3 = SharkMinion::getRow((SharkMinion *)this_00);
  Board::GetGridBoundingRect();
  SpawnWaterSplashEffect(local_20,local_1c,this,(iVar3 - local_c) + 300000);
  this_01 = (Zombie *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
  this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(this_01);
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
  bVar1 = std::operator==((string *)(lVar5 + 8),"swashbuckler");
  if (bVar1) {
    pcVar6 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar6,"Play_Zombie_HitWater");
  }
  else {
    pcVar6 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar6,"Play_Zombie_Splash");
  }
  cVar2 = (**(code **)(*(long *)this_00 + 0x328))(this_00);
  if (cVar2 == '\0') {
    thunk_FUN_03f1afe4(gMessageRouter,this_00);
  }
  (**(code **)(*(long *)this_00 + 0x48))(this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PirateStage::onUpdate() */

void __thiscall PirateStage::onUpdate(PirateStage *this)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  float *pfVar8;
  RtObject *this_00;
  ZombiePirateCaptain *pZVar9;
  ZombiePirateParrot *pZVar10;
  Zombie *this_01;
  PopAnimRig *pPVar11;
  ResilienceTutorialIntroProperties *pRVar12;
  char *pcVar13;
  int extraout_w1;
  Board *this_02;
  float fVar14;
  float fVar15;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_60 [8];
  Iterator aIStack_58 [32];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar2 = false;
  this_02 = *(Board **)(gLawnApp + 0x9f0);
  uVar7 = Sexy::LazySingleton<PVZDB>::GetInstance();
  bVar1 = false;
  PVZDB::GetObjectIteratorForTable(aIStack_58,uVar7,0x29);
  do {
    bVar4 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_58);
    if (!bVar4) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_58);
      cVar3 = Board::IsPlaying(*(Board **)(gLawnApp + 0x9f0));
      if (cVar3 != '\0') {
        if ((bVar1) && (bVar2)) {
          if (this[0x13d] == (PirateStage)0x0) {
            pcVar13 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
            AudioMgr::SendEvent(pcVar13,"Play_Captain_Parrot");
            this[0x13d] = (PirateStage)0x1;
          }
        }
        else if (this[0x13d] != (PirateStage)0x0) {
          pcVar13 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
          AudioMgr::SendEvent(pcVar13,"Stop_Captain_Parrot");
          this[0x13d] = (PirateStage)0x0;
        }
      }
      pPVar11 = (PopAnimRig *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x108));
      fVar15 = (float)PVZ_T();
      fVar14 = (float)PVZ_Dt();
      PopAnimRig::UpdateAnim(pPVar11,fVar15,fVar14);
      pPVar11 = (PopAnimRig *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x100));
      fVar15 = (float)PVZ_T();
      fVar14 = (float)PVZ_Dt();
      PopAnimRig::UpdateAnim(pPVar11,fVar15,fVar14);
      pPVar11 = (PopAnimRig *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x128));
      fVar15 = (float)PVZ_T();
      fVar14 = (float)PVZ_Dt();
      PopAnimRig::UpdateAnim(pPVar11,fVar15,fVar14);
      pPVar11 = (PopAnimRig *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x110));
      fVar15 = (float)PVZ_T();
      fVar14 = (float)PVZ_Dt();
      PopAnimRig::UpdateAnim(pPVar11,fVar15,fVar14);
      pRVar12 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
      fVar15 = (float)PVZ_T();
      if (*(float *)(this + 0x130) < fVar15) {
        pPVar11 = (PopAnimRig *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x128));
        std::string::string((string *)aIStack_58,"water_breaker_left");
        Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
        PopAnimRig::PlayAndStop(pPVar11,aIStack_58,0,aDStack_38);
        std::string::~string((string *)aIStack_58);
        nop();
        if (((DAT_06ae2ba0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_06ae2ba0), iVar5 != 0)) {
          Sexy::FastCurve::SetOutRange((FastCurve *)&DAT_06ae2b28,565.0,100.0);
          __cxa_guard_release(&DAT_06ae2ba0);
        }
        *(undefined8 *)(this + 0x134) = DAT_06ae2b28;
        fVar15 = (float)Sexy::Rand(550.0);
        *(float *)(this + 0x138) = *(float *)(this + 0x138) + fVar15;
        fVar15 = (float)PVZ_T();
        *(float *)(this + 0x130) = fVar15 + *(float *)(pRVar12 + 0x130);
      }
      fVar15 = (float)PVZ_T();
      if (*(float *)(this + 0x118) < fVar15) {
        pPVar11 = (PopAnimRig *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x110));
        std::string::string((string *)aIStack_58,"water_breaker_right");
        Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
        PopAnimRig::PlayAndStop(pPVar11,aIStack_58,0,aDStack_38);
        std::string::~string((string *)aIStack_58);
        nop();
        if (((DAT_06ae2b20 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_06ae2b20), iVar5 != 0)) {
          Sexy::FastCurve::SetOutRange((FastCurve *)&DAT_06ae2b00,490.0,100.0);
          __cxa_guard_release(&DAT_06ae2b20);
        }
        *(undefined8 *)(this + 0x11c) = DAT_06ae2b00;
        fVar15 = (float)Sexy::Rand(600.0);
        *(float *)(this + 0x120) = *(float *)(this + 0x120) + fVar15;
        fVar15 = (float)PVZ_T();
        *(float *)(this + 0x118) = fVar15 + *(float *)(pRVar12 + 0x130);
      }
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_58);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_70,(RtWeakPtrBase *)aRStack_60);
    Sexy::RtId::~RtId((RtId *)aRStack_60);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_68,(RtWeakPtrBase *)aRStack_70);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
    nop();
    pZVar9 = Sexy::RtObject::Cast<ZombiePirateCaptain>(this_00);
    if (pZVar9 == (ZombiePirateCaptain *)0x0) {
      pZVar10 = Sexy::RtObject::Cast<ZombiePirateParrot>(this_00);
      if (pZVar10 != (ZombiePirateParrot *)0x0) {
        bVar2 = true;
      }
    }
    else {
      bVar1 = true;
      pZVar9 = Sexy::RtObject::Cast<ZombiePirateCaptain>(this_00);
      cVar3 = FUN_03f18ac0(pZVar9[0x810]);
      if (cVar3 != '\0') {
        bVar2 = true;
      }
    }
    cVar3 = Zombie::IsOnGround((Zombie *)this_00);
    if (cVar3 != '\0') {
      pfVar8 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)this_00);
      fVar15 = pfVar8[1];
      iVar5 = BoardTransforms::BoardSpaceToGridX(*pfVar8);
      iVar6 = BoardTransforms::BoardSpaceToGridYUnbounded(fVar15);
      if ((iVar6 < 0) || (*(int *)(this_02 + 0xfc) <= iVar6)) {
LAB_03f1b9b0:
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_60,(RtWeakPtrBase *)aRStack_68);
        DropZombieInOcean(this,aRStack_60);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60)
        ;
      }
      else {
        this_01 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
        cVar3 = Zombie::IsControlled(this_01);
        if (cVar3 == '\0') {
          Sexy::Point::Point((Point *)aRStack_60,iVar5,iVar6);
          cVar3 = Board::IsPitOfDoom(this_02,(Point *)aRStack_60);
          if (cVar3 != '\0') goto LAB_03f1b9b0;
        }
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
    Sexy::RtDbTable::Iterator::operator++(aIStack_58,extraout_w1);
  } while( true );
}


/* PirateStage::onLevelEnded() */

void __thiscall PirateStage::onLevelEnded(PirateStage *this)

{
  char *pcVar1;
  long *plVar2;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Stop_Bow_Wash_BG");
  plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x108));
  (**(code **)(*plVar2 + 0x48))();
  plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x100));
  (**(code **)(*plVar2 + 0x48))();
  plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x128));
  (**(code **)(*plVar2 + 0x48))();
  plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x110));
  (**(code **)(*plVar2 + 0x48))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PirateStage::registerForEvents() */

void __thiscall PirateStage::registerForEvents(PirateStage *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
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
            ((ReceivedDataCallback *)this,onLoadComplete);
  Sexy::Delegate0::Delegate0<PirateStage,void(PirateStage::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<PirateStage,void(PirateStage::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLevelEnded);
  Sexy::Delegate0::Delegate0<PirateStage,void(PirateStage::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLevelEnded(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gatherPlantingRestrictions);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::
  Subscribe<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,Sexy::CBMemberTranslatorX<PirateStage,void(PirateStage::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>>
            ((MessageRouter *)puVar1,Message::GatherPlantingRestrictions,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PirateStage::initializeModule() */

void __thiscall PirateStage::initializeModule(PirateStage *this)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  StageModule::initializeModule((StageModule *)this);
  std::vector<int,std::allocator<int>>::resize((vector<int,std::allocator<int>> *)(this + 0xe8),5);
  uVar4 = *(undefined8 *)(this + 0xe8);
  lVar1 = FUN_03f18ac4(uVar4,*(undefined8 *)(this + 0xf0));
  lVar3 = 0;
  while (lVar3 + 1 != lVar1 + 1) {
    puVar2 = (undefined4 *)FUN_03f18ae0(uVar4,lVar3);
    *puVar2 = 0;
    lVar3 = lVar3 + 1;
  }
  uVar5 = PVZ_EOT();
  this[0x13d] = (PirateStage)0x0;
  this[0x13c] = (PirateStage)0x0;
  *(undefined4 *)(this + 0x118) = uVar5;
  *(undefined4 *)(this + 0x130) = uVar5;
  return;
}


/* PirateStage::~PirateStage() */

void __thiscall PirateStage::~PirateStage(PirateStage *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06796d50;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x128));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x110));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x108));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x100));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0xe8));
  StageModule::~StageModule((StageModule *)this);
  return;
}


/* PirateStage::~PirateStage() */

void __thiscall PirateStage::~PirateStage(PirateStage *this)

{
  ~PirateStage(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PirateStage::gatherPlantingRestrictions(Sexy::Point const&, PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) */

void __thiscall
PirateStage::gatherPlantingRestrictions
          (PirateStage *this,Point *param_1,PlantType *param_2,vector *param_3)

{
  char cVar1;
  int *piVar2;
  long extraout_x0;
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  piVar2 = (int *)FUN_03f18ae0(*(undefined8 *)(this + 0xe8),(long)*(int *)(param_1 + 4));
  if ((*piVar2 == 0) && (4 < *(int *)param_1)) {
    local_10[0] = 0x15;
    std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
              ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
               (PlantingReason *)local_10);
  }
  else {
    LevelModule::GetPropsPtr((LevelModule *)this);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
    nop();
    cVar1 = StringRestrictionSet::IsIncluded
                      ((StringRestrictionSet *)(extraout_x0 + 0x138),(string *)(param_2 + 8));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
    if ((cVar1 != '\0') && (4 < *(int *)param_1)) {
      local_10[0] = 0x1f;
      std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
                ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
                 (PlantingReason *)local_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

