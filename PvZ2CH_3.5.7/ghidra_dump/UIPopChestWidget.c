// Class: UIPopChestWidget


/* UIPopChestWidget::setEndCallBack(std::function<void (DTransformNode*)> const&) */

void __thiscall UIPopChestWidget::setEndCallBack(UIPopChestWidget *this,function *param_1)

{
  std::function<void(DTransformNode*)>::operator=
            ((function<void(DTransformNode*)> *)(this + 0x148),param_1);
  return;
}


/* UIPopChestWidget::~UIPopChestWidget() */

void __thiscall UIPopChestWidget::~UIPopChestWidget(UIPopChestWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_0698cab0;
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x148));
  DNodeWidget::~DNodeWidget((DNodeWidget *)this);
  return;
}


/* UIPopChestWidget::~UIPopChestWidget() */

void __thiscall UIPopChestWidget::~UIPopChestWidget(UIPopChestWidget *this)

{
  ~UIPopChestWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPopChestWidget::UIPopChestWidget() */

void __thiscall UIPopChestWidget::UIPopChestWidget(UIPopChestWidget *this)

{
  UIPopChestWidget *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DNodeWidget::DNodeWidget((DNodeWidget *)this);
  this[0x140] = (UIPopChestWidget)0x0;
  *(undefined ***)this = &PTR_GetClass_0698cab0;
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x148));
  local_10 = this;
  FUN_04c5d5e8((function<void(Sexy::Graphics*)> *)(this + 0x148),(string *)&local_10);
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
  std::string::string((string *)&local_10,"UI_Fragment_Material");
  DNodeWidget::loadGroup((DNodeWidget *)this,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIPopChestWidget::create(bool) */

UIPopChestWidget * UIPopChestWidget::create(bool param_1)

{
  UIPopChestWidget *this;
  
  this = ::operator_new(0x168);
  UIPopChestWidget(this);
  (**(code **)(*(long *)this + 0x310))(this);
  (**(code **)(*(long *)this + 0x318))(this);
  (**(code **)(*(long *)this + 0x338))(this,param_1);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPopChestWidget::Initialize(std::vector<S2C_BonusInfo, std::allocator<S2C_BonusInfo> >) */

void __thiscall UIPopChestWidget::Initialize(UIPopChestWidget *this,vector *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  code *pcVar4;
  DRefPtr<DLayer> aDStack_88 [8];
  DRefPtr<DMenu> aDStack_80 [8];
  DRefPtr<DAnimNode> aDStack_78 [8];
  DRefPtr<DButton> aDStack_70 [8];
  DVec2 aDStack_68 [8];
  DVec2 aDStack_60 [8];
  function<bool(Sexy::Touch_const&)> afStack_58 [32];
  UIPopChestWidget *local_38;
  vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> avStack_30 [24];
  DRefPtr<DSprite9SliceNode> aDStack_18 [8];
  DRefPtr<DSprite9SliceNode> aDStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DRefPtr<DLayer>::DRefPtr(aDStack_88);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_88);
  pcVar4 = *(code **)(*plVar1 + 0x210);
  (**(code **)(*(long *)this + 800))((string *)&local_38,this);
  plVar1 = (long *)(*pcVar4)(plVar1,(string *)&local_38);
  (**(code **)(*plVar1 + 0x270))(plVar1,0,0,0,0x80);
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_88);
  (**(code **)(*(long *)this + 0x368))(this,uVar2,1);
  DRefPtr<DMenu>::DRefPtr(aDStack_80);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_80);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x110))(0,0);
  (**(code **)(*plVar1 + 0x130))(0,0);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_88);
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_80);
  (**(code **)(*plVar1 + 0x30))(plVar1,uVar2);
  DRefPtr<DAnimNode>::DRefPtr(aDStack_78);
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_78);
  *(undefined8 *)(this + 0x138) = uVar2;
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_78);
  pcVar4 = *(code **)(*plVar1 + 0x2e8);
  std::string::string((string *)&local_38,"effects/ChestHardLevel_Chest");
  (*pcVar4)(plVar1,(string *)&local_38);
  std::string::~string((string *)&local_38);
  nop();
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_78);
  pcVar4 = *(code **)(*plVar1 + 0x340);
  std::string::string((string *)&local_38,"BOX_ON");
  FUN_04c5c9c0(afStack_58,this);
  (*pcVar4)(plVar1,(string *)&local_38,afStack_58);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
  std::string::~string((string *)&local_38);
  nop();
  DRefPtr<DButton>::DRefPtr(aDStack_70);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_70);
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_78);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x388))(plVar1,uVar2);
  pcVar4 = *(code **)(*plVar1 + 0x350);
  local_38 = this;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector(avStack_30,param_2);
  DRefPtr<DSprite9SliceNode>::DRefPtr(aDStack_18,(DRefPtr *)aDStack_88);
  DRefPtr<DSprite9SliceNode>::DRefPtr(aDStack_10,(DRefPtr *)aDStack_70);
  FUN_04c5db0c(afStack_58,(string *)&local_38);
  plVar1 = (long *)(*pcVar4)(plVar1,afStack_58);
  pcVar4 = *(code **)(*plVar1 + 0x210);
  (**(code **)(*(long *)this + 800))(aDStack_68,this);
  plVar1 = (long *)(*pcVar4)(plVar1,aDStack_68);
  pcVar4 = *(code **)(*plVar1 + 0x108);
  plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_88);
  (**(code **)(*plVar3 + 0xd0))(aDStack_60,0x3f000000,0x3f000000);
  (*pcVar4)(plVar1,aDStack_60);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
  FUN_04c5d9f0((string *)&local_38);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_78);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x130))(0x3f000000,0x3f000000);
  pcVar4 = *(code **)(*plVar1 + 0x108);
  plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_88);
  (**(code **)(*plVar3 + 0xd0))(aDStack_68,0x3f000000,0x3f000000);
  DVec2::DVec2(aDStack_60,270.0,80.0);
  DVec2::operator+(aDStack_68,aDStack_60);
  (*pcVar4)(plVar1,(string *)&local_38);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_80);
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_70);
  (**(code **)(*plVar1 + 0x28))(plVar1,uVar2,1);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPopChestWidget::Create(std::vector<S2C_BonusInfo, std::allocator<S2C_BonusInfo> >) */

void UIPopChestWidget::Create(vector *param_1)

{
  long lVar1;
  UIPopChestWidget *this;
  vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_04c5c400(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
  if (lVar1 == 0) {
    this = (UIPopChestWidget *)create(true);
  }
  else {
    this = ::operator_new(0x168);
    UIPopChestWidget(this);
    std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector(avStack_20,param_1);
    Initialize(this,avStack_20);
    std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector(avStack_20);
    (**(code **)(*(long *)this + 0x338))(this,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPopChestWidget::Initialize() */

void __thiscall UIPopChestWidget::Initialize(UIPopChestWidget *this)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  code *pcVar4;
  DRefPtr<DLayer> aDStack_a0 [8];
  DRefPtr<DMenu> aDStack_98 [8];
  DRefPtr<DAnimNode> aDStack_90 [8];
  DRefPtr<DButton> aDStack_88 [8];
  DVec2 aDStack_80 [8];
  DVec2 aDStack_78 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_70 [24];
  function<bool(Sexy::Touch_const&)> afStack_58 [32];
  UIPopChestWidget *local_38;
  vector<HardAwardItem,std::allocator<HardAwardItem>> avStack_30 [24];
  DRefPtr<DSprite9SliceNode> aDStack_18 [8];
  DRefPtr<DSprite9SliceNode> aDStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_70);
  DRefPtr<DLayer>::DRefPtr(aDStack_a0);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_a0);
  pcVar4 = *(code **)(*plVar1 + 0x210);
  (**(code **)(*(long *)this + 800))((string *)&local_38,this);
  plVar1 = (long *)(*pcVar4)(plVar1,(string *)&local_38);
  (**(code **)(*plVar1 + 0x270))(plVar1,0,0,0,0x80);
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_a0);
  (**(code **)(*(long *)this + 0x368))(this,uVar2,1);
  DRefPtr<DMenu>::DRefPtr(aDStack_98);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_98);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x110))(0,0);
  (**(code **)(*plVar1 + 0x130))(0,0);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_a0);
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_98);
  (**(code **)(*plVar1 + 0x30))(plVar1,uVar2);
  DRefPtr<DAnimNode>::DRefPtr(aDStack_90);
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_90);
  *(undefined8 *)(this + 0x138) = uVar2;
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_90);
  pcVar4 = *(code **)(*plVar1 + 0x2e8);
  std::string::string((string *)&local_38,"effects/ChestHardLevel_Chest");
  (*pcVar4)(plVar1,(string *)&local_38);
  std::string::~string((string *)&local_38);
  nop();
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_90);
  pcVar4 = *(code **)(*plVar1 + 0x340);
  std::string::string((string *)&local_38,"BOX_ON");
  FUN_04c5ca1c(afStack_58,this);
  (*pcVar4)(plVar1,(string *)&local_38,afStack_58);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
  std::string::~string((string *)&local_38);
  nop();
  DRefPtr<DButton>::DRefPtr(aDStack_88);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_88);
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_90);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x388))(plVar1,uVar2);
  pcVar4 = *(code **)(*plVar1 + 0x350);
  local_38 = this;
  std::vector<HardAwardItem,std::allocator<HardAwardItem>>::vector(avStack_30,(vector *)avStack_70);
  DRefPtr<DSprite9SliceNode>::DRefPtr(aDStack_18,(DRefPtr *)aDStack_a0);
  DRefPtr<DSprite9SliceNode>::DRefPtr(aDStack_10,(DRefPtr *)aDStack_88);
  FUN_04c5dbe0(afStack_58,(string *)&local_38);
  plVar1 = (long *)(*pcVar4)(plVar1,afStack_58);
  pcVar4 = *(code **)(*plVar1 + 0x210);
  (**(code **)(*(long *)this + 800))(aDStack_80,this);
  plVar1 = (long *)(*pcVar4)(plVar1,aDStack_80);
  pcVar4 = *(code **)(*plVar1 + 0x108);
  plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_a0);
  (**(code **)(*plVar3 + 0xd0))(aDStack_78,0x3f000000,0x3f000000);
  (*pcVar4)(plVar1,aDStack_78);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
  FUN_03dabe6c((string *)&local_38);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_90);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x130))(0x3f000000,0x3f000000);
  pcVar4 = *(code **)(*plVar1 + 0x108);
  plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_a0);
  (**(code **)(*plVar3 + 0xd0))(aDStack_80,0x3f000000,0x3f000000);
  DVec2::DVec2(aDStack_78,270.0,80.0);
  DVec2::operator+(aDStack_80,aDStack_78);
  (*pcVar4)(plVar1,(string *)&local_38);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_98);
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_88);
  (**(code **)(*plVar1 + 0x28))(plVar1,uVar2,1);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_88);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_90);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_98);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_a0);
  std::vector<HardAwardItem,std::allocator<HardAwardItem>>::~vector
            ((vector<HardAwardItem,std::allocator<HardAwardItem>> *)avStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

