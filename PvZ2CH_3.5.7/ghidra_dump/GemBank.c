// Class: GemBank


/* GemBank::unregisterForEvents() */

void __thiscall GemBank::unregisterForEvents(GemBank *this)

{
  if (this[0x180] == (GemBank)0x0) {
    return;
  }
  LawnApp::UnregisterBoardTouchGameplayObject(gLawnApp,this);
  return;
}


/* GemBank::updateState_Ready() */

void __thiscall GemBank::updateState_Ready(GemBank *this)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = (float)PVZ_T();
  iVar2 = *(int *)(this + 0x168);
  if (iVar2 < 0) {
    iVar2 = *(int *)(this + 0x164);
  }
  if (fVar3 < *(float *)(this + 0x174)) {
    fVar3 = *(float *)(this + 0x174) - fVar3;
    fVar4 = (float)PVZ_Dt();
    if (fVar4 < fVar3) {
      iVar1 = *(int *)(this + 0x16c);
      fVar4 = (float)PVZ_Dt();
      *(int *)(this + 0x16c) =
           *(int *)(this + 0x16c) + (int)(fVar4 * ((float)(iVar2 - iVar1) / fVar3));
      return;
    }
  }
  *(int *)(this + 0x16c) = iVar2;
  return;
}


/* GemBank::OnGemCurrencyAdd(int) */

void __thiscall GemBank::OnGemCurrencyAdd(GemBank *this,int param_1)

{
  if (GlobalFakeCurrency < 0) {
    if (0 < *(int *)(this + 0x168)) {
      *(int *)(this + 0x168) = *(int *)(this + 0x168) + param_1;
      return;
    }
  }
  else {
    *(int *)(this + 0x168) = GlobalFakeCurrency;
  }
  return;
}


/* GemBank::cancelTouch() */

void __thiscall GemBank::cancelTouch(GemBank *this)

{
  *(undefined8 *)(this + 0x178) = 0;
  (**(code **)(*(long *)this + 0xe8))(this,2);
  return;
}


/* GemBank::onExitState_Loading(WidgetState) */

void GemBank::onExitState_Loading(long param_1)

{
  undefined1 uVar1;
  
  uVar1 = LawnApp::HasPlayerUnlockedFeature(gLawnApp,8);
  *(undefined1 *)(param_1 + 0x163) = uVar1;
  return;
}


/* GemBank::~GemBank() */

void __thiscall GemBank::~GemBank(GemBank *this)

{
  *(undefined ***)this = &PTR_GetClass_0676af40;
  *(undefined ***)(this + 0x10) = &PTR__GemBank_0676b0e8;
  if (*(long **)(this + 0x188) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x188) + 0x18))();
    *(undefined8 *)(this + 0x188) = 0;
  }
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to GemBank::~GemBank() */

void __thiscall GemBank::~GemBank(GemBank *this)

{
  ~GemBank(this + -0x10);
  return;
}


/* GemBank::~GemBank() */

void __thiscall GemBank::~GemBank(GemBank *this)

{
  ~GemBank(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GemBank::~GemBank() */

void __thiscall GemBank::~GemBank(GemBank *this)

{
  ~GemBank(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GemBank::StaticClassInit() */

void GemBank::StaticClassInit(void)

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
    std::string::string(asStack_10,"GemBank");
    (*pcVar2)(plVar1,asStack_10,FUN_03d516f4,400,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GemBank::StaticGetClass() */

long * GemBank::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GemBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GemBank::GetClass() const */

long * GemBank::GetClass(void)

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
  (*pcVar3)(plVar1,"GemBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GemBank::handleTouch(Sexy::Touch const&) */

void __thiscall GemBank::handleTouch(GemBank *this,Touch *param_1)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  Touch aTStack_40 [16];
  int local_30;
  int local_2c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x163] == (GemBank)0x0) {
LAB_03d51808:
    bVar2 = 0;
  }
  else {
    Sexy::Touch::Touch(aTStack_40,param_1);
    Board::TranslateBoardPositionToScreenPosition(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_30);
    bVar2 = (**(code **)(*(long *)this + 0xa8))
                      (this,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0x48) + local_30,
                       *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x4c) + local_2c);
    iVar1 = *(int *)(param_1 + 0x30);
    if (iVar1 == 3) {
      lVar3 = *(long *)param_1;
      lVar4 = *(long *)(this + 0x178);
      if ((bVar2 == 0) || (lVar3 != lVar4)) {
        bVar2 = 0;
      }
      else {
        bVar2 = 1;
        LawnApp::ShowCoinStore(gLawnApp,2);
        lVar3 = *(long *)param_1;
        lVar4 = *(long *)(this + 0x178);
      }
    }
    else {
      if (iVar1 != 4) {
        if ((iVar1 == 0) && (bVar2 = bVar2 & *(long *)(this + 0x178) == 0, bVar2 != 0)) {
          *(undefined8 *)(this + 0x178) = *(undefined8 *)param_1;
          (**(code **)(*(long *)this + 0xe8))(this,4);
          goto LAB_03d5180c;
        }
        goto LAB_03d51808;
      }
      lVar3 = *(long *)param_1;
      bVar2 = 0;
      lVar4 = *(long *)(this + 0x178);
    }
    if (lVar3 == lVar4) {
      cancelTouch(this);
    }
  }
LAB_03d5180c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GemBank::GetHitRect() */

void GemBank::GetHitRect(void)

{
  int iVar1;
  long *in_x0;
  Insets *in_x8;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*in_x0 + 400))(&local_18);
  iVar1 = FUN_03d515ac();
  Sexy::Insets::Insets
            (in_x8,local_18 - iVar1,local_14 - iVar1,local_10 + iVar1 * 2,local_c + iVar1 * 2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GemBank::onGameplayEnded() */

void __thiscall GemBank::onGameplayEnded(GemBank *this)

{
  UIWidget::SetClickable((UIWidget *)this,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GemBank::calcSpinTime() */

void __thiscall GemBank::calcSpinTime(GemBank *this)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float local_c;
  long local_8;
  
  iVar2 = *(int *)(this + 0x168);
  local_8 = ___stack_chk_guard;
  if (iVar2 < 0) {
    iVar2 = *(int *)(this + 0x164);
  }
  local_c = ABS((float)*(int *)(this + 0x16c) - (float)iVar2) * 0.02;
  pfVar1 = eastl::min_alt<float>((float *)&DAT_057527b0,&local_c);
  fVar4 = *pfVar1;
  fVar3 = (float)PVZ_T();
  *(float *)(this + 0x174) = fVar4 + fVar3;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GemBank::onUpdateGemFakeCurrency() */

void __thiscall GemBank::onUpdateGemFakeCurrency(GemBank *this)

{
  *(undefined4 *)(this + 0x168) = GlobalFakeCurrency;
  calcSpinTime(this);
  return;
}


/* GemBank::SetFakeCurrencyAmount(int) */

void __thiscall GemBank::SetFakeCurrencyAmount(GemBank *this,int param_1)

{
  *(int *)(this + 0x168) = param_1;
  calcSpinTime(this);
  return;
}


/* GemBank::ClearFakeCurrency() */

void __thiscall GemBank::ClearFakeCurrency(GemBank *this)

{
  *(undefined4 *)(this + 0x168) = 0xffffffff;
  GlobalFakeCurrency = 0xffffffff;
  calcSpinTime(this);
  return;
}


/* GemBank::onGemCurrencyBanked(int) */

void __thiscall GemBank::onGemCurrencyBanked(GemBank *this,int param_1)

{
  *(int *)(this + 0x164) = *(int *)(this + 0x164) + param_1;
  calcSpinTime(this);
  return;
}


/* GemBank::onGemCurrencyChanged(int) */

void __thiscall GemBank::onGemCurrencyChanged(GemBank *this,int param_1)

{
  *(int *)(this + 0x164) = param_1;
  calcSpinTime(this);
  return;
}


/* GemBank::GemBank() */

void __thiscall GemBank::GemBank(GemBank *this)

{
  GemBank GVar1;
  undefined4 uVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  int iVar3;
  
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined8 *)(this + 0x178) = 0;
  this[0x180] = (GemBank)0x0;
  *(undefined ***)this = &PTR_GetClass_0676af40;
  *(undefined ***)(this + 0x10) = &PTR__GemBank_0676b0e8;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  uVar2 = PlayerInfo::GetNumGems(this_01,false);
  *(undefined4 *)(this + 0x164) = uVar2;
  *(undefined4 *)(this + 0x174) = 0;
  *(undefined4 *)(this + 0x168) = GlobalFakeCurrency;
  GVar1 = (GemBank)LawnApp::HasPlayerUnlockedFeature(gLawnApp,8);
  this[0x163] = GVar1;
  iVar3 = *(int *)(this + 0x168);
  if (iVar3 < 0) {
    iVar3 = *(int *)(this + 0x164);
  }
  *(int *)(this + 0x16c) = iVar3;
  *(undefined8 *)(this + 0x188) = 0;
  return;
}


/* GemBank::StaticNew() */

GemBank * GemBank::StaticNew(void)

{
  GemBank *this;
  
  this = ::operator_new(400);
  GemBank(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GemBank::registerForEvents() */

void __thiscall GemBank::registerForEvents(GemBank *this)

{
  undefined *puVar1;
  Board *pBVar2;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_e8 [8];
  CBMemberTranslatorX aCStack_e0 [24];
  CBMemberTranslatorX aCStack_c8 [24];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdateGemFakeCurrency);
  Sexy::Delegate0::Delegate0<GemBank,void(GemBank::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::UpdateFakeCurrency,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,ClearFakeCurrency);
  Sexy::Delegate0::Delegate0<GemBank,void(GemBank::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ClearFakeCurrency,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGemCurrencyBanked);
  local_110 = local_b0;
  uStack_108 = uStack_a8;
  local_100 = local_a0;
  MessageRouter::Subscribe<int,Sexy::CBMemberTranslatorX<GemBank,void(GemBank::*)(int)>>
            ((MessageRouter *)puVar1,Message::GemCurrencyBanked,&local_110);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnGemCurrencyAdd);
  local_100 = local_88;
  local_110 = local_98;
  uStack_108 = uStack_90;
  MessageRouter::Subscribe<int,Sexy::CBMemberTranslatorX<GemBank,void(GemBank::*)(int)>>
            ((MessageRouter *)puVar1,Message::GemCurrencyAdd,&local_110);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGemCurrencyChanged);
  local_110 = local_80;
  uStack_108 = uStack_78;
  local_100 = local_70;
  MessageRouter::Subscribe<int,Sexy::CBMemberTranslatorX<GemBank,void(GemBank::*)(int)>>
            ((MessageRouter *)puVar1,Message::GemCurrencyChanged,&local_110);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayEnded);
  Sexy::Delegate0::Delegate0<GemBank,void(GemBank::*)()>(aDStack_38,aCStack_c8);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameplayEnded,aDStack_38);
  pBVar2 = *(Board **)(gLawnApp + 0x9f0);
  if (pBVar2 != (Board *)0x0) {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,handleTouch);
    Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
    Delegate1wRet<GemBank,bool(GemBank::*)(Sexy::Touch_const&)>(aDStack_68,aCStack_e0);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_e8);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,cancelTouch);
    Sexy::Delegate0::Delegate0<GemBank,void(GemBank::*)()>(aDStack_38,aCStack_c8);
    Board::RegisterTouchGameplayObject(pBVar2,aDStack_68,9,a_Stack_e8,aDStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_e8);
    this[0x180] = (GemBank)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GemBank::CalcPlusButtonRect() */

void GemBank::CalcPlusButtonRect(void)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long in_x0;
  LotteryResultProgressBar *pLVar5;
  SalesProgressBar *pSVar6;
  Insets *in_x8;
  int local_18;
  int local_14;
  int local_c;
  
  lVar1 = ___stack_chk_guard;
  UIWidget::GetDrawRect();
  pLVar5 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad7720);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar5);
  pSVar6 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad7720);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar6);
  Sexy::Insets::Insets(in_x8,0,0,iVar3,iVar4);
  iVar3 = FUN_03d51444(*(undefined4 *)(in_x0 + 0x38));
  pLVar5 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad7720);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar5);
  *(int *)in_x8 = *(int *)in_x8 + ((local_18 + iVar3) - iVar4);
  pSVar6 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad7720);
  iVar3 = SalesProgressBar::GetCurrentLevel(pSVar6);
  bVar2 = lVar1 == ___stack_chk_guard;
  *(int *)(in_x8 + 4) = *(int *)(in_x8 + 4) + local_14 + (local_c - iVar3) / 2;
  if (bVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GemBank::GetUIRect() */

void __thiscall GemBank::GetUIRect(GemBank *this)

{
  long lVar1;
  int iVar2;
  int iVar3;
  LotteryResultProgressBar *pLVar4;
  Insets *in_x8;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  lVar1 = ___stack_chk_guard;
  UIWidget::GetDrawRect();
  pLVar4 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad77e0);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar4);
  pLVar4 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad77e0);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar4);
  Sexy::Insets::Insets(in_x8,local_18 - iVar2 / 2,local_14,local_10 + iVar3 / 2,local_c);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GemBank::Draw(Sexy::Graphics*) */

void __thiscall GemBank::Draw(GemBank *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  Image *pIVar6;
  LotteryResultProgressBar *pLVar7;
  SalesProgressBar *this_00;
  int *piVar8;
  CachedUIResourcePtr<Sexy::Image> *this_01;
  PrimeText_PotentialText *pPVar9;
  PrimeTextWidget *this_02;
  long *plVar10;
  code *pcVar11;
  float fVar12;
  GraphicsAutoState aGStack_50 [8];
  wstring awStack_48 [8];
  undefined1 auStack_40 [8];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_50,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  UIWidget::GetDrawRect();
  (**(code **)(*(long *)this + 400))(&local_28,this);
  local_28 = local_28 - local_38;
  local_24 = local_24 - local_34;
  local_38 = 0;
  local_34 = 0;
  Sexy::Insets::Insets((Insets *)local_18,(Insets *)&local_38);
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad7770);
  Draw3SliceImage(param_1,(Insets *)local_18,uVar5);
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad77e0);
  pLVar7 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad77e0);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
  iVar3 = local_2c;
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad77e0);
  iVar2 = SalesProgressBar::GetCurrentLevel(this_00);
  Sexy::Graphics::DrawImage(param_1,pIVar6,(int)((float)iVar1 * -0.5),(iVar3 - iVar2) / 2);
  if (this[0x163] != (GemBank)0x0) {
    iVar3 = UIWidget::getWidgetStateSerialization((UIWidget *)this);
    if (iVar3 == 4) {
      this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad7808;
    }
    else {
      this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad7720;
    }
    pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_01);
    Sexy::Graphics::DrawImage(param_1,pIVar6,local_28,local_24);
  }
  local_18[0] = 0;
  piVar8 = eastl::max_alt<int>((int *)(this + 0x16c),(int *)local_18);
  Sexy::CommaSeparate(*piVar8);
  plVar10 = *(long **)(this + 0x188);
  if (plVar10 == (long *)0x0) {
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_26_Shaded)
    ;
    iVar3 = local_38;
    pLVar7 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad77e0);
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
    fVar12 = (float)local_34;
    pLVar7 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad77e0);
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
    pLVar7 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad7720);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
    FUN_05477b24(auStack_40,awStack_48);
    Sexy::Color::Color((Color *)local_18,1);
    pPVar9 = (PrimeText_PotentialText *)
             Sexy::BuildPotentialText_Paragraph
                       ((float)(iVar3 + iVar1 / 2),fVar12,(float)((local_30 - iVar2 / 2) - iVar4),
                        (float)local_2c,uVar5,auStack_40,1,1,(Insets *)local_18);
    this_02 = ::operator_new(0xf8);
    Sexy::PrimeTextWidget::PrimeTextWidget(this_02,pPVar9);
    *(PrimeTextWidget **)(this + 0x188) = this_02;
    FUN_05476c50(auStack_40);
  }
  else {
    pcVar11 = *(code **)(*plVar10 + 0x170);
    Sexy::Color::Color((Color *)local_18,1);
    (*pcVar11)(plVar10,0,(Insets *)local_18);
    Sexy::PrimeTextWidget::SetText(*(PrimeTextWidget **)(this + 0x188),awStack_48);
  }
  (**(code **)(**(long **)(this + 0x188) + 0x128))(*(long **)(this + 0x188),param_1);
  FUN_05476c50(awStack_48);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to GemBank::Draw(Sexy::Graphics*) */

void __thiscall GemBank::Draw(GemBank *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GemBank::GetCenterPointOnScreen() */

void __thiscall GemBank::GetCenterPointOnScreen(GemBank *this)

{
  long lVar1;
  int iVar2;
  Point *in_x8;
  undefined4 local_10;
  undefined4 local_c;
  
  lVar1 = ___stack_chk_guard;
  UIWidget::GetCenterPointOnScreen();
  iVar2 = FUN_03d51598(0);
  Sexy::Point::Point(in_x8,local_10 + iVar2,iVar2 + local_c);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GemBank::IsMouseOver(int, int) */

void __thiscall GemBank::IsMouseOver(GemBank *this,int param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  TRect<int> aTStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = UIWidget::IsVisible((UIWidget *)this);
  cVar3 = '\0';
  if (cVar1 != '\0') {
    bVar2 = TestFlag<VaseFlags>(*(undefined4 *)(this + 0x68),4);
    cVar3 = '\0';
    if (bVar2) {
      if (this[0x163] != (GemBank)0x0) {
        (**(code **)(*(long *)this + 0xb8))(aTStack_18,this);
        cVar3 = Sexy::TRect<int>::Contains(aTStack_18,param_1,param_2);
        if (cVar3 != '\0') goto LAB_03d52504;
      }
      cVar3 = UIWidget::IsMouseOver((UIWidget *)this,param_1,param_2);
    }
  }
LAB_03d52504:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar3);
}

