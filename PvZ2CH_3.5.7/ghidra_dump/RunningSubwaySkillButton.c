// Class: RunningSubwaySkillButton


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RunningSubwaySkillButton::StaticClassInit() */

void RunningSubwaySkillButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"RunningSubwaySkillButton");
    (*pcVar2)(plVar1,asStack_10,FUN_033f3214,0x200,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RunningSubwaySkillButton::StaticGetClass() */

long * RunningSubwaySkillButton::StaticGetClass(void)

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
  uVar2 = UIEasyButtonWidget::StaticGetClass();
  (*pcVar3)(plVar1,"RunningSubwaySkillButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RunningSubwaySkillButton::GetClass() const */

long * RunningSubwaySkillButton::GetClass(void)

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
  uVar2 = UIEasyButtonWidget::StaticGetClass();
  (*pcVar3)(plVar1,"RunningSubwaySkillButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RunningSubwaySkillButton::activate() */

void __thiscall RunningSubwaySkillButton::activate(RunningSubwaySkillButton *this)

{
  this[0x1f1] = (RunningSubwaySkillButton)0x1;
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* RunningSubwaySkillButton::OnClick() */

void __thiscall RunningSubwaySkillButton::OnClick(RunningSubwaySkillButton *this)

{
  char cVar1;
  
  cVar1 = FUN_033e94fc(this[0x1f0]);
  if (cVar1 == '\0') {
    return;
  }
  activate(this);
  return;
}


/* RunningSubwaySkillButton::disabled() */

void __thiscall RunningSubwaySkillButton::disabled(RunningSubwaySkillButton *this)

{
  this[0x1f1] = (RunningSubwaySkillButton)0x0;
  return;
}


/* RunningSubwaySkillButton::SetCanActivate(bool) */

void __thiscall
RunningSubwaySkillButton::SetCanActivate(RunningSubwaySkillButton *this,bool param_1)

{
  this[0x1f0] = (RunningSubwaySkillButton)param_1;
  if (param_1) {
    return;
  }
  disabled(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RunningSubwaySkillButton::InitParam() */

void __thiscall RunningSubwaySkillButton::InitParam(RunningSubwaySkillButton *this)

{
  string asStack_20 [8];
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_20,"IMAGE_UI_RUNNING_SUBWAY_SKILL_BTN_ON");
  nop();
  std::string::string(asStack_18,"IMAGE_UI_RUNNING_SUBWAY_SKILL_BTN_OFF");
  nop();
  LawnApp::GetUIImageFromStringId(gLawnApp);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1d8),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  LawnApp::GetUIImageFromStringId(gLawnApp);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1e0),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::string((string *)aRStack_10,"IMAGE_UI_HUD_INGAME_POWERUP_CUKE_FRAME");
  UIEasyButtonWidget::SetImageNormal((UIEasyButtonWidget *)this,(string *)aRStack_10);
  std::string::~string((string *)aRStack_10);
  nop();
  std::string::string((string *)aRStack_10,"Play_UI_Map_Select_Universe_Press");
  DEditorNode::setRootName((string *)this);
  std::string::~string((string *)aRStack_10);
  nop();
  std::string::string((string *)aRStack_10,"Play_UI_Map_Select_Universe_Release");
  UIEasyButtonWidget::SetSoundReleased((string *)this);
  std::string::~string((string *)aRStack_10);
  nop();
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RunningSubwaySkillButton::~RunningSubwaySkillButton() */

void __thiscall RunningSubwaySkillButton::~RunningSubwaySkillButton(RunningSubwaySkillButton *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  long *plVar2;
  
  this_00 = (RtWeakPtr *)(this + 0x1f8);
  *(undefined ***)this = &PTR_GetClass_0661d790;
  *(undefined ***)(this + 0x10) = &PTR__RunningSubwaySkillButton_0661d948;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1e0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1d8));
  UIEasyButtonWidget::~UIEasyButtonWidget((UIEasyButtonWidget *)this);
  return;
}


/* non-virtual thunk to RunningSubwaySkillButton::~RunningSubwaySkillButton() */

void __thiscall RunningSubwaySkillButton::~RunningSubwaySkillButton(RunningSubwaySkillButton *this)

{
  ~RunningSubwaySkillButton(this + -0x10);
  return;
}


/* RunningSubwaySkillButton::~RunningSubwaySkillButton() */

void __thiscall RunningSubwaySkillButton::~RunningSubwaySkillButton(RunningSubwaySkillButton *this)

{
  ~RunningSubwaySkillButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to RunningSubwaySkillButton::~RunningSubwaySkillButton() */

void __thiscall RunningSubwaySkillButton::~RunningSubwaySkillButton(RunningSubwaySkillButton *this)

{
  ~RunningSubwaySkillButton(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RunningSubwaySkillButton::OnTouch(Sexy::Touch const&) */

void __thiscall RunningSubwaySkillButton::OnTouch(RunningSubwaySkillButton *this,Touch *param_1)

{
  char cVar1;
  int local_20;
  int local_1c;
  TRect<int> aTStack_18 [16];
  long local_8;
  
  cVar1 = '\0';
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point((Point *)&local_20,(TPoint *)(param_1 + 0x10));
  local_20 = local_20 + *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x48);
  local_1c = local_1c + *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x4c);
  if (*(int *)(param_1 + 0x30) == 0) {
    BoardArtifactButton::CalcPlusButtonRect((BoardArtifactButton *)this);
    cVar1 = Sexy::TRect<int>::Contains(aTStack_18,(TPoint *)&local_20);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)this + 0xe8))(this,4);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RunningSubwaySkillButton::Draw(Sexy::Graphics*) */

void __thiscall RunningSubwaySkillButton::Draw(RunningSubwaySkillButton *this,Graphics *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  RtWeakPtr *this_01;
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  StandaloneEffect *pSVar6;
  ulong uVar7;
  undefined8 uVar8;
  LotteryResultProgressBar *this_02;
  ResourceInfo *pRVar9;
  Board *this_03;
  ulong uVar10;
  GraphicsAutoState aGStack_38 [8];
  int local_30;
  int local_2c;
  Insets aIStack_28 [16];
  int local_18;
  int local_14;
  int local_10;
  long local_8;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1f8);
  local_8 = ___stack_chk_guard;
  pSVar6 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  StandaloneEffect::SetVisibility(pSVar6,false);
  UIEasyButtonWidget::Draw((UIEasyButtonWidget *)this,param_1);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_38,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  cVar1 = FUN_033e94fc(this[0x1f0]);
  if ((cVar1 == '\0') || (this[0x1f1] != (RunningSubwaySkillButton)0x0)) {
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x1d8));
  }
  else {
    UIWidget::GetDrawRect();
    Sexy::Point::Point((Point *)&local_30,local_18,local_14);
    this_03 = *(Board **)(gLawnApp + 0x9f0);
    local_30 = local_30 - *(int *)(this_03 + 0x48);
    local_2c = local_2c - *(int *)(this_03 + 0x4c);
    Board::TranslateScreenPositionToBoardPosition(this_03,(Point *)&local_30);
    pSVar6 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    iVar3 = local_2c;
    iVar4 = FUN_033e9e70(5);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)aIStack_28,(float)(local_30 + local_10 / 2),(float)(iVar3 + iVar4));
    StandaloneEffect::SetScreenSpaceOrigin(pSVar6,(SexyVector2 *)aIStack_28,0xaae61);
    pSVar6 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    StandaloneEffect::SetVisibility(pSVar6,true);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x1d8));
  }
  if (bVar2) {
    iVar3 = FUN_033e94b8(*(undefined4 *)(this + 0x38));
    this_02 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1d8));
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(this_02);
    iVar5 = FUN_033e9f34(0xfffffffb);
    this_01 = (RtWeakPtr *)(this + 0x1d8);
    if (this[0x1f1] != (RunningSubwaySkillButton)0x0) {
      this_01 = (RtWeakPtr *)(this + 0x1e0);
    }
    pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01);
    Sexy::Graphics::DrawImage(param_1,(Image *)pRVar9,(iVar3 - iVar4) / 2,iVar5);
  }
  uVar10 = 0;
  iVar3 = FUN_033e94bc(*(undefined4 *)(this + 0x3c));
  iVar4 = FUN_033e9f34(0x1e);
  iVar5 = FUN_033e94b8(*(undefined4 *)(this + 0x38));
  Sexy::Insets::Insets(aIStack_28,0,iVar3 - iVar4,iVar5,iVar4);
  if (this[0x1f1] == (RunningSubwaySkillButton)0x0) {
    uVar10 = FUN_033e9508(*(undefined4 *)(this + 0x1e8));
    uVar10 = uVar10 & 0xffffffff;
  }
  uVar7 = FUN_033e9514(*(undefined4 *)(this + 0x1ec));
  Sexy::StrFormat(L"%d  /  %d",&local_30,uVar10,uVar7 & 0xffffffff);
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color((Color *)&local_18,1);
  WriteWordInRect(param_1,&local_30,aIStack_28,uVar8,(Color *)&local_18,5,1);
  FUN_05476c50(&local_30);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to RunningSubwaySkillButton::Draw(Sexy::Graphics*) */

void __thiscall RunningSubwaySkillButton::Draw(RunningSubwaySkillButton *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RunningSubwaySkillButton::RunningSubwaySkillButton() */

void __thiscall RunningSubwaySkillButton::RunningSubwaySkillButton(RunningSubwaySkillButton *this)

{
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *this_00;
  Effect_PopAnim *pEVar1;
  ResourceInfo *pRVar2;
  StandaloneEffect *this_01;
  RtWeakPtr aRStack_18 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  this_00 = (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1f8);
  local_8 = ___stack_chk_guard;
  UIEasyButtonWidget::UIEasyButtonWidget((UIEasyButtonWidget *)this);
  *(undefined ***)this = &PTR_GetClass_0661d790;
  *(undefined ***)(this + 0x10) = &PTR__RunningSubwaySkillButton_0661d948;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1d8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1e0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(this_00)
  ;
  this[0x1d0] = (RunningSubwaySkillButton)0x0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1d8),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1e0),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  *(undefined4 *)(this + 0x1e8) = 0;
  *(undefined4 *)(this + 0x1ec) = 0;
  this[0x1f0] = (RunningSubwaySkillButton)0x0;
  this[0x1f1] = (RunningSubwaySkillButton)0x0;
  Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  pEVar1 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  std::string::string((string *)a_Stack_10,"POPANIM_EFFECTS_POWER_UP_CUKE_BUTTON_FIRE");
  GetPAMByName((string *)a_Stack_10);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(pEVar1,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string((string *)a_Stack_10);
  nop();
  pEVar1 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Effect_PopAnim::SetCentered(pEVar1,true);
  this_01 = (StandaloneEffect *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  StandaloneEffect::SetKeepAlive(this_01,true);
  pEVar1 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  std::string::string((string *)a_Stack_10,"CUKE_FIRE");
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(pEVar1,a_Stack_10,0);
  std::string::~string((string *)a_Stack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RunningSubwaySkillButton::StaticNew() */

RunningSubwaySkillButton * RunningSubwaySkillButton::StaticNew(void)

{
  RunningSubwaySkillButton *this;
  
  this = ::operator_new(0x200);
  RunningSubwaySkillButton(this);
  return this;
}


/* RunningSubwaySkillButton::updateButtonStates(int, int, bool) */

void __thiscall
RunningSubwaySkillButton::updateButtonStates
          (RunningSubwaySkillButton *this,int param_1,int param_2,bool param_3)

{
  char cVar1;
  string *psVar2;
  
  cVar1 = (**(code **)(*(long *)this + 0xa8))(this,param_1,param_2);
  if (cVar1 == '\0') {
    FUN_033e94c0(this + 0x160);
  }
  else {
    cVar1 = FUN_033e94c8(this[0x160]);
    if (cVar1 == '\0') {
      psVar2 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(psVar2,this + 0x198);
      FUN_033e94c0(this + 0x160,param_3);
    }
  }
  if ((!param_3) &&
     (cVar1 = (**(code **)(*(long *)this + 0xa8))(this,param_1,param_2), cVar1 != '\0')) {
    if (this[0x1a8] == (RunningSubwaySkillButton)0x0) {
      psVar2 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(psVar2,this + 0x1a0);
    }
    (**(code **)(*(long *)this + 0x198))(this);
    return;
  }
  return;
}

