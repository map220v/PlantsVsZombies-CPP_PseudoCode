// Class: UINewPVPZombieUpgradeSkillBank


/* UINewPVPZombieUpgradeSkillBank::onGameplayRealStarted() */

void __thiscall
UINewPVPZombieUpgradeSkillBank::onGameplayRealStarted(UINewPVPZombieUpgradeSkillBank *this)

{
  UIWidget::SetVisible((UIWidget *)this,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPZombieUpgradeSkillBank::StaticClassInit() */

void UINewPVPZombieUpgradeSkillBank::StaticClassInit(void)

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
    std::string::string(asStack_10,"UINewPVPZombieUpgradeSkillBank");
    (*pcVar2)(plVar1,asStack_10,FUN_0351fee0,0x188,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINewPVPZombieUpgradeSkillBank::StaticGetClass() */

long * UINewPVPZombieUpgradeSkillBank::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"UINewPVPZombieUpgradeSkillBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UINewPVPZombieUpgradeSkillBank::GetClass() const */

long * UINewPVPZombieUpgradeSkillBank::GetClass(void)

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
  (*pcVar3)(plVar1,"UINewPVPZombieUpgradeSkillBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UINewPVPZombieUpgradeSkillBank::GetButton(int) */

undefined8 __thiscall
UINewPVPZombieUpgradeSkillBank::GetButton(UINewPVPZombieUpgradeSkillBank *this,int param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(this + 0x168);
  uVar1 = FUN_0351d5fc(uVar3,*(undefined8 *)(this + 0x170));
  if ((ulong)(long)param_1 < uVar1) {
    puVar2 = (undefined8 *)FUN_0351d608(uVar3,(long)param_1);
    return *puVar2;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPZombieUpgradeSkillBank::registerForEvents() */

void __thiscall
UINewPVPZombieUpgradeSkillBank::registerForEvents(UINewPVPZombieUpgradeSkillBank *this)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayRealStarted);
  Sexy::Delegate0::
  Delegate0<UINewPVPZombieUpgradeSkillBank,void(UINewPVPZombieUpgradeSkillBank::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::NotifyGameplayStarted,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINewPVPZombieUpgradeSkillBank::UINewPVPZombieUpgradeSkillBank() */

void __thiscall
UINewPVPZombieUpgradeSkillBank::UINewPVPZombieUpgradeSkillBank(UINewPVPZombieUpgradeSkillBank *this)

{
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined ***)this = &PTR_GetClass_0664f830;
  *(undefined ***)(this + 0x10) = &PTR__UINewPVPZombieUpgradeSkillBank_0664f9d0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x168));
  *(undefined4 *)(this + 0x180) = 0x3f800000;
  return;
}


/* UINewPVPZombieUpgradeSkillBank::StaticNew() */

UINewPVPZombieUpgradeSkillBank * UINewPVPZombieUpgradeSkillBank::StaticNew(void)

{
  UINewPVPZombieUpgradeSkillBank *this;
  
  this = ::operator_new(0x188);
  UINewPVPZombieUpgradeSkillBank(this);
  return this;
}


/* UINewPVPZombieUpgradeSkillBank::~UINewPVPZombieUpgradeSkillBank() */

void __thiscall
UINewPVPZombieUpgradeSkillBank::~UINewPVPZombieUpgradeSkillBank
          (UINewPVPZombieUpgradeSkillBank *this)

{
  *(undefined ***)this = &PTR_GetClass_0664f830;
  *(undefined ***)(this + 0x10) = &PTR__UINewPVPZombieUpgradeSkillBank_0664f9d0;
  std::vector<NewPVPTestButton*,std::allocator<NewPVPTestButton*>>::~vector
            ((vector<NewPVPTestButton*,std::allocator<NewPVPTestButton*>> *)(this + 0x168));
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to UINewPVPZombieUpgradeSkillBank::~UINewPVPZombieUpgradeSkillBank() */

void __thiscall
UINewPVPZombieUpgradeSkillBank::~UINewPVPZombieUpgradeSkillBank
          (UINewPVPZombieUpgradeSkillBank *this)

{
  ~UINewPVPZombieUpgradeSkillBank(this + -0x10);
  return;
}


/* UINewPVPZombieUpgradeSkillBank::~UINewPVPZombieUpgradeSkillBank() */

void __thiscall
UINewPVPZombieUpgradeSkillBank::~UINewPVPZombieUpgradeSkillBank
          (UINewPVPZombieUpgradeSkillBank *this)

{
  ~UINewPVPZombieUpgradeSkillBank(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UINewPVPZombieUpgradeSkillBank::~UINewPVPZombieUpgradeSkillBank() */

void __thiscall
UINewPVPZombieUpgradeSkillBank::~UINewPVPZombieUpgradeSkillBank
          (UINewPVPZombieUpgradeSkillBank *this)

{
  ~UINewPVPZombieUpgradeSkillBank(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPZombieUpgradeSkillBank::onLoadComplete() */

void __thiscall UINewPVPZombieUpgradeSkillBank::onLoadComplete(UINewPVPZombieUpgradeSkillBank *this)

{
  vector<NewPVPTestButton*,std::allocator<NewPVPTestButton*>> *this_00;
  NewPVPTestButton *pNVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  UIWidget *pUVar7;
  LotteryResultProgressBar *this_01;
  SalesProgressBar *this_02;
  RtObject *pRVar8;
  NewPVPMgr *pNVar9;
  long lVar10;
  string asStack_40 [8];
  int local_38;
  int local_34;
  NewPVPTestButton *local_30;
  NewPVPTestButton *local_28;
  NewPVPTestButton *local_20;
  undefined4 local_18;
  undefined4 local_14;
  SecretGachaMgr *local_8;
  
  local_8 = ___stack_chk_guard;
  SecretGachaMgr::GetScreenType(___stack_chk_guard);
  bVar2 = std::operator==(asStack_40,"Normal");
  if (bVar2) {
    *(undefined4 *)(this + 0x180) = 0x3f4ccccd;
    iVar4 = FUN_0351e4e8(0);
  }
  else {
    bVar2 = std::operator==(asStack_40,"Large");
    if (bVar2) {
      *(undefined4 *)(this + 0x180) = 0x3f333333;
      iVar4 = FUN_0351e4e8(0xfffffff6);
    }
    else {
      cVar3 = (**(code **)(*gLawnApp + 0x360))(gLawnApp);
      if (cVar3 == '\0') {
        (**(code **)(*gLawnApp + 0x368))(gLawnApp);
      }
      *(undefined4 *)(this + 0x180) = 0x3f333333;
      iVar4 = FUN_0351e4e8(0);
    }
  }
  this_00 = (vector<NewPVPTestButton*,std::allocator<NewPVPTestButton*>> *)(this + 0x168);
  std::string::string((string *)&local_18,"UIScreen");
  pUVar7 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_18);
  UIWidget::SetParentWidget((UIWidget *)this,pUVar7);
  std::string::~string((string *)&local_18);
  nop();
  this_01 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa5228);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(this_01);
  FUN_0351d4ac(this + 0x38,(int)((float)iVar5 * *(float *)(this + 0x180)));
  this_02 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa5228);
  iVar5 = SalesProgressBar::GetCurrentLevel(this_02);
  FUN_0351d4b8(this + 0x3c,(int)((float)iVar5 * *(float *)(this + 0x180)));
  UIWidget::SetAnchorType((UIWidget *)this,7);
  UIWidget::SetParentAnchorType((UIWidget *)this,7);
  iVar5 = FUN_0351e4e8(10);
  iVar6 = FUN_0351e4e8(0);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_18,(float)(iVar5 + iVar4),(float)iVar6);
  UIWidget::SetPositionOffset(local_18,local_14,this);
  Sexy::Point::Point((Point *)&local_38,iVar4,0);
  Sexy::RtName::RtName((RtName *)&local_18,L"UINewPVPTestButton");
  pRVar8 = (RtObject *)UIWidget::CreateWidget((string *)&local_18,0);
  local_30 = Sexy::RtObject::Cast<NewPVPTestButton>(pRVar8);
  Sexy::RtName::~RtName((RtName *)&local_18);
  NewPVPTestButton::Adapt(local_30);
  NewPVPTestButton::SetType(local_30,0);
  pNVar1 = local_30;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_18,(float)local_38,(float)local_34);
  UIWidget::SetPositionOffset(local_18,local_14,pNVar1);
  UIWidget::SetClickable((UIWidget *)local_30,false);
  pNVar1 = local_30;
  pNVar9 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  lVar10 = NewPVPMgr::GetZombieUpgradeInfo(pNVar9,0);
  FUN_0351d550((UIWidget *)(pNVar1 + 0x184),*(undefined4 *)(lVar10 + 0xc));
  UIWidget::SetVisible((UIWidget *)local_30,false);
  std::vector<NewPVPTestButton*,std::allocator<NewPVPTestButton*>>::push_back(this_00,&local_30);
  iVar4 = FUN_0351d4a8(*(undefined4 *)(local_30 + 0x38));
  local_38 = local_38 + iVar4;
  Sexy::RtName::RtName((RtName *)&local_18,L"UINewPVPTestButton");
  pRVar8 = (RtObject *)UIWidget::CreateWidget((string *)&local_18,0);
  local_28 = Sexy::RtObject::Cast<NewPVPTestButton>(pRVar8);
  Sexy::RtName::~RtName((RtName *)&local_18);
  NewPVPTestButton::Adapt(local_28);
  NewPVPTestButton::SetType(local_28,1);
  pNVar1 = local_28;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_18,(float)local_38,(float)local_34);
  UIWidget::SetPositionOffset(local_18,local_14,pNVar1);
  UIWidget::SetClickable((UIWidget *)local_28,false);
  pNVar1 = local_28;
  pNVar9 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  lVar10 = NewPVPMgr::GetZombieUpgradeInfo(pNVar9,1);
  FUN_0351d550((UIWidget *)(pNVar1 + 0x184),*(undefined4 *)(lVar10 + 0xc));
  UIWidget::SetVisible((UIWidget *)local_28,false);
  std::vector<NewPVPTestButton*,std::allocator<NewPVPTestButton*>>::push_back(this_00,&local_28);
  iVar4 = FUN_0351d4a8(*(undefined4 *)(local_28 + 0x38));
  local_38 = local_38 + iVar4;
  Sexy::RtName::RtName((RtName *)&local_18,L"UINewPVPTestButton");
  pRVar8 = (RtObject *)UIWidget::CreateWidget((string *)&local_18,0);
  local_20 = Sexy::RtObject::Cast<NewPVPTestButton>(pRVar8);
  Sexy::RtName::~RtName((RtName *)&local_18);
  NewPVPTestButton::Adapt(local_20);
  NewPVPTestButton::SetType(local_20,2);
  pNVar1 = local_20;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_18,(float)local_38,(float)local_34);
  UIWidget::SetPositionOffset(local_18,local_14,pNVar1);
  UIWidget::SetClickable((UIWidget *)local_20,false);
  pNVar1 = local_20;
  pNVar9 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  lVar10 = NewPVPMgr::GetZombieUpgradeInfo(pNVar9,2);
  FUN_0351d550((UIWidget *)(pNVar1 + 0x184),*(undefined4 *)(lVar10 + 0xc));
  UIWidget::SetVisible((UIWidget *)local_20,false);
  std::vector<NewPVPTestButton*,std::allocator<NewPVPTestButton*>>::push_back(this_00,&local_20);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPZombieUpgradeSkillBank::Draw(Sexy::Graphics*) */

void __thiscall
UINewPVPZombieUpgradeSkillBank::Draw(UINewPVPZombieUpgradeSkillBank *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  Image *pIVar7;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  float fVar11;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  uVar10 = *(undefined8 *)(this + 0x168);
  local_8 = ___stack_chk_guard;
  uVar8 = 0;
  uVar5 = FUN_0351d5fc(uVar10,*(undefined8 *)(this + 0x170));
  iVar4 = 0;
  if (uVar5 != 0) {
    do {
      plVar6 = (long *)FUN_0351d608(uVar10,uVar8);
      lVar9 = *plVar6;
      if (lVar9 != 0) {
        iVar1 = FUN_0351e4e8(0xf);
        fVar11 = *(float *)(this + 0x180);
        iVar2 = FUN_0351d4a8(*(undefined4 *)(lVar9 + 0x38));
        iVar3 = FUN_0351e4e8(0x12);
        Sexy::FastCurve::SetOutRange
                  ((FastCurve *)&local_10,
                   ((float)iVar2 + fVar11 * (float)iVar3) * (float)iVar4 + fVar11 * (float)iVar1,0.0
                  );
        UIWidget::SetPositionOffset(local_10,local_c,lVar9);
        uVar10 = *(undefined8 *)(this + 0x168);
        uVar5 = FUN_0351d5fc(uVar10,*(undefined8 *)(this + 0x170));
      }
      uVar8 = uVar8 + 1;
      iVar4 = (int)uVar8;
    } while (uVar8 < uVar5);
  }
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)&local_10,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  UIWidget::IsVisible((UIWidget *)this);
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa5228);
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa5228);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  fVar11 = *(float *)(this + 0x180);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa5228);
  iVar1 = SalesProgressBar::GetCurrentLevel(this_01);
  Sexy::Graphics::DrawImage
            (param_1,pIVar7,0,0,(int)((float)iVar4 * fVar11),
             (int)((float)iVar1 * *(float *)(this + 0x180)));
  Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UINewPVPZombieUpgradeSkillBank::Draw(Sexy::Graphics*) */

void __thiscall
UINewPVPZombieUpgradeSkillBank::Draw(UINewPVPZombieUpgradeSkillBank *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

