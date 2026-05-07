// Class: MagnifyingGrassTutorialIntro


/* MagnifyingGrassTutorialIntro::initializeModule() */

void __thiscall MagnifyingGrassTutorialIntro::initializeModule(MagnifyingGrassTutorialIntro *this)

{
  StandardLevelIntro::initializeModule((StandardLevelIntro *)this);
  *(undefined4 *)(this + 0x4c) = 0xffffffff;
  *(undefined4 *)(this + 0x50) = 0;
  return;
}


/* MagnifyingGrassTutorialIntro::startIntro() */

void __thiscall MagnifyingGrassTutorialIntro::startIntro(MagnifyingGrassTutorialIntro *this)

{
  long lVar1;
  Board *this_00;
  
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  lVar1 = Board::GetBoardPanLocations(this_00);
  (**(code **)(*(long *)this_00 + 0x1a8))(this_00,*(undefined4 *)(lVar1 + 4),0);
  StandardLevelIntro::startStandardIntro((StandardLevelIntro *)this,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagnifyingGrassTutorialIntro::StaticClassInit() */

void MagnifyingGrassTutorialIntro::StaticClassInit(void)

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
    std::string::string(asStack_10,"MagnifyingGrassTutorialIntro");
    (*pcVar2)(plVar1,asStack_10,FUN_03e3fd5c,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MagnifyingGrassTutorialIntro::StaticGetClass() */

long * MagnifyingGrassTutorialIntro::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MagnifyingGrassTutorialIntro",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagnifyingGrassTutorialIntro::showShovel(bool) */

void __thiscall
MagnifyingGrassTutorialIntro::showShovel(MagnifyingGrassTutorialIntro *this,bool param_1)

{
  bool bVar1;
  UIWidget *this_00;
  string *extraout_x1;
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIShovel");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  if (bVar1) {
    this_00 = (UIWidget *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    UIWidget::SetVisible(this_00,param_1);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagnifyingGrassTutorialIntro::showSunBank(bool) */

void __thiscall
MagnifyingGrassTutorialIntro::showSunBank(MagnifyingGrassTutorialIntro *this,bool param_1)

{
  bool bVar1;
  UIWidget *this_00;
  string *extraout_x1;
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UISunBank");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  if (bVar1) {
    this_00 = (UIWidget *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    UIWidget::SetVisible(this_00,param_1);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MagnifyingGrassTutorialIntro::showTools(bool) */

void __thiscall
MagnifyingGrassTutorialIntro::showTools(MagnifyingGrassTutorialIntro *this,bool param_1)

{
  showShovel(this,param_1);
  showSunBank(this,param_1);
  return;
}


/* MagnifyingGrassTutorialIntro::MagnifyingGrassTutorialIntro() */

void __thiscall
MagnifyingGrassTutorialIntro::MagnifyingGrassTutorialIntro(MagnifyingGrassTutorialIntro *this)

{
  StandardLevelIntro::StandardLevelIntro((StandardLevelIntro *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0678ace0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  return;
}


/* MagnifyingGrassTutorialIntro::StaticNew() */

MagnifyingGrassTutorialIntro * MagnifyingGrassTutorialIntro::StaticNew(void)

{
  MagnifyingGrassTutorialIntro *this;
  
  this = ::operator_new(0x70);
  MagnifyingGrassTutorialIntro(this);
  return this;
}


/* MagnifyingGrassTutorialIntro::clearBouncingArrows() */

void __thiscall
MagnifyingGrassTutorialIntro::clearBouncingArrows(MagnifyingGrassTutorialIntro *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0x58);
    uVar2 = FUN_03e3e9cc(uVar4,*(undefined8 *)(this + 0x60));
    if (uVar2 <= uVar3) break;
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03e3e9d8(uVar4,uVar3);
    plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    (**(code **)(*plVar1 + 0x48))();
    uVar3 = uVar3 + 1;
  }
  std::vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>::
  clear((vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>
         *)(this + 0x58));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagnifyingGrassTutorialIntro::setupDaveFailed() */

void __thiscall MagnifyingGrassTutorialIntro::setupDaveFailed(MagnifyingGrassTutorialIntro *this)

{
  CrazyNPCManager *pCVar1;
  UIWidget *this_00;
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
  pCVar1 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
  std::string::string(asStack_60,"FUTURE_MAGNIFYING_GRASS_FAILURE");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNarrationFinished);
  Sexy::Delegate0::Delegate0<MagnifyingGrassTutorialIntro,void(MagnifyingGrassTutorialIntro::*)()>
            (aDStack_38,asStack_50);
  std::string::string(asStack_58,"");
  CrazyNPCManager::StartNarrativeID(pCVar1,asStack_60,aDStack_38,asStack_58);
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
  Board::DestroyAllZombies(*(Board **)(gLawnApp + 0x9f0));
  Board::ClearCursors(*(Board **)(gLawnApp + 0x9f0));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MagnifyingGrassTutorialIntro::~MagnifyingGrassTutorialIntro() */

void __thiscall
MagnifyingGrassTutorialIntro::~MagnifyingGrassTutorialIntro(MagnifyingGrassTutorialIntro *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0678ace0;
  std::vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>::
  ~vector((vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>
           *)(this + 0x58));
  StandardLevelIntro::~StandardLevelIntro((StandardLevelIntro *)this);
  return;
}


/* MagnifyingGrassTutorialIntro::~MagnifyingGrassTutorialIntro() */

void __thiscall
MagnifyingGrassTutorialIntro::~MagnifyingGrassTutorialIntro(MagnifyingGrassTutorialIntro *this)

{
  ~MagnifyingGrassTutorialIntro(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagnifyingGrassTutorialIntro::placeOrGetMagnifyingGrass() */

void MagnifyingGrassTutorialIntro::placeOrGetMagnifyingGrass(void)

{
  int iVar1;
  string *psVar2;
  long lVar3;
  Effect_PopAnim *this;
  PopAnim *pPVar4;
  Board *this_00;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_18,"magnifyinggrass");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
  std::string::~string(asStack_18);
  nop();
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_18,"");
  lVar3 = Board::GetPlantAt(this_00,1,2,asStack_18);
  std::string::~string(asStack_18);
  nop();
  if (lVar3 == 0) {
    uVar5 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_18,(RtWeakPtrBase *)aRStack_28);
    lVar3 = Board::AddPlant((Board *)0x0,uVar5,1,2,asStack_18,1,1,0xffffffff,0,1,1,0,0,0,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string(asStack_20,"POPANIM_EFFECTS_MOWER_SPAWN");
    GetPAMByName(asStack_20);
    pPVar4 = (PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    Effect_PopAnim::CreatePopAnimRig(this,pPVar4,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    std::string::~string(asStack_20);
    nop();
    fVar6 = (float)FUN_03e3e9e0(*(undefined4 *)(lVar3 + 0x18),*(undefined4 *)(lVar3 + 0x1c),
                                *(undefined4 *)(lVar3 + 0x20));
    fVar7 = *(float *)(lVar3 + 0x1c);
    FUN_03e3e9e0(*(undefined4 *)(lVar3 + 0x18),fVar7,*(undefined4 *)(lVar3 + 0x20));
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,fVar6 - 90.0,fVar7 - 110.0,0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)asStack_18,-1);
    iVar1 = Board::MakeRenderOrder(0x64d48,*(undefined4 *)(lVar3 + 0x110),0);
    FUN_03e3e9bc(this + 0x1c,iVar1 + 1);
    std::string::string(asStack_18,"animation");
    Effect_PopAnim::PlaySingleAnimation(this,asStack_18,0);
    std::string::~string(asStack_18);
    nop();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagnifyingGrassTutorialIntro::setState(MagnifyingGrassTutorialIntro::State) */

void __thiscall
MagnifyingGrassTutorialIntro::setState(MagnifyingGrassTutorialIntro *this,int param_2)

{
  UIWidget *this_00;
  PlantMagnifyingGrass *this_01;
  string *psVar1;
  PlantMagnifyingGrass *this_02;
  Board *pBVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  string asStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x4c) != param_2) {
    *(int *)(this + 0x4c) = param_2;
    *(undefined4 *)(this + 0x50) = 0;
    Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
    switch(*(undefined4 *)(this + 0x4c)) {
    case 0:
      placeOrGetMagnifyingGrass();
      nop();
      PlantMagnifyingGrass::SetTouchEnabled(this_02,false);
      showTools(this,false);
      break;
    case 2:
      placeOrGetMagnifyingGrass();
      nop();
      PlantMagnifyingGrass::SetTouchEnabled(this_01,true);
      showSunBank(this,true);
      Board::SetSunMoney(*(Board **)(gLawnApp + 0x9f0),100);
      pBVar2 = *(Board **)(gLawnApp + 0x9f0);
      FUN_05478178((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10,L"[ADVICE_USE_MAGNIFYING_GRASS]",
                   aRStack_18);
      Board::DisplayAdviceAgain(pBVar2,(RtWeakPtr<Sexy::ResourceInfo> *)asStack_10,10,0);
      FUN_05476c50((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      nop();
      pBVar2 = *(Board **)(gLawnApp + 0x9f0);
      psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
      std::string::string(asStack_20,"future_armor1");
      ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar1);
      Board::AddZombieInRow(pBVar2,aRStack_18,2,0,0,1,1);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)asStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      std::string::~string(asStack_20);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      break;
    case 3:
      pBVar2 = *(Board **)(gLawnApp + 0x9f0);
      FUN_05478178(asStack_10,L"[ADVICE_MAGNIFYING_GRASS_SUN]",aRStack_18);
      Board::DisplayAdviceAgain(pBVar2,asStack_10,0xc,0);
      FUN_05476c50(asStack_10);
      nop();
      break;
    case 4:
      setupDaveFailed(this);
      break;
    case 5:
      std::string::string(asStack_10,"UIPlantfood");
      this_00 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
      UIWidget::SetVisible(this_00,false);
      std::string::~string(asStack_10);
      nop();
      StandardLevelIntro::startLevelIntro((StandardLevelIntro *)this,1,0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MagnifyingGrassTutorialIntro::startLevelIntro(StandardLevelIntro::PanType, bool) */

void MagnifyingGrassTutorialIntro::startLevelIntro
               (MagnifyingGrassTutorialIntro *param_1,undefined8 param_2)

{
  char cVar1;
  UIWidget *this;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0xc0))();
  if (cVar1 == '\0') {
    StandardLevelIntro::startLevelIntro((StandardLevelIntro *)param_1,param_2);
    return;
  }
  this = (UIWidget *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  UIWidget::SetVisible(this,false);
  showTools(param_1,false);
  Board::PutIntoTutorialMode(*(Board **)(gLawnApp + 0x9f0));
  setState(param_1,0);
  return;
}


/* MagnifyingGrassTutorialIntro::onNarrationFinished() */

void __thiscall
MagnifyingGrassTutorialIntro::onNarrationFinished(MagnifyingGrassTutorialIntro *this)

{
  if (*(int *)(this + 0x4c) != 4) {
    return;
  }
  setState(this,0);
  return;
}


/* MagnifyingGrassTutorialIntro::onUpdate() */

void __thiscall MagnifyingGrassTutorialIntro::onUpdate(MagnifyingGrassTutorialIntro *this)

{
  int iVar1;
  float fVar2;
  
  fVar2 = (float)PVZ_Dt();
  iVar1 = *(int *)(this + 0x4c);
  fVar2 = fVar2 + *(float *)(this + 0x50);
  *(float *)(this + 0x50) = fVar2;
  if (iVar1 == 1) {
    if (2.0 < fVar2) {
      setState(this,2);
      return;
    }
  }
  else if (iVar1 == 3) {
    if (5.0 < fVar2) {
      setState(this,5);
      return;
    }
  }
  else if (iVar1 == 0) {
    setState(this,1);
    return;
  }
  return;
}


/* MagnifyingGrassTutorialIntro::onPlantDied(Plant*) */

void MagnifyingGrassTutorialIntro::onPlantDied(Plant *param_1)

{
  if (*(int *)(param_1 + 0x4c) != 2) {
    return;
  }
  setState((MagnifyingGrassTutorialIntro *)param_1,4);
  return;
}


/* MagnifyingGrassTutorialIntro::onZombieDied(Zombie*, DamageInfo const*) */

void MagnifyingGrassTutorialIntro::onZombieDied(Zombie *param_1,DamageInfo *param_2)

{
  if (*(int *)(param_1 + 0x4c) != 2) {
    return;
  }
  setState((MagnifyingGrassTutorialIntro *)param_1,3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagnifyingGrassTutorialIntro::addBouncingArrow(Sexy::SexyVector2 const&) */

void __thiscall
MagnifyingGrassTutorialIntro::addBouncingArrow
          (MagnifyingGrassTutorialIntro *this,SexyVector2 *param_1)

{
  Effect_BouncingArrow *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = StandaloneEffect::CreateEffect<Effect_BouncingArrow>();
  CachedResourcePtr::operator_cast_to_RtWeakPtr((CachedResourcePtr *)&DAT_06addbf8);
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
             *)(this + 0x58),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagnifyingGrassTutorialIntro::addArrowToPlant(Plant*) */

void __thiscall
MagnifyingGrassTutorialIntro::addArrowToPlant(MagnifyingGrassTutorialIntro *this,Plant *param_1)

{
  int iVar1;
  float *pfVar2;
  StandaloneEffect *this_00;
  float fVar3;
  float fVar4;
  FastCurve aFStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StandaloneEffect *)0x0;
  if (param_1 != (Plant *)0x0) {
    pfVar2 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)param_1);
    fVar4 = *pfVar2;
    iVar1 = Plant::GetWidth();
    fVar4 = (float)FUN_03e3eb8c(fVar4 + -25.0 + (float)(iVar1 / 2));
    fVar3 = (float)FUN_03e3eb8c(pfVar2[1] - 70.0);
    Sexy::FastCurve::SetOutRange(aFStack_10,fVar4,fVar3);
    this_00 = (StandaloneEffect *)addBouncingArrow(this,(SexyVector2 *)aFStack_10);
    StandaloneEffect::SetIsScreenSpaceEffect(this_00,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagnifyingGrassTutorialIntro::registerForEvents() */

void __thiscall MagnifyingGrassTutorialIntro::registerForEvents(MagnifyingGrassTutorialIntro *this)

{
  undefined *puVar1;
  char cVar2;
  ProfileMgr *this_00;
  PlayerInfo *pPVar3;
  LevelModuleManager *pLVar4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
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
    Sexy::Delegate0::Delegate0<MagnifyingGrassTutorialIntro,void(MagnifyingGrassTutorialIntro::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnIntroStarted(pLVar4,aDStack_38);
    pLVar4 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onUpdate);
    Sexy::Delegate0::Delegate0<MagnifyingGrassTutorialIntro,void(MagnifyingGrassTutorialIntro::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnUpdate(pLVar4,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onPlantDied);
    local_80 = local_58;
    local_90 = local_68;
    uStack_88 = uStack_60;
    MessageRouter::
    Subscribe<Plant*,Sexy::CBMemberTranslatorX<MagnifyingGrassTutorialIntro,void(MagnifyingGrassTutorialIntro::*)(Plant*)>>
              ((MessageRouter *)puVar1,Message::PlantDied,&local_90);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onZombieDied);
    local_b0 = local_50;
    uStack_a8 = uStack_48;
    local_a0 = local_40;
    MessageRouter::
    Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<MagnifyingGrassTutorialIntro,void(MagnifyingGrassTutorialIntro::*)(Zombie*,DamageInfo_const*)>>
              ((MessageRouter *)puVar1,Message::ZombieDied,&local_b0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

