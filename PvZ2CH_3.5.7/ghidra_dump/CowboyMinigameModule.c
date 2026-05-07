// Class: CowboyMinigameModule


/* CowboyMinigameModule::checkWinCondition() */

bool __thiscall CowboyMinigameModule::checkWinCondition(CowboyMinigameModule *this)

{
  return *(int *)(this + 0x1c) == 0xd;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CowboyMinigameModule::StaticClassInit() */

void CowboyMinigameModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"CowboyMinigameModule");
    (*pcVar2)(plVar1,asStack_10,FUN_03c7eae8,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CowboyMinigameModule::StaticGetClass() */

long * CowboyMinigameModule::StaticGetClass(void)

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
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"CowboyMinigameModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CowboyMinigameModule::setPlayingUIState(bool) */

void __thiscall CowboyMinigameModule::setPlayingUIState(CowboyMinigameModule *this,bool param_1)

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
  *(bool *)(*(long *)(gLawnApp + 0x9f0) + 0x973) = param_1;
  std::string::string(asStack_10,"UIPlantfood");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_20);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    UIWidget::SetClickable(pUVar2,param_1);
  }
  std::string::string(asStack_10,"UIPowerupHolder");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1_00);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    UIWidget::SetVisible(pUVar2,false);
  }
  if (*(long *)(gLawnApp + 0x9f0) != 0) {
    FUN_03c7c338(*(long *)(gLawnApp + 0x9f0) + 0x888,param_1);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CowboyMinigameModule::showTools(bool) */

void __thiscall CowboyMinigameModule::showTools(CowboyMinigameModule *this,bool param_1)

{
  bool bVar1;
  UIWidget *pUVar2;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  string *extraout_x1_02;
  string *extraout_x1_03;
  string *extraout_x1_04;
  string *extraout_x1_05;
  RtWeakPtr aRStack_48 [8];
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
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_48);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
    UIWidget::SetVisible(pUVar2,param_1);
  }
  std::string::string(asStack_10,"UISunBank");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1_00);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_40);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    UIWidget::SetVisible(pUVar2,param_1);
  }
  std::string::string(asStack_10,"UIPauseButton");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1_01);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_38);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    UIWidget::SetVisible(pUVar2,param_1);
  }
  std::string::string(asStack_10,"UICoinBank");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1_02);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_30);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    UIWidget::SetVisible(pUVar2,param_1);
  }
  std::string::string(asStack_10,"UIViewBoardOrZombies");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1_03);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_28);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    UIWidget::SetVisible(pUVar2,param_1);
  }
  std::string::string(asStack_10,"UIPlantfood");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1_04);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_20);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    UIWidget::SetVisible(pUVar2,param_1);
  }
  std::string::string(asStack_10,"UIChangeSpeedButton");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1_05);
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
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CowboyMinigameModule::onEndLevel() */

void __thiscall CowboyMinigameModule::onEndLevel(CowboyMinigameModule *this)

{
  AnimationMgr *this_00;
  
  this_00 = (AnimationMgr *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20))
  ;
  AnimationMgr::Clear(this_00);
  return;
}


/* CowboyMinigameModule::addToRenderQueue(RenderQueue*) */

void __thiscall
CowboyMinigameModule::addToRenderQueue(CowboyMinigameModule *this,RenderQueue *param_1)

{
  AnimationMgr *this_00;
  
  this_00 = (AnimationMgr *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20))
  ;
  AnimationMgr::AddToRenderQueue(this_00,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CowboyMinigameModule::introduceDave() */

void __thiscall CowboyMinigameModule::introduceDave(CowboyMinigameModule *this)

{
  CrazyNPCManager *pCVar1;
  string asStack_60 [8];
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
  std::string::string(asStack_60,"4100");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNarrationFinished);
  Sexy::Delegate0::Delegate0<CowboyMinigameModule,void(CowboyMinigameModule::*)()>
            (aDStack_38,aCStack_50);
  std::string::string(asStack_58,"");
  CrazyNPCManager::StartNarrativeID(pCVar1,asStack_60,aDStack_38,asStack_58);
  std::string::~string(asStack_58);
  nop();
  std::string::~string(asStack_60);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CowboyMinigameModule::setupDaveProlog() */

void __thiscall CowboyMinigameModule::setupDaveProlog(CowboyMinigameModule *this)

{
  CrazyNPCManager *pCVar1;
  string asStack_60 [8];
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  pCVar1 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
  std::string::string(asStack_60,"4100");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNarrationFinished);
  Sexy::Delegate0::Delegate0<CowboyMinigameModule,void(CowboyMinigameModule::*)()>
            (aDStack_38,aCStack_50);
  std::string::string(asStack_58,"");
  CrazyNPCManager::StartNarrativeID(pCVar1,asStack_60,aDStack_38,asStack_58);
  std::string::~string(asStack_58);
  nop();
  std::string::~string(asStack_60);
  nop();
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CowboyMinigameModule::CowboyMinigameModule() */

void __thiscall CowboyMinigameModule::CowboyMinigameModule(CowboyMinigameModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0675a480;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  return;
}


/* CowboyMinigameModule::StaticNew() */

CowboyMinigameModule * CowboyMinigameModule::StaticNew(void)

{
  CowboyMinigameModule *this;
  
  this = ::operator_new(0x48);
  CowboyMinigameModule(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CowboyMinigameModule::setZombiesIdle(bool) */

void __thiscall CowboyMinigameModule::setZombiesIdle(CowboyMinigameModule *this,bool param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long *extraout_x0;
  long *extraout_x0_00;
  int extraout_w1;
  int extraout_w1_00;
  int iVar4;
  int extraout_w1_01;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x29);
  if (param_1) {
    while (bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar2) {
      Sexy::RtDbTable::Iterator::operator*(aIStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
      Sexy::RtId::~RtId(aRStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      nop();
      cVar1 = (**(code **)(*extraout_x0_00 + 0x328))();
      if (cVar1 == '\0') {
        (**(code **)(*extraout_x0_00 + 600))(extraout_x0_00);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38)
        ;
        iVar4 = extraout_w1_00;
      }
      else {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38)
        ;
        iVar4 = extraout_w1_01;
      }
      Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar4);
    }
  }
  else {
    while (bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar2) {
      Sexy::RtDbTable::Iterator::operator*(aIStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
      Sexy::RtId::~RtId(aRStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      nop();
      cVar1 = (**(code **)(*extraout_x0 + 0x328))();
      if (cVar1 == '\0') {
        (**(code **)(*extraout_x0 + 0x260))(extraout_x0);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
    }
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CowboyMinigameModule::moveZombies(float) */

void CowboyMinigameModule::moveZombies(float param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  int extraout_w1;
  int iVar5;
  int extraout_w1_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  float local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x29);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_40,(RtWeakPtrBase *)&local_38);
    Sexy::RtId::~RtId((RtId *)&local_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
    nop();
    cVar2 = (**(code **)(*(long *)this + 0x328))();
    if (cVar2 == '\0') {
      puVar4 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(this);
      local_38 = (float)*puVar4;
      local_30 = *(undefined4 *)(puVar4 + 1);
      _local_38 = CONCAT44((int)((ulong)*puVar4 >> 0x20),param_1 + local_38);
      (**(code **)(*(long *)this + 0x78))(this,(RtId *)&local_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      iVar5 = extraout_w1;
    }
    else {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      iVar5 = extraout_w1_00;
    }
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar5);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CowboyMinigameModule::animateZombiePreview(CowboyMinigameModule::ZombiePanType) */

void __thiscall CowboyMinigameModule::animateZombiePreview(CowboyMinigameModule *this,int param_2)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  UIWidget *this_01;
  long lVar1;
  AnimationController *pAVar2;
  AnimationMgr *pAVar3;
  AnimationController *pAVar4;
  float fVar5;
  float local_2c;
  undefined4 local_28 [2];
  undefined4 local_20 [2];
  undefined4 local_18 [2];
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)local_10,"UIViewBoardOrZombies");
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20);
  this_01 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)local_10);
  UIWidget::SetClickable(this_01,false);
  std::string::~string((string *)local_10);
  nop();
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  fVar5 = (float)FUN_03c7c328(*(undefined4 *)(lVar1 + 0x10));
  if (param_2 == 0) {
    StandardLevelIntro::GetPanLocations(5,local_28,local_20);
    pAVar2 = (AnimationController *)MoveBoard::Create(0x40200000,local_28[0],local_20[0],0,0,4);
    StandardLevelIntro::GetPanLocations(4,(RtId *)local_18,(string *)local_10);
    pAVar4 = (AnimationController *)MoveBoard::Create(0x40200000,local_18[0],local_10[0],0,0,4);
    pAVar3 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    AnimationMgr::Add(pAVar3,pAVar2,fVar5,&local_2c);
    pAVar3 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    AnimationMgr::Add(pAVar3,pAVar4,local_2c,&local_2c);
  }
  else if (param_2 == 1) {
    StandardLevelIntro::GetPanLocations(5,(RtId *)local_18,(string *)local_10);
    pAVar2 = (AnimationController *)MoveBoard::Create(0x40200000,local_18[0],local_10[0],0,0,4);
    pAVar3 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    AnimationMgr::Add(pAVar3,pAVar2,fVar5,&local_2c);
  }
  else {
    StandardLevelIntro::GetPanLocations(4,(RtId *)local_18,(string *)local_10);
    pAVar2 = (AnimationController *)MoveBoard::Create(0x40200000,local_18[0],local_10[0],0,0,4);
    pAVar3 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    AnimationMgr::Add(pAVar3,pAVar2,fVar5 + 0.2,&local_2c);
  }
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)local_20);
  std::string::string((string *)local_10,"onViewZombiesComplete");
  pAVar2 = (AnimationController *)TimeEvent::Create((RtId *)local_18,(string *)local_10);
  std::string::~string((string *)local_10);
  nop();
  Sexy::RtId::~RtId((RtId *)local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
  pAVar3 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  AnimationMgr::Add(pAVar3,pAVar2,local_2c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CowboyMinigameModule::setState(CowboyMinigameModule::State) */

void __thiscall CowboyMinigameModule::setState(CowboyMinigameModule *this,int param_2)

{
  byte *pbVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  UIWidget *pUVar5;
  UINewPVPTopZombieQueue *pUVar6;
  undefined8 uVar7;
  ResilienceTutorialIntroProperties *pRVar8;
  AnimationController *pAVar9;
  long lVar10;
  AnimationMgr *pAVar11;
  WaveManager *pWVar12;
  ConveyorSeedBank *this_00;
  ConveyorSeedBank *this_01;
  SharkMinion *this_02;
  FishingEnergyBar *this_03;
  ConveyorSeedBank *this_04;
  ConveyorSeedBank *this_05;
  SharkMinion *this_06;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar13;
  Effect_ZombieGate *pEVar14;
  ProfileMgr *this_07;
  PlayerInfo *pPVar15;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  float fVar16;
  undefined4 uVar17;
  byte local_48 [8];
  RtWeakPtr aRStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  string asStack_28 [32];
  long local_8;
  
  iVar4 = *(int *)(this + 0x1c);
  local_8 = ___stack_chk_guard;
  if (iVar4 != param_2) {
    if ((iVar4 == 4) || (iVar4 == 0xb)) {
      setPlayingUIState(this,false);
    }
    *(int *)(this + 0x1c) = param_2;
    switch(param_2) {
    case 1:
      pRVar8 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
      if (pRVar8[0x40] != (ResilienceTutorialIntroProperties)0x0) {
        this_07 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar15 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_07);
        cVar2 = ProfileUtils::HasCompletedCurrentNormalLevel(pPVar15);
        if (cVar2 == '\0') {
          setupDaveProlog(this);
        }
      }
      Board::PlaceLawnItems();
      showTools(this,false);
      pUVar5 = (UIWidget *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
      UIWidget::SetVisible(pUVar5,false);
      break;
    case 4:
      std::string::string(asStack_28,"UIViewBoardOrZombies");
      pUVar5 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_28);
      UIWidget::SetVisible(pUVar5,true);
      std::string::~string(asStack_28);
      nop();
      pUVar5 = (UIWidget *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
      UIWidget::SetVisible(pUVar5,true);
      Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
      nop();
      FishingEnergyBar::onGameUnpaused(this_03);
      Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
      nop();
      ConveyorSeedBank::PickAndAddSeedFromSeedPool(this_04);
      Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
      nop();
      fVar16 = (float)PVZ_EOT();
      ConveyorSeedBank::SetSeedPickTimer(this_05,fVar16);
      pWVar12 = (WaveManager *)Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
      if (pWVar12 != (WaveManager *)0x0) {
        WaveManager::SetForceSpawnMode(SUB81(pWVar12,0));
        WaveManager::ForceSpawnWave(pWVar12);
      }
      setZombiesIdle(this,true);
      moveZombies(30.0);
      animateZombiePreview(this,0);
      uVar7 = ShowAdvice::Create();
      pRVar8 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
      Sexy::UTF8StringToWString((Sexy *)(pRVar8 + 0x48),extraout_x1_00);
      pAVar9 = (AnimationController *)ShowAdvice::Init(uVar7,asStack_28,8);
      FUN_05476c50(asStack_28);
      lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
      fVar16 = (float)FUN_03c7c328(*(undefined4 *)(lVar10 + 0x10));
      pAVar11 = (AnimationMgr *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
      AnimationMgr::Add(pAVar11,pAVar9,fVar16 + 0.5);
      showTools(this,true);
      std::string::string(asStack_28,"UISunBank");
      UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_28,extraout_x1_01);
      std::string::~string(asStack_28);
      nop();
      bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_40);
      if (bVar3) {
        pUVar5 = (UIWidget *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
        UIWidget::SetVisible(pUVar5,false);
      }
      uVar7 = Sexy::LazySingleton<PVZDB>::GetInstance();
      PVZDB::GetObjectIteratorForTable(asStack_28,uVar7,0x29);
      while (bVar3 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)asStack_28), bVar3
            ) {
        Sexy::RtDbTable::Iterator::operator*((Iterator *)asStack_28);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
        Sexy::RtId::~RtId(aRStack_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
        nop();
        iVar4 = SharkMinion::getRow(this_06);
        pRVar13 = (RtWeakPtr<Sexy::ResourceInfo> *)
                  FUN_03c7c358(*(undefined8 *)(this + 0x28),(long)iVar4);
        pEVar14 = (Effect_ZombieGate *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar13);
        Effect_ZombieGate::SetGateVisible(pEVar14,false);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
        Sexy::RtDbTable::Iterator::operator++((Iterator *)asStack_28,extraout_w1_01);
      }
      Sexy::RtDbTable::Iterator::~Iterator((Iterator *)asStack_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
      break;
    case 5:
      uVar17 = PVZ_T();
      *(undefined4 *)(this + 0x40) = uVar17;
      break;
    case 6:
      std::string::string(asStack_28,"UIViewBoardOrZombies");
      pUVar5 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_28);
      UIWidget::SetVisible(pUVar5,true);
      std::string::~string(asStack_28);
      nop();
      uVar7 = ShowAdvice::Create();
      pRVar8 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
      Sexy::UTF8StringToWString((Sexy *)(pRVar8 + 0x48),extraout_x1);
      pAVar9 = (AnimationController *)ShowAdvice::Init(uVar7,asStack_28,8);
      FUN_05476c50(asStack_28);
      lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
      fVar16 = (float)FUN_03c7c328(*(undefined4 *)(lVar10 + 0x10));
      pAVar11 = (AnimationMgr *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
      AnimationMgr::Add(pAVar11,pAVar9,fVar16 + 0.5);
      pWVar12 = (WaveManager *)Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
      if (pWVar12 != (WaveManager *)0x0) {
        WaveManager::ForceSpawnWave(pWVar12);
      }
      setZombiesIdle(this,true);
      moveZombies(30.0);
      animateZombiePreview(this,0);
      Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
      nop();
      ConveyorSeedBank::PickAndAddSeedFromSeedPool(this_00);
      Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
      nop();
      fVar16 = (float)PVZ_EOT();
      ConveyorSeedBank::SetSeedPickTimer(this_01,fVar16);
      pUVar5 = (UIWidget *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
      UIWidget::SetVisible(pUVar5,true);
      local_48[0] = 1;
      local_48[1] = 1;
      local_48[2] = 1;
      local_48[3] = 1;
      local_48[4] = 1;
      uVar7 = Sexy::LazySingleton<PVZDB>::GetInstance();
      PVZDB::GetObjectIteratorForTable(asStack_28,uVar7,0x29);
      while (bVar3 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)asStack_28), bVar3
            ) {
        Sexy::RtDbTable::Iterator::operator*((Iterator *)asStack_28);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
        Sexy::RtId::~RtId(aRStack_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
        nop();
        cVar2 = (**(code **)(*(long *)this_02 + 0x328))();
        if (cVar2 == '\0') {
          iVar4 = SharkMinion::getRow(this_02);
          local_48[iVar4] = 0;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
          iVar4 = extraout_w1;
        }
        else {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
          iVar4 = extraout_w1_00;
        }
        Sexy::RtDbTable::Iterator::operator++((Iterator *)asStack_28,iVar4);
      }
      lVar10 = 0;
      Sexy::RtDbTable::Iterator::~Iterator((Iterator *)asStack_28);
      do {
        pRVar13 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03c7c358(*(undefined8 *)(this + 0x28),lVar10)
        ;
        pEVar14 = (Effect_ZombieGate *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar13);
        pbVar1 = local_48 + lVar10;
        lVar10 = lVar10 + 1;
        Effect_ZombieGate::SetGateVisible(pEVar14,(bool)*pbVar1);
      } while (lVar10 != 5);
      break;
    case 7:
      pUVar6 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
      for (iVar4 = 0; cVar2 = FUN_03c7c340(pUVar6[0x199]), iVar4 < cVar2; iVar4 = iVar4 + 1) {
        UINewPVPTopZombieQueue::gettItem(pUVar6,iVar4);
        pUVar5 = (UIWidget *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
        UIWidget::SetClickable(pUVar5,false);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28)
        ;
      }
      Board::ClearCursors(*(Board **)(gLawnApp + 0x9f0));
      animateZombiePreview(this,1);
      break;
    case 9:
      animateZombiePreview(this,2);
      break;
    case 10:
      pUVar6 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
      for (iVar4 = 0; cVar2 = FUN_03c7c340(pUVar6[0x199]), iVar4 < cVar2; iVar4 = iVar4 + 1) {
        UINewPVPTopZombieQueue::gettItem(pUVar6,iVar4);
        pUVar5 = (UIWidget *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
        UIWidget::SetClickable(pUVar5,true);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28)
        ;
      }
      *(undefined4 *)(this + 0x1c) = 6;
      break;
    case 0xb:
      setPlayingUIState(this,true);
      std::string::string(asStack_28,"UIViewBoardOrZombies");
      pUVar5 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_28);
      UIWidget::SetVisible(pUVar5,false);
      std::string::~string(asStack_28);
      nop();
      setZombiesIdle(this,false);
      pUVar5 = (UIWidget *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
      UIWidget::SetVisible(pUVar5,false);
      Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
      break;
    case 0xc:
      Board::TryTriggerPlayerLoss(*(Board **)(gLawnApp + 0x9f0),0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CowboyMinigameModule::initializeModule() */

void __thiscall CowboyMinigameModule::initializeModule(CowboyMinigameModule *this)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  *(undefined4 *)(this + 0x1c) = 0xffffffff;
  local_8 = ___stack_chk_guard;
  setState(this,0);
  AnimationMgr::Create();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x20),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  *(undefined4 *)(this + 0x18) = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CowboyMinigameModule::startIntro() */

void __thiscall CowboyMinigameModule::startIntro(CowboyMinigameModule *this)

{
  Board::PutIntoTutorialMode(*(Board **)(gLawnApp + 0x9f0));
  setState(this,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CowboyMinigameModule::onUpdate() */

void __thiscall CowboyMinigameModule::onUpdate(CowboyMinigameModule *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  PneumaticSeedBank *this_00;
  AnimationMgr *this_01;
  ResilienceTutorialIntroProperties *pRVar4;
  ProfileMgr *this_02;
  PlayerInfo *pPVar5;
  undefined8 uVar6;
  Plant *this_03;
  PVZDB *pPVar7;
  long lVar8;
  int extraout_w1;
  float fVar9;
  float fVar10;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  iVar3 = *(int *)(this + 0x1c);
  local_8 = ___stack_chk_guard;
  if (iVar3 == 5) {
    uVar6 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable(aIStack_28,uVar6,0x2c);
    while (bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar2) {
      Sexy::RtDbTable::Iterator::operator*(aIStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
      Sexy::RtId::~RtId(aRStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      nop();
      if (*(code **)(*(long *)this_03 + 0x1f8) == Plant::IsInPlantFoodState) {
        cVar1 = Plant::IsInPlantFoodState(this_03);
      }
      else {
        cVar1 = (**(code **)(*(long *)this_03 + 0x1f8))();
      }
      if (cVar1 != '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38)
        ;
        Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
        pPVar7 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
        PVZDB::GetTable(pPVar7,0x2b);
        goto LAB_03c7e478;
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
    }
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
    pPVar7 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    lVar8 = PVZDB::GetTable(pPVar7,0x2b);
    iVar3 = FUN_03c7c268(*(undefined4 *)(lVar8 + 0x80));
    if ((iVar3 != 0) ||
       (fVar9 = *(float *)(this + 0x40), fVar10 = (float)PVZ_T(), fVar10 < fVar9 + 2.0)) {
LAB_03c7e478:
      iVar3 = *(int *)(this + 0x1c);
    }
    else {
      setState(this,6);
      iVar3 = *(int *)(this + 0x1c);
    }
  }
  if (iVar3 == 1) {
    Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
    nop();
    cVar1 = PneumaticSeedBank::IsInitialized(this_00);
    if (cVar1 != '\0') {
      pRVar4 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
      if (pRVar4[0x40] != (ResilienceTutorialIntroProperties)0x0) {
        this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar5 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_02);
        cVar1 = ProfileUtils::HasCompletedCurrentNormalLevel(pPVar5);
        if (cVar1 == '\0') {
          setState(this,2);
          goto LAB_03c7e344;
        }
      }
      setState(this,4);
    }
  }
LAB_03c7e344:
  this_01 = (AnimationMgr *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20))
  ;
  AnimationMgr::Update(this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CowboyMinigameModule::onNarrationFinished() */

void __thiscall CowboyMinigameModule::onNarrationFinished(CowboyMinigameModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  int iVar2;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if (pRVar1[0x40] == (ResilienceTutorialIntroProperties)0x0) {
    setState(this,4);
    return;
  }
  iVar2 = *(int *)(this + 0x1c);
  if (iVar2 == 2) {
    setState(this,4);
    iVar2 = *(int *)(this + 0x1c);
  }
  if (iVar2 != 0xc) {
    return;
  }
  setState(this,2);
  return;
}


/* CowboyMinigameModule::onSeedPacketPlanted(SeedPacket*) */

void CowboyMinigameModule::onSeedPacketPlanted(SeedPacket *param_1)

{
  if ((*(uint *)(param_1 + 0x1c) & 0xfffffffd) != 4) {
    return;
  }
  setState((CowboyMinigameModule *)param_1,0xb);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CowboyMinigameModule::onViewZombiesComplete() */

void __thiscall CowboyMinigameModule::onViewZombiesComplete(CowboyMinigameModule *this)

{
  int iVar1;
  bool bVar2;
  UIWidget *pUVar3;
  long lVar4;
  WaveGenerator *this_00;
  string *extraout_x1;
  Board *this_01;
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIViewBoardOrZombies");
  pUVar3 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  UIWidget::SetClickable(pUVar3,true);
  std::string::~string(asStack_10);
  nop();
  iVar1 = *(int *)(this + 0x1c);
  if (iVar1 == 7) {
    setState(this,8);
  }
  else if (iVar1 == 9) {
    setState(this,10);
  }
  else if (iVar1 == 4) {
    this_01 = *(Board **)(gLawnApp + 0x9f0);
    lVar4 = Board::GetBoardPanLocations(this_01);
    (**(code **)(*(long *)this_01 + 0x1a8))(this_01,*(undefined4 *)(lVar4 + 4),0);
    Board::StartLevel(*(Board **)(gLawnApp + 0x9f0));
    std::string::string(asStack_10,"UIPowerupHolder");
    UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1);
    std::string::~string(asStack_10);
    nop();
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
    if (bVar2) {
      pUVar3 = (UIWidget *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18)
      ;
      UIWidget::SetVisible(pUVar3,false);
    }
    this_00 = (WaveGenerator *)Board::GetWaveGenerator(*(Board **)(gLawnApp + 0x9f0));
    if (this_00 != (WaveGenerator *)0x0) {
      WaveGenerator::PauseNextWave(this_00,true);
    }
    lVar4 = Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
    if (lVar4 != 0) {
      WaveManager::SetForceSpawnMode(SUB81(lVar4,0));
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CowboyMinigameModule::onViewBoardOrZombiesButtonPressed() */

void __thiscall CowboyMinigameModule::onViewBoardOrZombiesButtonPressed(CowboyMinigameModule *this)

{
  if ((*(uint *)(this + 0x1c) & 0xfffffffd) == 4) {
    setState(this,7);
    return;
  }
  if (*(uint *)(this + 0x1c) != 8) {
    return;
  }
  setState(this,9);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CowboyMinigameModule::onZombieDestroyedNew(Zombie*) */

void __thiscall
CowboyMinigameModule::onZombieDestroyedNew(CowboyMinigameModule *this,Zombie *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  ResourceInfo *pRVar4;
  long *plVar5;
  WaveManager *this_00;
  int extraout_w1;
  int iVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x1c) == 0xb) {
    uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
    iVar6 = 0;
    PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x29);
    while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
      Sexy::RtDbTable::Iterator::operator*(aIStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
      Sexy::RtId::~RtId(aRStack_30);
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_38);
      if (param_1 != (Zombie *)pRVar4) {
        plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
        cVar2 = (**(code **)(*plVar5 + 0x328))();
        if (cVar2 == '\0') {
          iVar6 = iVar6 + 1;
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
    }
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
    if ((iVar6 == 0) &&
       (this_00 = (WaveManager *)Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0)),
       this_00 != (WaveManager *)0x0)) {
      cVar2 = WaveManager::HasSpawnedFinalWave(this_00);
      if (cVar2 == '\0') {
        setState(this,5);
      }
      else {
        WaveManager::ForceSpawnWave(this_00);
        setState(this,0xd);
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CowboyMinigameModule::onZombieDestroyed(Zombie*, DamageInfo const*) */

void CowboyMinigameModule::onZombieDestroyed(Zombie *param_1,DamageInfo *param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  ResourceInfo *pRVar4;
  long *plVar5;
  WaveManager *this;
  int extraout_w1;
  int iVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 0x1c) == 0xb) {
    uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
    iVar6 = 0;
    PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x29);
    while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
      Sexy::RtDbTable::Iterator::operator*(aIStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
      Sexy::RtId::~RtId(aRStack_30);
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_38);
      if (param_2 != (DamageInfo *)pRVar4) {
        plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
        cVar2 = (**(code **)(*plVar5 + 0x328))();
        if (cVar2 == '\0') {
          iVar6 = iVar6 + 1;
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
    }
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
    if ((iVar6 == 0) &&
       (this = (WaveManager *)Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0)),
       this != (WaveManager *)0x0)) {
      cVar2 = WaveManager::HasSpawnedFinalWave(this);
      if (cVar2 == '\0') {
        setState((CowboyMinigameModule *)param_1,5);
      }
      else {
        WaveManager::ForceSpawnWave(this);
        setState((CowboyMinigameModule *)param_1,0xd);
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CowboyMinigameModule::onPlantDied(Plant*) */

void CowboyMinigameModule::onPlantDied(Plant *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  int extraout_w1;
  int iVar4;
  int extraout_w1_00;
  int iVar5;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  iVar5 = 0;
  local_8 = ___stack_chk_guard;
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar2,0x2c);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    if (*(char *)(lVar3 + 0x118) == '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      iVar4 = extraout_w1_00;
    }
    else {
      iVar5 = iVar5 + 1;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      iVar4 = extraout_w1;
    }
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar4);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  if (iVar5 == 0) {
    setState((CowboyMinigameModule *)param_1,0xc);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CowboyMinigameModule::~CowboyMinigameModule() */

void __thiscall CowboyMinigameModule::~CowboyMinigameModule(CowboyMinigameModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0675a480;
  std::vector<Sexy::RtWeakPtr<Effect_ZombieGate>,std::allocator<Sexy::RtWeakPtr<Effect_ZombieGate>>>
  ::~vector((vector<Sexy::RtWeakPtr<Effect_ZombieGate>,std::allocator<Sexy::RtWeakPtr<Effect_ZombieGate>>>
             *)(this + 0x28));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* CowboyMinigameModule::~CowboyMinigameModule() */

void __thiscall CowboyMinigameModule::~CowboyMinigameModule(CowboyMinigameModule *this)

{
  ~CowboyMinigameModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CowboyMinigameModule::onLoadComplete() */

void __thiscall CowboyMinigameModule::onLoadComplete(CowboyMinigameModule *this)

{
  int iVar1;
  UIWidget *this_00;
  Effect_ZombieGate *this_01;
  int iVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (UIWidget *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  UIWidget::SetVisible(this_00,false);
  iVar2 = 0;
  do {
    this_01 = Board::AddEffect<Effect_ZombieGate>(*(Board **)(gLawnApp + 0x9f0));
    iVar1 = iVar2 + 1;
    Effect_ZombieGate::SetRow(this_01,iVar2);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    std::
    vector<Sexy::RtWeakPtr<Effect_ZombieGate>,std::allocator<Sexy::RtWeakPtr<Effect_ZombieGate>>>::
    push_back((vector<Sexy::RtWeakPtr<Effect_ZombieGate>,std::allocator<Sexy::RtWeakPtr<Effect_ZombieGate>>>
               *)(this + 0x28),(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    iVar2 = iVar1;
  } while (iVar1 != 6);
  setPlayingUIState(this,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CowboyMinigameModule::registerForEvents() */

void __thiscall CowboyMinigameModule::registerForEvents(CowboyMinigameModule *this)

{
  undefined *puVar1;
  long lVar2;
  LevelModuleManager *pLVar3;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
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
  lVar2 = LevelModule::getManager();
  FUN_03c7c32c(lVar2 + 0x80);
  pLVar3 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,startIntro);
  Sexy::Delegate0::Delegate0<CowboyMinigameModule,void(CowboyMinigameModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnIntroStarted(pLVar3,aDStack_38);
  pLVar3 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLoadComplete);
  Sexy::Delegate0::Delegate0<CowboyMinigameModule,void(CowboyMinigameModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar3,aDStack_38);
  pLVar3 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<CowboyMinigameModule,void(CowboyMinigameModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnUpdate(pLVar3,aDStack_38);
  pLVar3 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onEndLevel);
  Sexy::Delegate0::Delegate0<CowboyMinigameModule,void(CowboyMinigameModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLevelEnded(pLVar3,aDStack_38);
  pLVar3 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,addToRenderQueue);
  Sexy::Delegate1<RenderQueue*>::
  Delegate1<CowboyMinigameModule,void(CowboyMinigameModule::*)(RenderQueue*)>
            ((Delegate1<RenderQueue*> *)aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterAddToRenderQueue(pLVar3,aDStack_38);
  pLVar3 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,checkWinCondition);
  Sexy::Delegate0wRet<bool>::Delegate0wRet<CowboyMinigameModule,bool(CowboyMinigameModule::*)()>
            ((Delegate0wRet<bool> *)aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterWinCondition(pLVar3,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onViewBoardOrZombiesButtonPressed);
  Sexy::Delegate0::Delegate0<CowboyMinigameModule,void(CowboyMinigameModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::ViewBoardOrZombiesButtonPressed,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSeedPacketPlanted);
  local_b0 = local_88;
  local_c0 = local_98;
  uStack_b8 = uStack_90;
  MessageRouter::
  Subscribe<SeedPacket*,Sexy::CBMemberTranslatorX<CowboyMinigameModule,void(CowboyMinigameModule::*)(SeedPacket*)>>
            ((MessageRouter *)puVar1,Message::SeedPacketPlanted,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDestroyed);
  local_e0 = local_80;
  uStack_d8 = uStack_78;
  local_d0 = local_70;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<CowboyMinigameModule,void(CowboyMinigameModule::*)(Zombie*,DamageInfo_const*)>>
            ((MessageRouter *)puVar1,Message::ZombieDied,&local_e0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDestroyedNew);
  local_100 = local_68;
  uStack_f8 = uStack_60;
  local_f0 = local_58;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<CowboyMinigameModule,void(CowboyMinigameModule::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieDestroyed,&local_100);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantDied);
  local_120 = local_50;
  uStack_118 = uStack_48;
  local_110 = local_40;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<CowboyMinigameModule,void(CowboyMinigameModule::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantDied,&local_120);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

