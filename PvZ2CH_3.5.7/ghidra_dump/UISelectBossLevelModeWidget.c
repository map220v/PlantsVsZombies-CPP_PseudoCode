// Class: UISelectBossLevelModeWidget


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISelectBossLevelModeWidget::Initialize(WorldMap*, std::string const&,
   UISelectBossLevelModeWidget::State) */

void __thiscall
UISelectBossLevelModeWidget::Initialize
          (UISelectBossLevelModeWidget *this,undefined8 param_1,undefined8 param_2,int param_4)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_03db25b8(gGameStateMgr + 0x1eb4,0);
  FUN_03db25c0(gGameStateMgr + 0x1eb1,0);
  *(int *)(this + 0x148) = param_4;
  if (param_4 == 1) {
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


/* UISelectBossLevelModeWidget::isYetHardLevel() */

byte __thiscall UISelectBossLevelModeWidget::isYetHardLevel(UISelectBossLevelModeWidget *this)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = FUN_03db2754(*(undefined8 *)(*(long *)(this + 0x138) + 0x2f0));
  bVar1 = WorldMapUtils::WorldHasHardModule(*(uchar *)(lVar2 + 0x5c));
  return bVar1 ^ 1;
}


/* UISelectBossLevelModeWidget::isLockLevel() */

byte __thiscall UISelectBossLevelModeWidget::isLockLevel(UISelectBossLevelModeWidget *this)

{
  char cVar1;
  byte bVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  
  cVar1 = isYetHardLevel(this);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if ((this_01 != (PlayerInfo *)0x0) && (*(int *)(this + 0x148) == 0)) {
    if (cVar1 != '\0') {
      bVar2 = PlayerInfo::GetLevelCompleted(this_01,(string *)(this + 0x140));
      return bVar2 ^ 1;
    }
    bVar2 = PlayerInfo::GetHardLevelCompleted(this_01,(string *)(this + 0x140));
    return bVar2 ^ 1;
  }
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISelectBossLevelModeWidget::UISelectBossLevelModeWidget() */

void __thiscall
UISelectBossLevelModeWidget::UISelectBossLevelModeWidget(UISelectBossLevelModeWidget *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DNodeWidget::DNodeWidget((DNodeWidget *)this);
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined ***)this = &PTR_GetClass_06776b90;
  Set8BytesTo0(this + 0x140);
  *(undefined4 *)(this + 0x148) = 0;
  this[0x14c] = (UISelectBossLevelModeWidget)0x0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x158));
  std::string::string(asStack_10,"UI_BossLevel");
  DNodeWidget::loadGroup((DNodeWidget *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UI_HardLevel");
  DNodeWidget::loadGroup((DNodeWidget *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Effects_BossLevel");
  DNodeWidget::loadGroup((DNodeWidget *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UI_Profile_select");
  DNodeWidget::loadGroup((DNodeWidget *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"LevelImage_Dynamic");
  DNodeWidget::loadGroup((DNodeWidget *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UISelectBossLevelModeWidget::create(WorldMap*, std::string const&,
   UISelectBossLevelModeWidget::State) */

UISelectBossLevelModeWidget *
UISelectBossLevelModeWidget::create(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  UISelectBossLevelModeWidget *this;
  
  if (s_pWidgetHandler != (UISelectBossLevelModeWidget *)0x0) {
    return s_pWidgetHandler;
  }
  this = ::operator_new(0x170);
  UISelectBossLevelModeWidget(this);
  s_pWidgetHandler = this;
  (**(code **)(*(long *)this + 0x3a8))(this,param_1,param_2,param_3);
  (**(code **)(*(long *)this + 0x338))(this,1);
  return this;
}


/* UISelectBossLevelModeWidget::~UISelectBossLevelModeWidget() */

void __thiscall
UISelectBossLevelModeWidget::~UISelectBossLevelModeWidget(UISelectBossLevelModeWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06776b90;
  s_pWidgetHandler = 0;
  std::vector<DAnimNode*,std::allocator<DAnimNode*>>::~vector
            ((vector<DAnimNode*,std::allocator<DAnimNode*>> *)(this + 0x158));
  std::string::~string((string *)(this + 0x140));
  DNodeWidget::~DNodeWidget((DNodeWidget *)this);
  return;
}


/* UISelectBossLevelModeWidget::~UISelectBossLevelModeWidget() */

void __thiscall
UISelectBossLevelModeWidget::~UISelectBossLevelModeWidget(UISelectBossLevelModeWidget *this)

{
  ~UISelectBossLevelModeWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISelectBossLevelModeWidget::Initialize() */

void __thiscall UISelectBossLevelModeWidget::Initialize(UISelectBossLevelModeWidget *this)

{
  exception_ptr *this_00;
  byte bVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  RenderEffectDefinition *pRVar8;
  ulong uVar9;
  EffectAnimRig_EndLevelBox *this_01;
  DAction *pDVar10;
  undefined8 *puVar11;
  string *psVar12;
  bool bVar13;
  wstring *extraout_x1;
  code *pcVar14;
  ulong uVar15;
  DRefPtr<DLayer> aDStack_160 [8];
  DRefPtr<DSprite9SliceNode> aDStack_158 [8];
  string asStack_150 [8];
  DRefPtr<DSpriteNode> aDStack_148 [8];
  UISelectBossLevelModeWidget *local_140;
  string asStack_138 [8];
  DRefPtr<DStringNode> aDStack_130 [8];
  DRefPtr<DStringNode> aDStack_128 [8];
  DRefPtr<DMenu> aDStack_120 [8];
  DRefPtr<DSpriteNode> aDStack_118 [8];
  DRefPtr<DSpriteNode> aDStack_110 [8];
  DRefPtr<DButton> aDStack_108 [8];
  DRefPtr<DSpriteNode> aDStack_100 [8];
  DRefPtr<DSpriteNode> aDStack_f8 [8];
  DRefPtr<DButton> aDStack_f0 [8];
  DRefPtr<DLayer> aDStack_e8 [8];
  DRefPtr<DMenu> aDStack_e0 [8];
  DRefPtr<DAnimNode> aDStack_d8 [8];
  DRefPtr<DButton> aDStack_d0 [8];
  DVec2 aDStack_c8 [8];
  string asStack_c0 [8];
  string asStack_b8 [24];
  function<bool(Sexy::Touch_const&)> afStack_a0 [32];
  undefined8 local_80;
  undefined8 local_78;
  DVec2 aDStack_60 [8];
  DRefPtr<DSprite9SliceNode> aDStack_58 [8];
  DRefPtr<DSprite9SliceNode> aDStack_50 [8];
  DRefPtr<DSprite9SliceNode> aDStack_48 [8];
  UISelectBossLevelModeWidget *local_40;
  UISelectBossLevelModeWidget *local_38;
  vector<HardAwardItem,std::allocator<HardAwardItem>> avStack_30 [24];
  DRefPtr<DSprite9SliceNode> aDStack_18 [8];
  UISelectBossLevelModeWidget *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DRefPtr<DLayer>::DRefPtr(aDStack_160);
  plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_160);
  pcVar14 = *(code **)(*plVar4 + 0x210);
  (**(code **)(*(long *)this + 800))((string *)&local_38,this);
  plVar4 = (long *)(*pcVar14)(plVar4,(string *)&local_38);
  (**(code **)(*plVar4 + 0x270))(plVar4,0,0,0,0x80);
  uVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_160);
  (**(code **)(*(long *)this + 0x370))(this,uVar5);
  DRefPtr<DSprite9SliceNode>::DRefPtr(aDStack_158);
  plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_158);
  pcVar14 = *(code **)(*plVar4 + 0x2e8);
  std::string::string(asStack_b8,"UI/Dialog_Asset/bg_light_green");
  plVar4 = (long *)(*pcVar14)(plVar4,asStack_b8);
  pcVar14 = *(code **)(*plVar4 + 0x108);
  (**(code **)(*(long *)this + 800))(aDStack_60,this);
  DVec2::operator/(aDStack_60,2.0);
  plVar4 = (long *)(*pcVar14)(plVar4,(string *)&local_38);
  (**(code **)(*plVar4 + 0x138))(0,0,0x44480000,0x43fa0000);
  std::string::~string(asStack_b8);
  nop();
  uVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_158);
  (**(code **)(*(long *)this + 0x368))(this,uVar5,1);
  std::string::string(asStack_150,"egypt");
  nop();
  if (*(long *)(this + 0x138) != 0) {
    lVar6 = FUN_03db2754(*(undefined8 *)(*(long *)(this + 0x138) + 0x2f0));
    thunk_FUN_05475e00(asStack_150,lVar6 + 0x38);
  }
  DRefPtr<DSpriteNode>::DRefPtr(aDStack_148);
  plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_148);
  pcVar14 = *(code **)(*plVar4 + 0x2e8);
  FUN_031f5e7c(asStack_c0,"UI/BossLevel/",asStack_150);
  plVar4 = (long *)(*pcVar14)(plVar4,asStack_c0);
  pcVar14 = *(code **)(*plVar4 + 0x108);
  plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_158);
  (**(code **)(*plVar7 + 0xd0))(asStack_b8,0x3f000000,0x3f000000);
  DVec2::DVec2(aDStack_60,0.0,10.0);
  DVec2::operator+((DVec2 *)asStack_b8,aDStack_60);
  plVar4 = (long *)(*pcVar14)(plVar4,(string *)&local_38);
  (**(code **)(*plVar4 + 0x130))(0x3f000000,0x3f000000);
  std::string::~string(asStack_c0);
  plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_158);
  uVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_148);
  (**(code **)(*plVar4 + 0x30))(plVar4,uVar5);
  local_140 = this;
  uVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_148);
  bVar1 = isLockLevel(this);
  FUN_03db5604(&local_140,uVar5,bVar1 ^ 1);
  std::string::string(asStack_138,"Test");
  nop();
  cVar2 = FUN_0547419c(this + 0x140);
  bVar13 = SUB81(this + 0x140,0);
  if (cVar2 == '\0') {
    psVar12 = (string *)Sexy::LazySingleton<LevelUtils>::GetInstance();
    LevelUtils::LoadLevelDefinition(psVar12,bVar13);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_c0);
    Sexy::UTF8StringToSexyString((string *)(lVar6 + 0x10));
    TodStringTranslate((wstring *)aDStack_60);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_c0);
    TodReplaceNumberString((wstring *)&local_38,L"{LEVEL_NUMBER}",*(int *)(lVar6 + 0x30));
    FUN_05476c50((string *)&local_38);
    FUN_05476c50(aDStack_60);
    Sexy::SexyStringToUTF8String((Sexy *)asStack_b8,extraout_x1);
    FUN_05474278(asStack_138,(string *)&local_38);
    std::string::~string((string *)&local_38);
    FUN_05476c50(asStack_b8);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_c0);
  }
  DRefPtr<DStringNode>::DRefPtr(aDStack_130);
  plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_130);
  uVar5 = FUN_0547429c(asStack_138);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x338))(plVar4,uVar5);
  pcVar14 = *(code **)(*plVar4 + 0x340);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_40_ThickOutline);
  plVar4 = (long *)(*pcVar14)(plVar4,uVar5);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x350))(plVar4,1);
  pcVar14 = *(code **)(*plVar4 + 0x108);
  plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_158);
  (**(code **)(*plVar7 + 0xd0))(asStack_b8,0x3f000000,0);
  DVec2::DVec2(aDStack_60,3.0,11.0);
  DVec2::operator+((DVec2 *)asStack_b8,aDStack_60);
  plVar4 = (long *)(*pcVar14)(plVar4,(string *)&local_38);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x138))(0,0,0x44160000,0x42700000);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x130))(0x3f000000,0);
  (**(code **)(*plVar4 + 0x270))(plVar4,0,0,0,0x80);
  plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_158);
  uVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_130);
  (**(code **)(*plVar4 + 0x30))(plVar4,uVar5);
  DRefPtr<DStringNode>::DRefPtr(aDStack_128);
  plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_128);
  uVar5 = FUN_0547429c(asStack_138);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x338))(plVar4,uVar5);
  pcVar14 = *(code **)(*plVar4 + 0x340);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_40_ThickOutline);
  plVar4 = (long *)(*pcVar14)(plVar4,uVar5);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x350))(plVar4,1);
  pcVar14 = *(code **)(*plVar4 + 0x108);
  plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_158);
  (**(code **)(*plVar7 + 0xd0))(asStack_b8,0x3f000000,0);
  DVec2::DVec2(aDStack_60,0.0,8.0);
  DVec2::operator+((DVec2 *)asStack_b8,aDStack_60);
  plVar4 = (long *)(*pcVar14)(plVar4,(string *)&local_38);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x138))(0,0,0x44160000,0x42700000);
  (**(code **)(*plVar4 + 0x130))(0x3f000000,0);
  plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_158);
  uVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_128);
  (**(code **)(*plVar4 + 0x30))(plVar4,uVar5);
  DRefPtr<DMenu>::DRefPtr(aDStack_120);
  plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_120);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x110))(0,0);
  (**(code **)(*plVar4 + 0x130))(0,0);
  plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_158);
  uVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_120);
  (**(code **)(*plVar4 + 0x28))(plVar4,uVar5,1);
  DRefPtr<DSpriteNode>::DRefPtr(aDStack_118);
  plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_118);
  pcVar14 = *(code **)(*plVar4 + 0x2e8);
  std::string::string((string *)&local_38,"UI/Dialog_Asset/close_btn");
  (*pcVar14)(plVar4,(string *)&local_38);
  std::string::~string((string *)&local_38);
  nop();
  DRefPtr<DSpriteNode>::DRefPtr(aDStack_110);
  plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_110);
  pcVar14 = *(code **)(*plVar4 + 0x2e8);
  std::string::string((string *)&local_38,"UI/Dialog_Asset/close_down");
  (*pcVar14)(plVar4,(string *)&local_38);
  std::string::~string((string *)&local_38);
  nop();
  DRefPtr<DButton>::DRefPtr(aDStack_108);
  plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_108);
  uVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_118);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x388))(plVar4,uVar5);
  uVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_110);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x390))(plVar4,uVar5);
  pcVar14 = *(code **)(*plVar4 + 0x350);
  FUN_03db31e4((function<bool(Sexy::Touch_const&)> *)&local_80,this);
  plVar4 = (long *)(*pcVar14)(plVar4,(function<bool(Sexy::Touch_const&)> *)&local_80);
  pcVar14 = *(code **)(*plVar4 + 0x108);
  plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_158);
  (**(code **)(*plVar7 + 0xd0))(aDStack_c8,0x3f800000,0);
  plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_108);
  (**(code **)(*plVar7 + 0xd0))(asStack_c0,0x3f800000,0);
  DVec2::operator-(aDStack_c8,(DVec2 *)asStack_c0);
  DVec2::DVec2(aDStack_60,0.0,22.0);
  DVec2::operator-((DVec2 *)asStack_b8,aDStack_60);
  (*pcVar14)(plVar4,(string *)&local_38);
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)&local_80);
  DRefPtr<DSpriteNode>::DRefPtr(aDStack_100);
  plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_100);
  pcVar14 = *(code **)(*plVar4 + 0x2e8);
  std::string::string((string *)&local_38,"UI/HardLevel/StartFight");
  (*pcVar14)(plVar4,(string *)&local_38);
  std::string::~string((string *)&local_38);
  nop();
  DRefPtr<DSpriteNode>::DRefPtr(aDStack_f8);
  plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_f8);
  pcVar14 = *(code **)(*plVar4 + 0x2e8);
  std::string::string((string *)&local_38,"UI/HardLevel/StartFight");
  plVar4 = (long *)(*pcVar14)(plVar4,(string *)&local_38);
  pcVar14 = *(code **)(*plVar4 + 0x2d8);
  pRVar8 = CachedResourcePtr::operator_cast_to_RenderEffectDefinition_
                     ((CachedResourcePtr *)&DAT_06ad9a80);
  (*pcVar14)(plVar4,pRVar8);
  std::string::~string((string *)&local_38);
  nop();
  DRefPtr<DButton>::DRefPtr(aDStack_f0);
  plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_f0);
  uVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_100);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x388))(plVar4,uVar5);
  uVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_f8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x3a0))(plVar4,uVar5);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x3a8))(plVar4,1);
  pcVar14 = *(code **)(*plVar4 + 0x350);
  FUN_03db3240((function<bool(Sexy::Touch_const&)> *)&local_80,this);
  plVar4 = (long *)(*pcVar14)(plVar4,(function<bool(Sexy::Touch_const&)> *)&local_80);
  pcVar14 = *(code **)(*plVar4 + 0x108);
  plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_158);
  (**(code **)(*plVar7 + 0xd0))((string *)&local_38,0x3f000000,0x3f800000);
  (*pcVar14)(plVar4,(string *)&local_38);
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)&local_80);
  plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_120);
  pcVar14 = *(code **)(*plVar4 + 0x378);
  local_80 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_108);
  local_78 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_f0);
  std::vector<DButton*,std::allocator<DButton*>>::vector
            ((vector<DButton*,std::allocator<DButton*>> *)&local_38,
             (function<bool(Sexy::Touch_const&)> *)&local_80,2,aDStack_60);
  (*pcVar14)(plVar4,(string *)&local_38);
  std::vector<DButton*,std::allocator<DButton*>>::~vector
            ((vector<DButton*,std::allocator<DButton*>> *)&local_38);
  DRefPtr<DLayer>::DRefPtr(aDStack_e8);
  plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_e8);
  pcVar14 = *(code **)(*plVar4 + 0x210);
  (**(code **)(*(long *)this + 800))((string *)&local_38,this);
  plVar4 = (long *)(*pcVar14)(plVar4,(string *)&local_38);
  (**(code **)(*plVar4 + 0x270))(plVar4,0,0,0,0);
  uVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_e8);
  (**(code **)(*(long *)this + 0x368))(this,uVar5,2);
  DRefPtr<DMenu>::DRefPtr(aDStack_e0);
  plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_e0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x110))(0,0);
  (**(code **)(*plVar4 + 0x130))(0,0);
  plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_e8);
  uVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_e0);
  (**(code **)(*plVar4 + 0x30))(plVar4,uVar5);
  DRefPtr<DAnimNode>::DRefPtr(aDStack_d8);
  uVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_d8);
  *(undefined8 *)(this + 0x150) = uVar5;
  plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_d8);
  pcVar14 = *(code **)(*plVar4 + 0x2e8);
  std::string::string((string *)&local_38,"effects/BossLevel_Chest");
  (*pcVar14)(plVar4,(string *)&local_38);
  std::string::~string((string *)&local_38);
  nop();
  plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_d8);
  pcVar14 = *(code **)(*plVar4 + 0x348);
  std::string::string((string *)&local_38,"NORMALLOOP");
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)&local_80);
  (*pcVar14)(plVar4,(string *)&local_38,(function<bool(Sexy::Touch_const&)> *)&local_80);
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)&local_80);
  std::string::~string((string *)&local_38);
  nop();
  DRefPtr<DButton>::DRefPtr(aDStack_d0);
  plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_d0);
  uVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_d8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x388))(plVar4,uVar5);
  pcVar14 = *(code **)(*plVar4 + 0x210);
  (**(code **)(*(long *)this + 800))(aDStack_60,this);
  plVar4 = (long *)(*pcVar14)(plVar4,aDStack_60);
  pcVar14 = *(code **)(*plVar4 + 0x108);
  plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_e8);
  (**(code **)(*plVar7 + 0xd0))((string *)&local_38,0x3f000000,0x3f000000);
  (*pcVar14)(plVar4,(string *)&local_38);
  plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_d0);
  (**(code **)(*plVar4 + 0x198))(plVar4,1);
  plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_d8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x130))(0x3f000000,0x3f000000);
  pcVar14 = *(code **)(*plVar4 + 0x108);
  plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_148);
  (**(code **)(*plVar7 + 0xd0))((string *)&local_38,0xbe800000,0x3e800000);
  (*pcVar14)(plVar4,(string *)&local_38);
  plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_d0);
  (**(code **)(*plVar4 + 0x338))(plVar4,0);
  plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_d0);
  (**(code **)(*plVar4 + 0xd8))(plVar4,0);
  plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_e0);
  uVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_d0);
  (**(code **)(*plVar4 + 0x28))(plVar4,uVar5,1);
  bVar3 = std::operator==(asStack_150,"renai");
  if ((bVar3) || (bVar3 = std::operator==(asStack_150,"heian"), bVar3)) {
    plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_f0);
    (**(code **)(*plVar4 + 0x338))(plVar4,0);
    uVar15 = 0;
    while( true ) {
      uVar5 = *(undefined8 *)(this + 0x158);
      uVar9 = FUN_03db2758(uVar5,*(undefined8 *)(this + 0x160));
      if (uVar9 <= uVar15) break;
      puVar11 = (undefined8 *)FUN_03db2764(uVar5,uVar15);
      (**(code **)(*(long *)*puVar11 + 0xd8))((long *)*puVar11,0);
      uVar15 = uVar15 + 1;
    }
    plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_d8);
    (**(code **)(*plVar4 + 0xd8))(plVar4,0);
  }
  local_38 = this;
  if (*(int *)(this + 0x148) == 0) {
    (**(code **)(*(long *)this + 0x350))(this);
    DRefPtr<DScale>::DRefPtr((DRefPtr<DScale> *)aDStack_60);
    plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_60);
    plVar4 = (long *)(**(code **)(*plVar4 + 0x60))(0);
    pDVar10 = (DAction *)(**(code **)(*plVar4 + 0x68))(0x3f800000);
    pDVar10 = (DAction *)DAction::setDuration(pDVar10,0.3);
    FUN_03db329c(afStack_a0);
    pDVar10 = (DAction *)DAction::setTween(pDVar10,(function *)afStack_a0);
    DRefPtr<DSprite9SliceNode>::DRefPtr
              ((DRefPtr<DSprite9SliceNode> *)avStack_30,(DRefPtr *)aDStack_d0);
    FUN_03db3ab0((function<bool(Sexy::Touch_const&)> *)&local_80,(string *)&local_38);
    DAction::onDone(pDVar10,(function *)&local_80);
    std::function<bool(Sexy::Touch_const&)>::~function
              ((function<bool(Sexy::Touch_const&)> *)&local_80);
    FUN_03553580((string *)&local_38);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_a0);
    plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_158);
    uVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_60);
    (**(code **)(*plVar4 + 0x298))(plVar4,uVar5);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_60);
  }
  else {
    plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_f0);
    (**(code **)(*plVar4 + 0x338))(plVar4,0);
    plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_120);
    (**(code **)(*plVar4 + 0x380))(plVar4,0);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_b8);
    this_01 = ::operator_new(0x298);
    EffectAnimRig_EndLevelBox::EffectAnimRig_EndLevelBox(this_01);
    EffectAnimRig_EndLevelBox::initHardAwardItems((string *)this_01,bVar13);
    EffectAnimRig_EndLevelBox::getHardLevelAward();
    std::vector<HardAwardItem,std::allocator<HardAwardItem>>::operator=
              ((vector<HardAwardItem,std::allocator<HardAwardItem>> *)asStack_b8,(vector *)&local_38
              );
    std::vector<HardAwardItem,std::allocator<HardAwardItem>>::~vector
              ((vector<HardAwardItem,std::allocator<HardAwardItem>> *)&local_38);
    (**(code **)(*(long *)this_01 + 0x18))(this_01);
    plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_d0);
    pcVar14 = *(code **)(*plVar4 + 0x350);
    std::vector<HardAwardItem,std::allocator<HardAwardItem>>::vector
              (avStack_30,(vector *)asStack_b8);
    DRefPtr<DSprite9SliceNode>::DRefPtr(aDStack_18,(DRefPtr *)aDStack_e8);
    DRefPtr<DSprite9SliceNode>::DRefPtr
              ((DRefPtr<DSprite9SliceNode> *)&local_10,(DRefPtr *)aDStack_d0);
    FUN_03db4e10((function<bool(Sexy::Touch_const&)> *)&local_80,(string *)&local_38);
    (*pcVar14)(plVar4,(function<bool(Sexy::Touch_const&)> *)&local_80);
    std::function<bool(Sexy::Touch_const&)>::~function
              ((function<bool(Sexy::Touch_const&)> *)&local_80);
    FUN_03dabe6c((string *)&local_38);
    DRefPtr<DSprite9SliceNode>::DRefPtr
              ((DRefPtr<DSprite9SliceNode> *)aDStack_60,(DRefPtr *)aDStack_d0);
    DRefPtr<DSprite9SliceNode>::DRefPtr(aDStack_58,(DRefPtr *)aDStack_e8);
    DRefPtr<DSprite9SliceNode>::DRefPtr(aDStack_50,(DRefPtr *)aDStack_148);
    DRefPtr<DSprite9SliceNode>::DRefPtr(aDStack_48,(DRefPtr *)aDStack_d8);
    local_40 = this;
    DRefPtr<DAction>::DRefPtr((DRefPtr<DAction> *)aDStack_c8);
    pDVar10 = (DAction *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_c8);
    pDVar10 = (DAction *)DAction::setDuration(pDVar10,0.5);
    FUN_03db3edc((string *)&local_38,aDStack_60);
    local_10 = this;
    FUN_03db460c((function<bool(Sexy::Touch_const&)> *)&local_80,(string *)&local_38);
    DAction::onDone(pDVar10,(function *)&local_80);
    std::function<bool(Sexy::Touch_const&)>::~function
              ((function<bool(Sexy::Touch_const&)> *)&local_80);
    thunk_FUN_03db3664((string *)&local_38);
    DRefPtr<DAction>::DRefPtr((DRefPtr<DAction> *)asStack_c0);
    pDVar10 = (DAction *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_c0);
    pDVar10 = (DAction *)DAction::setDuration(pDVar10,0.5);
    FUN_03db3edc((string *)&local_38,aDStack_60);
    FUN_03db450c((function<bool(Sexy::Touch_const&)> *)&local_80,(string *)&local_38);
    DAction::onDone(pDVar10,(function *)&local_80);
    std::function<bool(Sexy::Touch_const&)>::~function
              ((function<bool(Sexy::Touch_const&)> *)&local_80);
    thunk_FUN_03db3664((string *)&local_38);
    puVar11 = (undefined8 *)FUN_03db2764(*(undefined8 *)(this + 0x158),0);
    plVar4 = (long *)*puVar11;
    pcVar14 = *(code **)(*plVar4 + 0x298);
    cVar2 = isYetHardLevel(this);
    this_00 = (exception_ptr *)asStack_c0;
    if (cVar2 == '\0') {
      this_00 = (exception_ptr *)aDStack_c8;
    }
    uVar5 = std::__exception_ptr::exception_ptr::_M_get(this_00);
    (*pcVar14)(plVar4,uVar5);
    puVar11 = (undefined8 *)FUN_03db2764(*(undefined8 *)(this + 0x158),0);
    plVar4 = (long *)*puVar11;
    pcVar14 = *(code **)(*plVar4 + 0x340);
    std::string::string((string *)&local_38,"STARON");
    std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)&local_80);
    (*pcVar14)(plVar4,(string *)&local_38,(function<bool(Sexy::Touch_const&)> *)&local_80);
    std::function<bool(Sexy::Touch_const&)>::~function
              ((function<bool(Sexy::Touch_const&)> *)&local_80);
    std::string::~string((string *)&local_38);
    nop();
    (**(code **)(*(long *)this + 0x350))(this,0);
    plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_d0);
    (**(code **)(*plVar4 + 0xd8))(plVar4,1);
    DRefPtr<DAction>::DRefPtr((DRefPtr<DAction> *)&local_38);
    pDVar10 = (DAction *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    pDVar10 = (DAction *)DAction::setDuration(pDVar10,0.3);
    FUN_03db3344((function<bool(Sexy::Touch_const&)> *)&local_80,this);
    DAction::onDone(pDVar10,(function *)&local_80);
    std::function<bool(Sexy::Touch_const&)>::~function
              ((function<bool(Sexy::Touch_const&)> *)&local_80);
    plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_158);
    uVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    (**(code **)(*plVar4 + 0x298))(plVar4,uVar5);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)&local_38);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)asStack_c0);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_c8);
    FUN_03db3664(aDStack_60);
    std::vector<HardAwardItem,std::allocator<HardAwardItem>>::~vector
              ((vector<HardAwardItem,std::allocator<HardAwardItem>> *)asStack_b8);
  }
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_d0);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_d8);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_e0);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_e8);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_f0);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_f8);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_100);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_108);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_110);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_118);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_120);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_128);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_130);
  std::string::~string(asStack_138);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_148);
  std::string::~string(asStack_150);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_158);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_160);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

