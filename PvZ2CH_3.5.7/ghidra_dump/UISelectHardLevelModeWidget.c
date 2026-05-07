// Class: UISelectHardLevelModeWidget


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISelectHardLevelModeWidget::Initialize(WorldMap*, std::string const&,
   UISelectHardLevelModeWidget::State) */

void __thiscall
UISelectHardLevelModeWidget::Initialize
          (UISelectHardLevelModeWidget *this,undefined8 param_1,undefined8 param_2,int param_4)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_03da8834(gGameStateMgr + 0x1eb4);
  FUN_03da85c8(gGameStateMgr + 0x1eb1,0);
  *(int *)(this + 0x14c) = param_4;
  if (param_4 == 1) {
    std::string::string(asStack_10,"Effects_ChestHardLevel");
    DNodeWidget::loadGroup((DNodeWidget *)this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"EndLevelAward");
    DNodeWidget::loadGroup((DNodeWidget *)this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"UI_Fragment_Pieces");
    DNodeWidget::loadGroup((DNodeWidget *)this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"UI_Fragment_Avatar");
    DNodeWidget::loadGroup((DNodeWidget *)this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"UI_Accessory_Dev2");
    DNodeWidget::loadGroup((DNodeWidget *)this,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  *(undefined8 *)(this + 0x138) = param_1;
  thunk_FUN_05475e00(this + 0x140,param_2);
  (**(code **)(*(long *)this + 0x310))(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UISelectHardLevelModeWidget::updateModeInfo() */

void __thiscall UISelectHardLevelModeWidget::updateModeInfo(UISelectHardLevelModeWidget *this)

{
  undefined8 *puVar1;
  
  if (*(int *)(this + 0x148) != 0) {
    puVar1 = (undefined8 *)FUN_03da85e4(*(undefined8 *)(this + 0x180),0);
    (**(code **)(*(long *)*puVar1 + 0xd8))((long *)*puVar1,0);
    puVar1 = (undefined8 *)FUN_03da85e4(*(undefined8 *)(this + 0x180),1);
    (**(code **)(*(long *)*puVar1 + 0xd8))((long *)*puVar1,1);
    return;
  }
  puVar1 = (undefined8 *)FUN_03da85e4(*(undefined8 *)(this + 0x180),0);
  (**(code **)(*(long *)*puVar1 + 0xd8))((long *)*puVar1,1);
  puVar1 = (undefined8 *)FUN_03da85e4(*(undefined8 *)(this + 0x180),1);
  (**(code **)(*(long *)*puVar1 + 0xd8))((long *)*puVar1,0);
  return;
}


/* UISelectHardLevelModeWidget::ScaleForAds(DTransformNode*) */

void __thiscall
UISelectHardLevelModeWidget::ScaleForAds(UISelectHardLevelModeWidget *this,DTransformNode *param_1)

{
  long *plVar1;
  
  if (param_1 != (DTransformNode *)0x0) {
    (**(code **)(*(long *)param_1 + 0x140))(*(undefined4 *)(this + 0x1e8),param_1);
    plVar1 = (long *)(**(code **)(*(long *)param_1 + 0x38))(param_1,1);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x140))(1.0 / *(float *)(this + 0x1e8));
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISelectHardLevelModeWidget::CheckShowTutorial() */

void __thiscall UISelectHardLevelModeWidget::CheckShowTutorial(UISelectHardLevelModeWidget *this)

{
  string asStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x1d0) != 0) {
    std::string::string(asStack_20,"");
    Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x1d4));
    GameMaskUI::ShowMask(this,2,asStack_20,aIStack_18);
    std::string::~string(asStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UISelectHardLevelModeWidget::Update() */

void __thiscall UISelectHardLevelModeWidget::Update(UISelectHardLevelModeWidget *this)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(this + 0x1e4);
  if ((0.0 < fVar2) && (fVar1 = (float)PVZ_T(), fVar2 < fVar1)) {
    CheckShowTutorial(this);
    *(undefined4 *)(this + 0x1e4) = 0xbf800000;
  }
  return;
}


/* UISelectHardLevelModeWidget::isLockLevel(bool) */

byte __thiscall
UISelectHardLevelModeWidget::isLockLevel(UISelectHardLevelModeWidget *this,bool param_1)

{
  byte bVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 == (PlayerInfo *)0x0) {
    return 1;
  }
  bVar1 = 1;
  if (*(uint *)(this + 0x14c) < 2) {
    if (param_1) {
      bVar1 = PlayerInfo::GetHardLevelCompleted(this_01,(string *)(this + 0x140));
      return bVar1 ^ 1;
    }
    bVar1 = PlayerInfo::GetLevelCompleted(this_01,(string *)(this + 0x140));
    bVar1 = bVar1 ^ 1;
  }
  return bVar1;
}


/* UISelectHardLevelModeWidget::isShowChestPop() */

void __thiscall UISelectHardLevelModeWidget::isShowChestPop(UISelectHardLevelModeWidget *this)

{
  isLockLevel(this,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISelectHardLevelModeWidget::isYetHardLevel() */

void __thiscall UISelectHardLevelModeWidget::isYetHardLevel(UISelectHardLevelModeWidget *this)

{
  byte bVar1;
  long lVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_03da85d4(*(undefined8 *)(*(long *)(this + 0x138) + 0x2f0));
  if (*(uchar *)(lVar2 + 0x5c) == '\x02') {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    std::string::string(asStack_10,"egypt8");
    bVar1 = PlayerInfo::GetLevelCompleted(this_01,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  else {
    bVar1 = WorldMapUtils::WorldHasHardModule(*(uchar *)(lVar2 + 0x5c));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1 ^ 1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISelectHardLevelModeWidget::UISelectHardLevelModeWidget() */

void __thiscall
UISelectHardLevelModeWidget::UISelectHardLevelModeWidget(UISelectHardLevelModeWidget *this)

{
  char cVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DNodeWidget::DNodeWidget((DNodeWidget *)this);
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined ***)this = &PTR_GetClass_067767d0;
  Set8BytesTo0(this + 0x140);
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined4 *)(this + 0x14c) = 0;
  this[0x150] = (UISelectHardLevelModeWidget)0x0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x158));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x180));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1a0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1b8));
  *(undefined4 *)(this + 0x1d0) = 0;
  Sexy::Insets::Insets((Insets *)(this + 0x1d4));
  *(undefined4 *)(this + 0x1e4) = 0xbf800000;
  *(undefined4 *)(this + 0x1e8) = 0x3f800000;
  DRefPtr<DButton>::DRefPtr((DRefPtr<DButton> *)(this + 0x1f0));
  std::string::string(asStack_10,"UI_HardLevel");
  DNodeWidget::loadGroup((DNodeWidget *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UI_Profile_select");
  DNodeWidget::loadGroup((DNodeWidget *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UI_SeedPackets");
  DNodeWidget::loadGroup((DNodeWidget *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UI_SeedPackets_2");
  DNodeWidget::loadGroup((DNodeWidget *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"LevelImage_Dynamic");
  DNodeWidget::loadGroup((DNodeWidget *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Effects_HardLevel");
  DNodeWidget::loadGroup((DNodeWidget *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  cVar1 = LawnApp::IsAdChannel(gLawnApp,2);
  if (cVar1 != '\0') {
    *(undefined4 *)(this + 0x1e8) = 0x3f4ccccd;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UISelectHardLevelModeWidget::create(WorldMap*, std::string const&,
   UISelectHardLevelModeWidget::State) */

UISelectHardLevelModeWidget *
UISelectHardLevelModeWidget::create(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  UISelectHardLevelModeWidget *this;
  
  if (s_pWidgetHandler != (UISelectHardLevelModeWidget *)0x0) {
    return s_pWidgetHandler;
  }
  this = ::operator_new(0x1f8);
  UISelectHardLevelModeWidget(this);
  s_pWidgetHandler = this;
  (**(code **)(*(long *)this + 0x3a8))(this,param_1,param_2,param_3);
  (**(code **)(*(long *)this + 0x338))(this,1);
  return this;
}


/* UISelectHardLevelModeWidget::~UISelectHardLevelModeWidget() */

void __thiscall
UISelectHardLevelModeWidget::~UISelectHardLevelModeWidget(UISelectHardLevelModeWidget *this)

{
  long *plVar1;
  
  *(undefined ***)this = &PTR_GetClass_067767d0;
  s_pWidgetHandler = 0;
  plVar1 = (long *)EASquared::Instance();
  (**(code **)(*plVar1 + 0x40))(plVar1,1);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)(this + 0x1f0));
  std::vector<DAnimNode*,std::allocator<DAnimNode*>>::~vector
            ((vector<DAnimNode*,std::allocator<DAnimNode*>> *)(this + 0x1b8));
  std::vector<DAnimNode*,std::allocator<DAnimNode*>>::~vector
            ((vector<DAnimNode*,std::allocator<DAnimNode*>> *)(this + 0x1a0));
  std::vector<DTransformNode*,std::allocator<DTransformNode*>>::~vector
            ((vector<DTransformNode*,std::allocator<DTransformNode*>> *)(this + 0x180));
  std::vector<DSpriteNode*,std::allocator<DSpriteNode*>>::~vector
            ((vector<DSpriteNode*,std::allocator<DSpriteNode*>> *)(this + 0x158));
  std::string::~string((string *)(this + 0x140));
  DNodeWidget::~DNodeWidget((DNodeWidget *)this);
  return;
}


/* UISelectHardLevelModeWidget::~UISelectHardLevelModeWidget() */

void __thiscall
UISelectHardLevelModeWidget::~UISelectHardLevelModeWidget(UISelectHardLevelModeWidget *this)

{
  ~UISelectHardLevelModeWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISelectHardLevelModeWidget::createButton(std::string const&, bool, bool, bool, bool, bool) */

void UISelectHardLevelModeWidget::createButton
               (string *param_1,bool param_2,bool param_3,bool param_4,bool param_5,bool param_6)

{
  long *plVar1;
  char *pcVar2;
  long *plVar3;
  undefined8 uVar4;
  char in_w6;
  DRefPtr<DButton> *in_x8;
  code *pcVar5;
  DRefPtr<DSpriteNode> aDStack_78 [8];
  DRefPtr<DTransformNode> aDStack_70 [8];
  DRefPtr<DSpriteNode> aDStack_68 [8];
  DRefPtr<DTransformNode> aDStack_60 [8];
  DRefPtr<DSpriteNode> aDStack_58 [8];
  string asStack_50 [8];
  DRefPtr<DSpriteNode> aDStack_48 [8];
  string asStack_40 [8];
  DString aDStack_38 [16];
  string *local_28;
  undefined1 local_20;
  undefined1 local_1f;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DString::DString(aDStack_38,(string *)(ulong)param_2);
  DRefPtr<DButton>::DRefPtr(in_x8);
  DRefPtr<DSpriteNode>::DRefPtr(aDStack_78);
  DRefPtr<DTransformNode>::DRefPtr(aDStack_70);
  local_28 = param_1;
  local_20 = param_5;
  local_1f = param_6;
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_78);
  pcVar5 = *(code **)(*plVar1 + 0x2e8);
  pcVar2 = (char *)DString::c_str(aDStack_38);
  std::string::string(asStack_18,pcVar2);
  (*pcVar5)(plVar1,asStack_18);
  std::string::~string(asStack_18);
  nop();
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_70);
  pcVar5 = *(code **)(*plVar1 + 0x210);
  plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_78);
  (**(code **)(*plVar3 + 0x218))(asStack_18);
  (*pcVar5)(plVar1,asStack_18);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_78);
  pcVar5 = *(code **)(*plVar1 + 0x108);
  plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_70);
  (**(code **)(*plVar3 + 0xd0))(asStack_18,0x3f000000,0x3f000000);
  (*pcVar5)(plVar1,asStack_18);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_70);
  uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_78);
  (**(code **)(*plVar1 + 0x30))(plVar1,uVar4);
  if (in_w6 != '\0') {
    DRefPtr<DSpriteNode>::DRefPtr(aDStack_58);
    plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_58);
    pcVar5 = *(code **)(*plVar1 + 0x2e8);
    std::string::string(asStack_50,"UI/HardLevel/ChestPop");
    plVar1 = (long *)(*pcVar5)(plVar1,asStack_50);
    plVar1 = (long *)(**(code **)(*plVar1 + 0x130))(0x3f800000,0x3f000000);
    pcVar5 = *(code **)(*plVar1 + 0x108);
    plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_78);
    (**(code **)(*plVar3 + 0xd0))((DVec2 *)aDStack_48,0x3f800000,0x3f000000);
    DVec2::DVec2((DVec2 *)asStack_40,30.0,-30.0);
    DVec2::operator+((DVec2 *)aDStack_48,(DVec2 *)asStack_40);
    (*pcVar5)(plVar1,asStack_18);
    std::string::~string(asStack_50);
    nop();
    plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_78);
    uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_58);
    (**(code **)(*plVar1 + 0x30))(plVar1,uVar4);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_58);
  }
  DRefPtr<DSpriteNode>::DRefPtr(aDStack_68);
  DRefPtr<DTransformNode>::DRefPtr(aDStack_60);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_68);
  pcVar5 = *(code **)(*plVar1 + 0x2e8);
  ::operator+(aDStack_38,"Select");
  pcVar2 = (char *)DString::c_str((DString *)asStack_18);
  std::string::string(asStack_40,pcVar2);
  (*pcVar5)(plVar1,asStack_40);
  std::string::~string(asStack_40);
  nop();
  DString::~DString((DString *)asStack_18);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_60);
  pcVar5 = *(code **)(*plVar1 + 0x210);
  plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_78);
  (**(code **)(*plVar3 + 0x218))(asStack_18);
  (*pcVar5)(plVar1,asStack_18);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_68);
  pcVar5 = *(code **)(*plVar1 + 0x108);
  plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_60);
  (**(code **)(*plVar3 + 0xd0))(asStack_18,0x3f000000,0x3f000000);
  (*pcVar5)(plVar1,asStack_18);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_60);
  uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_68);
  (**(code **)(*plVar1 + 0x30))(plVar1,uVar4);
  if (in_w6 != '\0') {
    DRefPtr<DSpriteNode>::DRefPtr(aDStack_58);
    plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_58);
    pcVar5 = *(code **)(*plVar1 + 0x2e8);
    std::string::string(asStack_50,"UI/HardLevel/ChestPop");
    plVar1 = (long *)(*pcVar5)(plVar1,asStack_50);
    plVar1 = (long *)(**(code **)(*plVar1 + 0x130))(0x3f800000,0x3f000000);
    pcVar5 = *(code **)(*plVar1 + 0x108);
    plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_78);
    (**(code **)(*plVar3 + 0xd0))(aDStack_48,0x3f800000,0x3f000000);
    DVec2::DVec2((DVec2 *)asStack_40,30.0,-30.0);
    DVec2::operator+((DVec2 *)aDStack_48,(DVec2 *)asStack_40);
    (*pcVar5)(plVar1,asStack_18);
    std::string::~string(asStack_50);
    nop();
    plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_68);
    uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_58);
    (**(code **)(*plVar1 + 0x30))(plVar1,uVar4);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_58);
  }
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)in_x8);
  uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_70);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x388))(plVar1,uVar4);
  uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_60);
  (**(code **)(*plVar1 + 0x390))(plVar1,uVar4);
  if (param_4) {
    DRefPtr<DTransformNode>::DRefPtr((DRefPtr<DTransformNode> *)aDStack_58);
    DRefPtr<DSpriteNode>::DRefPtr((DRefPtr<DSpriteNode> *)asStack_50);
    plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_50);
    pcVar5 = *(code **)(*plVar1 + 0x2e8);
    pcVar2 = (char *)DString::c_str(aDStack_38);
    std::string::string(asStack_18,pcVar2);
    (*pcVar5)(plVar1,asStack_18);
    std::string::~string(asStack_18);
    nop();
    plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_58);
    pcVar5 = *(code **)(*plVar1 + 0x210);
    plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_50);
    (**(code **)(*plVar3 + 0x218))(asStack_18);
    (*pcVar5)(plVar1,asStack_18);
    plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_50);
    pcVar5 = *(code **)(*plVar1 + 0x108);
    plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_58);
    (**(code **)(*plVar3 + 0xd0))(asStack_18,0x3f000000,0x3f000000);
    (*pcVar5)(plVar1,asStack_18);
    plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_58);
    uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_50);
    (**(code **)(*plVar1 + 0x30))(plVar1,uVar4);
    DRefPtr<DSpriteNode>::DRefPtr(aDStack_48);
    plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_48);
    pcVar5 = *(code **)(*plVar1 + 0x2e8);
    std::string::string(asStack_18,"UI/HardLevel/Unlock");
    (*pcVar5)(plVar1,asStack_18);
    std::string::~string(asStack_18);
    nop();
    plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_48);
    pcVar5 = *(code **)(*plVar1 + 0x108);
    plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_58);
    (**(code **)(*plVar3 + 0xd0))(asStack_18,0x3f000000,0x3f000000);
    (*pcVar5)(plVar1,asStack_18);
    plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_58);
    uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_48);
    (**(code **)(*plVar1 + 0x30))(plVar1,uVar4);
    DRefPtr<DSpriteNode>::DRefPtr((DRefPtr<DSpriteNode> *)asStack_40);
    plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_40);
    pcVar5 = *(code **)(*plVar1 + 0x2e8);
    std::string::string(asStack_18,"UI/HardLevel/YetOpen");
    (*pcVar5)(plVar1,asStack_18);
    std::string::~string(asStack_18);
    nop();
    plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_40);
    pcVar5 = *(code **)(*plVar1 + 0x108);
    plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_58);
    (**(code **)(*plVar3 + 0xd0))(asStack_18,0x3f000000,0x3f000000);
    (*pcVar5)(plVar1,asStack_18);
    plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_58);
    uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_40);
    (**(code **)(*plVar1 + 0x30))(plVar1,uVar4);
    plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)in_x8);
    uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_58);
    (**(code **)(*plVar1 + 0x3a0))(plVar1,uVar4);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)asStack_40);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_48);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)asStack_50);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_58);
  }
  else {
    if (!param_3) {
      uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)in_x8);
      FUN_03dadf1c(&local_28,uVar4);
      goto LAB_03dae81c;
    }
    DRefPtr<DTransformNode>::DRefPtr((DRefPtr<DTransformNode> *)aDStack_58);
    DRefPtr<DSpriteNode>::DRefPtr((DRefPtr<DSpriteNode> *)asStack_50);
    plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_50);
    pcVar5 = *(code **)(*plVar1 + 0x2e8);
    pcVar2 = (char *)DString::c_str(aDStack_38);
    std::string::string(asStack_18,pcVar2);
    (*pcVar5)(plVar1,asStack_18);
    std::string::~string(asStack_18);
    nop();
    plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_58);
    pcVar5 = *(code **)(*plVar1 + 0x210);
    plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_50);
    (**(code **)(*plVar3 + 0x218))(asStack_18);
    (*pcVar5)(plVar1,asStack_18);
    plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_50);
    pcVar5 = *(code **)(*plVar1 + 0x108);
    plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_58);
    (**(code **)(*plVar3 + 0xd0))(asStack_18,0x3f000000,0x3f000000);
    (*pcVar5)(plVar1,asStack_18);
    plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_58);
    uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_50);
    (**(code **)(*plVar1 + 0x30))(plVar1,uVar4);
    DRefPtr<DSpriteNode>::DRefPtr(aDStack_48);
    plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_48);
    pcVar5 = *(code **)(*plVar1 + 0x2e8);
    std::string::string(asStack_18,"UI/HardLevel/Unlock");
    (*pcVar5)(plVar1,asStack_18);
    std::string::~string(asStack_18);
    nop();
    plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_48);
    pcVar5 = *(code **)(*plVar1 + 0x108);
    plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_58);
    (**(code **)(*plVar3 + 0xd0))(asStack_18,0x3f000000,0x3f000000);
    (*pcVar5)(plVar1,asStack_18);
    plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_58);
    uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_48);
    (**(code **)(*plVar1 + 0x30))(plVar1,uVar4);
    uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_48);
    *(undefined8 *)(param_1 + 0x198) = uVar4;
    DRefPtr<DAnimNode>::DRefPtr((DRefPtr<DAnimNode> *)asStack_40);
    plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_40);
    pcVar5 = *(code **)(*plVar1 + 0x2e8);
    std::string::string(asStack_18,"effects/HardLevel_Unlock");
    (*pcVar5)(plVar1,asStack_18);
    std::string::~string(asStack_18);
    nop();
    plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_40);
    pcVar5 = *(code **)(*plVar1 + 0x108);
    plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_58);
    (**(code **)(*plVar3 + 0xd0))(asStack_18,0x3f000000,0x3f000000);
    plVar1 = (long *)(*pcVar5)(plVar1,asStack_18);
    (**(code **)(*plVar1 + 0x130))(0x3f000000,0x3f000000);
    plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)in_x8);
    uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_40);
    (**(code **)(*plVar1 + 0x28))(plVar1,uVar4,2);
    uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_40);
    *(undefined8 *)(param_1 + 0x170) = uVar4;
    plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)in_x8);
    uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_58);
    (**(code **)(*plVar1 + 0x3a0))(plVar1,uVar4);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)asStack_40);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_48);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)asStack_50);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_58);
  }
  uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)in_x8);
  FUN_03dadf1c(&local_28,uVar4);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)in_x8);
  (**(code **)(*plVar1 + 0x338))(plVar1,0);
LAB_03dae81c:
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_60);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_68);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_70);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_78);
  DString::~DString(aDStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISelectHardLevelModeWidget::Initialize() */

void __thiscall UISelectHardLevelModeWidget::Initialize(UISelectHardLevelModeWidget *this)

{
  exception_ptr *this_00;
  int iVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  RenderEffectDefinition *pRVar10;
  ProfileMgr *this_01;
  long lVar11;
  TutorialEffectMgr *this_02;
  DAction *pDVar12;
  DTransformNode *pDVar13;
  undefined8 *puVar14;
  EffectAnimRig_EndLevelBox *this_03;
  bool bVar15;
  code *pcVar16;
  float fVar17;
  float fVar18;
  DRefPtr<DLayer> aDStack_1b8 [8];
  DRefPtr<DSprite9SliceNode> aDStack_1b0 [8];
  float local_1a8;
  float local_1a4;
  DRefPtr<DSpriteNode> aDStack_1a0 [8];
  string asStack_198 [8];
  exception_ptr aeStack_190 [8];
  exception_ptr aeStack_188 [8];
  DRefPtr<DStringNode> aDStack_180 [8];
  DRefPtr<DStringNode> aDStack_178 [8];
  DRefPtr<DSpriteNode> aDStack_170 [8];
  DRefPtr<DSpriteNode> aDStack_168 [8];
  DRefPtr<DMenu> aDStack_160 [8];
  DRefPtr<DMenu> aDStack_158 [8];
  DRefPtr<DSpriteNode> aDStack_150 [8];
  DRefPtr<DSpriteNode> aDStack_148 [8];
  DRefPtr<DSpriteNode> aDStack_140 [8];
  exception_ptr aeStack_138 [8];
  DRefPtr<DButton> aDStack_130 [8];
  exception_ptr aeStack_128 [8];
  DRefPtr<DSpriteNode> aDStack_120 [8];
  DRefPtr<DSpriteNode> aDStack_118 [8];
  DRefPtr<DSpriteNode> aDStack_110 [8];
  string asStack_108 [8];
  DVec2 aDStack_100 [8];
  string asStack_f8 [8];
  DVec2 aDStack_f0 [8];
  string asStack_e8 [8];
  DVec2 aDStack_e0 [24];
  UISelectHardLevelModeWidget *local_c8;
  DRefPtr<DSprite9SliceNode> aDStack_c0 [8];
  string *local_b8;
  DRefPtr<DSprite9SliceNode> aDStack_b0 [8];
  function<bool(Sexy::Touch_const&)> afStack_a8 [32];
  undefined8 local_88;
  vector<HardAwardItem,std::allocator<HardAwardItem>> avStack_80 [24];
  undefined8 local_68;
  DRefPtr<DSprite9SliceNode> aDStack_60 [8];
  DRefPtr<DSprite9SliceNode> aDStack_58 [8];
  DRefPtr<DSprite9SliceNode> aDStack_50 [8];
  DRefPtr<DSprite9SliceNode> aDStack_48 [8];
  UISelectHardLevelModeWidget *local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DRefPtr<DLayer>::DRefPtr(aDStack_1b8);
  plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_1b8);
  pcVar16 = *(code **)(*plVar7 + 0x210);
  (**(code **)(*(long *)this + 800))((string *)&local_68,this);
  plVar7 = (long *)(*pcVar16)(plVar7,(string *)&local_68);
  (**(code **)(*plVar7 + 0x270))(plVar7,0,0,0,0x80);
  this_00 = (exception_ptr *)(this + 0x1f0);
  plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_1b8);
  (**(code **)(*plVar7 + 0xf0))(plVar7,1);
  uVar8 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_1b8);
  (**(code **)(*(long *)this + 0x370))(this,uVar8);
  DRefPtr<DSprite9SliceNode>::DRefPtr(aDStack_1b0);
  (**(code **)(*(long *)this + 800))(&local_1a8,this);
  plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_1b0);
  pcVar16 = *(code **)(*plVar7 + 0x2e8);
  std::string::string((string *)&local_68,"UI/Dialog_Asset/bg_light_green");
  plVar7 = (long *)(*pcVar16)(plVar7,(string *)&local_68);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x110))
                             ((local_1a8 * 0.5) / *(float *)(this + 0x1e8),local_1a4 * 0.55);
  (**(code **)(*plVar7 + 0x138))(0,0,0x44480000,0x43fa0000);
  std::string::~string((string *)&local_68);
  nop();
  uVar8 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_1b0);
  (**(code **)(*(long *)this + 0x368))(this,uVar8,1);
  DRefPtr<DSpriteNode>::DRefPtr(aDStack_1a0);
  plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_1a0);
  pcVar16 = *(code **)(*plVar7 + 0x2e8);
  std::string::string((string *)&local_68,"UI/HardLevel/HeadInformationUI");
  plVar7 = (long *)(*pcVar16)(plVar7,(string *)&local_68);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x110))(0x41f00000,0x42b40000);
  (**(code **)(*plVar7 + 0x130))(0,0);
  std::string::~string((string *)&local_68);
  nop();
  plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_1b0);
  uVar8 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_1a0);
  (**(code **)(*plVar7 + 0x30))(plVar7,uVar8);
  std::string::string(asStack_198,"Test");
  nop();
  local_c8 = this;
  DRefPtr<DSprite9SliceNode>::DRefPtr(aDStack_c0,(DRefPtr *)aDStack_1b0);
  local_b8 = asStack_198;
  DRefPtr<DSprite9SliceNode>::DRefPtr(aDStack_b0,(DRefPtr *)aDStack_1a0);
  FUN_03daf1ec(aeStack_190,&local_c8,0);
  plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_1a0);
  uVar8 = std::__exception_ptr::exception_ptr::_M_get(aeStack_190);
  (**(code **)(*plVar7 + 0x30))(plVar7,uVar8);
  FUN_03daf1ec(aeStack_188,&local_c8,1);
  plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_1a0);
  uVar8 = std::__exception_ptr::exception_ptr::_M_get(aeStack_188);
  (**(code **)(*plVar7 + 0x30))(plVar7,uVar8);
  DRefPtr<DStringNode>::DRefPtr(aDStack_180);
  plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_180);
  uVar8 = FUN_0547429c(asStack_198);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x338))(plVar7,uVar8);
  pcVar16 = *(code **)(*plVar7 + 0x340);
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_40_ThickOutline);
  plVar7 = (long *)(*pcVar16)(plVar7,uVar8);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x350))(plVar7,1);
  pcVar16 = *(code **)(*plVar7 + 0x108);
  plVar9 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_1b0);
  (**(code **)(*plVar9 + 0xd0))(aDStack_e0,0x3f000000,0);
  DVec2::DVec2((DVec2 *)&local_88,3.0,11.0);
  DVec2::operator+(aDStack_e0,(DVec2 *)&local_88);
  plVar7 = (long *)(*pcVar16)(plVar7,(string *)&local_68);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x138))(0,0,0x44160000,0x42700000);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x130))(0x3f000000,0);
  (**(code **)(*plVar7 + 0x270))(plVar7,0,0,0,0x80);
  plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_1b0);
  uVar8 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_180);
  (**(code **)(*plVar7 + 0x30))(plVar7,uVar8);
  DRefPtr<DStringNode>::DRefPtr(aDStack_178);
  plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_178);
  uVar8 = FUN_0547429c(asStack_198);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x338))(plVar7,uVar8);
  pcVar16 = *(code **)(*plVar7 + 0x340);
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_40_ThickOutline);
  plVar7 = (long *)(*pcVar16)(plVar7,uVar8);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x350))(plVar7,1);
  pcVar16 = *(code **)(*plVar7 + 0x108);
  plVar9 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_1b0);
  (**(code **)(*plVar9 + 0xd0))(aDStack_e0,0x3f000000,0);
  DVec2::DVec2((DVec2 *)&local_88,0.0,8.0);
  DVec2::operator+(aDStack_e0,(DVec2 *)&local_88);
  plVar7 = (long *)(*pcVar16)(plVar7,(string *)&local_68);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x138))(0,0,0x44160000,0x42700000);
  (**(code **)(*plVar7 + 0x130))(0x3f000000,0);
  plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_1b0);
  uVar8 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_178);
  (**(code **)(*plVar7 + 0x30))(plVar7,uVar8);
  DRefPtr<DSpriteNode>::DRefPtr(aDStack_170);
  plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_170);
  pcVar16 = *(code **)(*plVar7 + 0x2e8);
  std::string::string(asStack_e8,"UI/HardLevel/ZombiePerview");
  plVar7 = (long *)(*pcVar16)(plVar7,asStack_e8);
  pcVar16 = *(code **)(*plVar7 + 0x108);
  plVar9 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_1a0);
  (**(code **)(*plVar9 + 0xd0))(aDStack_e0,0x3f000000,0x3f000000);
  DVec2::DVec2((DVec2 *)&local_88,0.0,-40.0);
  DVec2::operator+(aDStack_e0,(DVec2 *)&local_88);
  (*pcVar16)(plVar7,(string *)&local_68);
  std::string::~string(asStack_e8);
  nop();
  plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_1a0);
  uVar8 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_170);
  (**(code **)(*plVar7 + 0x28))(plVar7,uVar8,1);
  DRefPtr<DSpriteNode>::DRefPtr(aDStack_168);
  plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_168);
  pcVar16 = *(code **)(*plVar7 + 0x2e8);
  std::string::string(asStack_f8,"UI/HardLevel/PassSth");
  plVar7 = (long *)(*pcVar16)(plVar7,asStack_f8);
  pcVar16 = *(code **)(*plVar7 + 0x108);
  plVar9 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_1a0);
  (**(code **)(*plVar9 + 0xd0))(aDStack_f0,0x3f000000,0);
  plVar9 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_168);
  (**(code **)(*plVar9 + 0xd0))(asStack_e8,0,0x3f000000);
  DVec2::operator+(aDStack_f0,(DVec2 *)asStack_e8);
  DVec2::DVec2((DVec2 *)&local_88,0.0,10.0);
  DVec2::operator+(aDStack_e0,(DVec2 *)&local_88);
  (*pcVar16)(plVar7,(string *)&local_68);
  std::string::~string(asStack_f8);
  nop();
  plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_1a0);
  uVar8 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_168);
  (**(code **)(*plVar7 + 0x28))(plVar7,uVar8,1);
  DRefPtr<DMenu>::DRefPtr(aDStack_160);
  plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_160);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x110))(0,0);
  (**(code **)(*plVar7 + 0x130))(0,0);
  plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_1b0);
  uVar8 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_160);
  (**(code **)(*plVar7 + 0x28))(plVar7,uVar8,1);
  DRefPtr<DMenu>::DRefPtr(aDStack_158);
  plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_158);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x110))(0,0);
  (**(code **)(*plVar7 + 0x130))(0,0);
  plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_1b0);
  uVar8 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_158);
  (**(code **)(*plVar7 + 0x30))(plVar7,uVar8);
  DRefPtr<DSpriteNode>::DRefPtr(aDStack_150);
  plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_150);
  pcVar16 = *(code **)(*plVar7 + 0x2e8);
  std::string::string((string *)&local_68,"UI/Dialog_Asset/round_close_btn");
  (*pcVar16)(plVar7,(string *)&local_68);
  std::string::~string((string *)&local_68);
  nop();
  DRefPtr<DSpriteNode>::DRefPtr(aDStack_148);
  plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_148);
  pcVar16 = *(code **)(*plVar7 + 0x2e8);
  std::string::string((string *)&local_68,"UI/Dialog_Asset/round_close_btn_down");
  (*pcVar16)(plVar7,(string *)&local_68);
  std::string::~string((string *)&local_68);
  nop();
  DRefPtr<DSpriteNode>::DRefPtr(aDStack_140);
  plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_140);
  pcVar16 = *(code **)(*plVar7 + 0x2e8);
  std::string::string((string *)&local_68,"UI/Dialog_Asset/round_close_btn");
  plVar7 = (long *)(*pcVar16)(plVar7,(string *)&local_68);
  pcVar16 = *(code **)(*plVar7 + 0x2d8);
  pRVar10 = CachedResourcePtr::operator_cast_to_RenderEffectDefinition_
                      ((CachedResourcePtr *)&DAT_06ad9948);
  (*pcVar16)(plVar7,pRVar10);
  std::string::~string((string *)&local_68);
  nop();
  plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  uVar8 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_150);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x388))(plVar7,uVar8);
  uVar8 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_148);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x390))(plVar7,uVar8);
  uVar8 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_140);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x3a0))(plVar7,uVar8);
  pcVar16 = *(code **)(*plVar7 + 0x350);
  FUN_03da97fc((function<bool(Sexy::Touch_const&)> *)&local_38,this);
  plVar7 = (long *)(*pcVar16)(plVar7,(function<bool(Sexy::Touch_const&)> *)&local_38);
  pcVar16 = *(code **)(*plVar7 + 0x108);
  plVar9 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_1b0);
  (**(code **)(*plVar9 + 0xd0))(aDStack_e0,0x3f800000,0);
  plVar9 = (long *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  (**(code **)(*plVar9 + 0xd0))((DVec2 *)&local_88,0x3e800000,0xbe800000);
  DVec2::operator-(aDStack_e0,(DVec2 *)&local_88);
  (*pcVar16)(plVar7,(string *)&local_68);
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)&local_38);
  std::string::string((string *)&local_68,"UI/HardLevel/EasyMode");
  bVar2 = isLockLevel(this,false);
  bVar15 = SUB81((string *)&local_68,0);
  createButton((string *)this,bVar15,false,false,false,(bool)(bVar2 ^ 1));
  std::string::~string((string *)&local_68);
  nop();
  plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get(aeStack_138);
  pcVar16 = *(code **)(*plVar7 + 0x108);
  plVar9 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_1b0);
  (**(code **)(*plVar9 + 0xd0))(aDStack_f0,0x3f800000,0x3f000000);
  plVar9 = (long *)std::__exception_ptr::exception_ptr::_M_get(aeStack_138);
  (**(code **)(*plVar9 + 0xd0))(asStack_e8,0x3f000000,0x3f000000);
  DVec2::operator-(aDStack_f0,(DVec2 *)asStack_e8);
  DVec2::DVec2((DVec2 *)&local_88,-33.0,12.0);
  DVec2::operator+(aDStack_e0,(DVec2 *)&local_88);
  (*pcVar16)(plVar7,(string *)&local_68);
  plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get(aeStack_138);
  pcVar16 = *(code **)(*plVar7 + 0x350);
  FUN_03da9858((function<bool(Sexy::Touch_const&)> *)&local_38,this);
  (*pcVar16)(plVar7,(function<bool(Sexy::Touch_const&)> *)&local_38);
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)&local_38);
  DRefPtr<DButton>::DRefPtr(aDStack_130);
  std::string::string((string *)&local_68,"UI/HardLevel/HardMode");
  bVar3 = (bool)isLockLevel(this,false);
  bVar4 = (bool)isYetHardLevel(this);
  bVar2 = isLockLevel(this,true);
  isShowChestPop(this);
  createButton((string *)this,bVar15,bVar3,bVar4,true,(bool)(bVar2 ^ 1));
  std::string::~string((string *)&local_68);
  nop();
  plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get(aeStack_128);
  pcVar16 = *(code **)(*plVar7 + 0x108);
  plVar9 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_1b0);
  (**(code **)(*plVar9 + 0xd0))(aDStack_f0,0x3f800000,0x3f000000);
  plVar9 = (long *)std::__exception_ptr::exception_ptr::_M_get(aeStack_128);
  (**(code **)(*plVar9 + 0xd0))(asStack_e8,0x3f000000,0xbf000000);
  DVec2::operator-(aDStack_f0,(DVec2 *)asStack_e8);
  DVec2::DVec2((DVec2 *)&local_88,-33.0,20.0);
  DVec2::operator+(aDStack_e0,(DVec2 *)&local_88);
  (*pcVar16)(plVar7,(string *)&local_68);
  plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get(aeStack_128);
  pcVar16 = *(code **)(*plVar7 + 0x350);
  local_68 = this;
  DRefPtr<DSprite9SliceNode>::DRefPtr(aDStack_60,(DRefPtr *)aDStack_130);
  FUN_03da9f9c((function<bool(Sexy::Touch_const&)> *)&local_38,(string *)&local_68);
  (*pcVar16)(plVar7,(function<bool(Sexy::Touch_const&)> *)&local_38);
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)&local_38);
  FUN_03553580((string *)&local_68);
  DRefPtr<DSpriteNode>::DRefPtr(aDStack_120);
  plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_120);
  pcVar16 = *(code **)(*plVar7 + 0x2e8);
  std::string::string((string *)&local_68,"UI/HardLevel/StartFight");
  (*pcVar16)(plVar7,(string *)&local_68);
  std::string::~string((string *)&local_68);
  nop();
  DRefPtr<DSpriteNode>::DRefPtr(aDStack_118);
  plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_118);
  pcVar16 = *(code **)(*plVar7 + 0x2e8);
  std::string::string((string *)&local_68,"UI/HardLevel/StartFight");
  plVar7 = (long *)(*pcVar16)(plVar7,(string *)&local_68);
  pcVar16 = *(code **)(*plVar7 + 0x2d8);
  pRVar10 = CachedResourcePtr::operator_cast_to_RenderEffectDefinition_
                      ((CachedResourcePtr *)&DAT_06ad9948);
  (*pcVar16)(plVar7,pRVar10);
  std::string::~string((string *)&local_68);
  nop();
  plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_130);
  uVar8 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_120);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x388))(plVar7,uVar8);
  uVar8 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_118);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x3a0))(plVar7,uVar8);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x3a8))(plVar7,1);
  pcVar16 = *(code **)(*plVar7 + 0x350);
  FUN_03da98b4((function<bool(Sexy::Touch_const&)> *)&local_38,this);
  plVar7 = (long *)(*pcVar16)(plVar7,(function<bool(Sexy::Touch_const&)> *)&local_38);
  pcVar16 = *(code **)(*plVar7 + 0x108);
  plVar9 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_1b0);
  (**(code **)(*plVar9 + 0xd0))((string *)&local_68,0x3f000000,0x3f800000);
  (*pcVar16)(plVar7,(string *)&local_68);
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)&local_38);
  plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_158);
  pcVar16 = *(code **)(*plVar7 + 0x378);
  local_38 = std::__exception_ptr::exception_ptr::_M_get(aeStack_138);
  local_30 = std::__exception_ptr::exception_ptr::_M_get(aeStack_128);
  std::vector<DButton*,std::allocator<DButton*>>::vector
            ((vector<DButton*,std::allocator<DButton*>> *)&local_68,
             (function<bool(Sexy::Touch_const&)> *)&local_38,2,(DVec2 *)&local_88);
  plVar7 = (long *)(*pcVar16)(plVar7,(string *)&local_68);
  uVar8 = std::__exception_ptr::exception_ptr::_M_get(aeStack_138);
  (**(code **)(*plVar7 + 0x390))(plVar7,uVar8);
  std::vector<DButton*,std::allocator<DButton*>>::~vector
            ((vector<DButton*,std::allocator<DButton*>> *)&local_68);
  plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_160);
  pcVar16 = *(code **)(*plVar7 + 0x378);
  local_38 = std::__exception_ptr::exception_ptr::_M_get(this_00);
  local_30 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_130);
  std::vector<DButton*,std::allocator<DButton*>>::vector
            ((vector<DButton*,std::allocator<DButton*>> *)&local_68,
             (function<bool(Sexy::Touch_const&)> *)&local_38,2,(DVec2 *)&local_88);
  (*pcVar16)(plVar7,(string *)&local_68);
  std::vector<DButton*,std::allocator<DButton*>>::~vector
            ((vector<DButton*,std::allocator<DButton*>> *)&local_68);
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar11 = ProfileMgr::GetCurrentProfile(this_01);
  uVar6 = FUN_03da85d0(*(undefined4 *)(lVar11 + 0x40));
  switch(uVar6) {
  case 0x13:
  case 0x15:
  case 0x19:
    *(undefined4 *)(this + 0x1d0) = uVar6;
    plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_130);
    (**(code **)(*plVar7 + 0xc0))((DVec2 *)&local_88,plVar7,&DVec2::ZERO);
    fVar17 = (float)FUN_03da9a84((undefined4)local_88);
    fVar18 = *(float *)(this + 0x1e8);
    *(int *)(this + 0x1d4) = (int)(fVar17 * fVar18);
    fVar17 = (float)FUN_03da9a84(local_88._4_4_);
    *(int *)(this + 0x1d8) = (int)(fVar17 * fVar18);
    plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_130);
    (**(code **)(*plVar7 + 0x218))((string *)&local_68);
    fVar17 = (float)FUN_03da9a84((undefined4)local_68);
    *(int *)(this + 0x1dc) = (int)fVar17;
    plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_130);
    (**(code **)(*plVar7 + 0x218))((string *)&local_68);
    fVar17 = (float)FUN_03da9a84(local_68._4_4_);
    *(int *)(this + 0x1e0) = (int)fVar17;
    plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get(this_00);
    (**(code **)(*plVar7 + 0x338))(plVar7,0);
    fVar17 = (float)PVZ_T();
    iVar1 = *(int *)(this + 0x14c);
    *(float *)(this + 0x1e4) = fVar17 + 0.5;
    break;
  case 0x1f:
    *(undefined4 *)(this + 0x1d0) = 0x1f;
    plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get(aeStack_128);
    (**(code **)(*plVar7 + 0xc0))((DVec2 *)&local_88,plVar7,&DVec2::ZERO);
    fVar17 = (float)FUN_03da9a84((undefined4)local_88);
    fVar18 = *(float *)(this + 0x1e8);
    *(int *)(this + 0x1d4) = (int)(fVar17 * fVar18);
    fVar17 = (float)FUN_03da9a84(local_88._4_4_);
    *(int *)(this + 0x1d8) = (int)(fVar17 * fVar18);
    plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get(aeStack_128);
    (**(code **)(*plVar7 + 0x218))((string *)&local_68);
    fVar17 = (float)FUN_03da9a84((undefined4)local_68);
    *(int *)(this + 0x1dc) = (int)fVar17;
    plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get(aeStack_128);
    (**(code **)(*plVar7 + 0x218))((string *)&local_68);
    fVar17 = (float)FUN_03da9a84(local_68._4_4_);
    *(int *)(this + 0x1e0) = (int)fVar17;
    plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get(this_00);
    (**(code **)(*plVar7 + 0x338))(plVar7,0);
    fVar17 = (float)PVZ_T();
    *(float *)(this + 0x1e4) = fVar17 + 0.5;
    this_02 = (TutorialEffectMgr *)Sexy::LazySingleton<TutorialEffectMgr>::GetInstance();
    std::string::string((string *)&local_68,"[ADVICE_EGYPT1_HARD_LEVEL]");
    TutorialEffectMgr::DisplayAdvice(this_02,(string *)&local_68);
    std::string::~string((string *)&local_68);
    nop();
  default:
    iVar1 = *(int *)(this + 0x14c);
  }
  if (iVar1 != 0) {
    (**(code **)(*(long *)this + 0x350))(this,0);
    DRefPtr<DAction>::DRefPtr((DRefPtr<DAction> *)&local_68);
    pDVar12 = (DAction *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
    pDVar12 = (DAction *)DAction::setDuration(pDVar12,0.3);
    FUN_03da9910((function<bool(Sexy::Touch_const&)> *)&local_38,this);
    DAction::onDone(pDVar12,(function *)&local_38);
    std::function<bool(Sexy::Touch_const&)>::~function
              ((function<bool(Sexy::Touch_const&)> *)&local_38);
    plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_1b0);
    uVar8 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
    (**(code **)(*plVar7 + 0x298))(plVar7,uVar8);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)&local_68);
    iVar1 = *(int *)(this + 0x14c);
    if (iVar1 == 1) {
      *(undefined4 *)(this + 0x148) = 1;
      plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_130);
      (**(code **)(*plVar7 + 0x338))(plVar7,0);
      plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_158);
      uVar8 = std::__exception_ptr::exception_ptr::_M_get(aeStack_128);
      (**(code **)(*plVar7 + 0x390))(plVar7,uVar8);
      plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_160);
      (**(code **)(*plVar7 + 0x380))(plVar7,0);
      plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_158);
      (**(code **)(*plVar7 + 0x380))(plVar7,0);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aDStack_e0);
      this_03 = ::operator_new(0x298);
      EffectAnimRig_EndLevelBox::EffectAnimRig_EndLevelBox(this_03);
      EffectAnimRig_EndLevelBox::initHardAwardItems((string *)this_03,(bool)((char)this + '@'));
      EffectAnimRig_EndLevelBox::getHardLevelAward();
      std::vector<HardAwardItem,std::allocator<HardAwardItem>>::operator=
                ((vector<HardAwardItem,std::allocator<HardAwardItem>> *)aDStack_e0,
                 (vector *)&local_68);
      std::vector<HardAwardItem,std::allocator<HardAwardItem>>::~vector
                ((vector<HardAwardItem,std::allocator<HardAwardItem>> *)&local_68);
      (**(code **)(*(long *)this_03 + 0x18))();
      local_88 = this;
      std::vector<HardAwardItem,std::allocator<HardAwardItem>>::vector
                (avStack_80,(vector *)aDStack_e0);
      DRefPtr<DSpriteNode>::DRefPtr(aDStack_110);
      plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_110);
      pcVar16 = *(code **)(*plVar7 + 0x2e8);
      std::string::string(asStack_108,"UI/HardLevel/ChestPop");
      plVar7 = (long *)(*pcVar16)(plVar7,asStack_108);
      plVar7 = (long *)(**(code **)(*plVar7 + 0x130))(0x3f000000,0x3f000000);
      pcVar16 = *(code **)(*plVar7 + 0x108);
      plVar9 = (long *)std::__exception_ptr::exception_ptr::_M_get(aeStack_128);
      (**(code **)(*plVar9 + 0xd0))(aDStack_100,0x3f800000,0x3f000000);
      plVar9 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_110);
      (**(code **)(*plVar9 + 0xd0))(asStack_f8,0x3f000000,0);
      DVec2::operator-(aDStack_100,(DVec2 *)asStack_f8);
      DVec2::DVec2((DVec2 *)asStack_e8,30.0,-30.0);
      DVec2::operator+(aDStack_f0,(DVec2 *)asStack_e8);
      (*pcVar16)(plVar7,(string *)&local_68);
      std::string::~string(asStack_108);
      nop();
      plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get(aeStack_128);
      uVar8 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_110);
      (**(code **)(*plVar7 + 0x30))(plVar7,uVar8);
      DRefPtr<DAction>::DRefPtr((DRefPtr<DAction> *)asStack_e8);
      pDVar12 = (DAction *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_e8);
      pDVar12 = (DAction *)DAction::setDuration(pDVar12,0.5);
      FUN_03dac654((string *)&local_68,(DVec2 *)&local_88);
      DRefPtr<DSprite9SliceNode>::DRefPtr(aDStack_48,(DRefPtr *)aDStack_110);
      local_40 = this;
      FUN_03dabb20((function<bool(Sexy::Touch_const&)> *)&local_38,(string *)&local_68);
      DAction::onDone(pDVar12,(function *)&local_38);
      std::function<bool(Sexy::Touch_const&)>::~function
                ((function<bool(Sexy::Touch_const&)> *)&local_38);
      FUN_03dabf1c((string *)&local_68);
      puVar14 = (undefined8 *)FUN_03da85f4(*(undefined8 *)(this + 0x1a0),0);
      plVar7 = (long *)*puVar14;
      uVar8 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_e8);
      (**(code **)(*plVar7 + 0x298))(plVar7,uVar8);
      puVar14 = (undefined8 *)FUN_03da85f4(*(undefined8 *)(this + 0x1a0),0);
      plVar7 = (long *)*puVar14;
      pcVar16 = *(code **)(*plVar7 + 0x340);
      std::string::string((string *)&local_68,"STAROPEN");
      std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)&local_38);
      (*pcVar16)(plVar7,(string *)&local_68,(function<bool(Sexy::Touch_const&)> *)&local_38);
      std::function<bool(Sexy::Touch_const&)>::~function
                ((function<bool(Sexy::Touch_const&)> *)&local_38);
      std::string::~string((string *)&local_68);
      nop();
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)asStack_e8);
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_110);
      FUN_03dabf14((DVec2 *)&local_88);
      std::vector<HardAwardItem,std::allocator<HardAwardItem>>::~vector
                ((vector<HardAwardItem,std::allocator<HardAwardItem>> *)aDStack_e0);
      goto LAB_03db128c;
    }
    if (iVar1 != 0) {
      if (iVar1 == 2) {
        plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_130);
        (**(code **)(*plVar7 + 0x338))(plVar7,0);
        plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_160);
        (**(code **)(*plVar7 + 0x380))(plVar7,0);
        puVar14 = (undefined8 *)FUN_03da85f4(*(undefined8 *)(this + 0x1b8),0);
        plVar7 = (long *)*puVar14;
        pcVar16 = *(code **)(*plVar7 + 0x340);
        std::string::string((string *)&local_88,"STAROPEN");
        local_68 = this;
        DRefPtr<DSprite9SliceNode>::DRefPtr(aDStack_60,(DRefPtr *)aDStack_158);
        DRefPtr<DSprite9SliceNode>::DRefPtr(aDStack_58,(DRefPtr *)aeStack_128);
        DRefPtr<DSprite9SliceNode>::DRefPtr(aDStack_50,(DRefPtr *)aDStack_130);
        DRefPtr<DSprite9SliceNode>::DRefPtr(aDStack_48,(DRefPtr *)aDStack_160);
        FUN_03daac30((function<bool(Sexy::Touch_const&)> *)&local_38,(string *)&local_68);
        (*pcVar16)(plVar7,(DVec2 *)&local_88,(function<bool(Sexy::Touch_const&)> *)&local_38);
        std::function<bool(Sexy::Touch_const&)>::~function
                  ((function<bool(Sexy::Touch_const&)> *)&local_38);
        FUN_03daa100((string *)&local_68);
        std::string::~string((string *)&local_88);
        nop();
      }
      goto LAB_03db128c;
    }
  }
  (**(code **)(*(long *)this + 0x350))(this,0);
  DRefPtr<DScale>::DRefPtr((DRefPtr<DScale> *)&local_68);
  plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x60))(0);
  pDVar12 = (DAction *)(**(code **)(*plVar7 + 0x68))(0x3f800000);
  pDVar12 = (DAction *)DAction::setDuration(pDVar12,0.3);
  FUN_03da9a24(afStack_a8);
  pDVar12 = (DAction *)DAction::setTween(pDVar12,(function *)afStack_a8);
  FUN_03da996c((function<bool(Sexy::Touch_const&)> *)&local_38,this);
  DAction::onDone(pDVar12,(function *)&local_38);
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)&local_38);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_a8);
  plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_1b0);
  uVar8 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
  (**(code **)(*plVar7 + 0x298))(plVar7,uVar8);
  cVar5 = isYetHardLevel(this);
  if ((cVar5 == '\0') && (cVar5 = isLockLevel(this,false), cVar5 == '\0')) {
    *(undefined4 *)(this + 0x148) = 1;
    plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_158);
    uVar8 = std::__exception_ptr::exception_ptr::_M_get(aeStack_128);
    (**(code **)(*plVar7 + 0x390))(plVar7,uVar8);
  }
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)&local_68);
LAB_03db128c:
  pDVar13 = (DTransformNode *)
            std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  ScaleForAds(this,pDVar13);
  updateModeInfo(this);
  if (*(int *)(this + 0x1d0) == 0) {
    plVar7 = (long *)EASquared::Instance();
    pcVar16 = *(code **)(*plVar7 + 0x28);
    std::string::string((string *)&local_68,"EA2Mission");
    Sexy::Delegate1<EASquaredAdFinishedReason::EASquaredAdFinishedReason>::Delegate1
              ((DummyInit *)&local_38);
    (*pcVar16)(plVar7,(string *)&local_68,(function<bool(Sexy::Touch_const&)> *)&local_38,1,2,1);
    std::string::~string((string *)&local_68);
    nop();
  }
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_118);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_120);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aeStack_128);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_130);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aeStack_138);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_140);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_148);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_150);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_158);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_160);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_168);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_170);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_178);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_180);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aeStack_188);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aeStack_190);
  FUN_03daa038(&local_c8);
  std::string::~string(asStack_198);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_1a0);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_1b0);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_1b8);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

