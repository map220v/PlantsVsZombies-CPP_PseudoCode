// Class: PowerupUI


/* PowerupUI::GetPowerupDownImage() */

RtWeakPtr<Sexy::SoundResource> * PowerupUI::GetPowerupDownImage(void)

{
  long in_x0;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(in_x0 + 0x178));
  return in_x8;
}


/* PowerupUI::GetPowerupWarningImage() */

RtWeakPtr<Sexy::SoundResource> * PowerupUI::GetPowerupWarningImage(void)

{
  long in_x0;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(in_x0 + 0x180));
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupUI::StaticClassInit() */

void PowerupUI::StaticClassInit(void)

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
    std::string::string(asStack_10,"PowerupUI");
    (*pcVar2)(plVar1,asStack_10,FUN_04316950,0x198,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerupUI::StaticGetClass() */

long * PowerupUI::StaticGetClass(void)

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
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"PowerupUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PowerupUI::GetClass() const */

long * PowerupUI::GetClass(void)

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
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"PowerupUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PowerupUI::SetIsLocked(bool) */

void __thiscall PowerupUI::SetIsLocked(PowerupUI *this,bool param_1)

{
  this[400] = (PowerupUI)param_1;
  return;
}


/* PowerupUI::onGameplayEnded() */

void __thiscall PowerupUI::onGameplayEnded(PowerupUI *this)

{
  UIWidget::SetClickable((UIWidget *)this,false);
  this[0x163] = (PowerupUI)0x1;
  return;
}


/* PowerupUI::~PowerupUI() */

void __thiscall PowerupUI::~PowerupUI(PowerupUI *this)

{
  *(undefined ***)this = &PTR_GetClass_06833100;
  *(undefined ***)(this + 0x10) = &PTR__PowerupUI_068332a0;
  if (*(long **)(this + 0x188) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x188) + 0x18))();
    *(undefined8 *)(this + 0x188) = 0;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x180));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x178));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x170));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x168));
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to PowerupUI::~PowerupUI() */

void __thiscall PowerupUI::~PowerupUI(PowerupUI *this)

{
  ~PowerupUI(this + -0x10);
  return;
}


/* PowerupUI::~PowerupUI() */

void __thiscall PowerupUI::~PowerupUI(PowerupUI *this)

{
  ~PowerupUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PowerupUI::~PowerupUI() */

void __thiscall PowerupUI::~PowerupUI(PowerupUI *this)

{
  ~PowerupUI(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupUI::PowerupUI() */

void __thiscall PowerupUI::PowerupUI(PowerupUI *this)

{
  long lVar1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined ***)this = &PTR_GetClass_06833100;
  *(undefined ***)(this + 0x10) = &PTR__PowerupUI_068332a0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x168));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x170));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x178));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x180));
  this[0x163] = (PowerupUI)0x0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x170),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x178),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x180),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  *(undefined8 *)(this + 0x188) = 0;
  lVar1 = ___stack_chk_guard;
  this[400] = (PowerupUI)0x0;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerupUI::StaticNew() */

PowerupUI * PowerupUI::StaticNew(void)

{
  PowerupUI *this;
  
  this = ::operator_new(0x198);
  PowerupUI(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupUI::SetPowerupType(Sexy::RtWeakPtr<PowerupType>) */

void __thiscall PowerupUI::SetPowerupType(PowerupUI *this,RtWeakPtr *param_2)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  string *psVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  string asStack_18 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0x168);
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,param_2);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x170),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x178),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x180),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this_00);
  psVar1 = gLawnApp;
  if (bVar2) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    LawnApp::GetUIImageFromStringId(psVar1);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x170),(RtWeakPtr *)a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
    psVar1 = gLawnApp;
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    uVar4 = FUN_0547429c(lVar3 + 0x18);
    Sexy::StrFormat("%s_DOWN",asStack_18,uVar4);
    LawnApp::GetUIImageFromStringId(psVar1);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x178),(RtWeakPtr *)a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
    std::string::~string(asStack_18);
    psVar1 = gLawnApp;
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    uVar4 = FUN_0547429c(lVar3 + 0x18);
    Sexy::StrFormat("%s_WARNING",asStack_18,uVar4);
    LawnApp::GetUIImageFromStringId(psVar1);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x180),(RtWeakPtr *)a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
    std::string::~string(asStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerupUI::OnLevelLoadComplete() */

void __thiscall PowerupUI::OnLevelLoadComplete(PowerupUI *this)

{
  PowerupManager *this_00;
  ResourceInfo *pRVar1;
  
  this_00 = (PowerupManager *)Board::GetPowerupManager(*(Board **)(gLawnApp + 0x9f0));
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x168));
  PowerupManager::LoadPropsFromMagento(this_00,(PowerupType *)pRVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupUI::registerForEvents() */

void __thiscall PowerupUI::registerForEvents(PowerupUI *this)

{
  undefined *puVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayEnded);
  Sexy::Delegate0::Delegate0<PowerupUI,void(PowerupUI::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameplayEnded,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnLevelLoadComplete);
  Sexy::Delegate0::Delegate0<PowerupUI,void(PowerupUI::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::LevelLoadComplete,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupUI::drawLockIcon(Sexy::Graphics*) */

void __thiscall PowerupUI::drawLockIcon(PowerupUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  LotteryResultProgressBar *pLVar3;
  SalesProgressBar *pSVar4;
  float *pfVar5;
  Image *pIVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04316098(*(undefined4 *)(this + 0x38));
  pLVar3 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af9688);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar3);
  local_10 = ((float)iVar1 * 0.6) / (float)iVar2;
  iVar1 = FUN_0431609c(*(undefined4 *)(this + 0x3c));
  pSVar4 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af9688);
  iVar2 = SalesProgressBar::GetCurrentLevel(pSVar4);
  local_c = ((float)iVar1 * 0.6) / (float)iVar2;
  pfVar5 = eastl::max_alt<float>(&local_10,&local_c);
  fVar9 = *pfVar5;
  pLVar3 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af9688);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar3);
  fVar10 = (float)iVar1 * fVar9;
  iVar1 = FUN_04316098(*(undefined4 *)(this + 0x38));
  fVar7 = (float)FUN_04316154();
  pSVar4 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af9688);
  iVar2 = SalesProgressBar::GetCurrentLevel(pSVar4);
  fVar9 = (float)iVar2 * fVar9;
  iVar2 = FUN_0431609c(*(undefined4 *)(this + 0x3c));
  fVar8 = (float)FUN_04316154();
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af9688);
  if (local_8 == ___stack_chk_guard) {
    Sexy::Graphics::DrawImage
              (param_1,pIVar6,(int)(((float)(iVar1 / 2) + fVar7) - fVar10 * 0.5),
               (int)(((float)(iVar2 / 2) + fVar8) - fVar9 * 0.5),(int)fVar10,(int)fVar9);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupUI::Draw(Sexy::Graphics*) */

void __thiscall PowerupUI::Draw(PowerupUI *this,Graphics *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  PowerupManager *pPVar12;
  PowerupType *pPVar13;
  BasePowerup *this_00;
  LotteryResultProgressBar *pLVar14;
  Image *pIVar15;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  DangerRoomManager *this_03;
  ulong uVar16;
  CachedUIResourcePtr<Sexy::Image> *this_04;
  undefined8 uVar17;
  PrimeText_PotentialText *pPVar18;
  PrimeTextWidget *pPVar19;
  undefined1 auStack_30 [8];
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  wstring awStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  cVar1 = FUN_043160cc(this[400]);
  if (cVar1 != '\0') {
    drawLockIcon(this,param_1);
    goto LAB_04316d50;
  }
  lVar11 = Board::GetActivePowerup(*(Board **)(gLawnApp + 0x9f0));
  if (lVar11 != 0) goto LAB_04316d50;
  pPVar12 = (PowerupManager *)Board::GetPowerupManager(*(Board **)(gLawnApp + 0x9f0));
  pPVar13 = (PowerupType *)UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)this);
  this_00 = (BasePowerup *)PowerupManager::GetBasePowerup(pPVar12,pPVar13);
  cVar1 = FUN_043160d0(*(undefined4 *)(this_00 + 0x20));
  if (cVar1 == '\0') goto LAB_04316d50;
  iVar3 = FUN_04316098(*(undefined4 *)(this + 0x38));
  pLVar14 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af9700);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
  iVar3 = iVar3 / 2 - iVar4 / 2;
  pIVar15 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af9700);
  iVar4 = FUN_04316140(2);
  iVar5 = FUN_04316140(0x37);
  Sexy::Graphics::DrawImage(param_1,pIVar15,iVar4 + iVar3,iVar5);
  pPVar12 = (PowerupManager *)Board::GetPowerupManager(*(Board **)(gLawnApp + 0x9f0));
  lVar11 = BasePowerup::GetType(this_00);
  cVar1 = PowerupManager::IsMiniGamePerkPowerUp(pPVar12,(string *)(lVar11 + 8));
  if (cVar1 != '\0') goto LAB_04316d50;
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  lVar11 = UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)this);
  bVar2 = std::operator==((string *)(lVar11 + 8),"powerupdangerroomtacticalcuke");
  if (bVar2) {
    this_03 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
    iVar4 = DangerRoomManager::GetCukeCount(this_03);
  }
  else {
    lVar11 = UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)this);
    iVar4 = PlayerInfo::GetPowerupUsesLeft(this_02,(string *)(lVar11 + 8));
    lVar11 = UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)this);
    bVar2 = std::operator==((string *)(lVar11 + 8),"poweruptacticalcuke");
    if (bVar2) {
      iVar5 = PlayerInfo::GetMonthlyCukeUsesLeft(this_02);
      iVar4 = iVar4 + iVar5;
    }
  }
  FUN_05476574(awStack_28);
  if (iVar4 == 0) {
    pLVar14 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af9700);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
    pPVar12 = (PowerupManager *)Board::GetPowerupManager(*(Board **)(gLawnApp + 0x9f0));
    uVar16 = PowerupManager::GetCurrentPowerCost(pPVar12,this_00);
    Sexy::StrFormat(L"%d",awStack_18,uVar16 & 0xffffffff);
    FUN_054766c8(awStack_28,awStack_18);
    FUN_05476c50(awStack_18);
    if (*(long *)(this + 0x188) == 0) {
LAB_0431720c:
      uVar17 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_16);
      iVar5 = FUN_04316140(0xfffffff7);
      pLVar14 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af9618);
      iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
      iVar7 = FUN_04316140(0x33);
      iVar8 = FUN_04316140(0xfffffff7);
      pLVar14 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af9618);
      iVar9 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
      iVar10 = FUN_04316140(0x18);
      FUN_05477b24(awStack_20,awStack_28);
      Sexy::Insets::Insets((Insets *)awStack_18,(Insets *)&PrimeText_Game::Color_Powerup_Cost);
      pPVar18 = (PrimeText_PotentialText *)
                Sexy::BuildPotentialText_Paragraph
                          ((float)(iVar5 + iVar3 + iVar6),(float)iVar7,
                           (float)((iVar4 - iVar8) - iVar9),(float)iVar10,uVar17,awStack_20,1,1,
                           awStack_18);
      pPVar19 = ::operator_new(0xf8);
      Sexy::PrimeTextWidget::PrimeTextWidget(pPVar19,pPVar18);
      *(PrimeTextWidget **)(this + 0x188) = pPVar19;
      FUN_05476c50(awStack_20);
    }
    else {
      Sexy::PrimeTextWidget::GetText();
      bVar2 = std::operator!=(awStack_18,awStack_28);
      FUN_05476c50(awStack_18);
      if (bVar2) {
        if (*(long **)(this + 0x188) != (long *)0x0) {
          (**(code **)(**(long **)(this + 0x188) + 0x18))();
          *(undefined8 *)(this + 0x188) = 0;
        }
        goto LAB_0431720c;
      }
    }
    Sexy::PrimeTextWidget::SetText(*(PrimeTextWidget **)(this + 0x188),awStack_28);
    (**(code **)(**(long **)(this + 0x188) + 0x128))(*(long **)(this + 0x188),param_1);
    Sexy::Color::Color((Color *)awStack_18,0x80,0x80,0x80);
    Sexy::Graphics::SetColor(param_1,(Color *)awStack_18);
    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x168));
    if (*(int *)(lVar11 + 0x70) == 2) {
      this_04 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06af9568;
LAB_043170cc:
      pIVar15 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_04);
      iVar4 = FUN_04316140(0xfffffff8);
      iVar5 = FUN_04316140(0x37);
      Sexy::Graphics::DrawImage(param_1,pIVar15,iVar4 + iVar3,iVar5);
    }
    else {
      lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x168));
      if (*(int *)(lVar11 + 0x70) == 0) {
        this_04 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06af9618;
        goto LAB_043170cc;
      }
    }
  }
  else {
    pIVar15 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af9700);
    iVar5 = FUN_04316140(2);
    iVar6 = FUN_04316140(0x37);
    Sexy::Graphics::DrawImage(param_1,pIVar15,iVar5 + iVar3,iVar6);
    FUN_05478178(awStack_20,L"[FREE_TIMES]",auStack_30);
    TodReplaceNumberString(awStack_20,L"{NUMBER}",iVar4);
    FUN_054766c8(awStack_28,awStack_18);
    FUN_05476c50(awStack_18);
    FUN_05476c50(awStack_20);
    nop();
    if (*(long *)(this + 0x188) == 0) {
LAB_04317118:
      uVar17 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_16);
      iVar4 = FUN_04316140(0xffffffff);
      iVar5 = FUN_04316140(0x36);
      pLVar14 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af9700);
      iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
      iVar7 = FUN_04316140(0xffffffff);
      iVar8 = FUN_04316140(0x16);
      FUN_05477b24(awStack_20,awStack_28);
      Sexy::Insets::Insets((Insets *)awStack_18,(Insets *)&PrimeText_Game::Color_Powerup_Cost);
      pPVar18 = (PrimeText_PotentialText *)
                Sexy::BuildPotentialText_Paragraph
                          ((float)(iVar4 + iVar3),(float)iVar5,(float)(iVar6 + iVar7 * -2),
                           (float)iVar8,uVar17,awStack_20,1,1,awStack_18);
      pPVar19 = ::operator_new(0xf8);
      Sexy::PrimeTextWidget::PrimeTextWidget(pPVar19,pPVar18);
      *(PrimeTextWidget **)(this + 0x188) = pPVar19;
      FUN_05476c50(awStack_20);
    }
    else {
      Sexy::PrimeTextWidget::GetText();
      bVar2 = std::operator!=(awStack_18,awStack_28);
      FUN_05476c50(awStack_18);
      if (bVar2) {
        if (*(long **)(this + 0x188) != (long *)0x0) {
          (**(code **)(**(long **)(this + 0x188) + 0x18))();
          *(undefined8 *)(this + 0x188) = 0;
        }
        goto LAB_04317118;
      }
    }
    Sexy::PrimeTextWidget::SetText(*(PrimeTextWidget **)(this + 0x188),awStack_28);
    (**(code **)(**(long **)(this + 0x188) + 0x128))(*(long **)(this + 0x188),param_1);
  }
  FUN_05476c50(awStack_28);
LAB_04316d50:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PowerupUI::Draw(Sexy::Graphics*) */

void __thiscall PowerupUI::Draw(PowerupUI *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

