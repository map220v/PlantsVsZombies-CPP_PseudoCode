// Class: LevelEditorZombieSelectList


/* LevelEditorZombieSelectList::SetCurrentPage(int) */

void __thiscall
LevelEditorZombieSelectList::SetCurrentPage(LevelEditorZombieSelectList *this,int param_1)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  
  iVar3 = *(int *)(this + 0xe0);
  if (iVar3 == param_1) {
    if (iVar3 == *(int *)(this + 0xe4)) {
      plVar4 = *(long **)(this + 0x108);
      uVar1 = 1;
LAB_04b52e1c:
      lVar2 = *plVar4;
      *(int *)(this + 0xe8) = iVar3;
      (**(code **)(lVar2 + 0x188))(plVar4,uVar1);
      (**(code **)(**(long **)(this + 0x110) + 0x188))(*(long **)(this + 0x110),1);
      (**(code **)(*(long *)this + 0x330))(this);
      return;
    }
  }
  else if (iVar3 < param_1) {
    iVar3 = *(int *)(this + 0xe4);
    if (iVar3 <= param_1) {
      plVar4 = *(long **)(this + 0x108);
      uVar1 = 0;
      goto LAB_04b52e1c;
    }
    plVar4 = *(long **)(this + 0x108);
    uVar1 = 0;
    *(int *)(this + 0xe8) = param_1;
    lVar2 = *plVar4;
    goto LAB_04b52dd8;
  }
  plVar4 = *(long **)(this + 0x108);
  uVar1 = 1;
  *(int *)(this + 0xe8) = iVar3;
  lVar2 = *plVar4;
LAB_04b52dd8:
  (**(code **)(lVar2 + 0x188))(plVar4,uVar1);
  (**(code **)(**(long **)(this + 0x110) + 0x188))(*(long **)(this + 0x110),0);
  (**(code **)(*(long *)this + 0x330))(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorZombieSelectList::Init() */

void __thiscall LevelEditorZombieSelectList::Init(LevelEditorZombieSelectList *this)

{
  ButtonListener *pBVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  PVZ2UIButton *pPVar6;
  undefined8 uVar7;
  long *plVar8;
  code *pcVar9;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  pBVar1 = (ButtonListener *)(this + 0xd8);
  Sexy::Color::Color((Color *)asStack_40,1);
  pPVar6 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar6,4,pBVar1,awStack_78,(Color *)asStack_40);
  *(PVZ2UIButton **)(this + 0x100) = pPVar6;
  FUN_05476c50(awStack_78);
  nop();
  pPVar6 = *(PVZ2UIButton **)(this + 0x100);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b864b8,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b864b8,3);
  PVZ2UIButton::SetDialogStates(pPVar6,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)asStack_40);
  plVar8 = *(long **)(this + 0x100);
  uVar2 = FUN_04b54f08(5);
  uVar3 = FUN_04b54f08(10);
  uVar4 = FUN_04b54f08(100);
  uVar5 = FUN_04b54f08(0x50);
  (**(code **)(*plVar8 + 0x198))(plVar8,uVar2,uVar3,uVar4,uVar5);
  plVar8 = *(long **)(this + 0x100);
  pcVar9 = *(code **)(*plVar8 + 800);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_HardShadow);
  (*pcVar9)(plVar8,uVar7);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x100));
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)asStack_40,1);
  pPVar6 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar6,0x10,pBVar1,awStack_78,(Color *)asStack_40);
  *(PVZ2UIButton **)(this + 0x108) = pPVar6;
  FUN_05476c50(awStack_78);
  nop();
  pPVar6 = *(PVZ2UIButton **)(this + 0x108);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b86290,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b86290,2);
  PVZ2UIButton::SetDialogStates(pPVar6,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)asStack_40);
  plVar8 = *(long **)(this + 0x108);
  uVar2 = FUN_04b54f08(0x73);
  uVar3 = FUN_04b54f08(0x14);
  uVar4 = FUN_04b54f08(0x1e);
  uVar5 = FUN_04b54f08(0x3c);
  (**(code **)(*plVar8 + 0x198))(plVar8,uVar2,uVar3,uVar4,uVar5);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x108));
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)asStack_40,1);
  pPVar6 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar6,0x11,pBVar1,awStack_78,(Color *)asStack_40);
  *(PVZ2UIButton **)(this + 0x110) = pPVar6;
  FUN_05476c50(awStack_78);
  nop();
  pPVar6 = *(PVZ2UIButton **)(this + 0x110);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b864e0,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b864e0,2);
  PVZ2UIButton::SetDialogStates(pPVar6,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)asStack_40);
  plVar8 = *(long **)(this + 0x110);
  uVar2 = FUN_04b54f08(0x2cb);
  uVar3 = FUN_04b54f08(0x14);
  uVar4 = FUN_04b54f08(0x1e);
  uVar5 = FUN_04b54f08(0x3c);
  (**(code **)(*plVar8 + 0x198))(plVar8,uVar2,uVar3,uVar4,uVar5);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x110));
  pcVar9 = *(code **)(*(long *)this + 800);
  std::string::string(asStack_40,"egypt");
  (*pcVar9)(this,asStack_40);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorZombieSelectList::TriggerTutorial() */

void __thiscall LevelEditorZombieSelectList::TriggerTutorial(LevelEditorZombieSelectList *this)

{
  undefined8 uVar1;
  string asStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x118) != 0) {
    LawnApp::KillGameMaskUI(gLawnApp);
    uVar1 = *(undefined8 *)(this + 0x118);
    std::string::string(asStack_20,"[CUSTOM_LEVEL_TUTORIAL_10]");
    Sexy::Insets::Insets(aIStack_18);
    GameMaskUI::ShowMask(uVar1,1,asStack_20,aIStack_18);
    std::string::~string(asStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorZombieSelectList::TriggerWaveEventTutorial() */

void __thiscall
LevelEditorZombieSelectList::TriggerWaveEventTutorial(LevelEditorZombieSelectList *this)

{
  undefined8 uVar1;
  string asStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x118) != 0) {
    LawnApp::KillGameMaskUI(gLawnApp);
    FUN_04b5368c(*(long *)(this + 0x118) + 0xfc);
    uVar1 = *(undefined8 *)(this + 0x118);
    std::string::string(asStack_20,"[CUSTOM_LEVEL_TUTORIAL_17]");
    Sexy::Insets::Insets(aIStack_18);
    GameMaskUI::ShowMask(uVar1,1,asStack_20,aIStack_18);
    std::string::~string(asStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditorZombieSelectList::~LevelEditorZombieSelectList() */

void __thiscall
LevelEditorZombieSelectList::~LevelEditorZombieSelectList(LevelEditorZombieSelectList *this)

{
  *(undefined ***)this = &PTR_GetClass_069648e0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06964c28;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LevelEditorZombieSelectList::~LevelEditorZombieSelectList() */

void __thiscall
LevelEditorZombieSelectList::~LevelEditorZombieSelectList(LevelEditorZombieSelectList *this)

{
  ~LevelEditorZombieSelectList(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorZombieSelectList::OnSelectStage(std::string const&) */

void __thiscall
LevelEditorZombieSelectList::OnSelectStage(LevelEditorZombieSelectList *this,string *param_1)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  PVZ2UIButton *this_01;
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  wstring awStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  string *local_8;
  
  this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0xf0);
  local_8 = ___stack_chk_guard;
  LevelEditorUtil::GetStageInfoByName((LevelEditorUtil *)param_1,___stack_chk_guard);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  *(undefined4 *)(this + 0xe0) = 0;
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  uVar2 = FUN_04b53500(*(undefined8 *)(lVar1 + 0x50),*(undefined8 *)(lVar1 + 0x58));
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  uVar3 = FUN_04b53500(*(undefined8 *)(lVar1 + 0x50),*(undefined8 *)(lVar1 + 0x58));
  *(undefined4 *)(this + 0xe8) = 0;
  this_01 = *(PVZ2UIButton **)(this + 0x100);
  iVar4 = (int)(uVar2 / 7);
  if (uVar3 != (uVar3 / 7) * 7) {
    iVar4 = iVar4 + 1;
  }
  *(uint *)(this + 0xe4) = iVar4 - (uint)(iVar4 != 0);
  Sexy::StringToUpper((Sexy *)param_1,(string *)(ulong)(iVar4 != 0));
  std::operator+("[",asStack_30);
  std::operator+(asStack_28,"]");
  Sexy::ToWString(asStack_20);
  TodStringTranslate(awStack_18);
  PVZ2UIButton::SetLabelText(this_01,(wstring *)aRStack_10);
  FUN_05476c50(aRStack_10);
  FUN_05476c50(awStack_18);
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  (**(code **)(*(long *)this + 0x328))(this,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorZombieSelectList::LevelEditorZombieSelectList() */

void __thiscall
LevelEditorZombieSelectList::LevelEditorZombieSelectList(LevelEditorZombieSelectList *this)

{
  undefined *puVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_069648e0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06964c28;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xf0));
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  this[0x59] = (LevelEditorZombieSelectList)0x0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,TriggerTutorial);
  Sexy::Delegate0::Delegate0<LevelEditorZombieSelectList,void(LevelEditorZombieSelectList::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::CustomLevelTutorialRedoDrag,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,TriggerWaveEventTutorial);
  Sexy::Delegate0::Delegate0<LevelEditorZombieSelectList,void(LevelEditorZombieSelectList::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::CustomLevelTutorialRedoDragWaveEvent,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorZombieSelectList::RefreshZombiesByPage() */

void __thiscall LevelEditorZombieSelectList::RefreshZombiesByPage(LevelEditorZombieSelectList *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long lVar11;
  int *piVar12;
  ProfileMgr *this_00;
  LevelEditorZombieDraggable *this_01;
  string *psVar13;
  Widget *this_02;
  long *plVar14;
  int iVar15;
  long lVar16;
  int local_1c;
  undefined4 local_18 [4];
  long local_8;
  
  plVar14 = *(long **)(this + 0xf8);
  local_8 = ___stack_chk_guard;
  if (plVar14 == (long *)0x0) {
    this_02 = ::operator_new(0xd8);
    Sexy::Widget::Widget(this_02);
    *(Widget **)(this + 0xf8) = this_02;
    this_02[0x59] = (Widget)0x0;
    uVar7 = FUN_04b54f08(0x96);
    uVar8 = FUN_04b54f08(5);
    uVar9 = FUN_04b54f08(0x230);
    uVar10 = FUN_04b54f08(0x5a);
    (**(code **)(*(long *)this_02 + 0x198))(this_02,uVar7,uVar8,uVar9,uVar10);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf8));
    plVar14 = *(long **)(this + 0xf8);
  }
  (**(code **)(*plVar14 + 0x80))(plVar14,1,1);
  iVar3 = FUN_04b54f08(0x4b);
  iVar1 = *(int *)(*(long *)(this + 0xf8) + 0x50);
  iVar15 = *(int *)(this + 0xe8) * 7;
  local_1c = iVar15 + 7;
  lVar16 = (long)iVar15;
  lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf0));
  local_18[0] = FUN_04b53500(*(undefined8 *)(lVar11 + 0x50),*(undefined8 *)(lVar11 + 0x58));
  piVar12 = eastl::min_alt<int>(&local_1c,(int *)local_18);
  iVar2 = *piVar12;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar11 = ProfileMgr::GetCurrentProfile(this_00);
  iVar4 = FUN_04b534f4(*(undefined4 *)(lVar11 + 0x40));
  if (iVar15 < iVar2) {
    do {
      iVar5 = FUN_04b54f08(0);
      iVar6 = FUN_04b54f08(0x5a);
      Sexy::Insets::Insets
                ((Insets *)local_18,(iVar15 % 7) * (iVar3 + (iVar3 * -7 + iVar1) / 6),iVar5,iVar3,
                 iVar6);
      this_01 = ::operator_new(0x100);
      LevelEditorZombieDraggable::LevelEditorZombieDraggable(this_01);
      (**(code **)(*(long *)this_01 + 0x1a0))(this_01,(Insets *)local_18);
      lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf0));
      psVar13 = (string *)FUN_04b5350c(*(undefined8 *)(lVar11 + 0x50),lVar16);
      LevelEditorZombieDraggable::Init(this_01,psVar13);
      (**(code **)(**(long **)(this + 0xf8) + 0x60))(*(long **)(this + 0xf8),this_01);
      if ((iVar15 == 0) && (iVar4 == 0x3c)) {
        *(LevelEditorZombieDraggable **)(this + 0x118) = this_01;
      }
      iVar15 = iVar15 + 1;
      lVar16 = lVar16 + 1;
    } while (iVar15 != iVar2);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorZombieSelectList::Draw(Sexy::Graphics*) */

void __thiscall
LevelEditorZombieSelectList::Draw(LevelEditorZombieSelectList *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04b54f08(0x19);
  iVar2 = FUN_04b54f08(0x32);
  Sexy::Insets::Insets
            (aIStack_18,-iVar1,-iVar1,iVar2 + *(int *)(this + 0x50),iVar2 + *(int *)(this + 0x54));
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b86360);
  Draw9SliceImage(param_1,aIStack_18,uVar3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorZombieSelectList::ButtonDepress(int) */

void __thiscall
LevelEditorZombieSelectList::ButtonDepress(LevelEditorZombieSelectList *this,int param_1)

{
  LevelEditorWorldSelect *this_00;
  string *this_01;
  undefined1 auStack_b0 [8];
  vector avStack_a8 [24];
  string asStack_90 [8];
  string asStack_88 [8];
  string asStack_80 [8];
  string asStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x10) {
    (**(code **)(*(long *)this + 0x328))(this,*(int *)(this + 0xe8) + -1);
  }
  else if (param_1 == 0x11) {
    (**(code **)(*(long *)this + 0x328))(this,*(int *)(this + 0xe8) + 1);
  }
  else if (param_1 == 4) {
    std::string::string(asStack_90,"egypt");
    std::string::string(asStack_88,"pirate");
    std::string::string(asStack_80,"cowboy");
    std::string::string(asStack_78,"kongfu");
    std::string::string(asStack_70,"future");
    this_01 = (string *)&local_8;
    std::string::string(asStack_68,"eighties");
    std::string::string(asStack_60,"dark");
    std::string::string(asStack_58,"beach");
    std::string::string(asStack_50,"dino");
    std::string::string(asStack_48,"iceage");
    std::string::string(asStack_40,"lostcity");
    std::string::string(asStack_38,"modern");
    std::string::string(asStack_30,"steam");
    std::string::string(asStack_28,"renai");
    std::string::string(asStack_20,"heian");
    std::string::string(asStack_18,"fairy_tale");
    std::string::string(asStack_10,"childrenday");
    std::vector<std::string,std::allocator<std::string>>::vector
              ((vector<std::string,std::allocator<std::string>> *)avStack_a8,asStack_90,0x11,
               auStack_b0);
    this_00 = (LevelEditorWorldSelect *)LevelEditorUtil::ShowSelectWorldWidget(avStack_a8);
    std::vector<std::string,std::allocator<std::string>>::~vector
              ((vector<std::string,std::allocator<std::string>> *)avStack_a8);
    do {
      this_01 = this_01 + -8;
      std::string::~string(this_01);
    } while (this_01 != asStack_90);
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    std::string::string((string *)avStack_a8,"egypt");
    LevelEditorWorldSelect::SetSelectStage(this_00,(string *)avStack_a8);
    std::string::~string((string *)avStack_a8);
    nop();
    FUN_04b54df4(this_01,this,this_00);
    LevelEditorSunMoneyEditor::SetOnConfirmText((LevelEditorSunMoneyEditor *)this_00,this_01);
    std::function<bool(Sexy::Touch_const&)>::~function
              ((function<bool(Sexy::Touch_const&)> *)this_01);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to LevelEditorZombieSelectList::ButtonDepress(int) */

void __thiscall
LevelEditorZombieSelectList::ButtonDepress(LevelEditorZombieSelectList *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

