// Class: CallofWishTaskWidget


/* CallofWishTaskWidget::~CallofWishTaskWidget() */

void __thiscall CallofWishTaskWidget::~CallofWishTaskWidget(CallofWishTaskWidget *this)

{
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066f2638;
  *(undefined ***)this = &PTR_GetClass_066f2310;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  FUN_05476c50(this + 0x138);
  FUN_05476c50(this + 0x130);
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x100));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* CallofWishTaskWidget::~CallofWishTaskWidget() */

void __thiscall CallofWishTaskWidget::~CallofWishTaskWidget(CallofWishTaskWidget *this)

{
  ~CallofWishTaskWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CallofWishTaskWidget::UpdateButtonState() */

void __thiscall CallofWishTaskWidget::UpdateButtonState(CallofWishTaskWidget *this)

{
  uint uVar1;
  PVZ2UIButton *this_00;
  wstring awStack_10 [8];
  long local_8;
  
  uVar1 = *(uint *)(*(long *)(this + 0xe8) + 0x14);
  local_8 = ___stack_chk_guard;
  if (uVar1 < 2) {
    (**(code **)(**(long **)(this + 0xf8) + 0x188))(*(long **)(this + 0xf8),1);
  }
  else if (uVar1 == 3) {
    (**(code **)(**(long **)(this + 0xf8) + 0x188))(*(long **)(this + 0xf8),1);
    this_00 = *(PVZ2UIButton **)(this + 0xf8);
    TodStringTranslate(L"[PLANT_OBTAINED]");
    PVZ2UIButton::SetLabelText(this_00,awStack_10);
    FUN_05476c50(awStack_10);
  }
  else if (uVar1 == 2) {
    (**(code **)(**(long **)(this + 0xf8) + 0x188))(*(long **)(this + 0xf8),0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CallofWishTaskWidget::StaticClassInit() */

void CallofWishTaskWidget::StaticClassInit(void)

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
    std::string::string(asStack_10,"CallofWishTaskWidget");
    (*pcVar2)(plVar1,asStack_10,FUN_039d3b08,0x180,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CallofWishTaskWidget::StaticGetClass() */

long * CallofWishTaskWidget::StaticGetClass(void)

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
  uVar2 = Sexy::Widget::StaticGetClass();
  (*pcVar3)(plVar1,"CallofWishTaskWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CallofWishTaskWidget::GetClass() const */

long * CallofWishTaskWidget::GetClass(void)

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
  uVar2 = Sexy::Widget::StaticGetClass();
  (*pcVar3)(plVar1,"CallofWishTaskWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CallofWishTaskWidget::InitTimer() */

void __thiscall CallofWishTaskWidget::InitTimer(CallofWishTaskWidget *this)

{
  EffectAnim_UIAnim *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 local_18;
  undefined4 local_14;
  string asStack_10 [8];
  long local_8;
  
  this_00 = (EffectAnim_UIAnim *)(this + 0x100);
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_039d34f4(0x1e);
  iVar3 = FUN_039d34f4(0x11);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_18,(float)(iVar2 + *(int *)(this + 0x150)),
             (float)(iVar3 + *(int *)(this + 0x154)));
  std::string::string(asStack_10,"POPANIM_UI_NOVICESEVENDAYS_EFFECT_CLOCK");
  EffectAnim_UIAnim::InitUIAnim(0x3f333333,local_18,local_14,this_00,asStack_10,1);
  std::string::~string(asStack_10);
  nop();
  cVar1 = EffectAnim_UIAnim::IsValid(this_00);
  if (cVar1 != '\0') {
    std::string::string(asStack_10,"default");
    EffectAnim_UIAnim::PlayLoop(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CallofWishTaskWidget::DrawTimer(Sexy::Graphics*) */

void __thiscall CallofWishTaskWidget::DrawTimer(CallofWishTaskWidget *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  TimeUtil aTStack_30 [8];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x100));
  if (cVar1 != '\0') {
    EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)(this + 0x100),param_1);
  }
  TimeUtil::GetTimeCountdown(1,-1);
  TimeUtil::GetTimeCountdownFormat(aTStack_30,0);
  iVar2 = FUN_039d34f4(10);
  Sexy::Insets::Insets
            (aIStack_28,iVar2 + *(int *)(this + 0x150),*(int *)(this + 0x154),*(int *)(this + 0x158)
             ,*(int *)(this + 0x15c));
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_1,aTStack_30,aIStack_28,uVar3,aCStack_18,5,1);
  FUN_05476c50(aTStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CallofWishTaskWidget::CallofWishTaskWidget() */

void __thiscall CallofWishTaskWidget::CallofWishTaskWidget(CallofWishTaskWidget *this)

{
  undefined *puVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined4 *)(this + 0xe0) = 0xffffffff;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined ***)this = &PTR_GetClass_066f2310;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066f2638;
  *(undefined8 *)(this + 0xf8) = 0;
  EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x100));
  FUN_05476574(this + 0x130);
  FUN_05476574(this + 0x138);
  Sexy::Insets::Insets((Insets *)(this + 0x140));
  Sexy::Insets::Insets((Insets *)(this + 0x150));
  Sexy::Insets::Insets((Insets *)(this + 0x160));
  Sexy::Insets::Insets((Insets *)(this + 0x170));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,UpdateButtonState);
  Sexy::Delegate0::Delegate0<CallofWishTaskWidget,void(CallofWishTaskWidget::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::CollectIntegralTaskFinish,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,UpdateButtonState);
  Sexy::Delegate0::Delegate0<CallofWishTaskWidget,void(CallofWishTaskWidget::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::UpdateCallofWishTask,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CallofWishTaskWidget::StaticNew() */

CallofWishTaskWidget * CallofWishTaskWidget::StaticNew(void)

{
  CallofWishTaskWidget *this;
  
  this = ::operator_new(0x180);
  CallofWishTaskWidget(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CallofWishTaskWidget::InitView() */

void __thiscall CallofWishTaskWidget::InitView(CallofWishTaskWidget *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  RtObject *this_00;
  CallofWishTaskData *pCVar9;
  CUILabel *this_01;
  PrimeTypeface *pPVar10;
  int *piVar11;
  ulong uVar12;
  ulong uVar13;
  PVZ2UIButton *pPVar14;
  long *plVar15;
  undefined8 uVar16;
  code *pcVar17;
  wstring awStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0x59] = (CallofWishTaskWidget)0x0;
  lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0xe8) + 0x20));
  lVar8 = StringHelper::ToImage((string *)(lVar8 + 0x20),false);
  *(long *)(this + 0xf0) = lVar8;
  if (lVar8 == 0) {
    std::string::string((string *)&local_40,"IMAGE_UI_DIALOG_ASSET_THICK_WHITE_BG");
    uVar16 = StringHelper::ToImage((string *)&local_40,false);
    *(undefined8 *)(this + 0xf0) = uVar16;
    std::string::~string((string *)&local_40);
    nop();
  }
  lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0xe8) + 0x20));
  Sexy::ToWString((string *)(lVar8 + 0x10));
  TodStringTranslate(awStack_78);
  FUN_054766c8(this + 0x130,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
  FUN_05476c50(awStack_78);
  iVar1 = FUN_039d34f4(0x19);
  iVar2 = FUN_039d34f4(0xf0);
  iVar3 = FUN_039d34f4(0x46);
  Sexy::Insets::Insets((Insets *)&local_40,iVar1,0,iVar2,iVar3);
  *(undefined8 *)(this + 0x140) = local_40;
  *(undefined8 *)(this + 0x148) = uStack_38;
  iVar1 = FUN_039d34f4(0x28);
  iVar2 = FUN_039d34f4(0x4b);
  iVar3 = FUN_039d34f4(0x96);
  iVar4 = FUN_039d34f4(0x19);
  Sexy::Insets::Insets((Insets *)&local_40,iVar1,iVar2,iVar3,iVar4);
  *(undefined8 *)(this + 0x160) = local_40;
  *(undefined8 *)(this + 0x168) = uStack_38;
  iVar1 = FUN_039d34f4(0x1ab);
  iVar2 = FUN_039d34f4(8);
  iVar3 = FUN_039d34f4(0x8c);
  iVar4 = FUN_039d34f4(0x28);
  Sexy::Insets::Insets((Insets *)&local_40,iVar1,iVar2,iVar3,iVar4);
  *(undefined8 *)(this + 0x150) = local_40;
  *(undefined8 *)(this + 0x158) = uStack_38;
  iVar1 = FUN_039d34f4(0x1ac);
  iVar2 = FUN_039d34f4(0x37);
  iVar3 = FUN_039d34f4(0x6e);
  iVar4 = FUN_039d34f4(0x2c);
  Sexy::Insets::Insets((Insets *)&local_40,iVar1,iVar2,iVar3,iVar4);
  *(undefined8 *)(this + 0x170) = local_40;
  *(undefined8 *)(this + 0x178) = uStack_38;
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0xe8) + 0x20));
  pCVar9 = Sexy::RtObject::Cast<CallofWishTaskData>(this_00);
  this_01 = (CUILabel *)UIRewardFrameSelect::CreateUIRewardFrame(0,*(int *)(pCVar9 + 0x50),true);
  uVar5 = FUN_039d34f4(0x104);
  uVar6 = FUN_039d34f4(0x14);
  uVar7 = FUN_039d34f4(0x46);
  (**(code **)(*(long *)this_01 + 0x198))(this_01,uVar5,uVar6,uVar7,uVar7);
  pPVar10 = (PrimeTypeface *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac15d8);
  Lua::CUILabel::SetTypeface(this_01,pPVar10);
  TodStringTranslate(L"[CALL_OF_WISH_INTEGRAL]");
  LevelEditorStatueMazeSliderWidget::SetDescription4((wstring *)this_01);
  FUN_05476c50((Insets *)&local_40);
  (**(code **)(*(long *)this + 0x60))(this,this_01);
  if (*(int *)(pCVar9 + 0x50) < 1) {
    (**(code **)(*(long *)this_01 + 0x158))(this_01,0);
  }
  uVar13 = 0;
  while( true ) {
    uVar16 = *(undefined8 *)(pCVar9 + 0x58);
    uVar12 = FUN_039d27dc(uVar16,*(undefined8 *)(pCVar9 + 0x60));
    if (uVar12 <= uVar13) break;
    piVar11 = (int *)FUN_039d27e8(uVar16,uVar13);
    plVar15 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar11,piVar11[1],true);
    uVar5 = FUN_039d34f4(0x154);
    uVar6 = FUN_039d34f4(0x14);
    uVar7 = FUN_039d34f4(0x46);
    (**(code **)(*plVar15 + 0x198))(plVar15,uVar5,uVar6,uVar7,uVar7);
    (**(code **)(*(long *)this + 0x60))(this,plVar15);
    uVar13 = uVar13 + 1;
  }
  pPVar14 = *(PVZ2UIButton **)(this + 0xf8);
  if (pPVar14 == (PVZ2UIButton *)0x0) {
    TodStringTranslate(L"[RECALL_OFFER_CLAIM]");
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar14 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar14,0xc9,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)&local_40);
    *(PVZ2UIButton **)(this + 0xf8) = pPVar14;
    FUN_05476c50(awStack_78);
    UpdateButtonState(this);
    pPVar14 = *(PVZ2UIButton **)(this + 0xf8);
    if (pPVar14 == (PVZ2UIButton *)0x0) goto LAB_039d5cfc;
  }
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ac1450,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06ac14f8,3);
  PVZ2UIButton::SetDialogStates(pPVar14,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  (**(code **)(**(long **)(this + 0xf8) + 0x1a0))(*(long **)(this + 0xf8),this + 0x170);
  plVar15 = *(long **)(this + 0xf8);
  pcVar17 = *(code **)(*plVar15 + 800);
  uVar16 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar17)(plVar15,uVar16);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf8));
LAB_039d5cfc:
  InitTimer(this);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* CallofWishTaskWidget::SetTask(GeneralTask*) */

void __thiscall CallofWishTaskWidget::SetTask(CallofWishTaskWidget *this,GeneralTask *param_1)

{
  *(GeneralTask **)(this + 0xe8) = param_1;
  InitView(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CallofWishTaskWidget::RequestReward() */

void __thiscall CallofWishTaskWidget::RequestReward(CallofWishTaskWidget *this)

{
  ProfileMgr *this_00;
  undefined8 uVar1;
  string *this_01;
  long lVar2;
  DNetwork *this_02;
  string *__n;
  undefined4 local_d48 [2];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2112];
  string asStack_4a8 [1184];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  std::string::string(asStack_d40,"ai");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  local_d48[0] = 0x2a4f;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_d48);
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  __n = asStack_d40;
  std::string::string(asStack_ce8,"t");
  this_01 = (string *)
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_ce8);
  std::string::append(this_01,"1",(size_t)__n);
  std::string::~string(asStack_ce8);
  nop();
  std::string::string(asStack_d40,"i");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0xe8) + 0x20));
  std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar2 + 8));
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_02 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_039d33e0(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_02,asStack_4a8,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)asStack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CallofWishTaskWidget::ButtonDepress(int) */

void __thiscall CallofWishTaskWidget::ButtonDepress(CallofWishTaskWidget *this,int param_1)

{
  if (param_1 != 0xc9) {
    return;
  }
  RequestReward(this);
  return;
}


/* non-virtual thunk to CallofWishTaskWidget::ButtonDepress(int) */

void __thiscall CallofWishTaskWidget::ButtonDepress(CallofWishTaskWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CallofWishTaskWidget::Draw(Sexy::Graphics*) */

void __thiscall CallofWishTaskWidget::Draw(CallofWishTaskWidget *this,Graphics *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  uint *puVar6;
  float *pfVar7;
  Image *pIVar8;
  long lVar9;
  float fVar10;
  float local_24;
  undefined1 auStack_20 [8];
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  if (*(long *)(this + 0xf0) != 0) {
    iVar2 = FUN_039d34f4(10);
    iVar3 = FUN_039d34f4(0x14);
    Sexy::Insets::Insets
              ((Insets *)local_18,iVar2,0,*(int *)(this + 0x50) - iVar3,*(int *)(this + 0x54));
    Draw9SliceImage(param_1,(Insets *)local_18,*(undefined8 *)(this + 0xf0));
  }
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)local_18,0x66,0x37,0);
  WriteWordInRect(param_1,this + 0x130,this + 0x140,uVar4,(Color *)local_18,3,1);
  lVar9 = *(long *)(this + 0xe8);
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(lVar9 + 0x20));
  puVar6 = (uint *)eastl::min_alt<int>((int *)(lVar9 + 0x10),(int *)(lVar5 + 0x28));
  uVar1 = *puVar6;
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0xe8) + 0x20));
  Sexy::StrFormat("%d / %d",(Color *)local_18,(ulong)uVar1,(ulong)*(uint *)(lVar5 + 0x28));
  Sexy::ToWString((string *)local_18);
  std::string::~string((string *)local_18);
  Sexy::Insets::Insets
            ((Insets *)local_18,*(int *)(this + 0x160),*(int *)(this + 0x164),*(int *)(this + 0x168)
             ,*(int *)(this + 0x16c));
  uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac10f8);
  Draw3SliceImage(param_1,(Color *)local_18,uVar4);
  iVar2 = *(int *)(*(long *)(this + 0xe8) + 0x10);
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0xe8) + 0x20));
  local_18[0] = 0x3f800000;
  local_24 = (float)iVar2 / (float)*(int *)(lVar5 + 0x28);
  pfVar7 = eastl::min_alt<float>(&local_24,(float *)local_18);
  fVar10 = *pfVar7;
  if (fVar10 < 0.3) {
    pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac1170);
    Sexy::Graphics::DrawImage
              (param_1,pIVar8,*(int *)(this + 0x160),*(int *)(this + 0x164),
               (int)(fVar10 * (float)*(int *)(this + 0x168)),*(int *)(this + 0x16c));
  }
  else {
    Sexy::Insets::Insets
              ((Insets *)local_18,*(int *)(this + 0x160),*(int *)(this + 0x164),
               (int)(fVar10 * (float)*(int *)(this + 0x168)),*(int *)(this + 0x16c));
    uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac1170);
    Draw3SliceImage(param_1,(Color *)local_18,uVar4);
  }
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  Sexy::Color::Color((Color *)local_18,0x66,0x37,0);
  WriteWordInRect(param_1,auStack_20,this + 0x160,uVar4,(Color *)local_18,5,1);
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac1148);
  Sexy::Graphics::DrawImage
            (param_1,pIVar8,*(int *)(this + 0x150),*(int *)(this + 0x154),*(int *)(this + 0x158),
             *(int *)(this + 0x15c));
  DrawTimer(this,param_1);
  FUN_05476c50(auStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

