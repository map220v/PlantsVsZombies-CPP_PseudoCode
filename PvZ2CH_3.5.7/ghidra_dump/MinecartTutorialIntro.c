// Class: MinecartTutorialIntro


/* MinecartTutorialIntro::onStartIntro() */

void __thiscall MinecartTutorialIntro::onStartIntro(MinecartTutorialIntro *this)

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
/* MinecartTutorialIntro::StaticClassInit() */

void MinecartTutorialIntro::StaticClassInit(void)

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
    std::string::string(asStack_10,"MinecartTutorialIntro");
    (*pcVar2)(plVar1,asStack_10,FUN_03edd8c8,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MinecartTutorialIntro::StaticGetClass() */

long * MinecartTutorialIntro::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MinecartTutorialIntro",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MinecartTutorialIntro::setupZombies() */

void MinecartTutorialIntro::setupZombies(void)

{
  Board *pBVar1;
  Board *this;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar1 = (Board *)ResilienceTutorialIntro::getBoard();
  this = (Board *)ResilienceTutorialIntro::getBoard();
  Board::GetStage(this);
  StageModule::GetBasicZombieType();
  Board::AddZombieInRow(pBVar1,aRStack_10,3,0,0,1,1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MinecartTutorialIntro::MinecartTutorialIntro() */

void __thiscall MinecartTutorialIntro::MinecartTutorialIntro(MinecartTutorialIntro *this)

{
  StandardLevelIntro::StandardLevelIntro((StandardLevelIntro *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06792c40;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x50));
  return;
}


/* MinecartTutorialIntro::StaticNew() */

MinecartTutorialIntro * MinecartTutorialIntro::StaticNew(void)

{
  MinecartTutorialIntro *this;
  
  this = ::operator_new(0x58);
  MinecartTutorialIntro(this);
  return this;
}


/* MinecartTutorialIntro::~MinecartTutorialIntro() */

void __thiscall MinecartTutorialIntro::~MinecartTutorialIntro(MinecartTutorialIntro *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06792c40;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50));
  StandardLevelIntro::~StandardLevelIntro((StandardLevelIntro *)this);
  return;
}


/* MinecartTutorialIntro::~MinecartTutorialIntro() */

void __thiscall MinecartTutorialIntro::~MinecartTutorialIntro(MinecartTutorialIntro *this)

{
  ~MinecartTutorialIntro(this);
  AK::FreeHook(this);
  return;
}


/* MinecartTutorialIntro::onEndLevel() */

void __thiscall MinecartTutorialIntro::onEndLevel(MinecartTutorialIntro *this)

{
  AnimationMgr *this_00;
  
  this_00 = (AnimationMgr *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50))
  ;
  AnimationMgr::Clear(this_00);
  return;
}


/* MinecartTutorialIntro::addToRenderQueue(RenderQueue*) */

void __thiscall
MinecartTutorialIntro::addToRenderQueue(MinecartTutorialIntro *this,RenderQueue *param_1)

{
  AnimationMgr *this_00;
  
  this_00 = (AnimationMgr *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50))
  ;
  AnimationMgr::AddToRenderQueue(this_00,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MinecartTutorialIntro::showTools(bool) */

void __thiscall MinecartTutorialIntro::showTools(MinecartTutorialIntro *this,bool param_1)

{
  bool bVar1;
  UIWidget *pUVar2;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  string *extraout_x1_02;
  string *extraout_x1_03;
  string *extraout_x1_04;
  RtWeakPtr aRStack_40 [8];
  RtWeakPtr aRStack_38 [8];
  RtWeakPtr aRStack_30 [8];
  RtWeakPtr aRStack_28 [8];
  RtWeakPtr aRStack_20 [8];
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIShovel");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_40);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    UIWidget::SetVisible(pUVar2,param_1);
  }
  std::string::string(asStack_10,"UIPlantfood");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1_00);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_38);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    UIWidget::SetVisible(pUVar2,param_1);
  }
  std::string::string(asStack_10,"UISunBank");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1_01);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_30);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    UIWidget::SetVisible(pUVar2,param_1);
  }
  std::string::string(asStack_10,"UICoinBank");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1_02);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_28);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    UIWidget::SetVisible(pUVar2,param_1);
  }
  std::string::string(asStack_10,"UIViewBoardOrZombies");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1_03);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_20);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    UIWidget::SetVisible(pUVar2,param_1);
  }
  std::string::string(asStack_10,"UIChangeSpeedButton");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1_04);
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
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MinecartTutorialIntro::initializeModule() */

void __thiscall MinecartTutorialIntro::initializeModule(MinecartTutorialIntro *this)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StandardLevelIntro::initializeModule((StandardLevelIntro *)this);
  *(undefined4 *)(this + 0x4c) = 0xffffffff;
  AnimationMgr::Create();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x50),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MinecartTutorialIntro::setState(MinecartTutorialIntro::State) */

void __thiscall MinecartTutorialIntro::setState(MinecartTutorialIntro *this,int param_2)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  Board *pBVar4;
  undefined8 uVar5;
  RtObject *this_01;
  ResourceInfo *pRVar6;
  string *psVar7;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  float *pfVar8;
  AnimationMgr *pAVar9;
  long lVar10;
  AnimationController *pAVar11;
  UIWidget *this_03;
  int extraout_w1;
  string *extraout_x1;
  code *pcVar12;
  float fVar13;
  float fVar14;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtId aRStack_38 [8];
  int local_30 [2];
  string asStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x4c) != param_2) {
    if (*(int *)(this + 0x4c) == 1) {
      pAVar9 = (AnimationMgr *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50));
      AnimationMgr::Clear(pAVar9);
      Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
      *(int *)(this + 0x4c) = param_2;
    }
    else {
      *(int *)(this + 0x4c) = param_2;
    }
    if (param_2 == 2) {
      setupZombies();
    }
    else if (param_2 == 3) {
      pAVar9 = (AnimationMgr *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50));
      AnimationMgr::Clear(pAVar9);
      StandardLevelIntro::startLevelIntro((StandardLevelIntro *)this,1,0);
      pBVar4 = (Board *)ResilienceTutorialIntro::getBoard();
      FUN_05478178(asStack_28,L"[MINECART_TUTORIAL_2]",(RtWeakPtr *)local_30);
      Board::DisplayAdviceAgain(pBVar4,asStack_28,9,0);
      FUN_05476c50(asStack_28);
      nop();
      std::string::string(asStack_28,"UIViewBoardOrZombies");
      UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_28,extraout_x1);
      std::string::~string(asStack_28);
      nop();
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)local_30);
      if (bVar1) {
        this_03 = (UIWidget *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
        UIWidget::SetVisible(this_03,true);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
    }
    else if (param_2 == 1) {
      Board::DestroyAllZombies(*(Board **)(gLawnApp + 0x9f0));
      Board::DestroyAllPlants();
      uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
      PVZDB::GetObjectIteratorForTable((Iterator *)asStack_28,uVar5,0x2f);
      while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)asStack_28), bVar1
            ) {
        Sexy::RtDbTable::Iterator::operator*((Iterator *)asStack_28);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_40,(RtWeakPtrBase *)local_30);
        Sexy::RtId::~RtId((RtId *)local_30);
        bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_40);
        if (bVar1) {
          this_01 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
          bVar1 = Sexy::RtObject::IsA<GridItemRailcart>(this_01);
          if (bVar1) {
            Sexy::RtDbTable::Iterator::operator*((Iterator *)asStack_28);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)local_30,(RtWeakPtrBase *)aRStack_38);
            pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_30);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
            Sexy::RtId::~RtId(aRStack_38);
            BoardEntity::CalcGridPosition();
            if (local_30[0] == 2) {
              pcVar12 = *(code **)(*(long *)pRVar6 + 0x1f0);
              Sexy::Point::Point((Point *)local_30,2,2);
              (*pcVar12)(pRVar6,(RtId *)local_30,1);
            }
          }
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
        Sexy::RtDbTable::Iterator::operator++((Iterator *)asStack_28,extraout_w1);
      }
      this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50);
      Sexy::RtDbTable::Iterator::~Iterator((Iterator *)asStack_28);
      psVar7 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      std::string::string(asStack_28,"peashooter");
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar7);
      std::string::~string(asStack_28);
      nop();
      uVar5 = ResilienceTutorialIntro::getBoard();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_28,(RtWeakPtrBase *)aRStack_38);
      this_02 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Board::AddPlant((Board *)0x0,uVar5,2,2,(Iterator *)asStack_28,1,1,0xffffffff,0,1,
                                   1,0,0,0,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
      pfVar8 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(this_02);
      fVar14 = *pfVar8;
      iVar2 = Plant::GetWidth();
      fVar14 = (float)FUN_03edcc80(fVar14 + -23.0 + (float)(iVar2 / 2));
      fVar13 = (float)FUN_03edcc80(pfVar8[1] - 70.0);
      Sexy::Point::Point((Point *)local_30,(int)fVar14,(int)fVar13);
      uVar3 = Board::MakeRenderOrder(900000,0,1);
      pAVar9 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      AnimationMgr::Clear(pAVar9);
      lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      FUN_03edca3c(lVar10 + 0x10);
      lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      fVar14 = (float)FUN_03edca48(*(undefined4 *)(lVar10 + 0x10));
      pAVar9 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      Sexy::Point::Point((Point *)asStack_28,(TPoint *)local_30);
      pAVar11 = (AnimationController *)FUN_03edd584((Iterator *)asStack_28,uVar3);
      AnimationMgr::Add(pAVar9,pAVar11,fVar14);
      pAVar9 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      FUN_05478178((Iterator *)asStack_28,L"[MINECART_TUTORIAL_1]",aRStack_40);
      pAVar11 = (AnimationController *)ShowAdvice::Create((Iterator *)asStack_28,8);
      AnimationMgr::Add(pAVar9,pAVar11,fVar14);
      FUN_05476c50((Iterator *)asStack_28);
      nop();
      showTools(this,false);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* MinecartTutorialIntro::startLevelIntro(StandardLevelIntro::PanType, bool) */

void MinecartTutorialIntro::startLevelIntro(MinecartTutorialIntro *param_1,undefined8 param_2)

{
  char cVar1;
  Board *this;
  UIWidget *this_00;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0xc0))();
  if (cVar1 == '\0') {
    StandardLevelIntro::startLevelIntro((StandardLevelIntro *)param_1,param_2);
    return;
  }
  this = (Board *)ResilienceTutorialIntro::getBoard();
  this_00 = (UIWidget *)Board::GetSeedBank(this);
  UIWidget::SetVisible(this_00,false);
  showTools(param_1,false);
  Board::PutIntoTutorialMode(*(Board **)(gLawnApp + 0x9f0));
  setState(param_1,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MinecartTutorialIntro::onUpdate() */

void __thiscall MinecartTutorialIntro::onUpdate(MinecartTutorialIntro *this)

{
  bool bVar1;
  AnimationMgr *this_00;
  undefined8 uVar2;
  ResourceInfo *this_01;
  int iVar3;
  int iVar4;
  undefined1 auVar5 [12];
  RtId aRStack_38 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = *(int *)(this + 0x4c);
  do {
    if (iVar4 == 0) {
      setState(this,1);
      iVar3 = *(int *)(this + 0x4c);
    }
    else {
      if (iVar4 != 2) break;
      uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
      PVZDB::GetObjectIteratorForTable(aIStack_28,uVar2,0x29);
      while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
        Sexy::RtDbTable::Iterator::operator*(aIStack_28);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)aRStack_38);
        this_01 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
        Sexy::RtId::~RtId(aRStack_38);
        auVar5 = std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                *)this_01);
        if (*auVar5._0_8_ <= 120.0) {
          setState(this,1);
          Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
          iVar3 = *(int *)(this + 0x4c);
          goto LAB_03ede0ac;
        }
        Sexy::RtDbTable::Iterator::operator++(aIStack_28,auVar5._8_4_);
      }
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      iVar3 = *(int *)(this + 0x4c);
    }
LAB_03ede0ac:
    bVar1 = iVar4 != iVar3;
    iVar4 = iVar3;
  } while (bVar1);
  this_00 = (AnimationMgr *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50))
  ;
  AnimationMgr::Update(this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MinecartTutorialIntro::onMinecartMoved(GridItemRailcart*) */

void MinecartTutorialIntro::onMinecartMoved(GridItemRailcart *param_1)

{
  if (*(int *)(param_1 + 0x4c) != 1) {
    return;
  }
  setState((MinecartTutorialIntro *)param_1,2);
  return;
}


/* MinecartTutorialIntro::onZombieDied(Zombie*, DamageInfo const*) */

void MinecartTutorialIntro::onZombieDied(Zombie *param_1,DamageInfo *param_2)

{
  if (*(int *)(param_1 + 0x4c) != 2) {
    return;
  }
  setState((MinecartTutorialIntro *)param_1,3);
  return;
}


/* MinecartTutorialIntro::onPlantDied(Plant*) */

void MinecartTutorialIntro::onPlantDied(Plant *param_1)

{
  if (*(int *)(param_1 + 0x4c) != 2) {
    return;
  }
  setState((MinecartTutorialIntro *)param_1,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MinecartTutorialIntro::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall
MinecartTutorialIntro::AddResourceRequirements(MinecartTutorialIntro *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModule::AddResourceRequirements((LevelModule *)this,param_1);
  std::string::string(asStack_10,"PlantPeashooter");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PlantPeashooterAudio");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MinecartTutorialIntro::registerForEvents() */

void __thiscall MinecartTutorialIntro::registerForEvents(MinecartTutorialIntro *this)

{
  undefined *puVar1;
  char cVar2;
  ProfileMgr *this_00;
  PlayerInfo *pPVar3;
  LevelModuleManager *pLVar4;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  CBMemberTranslatorX aCStack_98 [24];
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
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onMinecartMoved);
  local_c0 = local_80;
  uStack_b8 = uStack_78;
  local_b0 = local_70;
  MessageRouter::
  Subscribe<GridItemRailcart*,Sexy::CBMemberTranslatorX<MinecartTutorialIntro,void(MinecartTutorialIntro::*)(GridItemRailcart*)>>
            ((MessageRouter *)puVar1,Message::RailcartMoved,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantDied);
  local_d0 = local_58;
  local_e0 = local_68;
  uStack_d8 = uStack_60;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<MinecartTutorialIntro,void(MinecartTutorialIntro::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantDied,&local_e0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDied);
  local_100 = local_50;
  uStack_f8 = uStack_48;
  local_f0 = local_40;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<MinecartTutorialIntro,void(MinecartTutorialIntro::*)(Zombie*,DamageInfo_const*)>>
            ((MessageRouter *)puVar1,Message::ZombieDied,&local_100);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  cVar2 = ProfileUtils::HasCompletedCurrentNormalLevel(pPVar3);
  if (cVar2 == '\0') {
    pLVar4 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onStartIntro);
    Sexy::Delegate0::Delegate0<MinecartTutorialIntro,void(MinecartTutorialIntro::*)()>
              (aDStack_38,aCStack_98);
    LevelModuleManager::RegisterOnIntroStarted(pLVar4,aDStack_38);
    pLVar4 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onEndLevel);
    Sexy::Delegate0::Delegate0<MinecartTutorialIntro,void(MinecartTutorialIntro::*)()>
              (aDStack_38,aCStack_98);
    LevelModuleManager::RegisterOnLevelEnded(pLVar4,aDStack_38);
    pLVar4 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onUpdate);
    Sexy::Delegate0::Delegate0<MinecartTutorialIntro,void(MinecartTutorialIntro::*)()>
              (aDStack_38,aCStack_98);
    LevelModuleManager::RegisterOnUpdate(pLVar4,aDStack_38);
    pLVar4 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,addToRenderQueue);
    Sexy::Delegate1<RenderQueue*>::
    Delegate1<MinecartTutorialIntro,void(MinecartTutorialIntro::*)(RenderQueue*)>
              ((Delegate1<RenderQueue*> *)aDStack_38,aCStack_98);
    LevelModuleManager::RegisterAddToRenderQueue(pLVar4,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

