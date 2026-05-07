// Class: LevelEditorWaveDisplay


/* LevelEditorWaveDisplay::OnEditorClosed() */

void LevelEditorWaveDisplay::OnEditorClosed(void)

{
  return;
}


/* LevelEditorWaveDisplay::~LevelEditorWaveDisplay() */

void __thiscall LevelEditorWaveDisplay::~LevelEditorWaveDisplay(LevelEditorWaveDisplay *this)

{
  *(undefined ***)this = &PTR_GetClass_06966130;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06966470;
  if (*(long **)(this + 0x108) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x108) + 0x18))();
    *(undefined8 *)(this + 0x108) = 0;
  }
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  FUN_05476c50(this + 0x118);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LevelEditorWaveDisplay::~LevelEditorWaveDisplay() */

void __thiscall LevelEditorWaveDisplay::~LevelEditorWaveDisplay(LevelEditorWaveDisplay *this)

{
  ~LevelEditorWaveDisplay(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorWaveDisplay::SetPlantfoodState(bool) */

void __thiscall LevelEditorWaveDisplay::SetPlantfoodState(LevelEditorWaveDisplay *this,bool param_1)

{
  undefined *puVar1;
  PVZ2UIButton *this_00;
  PVZ2UIImage aPStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  this[0xe8] = (LevelEditorWaveDisplay)param_1;
  local_8 = ___stack_chk_guard;
  if (param_1) {
    puVar1 = &DAT_06b86070;
  }
  else {
    puVar1 = &DAT_06b86048;
  }
  this_00 = *(PVZ2UIButton **)(this + 0x100);
  PVZ2UIImage::PVZ2UIImage(aPStack_78,puVar1,2);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,puVar1,2);
  PVZ2UIButton::SetDialogStates(this_00,aPStack_78,aPStack_40);
  (**(code **)(*(long *)this + 0x328))(this,this[0xe8]);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditorWaveDisplay::ButtonDepress(int) */

void __thiscall LevelEditorWaveDisplay::ButtonDepress(LevelEditorWaveDisplay *this,int param_1)

{
  if (param_1 != 0x15) {
    return;
  }
  SetPlantfoodState(this,(bool)((byte)this[0xe8] ^ 1));
  return;
}


/* non-virtual thunk to LevelEditorWaveDisplay::ButtonDepress(int) */

void __thiscall LevelEditorWaveDisplay::ButtonDepress(LevelEditorWaveDisplay *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorWaveDisplay::OnTutorialCreated() */

void __thiscall LevelEditorWaveDisplay::OnTutorialCreated(LevelEditorWaveDisplay *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  string asStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xe4) == 4) {
    std::string::string(asStack_20,"[CUSTOM_LEVEL_TUTORIAL_9]");
    Sexy::Insets::Insets(aIStack_18);
    GameMaskUI::ShowMask(this,1,asStack_20,aIStack_18);
    std::string::~string(asStack_20);
    nop();
    lVar3 = LawnApp::GetGameMaskUI(gLawnApp);
    iVar1 = FUN_04b54f08(0x118);
    iVar2 = FUN_04b54f08(0x8c);
    FUN_04b536c8(lVar3 + 0x114,-iVar1,-iVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorWaveDisplay::OnDragFinished() */

void __thiscall LevelEditorWaveDisplay::OnDragFinished(LevelEditorWaveDisplay *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  string asStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(this + 0xe4) == 4) && (lVar3 = *(long *)(this + 0x120), lVar3 != 0)) {
    std::string::string(asStack_20,"[CUSTOM_LEVEL_TUTORIAL_11]");
    Sexy::Insets::Insets(aIStack_18);
    GameMaskUI::ShowMask(lVar3,1,asStack_20,aIStack_18);
    std::string::~string(asStack_20);
    nop();
    lVar3 = LawnApp::GetGameMaskUI(gLawnApp);
    iVar1 = FUN_04b54f08(0x118);
    iVar2 = FUN_04b54f08(0x8c);
    FUN_04b536c8(lVar3 + 0x114,-iVar1,-iVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorWaveDisplay::OnContainerFinished() */

void __thiscall LevelEditorWaveDisplay::OnContainerFinished(LevelEditorWaveDisplay *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  string asStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((this[0x6c] != (LevelEditorWaveDisplay)0x0) && (*(int *)(this + 0xe4) == 4)) {
    LawnApp::KillGameMaskUI(gLawnApp);
    uVar4 = *(undefined8 *)(this + 0x110);
    std::string::string(asStack_20,"[CUSTOM_LEVEL_TUTORIAL_12]");
    Sexy::Insets::Insets(aIStack_18);
    GameMaskUI::ShowMask(uVar4,2,asStack_20,aIStack_18);
    std::string::~string(asStack_20);
    nop();
    lVar3 = LawnApp::GetGameMaskUI(gLawnApp);
    iVar1 = FUN_04b54f08(0x118);
    iVar2 = FUN_04b54f08(0x8c);
    FUN_04b536c8(lVar3 + 0x114,-iVar1,-iVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorWaveDisplay::Draw(Sexy::Graphics*) */

void __thiscall LevelEditorWaveDisplay::Draw(LevelEditorWaveDisplay *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  LevelEditorWaveDisplay *pLVar6;
  string asStack_40 [8];
  string asStack_38 [8];
  undefined1 auStack_30 [8];
  Color aCStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar5 = 0;
  iVar1 = FUN_04b54f08();
  iVar2 = FUN_04b54f08(0x1e);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar1,*(int *)(this + 0x50),iVar2);
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  Sexy::Color::Color(aCStack_28,0x66,0x37,0);
  WriteWordInRect(param_1,this + 0x118,aIStack_18,uVar4,aCStack_28,5,1);
  pLVar6 = this + 0xec;
  do {
    iVar1 = FUN_04b54f08(0x37);
    iVar2 = FUN_04b54f08(0x3c);
    Sexy::Insets::Insets(aIStack_18,0,iVar1 + iVar2 * iVar5,*(int *)(this + 0x50),iVar2);
    DrawAdaptiveImage(param_1,aIStack_18,*(undefined8 *)(this + 0x108));
    std::to_string<ActivityTypeID>((ActivityTypeID *)pLVar6);
    std::operator+("X",asStack_40);
    Sexy::ToWString(asStack_38);
    iVar2 = FUN_04b54f08(0x1e);
    iVar3 = FUN_04b54f08(0x37);
    iVar1 = FUN_04b54f08(0x3c);
    iVar1 = iVar1 * iVar5;
    iVar5 = iVar5 + 1;
    Sexy::Insets::Insets
              ((Insets *)aCStack_28,*(int *)(this + 0x50) / 2,iVar2 + iVar3 + iVar1,
               *(int *)(this + 0x50) / 2,iVar2);
    uVar4 = PrimeText_PotentialTypeface::Typeface
                      (PrimeText_Game::Typeface_CafeteriaBlack_24_HardShadow);
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_1,auStack_30,aCStack_28,uVar4,aIStack_18,3,1);
    FUN_05476c50(auStack_30);
    std::string::~string(asStack_38);
    std::string::~string(asStack_40);
    pLVar6 = (LevelEditorWaveDisplay *)(pLVar6 + 4);
  } while (iVar5 != 5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditorWaveDisplay::TouchEnded(Sexy::Touch const&) */

void __thiscall LevelEditorWaveDisplay::TouchEnded(LevelEditorWaveDisplay *this,Touch *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  LevelEditorWaveZombieSetting *this_00;
  long *plVar4;
  LevelEditorZombieSelectList *this_01;
  ProfileMgr *this_02;
  long lVar5;
  
  if (*(int *)(this + 0xe0) == (int)*(undefined8 *)param_1) {
    this_00 = ::operator_new(0xd8);
    LevelEditorWaveZombieSetting::LevelEditorWaveZombieSetting(this_00);
    iVar1 = FUN_04b54f08(500);
    uVar2 = FUN_04b54f08(0x96);
    uVar3 = FUN_04b54f08(0x1c2);
    (**(code **)(*(long *)this_00 + 0x198))
              (this_00,(*(int *)(gLawnApp + 0xd4) - iVar1) / 2,uVar2,iVar1,uVar3);
    (**(code **)(*(long *)this_00 + 0x310))(this_00,*(undefined4 *)(this + 0xe4));
    plVar4 = (long *)LevelEditorUtil::ShowDialogWithTouchClose((Widget *)this_00,true);
    this_01 = ::operator_new(0x120);
    LevelEditorZombieSelectList::LevelEditorZombieSelectList(this_01);
    iVar1 = FUN_04b54f08(0x2ee);
    uVar2 = FUN_04b54f08(0x19);
    uVar3 = FUN_04b54f08(100);
    (**(code **)(*(long *)this_01 + 0x198))
              (this_01,(*(int *)(gLawnApp + 0xd4) - iVar1) / 2,uVar2,iVar1,uVar3);
    (**(code **)(*(long *)this_01 + 0x318))(this_01);
    (**(code **)(*plVar4 + 0x60))(plVar4,this_01);
    LevelEditorZombieSelectList::TriggerTutorial(this_01);
    this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar5 = ProfileMgr::GetCurrentProfile(this_02);
    iVar1 = FUN_04b534f4(*(undefined4 *)(lVar5 + 0x40));
    if (iVar1 == 0x3c) {
      *(long **)(this + 0x120) = plVar4;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorWaveDisplay::LevelEditorWaveDisplay() */

void __thiscall LevelEditorWaveDisplay::LevelEditorWaveDisplay(LevelEditorWaveDisplay *this)

{
  undefined *puVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  this[0xe8] = (LevelEditorWaveDisplay)0x0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined ***)this = &PTR_GetClass_06966130;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06966470;
  FUN_05476574(this + 0x118);
  *(undefined8 *)(this + 0x120) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnTutorialCreated);
  Sexy::Delegate0::Delegate0<LevelEditorWaveDisplay,void(LevelEditorWaveDisplay::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::CustomLevelTutorialZombieModuleCreated,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnDragFinished);
  Sexy::Delegate0::Delegate0<LevelEditorWaveDisplay,void(LevelEditorWaveDisplay::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::CustomLevelTutorialFinishDrag,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnContainerFinished);
  Sexy::Delegate0::Delegate0<LevelEditorWaveDisplay,void(LevelEditorWaveDisplay::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::CustomLevelTutorialCloseContainer,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnEditorClosed);
  Sexy::Delegate0::Delegate0<LevelEditorWaveDisplay,void(LevelEditorWaveDisplay::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::CustomLevelTutorialCloseEditor,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorWaveDisplay::Init(int) */

void __thiscall LevelEditorWaveDisplay::Init(LevelEditorWaveDisplay *this,int param_1)

{
  wstring *pwVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  SeedPacketUtils *this_00;
  PacketRenderData *pPVar5;
  DeviceImage *pDVar6;
  PVZ2UIButton *pPVar7;
  LevelEditorWaveEvent *this_01;
  string *extraout_x1;
  long *plVar8;
  int local_88 [2];
  Sexy aSStack_80 [8];
  string asStack_78 [56];
  string asStack_40 [56];
  long local_8;
  
  *(int *)(this + 0xe4) = param_1;
  pwVar1 = (wstring *)(this + 0x118);
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xf4) = 0;
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0xfc) = 0;
  TodStringTranslate(L"[LEVEL_EDITOR_ZOMBIE_WAVE_NUM]");
  FUN_054766c8(pwVar1,asStack_40);
  FUN_05476c50(asStack_40);
  local_88[0] = *(int *)(this + 0xe4) + 1;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_88);
  Sexy::ToSexyString(aSStack_80,extraout_x1);
  TodReplaceString(pwVar1,L"{NUM}",(wstring *)asStack_78);
  FUN_054766c8(pwVar1,asStack_40);
  FUN_05476c50(asStack_40);
  FUN_05476c50(asStack_78);
  std::string::~string((string *)aSStack_80);
  this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
  std::string::string(asStack_78,"tutorial");
  std::string::string(asStack_40,"IMAGE_UI_ZOMBIE_PVP1_PACKETS_");
  pPVar5 = (PacketRenderData *)
           SeedPacketUtils::GetZombiePacketRenderData(this_00,asStack_78,asStack_40,-1);
  std::string::~string(asStack_40);
  nop();
  std::string::~string(asStack_78);
  nop();
  pDVar6 = (DeviceImage *)SeedPacketUtils::CreateDeviceImageForSeedPacket(this_00,pPVar5,0,0);
  *(DeviceImage **)(this + 0x108) = pDVar6;
  SeedPacketUtils::DrawPacketToDeviceImage(this_00,pDVar6,pPVar5,false,-1,false,false);
  FUN_05478178(asStack_78,&DAT_056f11a8,aSStack_80);
  Sexy::Color::Color((Color *)asStack_40,1);
  pPVar7 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar7,0x15,(ButtonListener *)(this + 0xd8),(wstring *)asStack_78,(Color *)asStack_40);
  *(PVZ2UIButton **)(this + 0x100) = pPVar7;
  FUN_05476c50(asStack_78);
  nop();
  pPVar7 = *(PVZ2UIButton **)(this + 0x100);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06b86070,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b86070,2);
  PVZ2UIButton::SetDialogStates(pPVar7,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)asStack_40);
  plVar8 = *(long **)(this + 0x100);
  uVar2 = FUN_04b54f08(0x17);
  uVar3 = FUN_04b54f08(0x1e);
  uVar4 = FUN_04b54f08(0x23);
  (**(code **)(*plVar8 + 0x198))(plVar8,uVar2,uVar3,uVar4,uVar4);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x100));
  this_01 = ::operator_new(0xe8);
  LevelEditorWaveEvent::LevelEditorWaveEvent(this_01);
  *(LevelEditorWaveEvent **)(this + 0x110) = this_01;
  uVar2 = FUN_04b54f08(0xf);
  uVar3 = FUN_04b54f08(0x16d);
  uVar4 = FUN_04b54f08(0x32);
  (**(code **)(*(long *)this_01 + 0x198))(this_01,uVar2,uVar3,uVar4,uVar4);
  LevelEditorWaveEvent::Init(*(LevelEditorWaveEvent **)(this + 0x110),*(int *)(this + 0xe4));
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x110));
  (**(code **)(*(long *)this + 800))(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorWaveDisplay::Reload() */

void __thiscall LevelEditorWaveDisplay::Reload(LevelEditorWaveDisplay *this)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  CustomLevelMgr *pCVar4;
  undefined1 uVar5;
  LevelEditorWaveDisplay *pLVar6;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  pLVar6 = this + 0xec;
  iVar3 = 0;
  do {
    pCVar4 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    iVar1 = iVar3 + 1;
    CustomLevelMgr::GetWaveRowZombies(pCVar4,*(int *)(this + 0xe4),iVar3,(vector *)&local_20);
    uVar2 = FUN_04b53500(local_20,local_18);
    *(undefined4 *)pLVar6 = uVar2;
    pLVar6 = pLVar6 + 4;
    iVar3 = iVar1;
  } while (iVar1 != 5);
  pCVar4 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  iVar3 = CustomLevelMgr::GetWaveAdditionalPlantfood(pCVar4,*(int *)(this + 0xe4));
  uVar5 = (undefined1)iVar3;
  if (iVar3 != 0) {
    uVar5 = true;
  }
  SetPlantfoodState(this,(bool)uVar5);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditorWaveDisplay::Update() */

void __thiscall LevelEditorWaveDisplay::Update(LevelEditorWaveDisplay *this)

{
  Sexy::WidgetContainer::Update((WidgetContainer *)this);
  (**(code **)(*(long *)this + 800))(this);
  return;
}

