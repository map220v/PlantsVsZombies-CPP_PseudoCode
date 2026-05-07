// Class: CustomLevelAppraiseUI


/* CustomLevelAppraiseUI::onGamePaused() */

void __thiscall CustomLevelAppraiseUI::onGamePaused(CustomLevelAppraiseUI *this)

{
  this[0x163] = (CustomLevelAppraiseUI)0x1;
  return;
}


/* CustomLevelAppraiseUI::onGameUnpaused() */

void __thiscall CustomLevelAppraiseUI::onGameUnpaused(CustomLevelAppraiseUI *this)

{
  this[0x163] = (CustomLevelAppraiseUI)0x0;
  return;
}


/* CustomLevelAppraiseUI::~CustomLevelAppraiseUI() */

void __thiscall CustomLevelAppraiseUI::~CustomLevelAppraiseUI(CustomLevelAppraiseUI *this)

{
  *(undefined ***)this = &PTR_GetClass_06793c30;
  *(undefined ***)(this + 0x10) = &PTR__CustomLevelAppraiseUI_06793dd0;
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to CustomLevelAppraiseUI::~CustomLevelAppraiseUI() */

void __thiscall CustomLevelAppraiseUI::~CustomLevelAppraiseUI(CustomLevelAppraiseUI *this)

{
  ~CustomLevelAppraiseUI(this + -0x10);
  return;
}


/* CustomLevelAppraiseUI::~CustomLevelAppraiseUI() */

void __thiscall CustomLevelAppraiseUI::~CustomLevelAppraiseUI(CustomLevelAppraiseUI *this)

{
  ~CustomLevelAppraiseUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CustomLevelAppraiseUI::~CustomLevelAppraiseUI() */

void __thiscall CustomLevelAppraiseUI::~CustomLevelAppraiseUI(CustomLevelAppraiseUI *this)

{
  ~CustomLevelAppraiseUI(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelAppraiseUI::StaticClassInit() */

void CustomLevelAppraiseUI::StaticClassInit(void)

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
    std::string::string(asStack_10,"CustomLevelAppraiseUI");
    (*pcVar2)(plVar1,asStack_10,FUN_03f0c05c,0x188,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomLevelAppraiseUI::StaticGetClass() */

long * CustomLevelAppraiseUI::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CustomLevelAppraiseUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CustomLevelAppraiseUI::GetClass() const */

long * CustomLevelAppraiseUI::GetClass(void)

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
  (*pcVar3)(plVar1,"CustomLevelAppraiseUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CustomLevelAppraiseUI::Reported() */

void __thiscall CustomLevelAppraiseUI::Reported(CustomLevelAppraiseUI *this)

{
  this[0x178] = (CustomLevelAppraiseUI)0x1;
  return;
}


/* CustomLevelAppraiseUI::IsReported() */

CustomLevelAppraiseUI __thiscall CustomLevelAppraiseUI::IsReported(CustomLevelAppraiseUI *this)

{
  return this[0x178];
}


/* CustomLevelAppraiseUI::PlayCoinObtained() */

void __thiscall CustomLevelAppraiseUI::PlayCoinObtained(CustomLevelAppraiseUI *this)

{
  this[0x179] = (CustomLevelAppraiseUI)0x1;
  return;
}


/* CustomLevelAppraiseUI::IsPlayCoinObtained() */

CustomLevelAppraiseUI __thiscall
CustomLevelAppraiseUI::IsPlayCoinObtained(CustomLevelAppraiseUI *this)

{
  return this[0x179];
}


/* CustomLevelAppraiseUI::Supported() */

void __thiscall CustomLevelAppraiseUI::Supported(CustomLevelAppraiseUI *this)

{
  this[0x17a] = (CustomLevelAppraiseUI)0x1;
  return;
}


/* CustomLevelAppraiseUI::IsSupported() */

CustomLevelAppraiseUI __thiscall CustomLevelAppraiseUI::IsSupported(CustomLevelAppraiseUI *this)

{
  return this[0x17a];
}


/* CustomLevelAppraiseUI::NotSupported() */

void __thiscall CustomLevelAppraiseUI::NotSupported(CustomLevelAppraiseUI *this)

{
  this[0x17b] = (CustomLevelAppraiseUI)0x1;
  return;
}


/* CustomLevelAppraiseUI::IsNotSupported() */

CustomLevelAppraiseUI __thiscall CustomLevelAppraiseUI::IsNotSupported(CustomLevelAppraiseUI *this)

{
  return this[0x17b];
}


/* CustomLevelAppraiseUI::PressIndex(int) */

void __thiscall CustomLevelAppraiseUI::PressIndex(CustomLevelAppraiseUI *this,int param_1)

{
  *(undefined4 *)(this + 0x168) = 0;
  *(undefined4 *)(this + 0x16c) = 0;
  *(undefined4 *)(this + 0x170) = 0;
  *(undefined4 *)(this + 0x174) = 0;
  if ((uint)param_1 < 4) {
    *(undefined4 *)(this + (long)param_1 * 4 + 0x168) = 1;
  }
  return;
}


/* CustomLevelAppraiseUI::UnPress() */

void __thiscall CustomLevelAppraiseUI::UnPress(CustomLevelAppraiseUI *this)

{
  *(undefined4 *)(this + 0x168) = 0;
  *(undefined4 *)(this + 0x16c) = 0;
  *(undefined4 *)(this + 0x170) = 0;
  *(undefined4 *)(this + 0x174) = 0;
  return;
}


/* CustomLevelAppraiseUI::onGameplayEnded() */

void __thiscall CustomLevelAppraiseUI::onGameplayEnded(CustomLevelAppraiseUI *this)

{
  UIWidget::SetClickable((UIWidget *)this,false);
  return;
}


/* CustomLevelAppraiseUI::CustomLevelAppraiseUI() */

void __thiscall CustomLevelAppraiseUI::CustomLevelAppraiseUI(CustomLevelAppraiseUI *this)

{
  CustomLevelAppraiseUI CVar1;
  CustomLevelMgr *pCVar2;
  
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined4 *)(this + 0x164) = 0xffffffff;
  this[0x163] = (CustomLevelAppraiseUI)0x0;
  *(undefined ***)this = &PTR_GetClass_06793c30;
  *(undefined ***)(this + 0x10) = &PTR__CustomLevelAppraiseUI_06793dd0;
  this[0x180] = (CustomLevelAppraiseUI)0x0;
  *(undefined4 *)(this + 0x17c) = 0xbf800000;
  PressIndex(this,-1);
  pCVar2 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  CVar1 = (CustomLevelAppraiseUI)CustomLevelMgr::IsReported(pCVar2);
  this[0x179] = (CustomLevelAppraiseUI)0x0;
  this[0x178] = CVar1;
  pCVar2 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  CVar1 = (CustomLevelAppraiseUI)CustomLevelMgr::IsSupported(pCVar2);
  this[0x17a] = CVar1;
  pCVar2 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  CVar1 = (CustomLevelAppraiseUI)CustomLevelMgr::IsNotSupported(pCVar2);
  this[0x17b] = CVar1;
  return;
}


/* CustomLevelAppraiseUI::StaticNew() */

CustomLevelAppraiseUI * CustomLevelAppraiseUI::StaticNew(void)

{
  CustomLevelAppraiseUI *this;
  
  this = ::operator_new(0x188);
  CustomLevelAppraiseUI(this);
  return this;
}


/* CustomLevelAppraiseUI::onLastStandStart() */

void __thiscall CustomLevelAppraiseUI::onLastStandStart(CustomLevelAppraiseUI *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x17c) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelAppraiseUI::registerForEvents() */

void __thiscall CustomLevelAppraiseUI::registerForEvents(CustomLevelAppraiseUI *this)

{
  undefined *puVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGamePaused);
  Sexy::Delegate0::Delegate0<CustomLevelAppraiseUI,void(CustomLevelAppraiseUI::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GamePaused,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameUnpaused);
  Sexy::Delegate0::Delegate0<CustomLevelAppraiseUI,void(CustomLevelAppraiseUI::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameUnpaused,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayEnded);
  Sexy::Delegate0::Delegate0<CustomLevelAppraiseUI,void(CustomLevelAppraiseUI::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameplayEnded,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLevelStarting);
  Sexy::Delegate0::Delegate0<CustomLevelAppraiseUI,void(CustomLevelAppraiseUI::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::LevelStarting,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLastStandStart);
  Sexy::Delegate0::Delegate0<CustomLevelAppraiseUI,void(CustomLevelAppraiseUI::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::LastStandLevelStarting,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomLevelAppraiseUI::onLevelStarting() */

void __thiscall CustomLevelAppraiseUI::onLevelStarting(CustomLevelAppraiseUI *this)

{
  LastStandMinigameModule *pLVar1;
  ZombossLastStandMinigameModule *pZVar2;
  undefined4 uVar3;
  
  pLVar1 = BoardHelpers::GetLevelModuleByClass<LastStandMinigameModule>();
  if ((pLVar1 == (LastStandMinigameModule *)0x0) &&
     (pZVar2 = BoardHelpers::GetLevelModuleByClass<ZombossLastStandMinigameModule>(),
     pZVar2 == (ZombossLastStandMinigameModule *)0x0)) {
    uVar3 = PVZ_T();
    *(undefined4 *)(this + 0x17c) = uVar3;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelAppraiseUI::GetAppraiseTouchIndex(int, int) */

void __thiscall
CustomLevelAppraiseUI::GetAppraiseTouchIndex(CustomLevelAppraiseUI *this,int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int local_28 [4];
  int local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar5 = 0;
  (**(code **)(*(long *)this + 0xb8))(local_28);
  iVar2 = FUN_03f0bf14();
  lVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae20c8);
  iVar3 = *(int *)(lVar4 + 0x38);
  lVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae20c8);
  Sexy::Insets::Insets((Insets *)local_18,local_28[0] + iVar2,0,iVar3,*(int *)(lVar4 + 0x3c));
  do {
    cVar1 = Sexy::TRect<int>::Contains((TRect<int> *)local_18,param_1,param_2);
    if (cVar1 != '\0') goto LAB_03f0c7bc;
    iVar5 = iVar5 + 1;
    lVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae20c8);
    iVar3 = FUN_03f0bf14();
    local_18[0] = local_18[0] + iVar3 + *(int *)(lVar4 + 0x38);
  } while (iVar5 != 4);
  iVar5 = -1;
LAB_03f0c7bc:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar5);
  }
  return;
}


/* CustomLevelAppraiseUI::OnMouseMove(int, int) */

void __thiscall
CustomLevelAppraiseUI::OnMouseMove(CustomLevelAppraiseUI *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0x164);
  iVar2 = GetAppraiseTouchIndex(this,param_1,param_2);
  if (iVar1 != iVar2) {
    UnPress(this);
    return;
  }
  return;
}


/* CustomLevelAppraiseUI::OnMouseDown(int, int) */

void __thiscall
CustomLevelAppraiseUI::OnMouseDown(CustomLevelAppraiseUI *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = GetAppraiseTouchIndex(this,param_1,param_2);
  *(int *)(this + 0x164) = iVar1;
  if ((iVar1 != 0) && (this[0x180] == (CustomLevelAppraiseUI)0x0)) {
    return;
  }
  PressIndex(this,iVar1);
  return;
}


/* CustomLevelAppraiseUI::OnMouseUp(int, int) */

void __thiscall
CustomLevelAppraiseUI::OnMouseUp(CustomLevelAppraiseUI *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  UICustomLevelAppraise *pUVar3;
  undefined8 uVar4;
  
  if ((*(int *)(this + 0x164) == 0) &&
     (iVar1 = GetAppraiseTouchIndex(this,param_1,param_2), iVar1 == 0)) {
    if (*(int *)(this + 0x164) != 0) goto LAB_03f0c8a0;
  }
  else {
    if ((this[0x180] == (CustomLevelAppraiseUI)0x0) ||
       (iVar1 = *(int *)(this + 0x164), iVar2 = GetAppraiseTouchIndex(this,param_1,param_2),
       iVar1 != iVar2)) goto LAB_03f0c8a0;
    iVar1 = *(int *)(this + 0x164);
    if (iVar1 != 0) {
      if (iVar1 != 1) {
        if (iVar1 == 2) {
          if ((this[0x17a] == (CustomLevelAppraiseUI)0x0) &&
             (this[0x17b] == (CustomLevelAppraiseUI)0x0)) {
            pUVar3 = (UICustomLevelAppraise *)UISingletonDialog<UICustomLevelAppraise>::ShowDialog()
            ;
            uVar4 = 3;
            goto LAB_03f0c8d8;
          }
          goto LAB_03f0c8a0;
        }
        if (((iVar1 != 3) || (this[0x17a] != (CustomLevelAppraiseUI)0x0)) ||
           (this[0x17b] != (CustomLevelAppraiseUI)0x0)) goto LAB_03f0c8a0;
        pUVar3 = (UICustomLevelAppraise *)UISingletonDialog<UICustomLevelAppraise>::ShowDialog();
        uVar4 = 5;
        goto LAB_03f0c8d8;
      }
      if (this[0x179] == (CustomLevelAppraiseUI)0x0) {
        Board::ClearCursors(*(Board **)(gLawnApp + 0x9f0));
        (**(code **)(**(long **)(gLawnApp + 0x9f0) + 800))(*(long **)(gLawnApp + 0x9f0),1);
        pUVar3 = (UICustomLevelAppraise *)UISingletonDialog<UICustomLevelAppraise>::ShowDialog();
        UICustomLevelAppraise::ObtainAward(pUVar3);
      }
      goto LAB_03f0c8a0;
    }
  }
  if (this[0x178] == (CustomLevelAppraiseUI)0x0) {
    pUVar3 = (UICustomLevelAppraise *)UISingletonDialog<UICustomLevelAppraise>::ShowDialog();
    uVar4 = 0;
LAB_03f0c8d8:
    UICustomLevelAppraise::Init(pUVar3,uVar4);
    Board::ClearCursors(*(Board **)(gLawnApp + 0x9f0));
    (**(code **)(**(long **)(gLawnApp + 0x9f0) + 800))(*(long **)(gLawnApp + 0x9f0),1);
    UnPress(this);
    return;
  }
LAB_03f0c8a0:
  UnPress(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelAppraiseUI::Draw(Sexy::Graphics*) */

void __thiscall CustomLevelAppraiseUI::Draw(CustomLevelAppraiseUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  Image *pIVar6;
  long lVar7;
  float *pfVar8;
  CachedUIResourcePtr<Sexy::Image> *pCVar9;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  long lVar10;
  long lVar11;
  CustomLevelAppraiseUI *pCVar12;
  float fVar13;
  float fVar14;
  Image *local_60;
  GraphicsAutoState aGStack_40 [16];
  int local_30;
  int local_2c;
  Insets aIStack_28 [16];
  float local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar11 = 1;
  pCVar12 = this + 0x168;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_40,param_1);
  lVar10 = 0;
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  UIWidget::GetDrawRect();
  Sexy::Insets::Insets((Insets *)local_18,0,0,local_30,local_2c);
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae21f0);
  Draw9SliceImage(param_1,(Insets *)local_18,uVar5);
  do {
    if (lVar10 - 2U < 2) {
      if (((this[0x17a] != (CustomLevelAppraiseUI)0x0) ||
          (this[0x17b] != (CustomLevelAppraiseUI)0x0)) || (*(int *)pCVar12 == 1)) {
LAB_03f0cd08:
        pCVar9 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae20f0;
        if (lVar10 == 1) {
LAB_03f0ce18:
          local_60 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar9);
          iVar4 = FUN_03f0bf14();
          lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae20c8);
          iVar3 = FUN_03f0bf14();
          iVar4 = iVar4 + iVar3 + *(int *)(lVar7 + 0x38);
          goto LAB_03f0cdbc;
        }
        this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae2238;
        if (lVar10 == 2) goto LAB_03f0cd8c;
        pCVar9 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae2140;
LAB_03f0cb00:
        pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar9);
        iVar1 = FUN_03f0bf14();
        lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae20c8);
        iVar2 = FUN_03f0bf14();
        iVar4 = *(int *)(lVar7 + 0x38);
        lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae20c8);
        iVar3 = *(int *)(lVar7 + 0x38);
        lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae20c8);
        Sexy::Graphics::DrawImage
                  (param_1,pIVar6,(iVar2 + iVar4) * 3 + iVar1,0,iVar3,*(int *)(lVar7 + 0x3c));
        if ((lVar10 != 0) <= (byte)this[0x180]) goto LAB_03f0cc78;
LAB_03f0cb80:
        fVar13 = 0.0;
        if (0.0 <= *(float *)(this + 0x17c)) {
          local_18[0] = (float)PVZ_T();
          local_18[0] = local_18[0] - *(float *)(this + 0x17c);
          pfVar8 = eastl::min_alt<float>(local_18,(float *)&DAT_05752a58);
          fVar13 = *pfVar8 * 0.033333335;
        }
        lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae20c8);
        fVar14 = (float)(*(int *)(lVar7 + 0x38) / 2);
        iVar3 = FUN_03f0bf14();
        lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae20c8);
        iVar1 = FUN_03f0bf14();
        iVar4 = *(int *)(lVar7 + 0x38);
        Sexy::Insets::Insets(aIStack_28,0x40,0,0,100);
        Sexy::Insets::Insets((Insets *)local_18,0xff,0xb4,0xb4,100);
        DrawRadialCooldown(fVar13,(float)(ulong)((long)iVar3 + (iVar1 + iVar4) * lVar10) + fVar14,
                           fVar14,fVar14,param_1,aIStack_28,(Insets *)local_18);
        if (0.99999 < fVar13) {
          this[0x180] = (CustomLevelAppraiseUI)0x1;
        }
        goto LAB_03f0cc78;
      }
LAB_03f0cae8:
      if (lVar10 == 1) {
        pCVar9 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae21a0;
        goto LAB_03f0ce18;
      }
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae2170;
      pCVar9 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae2260;
      if (lVar10 != 2) goto LAB_03f0cb00;
LAB_03f0cd8c:
      local_60 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
      iVar4 = FUN_03f0bf14();
      lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae20c8);
      iVar3 = FUN_03f0bf14();
      iVar4 = iVar4 + (iVar3 + *(int *)(lVar7 + 0x38)) * 2;
LAB_03f0cdbc:
      lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae20c8);
      iVar3 = *(int *)(lVar7 + 0x38);
      lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae20c8);
      Sexy::Graphics::DrawImage(param_1,local_60,iVar4,0,iVar3,*(int *)(lVar7 + 0x3c));
      if ((byte)this[0x180] < (lVar10 != 0)) goto LAB_03f0cb80;
    }
    else {
      if ((*(int *)pCVar12 == 1) || (this[lVar10 + 0x178] != (CustomLevelAppraiseUI)0x0)) {
        if (lVar10 != 0) goto LAB_03f0cd08;
        pCVar9 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae22b0;
      }
      else {
        if (lVar10 != 0) goto LAB_03f0cae8;
        pCVar9 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae21c8;
      }
      pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar9);
      iVar3 = FUN_03f0bf14();
      CachedUIResourcePtr<Sexy::Image>::operator->
                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae20c8);
      lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae20c8);
      iVar4 = *(int *)(lVar7 + 0x38);
      lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae20c8);
      Sexy::Graphics::DrawImage(param_1,pIVar6,iVar3,(int)lVar10,iVar4,*(int *)(lVar7 + 0x3c));
LAB_03f0cc78:
      if (lVar11 == 4) {
        Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_40);
        if (local_8 == ___stack_chk_guard) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
    lVar11 = lVar11 + 1;
    pCVar12 = pCVar12 + 4;
    lVar10 = lVar10 + 1;
  } while( true );
}


/* non-virtual thunk to CustomLevelAppraiseUI::Draw(Sexy::Graphics*) */

void __thiscall CustomLevelAppraiseUI::Draw(CustomLevelAppraiseUI *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

