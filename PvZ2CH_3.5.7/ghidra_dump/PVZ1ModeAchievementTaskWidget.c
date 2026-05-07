// Class: PVZ1ModeAchievementTaskWidget


/* PVZ1ModeAchievementTaskWidget::~PVZ1ModeAchievementTaskWidget() */

void __thiscall
PVZ1ModeAchievementTaskWidget::~PVZ1ModeAchievementTaskWidget(PVZ1ModeAchievementTaskWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_069c7020;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069c7348;
  FUN_05476c50(this + 0x120);
  FUN_05476c50(this + 0x118);
  FUN_05476c50(this + 0x110);
  FUN_05476c50(this + 0x108);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PVZ1ModeAchievementTaskWidget::~PVZ1ModeAchievementTaskWidget() */

void __thiscall
PVZ1ModeAchievementTaskWidget::~PVZ1ModeAchievementTaskWidget(PVZ1ModeAchievementTaskWidget *this)

{
  ~PVZ1ModeAchievementTaskWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeAchievementTaskWidget::StaticClassInit() */

void PVZ1ModeAchievementTaskWidget::StaticClassInit(void)

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
    std::string::string(asStack_10,"PVZ1ModeAchievementTaskWidget");
    (*pcVar2)(plVar1,asStack_10,FUN_04dd9848,400,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ1ModeAchievementTaskWidget::StaticGetClass() */

long * PVZ1ModeAchievementTaskWidget::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PVZ1ModeAchievementTaskWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZ1ModeAchievementTaskWidget::GetClass() const */

long * PVZ1ModeAchievementTaskWidget::GetClass(void)

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
  (*pcVar3)(plVar1,"PVZ1ModeAchievementTaskWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZ1ModeAchievementTaskWidget::PVZ1ModeAchievementTaskWidget() */

void __thiscall
PVZ1ModeAchievementTaskWidget::PVZ1ModeAchievementTaskWidget(PVZ1ModeAchievementTaskWidget *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined4 *)(this + 0xe0) = 0xffffffff;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined ***)this = &PTR_GetClass_069c7020;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069c7348;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  FUN_05476574(this + 0x108);
  FUN_05476574(this + 0x110);
  FUN_05476574(this + 0x118);
  FUN_05476574(this + 0x120);
  Sexy::Insets::Insets((Insets *)(this + 0x128));
  Sexy::Insets::Insets((Insets *)(this + 0x138));
  Sexy::Insets::Insets((Insets *)(this + 0x148));
  Sexy::Insets::Insets((Insets *)(this + 0x158));
  Sexy::Insets::Insets((Insets *)(this + 0x168));
  Sexy::Insets::Insets((Insets *)(this + 0x178));
  this[0x188] = (PVZ1ModeAchievementTaskWidget)0x0;
  return;
}


/* PVZ1ModeAchievementTaskWidget::StaticNew() */

PVZ1ModeAchievementTaskWidget * PVZ1ModeAchievementTaskWidget::StaticNew(void)

{
  PVZ1ModeAchievementTaskWidget *this;
  
  this = ::operator_new(400);
  PVZ1ModeAchievementTaskWidget(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeAchievementTaskWidget::InitView() */

void __thiscall PVZ1ModeAchievementTaskWidget::InitView(PVZ1ModeAchievementTaskWidget *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  RtObject *this_00;
  PvZ1AchievementData *pPVar5;
  long lVar6;
  undefined8 uVar7;
  PVZ1ModeAchievementTaskWidgetCoin *this_01;
  long *plVar8;
  code *pcVar9;
  PVZ2UIButton *pPVar10;
  wstring awStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  this[0x59] = (PVZ1ModeAchievementTaskWidget)0x0;
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0xe8) + 0x20));
  pPVar5 = Sexy::RtObject::Cast<PvZ1AchievementData>(this_00);
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0xe8) + 0x20));
  lVar6 = StringHelper::ToImage((string *)(lVar6 + 0x20),false);
  *(long *)(this + 0xf0) = lVar6;
  if (lVar6 == 0) {
    std::string::string((string *)&local_40,"IMAGE_UI_QUESTS_BACKGROUND_GENERIC");
    uVar7 = StringHelper::ToImage((string *)&local_40,false);
    *(undefined8 *)(this + 0xf0) = uVar7;
    std::string::~string((string *)&local_40);
    nop();
  }
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0xe8) + 0x20));
  Sexy::StrFormat("IMAGE_UI_PVZ1_ACHIEVEMENT_ICON_%d",(string *)&local_40,
                  (ulong)(*(int *)(lVar6 + 8) - 1000));
  uVar7 = StringHelper::ToImage((string *)&local_40,false);
  *(undefined8 *)(this + 0xf8) = uVar7;
  std::string::~string((string *)&local_40);
  if (*(long *)(this + 0xf8) == 0) {
    std::string::string((string *)&local_40,"IMAGE_UI_DIALOG_ASSET_FRAME_TOOL5");
    uVar7 = StringHelper::ToImage((string *)&local_40,false);
    *(undefined8 *)(this + 0xf8) = uVar7;
    std::string::~string((string *)&local_40);
    nop();
  }
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0xe8) + 0x20));
  Sexy::ToWString((string *)(lVar6 + 0x10));
  TodStringTranslate(awStack_78);
  FUN_054766c8(this + 0x108,(string *)&local_40);
  FUN_05476c50((string *)&local_40);
  FUN_05476c50(awStack_78);
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0xe8) + 0x20));
  Sexy::ToWString((string *)(lVar6 + 0x18));
  TodStringTranslate(awStack_78);
  FUN_054766c8(this + 0x118,(string *)&local_40);
  FUN_05476c50((string *)&local_40);
  FUN_05476c50(awStack_78);
  Sexy::StrFormat("x%d",awStack_78,(ulong)*(uint *)(pPVar5 + 0x50));
  Sexy::ToWString((string *)awStack_78);
  FUN_054766c8(this + 0x120,(string *)&local_40);
  FUN_05476c50((string *)&local_40);
  std::string::~string((string *)awStack_78);
  iVar1 = FUN_04dd93e4(0x4a);
  iVar2 = FUN_04dd93e4(5);
  iVar3 = FUN_04dd93e4(200);
  iVar4 = FUN_04dd93e4(0x18);
  Sexy::Insets::Insets((Insets *)&local_40,iVar1,iVar2,iVar3,iVar4);
  *(undefined8 *)(this + 0x128) = local_40;
  *(undefined8 *)(this + 0x130) = uStack_38;
  iVar1 = FUN_04dd93e4(0x4a);
  iVar2 = FUN_04dd93e4(0x27);
  iVar3 = FUN_04dd93e4(0x17c);
  iVar4 = FUN_04dd93e4(0x18);
  Sexy::Insets::Insets((Insets *)&local_40,iVar1,iVar2,iVar3,iVar4);
  *(undefined8 *)(this + 0x138) = local_40;
  *(undefined8 *)(this + 0x140) = uStack_38;
  iVar1 = FUN_04dd93e4(10);
  iVar2 = FUN_04dd93e4(8);
  iVar3 = FUN_04dd93e4(0x36);
  Sexy::Insets::Insets((Insets *)&local_40,iVar1,iVar2,iVar3,iVar3);
  *(undefined8 *)(this + 0x148) = local_40;
  *(undefined8 *)(this + 0x150) = uStack_38;
  iVar1 = FUN_04dd93e4(0x1cc);
  iVar2 = FUN_04dd93e4(8);
  iVar3 = FUN_04dd93e4(0x36);
  Sexy::Insets::Insets((Insets *)&local_40,iVar1,iVar2,iVar3,iVar3);
  *(undefined8 *)(this + 0x158) = local_40;
  *(undefined8 *)(this + 0x160) = uStack_38;
  iVar1 = FUN_04dd93e4(0x212);
  iVar2 = FUN_04dd93e4(0x14);
  iVar3 = FUN_04dd93e4(0x5a);
  iVar4 = FUN_04dd93e4(0x1e);
  Sexy::Insets::Insets((Insets *)&local_40,iVar1,iVar2,iVar3,iVar4);
  *(undefined8 *)(this + 0x168) = local_40;
  *(undefined8 *)(this + 0x170) = uStack_38;
  iVar1 = FUN_04dd93e4(0x1cc);
  iVar2 = FUN_04dd93e4(0x23);
  iVar3 = FUN_04dd93e4(0x36);
  iVar4 = FUN_04dd93e4(0x1b);
  Sexy::Insets::Insets((Insets *)&local_40,iVar1,iVar2,iVar3,iVar4);
  *(undefined8 *)(this + 0x178) = local_40;
  *(undefined8 *)(this + 0x180) = uStack_38;
  Sexy::Insets::Insets((Insets *)&local_40,(Insets *)(this + 0x158));
  this_01 = ::operator_new(0xe0);
  PVZ1ModeAchievementTaskWidgetCoin::PVZ1ModeAchievementTaskWidgetCoin
            (this_01,*(undefined4 *)(pPVar5 + 0x50),*(int *)(*(long *)(this + 0xe8) + 0x14) == 3,
             (string *)&local_40);
  PVZ1ModeAchievementTaskWidgetCoin::InitView(this_01);
  (**(code **)(*(long *)this + 0x60))(this,this_01);
  pPVar10 = *(PVZ2UIButton **)(this + 0x100);
  if (pPVar10 == (PVZ2UIButton *)0x0) {
    TodStringTranslate(L"[RECALL_OFFER_CLAIM]");
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar10 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar10,100,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)&local_40);
    *(PVZ2UIButton **)(this + 0x100) = pPVar10;
    FUN_05476c50(awStack_78);
    UpdateButtonState(this);
    pPVar10 = *(PVZ2UIButton **)(this + 0x100);
    if (pPVar10 == (PVZ2UIButton *)0x0) goto LAB_04ddaf24;
  }
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b9b5d8,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b9b600,3);
  PVZ2UIButton::SetDialogStates(pPVar10,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  (**(code **)(**(long **)(this + 0x100) + 0x1a0))(*(long **)(this + 0x100),this + 0x168);
  plVar8 = *(long **)(this + 0x100);
  pcVar9 = *(code **)(*plVar8 + 800);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
  (*pcVar9)(plVar8,uVar7);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x100));
LAB_04ddaf24:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PVZ1ModeAchievementTaskWidget::SetTask(GeneralTask*) */

void __thiscall
PVZ1ModeAchievementTaskWidget::SetTask(PVZ1ModeAchievementTaskWidget *this,GeneralTask *param_1)

{
  *(GeneralTask **)(this + 0xe8) = param_1;
  InitView(this);
  return;
}


/* PVZ1ModeAchievementTaskWidget::UpdateButtonState() */

void __thiscall
PVZ1ModeAchievementTaskWidget::UpdateButtonState(PVZ1ModeAchievementTaskWidget *this)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(long *)(this + 0xe8) + 0x14);
  if ((1 < uVar1) && (uVar1 != 3)) {
    if (uVar1 != 2) {
      InitView(this);
      return;
    }
    (**(code **)(**(long **)(this + 0x100) + 0x188))(*(long **)(this + 0x100),0);
    InitView(this);
    return;
  }
  (**(code **)(**(long **)(this + 0x100) + 0x188))(*(long **)(this + 0x100),1);
  PVZ2UIButton::SetInvisible(*(PVZ2UIButton **)(this + 0x100),true);
  InitView(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeAchievementTaskWidget::RequestReward() */

void __thiscall PVZ1ModeAchievementTaskWidget::RequestReward(PVZ1ModeAchievementTaskWidget *this)

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
  string asStack_ce8 [2208];
  string asStack_448 [1088];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  std::string::string(asStack_d40,"tp");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  local_d48[0] = 0x2a57;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_d48);
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  __n = asStack_d40;
  std::string::string(asStack_ce8,"ctp");
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
  FUN_04dd932c(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_02,asStack_448,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
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


/* PVZ1ModeAchievementTaskWidget::ButtonDepress(int) */

void __thiscall
PVZ1ModeAchievementTaskWidget::ButtonDepress(PVZ1ModeAchievementTaskWidget *this,int param_1)

{
  if (param_1 != 100) {
    return;
  }
  RequestReward(this);
  return;
}


/* non-virtual thunk to PVZ1ModeAchievementTaskWidget::ButtonDepress(int) */

void __thiscall
PVZ1ModeAchievementTaskWidget::ButtonDepress(PVZ1ModeAchievementTaskWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeAchievementTaskWidget::Draw(Sexy::Graphics*) */

void __thiscall
PVZ1ModeAchievementTaskWidget::Draw(PVZ1ModeAchievementTaskWidget *this,Graphics *param_1)

{
  uint uVar1;
  Image *pIVar2;
  undefined8 uVar3;
  long lVar4;
  uint *puVar5;
  long lVar6;
  undefined1 auStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  if (*(long *)(this + 0xf0) != 0) {
    Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    Draw3SliceImage(param_1,aIStack_18,*(undefined8 *)(this + 0xf0));
  }
  if (*(Image **)(this + 0xf8) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0xf8),*(int *)(this + 0x148),*(int *)(this + 0x14c),
               *(int *)(this + 0x150),*(int *)(this + 0x154));
  }
  pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9b318);
  Sexy::Graphics::DrawImage
            (param_1,pIVar2,*(int *)(this + 0x148),*(int *)(this + 0x14c),*(int *)(this + 0x150),
             *(int *)(this + 0x154));
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Insets::Insets(aIStack_18,0xff,0xa2,0,0xff);
  WriteWordInRect(param_1,this + 0x108,this + 0x128,uVar3,aIStack_18,3,1);
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  Sexy::Insets::Insets(aIStack_18,0x66,0x37,0,0xff);
  WriteWordInRect(param_1,this + 0x118,this + 0x138,uVar3,aIStack_18,3,1);
  lVar6 = *(long *)(this + 0xe8);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(lVar6 + 0x20));
  puVar5 = (uint *)eastl::min_alt<int>((int *)(lVar6 + 0x10),(int *)(lVar4 + 0x28));
  uVar1 = *puVar5;
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0xe8) + 0x20));
  Sexy::StrFormat("%d / %d",aIStack_18,(ulong)uVar1,(ulong)*(uint *)(lVar4 + 0x28));
  Sexy::ToWString((string *)aIStack_18);
  std::string::~string((string *)aIStack_18);
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  Sexy::Insets::Insets(aIStack_18,0x66,0x37,0,0xff);
  WriteWordInRect(param_1,auStack_20,this + 0x168,uVar3,aIStack_18,5,1);
  FUN_05476c50(auStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

