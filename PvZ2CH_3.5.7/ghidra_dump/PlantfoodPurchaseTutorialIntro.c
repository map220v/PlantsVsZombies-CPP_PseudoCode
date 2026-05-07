// Class: PlantfoodPurchaseTutorialIntro


/* PlantfoodPurchaseTutorialIntro::onCheckBuySunManually(bool*) */

void __thiscall
PlantfoodPurchaseTutorialIntro::onCheckBuySunManually
          (PlantfoodPurchaseTutorialIntro *this,bool *param_1)

{
  if (*(int *)(this + 0x174) != 5) {
    return;
  }
  *param_1 = false;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodPurchaseTutorialIntro::StaticClassInit() */

void PlantfoodPurchaseTutorialIntro::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantfoodPurchaseTutorialIntro");
    (*pcVar2)(plVar1,asStack_10,FUN_03f725e4,400,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantfoodPurchaseTutorialIntro::StaticGetClass() */

long * PlantfoodPurchaseTutorialIntro::StaticGetClass(void)

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
  uVar2 = PowerupCukeTutorialIntro::StaticGetClass();
  (*pcVar3)(plVar1,"PlantfoodPurchaseTutorialIntro",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodPurchaseTutorialIntro::initializeModule() */

void __thiscall
PlantfoodPurchaseTutorialIntro::initializeModule(PlantfoodPurchaseTutorialIntro *this)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined4 uVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PowerupCukeTutorialIntro::initializeModule((PowerupCukeTutorialIntro *)this);
  this[0x170] = (PlantfoodPurchaseTutorialIntro)0x0;
  *(undefined4 *)(this + 0x174) = 0;
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x178) = uVar2;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    PlantAnimRig_HoyaCordata::getIdleAnimationName();
    iVar1 = PlayerInfo::GetWorldMapEventStatus(this_01,asStack_10);
    if (2 < iVar1) {
      std::string::~string(asStack_10);
      goto LAB_03f718cc;
    }
    std::string::~string(asStack_10);
  }
  this[0x170] = (PlantfoodPurchaseTutorialIntro)0x1;
  AnimationMgr::Create();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x150),(RtWeakPtrBase *)asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
LAB_03f718cc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodPurchaseTutorialIntro::GetSunBank() */

void PlantfoodPurchaseTutorialIntro::GetSunBank(void)

{
  ResourceInfo *pRVar1;
  undefined8 extraout_x0;
  string *extraout_x1;
  undefined8 uVar2;
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UISunBank");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1);
  std::string::~string(asStack_10);
  nop();
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  if (pRVar1 == (ResourceInfo *)0x0) {
    uVar2 = 0;
  }
  else {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    nop();
    uVar2 = extraout_x0;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* PlantfoodPurchaseTutorialIntro::PlantfoodPurchaseTutorialIntro() */

void __thiscall
PlantfoodPurchaseTutorialIntro::PlantfoodPurchaseTutorialIntro(PlantfoodPurchaseTutorialIntro *this)

{
  PowerupCukeTutorialIntro::PowerupCukeTutorialIntro((PowerupCukeTutorialIntro *)this);
  *(undefined ***)this = &PTR_GetModuleClass_067a2410;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x150));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x158));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x180));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x188));
  return;
}


/* PlantfoodPurchaseTutorialIntro::StaticNew() */

PlantfoodPurchaseTutorialIntro * PlantfoodPurchaseTutorialIntro::StaticNew(void)

{
  PlantfoodPurchaseTutorialIntro *this;
  
  this = ::operator_new(400);
  PlantfoodPurchaseTutorialIntro(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodPurchaseTutorialIntro::registerForEvents() */

void __thiscall
PlantfoodPurchaseTutorialIntro::registerForEvents(PlantfoodPurchaseTutorialIntro *this)

{
  undefined *puVar1;
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
  PowerupCukeTutorialIntro::registerForEvents((PowerupCukeTutorialIntro *)this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCheckBuySunManually);
  local_b0 = local_88;
  local_c0 = local_98;
  uStack_b8 = uStack_90;
  MessageRouter::
  Subscribe<bool*,Sexy::CBMemberTranslatorX<PlantfoodPurchaseTutorialIntro,void(PlantfoodPurchaseTutorialIntro::*)(bool*)>>
            ((MessageRouter *)puVar1,Message::CheckBuySunManually,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantfoodCountChanged);
  local_e0 = local_80;
  uStack_d8 = uStack_78;
  local_d0 = local_70;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<PlantfoodPurchaseTutorialIntro,void(PlantfoodPurchaseTutorialIntro::*)(int)>>
            ((MessageRouter *)puVar1,Message::PlantfoodCountChanged,&local_e0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onFakeGemBanked);
  local_d0 = local_58;
  local_e0 = local_68;
  uStack_d8 = uStack_60;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<PlantfoodPurchaseTutorialIntro,void(PlantfoodPurchaseTutorialIntro::*)(int)>>
            ((MessageRouter *)puVar1,Message::GemCurrencyFakeBanked,&local_e0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onDaveShouldSpawnCoins);
  Sexy::Delegate0::
  Delegate0<PlantfoodPurchaseTutorialIntro,void(PlantfoodPurchaseTutorialIntro::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::NPCSpawnFakeCoins,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantPlanted);
  local_100 = local_50;
  uStack_f8 = uStack_48;
  local_f0 = local_40;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<PlantfoodPurchaseTutorialIntro,void(PlantfoodPurchaseTutorialIntro::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantPlanted,&local_100);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodPurchaseTutorialIntro::setupDaveProlog() */

void __thiscall
PlantfoodPurchaseTutorialIntro::setupDaveProlog(PlantfoodPurchaseTutorialIntro *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  UIWidget *pUVar1;
  long lVar2;
  AnimationController *pAVar3;
  AnimationMgr *this_01;
  float fVar4;
  RtMixedPtr aRStack_20 [8];
  RtId aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIShovel");
  pUVar1 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar1,true);
  }
  std::string::string(asStack_10,"UIPauseButton");
  pUVar1 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar1,false);
  }
  std::string::string(asStack_10,"UISunBank");
  pUVar1 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar1,false);
  }
  std::string::string(asStack_10,"UIPlantfood");
  pUVar1 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar1,true);
  }
  std::string::string(asStack_10,"UIGemBank");
  pUVar1 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar1,true);
    UIWidget::SetClickable(pUVar1,false);
  }
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x150);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  FUN_03f711b4(lVar2 + 0x10);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  fVar4 = (float)FUN_03f711c0(*(undefined4 *)(lVar2 + 0x10));
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_20);
  std::string::string(asStack_10,"startDaveNarrative");
  pAVar3 = (AnimationController *)TimeEvent::Create(aRStack_18,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::RtId::~RtId(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  this_01 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  AnimationMgr::Add(this_01,pAVar3,fVar4 + 1.0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodPurchaseTutorialIntro::onGameplayStarted() */

void __thiscall
PlantfoodPurchaseTutorialIntro::onGameplayStarted(PlantfoodPurchaseTutorialIntro *this)

{
  UIWidget *this_00;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  setupDaveProlog(this);
  std::string::string(asStack_18,"UIPowerupHolder");
  UIWidget::GetWidgetBySheetName(asStack_18);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  nop();
  this_00 = (UIWidget *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  UIWidget::SetVisible(this_00,false);
  (**(code **)(*(long *)this + 0x100))(this,1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodPurchaseTutorialIntro::pauseWave(bool) */

void __thiscall
PlantfoodPurchaseTutorialIntro::pauseWave(PlantfoodPurchaseTutorialIntro *this,bool param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  WaveManager *this_00;
  undefined8 *puVar4;
  Plant *this_01;
  SunDropperModule *this_02;
  UIWidget *this_03;
  Zombie *pZVar5;
  RtObject *this_04;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (WaveManager *)Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
  WaveManager::SetPause(this_00,param_1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar3 = operator|(2,1);
  EntityFinder::GetEntities(avStack_20,uVar3);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
  if (bVar1) {
    do {
      puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30)
      ;
      this_04 = (RtObject *)*puVar4;
      bVar1 = Sexy::RtObject::IsA<Plant>(this_04);
      if (bVar1) {
        this_01 = Sexy::RtObject::Cast<Plant>(this_04);
        if (param_1) {
          if (*(code **)(*(long *)this_01 + 0x1f8) == Plant::IsInPlantFoodState) {
            cVar2 = Plant::IsInPlantFoodState(this_01);
          }
          else {
            cVar2 = (**(code **)(*(long *)this_01 + 0x1f8))();
          }
          if (cVar2 != '\0') {
            Plant::DisablePlantfoodAnimation(this_01);
          }
        }
        this_01[0x158] = (Plant)!param_1;
      }
      else {
        bVar1 = Sexy::RtObject::IsA<Zombie>(this_04);
        if (bVar1) {
          pZVar5 = Sexy::RtObject::Cast<Zombie>(this_04);
          cVar2 = (**(code **)(*(long *)pZVar5 + 0x328))();
          if (cVar2 == '\0') {
            if (param_1) {
              (**(code **)(*(long *)pZVar5 + 600))();
            }
            else {
              (**(code **)(*(long *)pZVar5 + 0x260))(pZVar5);
            }
          }
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
    } while (bVar1);
  }
  this_02 = (SunDropperModule *)FUN_03f720ac(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this_02 != (SunDropperModule *)0x0) {
    SunDropperModule::SetPaused(this_02,param_1);
  }
  this_03 = (UIWidget *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  if (this_03 != (UIWidget *)0x0) {
    UIWidget::SetVisible(this_03,!param_1);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantfoodPurchaseTutorialIntro::clearBouncingArrows() */

void __thiscall
PlantfoodPurchaseTutorialIntro::clearBouncingArrows(PlantfoodPurchaseTutorialIntro *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0x158);
    uVar2 = FUN_03f711d8(uVar4,*(undefined8 *)(this + 0x160));
    if (uVar2 <= uVar3) break;
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03f711e4(uVar4,uVar3);
    plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    (**(code **)(*plVar1 + 0x48))();
    uVar3 = uVar3 + 1;
  }
  std::vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>::
  clear((vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>
         *)(this + 0x158));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodPurchaseTutorialIntro::onEndLevel() */

void __thiscall PlantfoodPurchaseTutorialIntro::onEndLevel(PlantfoodPurchaseTutorialIntro *this)

{
  AnimationMgr *this_00;
  long lVar1;
  GemBank *this_01;
  PlantfoodUI *this_02;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  this_00 = (AnimationMgr *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x150));
  AnimationMgr::Clear(this_00);
  clearBouncingArrows(this);
  std::string::string(asStack_10,"UIGemBank");
  lVar1 = UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (lVar1 != 0) {
    nop();
    GemBank::ClearFakeCurrency(this_01);
  }
  std::string::string(asStack_10,"UIPlantfood");
  lVar1 = UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (lVar1 != 0) {
    nop();
    PlantfoodUI::SetFreePlantfoodAddition(this_02,false);
    PlantfoodUI::SetBuyTutorialArrow(this_02,(Effect_BouncingArrow *)0x0);
  }
  PowerupCukeTutorialIntro::onEndLevel((PowerupCukeTutorialIntro *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantfoodPurchaseTutorialIntro::~PlantfoodPurchaseTutorialIntro() */

void __thiscall
PlantfoodPurchaseTutorialIntro::~PlantfoodPurchaseTutorialIntro
          (PlantfoodPurchaseTutorialIntro *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_067a2410;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x188));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x180));
  std::vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>::
  ~vector((vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>
           *)(this + 0x158));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x150));
  PowerupCukeTutorialIntro::~PowerupCukeTutorialIntro((PowerupCukeTutorialIntro *)this);
  return;
}


/* PlantfoodPurchaseTutorialIntro::~PlantfoodPurchaseTutorialIntro() */

void __thiscall
PlantfoodPurchaseTutorialIntro::~PlantfoodPurchaseTutorialIntro
          (PlantfoodPurchaseTutorialIntro *this)

{
  ~PlantfoodPurchaseTutorialIntro(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodPurchaseTutorialIntro::addBouncingArrow(Sexy::SexyVector2 const&) */

void __thiscall
PlantfoodPurchaseTutorialIntro::addBouncingArrow
          (PlantfoodPurchaseTutorialIntro *this,SexyVector2 *param_1)

{
  Effect_BouncingArrow *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_BouncingArrow>(*(Board **)(gLawnApp + 0x9f0));
  CachedResourcePtr::operator_cast_to_RtWeakPtr((CachedResourcePtr *)&DAT_06ae5010);
  Effect_BouncingArrow::SetArrowImage(this_00,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Effect_BouncingArrow::SetBounceHeightsBoardSpace(this_00,20.0,40.0);
  StandaloneEffect::SetVisibility((StandaloneEffect *)this_00,true);
  StandaloneEffect::SetScreenSpaceOrigin((StandaloneEffect *)this_00,param_1,1000000);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>::
  push_back((vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>
             *)(this + 0x158),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodPurchaseTutorialIntro::grantFakeMoney() */

void __thiscall PlantfoodPurchaseTutorialIntro::grantFakeMoney(PlantfoodPurchaseTutorialIntro *this)

{
  int iVar1;
  int iVar2;
  PlantfoodUI *this_00;
  PlantfoodUI *this_01;
  Effect_BouncingArrow *pEVar3;
  Board *pBVar4;
  int local_28;
  int local_24;
  FastCurve aFStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"UIPlantfood");
  UIWidget::GetWidgetBySheetName(asStack_18);
  nop();
  std::string::~string(asStack_18);
  nop();
  PlantfoodUI::SetFreePlantfoodAddition(this_00,true);
  pBVar4 = *(Board **)(gLawnApp + 0x9f0);
  FUN_05478178(asStack_18,L"[ADVICE_BUY_PLANTFOOD]",aFStack_20);
  Board::DisplayAdvice(pBVar4,asStack_18,0xf,0);
  FUN_05476c50(asStack_18);
  nop();
  std::string::string(asStack_18,"UIPlantfood");
  UIWidget::GetWidgetBySheetName(asStack_18);
  nop();
  std::string::~string(asStack_18);
  nop();
  PlantfoodUI::SetForceShowPlus(this_01,true);
  PlantfoodUI::CalcPlusButtonRect(this_01);
  Sexy::TRect<int>::GetCenter();
  Sexy::Point::Point((Point *)&local_28,(TPoint *)aFStack_20);
  pBVar4 = *(Board **)(gLawnApp + 0x9f0);
  local_28 = local_28 - *(int *)(pBVar4 + 0x48);
  local_24 = local_24 - *(int *)(pBVar4 + 0x4c);
  Board::TranslateScreenPositionToBoardPosition(pBVar4,(Point *)&local_28);
  iVar1 = local_24;
  iVar2 = FUN_03f71424(0xf);
  Sexy::FastCurve::SetOutRange(aFStack_20,(float)local_28,(float)(iVar1 - iVar2));
  pEVar3 = (Effect_BouncingArrow *)addBouncingArrow(this,(SexyVector2 *)aFStack_20);
  PlantfoodUI::SetBuyTutorialArrow(this_00,pEVar3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodPurchaseTutorialIntro::setState(PlantfoodPurchaseTutorialIntro::PlantfoodPurchaseState)
    */

void __thiscall
PlantfoodPurchaseTutorialIntro::setState(PlantfoodPurchaseTutorialIntro *this,int param_2)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  StandaloneEffect *this_01;
  undefined8 *puVar6;
  Plant *pPVar7;
  long lVar8;
  UIWidget *pUVar9;
  SeedPacket *pSVar10;
  GemBank *this_02;
  ProfileMgr *this_03;
  PlayerInfo *this_04;
  PlantfoodUI *this_05;
  Board *pBVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  TPoint aTStack_50 [8];
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x174) != param_2) {
    *(int *)(this + 0x174) = param_2;
    switch(param_2) {
    case 3:
      grantFakeMoney(this);
      break;
    case 5:
      std::string::string((string *)avStack_20,"UIGemBank");
      UIWidget::GetWidgetBySheetName((string *)avStack_20);
      nop();
      std::string::~string((string *)avStack_20);
      nop();
      this_03 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_04 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_03);
      iVar5 = PlayerInfo::GetNumGems(this_04,false);
      GemBank::SetFakeCurrencyAmount(this_02,iVar5 + 0x12);
      pUVar9 = (UIWidget *)GetSunBank();
      if (pUVar9 != (UIWidget *)0x0) {
        UIWidget::SetVisible(pUVar9,true);
        SunBank::SetIsTutorial((SunBank *)pUVar9,true);
        FUN_03f71204(pUVar9 + 0x179);
      }
      std::string::string((string *)avStack_20,"UIPlantfood");
      UIWidget::GetWidgetBySheetName((string *)avStack_20);
      nop();
      std::string::~string((string *)avStack_20);
      nop();
      PlantfoodUI::SetForceShowPlus(this_05,false);
      pBVar11 = *(Board **)(gLawnApp + 0x9f0);
      FUN_05478178((string *)avStack_20,L"[ADVICE_SUNBANK_TUTORIAL_FAKEGEM]",local_30);
      Board::DisplayAdvice(pBVar11,(string *)avStack_20,0xf,0);
      FUN_05476c50((string *)avStack_20);
      nop();
      break;
    case 6:
      pUVar9 = (UIWidget *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
      if (pUVar9 != (UIWidget *)0x0) {
        UIWidget::SetVisible(pUVar9,true);
      }
      this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0x188);
      SeedBankNew::SetPacketsOnDisplay((SeedBankNew *)pUVar9,false);
      for (iVar5 = 0; cVar3 = FUN_03f711d0(pUVar9[0x199]), iVar5 < cVar3; iVar5 = iVar5 + 1) {
        UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)pUVar9,iVar5);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
        SeedPacket::GetPlantType();
        cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)avStack_20);
        if (cVar3 != '\0') {
          lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)avStack_20);
          bVar2 = std::operator==((string *)(lVar8 + 8),"sunflower");
          if (bVar2) {
            pSVar10 = (SeedPacket *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
            SeedPacket::SetDisabled(pSVar10,false);
            pSVar10 = (SeedPacket *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
            SeedPacket::setAffordable(pSVar10,true);
            pSVar10 = (SeedPacket *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
            SeedPacket::SetIsFlashing(pSVar10,true);
            Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)local_30);
          }
          else {
            pSVar10 = (SeedPacket *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
            SeedPacket::SetDisabled(pSVar10,true);
          }
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)avStack_20)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
      }
      cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00);
      if (cVar3 != '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        UIWidget::GetDrawRect();
        Board::GetBoardBaseOffset();
        Sexy::TRect<int>::GetCenter();
        Sexy::TPoint<int>::operator-((TPoint<int> *)&local_38,(TPoint *)&local_48);
        Sexy::Point::Point((Point *)&local_40,(TPoint *)local_30);
        Board::TranslateScreenPositionToBoardPosition
                  (*(Board **)(gLawnApp + 0x9f0),(Point *)&local_40);
        BoardTransforms::GridToBoardSpaceX(0);
        iVar5 = FUN_03f71424();
        BoardTransforms::GridToBoardSpaceY(1);
        iVar4 = FUN_03f71424();
        TutorialFinger::SetCurvingTutorialFinger
                  ((TutorialFinger *)(this + 0x50),(float)local_40,(float)local_3c,(float)iVar5,
                   (float)iVar4,1.0);
        TutorialFinger::StartCurvingTutorialFinger((TutorialFinger *)(this + 0x50));
      }
      break;
    case 7:
      this_01 = (StandaloneEffect *)FUN_03f711c4(*(undefined8 *)(this + 0x50));
      StandaloneEffect::SetVisibility(this_01,true);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
      EntityFinder::GetEntities(avStack_20,1);
      local_38 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_20);
      do {
        local_30[0] = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)avStack_20);
        bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)local_30);
        if (!bVar2) {
          Board::GetBoardBaseOffset();
          std::string::string((string *)&local_38,"UIPlantfood");
          UIWidget::GetWidgetBySheetName((string *)&local_38);
          UIWidget::GetDrawRect();
          std::string::~string((string *)&local_38);
          nop();
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1000,0x3f7302c);
          (*pcVar1)();
        }
        puVar6 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
        pPVar7 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar6);
        if (pPVar7 != (Plant *)0x0) {
          Plant::GetType();
          lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
          bVar2 = std::operator==((string *)(lVar8 + 8),"sunflower");
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30)
          ;
          if (bVar2) {
            Board::GetBoardBaseOffset();
            std::string::string((string *)&local_38,"UIPlantfood");
            UIWidget::GetWidgetBySheetName((string *)&local_38);
            UIWidget::GetDrawRect();
            std::string::~string((string *)&local_38);
            nop();
            fVar14 = *(float *)(pPVar7 + 0x1c);
            uVar12 = FUN_03f71210(*(undefined4 *)(pPVar7 + 0x18),fVar14,
                                  *(undefined4 *)(pPVar7 + 0x20));
            local_38 = CONCAT44(fVar14,uVar12);
            fVar13 = (float)FUN_03f71438();
            fVar13 = (float)Sexy::SexyVector2::operator*((SexyVector2 *)&local_38,fVar13);
            Sexy::TRect<int>::GetCenter();
            Sexy::TPoint<int>::operator-((TPoint<int> *)&local_40,aTStack_50);
            Sexy::Point::Point((Point *)&local_48,(TPoint *)&local_38);
            Board::TranslateScreenPositionToBoardPosition
                      (*(Board **)(gLawnApp + 0x9f0),(Point *)&local_48);
            TutorialFinger::StartCurvingTutorialFinger((TutorialFinger *)(this + 0x50));
            iVar5 = FUN_03f7144c();
            TutorialFinger::SetCurvingTutorialFinger
                      ((TutorialFinger *)(this + 0x50),(float)(local_48 - iVar5),(float)local_44,
                       fVar13,fVar14,1.0);
            std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
            break;
          }
        }
        FUN_03f71938((exception_ptr *)&local_38);
      } while( true );
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodPurchaseTutorialIntro::startDaveNarrative() */

void __thiscall
PlantfoodPurchaseTutorialIntro::startDaveNarrative(PlantfoodPurchaseTutorialIntro *this)

{
  CrazyNPCManager *pCVar1;
  string asStack_60 [8];
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  setState(this,1);
  pCVar1 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
  std::string::string(asStack_60,"BUY_PLANTFOOD");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNarrationFinished);
  Sexy::Delegate0::
  Delegate0<PlantfoodPurchaseTutorialIntro,void(PlantfoodPurchaseTutorialIntro::*)()>
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


/* PlantfoodPurchaseTutorialIntro::onFakeGemBanked(int) */

void PlantfoodPurchaseTutorialIntro::onFakeGemBanked(int param_1)

{
  setState((PlantfoodPurchaseTutorialIntro *)param_1,5);
  return;
}


/* PlantfoodPurchaseTutorialIntro::onPlantPlanted(Plant*) */

void PlantfoodPurchaseTutorialIntro::onPlantPlanted(Plant *param_1)

{
  StandaloneEffect *this;
  
  if (*(int *)(param_1 + 0x174) != 6) {
    return;
  }
  this = (StandaloneEffect *)FUN_03f711c4(*(undefined8 *)(param_1 + 0x50));
  StandaloneEffect::SetVisibility(this,false);
  setState((PlantfoodPurchaseTutorialIntro *)param_1,3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodPurchaseTutorialIntro::onPlantfoodCountChanged(int) */

void PlantfoodPurchaseTutorialIntro::onPlantfoodCountChanged(int param_1)

{
  PlantfoodPurchaseTutorialIntro *this;
  ProfileMgr *this_00;
  long lVar1;
  GemBank *this_01;
  PlantfoodUI *this_02;
  string asStack_10 [8];
  long local_8;
  
  this = (PlantfoodPurchaseTutorialIntro *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x174) == 3) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar1 = ProfileMgr::GetCurrentProfile(this_00);
    std::string::string(asStack_10,"UIGemBank");
    UIWidget::GetWidgetBySheetName(asStack_10);
    nop();
    std::string::~string(asStack_10);
    nop();
    if ((this_01 != (GemBank *)0x0) && (lVar1 != 0)) {
      GemBank::ClearFakeCurrency(this_01);
      MessageRouter::Post<int,int,TutorialType,TutorialEventNew>
                ((MessageRouter *)gMessageRouter,Message::Toturi,0,0x11);
    }
    std::string::string(asStack_10,"UIPlantfood");
    UIWidget::GetWidgetBySheetName(asStack_10);
    nop();
    std::string::~string(asStack_10);
    nop();
    PlantfoodUI::SetFreePlantfoodAddition(this_02,false);
    PlantfoodUI::SetBuyTutorialArrow(this_02,(Effect_BouncingArrow *)0x0);
    clearBouncingArrows(this);
    setState(this,7);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodPurchaseTutorialIntro::showPlantfoodPurchaseSuccessAdvice() */

void __thiscall
PlantfoodPurchaseTutorialIntro::showPlantfoodPurchaseSuccessAdvice
          (PlantfoodPurchaseTutorialIntro *this)

{
  Board *pBVar1;
  float fVar2;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  clearBouncingArrows(this);
  pBVar1 = *(Board **)(gLawnApp + 0x9f0);
  FUN_05478178(auStack_10,L"[ADVICE_BOUGHT_PLANTFOOD]",auStack_18);
  Board::DisplayAdvice(pBVar1,auStack_10,10,0);
  FUN_05476c50(auStack_10);
  nop();
  fVar2 = (float)PVZ_T();
  *(float *)(this + 0x178) = fVar2 + 5.0;
  setState(this,4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodPurchaseTutorialIntro::finishPlantfoodPurchaseTutorial() */

void __thiscall
PlantfoodPurchaseTutorialIntro::finishPlantfoodPurchaseTutorial
          (PlantfoodPurchaseTutorialIntro *this)

{
  char cVar1;
  bool bVar2;
  SeedBankNew *this_00;
  long lVar3;
  SeedPacket *pSVar4;
  StandaloneEffect *this_01;
  UIWidget *this_02;
  PlantfoodUI *this_03;
  int iVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (SeedBankNew *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  SeedBankNew::SetPacketsOnDisplay(this_00,false);
  for (iVar5 = 0; cVar1 = FUN_03f711d0(this_00[0x199]), iVar5 < cVar1; iVar5 = iVar5 + 1) {
    UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)this_00,iVar5);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    SeedPacket::GetPlantType();
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_10);
    if (cVar1 != '\0') {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      bVar2 = std::operator==((string *)(lVar3 + 8),"sunflower");
      if (bVar2) {
        pSVar4 = (SeedPacket *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
        SeedPacket::SetIsFlashing(pSVar4,false);
      }
      else {
        pSVar4 = (SeedPacket *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
        SeedPacket::SetDisabled(pSVar4,bVar2);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  this_01 = (StandaloneEffect *)FUN_03f711c4(*(undefined8 *)(this + 0x50));
  StandaloneEffect::SetVisibility(this_01,false);
  Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
  clearBouncingArrows(this);
  std::string::string((string *)aRStack_10,"UIGemBank");
  UIWidget::GetWidgetBySheetName((string *)aRStack_10);
  nop();
  std::string::~string((string *)aRStack_10);
  nop();
  UIWidget::SetVisible(this_02,true);
  GemBank::ClearFakeCurrency((GemBank *)this_02);
  this_02[0x163] = (UIWidget)0x1;
  std::string::string((string *)aRStack_10,"UIPlantfood");
  UIWidget::GetWidgetBySheetName((string *)aRStack_10);
  nop();
  std::string::~string((string *)aRStack_10);
  nop();
  PlantfoodUI::SetForceShowPlus(this_03,true);
  setState(this,0);
  this[0x170] = (PlantfoodPurchaseTutorialIntro)0x0;
  MessageRouter::Post<int,int,TutorialType,TutorialEventNew>
            ((MessageRouter *)gMessageRouter,Message::Toturi,0,0x12);
  PowerupCukeTutorialIntro::setState((PowerupCukeTutorialIntro *)this,7);
  (**(code **)(*(long *)this + 0x100))(this,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantfoodPurchaseTutorialIntro::onToolAppliedPlantFood(PlantGroup*) */

void PlantfoodPurchaseTutorialIntro::onToolAppliedPlantFood(PlantGroup *param_1)

{
  if (*(int *)(param_1 + 0x174) != 7) {
    return;
  }
  finishPlantfoodPurchaseTutorial((PlantfoodPurchaseTutorialIntro *)param_1);
  return;
}


/* PlantfoodPurchaseTutorialIntro::updatePlantfoodPurchaseTutorial() */

void __thiscall
PlantfoodPurchaseTutorialIntro::updatePlantfoodPurchaseTutorial
          (PlantfoodPurchaseTutorialIntro *this)

{
  int iVar1;
  char cVar2;
  BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
  *this_00;
  long lVar3;
  float fVar4;
  
  TutorialFinger::Update((TutorialFinger *)(this + 0x50));
  this_00 = (BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
             *)Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
  cVar2 = Sexy::
          BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
          ::SceneBegun(this_00);
  if (cVar2 == '\0') {
    (**(code **)(*(long *)this + 0x100))(this,1);
    iVar1 = *(int *)(this + 0x174);
  }
  else {
    iVar1 = *(int *)(this + 0x174);
  }
  if (iVar1 == 4) {
    fVar4 = (float)PVZ_T();
    if (*(float *)(this + 0x178) < fVar4) {
      finishPlantfoodPurchaseTutorial(this);
      return;
    }
  }
  else if (((iVar1 == 5) && (lVar3 = GetSunBank(), lVar3 != 0)) &&
          (cVar2 = FUN_03f711cc(*(undefined1 *)(lVar3 + 0x17b)), cVar2 == '\0')) {
    setState(this,6);
    return;
  }
  return;
}


/* PlantfoodPurchaseTutorialIntro::update() */

void __thiscall PlantfoodPurchaseTutorialIntro::update(PlantfoodPurchaseTutorialIntro *this)

{
  AnimationMgr *this_00;
  
  if (this[0x170] != (PlantfoodPurchaseTutorialIntro)0x0) {
    updatePlantfoodPurchaseTutorial(this);
  }
  this_00 = (AnimationMgr *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x150));
  AnimationMgr::Update(this_00);
  PowerupCukeTutorialIntro::update((PowerupCukeTutorialIntro *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodPurchaseTutorialIntro::onDaveShouldSpawnCoins() */

void __thiscall
PlantfoodPurchaseTutorialIntro::onDaveShouldSpawnCoins(PlantfoodPurchaseTutorialIntro *this)

{
  undefined8 uVar1;
  Collectable *extraout_x0;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  SexyVector3 *pSVar6;
  Collectable *local_40;
  string asStack_38 [8];
  Vec3 aVStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x174) == 1) {
    iVar5 = 5;
    EATextSquish::Vec3::Vec3(aVStack_30,240.0,400.0,0.0);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    do {
      pSVar6 = *(SexyVector3 **)(gLawnApp + 0x9f0);
      std::string::string(asStack_38,"gem_fake");
      Board::AddGemFake(pSVar6,(string *)aVStack_30);
      nop();
      local_40 = extraout_x0;
      std::string::~string(asStack_38);
      nop();
      Collectable::SetDisableTouch(local_40,true);
      Collectable::StartCollectAfterMotion(local_40);
      std::vector<Collectable*,std::allocator<Collectable*>>::push_back
                ((vector<Collectable*,std::allocator<Collectable*>> *)&local_20,&local_40);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    Board::FanOutCollectables
              (*(Board **)(gLawnApp + 0x9f0),(vector *)&local_20,(SexyVector3 *)aVStack_30);
    uVar4 = 0;
    while( true ) {
      uVar1 = local_20;
      uVar3 = FUN_03f711ec(local_20,local_18);
      if (uVar3 <= uVar4) break;
      puVar2 = (undefined8 *)FUN_03f711f8(uVar1,uVar4);
      Collectable::SetKeepOnBoard((Collectable *)*puVar2,false);
      uVar4 = uVar4 + 1;
    }
    setState(this,2);
    std::vector<Collectable*,std::allocator<Collectable*>>::~vector
              ((vector<Collectable*,std::allocator<Collectable*>> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodPurchaseTutorialIntro::onNarrationFinished() */

void __thiscall
PlantfoodPurchaseTutorialIntro::onNarrationFinished(PlantfoodPurchaseTutorialIntro *this)

{
  UIWidget *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIGemBank");
  this_00 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this_00 != (UIWidget *)0x0) {
    UIWidget::SetClickable(this_00,true);
  }
  if (*(int *)(this + 0x174) == 1) {
    onDaveShouldSpawnCoins(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

