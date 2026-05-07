// Class: WorldMap_UniverseViewButton


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_UniverseViewButton::~WorldMap_UniverseViewButton() */

void __thiscall
WorldMap_UniverseViewButton::~WorldMap_UniverseViewButton(WorldMap_UniverseViewButton *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_0685f770;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_UniverseViewButton_0685f918;
  if (*(long **)(this + 0x168) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x168) + 0x18))();
    *(undefined8 *)(this + 0x168) = 0;
  }
  this_00 = gLawnApp;
  std::string::string(asStack_10,"Universe_Btn");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  UIWidget::~UIWidget((UIWidget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to WorldMap_UniverseViewButton::~WorldMap_UniverseViewButton() */

void __thiscall
WorldMap_UniverseViewButton::~WorldMap_UniverseViewButton(WorldMap_UniverseViewButton *this)

{
  ~WorldMap_UniverseViewButton(this + -0x10);
  return;
}


/* WorldMap_UniverseViewButton::~WorldMap_UniverseViewButton() */

void __thiscall
WorldMap_UniverseViewButton::~WorldMap_UniverseViewButton(WorldMap_UniverseViewButton *this)

{
  ~WorldMap_UniverseViewButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_UniverseViewButton::~WorldMap_UniverseViewButton() */

void __thiscall
WorldMap_UniverseViewButton::~WorldMap_UniverseViewButton(WorldMap_UniverseViewButton *this)

{
  ~WorldMap_UniverseViewButton(this + -0x10);
  return;
}


/* WorldMap_UniverseViewButton::onUpdate() */

void __thiscall WorldMap_UniverseViewButton::onUpdate(WorldMap_UniverseViewButton *this)

{
  if (*(StandaloneEffect **)(this + 0x168) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Update(*(StandaloneEffect **)(this + 0x168));
    return;
  }
  return;
}


/* WorldMap_UniverseViewButton::StaticGetClass() */

long * WorldMap_UniverseViewButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_UniverseViewButton",uVar2,StaticNew);
  return sClass;
}


/* WorldMap_UniverseViewButton::GetClass() const */

long * WorldMap_UniverseViewButton::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_UniverseViewButton",uVar2,StaticNew);
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_UniverseViewButton::WorldMap_UniverseViewButton() */

void __thiscall
WorldMap_UniverseViewButton::WorldMap_UniverseViewButton(WorldMap_UniverseViewButton *this)

{
  LawnApp *this_00;
  long lVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_UniverseViewButton_0685f918;
  *(undefined ***)this = &PTR_GetClass_0685f770;
  this_00 = gLawnApp;
  std::string::string(asStack_10,"Universe_Btn");
  LawnApp::LoadGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  this[0x170] = (WorldMap_UniverseViewButton)0x0;
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x168) = 0;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_UniverseViewButton::StaticNew() */

WorldMap_UniverseViewButton * WorldMap_UniverseViewButton::StaticNew(void)

{
  WorldMap_UniverseViewButton *this;
  
  this = ::operator_new(0x178);
  WorldMap_UniverseViewButton(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_UniverseViewButton::CreateAnim() */

void __thiscall WorldMap_UniverseViewButton::CreateAnim(WorldMap_UniverseViewButton *this)

{
  int iVar1;
  int iVar2;
  Effect_PopAnim *pEVar3;
  ResourceInfo *pRVar4;
  long *plVar5;
  StandaloneEffect *this_00;
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x170] == (WorldMap_UniverseViewButton)0x0) {
    pEVar3 = GameObject::CreateOutsideTable<Effect_PopAnim>();
    *(Effect_PopAnim **)(this + 0x168) = pEVar3;
    std::string::string(asStack_20,"POPANIM_EFFECTS_UNIVERSE_BTN");
    GetPAMByName(asStack_20);
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
    Effect_PopAnim::CreatePopAnimRig(pEVar3,(PopAnim *)pRVar4,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    std::string::~string(asStack_20);
    nop();
    if (*(Effect_PopAnim **)(this + 0x168) != (Effect_PopAnim *)0x0) {
      Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0x168),true);
      StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x168),true);
      (**(code **)(**(long **)(this + 0x168) + 0x80))(0x3f47ae14,*(long **)(this + 0x168));
      Sexy::Insets::Insets((Insets *)aRStack_18);
      plVar5 = (long *)UIWidget::GetAtlasImage(*(UIWidget **)(this + 0x168));
      (**(code **)(*plVar5 + 0x90))(plVar5,aRStack_18);
      FUN_045776d0(this + 0x38,local_10);
      FUN_045776dc(this + 0x3c,local_c);
      this_00 = *(StandaloneEffect **)(this + 0x168);
      iVar1 = FUN_045776cc(*(undefined4 *)(this + 0x38));
      iVar2 = FUN_045776d8(*(undefined4 *)(this + 0x3c));
      Sexy::FastCurve::SetOutRange((FastCurve *)asStack_20,(float)(iVar1 / 2),(float)(iVar2 / 2));
      StandaloneEffect::SetScreenSpaceOrigin(this_00,(SexyVector2 *)asStack_20,900000);
      pEVar3 = *(Effect_PopAnim **)(this + 0x168);
      std::string::string(asStack_20,"idle");
      PVZ_EOT();
      Effect_PopAnim::PlayLoopingAnimation(pEVar3,asStack_20,0);
      std::string::~string(asStack_20);
      nop();
      this[0x170] = (WorldMap_UniverseViewButton)0x1;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_UniverseViewButton::updateButtonStates(int, int, bool) */

void __thiscall
WorldMap_UniverseViewButton::updateButtonStates
          (WorldMap_UniverseViewButton *this,int param_1,int param_2,bool param_3)

{
  LawnApp *this_00;
  char cVar1;
  char *pcVar2;
  long lVar3;
  UniverseMap *this_01;
  PVZ2UIDialog *this_02;
  Effect_PopAnim *pEVar4;
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0xa8))(this,param_1,param_2);
  if (cVar1 == '\0') {
    FUN_045776e4(this + 0x160);
LAB_04577b6c:
    if (!param_3) goto LAB_04577af8;
    cVar1 = FUN_045776ec(this[0x160]);
    if (cVar1 != '\0') goto LAB_04577a88;
    pEVar4 = *(Effect_PopAnim **)(this + 0x168);
    if (pEVar4 == (Effect_PopAnim *)0x0) goto LAB_04577acc;
    std::string::string(asStack_50,"idle");
    PVZ_EOT();
  }
  else {
    cVar1 = FUN_045776ec(this[0x160]);
    if (cVar1 == '\0') {
      pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar2,"Play_UI_Map_Select_Universe_Press");
      FUN_045776e4(this + 0x160,param_3);
      goto LAB_04577b6c;
    }
    if (param_3) {
LAB_04577a88:
      pEVar4 = *(Effect_PopAnim **)(this + 0x168);
      if (pEVar4 != (Effect_PopAnim *)0x0) {
        std::string::string(asStack_50,"button");
        Effect_PopAnim::PlaySingleAnimation(pEVar4,asStack_50,0);
        std::string::~string(asStack_50);
        nop();
      }
      goto LAB_04577acc;
    }
LAB_04577af8:
    cVar1 = (**(code **)(*(long *)this + 0xa8))(this,param_1,param_2);
    if (cVar1 != '\0') {
      cVar1 = WorldMapUtils::UniverseIsOpen();
      this_00 = gLawnApp;
      if (cVar1 == '\0') {
        TodStringTranslate(L"[REVIVE_TIP]");
        TodStringTranslate(L"[UNIVERSE_NOT_OPEN]");
        this_02 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,(wstring *)asStack_50);
        FUN_05476c50((wstring *)asStack_50);
        FUN_05476c50(awStack_58);
        FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
        Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,(wstring *)asStack_50);
        PVZ2UIDialog::AddButton(this_02,awStack_58,aDStack_38,0);
        FUN_05476c50(awStack_58);
        nop();
        PVZ2UIDialog::SetBackgroundDarken(this_02,true,0.5);
      }
      else {
        pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar2,"Play_UI_Map_Select_Universe_Release");
        lVar3 = LawnApp::GetWorldMap(gLawnApp);
        this_01 = (UniverseMap *)FUN_045776f0(*(undefined8 *)(lVar3 + 0x2b0));
        UniverseMap::TransitionToUniverse(this_01,false);
      }
    }
    pEVar4 = *(Effect_PopAnim **)(this + 0x168);
    if (pEVar4 == (Effect_PopAnim *)0x0) goto LAB_04577acc;
    std::string::string(asStack_50,"idle");
    PVZ_EOT();
  }
  Effect_PopAnim::PlayLoopingAnimation(pEVar4,asStack_50,0);
  std::string::~string(asStack_50);
  nop();
LAB_04577acc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_UniverseViewButton::Draw(Sexy::Graphics*) */

void __thiscall
WorldMap_UniverseViewButton::Draw(WorldMap_UniverseViewButton *this,Graphics *param_1)

{
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  if (*(StandaloneEffect **)(this + 0x168) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0x168),param_1);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to WorldMap_UniverseViewButton::Draw(Sexy::Graphics*) */

void __thiscall
WorldMap_UniverseViewButton::Draw(WorldMap_UniverseViewButton *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

