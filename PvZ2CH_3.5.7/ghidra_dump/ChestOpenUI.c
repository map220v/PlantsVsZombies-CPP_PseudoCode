// Class: ChestOpenUI


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChestOpenUI::Initialize() */

void __thiscall ChestOpenUI::Initialize(ChestOpenUI *this)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  DTransformNode *this_00;
  code *pcVar4;
  DRefPtr<DLayer> aDStack_88 [8];
  DRefPtr<DMenu> aDStack_80 [8];
  DRefPtr<DChestAnimNode> aDStack_78 [8];
  DRefPtr<DButton> aDStack_70 [8];
  DRefPtr<DButton> aDStack_68 [8];
  DRefPtr<DSpriteNode> aDStack_60 [8];
  DVec2 aDStack_58 [8];
  string asStack_50 [8];
  ChestOpenUI *local_48;
  DRefPtr<DSprite9SliceNode> aDStack_40 [8];
  DRefPtr<DSprite9SliceNode> aDStack_38 [8];
  DRefPtr<DSprite9SliceNode> aDStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DRefPtr<DLayer>::DRefPtr(aDStack_88);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_88);
  pcVar4 = *(code **)(*plVar1 + 0x210);
  (**(code **)(*(long *)this + 800))((string *)&local_48,this);
  plVar1 = (long *)(*pcVar4)(plVar1,(string *)&local_48);
  (**(code **)(*plVar1 + 0x270))(plVar1,0,0,0,0x80);
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_88);
  (**(code **)(*(long *)this + 0x368))(this,uVar2,2);
  DRefPtr<DMenu>::DRefPtr(aDStack_80);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_80);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x110))(0,0);
  (**(code **)(*plVar1 + 0x130))(0,0);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_88);
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_80);
  (**(code **)(*plVar1 + 0x30))(plVar1,uVar2);
  DRefPtr<DChestAnimNode>::DRefPtr(aDStack_78);
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_78);
  *(undefined8 *)(this + 0x138) = uVar2;
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_78);
  pcVar4 = *(code **)(*plVar1 + 0x2e8);
  std::string::string((string *)&local_48,"UI/LuckyChest/LuckyChest");
  (*pcVar4)(plVar1,(string *)&local_48);
  std::string::~string((string *)&local_48);
  nop();
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_78);
  pcVar4 = *(code **)(*plVar1 + 0x340);
  std::string::string(asStack_50,"PT_00");
  local_48 = this;
  DRefPtr<DSprite9SliceNode>::DRefPtr(aDStack_40,(DRefPtr *)aDStack_88);
  FUN_04eb1150(afStack_28,(string *)&local_48);
  (*pcVar4)(plVar1,asStack_50,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  FUN_03553580((string *)&local_48);
  std::string::~string(asStack_50);
  nop();
  DRefPtr<DButton>::DRefPtr(aDStack_70);
  DRefPtr<DButton>::DRefPtr(aDStack_68);
  *(undefined4 *)(this + 0x1a4) = 0;
  *(undefined4 *)(this + 0x19c) = 0;
  *(undefined4 *)(this + 0x198) = 0;
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_70);
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_78);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x388))(plVar1,uVar2);
  pcVar4 = *(code **)(*plVar1 + 0x350);
  local_48 = this;
  DRefPtr<DSprite9SliceNode>::DRefPtr(aDStack_40,(DRefPtr *)aDStack_88);
  DRefPtr<DSprite9SliceNode>::DRefPtr(aDStack_38,(DRefPtr *)aDStack_70);
  DRefPtr<DSprite9SliceNode>::DRefPtr(aDStack_30,(DRefPtr *)aDStack_68);
  FUN_04eb2520(afStack_28,(string *)&local_48);
  plVar1 = (long *)(*pcVar4)(plVar1,afStack_28);
  pcVar4 = *(code **)(*plVar1 + 0x210);
  (**(code **)(*(long *)this + 800))(aDStack_58,this);
  plVar1 = (long *)(*pcVar4)(plVar1,aDStack_58);
  pcVar4 = *(code **)(*plVar1 + 0x108);
  plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_88);
  (**(code **)(*plVar3 + 0xd0))(asStack_50,0x3f000000,0x3f000000);
  (*pcVar4)(plVar1,asStack_50);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  FUN_04eb1228((string *)&local_48);
  DRefPtr<DSpriteNode>::DRefPtr(aDStack_60);
  this_00 = (DTransformNode *)
            std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_60);
  std::string::string(asStack_50,"graveyardNormalNode");
  plVar1 = (long *)DTransformNode::setName(this_00,asStack_50);
  pcVar4 = *(code **)(*plVar1 + 0x2e8);
  std::string::string((string *)&local_48,"IMAGE_UI_LUCKYCHEST_LUCKYCHEST_SKIP");
  plVar1 = (long *)(*pcVar4)(plVar1,(string *)&local_48);
  (**(code **)(*plVar1 + 0x110))(0,0);
  std::string::~string((string *)&local_48);
  nop();
  std::string::~string(asStack_50);
  nop();
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_68);
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_60);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x388))(plVar1,uVar2);
  pcVar4 = *(code **)(*plVar1 + 0x350);
  local_48 = this;
  DRefPtr<DSprite9SliceNode>::DRefPtr(aDStack_40,(DRefPtr *)aDStack_88);
  DRefPtr<DSprite9SliceNode>::DRefPtr(aDStack_38,(DRefPtr *)aDStack_70);
  DRefPtr<DSprite9SliceNode>::DRefPtr(aDStack_30,(DRefPtr *)aDStack_68);
  FUN_04eb25f4(afStack_28,(string *)&local_48);
  plVar1 = (long *)(*pcVar4)(plVar1,afStack_28);
  pcVar4 = *(code **)(*plVar1 + 0x108);
  plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_88);
  (**(code **)(*plVar3 + 0xd0))(asStack_50,0x3f666666,0x3dcccccd);
  (*pcVar4)(plVar1,asStack_50);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  FUN_04eb1228((string *)&local_48);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_78);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x130))(0x3f000000,0x3f000000);
  pcVar4 = *(code **)(*plVar1 + 0x108);
  plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_88);
  (**(code **)(*plVar3 + 0xd0))(aDStack_58,0x3f000000,0x3ecccccd);
  DVec2::DVec2((DVec2 *)asStack_50,240.0,70.0);
  DVec2::operator+(aDStack_58,(DVec2 *)asStack_50);
  (*pcVar4)(plVar1,(string *)&local_48);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_80);
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_68);
  (**(code **)(*plVar1 + 0x28))(plVar1,uVar2,2);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_80);
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_70);
  (**(code **)(*plVar1 + 0x28))(plVar1,uVar2,1);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_60);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_68);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_70);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_78);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_80);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ChestOpenUI::setEndCallBack(std::function<void (DTransformNode*)> const&) */

void __thiscall ChestOpenUI::setEndCallBack(ChestOpenUI *this,function *param_1)

{
  std::function<void(DTransformNode*)>::operator=
            ((function<void(DTransformNode*)> *)(this + 0x160),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChestOpenUI::~ChestOpenUI() */

void __thiscall ChestOpenUI::~ChestOpenUI(ChestOpenUI *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_069f3030;
  pLVar1 = gLawnApp;
  s_pWidgetHandler = 0;
  std::string::string(asStack_10,"UI_HardLevel");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Profile_select");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_SeedPackets");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_SeedPackets_2");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"LevelImage_Dynamic");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Effects_HardLevel");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Effects_ChestHardLevel");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Effects_AvatarChest");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"redpacket");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"EndLevelAward");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_NewAvatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_Plant");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_LuckyChest");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Effects_LuckyChest");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x180));
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x160));
  std::
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::~vector((vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
             *)(this + 0x140));
  DNodeWidget::~DNodeWidget((DNodeWidget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ChestOpenUI::~ChestOpenUI() */

void __thiscall ChestOpenUI::~ChestOpenUI(ChestOpenUI *this)

{
  ~ChestOpenUI(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChestOpenUI::ChestOpenUI(std::vector<std::vector<S2C_BonusInfo, std::allocator<S2C_BonusInfo> >,
   std::allocator<std::vector<S2C_BonusInfo, std::allocator<S2C_BonusInfo> > > > const&,
   std::vector<int, std::allocator<int> >) */

void __thiscall ChestOpenUI::ChestOpenUI(ChestOpenUI *this,vector *param_1,vector *param_3)

{
  ChestOpenUI *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DNodeWidget::DNodeWidget((DNodeWidget *)this);
  *(undefined ***)this = &PTR_GetClass_069f3030;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x140));
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x160));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x180));
  std::
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::operator=((vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
               *)(this + 0x140),param_1);
  this[0x158] = (ChestOpenUI)0x0;
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x180),param_3);
  *(undefined4 *)(this + 0x19c) = 0;
  *(undefined4 *)(this + 0x1a0) = 0;
  *(undefined4 *)(this + 0x1a4) = 0;
  *(undefined4 *)(this + 0x198) = 0;
  local_10 = this;
  FUN_04eb4670((function<void(Sexy::Graphics*)> *)(this + 0x160),(string *)&local_10);
  std::string::string((string *)&local_10,"UI_HardLevel");
  DNodeWidget::loadGroup((DNodeWidget *)this,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  std::string::string((string *)&local_10,"UI_Profile_select");
  DNodeWidget::loadGroup((DNodeWidget *)this,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  std::string::string((string *)&local_10,"UI_SeedPackets");
  DNodeWidget::loadGroup((DNodeWidget *)this,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  std::string::string((string *)&local_10,"UI_SeedPackets_2");
  DNodeWidget::loadGroup((DNodeWidget *)this,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  std::string::string((string *)&local_10,"LevelImage_Dynamic");
  DNodeWidget::loadGroup((DNodeWidget *)this,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  std::string::string((string *)&local_10,"Effects_HardLevel");
  DNodeWidget::loadGroup((DNodeWidget *)this,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  std::string::string((string *)&local_10,"Effects_ChestHardLevel");
  DNodeWidget::loadGroup((DNodeWidget *)this,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  std::string::string((string *)&local_10,"Effects_AvatarChest");
  DNodeWidget::loadGroup((DNodeWidget *)this,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  std::string::string((string *)&local_10,"redpacket");
  DNodeWidget::loadGroup((DNodeWidget *)this,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  std::string::string((string *)&local_10,"EndLevelAward");
  DNodeWidget::loadGroup((DNodeWidget *)this,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  std::string::string((string *)&local_10,"UI_Fragment_Pieces");
  DNodeWidget::loadGroup((DNodeWidget *)this,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  std::string::string((string *)&local_10,"UI_Fragment_Avatar");
  DNodeWidget::loadGroup((DNodeWidget *)this,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  std::string::string((string *)&local_10,"UI_Accessory_Dev2");
  DNodeWidget::loadGroup((DNodeWidget *)this,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  std::string::string((string *)&local_10,"UI_NewAvatar");
  DNodeWidget::loadGroup((DNodeWidget *)this,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  std::string::string((string *)&local_10,"UI_HeadShot_Plant");
  DNodeWidget::loadGroup((DNodeWidget *)this,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  std::string::string((string *)&local_10,"UI_LuckyChest");
  DNodeWidget::loadGroup((DNodeWidget *)this,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  std::string::string((string *)&local_10,"Effects_LuckyChest");
  DNodeWidget::loadGroup((DNodeWidget *)this,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChestOpenUI::create(std::vector<std::vector<S2C_BonusInfo, std::allocator<S2C_BonusInfo> >,
   std::allocator<std::vector<S2C_BonusInfo, std::allocator<S2C_BonusInfo> > > > const&,
   std::vector<int, std::allocator<int> >) */

void ChestOpenUI::create(undefined8 param_1,vector *param_2)

{
  ChestOpenUI *pCVar1;
  vector<int,std::allocator<int>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = s_pWidgetHandler;
  if (s_pWidgetHandler == (ChestOpenUI *)0x0) {
    std::vector<int,std::allocator<int>>::vector(avStack_20,param_2);
    pCVar1 = ::operator_new(0x1a8);
    ChestOpenUI(pCVar1,param_1,avStack_20);
    std::vector<int,std::allocator<int>>::~vector(avStack_20);
    s_pWidgetHandler = pCVar1;
    (**(code **)(*(long *)pCVar1 + 0x310))(pCVar1);
    (**(code **)(*(long *)pCVar1 + 0x338))(pCVar1,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pCVar1);
}

