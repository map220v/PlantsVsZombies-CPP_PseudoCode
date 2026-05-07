// Class: ArenaPlantModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaPlantModule::bringUpSeedChooser() */

void ArenaPlantModule::bringUpSeedChooser(void)

{
  UIWidget *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StandardLevelIntro::bringUpSeedChooser();
  std::string::string(asStack_10,"UISunBank");
  this = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this != (UIWidget *)0x0) {
    UIWidget::SetVisible(this,true);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaPlantModule::setToolsState(bool) */

void __thiscall ArenaPlantModule::setToolsState(ArenaPlantModule *this,bool param_1)

{
  int iVar1;
  UIWidget *pUVar2;
  UIWidget *this_00;
  bool bVar3;
  int iVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar3 = !param_1;
  std::string::string(asStack_10,"UIPlantfood");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  UIWidget::SetClickable(pUVar2,bVar3);
  std::string::string(asStack_10,"UIPowerupHolder");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  UIWidget::SetClickable(pUVar2,bVar3);
  for (iVar4 = 0; iVar1 = UIWidget::GetChildCount(pUVar2), iVar4 < iVar1; iVar4 = iVar4 + 1) {
    UIWidget::GetChildId((int)pUVar2);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)asStack_10);
    Sexy::RtId::~RtId((RtId *)asStack_10);
    this_00 = (UIWidget *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    UIWidget::SetClickable(this_00,bVar3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArenaPlantModule::preventSave() */

undefined8 ArenaPlantModule::preventSave(void)

{
  return 1;
}


/* ArenaPlantModule::OnCloseDialog() */

void ArenaPlantModule::OnCloseDialog(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  return;
}


/* ArenaPlantModule::onSaveDialogCancel() */

void ArenaPlantModule::onSaveDialogCancel(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaPlantModule::StaticClassInit() */

void ArenaPlantModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArenaPlantModule");
    (*pcVar2)(plVar1,asStack_10,FUN_04b127c4,0xa0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArenaPlantModule::StaticGetClass() */

long * ArenaPlantModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArenaPlantModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArenaPlantModule::~ArenaPlantModule() */

void __thiscall ArenaPlantModule::~ArenaPlantModule(ArenaPlantModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06953e90;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x88));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60));
  StandardLevelIntro::~StandardLevelIntro((StandardLevelIntro *)this);
  return;
}


/* ArenaPlantModule::~ArenaPlantModule() */

void __thiscall ArenaPlantModule::~ArenaPlantModule(ArenaPlantModule *this)

{
  ~ArenaPlantModule(this);
  AK::FreeHook(this);
  return;
}


/* ArenaPlantModule::addToRenderQueue(RenderQueue*) */

void __thiscall ArenaPlantModule::addToRenderQueue(ArenaPlantModule *this,RenderQueue *param_1)

{
  bool bVar1;
  AnimationMgr *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x60));
  if (!bVar1) {
    return;
  }
  this_00 = (AnimationMgr *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60))
  ;
  AnimationMgr::AddToRenderQueue(this_00,param_1);
  return;
}


/* ArenaPlantModule::onTimeOutOk() */

void ArenaPlantModule::onTimeOutOk(void)

{
  PVPManager *this;
  
  this = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  PVPManager::EndArenaBattle(this,true);
  return;
}


/* ArenaPlantModule::RequestPVPSave() */

void __thiscall ArenaPlantModule::RequestPVPSave(ArenaPlantModule *this)

{
  int iVar1;
  PVPManager *pPVar2;
  long lVar3;
  
  if (*(int *)(this + 0x58) != 2) {
    pPVar2 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    PVPManager::RequestSavePlayerProfile(pPVar2,0,*(int *)(this + 0x58));
    return;
  }
  lVar3 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  iVar1 = FUN_04b0f998(*(undefined4 *)(lVar3 + 0x168));
  pPVar2 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  PVPManager::RequestSavePlayerProfile(pPVar2,iVar1,*(int *)(this + 0x58));
  return;
}


/* ArenaPlantModule::onSavePVPPlayerInfo(bool, int) */

void ArenaPlantModule::onSavePVPPlayerInfo(bool param_1,int param_2)

{
  PVPManager *this;
  
  if ((param_2 & 0xffU) == 0) {
    return;
  }
  *(undefined1 *)((ulong)param_1 + 0x75) = 1;
  this = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  PVPManager::EndArenaBattle(this,true);
  return;
}


/* ArenaPlantModule::onEndLevel() */

void __thiscall ArenaPlantModule::onEndLevel(ArenaPlantModule *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  RtMixedPtrBase *this_01;
  char cVar1;
  AnimationMgr *this_02;
  long *plVar2;
  PVPManager *this_03;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  this_02 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  AnimationMgr::Clear(this_02);
  if (this[0x75] == (ArenaPlantModule)0x0) {
    this_03 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    PVPManager::SendPVP_Ping(this_03,3);
  }
  this_01 = (RtMixedPtrBase *)(this + 0x68);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_01);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_01);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaPlantModule::setToolsVisible(bool) */

void __thiscall ArenaPlantModule::setToolsVisible(ArenaPlantModule *this,bool param_1)

{
  int iVar1;
  UIWidget *pUVar2;
  UIWidget *this_00;
  int iVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIPlantfood");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  UIWidget::SetVisible(pUVar2,param_1);
  std::string::string(asStack_10,"UIPowerupHolder");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  UIWidget::SetVisible(pUVar2,param_1);
  for (iVar3 = 0; iVar1 = UIWidget::GetChildCount(pUVar2), iVar3 < iVar1; iVar3 = iVar3 + 1) {
    UIWidget::GetChildId((int)pUVar2);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)asStack_10);
    Sexy::RtId::~RtId((RtId *)asStack_10);
    this_00 = (UIWidget *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    UIWidget::SetVisible(this_00,param_1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  std::string::string(asStack_10,"UIGemBank");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  UIWidget::SetVisible(pUVar2,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArenaPlantModule::stopCurvingTutorialFinger() */

void __thiscall ArenaPlantModule::stopCurvingTutorialFinger(ArenaPlantModule *this)

{
  bool bVar1;
  StandaloneEffect *this_00;
  AnimationMgr *this_01;
  long lVar2;
  undefined4 uVar3;
  
  this[0x7c] = (ArenaPlantModule)0x0;
  this[0x7d] = (ArenaPlantModule)0x0;
  uVar3 = PVZ_EOT();
  *(undefined4 *)(this + 0x80) = uVar3;
  *(undefined4 *)(this + 0x84) = 0xbf800000;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x88));
  if (bVar1) {
    this_00 = (StandaloneEffect *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x88));
    StandaloneEffect::SetVisibility(this_00,false);
  }
  this_01 = (AnimationMgr *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60))
  ;
  AnimationMgr::Clear(this_01);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60));
  FUN_04b0f954(lVar2 + 0x10);
  Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
  return;
}


/* ArenaPlantModule::ArenaPlantModule() */

void __thiscall ArenaPlantModule::ArenaPlantModule(ArenaPlantModule *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  StandardLevelIntro::StandardLevelIntro((StandardLevelIntro *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06953e90;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x60));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x68));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x88));
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x4c) = 0xffffffff;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x50) = uVar1;
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(gLawnApp + 0x2a0c);
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x70) = 0xffffffff;
  this[0x74] = (ArenaPlantModule)0x0;
  this[0x75] = (ArenaPlantModule)0x0;
  uVar2 = PVZ_RealT();
  this[0x7c] = (ArenaPlantModule)0x0;
  this[0x7d] = (ArenaPlantModule)0x0;
  *(undefined4 *)(this + 0x78) = uVar2;
  *(undefined4 *)(this + 0x80) = uVar1;
  *(undefined4 *)(this + 0x84) = 0xbf800000;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x94) = 0;
  return;
}


/* ArenaPlantModule::StaticNew() */

ArenaPlantModule * ArenaPlantModule::StaticNew(void)

{
  ArenaPlantModule *this;
  
  this = ::operator_new(0xa0);
  ArenaPlantModule(this);
  return this;
}


/* ArenaPlantModule::onPingSuccess(bool) */

void __thiscall ArenaPlantModule::onPingSuccess(ArenaPlantModule *this,bool param_1)

{
  int iVar1;
  long lVar2;
  float fVar3;
  
  if (!param_1) {
    fVar3 = (float)PVZ_RealT();
    lVar2 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    iVar1 = FUN_04b0f990(*(undefined4 *)(lVar2 + 0x20c));
    *(float *)(this + 0x78) = fVar3 + -5.0 + (float)iVar1;
  }
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x04b10df4 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ArenaPlantModule::updateCurvingTutorialFinger(float, float, float, float, float) */

void __thiscall
ArenaPlantModule::updateCurvingTutorialFinger
          (ArenaPlantModule *this,float param_1,float param_2,float param_3,float param_4,
          float param_5)

{
  StandaloneEffect *this_00;
  Effect_PopAnim *pEVar1;
  float fVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x7c] != (ArenaPlantModule)0x0) {
    if (this[0x7d] != (ArenaPlantModule)0x0) {
      fVar2 = (float)PVZ_T();
      if (fVar2 < *(float *)(this + 0x84)) goto LAB_04b10ce8;
      uVar3 = PVZ_T();
      this[0x7d] = (ArenaPlantModule)0x0;
      *(undefined4 *)(this + 0x80) = uVar3;
      pEVar1 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x88));
      std::string::string((string *)local_18,"idle3");
      PVZ_EOT();
      Effect_PopAnim::PlayLoopingAnimation(pEVar1,(string *)local_18,0);
      std::string::~string((string *)local_18);
      nop();
    }
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_20,20.0,20.0);
    fVar2 = (float)PVZ_T();
    fVar5 = *(float *)(this + 0x80);
    if (fVar2 < param_5 + fVar5) {
      uVar3 = PVZ_T();
      local_24 = (float)FUN_04b1001c(local_20);
      local_24 = local_24 + param_1;
      auVar4 = FUN_04b1001c(local_20);
      local_18[0] = auVar4._0_4_ + param_3;
      fVar2 = CurveLerp<float>(auVar4,param_5 + fVar5,uVar3,&local_24,(Vec3 *)local_18,1);
      fVar5 = *(float *)(this + 0x80);
      *(float *)(this + 0x90) = fVar2;
      uVar3 = PVZ_T();
      local_24 = (float)FUN_04b1001c(local_1c);
      local_24 = local_24 + param_2;
      auVar4 = FUN_04b1001c(local_1c);
      local_18[0] = auVar4._0_4_ + param_4;
      fVar2 = CurveLerp<float>(auVar4,param_5 + fVar5,uVar3,&local_24,(Vec3 *)local_18,1);
      *(float *)(this + 0x94) = fVar2;
    }
    else {
      this[0x7d] = (ArenaPlantModule)0x1;
      fVar2 = (float)PVZ_T();
      *(float *)(this + 0x84) = fVar2 + 1.0;
    }
    this_00 = (StandaloneEffect *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x88));
    EATextSquish::Vec3::Vec3((Vec3 *)local_18,*(float *)(this + 0x90),*(float *)(this + 0x94),0.0);
    StandaloneEffect::SetBoardSpaceOrigin(this_00,(SexyVector3 *)local_18,900000);
  }
LAB_04b10ce8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaPlantModule::initializeModule() */

void __thiscall ArenaPlantModule::initializeModule(ArenaPlantModule *this)

{
  undefined4 uVar1;
  long lVar2;
  Point aPStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  uVar1 = FUN_04b0f994(*(undefined4 *)(lVar2 + 0x128));
  *(undefined4 *)(this + 0x58) = uVar1;
  uVar1 = Board::MakeRenderOrder(900000,0,1);
  Sexy::Point::Point(aPStack_18,0,0);
  FUN_04b10e64(aPStack_18,uVar1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x68),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68));
  FUN_04b0f94c(lVar2 + 0x1c,0);
  AnimationMgr::Create();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x60),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x88),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  this[0x7c] = (ArenaPlantModule)0x0;
  uVar1 = PVZ_EOT();
  lVar2 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x80) = uVar1;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaPlantModule::onNetworkError(int) */

void ArenaPlantModule::onNetworkError(int param_1)

{
  LawnApp *pLVar1;
  long lVar2;
  PVZ2UIDialog *pPVar3;
  MetricsCollector *this;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  pLVar1 = gLawnApp;
  local_8 = ___stack_chk_guard;
  lVar2 = LawnApp::GetPVZ2Dialog(gLawnApp);
  if (lVar2 == 0) {
    FUN_05478178(awStack_58,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_68);
    FUN_05478178(awStack_50,L"[NETWORK_NOT_CONNECTED_TEXT]",auStack_60);
    pPVar3 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(pLVar1,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    if (pPVar3 != (PVZ2UIDialog *)0x0) {
      FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)(ulong)(uint)param_1,OnCloseDialog);
      Sexy::Delegate0::Delegate0<ArenaPlantModule,void(ArenaPlantModule::*)()>
                (aDStack_38,awStack_50);
      PVZ2UIDialog::AddButton(pPVar3,awStack_58,aDStack_38,1);
      FUN_05476c50(awStack_58);
      nop();
      pLVar1 = gLawnApp;
      this = (MetricsCollector *)LawnApp::GetMetricsCollector(gLawnApp);
      lVar2 = LawnApp::GetRealServerTime(pLVar1);
      MetricsCollector::LogPvpNetError(this,lVar2);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaPlantModule::onStartGameButtonPressed() */

void __thiscall ArenaPlantModule::onStartGameButtonPressed(ArenaPlantModule *this)

{
  LawnApp *this_00;
  PVZ2UIDialog *pPVar1;
  MetricsCollector *this_01;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x54) == 3) {
    this_01 = (MetricsCollector *)LawnApp::GetMetricsCollector(gLawnApp);
    MetricsCollector::LogPvpGuideComplete(this_01,6);
    this[0x74] = (ArenaPlantModule)0x1;
  }
  else {
    FUN_05478178(awStack_58,L"[ARENA_SAVE_PLANT_TITLE]",auStack_68);
    FUN_05478178(awStack_50,L"[ARENA_SAVE_PLANT_TEXT]",auStack_60);
    pPVar1 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onSaveDialogOK);
    Sexy::Delegate0::Delegate0<ArenaPlantModule,void(ArenaPlantModule::*)()>(aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar1,awStack_58,aDStack_38,0);
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[BUTTON_CANCEL]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onSaveDialogCancel);
    Sexy::Delegate0::Delegate0<ArenaPlantModule,void(ArenaPlantModule::*)()>(aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar1,awStack_58,aDStack_38,1);
    FUN_05476c50(awStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaPlantModule::setTutorialState(ArenaPlantModule::TutorialState) */

void __thiscall ArenaPlantModule::setTutorialState(ArenaPlantModule *this,undefined4 param_2)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar1;
  undefined4 uVar2;
  int iVar3;
  UIWidget *this_01;
  AnimationMgr *pAVar4;
  long lVar5;
  UINewPVPTopZombieQueue *this_02;
  AnimationController *pAVar6;
  UIWidget *this_03;
  AnimationController *this_04;
  undefined8 uVar7;
  AnimationMgr *this_05;
  CrazyNPCManager *pCVar8;
  Board *pBVar9;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  int local_70;
  int local_6c;
  undefined4 local_68;
  int local_64;
  int local_60;
  int iStack_5c;
  int local_58;
  int local_50;
  int iStack_4c;
  int local_48;
  int local_44;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60);
  *(undefined4 *)(this + 0x70) = param_2;
  std::string::string((string *)&local_50,"UIStartGameButton");
  this_01 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_50);
  UIWidget::SetVisible(this_01,false);
  std::string::~string((string *)&local_50);
  nop();
  pAVar4 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  AnimationMgr::Clear(pAVar4);
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  FUN_04b0f954(lVar5 + 0x10);
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  pAVar4 = (AnimationMgr *)FUN_04b0f960(*(undefined4 *)(lVar5 + 0x10));
  this_02 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  Board::GetBoardBaseOffset();
  switch(*(undefined4 *)(this + 0x70)) {
  case 0:
    pCVar8 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    std::string::string((string *)&local_68,"PVP_PLANTMODULE_INTRO");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onAdvice1Finish);
    Sexy::Delegate0::Delegate0<ArenaPlantModule,void(ArenaPlantModule::*)()>
              (aDStack_38,(string *)&local_50);
    std::string::string((string *)&local_60,"");
    CrazyNPCManager::StartNarrativeID(pCVar8,(string *)&local_68,aDStack_38,(Point *)&local_60);
    std::string::~string((string *)&local_60);
    nop();
    std::string::~string((string *)&local_68);
    nop();
    break;
  case 1:
  case 3:
  case 5:
  case 7:
  case 9:
    pRVar1 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68);
    UINewPVPTopZombieQueue::gettItem(this_02,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    UIWidget::GetDrawRect();
    Sexy::Point::Point((Point *)&local_70,local_60 + local_58 / 2,iStack_5c);
    pBVar9 = *(Board **)(gLawnApp + 0x9f0);
    local_70 = local_70 - *(int *)(pBVar9 + 0x48);
    local_6c = local_6c - *(int *)(pBVar9 + 0x4c);
    Board::TranslateScreenPositionToBoardPosition(pBVar9,(Point *)&local_70);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    Sexy::Point::Point((Point *)&local_50,local_70,local_6c);
    *(ulong *)(lVar5 + 0x30) = CONCAT44(iStack_4c,local_50);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    *(undefined4 *)(lVar5 + 0x3c) = 0;
    pAVar6 = (AnimationController *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    AnimationController::SetDuration(pAVar6,10000.0);
    uVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_50,(RtWeakPtrBase *)&local_68);
    AnimationMgr::Add(pAVar4,uVar7,(string *)&local_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
    break;
  case 2:
  case 4:
  case 6:
  case 8:
  case 10:
    pRVar1 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68);
    Sexy::Point::Point((Point *)&local_70);
    iVar3 = *(int *)(this + 0x70) + -2;
    local_70 = 1;
    local_6c = iVar3 / 2;
    BoardTransforms::GridToBoardSpaceUnbounded
              ((BoardTransforms *)&local_70,(Point *)(ulong)(uint)(iVar3 - (iVar3 >> 0x1f)));
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    uVar2 = FUN_04b10008(local_68);
    *(undefined4 *)(lVar5 + 0x30) = uVar2;
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
    uVar2 = FUN_04b10008(local_64 - iVar3 / 2);
    *(undefined4 *)(lVar5 + 0x34) = uVar2;
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    *(undefined4 *)(lVar5 + 0x3c) = 0x10e;
    pAVar6 = (AnimationController *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    AnimationController::SetDuration(pAVar6,10000.0);
    uVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_50,(RtWeakPtrBase *)&local_60);
    AnimationMgr::Add(pAVar4,uVar7,(string *)&local_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
    break;
  case 0xb:
    pRVar1 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68);
    FUN_05478178((string *)&local_50,L"[PVP_TUTORIAL_CLICKSAVEQUIT]",(Point *)&local_60);
    pAVar6 = (AnimationController *)ShowAdvice::Create((string *)&local_50,8);
    FUN_05476c50((string *)&local_50);
    nop();
    std::string::string((string *)&local_50,"UIStartGameButton");
    UIWidget::GetWidgetBySheetName((string *)&local_50);
    nop();
    std::string::~string((string *)&local_50);
    nop();
    UIWidget::SetVisible(this_03,true);
    UIWidget::GetDrawRect();
    Sexy::Point::Point((Point *)&local_70,local_50 + local_48 / 2,iStack_4c + local_44);
    pBVar9 = *(Board **)(gLawnApp + 0x9f0);
    local_70 = local_70 - *(int *)(pBVar9 + 0x48);
    local_6c = local_6c - *(int *)(pBVar9 + 0x4c);
    Board::TranslateScreenPositionToBoardPosition(pBVar9,(Point *)&local_70);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    Sexy::Point::Point((Point *)&local_60,local_70,local_6c);
    *(ulong *)(lVar5 + 0x30) = CONCAT44(iStack_5c,local_60);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    *(undefined4 *)(lVar5 + 0x3c) = 0xb4;
    this_04 = (AnimationController *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    AnimationController::SetDuration(this_04,10000.0);
    uVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_60,(RtWeakPtrBase *)&local_68);
    AnimationMgr::Add(pAVar4,uVar7,(Point *)&local_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
    this_05 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    AnimationMgr::Add(this_05,pAVar6,(float)pAVar4);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ArenaPlantModule::onCursorAdded(BaseCursor*) */

void ArenaPlantModule::onCursorAdded(BaseCursor *param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x54) == 3) {
    uVar1 = *(uint *)(param_1 + 0x70);
    if (((uVar1 & 0xfffffff9) == 1) || (uVar1 == 9)) {
      setTutorialState((ArenaPlantModule *)param_1,uVar1 + 1);
      return;
    }
  }
  return;
}


/* ArenaPlantModule::onCursorDestroyed(BaseCursor*) */

void ArenaPlantModule::onCursorDestroyed(BaseCursor *param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x54) == 3) {
    uVar1 = *(uint *)(param_1 + 0x70);
    if (((uVar1 & 0xfffffffb) == 2 || (uVar1 & 0xfffffffd) == 8) || (uVar1 == 4)) {
      setTutorialState((ArenaPlantModule *)param_1,uVar1 - 1);
      return;
    }
  }
  return;
}


/* ArenaPlantModule::onAdvice1Finish() */

void __thiscall ArenaPlantModule::onAdvice1Finish(ArenaPlantModule *this)

{
  MetricsCollector *this_00;
  
  setTutorialState(this,1);
  this_00 = (MetricsCollector *)LawnApp::GetMetricsCollector(gLawnApp);
  MetricsCollector::LogPvpGuideComplete(this_00,5);
  return;
}


/* ArenaPlantModule::onNotifySwitchPlant(Plant*, int, int) */

void __thiscall
ArenaPlantModule::onNotifySwitchPlant(ArenaPlantModule *this,Plant *param_1,int param_2,int param_3)

{
  int iVar1;
  ProfileMgr *this_00;
  long lVar2;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar2 = ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = FUN_04b0f970(*(undefined4 *)(lVar2 + 0x1100));
  if (iVar1 == 10) {
    FUN_04b0f974(lVar2 + 0x1100,0xb);
    stopCurvingTutorialFinger(this);
  }
  if (param_1 != (Plant *)0x0) {
    Board::MovePlant(*(Board **)(gLawnApp + 0x9f0),param_1,param_2,param_3,false);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaPlantModule::onTutorialBattle() */

void ArenaPlantModule::onTutorialBattle(void)

{
  int iVar1;
  ProfileMgr *this;
  long lVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Board::EndLevel(*(Board **)(gLawnApp + 0x9f0));
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar2 = ProfileMgr::GetCurrentProfile(this);
  iVar1 = FUN_04b0f970(*(undefined4 *)(lVar2 + 0x1100));
  if (iVar1 == 2) {
    FUN_04b0f974(lVar2 + 0x1100,3);
  }
  *(undefined4 *)(gLawnApp + 0x2a0c) = 3;
  lVar2 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  FUN_04b0fbc8(lVar2 + 0x128);
  lVar2 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  FUN_04b0fbc0(lVar2 + 0x174);
  std::string::string(asStack_10,"arena_battle_attack_tutorial");
  nop();
  GameStateMgr::StartLevel(gGameStateMgr,&DAT_06b837f0,asStack_10,0xffffffff,1,1,0);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaPlantModule::onUpdate() */

void __thiscall ArenaPlantModule::onUpdate(ArenaPlantModule *this)

{
  LawnApp *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  AnimationMgr *this_01;
  ProfileMgr *this_02;
  long lVar6;
  PVPManager *this_03;
  undefined8 uVar7;
  PVZ2UIDialog *pPVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (AnimationMgr *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60))
  ;
  AnimationMgr::Update(this_01);
  if (*(int *)(this + 0x54) == 3) {
    if (this[0x74] != (ArenaPlantModule)0x0) {
      this[0x74] = (ArenaPlantModule)0x0;
      onTutorialBattle();
    }
  }
  else {
    this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar6 = ProfileMgr::GetCurrentProfile(this_02);
    iVar2 = FUN_04b0f970(*(undefined4 *)(lVar6 + 0x1100));
    if ((iVar2 == 10) && (this[0x7c] != (ArenaPlantModule)0x0)) {
      iVar2 = BoardTransforms::GridToBoardSpaceX(3);
      iVar3 = BoardTransforms::GridToBoardSpaceY(0);
      iVar4 = BoardTransforms::GridToBoardSpaceX(5);
      iVar5 = BoardTransforms::GridToBoardSpaceY(0);
      updateCurvingTutorialFinger(this,(float)iVar2,(float)iVar3,(float)iVar4,(float)iVar5,1.0);
    }
    fVar9 = (float)PVZ_RealT();
    if (*(float *)(this + 0x78) < fVar9) {
      fVar9 = (float)PVZ_RealT();
      *(float *)(this + 0x78) = fVar9 + 3.0;
      this_03 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      PVPManager::SendPVP_Ping(this_03,1);
      iVar2 = FUN_04b0f970(*(undefined4 *)(lVar6 + 0x1100));
    }
    else {
      iVar2 = FUN_04b0f970(*(undefined4 *)(lVar6 + 0x1100));
    }
    if (iVar2 != 10) {
      fVar9 = (float)PVZ_RealT();
      fVar10 = (float)LawnApp::GetLastTouchEndTime(gLawnApp);
      if (30.0 < fVar9 - fVar10) {
        lVar6 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        cVar1 = FUN_04b0f99c(*(undefined1 *)(lVar6 + 0x221));
        if ((cVar1 == '\0') && (*(long *)(this + 0x98) == 0)) {
          LawnApp::KillPVZ2Dialog(gLawnApp);
          this_00 = gLawnApp;
          FUN_05478178(awStack_58,L"[ARENA_TIME_OUT_PLANT_TITLE]",auStack_68);
          FUN_05478178(awStack_50,L"[ARENA_TIME_OUT_PLANT_TEXT]",auStack_60);
          uVar7 = LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
          *(undefined8 *)(this + 0x98) = uVar7;
          FUN_05476c50(awStack_50);
          nop();
          FUN_05476c50(awStack_58);
          nop();
          pPVar8 = *(PVZ2UIDialog **)(this + 0x98);
          FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
          Sexy::
          MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                    ((ReceivedDataCallback *)this,onTimeOutOk);
          Sexy::Delegate0::Delegate0<ArenaPlantModule,void(ArenaPlantModule::*)()>
                    (aDStack_38,awStack_50);
          PVZ2UIDialog::AddButton(pPVar8,awStack_58,aDStack_38,1);
          FUN_05476c50(awStack_58);
          nop();
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaPlantModule::getMowerAnim() */

void __thiscall ArenaPlantModule::getMowerAnim(ArenaPlantModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  ResourceInfo *pRVar2;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  GetPAMByName((string *)(pRVar1 + 0x88));
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pRVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaPlantModule::createBrains() */

void __thiscall ArenaPlantModule::createBrains(ArenaPlantModule *this)

{
  int iVar1;
  PopAnim *pPVar2;
  GridItemBrain *this_00;
  int iVar3;
  Board *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar2 = (PopAnim *)getMowerAnim(this);
  Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
  this_01 = *(Board **)(gLawnApp + 0x9f0);
  if (0 < *(int *)(this_01 + 0xfc)) {
    iVar3 = 0;
    do {
      std::string::string(asStack_10,"brain");
      Board::AddGridItem(this_01,asStack_10,0,iVar3,1);
      nop();
      std::string::~string(asStack_10);
      nop();
      iVar1 = iVar3 + 1;
      GridItemBrain::LawnBrainInitialize(this_00,pPVar2,iVar3);
      this_01 = *(Board **)(gLawnApp + 0x9f0);
      iVar3 = iVar1;
    } while (iVar1 < *(int *)(this_01 + 0xfc));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaPlantModule::onReadyForBrains() */

void ArenaPlantModule::onReadyForBrains(void)

{
  int iVar1;
  PopAnim *pPVar2;
  GridItemBrain *this;
  ArenaPlantModule *in_x0;
  int iVar3;
  Board *this_00;
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  pPVar2 = (PopAnim *)getMowerAnim(in_x0);
  Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  if (0 < *(int *)(this_00 + 0xfc)) {
    iVar3 = 0;
    do {
      std::string::string(asStack_10,"brain");
      Board::AddGridItem(this_00,asStack_10,0,iVar3,1);
      nop();
      std::string::~string(asStack_10);
      nop();
      iVar1 = iVar3 + 1;
      GridItemBrain::LawnBrainInitialize(this,pPVar2,iVar3);
      this_00 = *(Board **)(gLawnApp + 0x9f0);
      iVar3 = iVar1;
    } while (iVar1 < *(int *)(this_00 + 0xfc));
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArenaPlantModule::getMowerAudio() */

ResilienceTutorialIntroProperties * __thiscall
ArenaPlantModule::getMowerAudio(ArenaPlantModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  return pRVar1 + 0x90;
}


/* ArenaPlantModule::calcGoalX() */

float __thiscall ArenaPlantModule::calcGoalX(ArenaPlantModule *this)

{
  int iVar1;
  int iVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  iVar1 = *(int *)(pRVar3 + 0x7c);
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  return (float)(iVar1 * iVar2 + 200);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaPlantModule::onPlantPlanted(Plant*) */

void __thiscall ArenaPlantModule::onPlantPlanted(ArenaPlantModule *this,Plant *param_1)

{
  char cVar1;
  int iVar2;
  UINewPVPTopZombieQueue *this_00;
  RtObject *this_01;
  SeedPacket_PVP *this_02;
  long lVar3;
  float fVar4;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x54) != 3) goto LAB_04b11fd4;
  lVar3 = *(long *)(param_1 + 0x110);
  if (lVar3 == 0) {
    iVar2 = *(int *)(this + 0x70);
    if (iVar2 == 2) goto LAB_04b120b0;
  }
  else if (lVar3 == 1) {
    iVar2 = *(int *)(this + 0x70);
    if (iVar2 == 4) goto LAB_04b120b0;
  }
  else if (lVar3 == 2) {
    if (*(int *)(this + 0x70) == 6) {
      iVar2 = 6;
      goto LAB_04b120b0;
    }
  }
  else if (lVar3 == 3) {
    if (*(int *)(this + 0x70) == 8) {
      iVar2 = 8;
      goto LAB_04b120b0;
    }
  }
  else if ((lVar3 == 4) && (*(int *)(this + 0x70) == 10)) {
    iVar2 = 10;
LAB_04b120b0:
    setTutorialState(this,iVar2 + 1);
    goto LAB_04b11fd4;
  }
  Board::KillPlantAt(*(Board **)(gLawnApp + 0x9f0),*(int *)(param_1 + 0x114),
                     *(int *)(param_1 + 0x110));
  fVar4 = (float)Board::GetSunShovelRefundAmount(*(Board **)(gLawnApp + 0x9f0));
  iVar2 = (**(code **)(*(long *)param_1 + 0x150))(param_1);
  Board::AddSunMoney(*(Board **)(gLawnApp + 0x9f0),(int)((float)iVar2 * fVar4));
  this_00 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  UINewPVPTopZombieQueue::gettItem(this_00,0);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
  if (cVar1 != '\0') {
    this_01 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    this_02 = Sexy::RtObject::Cast<SeedPacket_PVP>(this_01);
    if (this_02 != (SeedPacket_PVP *)0x0) {
      iVar2 = FUN_04b0f9a0(*(undefined4 *)(this_02 + 0x200));
      SeedPacket_PVP::SetCurNum(this_02,iVar2 + 1);
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
LAB_04b11fd4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaPlantModule::startCurvingTutorialFinger() */

void __thiscall ArenaPlantModule::startCurvingTutorialFinger(ArenaPlantModule *this)

{
  RtMixedPtr<Sexy::Image> *this_00;
  char cVar1;
  Effect_PopAnim *this_01;
  ResourceInfo *pRVar2;
  StandaloneEffect *this_02;
  long lVar3;
  AnimationController *pAVar4;
  AnimationMgr *this_03;
  undefined4 uVar5;
  float fVar6;
  string asStack_18 [8];
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  this_00 = (RtMixedPtr<Sexy::Image> *)(this + 0x88);
  this[0x7c] = (ArenaPlantModule)0x1;
  local_8 = ___stack_chk_guard;
  this[0x7d] = (ArenaPlantModule)0x0;
  uVar5 = PVZ_T();
  *(undefined4 *)(this + 0x80) = uVar5;
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(this_00);
  if (cVar1 != '\0') {
    this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string(asStack_18,"POPANIM_EFFECTS_TUTORIAL_FINGER");
    GetPAMByName(asStack_18);
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
    Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar2,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    std::string::~string(asStack_18);
    nop();
    Effect_PopAnim::SetCentered(this_01,true);
    std::string::string((string *)aRStack_10,"idle3");
    PVZ_EOT();
    Effect_PopAnim::PlayLoopingAnimation(this_01,aRStack_10,0);
    std::string::~string((string *)aRStack_10);
    nop();
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  this_02 = (StandaloneEffect *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  StandaloneEffect::SetVisibility(this_02,true);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60));
  fVar6 = (float)FUN_04b0f960(*(undefined4 *)(lVar3 + 0x10));
  FUN_05478178(aRStack_10,L"[PVP_TUTORIAL_EDITPLANT]",asStack_18);
  pAVar4 = (AnimationController *)ShowAdvice::Create(aRStack_10,8);
  FUN_05476c50(aRStack_10);
  nop();
  FUN_04b0f94c(pAVar4 + 0x1c,1);
  this_03 = (AnimationMgr *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60))
  ;
  AnimationMgr::Add(this_03,pAVar4,fVar6);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaPlantModule::initPlayerInfo() */

void ArenaPlantModule::initPlayerInfo(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  UIWidgetAnim *this;
  vector *pvVar5;
  int *piVar6;
  PlantNameMapperServerID *this_00;
  undefined8 uVar7;
  undefined8 local_40;
  undefined8 local_38;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  vector<ArenaPlantPositionData,std::allocator<ArenaPlantPositionData>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (UIWidgetAnim *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  pvVar5 = (vector *)UIWidgetAnim::GetScale(this);
  std::vector<ArenaPlantPositionData,std::allocator<ArenaPlantPositionData>>::vector
            (avStack_20,pvVar5);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar3 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar3) {
    piVar6 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    this_00 = (PlantNameMapperServerID *)PlantNameMapper::GetInstance();
    PlantNameMapperServerID::GetTypeForID(this_00,*piVar6);
    cVar4 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_30);
    if (cVar4 != '\0') {
      iVar1 = piVar6[1];
      iVar2 = piVar6[2];
      uVar7 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)aRStack_30);
      Board::AddPlant((Board *)0x0,uVar7,iVar2,iVar1,aRStack_28,1,1,0xffffffff,0,1,0,0,0,0,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    __gnu_cxx::
    __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
    ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                  *)&local_40);
  }
  std::vector<ArenaPlantPositionData,std::allocator<ArenaPlantPositionData>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaPlantModule::setState(ArenaPlantModule::State) */

void __thiscall ArenaPlantModule::setState(ArenaPlantModule *this,int param_2)

{
  char cVar1;
  int iVar2;
  FishingEnergyBar *this_00;
  wstring *this_01;
  undefined8 *puVar3;
  PVPManager *this_02;
  UIWidget *pUVar4;
  ProfileMgr *this_03;
  long lVar5;
  UINewPVPTopZombieQueue *pUVar6;
  SeedPacket *this_04;
  Board *pBVar7;
  code *pcVar8;
  undefined4 uVar9;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x4c) == param_2) goto switchD_04b132ec_default;
  *(int *)(this + 0x4c) = param_2;
  uVar9 = PVZ_T();
  *(undefined4 *)(this + 0x50) = uVar9;
  switch(*(undefined4 *)(this + 0x4c)) {
  case 0:
    initPlayerInfo();
    LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    pBVar7 = *(Board **)(gLawnApp + 0x9f0);
    iVar2 = Board::GetSunCurrency(pBVar7);
    Board::TakeSunMoney(pBVar7,iVar2,false,false);
    pBVar7 = *(Board **)(gLawnApp + 0x9f0);
    this_02 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    iVar2 = PVPManager::GetPVPSunMax(this_02);
    Board::AddSunMoney(pBVar7,iVar2);
    break;
  case 1:
    FUN_04b0fbe0(*(long *)(gLawnApp + 0x9f0) + 0x887);
    FUN_04b0f980(*(long *)(gLawnApp + 0x9f0) + 0xb44);
    Board::PlaceLawnItems();
    Board::StartLevel(*(Board **)(gLawnApp + 0x9f0));
    break;
  case 2:
    Board::SetSoftPause(*(Board **)(gLawnApp + 0x9f0),true);
    pUVar6 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
    for (iVar2 = 0; cVar1 = FUN_04b0f98c(pUVar6[0x199]), iVar2 < cVar1; iVar2 = iVar2 + 1) {
      UINewPVPTopZombieQueue::gettItem(pUVar6,iVar2);
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      FUN_04b0fbe8(lVar5 + 0x198);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      UINewPVPTopZombieQueue::gettItem(pUVar6,iVar2);
      this_00 = (FishingEnergyBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      FishingEnergyBar::onGameUnpaused(this_00);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    }
    FUN_04b0fbd4(*(long *)(gLawnApp + 0x9f0) + 0xc20);
    setToolsVisible(this,false);
    Sexy::RtName::RtName((RtName *)aRStack_18,L"UIStartGameButton");
    UIWidget::CreateWidget(aRStack_18,1);
    nop();
    Sexy::RtName::~RtName((RtName *)aRStack_18);
    FUN_05478178(aRStack_18,L"[SAVE_PLANT_BUTTON]",aRStack_20);
    ArenaOccupyQuitButton::SetLabel(this_01);
    FUN_05476c50(aRStack_18);
    nop();
    UIWidget::SetIgnoreParentVisibility((UIWidget *)this_01,true);
    puVar3 = (undefined8 *)UIWidget::GetPositionOffset((UIWidget *)this_01);
    iVar2 = FUN_04b1002c();
    UIWidget::SetPositionOffset((int)*puVar3,*(float *)((long)puVar3 + 4) - (float)iVar2,this_01);
    if (*(int *)(this + 0x54) == 3) {
LAB_04b13470:
      UIWidget::SetVisible((UIWidget *)this_01,false);
    }
    else {
      lVar5 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      cVar1 = FUN_04b0f99c(*(undefined1 *)(lVar5 + 0x221));
      if (cVar1 != '\0') goto LAB_04b13470;
    }
    setState(this,3);
    MessageRouter::Post((_func_void *)gMessageRouter);
    break;
  case 3:
    std::string::string((string *)aRStack_18,"UIShovel");
    pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)aRStack_18);
    UIWidget::SetClickable(pUVar4,true);
    std::string::~string((string *)aRStack_18);
    nop();
    std::string::string((string *)aRStack_18,"UIStartGameButton");
    pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)aRStack_18);
    UIWidget::SetClickable(pUVar4,true);
    std::string::~string((string *)aRStack_18);
    nop();
    if (*(int *)(this + 0x54) == 3) {
      setTutorialState(this,0);
      std::string::string((string *)aRStack_18,"UIPauseButton");
      pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)aRStack_18);
      std::string::~string((string *)aRStack_18);
      nop();
      if (pUVar4 != (UIWidget *)0x0) {
        UIWidget::SetVisible(pUVar4,false);
      }
    }
    else {
      this_03 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      lVar5 = ProfileMgr::GetCurrentProfile(this_03);
      iVar2 = FUN_04b0f970(*(undefined4 *)(lVar5 + 0x1100));
      if (iVar2 == 10) {
        lVar5 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        cVar1 = FUN_04b0f99c(*(undefined1 *)(lVar5 + 0x221));
        if (cVar1 == '\0') {
          startCurvingTutorialFinger(this);
          break;
        }
      }
      pUVar6 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
      for (iVar2 = 0; cVar1 = FUN_04b0f98c(pUVar6[0x199]), iVar2 < cVar1; iVar2 = iVar2 + 1) {
        UINewPVPTopZombieQueue::gettItem(pUVar6,iVar2);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
        SeedPacket::GetPlantType();
        pUVar4 = (UIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
        UIWidget::SetClickable(pUVar4,true);
        pcVar8 = *(code **)(*(long *)this + 0x100);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_20);
        cVar1 = (*pcVar8)(this,(string *)aRStack_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
        if (cVar1 != '\0') {
          this_04 = (SeedPacket *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
          SeedPacket::SetDisabled(this_04,true);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
      }
    }
  }
switchD_04b132ec_default:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaPlantModule::onLoadComplete() */

void __thiscall ArenaPlantModule::onLoadComplete(ArenaPlantModule *this)

{
  int iVar1;
  long lVar2;
  UIWidget *this_00;
  Board *this_01;
  string asStack_10 [8];
  long local_8;
  
  this_01 = *(Board **)(gLawnApp + 0x9f0);
  local_8 = ___stack_chk_guard;
  lVar2 = Board::GetBoardPanLocations(this_01);
  iVar1 = FUN_04b10008(0x50);
  (**(code **)(*(long *)this_01 + 0x1a8))(this_01,*(int *)(lVar2 + 4) - iVar1,0);
  setState(this,0);
  lVar2 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  iVar1 = FUN_04b0f994(*(undefined4 *)(lVar2 + 0x128));
  if (iVar1 == 2) {
    std::string::string(asStack_10,"UISunBank");
    this_00 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (this_00 != (UIWidget *)0x0) {
      UIWidget::SetVisible(this_00,false);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArenaPlantModule::startIntro() */

void __thiscall ArenaPlantModule::startIntro(ArenaPlantModule *this)

{
  setState(this,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaPlantModule::onGameplayStarted() */

void __thiscall ArenaPlantModule::onGameplayStarted(ArenaPlantModule *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  UIWidget *pUVar4;
  long extraout_x0;
  PVPSeedBankModule *this_00;
  string *extraout_x1;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  setState(this,2);
  lVar3 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  iVar2 = FUN_04b0f994(*(undefined4 *)(lVar3 + 0x128));
  if (iVar2 != 2) {
    lVar3 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    cVar1 = FUN_04b0f99c(*(undefined1 *)(lVar3 + 0x221));
    if (cVar1 == '\0') goto LAB_04b13868;
  }
  std::string::string(asStack_10,"UISunBank");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,false);
  }
  std::string::string(asStack_10,"UIShovel");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,false);
  }
LAB_04b13868:
  std::string::string(asStack_10,"UIChangeSpeedButton");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,false);
  }
  std::string::string(asStack_10,"UICoinBank");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,false);
  }
  std::string::string(asStack_18,"UISunBank");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_18,extraout_x1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  std::string::~string(asStack_18);
  nop();
  if (extraout_x0 != 0) {
    FUN_04b0fbb8(extraout_x0 + 0x179);
  }
  lVar3 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  cVar1 = FUN_04b0f99c(*(undefined1 *)(lVar3 + 0x221));
  if ((cVar1 != '\0') &&
     (this_00 = (PVPSeedBankModule *)
                FUN_04b127b8(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8)),
     this_00 != (PVPSeedBankModule *)0x0)) {
    PVPSeedBankModule::ShowAllSeedBank(this_00,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaPlantModule::isConsumableInstantPlant(Sexy::RtWeakPtr<PlantType const>) */

void __thiscall
ArenaPlantModule::isConsumableInstantPlant(undefined8 param_1,RtWeakPtrBase *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  string *psVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  string asStack_88 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_80 [8];
  string asStack_78 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  string asStack_68 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  string asStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  string asStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  string asStack_38 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_88,"cherry_bomb");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar4);
  cVar1 = Sexy::RtWeakPtrBase::operator==(param_2,(RtWeakPtrBase *)aRStack_80);
  if (cVar1 == '\0') {
    psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string(asStack_78,"jalapeno");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar4);
    cVar1 = Sexy::RtWeakPtrBase::operator==(param_2,(RtWeakPtrBase *)aRStack_70);
    if (cVar1 == '\0') {
      psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      std::string::string(asStack_68,"empea");
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar4);
      cVar1 = Sexy::RtWeakPtrBase::operator==(param_2,(RtWeakPtrBase *)aRStack_60);
      if (cVar1 == '\0') {
        psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        std::string::string(asStack_58,"blover");
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar4);
        cVar2 = Sexy::RtWeakPtrBase::operator==(param_2,(RtWeakPtrBase *)aRStack_50);
        if (cVar2 == '\0') {
          psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
          std::string::string(asStack_48,"powerlily");
          ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar4);
          cVar2 = Sexy::RtWeakPtrBase::operator==(param_2,(RtWeakPtrBase *)aRStack_40);
          cVar1 = cVar2;
          cVar7 = cVar2;
          cVar5 = cVar2;
          if (cVar2 == '\0') {
            psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr()
            ;
            std::string::string(asStack_38,"puffshroom");
            ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar4);
            cVar2 = Sexy::RtWeakPtrBase::operator==(param_2,(RtWeakPtrBase *)aRStack_30);
            cVar3 = cVar2;
            if (cVar2 == '\0') {
              psVar4 = (string *)
                       Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
              std::string::string(asStack_28,"doublesamara");
              ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar4);
              cVar3 = Sexy::RtWeakPtrBase::operator==(param_2,(RtWeakPtrBase *)aRStack_20);
              if (cVar3 == '\0') {
                psVar4 = (string *)
                         Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
                std::string::string(asStack_18,"hurrikale");
                ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar4);
                cVar3 = Sexy::RtWeakPtrBase::operator==(param_2,(RtWeakPtrBase *)aRStack_10);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
                std::string::~string(asStack_18);
                nop();
              }
              cVar2 = '\x01';
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
              std::string::~string(asStack_28);
              nop();
            }
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
            std::string::~string(asStack_38);
            nop();
            cVar1 = cVar2;
            cVar7 = cVar2;
            cVar6 = '\0';
            cVar5 = cVar2;
            goto joined_r0x04b13d90;
          }
        }
        else {
          cVar1 = cVar2;
          cVar7 = cVar2;
          cVar5 = '\0';
        }
      }
      else {
        cVar2 = '\0';
        cVar7 = cVar1;
        cVar5 = '\0';
      }
    }
    else {
      cVar2 = '\0';
      cVar7 = '\0';
      cVar5 = '\0';
    }
  }
  else {
    cVar2 = '\0';
    cVar1 = '\0';
    cVar7 = '\0';
    cVar5 = '\0';
  }
  cVar3 = '\x01';
  cVar6 = cVar2;
joined_r0x04b13d90:
  if (cVar5 != '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    std::string::~string(asStack_48);
    nop();
    cVar6 = cVar2;
  }
  if (cVar6 != '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
    std::string::~string(asStack_58);
    nop();
  }
  if (cVar7 != '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
    std::string::~string(asStack_68);
    nop();
  }
  if (cVar1 != '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
    std::string::~string(asStack_78);
    nop();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_80);
  std::string::~string(asStack_88);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaPlantModule::StoredPlantInfos() */

void __thiscall ArenaPlantModule::StoredPlantInfos(ArenaPlantModule *this)

{
  long lVar1;
  string *psVar2;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  int iVar3;
  int iVar4;
  Board *this_00;
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  string asStack_18 [8];
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  iVar4 = 0;
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  if (0 < *(int *)(this_00 + 0xf8)) {
    do {
      if (0 < *(int *)(this_00 + 0xfc)) {
        iVar3 = 0;
        do {
          std::string::string(asStack_18,"");
          lVar1 = Board::GetPlantAt(this_00,iVar4,iVar3,asStack_18);
          std::string::~string(asStack_18);
          nop();
          if (lVar1 != 0) {
            ZombieRecord::ZombieRecord((ZombieRecord *)asStack_18);
            Plant::GetType();
            Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                      ((RtWeakPtr<PowerPropertySheet> *)asStack_18,(RtWeakPtr *)aRStack_20);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
            local_10 = iVar3;
            local_c = iVar4;
            std::vector<ArenaPlantInfo,std::allocator<ArenaPlantInfo>>::push_back
                      ((vector<ArenaPlantInfo,std::allocator<ArenaPlantInfo>> *)in_x8,
                       (ArenaPlantInfo *)asStack_18);
            std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)asStack_18);
          }
          lVar1 = FUN_04b12ff8(iVar4,iVar3);
          if (lVar1 != 0) {
            ZombieRecord::ZombieRecord((ZombieRecord *)asStack_18);
            psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr()
            ;
            std::string::string(asStack_28,"powerplant");
            ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
            Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                      ((RtWeakPtr<PowerPropertySheet> *)asStack_18,(RtWeakPtr *)aRStack_20);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
            std::string::~string(asStack_28);
            nop();
            local_10 = iVar3;
            local_c = iVar4;
            std::vector<ArenaPlantInfo,std::allocator<ArenaPlantInfo>>::push_back
                      ((vector<ArenaPlantInfo,std::allocator<ArenaPlantInfo>> *)in_x8,
                       (ArenaPlantInfo *)asStack_18);
            std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)asStack_18);
          }
          iVar3 = iVar3 + 1;
          this_00 = *(Board **)(gLawnApp + 0x9f0);
        } while (iVar3 < *(int *)(this_00 + 0xfc));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(this_00 + 0xf8));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaPlantModule::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall ArenaPlantModule::AddResourceRequirements(ArenaPlantModule *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"NewTutorial_Effect");
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
/* ArenaPlantModule::StorePVPPlantPosition() */

void ArenaPlantModule::StorePVPPlantPosition(void)

{
  long lVar1;
  PlantNameMapperServerID *pPVar2;
  string *psVar3;
  PVPManager *this;
  int iVar4;
  int iVar5;
  Board *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  undefined4 local_30;
  int local_2c;
  int local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  iVar5 = 0;
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  if (0 < *(int *)(this_00 + 0xf8)) {
    do {
      if (0 < *(int *)(this_00 + 0xfc)) {
        iVar4 = 0;
        do {
          std::string::string((string *)&local_30,"");
          lVar1 = Board::GetPlantAt(this_00,iVar5,iVar4,(string *)&local_30);
          std::string::~string((string *)&local_30);
          nop();
          if (lVar1 != 0) {
            ArenaPlantPositionData::ArenaPlantPositionData((ArenaPlantPositionData *)&local_30);
            pPVar2 = (PlantNameMapperServerID *)PlantNameMapper::GetInstance();
            Plant::GetType();
            local_30 = PlantNameMapperServerID::GetIdForType(pPVar2,aRStack_38);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
            local_2c = iVar4;
            local_28 = iVar5;
            std::vector<ArenaPlantPositionData,std::allocator<ArenaPlantPositionData>>::push_back
                      ((vector<ArenaPlantPositionData,std::allocator<ArenaPlantPositionData>> *)
                       avStack_20,(ArenaPlantPositionData *)&local_30);
          }
          lVar1 = FUN_04b12ff8(iVar5,iVar4);
          if (lVar1 != 0) {
            ArenaPlantPositionData::ArenaPlantPositionData((ArenaPlantPositionData *)&local_30);
            psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr()
            ;
            std::string::string((string *)aRStack_38,"powerplant");
            ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
            std::string::~string((string *)aRStack_38);
            nop();
            pPVar2 = (PlantNameMapperServerID *)PlantNameMapper::GetInstance();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_40);
            local_30 = PlantNameMapperServerID::GetIdForType(pPVar2,aRStack_38);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
            local_2c = iVar4;
            local_28 = iVar5;
            std::vector<ArenaPlantPositionData,std::allocator<ArenaPlantPositionData>>::push_back
                      ((vector<ArenaPlantPositionData,std::allocator<ArenaPlantPositionData>> *)
                       avStack_20,(ArenaPlantPositionData *)&local_30);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
          }
          iVar4 = iVar4 + 1;
          this_00 = *(Board **)(gLawnApp + 0x9f0);
        } while (iVar4 < *(int *)(this_00 + 0xfc));
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(this_00 + 0xf8));
  }
  this = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  PVPManager::SetPlayerPlantPositionInfo(this,(vector *)avStack_20);
  std::vector<ArenaPlantPositionData,std::allocator<ArenaPlantPositionData>>::~vector
            ((vector<ArenaPlantPositionData,std::allocator<ArenaPlantPositionData>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaPlantModule::StorePVPPlantInfo() */

void ArenaPlantModule::StorePVPPlantInfo(void)

{
  int iVar1;
  Plant *this;
  PlantNameMapperServerID *pPVar2;
  long lVar3;
  PlantAccessoryMgr *this_00;
  PVPManager *this_01;
  Board *this_02;
  int iVar4;
  int iVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  iVar5 = 0;
  this_02 = *(Board **)(gLawnApp + 0x9f0);
  if (0 < *(int *)(this_02 + 0xf8)) {
    do {
      iVar4 = 0;
      if (0 < *(int *)(this_02 + 0xfc)) {
        do {
          std::string::string((string *)&local_20,"");
          this = (Plant *)Board::GetPlantAt(this_02,iVar5,iVar4,(string *)&local_20);
          std::string::~string((string *)&local_20);
          nop();
          if (this != (Plant *)0x0) {
            ArenaPlantInfoData::ArenaPlantInfoData((ArenaPlantInfoData *)&local_20);
            pPVar2 = (PlantNameMapperServerID *)PlantNameMapper::GetInstance();
            Plant::GetType();
            local_20 = PlantNameMapperServerID::GetIdForType(pPVar2,aRStack_40);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
            local_1c = FUN_04b0f97c(*(undefined4 *)(this + 0x50));
            local_18 = Plant::GetAvatarEnable(this);
            local_18 = local_18 & 0xff;
            lVar3 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
            iVar1 = FUN_04b0f994(*(undefined4 *)(lVar3 + 0x128));
            if (iVar1 == 1) {
              pPVar2 = (PlantNameMapperServerID *)PlantNameMapper::GetInstance();
              Plant::GetType();
              iVar1 = PlantNameMapperServerID::GetIdForType(pPVar2,aRStack_40);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
              this_00 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
              lVar3 = PlantAccessoryMgr::GetAccessoryForPlant(this_00,iVar1);
              if (lVar3 != 0) {
                thunk_FUN_05475e00(auStack_10,lVar3 + 8);
              }
            }
            std::vector<ArenaPlantInfoData,std::allocator<ArenaPlantInfoData>>::push_back
                      ((vector<ArenaPlantInfoData,std::allocator<ArenaPlantInfoData>> *)avStack_38,
                       (ArenaPlantInfoData *)&local_20);
            GridItemCardGameZombieActionData::~GridItemCardGameZombieActionData
                      ((GridItemCardGameZombieActionData *)&local_20);
          }
          iVar4 = iVar4 + 1;
          this_02 = *(Board **)(gLawnApp + 0x9f0);
        } while (iVar4 < *(int *)(this_02 + 0xfc));
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(this_02 + 0xf8));
  }
  this_01 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  PVPManager::SetPlayerPlantInfo(this_01,(vector *)avStack_38);
  std::vector<ArenaPlantInfoData,std::allocator<ArenaPlantInfoData>>::~vector
            ((vector<ArenaPlantInfoData,std::allocator<ArenaPlantInfoData>> *)avStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ArenaPlantModule::onSaveDialogOK() */

void __thiscall ArenaPlantModule::onSaveDialogOK(ArenaPlantModule *this)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  StorePVPPlantPosition();
  StorePVPPlantInfo();
  RequestPVPSave(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaPlantModule::registerForEvents() */

void __thiscall ArenaPlantModule::registerForEvents(ArenaPlantModule *this)

{
  undefined *puVar1;
  long lVar2;
  LevelModuleManager *pLVar3;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
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
  lVar2 = LevelModule::getManager();
  FUN_04b0f964(lVar2 + 0x80);
  pLVar3 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,startIntro);
  Sexy::Delegate0::Delegate0<ArenaPlantModule,void(ArenaPlantModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnIntroStarted(pLVar3,aDStack_38);
  pLVar3 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onEndLevel);
  Sexy::Delegate0::Delegate0<ArenaPlantModule,void(ArenaPlantModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLevelEnded(pLVar3,aDStack_38);
  pLVar3 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<ArenaPlantModule,void(ArenaPlantModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnUpdate(pLVar3,aDStack_38);
  pLVar3 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0xf0);
  Sexy::Delegate0::Delegate0<ArenaPlantModule,void(ArenaPlantModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar3,aDStack_38);
  pLVar3 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayStarted);
  Sexy::Delegate0::Delegate0<ArenaPlantModule,void(ArenaPlantModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar3,aDStack_38);
  pLVar3 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,addToRenderQueue);
  Sexy::Delegate1<RenderQueue*>::Delegate1<ArenaPlantModule,void(ArenaPlantModule::*)(RenderQueue*)>
            ((Delegate1<RenderQueue*> *)aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterAddToRenderQueue(pLVar3,aDStack_38);
  pLVar3 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,preventSave);
  Sexy::Delegate0wRet<bool>::Delegate0wRet<ArenaPlantModule,bool(ArenaPlantModule::*)()>
            ((Delegate0wRet<bool> *)aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterCanPreventSave(pLVar3,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onStartGameButtonPressed);
  Sexy::Delegate0::Delegate0<ArenaPlantModule,void(ArenaPlantModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::StartGameButtonPressed,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSavePVPPlayerInfo);
  local_100 = local_e0;
  uStack_f8 = uStack_d8;
  local_f0 = local_d0;
  MessageRouter::
  Subscribe<bool,int,Sexy::CBMemberTranslatorX<ArenaPlantModule,void(ArenaPlantModule::*)(bool,int)>>
            ((MessageRouter *)puVar1,Message::SavePVPPlayerInfo);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNetworkError);
  local_110 = local_b8;
  local_120 = local_c8;
  uStack_118 = uStack_c0;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<ArenaPlantModule,void(ArenaPlantModule::*)(int)>>
            ((MessageRouter *)puVar1,Message::MsgError,&local_120);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCursorAdded);
  local_140 = local_b0;
  uStack_138 = uStack_a8;
  local_130 = local_a0;
  MessageRouter::
  Subscribe<BaseCursor*,Sexy::CBMemberTranslatorX<ArenaPlantModule,void(ArenaPlantModule::*)(BaseCursor*)>>
            ((MessageRouter *)puVar1,Message::CursorAdded,&local_140);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantPlanted);
  local_150 = local_88;
  local_160 = local_98;
  uStack_158 = uStack_90;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<ArenaPlantModule,void(ArenaPlantModule::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantPlanted,&local_160);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCursorDestroyed);
  local_140 = local_80;
  uStack_138 = uStack_78;
  local_130 = local_70;
  MessageRouter::
  Subscribe<BaseCursor*,Sexy::CBMemberTranslatorX<ArenaPlantModule,void(ArenaPlantModule::*)(BaseCursor*)>>
            ((MessageRouter *)puVar1,Message::CursorDestroyed,&local_140);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onReadyForBrains);
  Sexy::Delegate0::Delegate0<ArenaPlantModule,void(ArenaPlantModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ReadyForLawnItems,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifySwitchPlant);
  local_180 = local_68;
  uStack_178 = uStack_60;
  local_170 = local_58;
  MessageRouter::
  Subscribe<Plant*,int,int,Sexy::CBMemberTranslatorX<ArenaPlantModule,void(ArenaPlantModule::*)(Plant*,int,int)>>
            ((MessageRouter *)puVar1,Message::NotifySwitchPlant,&local_180);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPingSuccess);
  local_1a0 = local_50;
  uStack_198 = uStack_48;
  local_190 = local_40;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<ArenaPlantModule,void(ArenaPlantModule::*)(bool)>>
            ((MessageRouter *)puVar1,Message::PVP_PingSuccess,&local_1a0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

