// Class: PowerTileIntro


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerTileIntro::showTools(bool) */

void __thiscall PowerTileIntro::showTools(PowerTileIntro *this,bool param_1)

{
  bool bVar1;
  UIWidget *pUVar2;
  string *extraout_x1;
  string *extraout_x1_00;
  RtWeakPtr aRStack_20 [8];
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIShovel");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_20);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    UIWidget::SetVisible(pUVar2,param_1);
  }
  std::string::string(asStack_10,"UISunBank");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1_00);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    UIWidget::SetVisible(pUVar2,param_1);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerTileIntro::startIntro() */

void __thiscall PowerTileIntro::startIntro(PowerTileIntro *this)

{
  long lVar1;
  Board *this_00;
  
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  lVar1 = Board::GetBoardPanLocations(this_00);
  (**(code **)(*(long *)this_00 + 0x1a8))(this_00,*(undefined4 *)(lVar1 + 4),0);
  StandardLevelIntro::startStandardIntro((StandardLevelIntro *)this,5);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerTileIntro::StaticClassInit() */

void PowerTileIntro::StaticClassInit(void)

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
    std::string::string(asStack_10,"PowerTileIntro");
    (*pcVar2)(plVar1,asStack_10,FUN_043045d8,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerTileIntro::StaticGetClass() */

long * PowerTileIntro::StaticGetClass(void)

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
  uVar2 = StandardLevelIntro::StaticGetClass();
  (*pcVar3)(plVar1,"PowerTileIntro",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PowerTileIntro::onStandardIntroComplete() */

void PowerTileIntro::onStandardIntroComplete(void)

{
  long lVar1;
  
  lVar1 = ResilienceTutorialIntro::getBoard();
  FUN_04303b98(lVar1 + 0x887,1);
  StandardLevelIntro::onStandardIntroComplete();
  return;
}


/* PowerTileIntro::PowerTileIntro() */

void __thiscall PowerTileIntro::PowerTileIntro(PowerTileIntro *this)

{
  StandardLevelIntro::StandardLevelIntro((StandardLevelIntro *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06831c70;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x58));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  return;
}


/* PowerTileIntro::StaticNew() */

PowerTileIntro * PowerTileIntro::StaticNew(void)

{
  PowerTileIntro *this;
  
  this = ::operator_new(0x78);
  PowerTileIntro(this);
  return this;
}


/* PowerTileIntro::clearBouncingArrows() */

void __thiscall PowerTileIntro::clearBouncingArrows(PowerTileIntro *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0x60);
    uVar2 = FUN_04303ba8(uVar4,*(undefined8 *)(this + 0x68));
    if (uVar2 <= uVar3) break;
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04303bb4(uVar4,uVar3);
    plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    (**(code **)(*plVar1 + 0x48))();
    uVar3 = uVar3 + 1;
  }
  std::vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>::
  clear((vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>
         *)(this + 0x60));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerTileIntro::initializeModule() */

void __thiscall PowerTileIntro::initializeModule(PowerTileIntro *this)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StandardLevelIntro::initializeModule((StandardLevelIntro *)this);
  AnimationMgr::Create();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x58),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  *(undefined4 *)(this + 0x4c) = 0xffffffff;
  *(undefined4 *)(this + 0x50) = 0;
  clearBouncingArrows(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerTileIntro::onEndLevel() */

void __thiscall PowerTileIntro::onEndLevel(PowerTileIntro *this)

{
  AnimationMgr *this_00;
  
  this_00 = (AnimationMgr *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58))
  ;
  AnimationMgr::Clear(this_00);
  clearBouncingArrows(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerTileIntro::setupDaveFailed() */

void __thiscall PowerTileIntro::setupDaveFailed(PowerTileIntro *this)

{
  Board *pBVar1;
  CrazyNPCManager *pCVar2;
  UIWidget *this_00;
  AnimationMgr *this_01;
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar1 = (Board *)ResilienceTutorialIntro::getBoard();
  Board::ClearAdviceImmediately(pBVar1);
  pCVar2 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
  std::string::string(asStack_60,"FUTURE_INTRO_FIRSTLEVEL_FAILURE");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNarrationFinished);
  Sexy::Delegate0::Delegate0<PowerTileIntro,void(PowerTileIntro::*)()>(aDStack_38,asStack_50);
  std::string::string(asStack_58,"");
  CrazyNPCManager::StartNarrativeID(pCVar2,asStack_60,aDStack_38,asStack_58);
  std::string::~string(asStack_58);
  nop();
  std::string::~string(asStack_60);
  nop();
  std::string::string(asStack_50,"UIPlantfood");
  this_00 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_50);
  UIWidget::SetVisible(this_00,false);
  std::string::~string(asStack_50);
  nop();
  clearBouncingArrows(this);
  pBVar1 = (Board *)ResilienceTutorialIntro::getBoard();
  Board::DestroyAllZombies(pBVar1);
  pBVar1 = (Board *)ResilienceTutorialIntro::getBoard();
  Board::ClearCursors(pBVar1);
  this_01 = (AnimationMgr *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58))
  ;
  AnimationMgr::Clear(this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerTileIntro::~PowerTileIntro() */

void __thiscall PowerTileIntro::~PowerTileIntro(PowerTileIntro *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06831c70;
  std::vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>::
  ~vector((vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>
           *)(this + 0x60));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
  StandardLevelIntro::~StandardLevelIntro((StandardLevelIntro *)this);
  return;
}


/* PowerTileIntro::~PowerTileIntro() */

void __thiscall PowerTileIntro::~PowerTileIntro(PowerTileIntro *this)

{
  ~PowerTileIntro(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerTileIntro::addPeashooter(int, int) */

void __thiscall PowerTileIntro::addPeashooter(PowerTileIntro *this,int param_1,int param_2)

{
  int iVar1;
  string *psVar2;
  long lVar3;
  ResourceInfo *pRVar4;
  ResourceInfo *pRVar5;
  undefined8 uVar6;
  Effect_PopAnim *this_00;
  Board *pBVar7;
  float fVar8;
  float fVar9;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_18,"peashooter");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
  std::string::~string(asStack_18);
  nop();
  pBVar7 = *(Board **)(gLawnApp + 0x9f0);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
  Board::LoadResourceGroupForGameplay(pBVar7,(string *)(lVar3 + 0x10));
  pBVar7 = (Board *)ResilienceTutorialIntro::getBoard();
  std::string::string(asStack_20,"");
  pRVar4 = (ResourceInfo *)Board::GetPlantAt(pBVar7,param_1,param_2,asStack_20);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)asStack_18);
  pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
  std::string::~string(asStack_20);
  nop();
  if (pRVar4 == pRVar5) {
    uVar6 = ResilienceTutorialIntro::getBoard();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_18,(RtWeakPtrBase *)aRStack_28);
    lVar3 = Board::AddPlant((Board *)0x0,uVar6,param_1,param_2,asStack_18,1,1,0xffffffff,0,1,1,0,0,0
                            ,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string(asStack_20,"POPANIM_EFFECTS_MOWER_SPAWN");
    GetPAMByName(asStack_20);
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_18);
    Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar4,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    std::string::~string(asStack_20);
    nop();
    fVar8 = (float)FUN_04303bbc(*(undefined4 *)(lVar3 + 0x18),*(undefined4 *)(lVar3 + 0x1c),
                                *(undefined4 *)(lVar3 + 0x20));
    fVar9 = *(float *)(lVar3 + 0x1c);
    FUN_04303bbc(*(undefined4 *)(lVar3 + 0x18),fVar9,*(undefined4 *)(lVar3 + 0x20));
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,fVar8 - 90.0,fVar9 - 110.0,0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)asStack_18,-1);
    iVar1 = Board::MakeRenderOrder(0x64d48,*(undefined4 *)(lVar3 + 0x110),0);
    FUN_04303b90(this_00 + 0x1c,iVar1 + 1);
    std::string::string(asStack_18,"animation");
    Effect_PopAnim::PlaySingleAnimation(this_00,asStack_18,0);
    std::string::~string(asStack_18);
    nop();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerTileIntro::addFirstPeashooter() */

void __thiscall PowerTileIntro::addFirstPeashooter(PowerTileIntro *this)

{
  addPeashooter(this,1,2);
  return;
}


/* PowerTileIntro::addSecondPeashooter() */

void __thiscall PowerTileIntro::addSecondPeashooter(PowerTileIntro *this)

{
  addPeashooter(this,1,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerTileIntro::addBouncingArrow(Sexy::SexyVector2 const&) */

void __thiscall PowerTileIntro::addBouncingArrow(PowerTileIntro *this,SexyVector2 *param_1)

{
  Effect_BouncingArrow *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = StandaloneEffect::CreateEffect<Effect_BouncingArrow>();
  CachedResourcePtr::operator_cast_to_RtWeakPtr((CachedResourcePtr *)&DAT_06af8410);
  Effect_BouncingArrow::SetArrowImage(this_00,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Effect_BouncingArrow::SetBounceHeightsBoardSpace(this_00,5.0,25.0);
  StandaloneEffect::SetVisibility((StandaloneEffect *)this_00,true);
  StandaloneEffect::SetScreenSpaceOrigin((StandaloneEffect *)this_00,param_1,1000000);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>::
  push_back((vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>
             *)(this + 0x60),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerTileIntro::addPeashooterArrow() */

void __thiscall PowerTileIntro::addPeashooterArrow(PowerTileIntro *this)

{
  int iVar1;
  Board *this_00;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  ResourceInfo *this_02;
  float *pfVar2;
  float fVar3;
  float fVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (Board *)ResilienceTutorialIntro::getBoard();
  std::string::string(asStack_10,"");
  this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Board::GetPlantAt(this_00,3,2,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)asStack_10);
  this_02 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  if (this_01 !=
      (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
       *)0x0) {
    pfVar2 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(this_01);
    fVar4 = *pfVar2;
    iVar1 = Plant::GetWidth();
    fVar4 = (float)FUN_04303e48(fVar4 + -25.0 + (float)(iVar1 / 2));
    fVar3 = (float)FUN_04303e48(pfVar2[1] - 70.0);
    Sexy::FastCurve::SetOutRange((FastCurve *)asStack_10,fVar4,fVar3);
    this_02 = (ResourceInfo *)addBouncingArrow(this,(SexyVector2 *)asStack_10);
    StandaloneEffect::SetIsScreenSpaceEffect((StandaloneEffect *)this_02,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_02);
}


/* PowerTileIntro::onCursorAdded(BaseCursor*) */

void __thiscall PowerTileIntro::onCursorAdded(PowerTileIntro *this,BaseCursor *param_1)

{
  bool bVar1;
  
  if (((*(int *)(this + 0x4c) == 2) && (param_1 != (BaseCursor *)0x0)) &&
     (bVar1 = Sexy::RtObject::IsA<PlantfoodCursor>((RtObject *)param_1), bVar1)) {
    clearBouncingArrows(this);
    addPeashooterArrow(this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerTileIntro::addPlantfoodArrow() */

void __thiscall PowerTileIntro::addPlantfoodArrow(PowerTileIntro *this)

{
  float fVar1;
  float fVar2;
  undefined4 local_40;
  undefined4 local_3c;
  Point aPStack_38 [8];
  TPoint aTStack_30 [8];
  int local_28;
  int local_24;
  string asStack_20 [8];
  int local_18;
  int local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_20,"UIPlantfood");
  UIWidget::GetWidgetBySheetName(asStack_20);
  UIWidget::GetDrawRect();
  std::string::~string(asStack_20);
  nop();
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_40,33.0,-6.0);
  fVar1 = (float)FUN_04303e58(local_40);
  fVar2 = (float)FUN_04303e58(local_3c);
  Sexy::Point::Point(aPStack_38,(int)(fVar1 + (float)local_18),(int)(fVar2 + (float)local_14));
  ResilienceTutorialIntro::getBoard();
  Board::GetBoardBaseOffset();
  Sexy::TPoint<int>::operator-((TPoint<int> *)aPStack_38,aTStack_30);
  Sexy::Point::Point((Point *)&local_28,(TPoint *)asStack_20);
  Board::TranslateScreenPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_28);
  Sexy::FastCurve::SetOutRange((FastCurve *)asStack_20,(float)local_28,(float)local_24);
  addBouncingArrow(this,(SexyVector2 *)asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerTileIntro::onCursorDestroyed(BaseCursor*) */

void __thiscall PowerTileIntro::onCursorDestroyed(PowerTileIntro *this,BaseCursor *param_1)

{
  bool bVar1;
  
  if (((*(int *)(this + 0x4c) == 2) && (param_1 != (BaseCursor *)0x0)) &&
     (bVar1 = Sexy::RtObject::IsA<PlantfoodCursor>((RtObject *)param_1), bVar1)) {
    clearBouncingArrows(this);
    addPlantfoodArrow(this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerTileIntro::setState(PowerTileIntro::State) */

void __thiscall PowerTileIntro::setState(PowerTileIntro *this,int param_2)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  AnimationMgr *pAVar1;
  Board *pBVar2;
  Board *pBVar3;
  undefined8 uVar4;
  UIWidget *pUVar5;
  long lVar6;
  float fVar7;
  RtMixedPtr aRStack_20 [8];
  RtId aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x4c) != param_2) {
    *(int *)(this + 0x4c) = param_2;
    *(undefined4 *)(this + 0x50) = 0;
    switch(param_2) {
    case 1:
      ToolPacketData::GetProps();
      this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58);
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_20);
      std::string::string((string *)aRStack_10,"addFirstPeashooter");
      TimeEvent::Create(aRStack_18,(string *)aRStack_10);
      std::string::~string((string *)aRStack_10);
      nop();
      Sexy::RtId::~RtId(aRStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_20);
      std::string::string((string *)aRStack_10,"addSecondPeashooter");
      TimeEvent::Create(aRStack_18,(string *)aRStack_10);
      std::string::~string((string *)aRStack_10);
      nop();
      Sexy::RtId::~RtId(aRStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      pAVar1 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      AnimationMgr::Clear(pAVar1);
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      FUN_04303b80(lVar6 + 0x10);
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      fVar7 = (float)FUN_04303b8c(*(undefined4 *)(lVar6 + 0x10));
      uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_18);
      AnimationMgr::Add((AnimationMgr *)(fVar7 + 1.25),uVar4,(string *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_18);
      AnimationMgr::Add((AnimationMgr *)(fVar7 + 1.75),uVar4,(string *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      break;
    case 2:
      std::string::string((string *)aRStack_10,"UIPlantfood");
      pUVar5 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)aRStack_10);
      UIWidget::SetVisible(pUVar5,true);
      std::string::~string((string *)aRStack_10);
      nop();
      Board::SetPlantfoodCount(*(Board **)(gLawnApp + 0x9f0),1);
      addPlantfoodArrow(this);
      pBVar2 = (Board *)ResilienceTutorialIntro::getBoard();
      FUN_05478178((string *)aRStack_10,L"[POWERTILE_TUTORIAL_1]",aRStack_18);
      Board::DisplayAdviceAgain(pBVar2,(string *)aRStack_10,10,0);
      FUN_05476c50((string *)aRStack_10);
      nop();
      showTools(this,false);
      break;
    case 3:
      pBVar2 = (Board *)ResilienceTutorialIntro::getBoard();
      Board::ClearAdviceImmediately(pBVar2);
      clearBouncingArrows(this);
      break;
    case 4:
      Board::SetPlantfoodCount(*(Board **)(gLawnApp + 0x9f0),1);
      pBVar2 = (Board *)ResilienceTutorialIntro::getBoard();
      pBVar3 = (Board *)ResilienceTutorialIntro::getBoard();
      Board::GetStage(pBVar3);
      StageModule::GetArmor2ZombieType();
      Board::AddZombieInRow(pBVar2,aRStack_10,0,0,0,1,1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      pBVar2 = (Board *)ResilienceTutorialIntro::getBoard();
      pBVar3 = (Board *)ResilienceTutorialIntro::getBoard();
      Board::GetStage(pBVar3);
      StageModule::GetArmor2ZombieType();
      Board::AddZombieInRow(pBVar2,aRStack_10,2,0,0,1,1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      pBVar2 = (Board *)ResilienceTutorialIntro::getBoard();
      FUN_05478178(aRStack_10,L"[POWERTILE_TUTORIAL_2]",aRStack_18);
      Board::DisplayAdviceAgain(pBVar2,aRStack_10,10,0);
      FUN_05476c50(aRStack_10);
      nop();
      break;
    case 5:
      pAVar1 = (AnimationMgr *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
      AnimationMgr::Clear(pAVar1);
      pBVar2 = (Board *)ResilienceTutorialIntro::getBoard();
      FUN_05478178(aRStack_10,L"[POWERTILE_TUTORIAL_3]",aRStack_18);
      Board::DisplayAdviceAgain(pBVar2,aRStack_10,0xc,0);
      FUN_05476c50(aRStack_10);
      nop();
      break;
    case 6:
      setupDaveFailed(this);
      break;
    case 7:
      std::string::string((string *)aRStack_10,"UIPlantfood");
      pUVar5 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)aRStack_10);
      UIWidget::SetVisible(pUVar5,false);
      std::string::~string((string *)aRStack_10);
      nop();
      lVar6 = ResilienceTutorialIntro::getBoard();
      FUN_04303b98(lVar6 + 0x887,0);
      StandardLevelIntro::startLevelIntro((StandardLevelIntro *)this,5,0);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PowerTileIntro::startLevelIntro(StandardLevelIntro::PanType, bool) */

void PowerTileIntro::startLevelIntro(PowerTileIntro *param_1,undefined8 param_2)

{
  char cVar1;
  Board *pBVar2;
  UIWidget *this;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0xc0))();
  if (cVar1 == '\0') {
    StandardLevelIntro::startLevelIntro((StandardLevelIntro *)param_1,param_2);
    return;
  }
  pBVar2 = (Board *)ResilienceTutorialIntro::getBoard();
  this = (UIWidget *)Board::GetSeedBank(pBVar2);
  UIWidget::SetVisible(this,false);
  showTools(param_1,false);
  pBVar2 = (Board *)ResilienceTutorialIntro::getBoard();
  Board::PutIntoTutorialMode(pBVar2);
  setState(param_1,0);
  return;
}


/* PowerTileIntro::onUpdate() */

void __thiscall PowerTileIntro::onUpdate(PowerTileIntro *this)

{
  bool bVar1;
  int iVar2;
  AnimationMgr *this_00;
  int iVar3;
  float fVar4;
  
  fVar4 = (float)PVZ_Dt();
  *(float *)(this + 0x50) = *(float *)(this + 0x50) + fVar4;
  iVar3 = *(int *)(this + 0x4c);
  do {
    switch(iVar3) {
    case 0:
      setState(this,1);
      iVar2 = *(int *)(this + 0x4c);
      break;
    case 1:
      if (*(float *)(this + 0x50) <= 2.0) goto switchD_0430598c_caseD_2;
      setState(this,2);
      iVar2 = *(int *)(this + 0x4c);
      break;
    default:
      goto switchD_0430598c_caseD_2;
    case 3:
      if (*(float *)(this + 0x50) <= 6.0) goto switchD_0430598c_caseD_2;
      setState(this,4);
      iVar2 = *(int *)(this + 0x4c);
      break;
    case 5:
      if (*(float *)(this + 0x50) <= 5.0) goto switchD_0430598c_caseD_2;
      setState(this,7);
      iVar2 = *(int *)(this + 0x4c);
    }
    bVar1 = iVar2 != iVar3;
    iVar3 = iVar2;
  } while (bVar1);
switchD_0430598c_caseD_2:
  this_00 = (AnimationMgr *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58))
  ;
  AnimationMgr::Update(this_00);
  return;
}


/* PowerTileIntro::onPlantFoodApplied(PlantGroup*) */

void PowerTileIntro::onPlantFoodApplied(PlantGroup *param_1)

{
  AnimationMgr *this;
  
  if (*(int *)(param_1 + 0x4c) != 2) {
    return;
  }
  this = (AnimationMgr *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x58))
  ;
  AnimationMgr::Clear(this);
  setState((PowerTileIntro *)param_1,3);
  return;
}


/* PowerTileIntro::onPlantDied(Plant*) */

void PowerTileIntro::onPlantDied(Plant *param_1)

{
  if (*(int *)(param_1 + 0x4c) != 4) {
    return;
  }
  setState((PowerTileIntro *)param_1,6);
  return;
}


/* PowerTileIntro::onZombieDied(Zombie*, DamageInfo const*) */

void PowerTileIntro::onZombieDied(Zombie *param_1,DamageInfo *param_2)

{
  AnimationMgr *this;
  
  if (*(int *)(param_1 + 0x4c) != 4) {
    return;
  }
  this = (AnimationMgr *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x58))
  ;
  AnimationMgr::Clear(this);
  setState((PowerTileIntro *)param_1,5);
  return;
}


/* PowerTileIntro::onNarrationFinished() */

void __thiscall PowerTileIntro::onNarrationFinished(PowerTileIntro *this)

{
  if (*(int *)(this + 0x4c) != 6) {
    return;
  }
  setState(this,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerTileIntro::registerForEvents() */

void __thiscall PowerTileIntro::registerForEvents(PowerTileIntro *this)

{
  undefined *puVar1;
  char cVar2;
  ProfileMgr *this_00;
  PlayerInfo *pPVar3;
  LevelModuleManager *pLVar4;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
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
  StandardLevelIntro::registerForEvents((StandardLevelIntro *)this);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  cVar2 = ProfileUtils::HasCompletedCurrentNormalLevel(pPVar3);
  if (cVar2 == '\0') {
    pLVar4 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,startIntro);
    Sexy::Delegate0::Delegate0<PowerTileIntro,void(PowerTileIntro::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnIntroStarted(pLVar4,aDStack_38);
    pLVar4 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onEndLevel);
    Sexy::Delegate0::Delegate0<PowerTileIntro,void(PowerTileIntro::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnLevelEnded(pLVar4,aDStack_38);
    pLVar4 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onUpdate);
    Sexy::Delegate0::Delegate0<PowerTileIntro,void(PowerTileIntro::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnUpdate(pLVar4,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onZombieDied);
    local_d0 = local_b0;
    uStack_c8 = uStack_a8;
    local_c0 = local_a0;
    MessageRouter::
    Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<PowerTileIntro,void(PowerTileIntro::*)(Zombie*,DamageInfo_const*)>>
              ((MessageRouter *)puVar1,Message::ZombieDied,&local_d0);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onCursorAdded);
    local_e0 = local_88;
    local_f0 = local_98;
    uStack_e8 = uStack_90;
    MessageRouter::
    Subscribe<BaseCursor*,Sexy::CBMemberTranslatorX<PowerTileIntro,void(PowerTileIntro::*)(BaseCursor*)>>
              ((MessageRouter *)puVar1,Message::CursorAdded,&local_f0);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onCursorDestroyed);
    local_f0 = local_80;
    uStack_e8 = uStack_78;
    local_e0 = local_70;
    MessageRouter::
    Subscribe<BaseCursor*,Sexy::CBMemberTranslatorX<PowerTileIntro,void(PowerTileIntro::*)(BaseCursor*)>>
              ((MessageRouter *)puVar1,Message::CursorDestroyed,&local_f0);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onPlantDied);
    local_110 = local_68;
    uStack_108 = uStack_60;
    local_100 = local_58;
    MessageRouter::
    Subscribe<Plant*,Sexy::CBMemberTranslatorX<PowerTileIntro,void(PowerTileIntro::*)(Plant*)>>
              ((MessageRouter *)puVar1,Message::PlantDied,&local_110);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onPlantFoodApplied);
    local_130 = local_50;
    uStack_128 = uStack_48;
    local_120 = local_40;
    MessageRouter::
    Subscribe<PlantGroup*,Sexy::CBMemberTranslatorX<PowerTileIntro,void(PowerTileIntro::*)(PlantGroup*)>>
              ((MessageRouter *)puVar1,Message::ToolAppliedPlantfood,&local_130);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

