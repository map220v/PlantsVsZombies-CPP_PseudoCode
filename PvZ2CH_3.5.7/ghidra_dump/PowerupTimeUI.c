// Class: PowerupTimeUI


/* PowerupTimeUI::unregisterForEvents() */

void __thiscall PowerupTimeUI::unregisterForEvents(PowerupTimeUI *this)

{
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  LawnApp::UnregisterBoardTouchGameplayObject(gLawnApp,this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupTimeUI::StaticClassInit() */

void PowerupTimeUI::StaticClassInit(void)

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
    std::string::string(asStack_10,"PowerupTimeUI");
    (*pcVar2)(plVar1,asStack_10,FUN_0430d870,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerupTimeUI::StaticGetClass() */

long * PowerupTimeUI::StaticGetClass(void)

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
  uVar2 = PowerupUI::StaticGetClass();
  (*pcVar3)(plVar1,"PowerupTimeUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PowerupTimeUI::GetClass() const */

long * PowerupTimeUI::GetClass(void)

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
  uVar2 = PowerupUI::StaticGetClass();
  (*pcVar3)(plVar1,"PowerupTimeUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PowerupTimeUI::showCukePackageUI() */

void PowerupTimeUI::showCukePackageUI(void)

{
  LawnApp *this;
  Widget *pWVar1;
  
  this = gLawnApp;
  pWVar1 = (Widget *)UICukePackage::create();
  LawnApp::showSpecifiedWidget(this,pWVar1,true,false);
  FUN_0430c89c(*(long *)(gLawnApp + 0x9f0) + 0xca9);
  Board::ClearCursors(*(Board **)(gLawnApp + 0x9f0));
  (**(code **)(**(long **)(gLawnApp + 0x9f0) + 800))(*(long **)(gLawnApp + 0x9f0),1);
  return;
}


/* PowerupTimeUI::PowerupTimeUI() */

void __thiscall PowerupTimeUI::PowerupTimeUI(PowerupTimeUI *this)

{
  PowerupUI::PowerupUI((PowerupUI *)this);
  *(undefined ***)this = &PTR_GetClass_06832450;
  *(undefined ***)(this + 0x10) = &PTR__PowerupTimeUI_068325f0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x198));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1a0));
  this[0x1a8] = (PowerupTimeUI)0x0;
  this[0x1a9] = (PowerupTimeUI)0x0;
  return;
}


/* PowerupTimeUI::StaticNew() */

PowerupTimeUI * PowerupTimeUI::StaticNew(void)

{
  PowerupTimeUI *this;
  
  this = ::operator_new(0x1c0);
  PowerupTimeUI(this);
  return this;
}


/* PowerupTimeUI::~PowerupTimeUI() */

void __thiscall PowerupTimeUI::~PowerupTimeUI(PowerupTimeUI *this)

{
  *(undefined ***)this = &PTR_GetClass_06832450;
  *(undefined ***)(this + 0x10) = &PTR__PowerupTimeUI_068325f0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198));
  PowerupUI::~PowerupUI((PowerupUI *)this);
  return;
}


/* non-virtual thunk to PowerupTimeUI::~PowerupTimeUI() */

void __thiscall PowerupTimeUI::~PowerupTimeUI(PowerupTimeUI *this)

{
  ~PowerupTimeUI(this + -0x10);
  return;
}


/* PowerupTimeUI::~PowerupTimeUI() */

void __thiscall PowerupTimeUI::~PowerupTimeUI(PowerupTimeUI *this)

{
  ~PowerupTimeUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PowerupTimeUI::~PowerupTimeUI() */

void __thiscall PowerupTimeUI::~PowerupTimeUI(PowerupTimeUI *this)

{
  ~PowerupTimeUI(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupTimeUI::setSomeUIsClickableInBetweenTutorial(bool) const */

void __thiscall
PowerupTimeUI::setSomeUIsClickableInBetweenTutorial(PowerupTimeUI *this,bool param_1)

{
  char cVar1;
  UIWidget *pUVar2;
  UINewPVPTopZombieQueue *this_00;
  int iVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIShovel");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetClickable(pUVar2,param_1);
  }
  std::string::string(asStack_10,"UIPlantfood");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetClickable(pUVar2,param_1);
  }
  std::string::string(asStack_10,"UISeedBank");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetClickable(pUVar2,param_1);
  }
  this_00 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  for (iVar3 = 0; cVar1 = FUN_0430c898(this_00[0x199]), iVar3 < cVar1; iVar3 = iVar3 + 1) {
    UINewPVPTopZombieQueue::gettItem(this_00,iVar3);
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    UIWidget::SetClickable(pUVar2,param_1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupTimeUI::shouldShowCukePackageUI() */

void PowerupTimeUI::shouldShowCukePackageUI(void)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  ProfileMgr *this;
  PlayerInfo *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((((*(Board **)(gLawnApp + 0x9f0) == (Board *)0x0) ||
       (cVar1 = Board::IsDangerRoom(*(Board **)(gLawnApp + 0x9f0)), cVar1 == '\0')) &&
      (cVar1 = LawnApp::IsNetworkModuleOK(), cVar1 != '\0')) &&
     (cVar1 = FUN_0430c884(*(undefined1 *)(*(long *)(gLawnApp + 0x9f0) + 0xca9)), cVar1 == '\0')) {
    this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
    iVar3 = PlayerInfo::GetMonthlyCukeUsesLeft(this_00);
    if (iVar3 < 1) {
      std::string::string(asStack_10,"poweruptacticalcuke");
      iVar3 = PlayerInfo::GetPowerupUsesLeft(this_00,asStack_10);
      std::string::~string(asStack_10);
      nop();
      if (iVar3 < 1) {
        bVar2 = PlayerInfo::getHasPurchaseCukePkg(this_00);
        bVar2 = bVar2 ^ 1;
        goto LAB_0430cea0;
      }
    }
  }
  bVar2 = 0;
LAB_0430cea0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupTimeUI::onInitialized() */

void __thiscall PowerupTimeUI::onInitialized(PowerupTimeUI *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  Effect_PopAnim *pEVar1;
  ResourceInfo *pRVar2;
  StandaloneEffect *this_01;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x198);
  this[0x1a8] = (PowerupTimeUI)0x0;
  this[0x1a9] = (PowerupTimeUI)0x0;
  this[0x1aa] = (PowerupTimeUI)0x0;
  this[0x1b8] = (PowerupTimeUI)0x0;
  *(undefined8 *)(this + 0x1b0) = 0;
  local_8 = ___stack_chk_guard;
  Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  pEVar1 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  std::string::string(asStack_18,"POPANIM_EFFECTS_POWER_UP_CUKE_BUTTON_FIRE");
  GetPAMByName(asStack_18);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_10);
  Effect_PopAnim::CreatePopAnimRig(pEVar1,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  nop();
  pEVar1 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Effect_PopAnim::SetCentered(pEVar1,true);
  this_01 = (StandaloneEffect *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  StandaloneEffect::SetKeepAlive(this_01,true);
  pEVar1 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  std::string::string((string *)aRStack_10,"CUKE_FIRE");
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(pEVar1,aRStack_10,0);
  std::string::~string((string *)aRStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerupTimeUI::cancelTouch() */

void __thiscall PowerupTimeUI::cancelTouch(PowerupTimeUI *this)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)this);
  bVar1 = std::operator==((string *)(lVar2 + 0x38),"POWERUP_CUKE");
  if ((bVar1) && (this[0x1a8] != (PowerupTimeUI)0x0)) {
    this[0x1a8] = (PowerupTimeUI)0x0;
    MessageRouter::Post<bool,bool>((MessageRouter *)gMessageRouter,Message::ShowCukeConfirm,false);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupTimeUI::registerForEvents() */

void __thiscall PowerupTimeUI::registerForEvents(PowerupTimeUI *this)

{
  Board *pBVar1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_a0 [8];
  CBMemberTranslatorX aCStack_98 [24];
  CBMemberTranslatorX aCStack_80 [24];
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar1 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,handleTouch);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<PowerupTimeUI,bool(PowerupTimeUI::*)(Sexy::Touch_const&)>(aDStack_68,aCStack_98);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_a0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,cancelTouch);
  Sexy::Delegate0::Delegate0<PowerupTimeUI,void(PowerupTimeUI::*)()>(aDStack_38,aCStack_80);
  Board::RegisterTouchGameplayObject(pBVar1,aDStack_68,4,a_Stack_a0,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_a0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupTimeUI::CalcConfirmationRect() */

void __thiscall PowerupTimeUI::CalcConfirmationRect(PowerupTimeUI *this)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  Insets *in_x8;
  int local_18;
  int local_14;
  
  lVar1 = ___stack_chk_guard;
  UIWidget::GetDrawRect();
  Sexy::Insets::Insets(in_x8);
  iVar2 = FUN_0430c9a4(0xffffffec);
  *(int *)in_x8 = local_18 + iVar2;
  lVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af8c38);
  *(undefined4 *)(in_x8 + 8) = *(undefined4 *)(lVar3 + 0x38);
  iVar2 = FUN_0430c9a4(0xffffff9c);
  *(int *)(in_x8 + 4) = local_14 + iVar2;
  lVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af8c38);
  lVar3 = ___stack_chk_guard;
  *(undefined4 *)(in_x8 + 0xc) = *(undefined4 *)(lVar4 + 0x3c);
  if (lVar1 == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupTimeUI::handleTouch(Sexy::Touch const&) */

void __thiscall PowerupTimeUI::handleTouch(PowerupTimeUI *this,Touch *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  char cVar5;
  PowerupType *pPVar6;
  Board *this_00;
  TRect<int> aTStack_50 [16];
  Touch aTStack_40 [16];
  int local_30;
  int local_2c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar5 = FUN_0430cbd8(*(undefined4 *)(this + 0x68));
  if ((cVar5 != '\0') && (cVar5 = UIWidget::IsVisible((UIWidget *)this), cVar5 != '\0')) {
    cVar5 = FUN_0430c87c(this[400]);
    if (cVar5 == '\0') {
      Sexy::Touch::Touch(aTStack_40,param_1);
      Board::TranslateBoardPositionToScreenPosition
                (*(Board **)(gLawnApp + 0x9f0),(Point *)&local_30);
      iVar3 = *(int *)(param_1 + 0x30);
      iVar1 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x48) + local_30;
      iVar2 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x4c) + local_2c;
      if (iVar3 == 3) {
        if (this[0x1a8] == (PowerupTimeUI)0x0) goto LAB_0430d47c;
        if (this[0x1a9] == (PowerupTimeUI)0x0) {
          CalcConfirmationRect(this);
          cVar5 = Sexy::TRect<int>::Contains(aTStack_50,iVar1,iVar2);
          lVar4 = gLawnApp;
          if (cVar5 != '\0') {
            this[0x1a8] = (PowerupTimeUI)0x0;
            this_00 = *(Board **)(lVar4 + 0x9f0);
            pPVar6 = (PowerupType *)UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)this);
            Board::SelectPowerup(this_00,pPVar6,false);
            goto LAB_0430d390;
          }
          goto LAB_0430d47c;
        }
      }
      else {
        if (iVar3 != 4) {
          cVar5 = '\0';
          if ((iVar3 == 0) && (cVar5 = '\0', this[0x1a8] != (PowerupTimeUI)0x0)) {
            CalcConfirmationRect(this);
            cVar5 = Sexy::TRect<int>::Contains(aTStack_50,iVar1,iVar2);
          }
          goto LAB_0430d390;
        }
LAB_0430d47c:
        if (this[0x1a9] == (PowerupTimeUI)0x0) goto LAB_0430d384;
      }
      this[0x1a9] = (PowerupTimeUI)0x0;
      cVar5 = '\0';
      goto LAB_0430d390;
    }
  }
LAB_0430d384:
  cancelTouch(this);
  cVar5 = '\0';
LAB_0430d390:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupTimeUI::CalcCukeRect() */

void __thiscall PowerupTimeUI::CalcCukeRect(PowerupTimeUI *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  Insets *in_x8;
  undefined4 local_18;
  undefined4 local_14;
  
  lVar1 = ___stack_chk_guard;
  UIWidget::GetDrawRect();
  Sexy::Insets::Insets(in_x8);
  *(undefined4 *)in_x8 = local_18;
  lVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af8d80);
  *(undefined4 *)(in_x8 + 8) = *(undefined4 *)(lVar2 + 0x38);
  *(undefined4 *)(in_x8 + 4) = local_14;
  lVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af8d80);
  lVar2 = ___stack_chk_guard;
  *(undefined4 *)(in_x8 + 0xc) = *(undefined4 *)(lVar3 + 0x3c);
  if (lVar1 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupTimeUI::OnTouch(Sexy::Touch const&) */

void __thiscall PowerupTimeUI::OnTouch(PowerupTimeUI *this,Touch *param_1)

{
  PowerupTimeUI PVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined8 uVar6;
  Collectable *this_00;
  long *plVar7;
  Insets *pIVar8;
  long lVar9;
  PowerupManager *pPVar10;
  PowerupType *pPVar11;
  int extraout_w1;
  Board *pBVar12;
  float fVar13;
  float fVar14;
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [8];
  RtId aRStack_38 [16];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = FUN_0430c87c(this[400]);
  if ((cVar2 == '\0') && (*(int *)(param_1 + 0x30) == 0)) {
    uVar6 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable(aIStack_28,uVar6,0x2e);
    while( true ) {
      cVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
      if (!(bool)cVar2) break;
      Sexy::RtDbTable::Iterator::operator*(aIStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)aRStack_38);
      Sexy::RtId::~RtId(aRStack_38);
      this_00 = (Collectable *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
      cVar2 = Collectable::IsCollecting(this_00);
      if (cVar2 == '\0') {
        fVar13 = (float)FUN_0430c994((float)*(int *)(param_1 + 0x10));
        fVar14 = (float)FUN_0430c994((float)*(int *)(param_1 + 0x14));
        plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
        pIVar8 = (Insets *)(**(code **)(*plVar7 + 0x178))();
        Sexy::Insets::Insets((Insets *)aRStack_38,pIVar8);
        cVar2 = Sexy::TRect<int>::Contains((TRect<int> *)aRStack_38,(int)fVar13,(int)fVar14);
        if (cVar2 != '\0') {
          *(undefined8 *)(this + 0x1b0) = *(undefined8 *)param_1;
          this[0x1b8] = (PowerupTimeUI)0x1;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
          Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
          cVar2 = '\0';
          goto LAB_0430d5e0;
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
      Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
    }
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
    pBVar12 = *(Board **)(gLawnApp + 0x9f0);
    uVar5 = FUN_0430c880(*(undefined4 *)(pBVar12 + 0x104));
    if (((uVar5 - 9 < 2) || ((uVar5 & 0xfffffffb) == 3)) ||
       (cVar3 = Board::IsThereCachedCursor(pBVar12), cVar3 != '\0')) goto LAB_0430d5e0;
    lVar9 = Board::GetActivePowerup(*(Board **)(gLawnApp + 0x9f0));
    if (lVar9 == 0) {
      lVar9 = UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)this);
      bVar4 = std::operator!=((string *)(lVar9 + 0x38),"POWERUP_CUKE");
      if (bVar4) {
        pPVar10 = (PowerupManager *)Board::GetPowerupManager(*(Board **)(gLawnApp + 0x9f0));
        lVar9 = UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)this);
        cVar2 = PowerupManager::IsMiniGamePerkPowerUp(pPVar10,(string *)(lVar9 + 8));
        if (cVar2 == '\0') {
          pBVar12 = *(Board **)(gLawnApp + 0x9f0);
          pPVar11 = (PowerupType *)UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)this);
          Board::SelectPowerup(pBVar12,pPVar11,false);
          cVar2 = '\x01';
          goto LAB_0430d5e0;
        }
      }
      pPVar10 = (PowerupManager *)Board::GetPowerupManager(*(Board **)(gLawnApp + 0x9f0));
      lVar9 = UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)this);
      cVar2 = PowerupManager::IsMiniGamePerkPowerUp(pPVar10,(string *)(lVar9 + 8));
      if (cVar2 == '\0') {
        cVar2 = shouldShowCukePackageUI();
        if (cVar2 == '\0') {
          cVar2 = '\x01';
          PVar1 = (PowerupTimeUI)((byte)this[0x1a8] ^ 1);
          this[0x1a9] = PVar1;
          this[0x1a8] = PVar1;
          MessageRouter::Post<bool,bool>
                    ((MessageRouter *)gMessageRouter,Message::ShowCukeConfirm,(bool)PVar1);
        }
        else {
          showCukePackageUI();
        }
      }
      else {
        pBVar12 = *(Board **)(gLawnApp + 0x9f0);
        pPVar11 = (PowerupType *)UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)this);
        Board::SelectPowerup(pBVar12,pPVar11,false);
      }
      goto LAB_0430d5e0;
    }
  }
  cVar2 = '\0';
LAB_0430d5e0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* PowerupTimeUI::onDestroy() */

void __thiscall PowerupTimeUI::onDestroy(PowerupTimeUI *this)

{
  bool bVar1;
  long *plVar2;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x198));
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198));
    (**(code **)(*plVar2 + 0x48))();
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x1a0));
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a0));
    (**(code **)(*plVar2 + 0x48))();
  }
  UIWidget::onDestroy((UIWidget *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupTimeUI::Draw(Sexy::Graphics*) */

void __thiscall PowerupTimeUI::Draw(PowerupTimeUI *this,Graphics *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  PowerupTimeUI PVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  StandaloneEffect *pSVar8;
  BasePowerup *this_01;
  long lVar9;
  long lVar10;
  ResourceInfo *pRVar11;
  ResourceInfo *pRVar12;
  ResourceInfo *pRVar13;
  PowerupManager *pPVar14;
  PowerupType *pPVar15;
  BasePowerup *pBVar16;
  float *pfVar17;
  Image *pIVar18;
  ulong uVar19;
  ProfileMgr *this_02;
  undefined8 uVar20;
  Board *this_03;
  float fVar21;
  GraphicsAutoState aGStack_48 [8];
  float local_40;
  int local_3c;
  Insets aIStack_38 [16];
  undefined4 local_28 [4];
  int local_18;
  int local_14;
  int local_10;
  long local_8;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198);
  local_8 = ___stack_chk_guard;
  pSVar8 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  StandaloneEffect::SetVisibility(pSVar8,false);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_48,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  this_01 = (BasePowerup *)Board::GetSelectedPowerup(*(Board **)(gLawnApp + 0x9f0));
  if (this_01 == (BasePowerup *)0x0) {
    bVar2 = false;
  }
  else {
    lVar9 = BasePowerup::GetType(this_01);
    lVar10 = UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)this);
    bVar2 = lVar9 == lVar10;
  }
  PlantWarsLevelSelectUI::GetLevelDefinitionPtr();
  pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  PowerupUI::GetPowerupDownImage();
  pRVar12 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  PowerupUI::GetPowerupWarningImage();
  pRVar13 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  lVar9 = UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)this);
  Sexy::Insets::Insets(aIStack_38,(Insets *)(lVar9 + 0x28));
  pPVar14 = (PowerupManager *)Board::GetPowerupManager(*(Board **)(gLawnApp + 0x9f0));
  pPVar15 = (PowerupType *)UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)this);
  pBVar16 = (BasePowerup *)PowerupManager::GetBasePowerup(pPVar14,pPVar15);
  cVar3 = FUN_0430c87c(this[400]);
  if (cVar3 == '\0') {
    cVar3 = FUN_0430cbd8(*(undefined4 *)(this + 0x68));
    if (cVar3 == '\0') {
      PVar1 = this[0x163];
    }
    else {
      cVar3 = FUN_0430c894(*(undefined4 *)(pBVar16 + 0x20));
      if (cVar3 != '\0') goto joined_r0x0430dcf8;
      PVar1 = this[0x163];
    }
    if (PVar1 != (PowerupTimeUI)0x0) goto joined_r0x0430dcf8;
  }
  Sexy::Color::Color((Color *)&local_18,0x80,0x80,0x80);
  Sexy::Graphics::SetColor(param_1,(Color *)&local_18);
  Sexy::Graphics::SetColorizeImages(param_1,true);
joined_r0x0430dcf8:
  if (bVar2) {
    iVar4 = FUN_0430c9a4(3);
    iVar5 = FUN_0430c9a4(0);
    Sexy::Graphics::DrawImage(param_1,(Image *)pRVar12,iVar4,iVar5);
    local_18 = 0x3f800000;
    fVar21 = (float)FUN_0430c890(*(undefined4 *)(this_01 + 0x1c));
    lVar9 = BasePowerup::GetType(this_01);
    local_40 = fVar21 / *(float *)(lVar9 + 0x68);
    local_28[0] = 0;
    pfVar17 = eastl::max_alt<float>(&local_40,(float *)local_28);
    pfVar17 = eastl::min_alt<float>((float *)&local_18,pfVar17);
    fVar21 = *pfVar17;
    iVar4 = FUN_0430c86c(*(undefined4 *)(this + 0x38));
    iVar5 = FUN_0430c870(*(undefined4 *)(this + 0x3c));
    iVar6 = FUN_0430c9a4(2);
    Sexy::Insets::Insets((Insets *)&local_18,aIStack_38);
    Sexy::Insets::Insets((Insets *)local_28,0,0,0,0);
    DrawRadialCooldown(fVar21,(float)(iVar4 / 2),(float)(iVar5 / 2),(float)(iVar4 / 2 - iVar6),
                       param_1,(RtWeakPtr *)&local_18,(Insets *)local_28);
    PVar1 = this[0x1a8];
  }
  else {
    if ((pBVar16 == (BasePowerup *)0x0) || (cVar3 = FUN_0430c88c(pBVar16[0x1b]), cVar3 == '\0')) {
      iVar4 = FUN_0430c9a4(3);
      iVar5 = FUN_0430c9a4(0);
      Sexy::Graphics::DrawImage(param_1,(Image *)pRVar11,iVar4,iVar5);
    }
    else {
      UIWidget::GetDrawRect();
      Sexy::Point::Point((Point *)&local_40,local_18,local_14);
      this_03 = *(Board **)(gLawnApp + 0x9f0);
      local_40 = (float)((int)local_40 - *(int *)(this_03 + 0x48));
      local_3c = local_3c - *(int *)(this_03 + 0x4c);
      Board::TranslateScreenPositionToBoardPosition(this_03,(Point *)&local_40);
      pSVar8 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      iVar4 = FUN_0430c980();
      Sexy::FastCurve::SetOutRange
                ((FastCurve *)local_28,(float)((int)local_40 + local_10 / 2),
                 (float)(local_3c + iVar4));
      StandaloneEffect::SetScreenSpaceOrigin(pSVar8,(SexyVector2 *)local_28,0xaae61);
      pSVar8 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      StandaloneEffect::SetVisibility(pSVar8,true);
      iVar4 = FUN_0430c9a4(3);
      iVar5 = FUN_0430c9a4(0);
      Sexy::Graphics::DrawImage(param_1,(Image *)pRVar13,iVar4,iVar5);
    }
    PVar1 = this[0x1a8];
  }
  if (PVar1 != (PowerupTimeUI)0x0) {
    pIVar18 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af8c38);
    iVar4 = FUN_0430c9a4(0xffffffec);
    iVar5 = FUN_0430c9a4(0xffffff9c);
    Sexy::Graphics::DrawImage(param_1,pIVar18,iVar4,iVar5);
    iVar6 = FUN_0430c9a4(0xffffffec);
    lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af8c38);
    iVar4 = *(int *)(lVar9 + 0x38);
    iVar7 = FUN_0430c9a4(0xffffff9c);
    lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af8c38);
    iVar5 = *(int *)(lVar9 + 0x3c);
    lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af8c38);
    Sexy::Insets::Insets
              ((Insets *)local_28,(int)((float)iVar6 + (float)iVar4 * 0.5),
               (int)((float)iVar7 + (float)iVar5 * 0.675),200,
               (int)((float)*(int *)(lVar9 + 0x3c) * 0.20499998));
    pPVar14 = (PowerupManager *)Board::GetPowerupManager(*(Board **)(gLawnApp + 0x9f0));
    uVar19 = PowerupManager::GetCurrentPowerCost(pPVar14,pBVar16);
    uVar19 = uVar19 & 0xffffffff;
    this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::GetCurrentProfile(this_02);
    cVar3 = FUN_0430c888(pBVar16[0x1a]);
    if ((cVar3 != '\0') || (this[0x1aa] != (PowerupTimeUI)0x0)) {
      uVar19 = 0;
    }
    Sexy::StrFormat(L"%d",&local_40,uVar19);
    uVar20 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_20);
    Sexy::Color::Color((Color *)&local_18,0);
    WriteWordInRect(param_1,&local_40,(Insets *)local_28,uVar20,(RtWeakPtr *)&local_18,3,0);
    FUN_05476c50(&local_40);
  }
  PowerupUI::Draw((PowerupUI *)this,param_1);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PowerupTimeUI::Draw(Sexy::Graphics*) */

void __thiscall PowerupTimeUI::Draw(PowerupTimeUI *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

