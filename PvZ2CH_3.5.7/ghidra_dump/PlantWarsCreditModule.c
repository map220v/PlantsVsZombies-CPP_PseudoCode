// Class: PlantWarsCreditModule


/* PlantWarsCreditModule::onLevelEnded() */

void __thiscall PlantWarsCreditModule::onLevelEnded(PlantWarsCreditModule *this)

{
  PlantWarsUtils::SetCurrentLevelNodeScore(*(int *)(this + 0x18));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsCreditModule::StaticClassInit() */

void PlantWarsCreditModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantWarsCreditModule");
    (*pcVar2)(plVar1,asStack_10,FUN_03416178,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWarsCreditModule::StaticGetClass() */

long * PlantWarsCreditModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantWarsCreditModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantWarsCreditModule::PlantWarsCreditModule() */

void __thiscall PlantWarsCreditModule::PlantWarsCreditModule(PlantWarsCreditModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_066208e0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x30));
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  this[0x20] = (PlantWarsCreditModule)0x0;
  return;
}


/* PlantWarsCreditModule::StaticNew() */

PlantWarsCreditModule * PlantWarsCreditModule::StaticNew(void)

{
  PlantWarsCreditModule *this;
  
  this = ::operator_new(0x38);
  PlantWarsCreditModule(this);
  return this;
}


/* PlantWarsCreditModule::~PlantWarsCreditModule() */

void __thiscall PlantWarsCreditModule::~PlantWarsCreditModule(PlantWarsCreditModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_066208e0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* PlantWarsCreditModule::~PlantWarsCreditModule() */

void __thiscall PlantWarsCreditModule::~PlantWarsCreditModule(PlantWarsCreditModule *this)

{
  ~PlantWarsCreditModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsCreditModule::createAddCreditEffect(int) */

void __thiscall
PlantWarsCreditModule::createAddCreditEffect(PlantWarsCreditModule *this,int param_1)

{
  RtMixedPtr<Sexy::Image> *this_00;
  char cVar1;
  Effect_FloatingText *pEVar2;
  PresentDisplayRect *this_01;
  wstring *pwVar3;
  code *pcVar4;
  TPoint aTStack_48 [8];
  Point aPStack_40 [8];
  Point aPStack_38 [8];
  undefined8 local_30;
  undefined1 auStack_28 [8];
  int local_20;
  undefined8 local_18 [2];
  long local_8;
  
  this_00 = (RtMixedPtr<Sexy::Image> *)(this + 0x30);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(this_00);
  if (cVar1 != '\0') {
    pEVar2 = Board::AddEffect<Effect_FloatingText>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string((string *)local_18,"UIPlantWarsCreditUI");
    UIWidget::GetWidgetBySheetName((string *)local_18);
    UIWidget::GetDrawRect();
    std::string::~string((string *)local_18);
    nop();
    Board::GetBoardBaseOffset();
    Sexy::Point::Point(aPStack_40,local_20 / 2,0);
    Sexy::TRect<int>::GetCenter();
    Sexy::TPoint<int>::operator+((TPoint<int> *)&local_30,(TPoint *)aPStack_40);
    Sexy::Point::Point(aPStack_38,(TPoint *)local_18);
    Board::TranslateUIWidgetPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),aPStack_38);
    Sexy::TPoint<int>::operator-=((TPoint<int> *)aPStack_38,aTStack_48);
    ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
              ((ResistenceValueInfo *)&local_30);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)local_18,(float)*(int *)(gLawnApp + 0xd4) * 0.95,
               (float)*(int *)(gLawnApp + 0xd8) * 0.18);
    local_30 = local_18[0];
    StandaloneEffect::SetScreenSpaceOrigin
              ((StandaloneEffect *)pEVar2,(SexyVector2 *)&local_30,0xdbba1);
    Effect_FloatingText::SetStyle(pEVar2,9);
    pcVar4 = *(code **)(*(long *)pEVar2 + 0x78);
    Sexy::Color::Color((Color *)local_18,1);
    (*pcVar4)(pEVar2,(string *)local_18);
    StandaloneEffect::SetIsScreenSpaceEffect((StandaloneEffect *)pEVar2,true);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  }
  pEVar2 = (Effect_FloatingText *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Effect_FloatingText::SetDuration(pEVar2,1.5);
  this_01 = (PresentDisplayRect *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  PresentDisplayRect::SetPAMScale(this_01,1.5);
  TodStringTranslate(L"[PLANT_WARS_CREDIT_TEXT]");
  TodReplaceNumberString((wstring *)local_18,L"{NUMBER}",param_1);
  FUN_05476c50((string *)local_18);
  pwVar3 = (wstring *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Effect_FloatingText::SetText(pwVar3);
  FUN_05476c50(auStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsCreditModule::addCredit(int) */

void __thiscall PlantWarsCreditModule::addCredit(PlantWarsCreditModule *this,int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int *piVar5;
  PlantWarsCreditUI *this_00;
  int local_c;
  long local_8;
  
  iVar1 = *(int *)(this + 0x18);
  local_8 = ___stack_chk_guard;
  local_c = iVar1 + param_1;
  piVar5 = eastl::min_alt<int>(&local_c,(int *)(this + 0x24));
  uVar2 = *piVar5 - iVar1;
  *(int *)(this + 0x18) = *piVar5;
  uVar3 = (int)uVar2 >> 0x1f;
  *(uint *)(this + 0x1c) = *(int *)(this + 0x1c) + ((uVar2 ^ uVar3) - uVar3);
  bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x28));
  if (bVar4) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
    nop();
    PlantWarsCreditUI::SetCurrentCredit
              (this_00,*(int *)(this + 0x1c),*(int *)(this + 0x18) == *(int *)(this + 0x24));
  }
  if (local_8 == ___stack_chk_guard) {
    createAddCreditEffect(this,param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsCreditModule::gameplayStarted() */

void __thiscall PlantWarsCreditModule::gameplayStarted(PlantWarsCreditModule *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  UIWidget *this_01;
  RtObject *this_02;
  NextWaveButton *this_03;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  PlantWarsCreditUI *this_04;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  this[0x20] = (PlantWarsCreditModule)0x1;
  local_8 = ___stack_chk_guard;
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x28);
  Sexy::RtName::RtName((RtName *)&local_20,L"UIPlantWarsCreditUI");
  UIWidget::CreateWidget((RtName *)&local_20,1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  Sexy::RtName::~RtName((RtName *)&local_20);
  this_01 = (UIWidget *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  UIWidget::SetClickable(this_01,true);
  Sexy::RtName::RtName((RtName *)&local_20,L"UIPeaRainProgressMeter");
  UIWidget::CreateWidget((RtName *)&local_20,1);
  Sexy::RtName::~RtName((RtName *)&local_20);
  std::string::string((string *)&local_20,"UINextWaveButton");
  this_02 = (RtObject *)UIWidget::GetWidgetBySheetName((string *)&local_20);
  this_03 = Sexy::RtObject::Cast<NextWaveButton>(this_02);
  std::string::~string((string *)&local_20);
  nop();
  if (this_03 != (NextWaveButton *)0x0) {
    UIWidget::SetVisible((UIWidget *)this_03,false);
    FUN_034137f4(this_03 + 0x189);
  }
  uVar5 = Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
  FUN_05475d88(aRStack_28,uVar5);
  FUN_05475d88((RtName *)&local_20,aRStack_28);
  iVar2 = PlantWarsUtils::CalcNodeType((RtName *)&local_20);
  std::string::~string((string *)&local_20);
  if (iVar2 == 1) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    PlantWarsUtils::GetCurrentLevelScoreList((vector *)&local_20);
    lVar6 = FUN_03413720(local_20,local_18);
    if (lVar6 != 0) {
      piVar7 = (int *)FUN_034137f0(local_20);
      *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + *piVar7;
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this_00);
      if (bVar1) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        nop();
        PlantWarsCreditUI::SetCurrentCredit(this_04,*(int *)(this + 0x1c),false);
      }
    }
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_20);
  }
  iVar3 = PlantWarsUtils::GetCurfentLevelIndex();
  uVar4 = PlantWarsUtils::GetLevelTargetScore(iVar3,iVar2);
  *(undefined4 *)(this + 0x24) = uVar4;
  std::string::~string((string *)aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsCreditModule::GetTargetCredit(std::string const&) */

void __thiscall PlantWarsCreditModule::GetTargetCredit(PlantWarsCreditModule *this,string *param_1)

{
  bool bVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  long lVar3;
  undefined4 uVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  local_18 = std::
             map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
             ::find((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                     *)(pRVar2 + 0x40),param_1);
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(pRVar2 + 0x40));
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  uVar4 = 0;
  if (bVar1) {
    lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    uVar4 = *(undefined4 *)(lVar3 + 8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* PlantWarsCreditModule::onGotCredit(Zombie*) */

void __thiscall PlantWarsCreditModule::onGotCredit(PlantWarsCreditModule *this,Zombie *param_1)

{
  char cVar1;
  int iVar2;
  string *psVar3;
  
  if ((((this[0x20] != (PlantWarsCreditModule)0x0) &&
       (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0)) &&
      (cVar1 = Board::IsGameplayEnded(*(Board **)(gLawnApp + 0x9f0)), cVar1 == '\0')) &&
     (cVar1 = MiniGamePerksModule::CheckCanCredit((MiniGamePerksModule *)this,param_1),
     cVar1 != '\0')) {
    psVar3 = (string *)Zombie::GetTypeName(param_1);
    iVar2 = GetTargetCredit(this,psVar3);
    addCredit(this,iVar2);
    return;
  }
  return;
}


/* PlantWarsCreditModule::onZombieDestroyed(Zombie*) */

void __thiscall
PlantWarsCreditModule::onZombieDestroyed(PlantWarsCreditModule *this,Zombie *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_03413718(*(undefined4 *)(param_1 + 0x24));
  if ((iVar2 != 1) && (cVar1 = Zombie::HasHypnotized(param_1), cVar1 == '\0')) {
    onGotCredit(this,param_1);
    return;
  }
  return;
}


/* PlantWarsCreditModule::onZombieHypnotized(Zombie*) */

void __thiscall
PlantWarsCreditModule::onZombieHypnotized(PlantWarsCreditModule *this,Zombie *param_1)

{
  char cVar1;
  
  cVar1 = Zombie::HasHypnotized(param_1);
  if (cVar1 != '\0') {
    return;
  }
  onGotCredit(this,param_1);
  Zombie::SetHasHypnotized(param_1,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsCreditModule::registerForEvents() */

void __thiscall PlantWarsCreditModule::registerForEvents(PlantWarsCreditModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  CBMemberTranslatorX aCStack_80 [24];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDestroyed);
  local_90 = local_58;
  local_a0 = local_68;
  uStack_98 = uStack_60;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<PlantWarsCreditModule,void(PlantWarsCreditModule::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieDestroyed,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieHypnotized);
  local_a0 = local_50;
  uStack_98 = uStack_48;
  local_90 = local_40;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<PlantWarsCreditModule,void(PlantWarsCreditModule::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieHypnotized,&local_a0);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayStarted);
  Sexy::Delegate0::Delegate0<PlantWarsCreditModule,void(PlantWarsCreditModule::*)()>
            (aDStack_38,aCStack_80);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLevelEnded);
  Sexy::Delegate0::Delegate0<PlantWarsCreditModule,void(PlantWarsCreditModule::*)()>
            (aDStack_38,aCStack_80);
  LevelModuleManager::RegisterOnGameplayEnded(pLVar2,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

