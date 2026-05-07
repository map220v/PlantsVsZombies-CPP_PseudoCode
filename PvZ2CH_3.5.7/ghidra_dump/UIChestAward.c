// Class: UIChestAward


/* UIChestAward::setEndCallBack(std::function<void (DTransformNode*)> const&) */

void __thiscall UIChestAward::setEndCallBack(UIChestAward *this,function *param_1)

{
  std::function<void(DTransformNode*)>::operator=
            ((function<void(DTransformNode*)> *)(this + 0x168),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIChestAward::Initialize() */

void __thiscall UIChestAward::Initialize(UIChestAward *this)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  code *pcVar4;
  DRefPtr<DLayer> aDStack_70 [8];
  DRefPtr<DMenu> aDStack_68 [8];
  DRefPtr<DAnimNode> aDStack_60 [8];
  DRefPtr<DButton> aDStack_58 [8];
  DVec2 aDStack_50 [8];
  DVec2 aDStack_48 [8];
  UIChestAward *local_40;
  DRefPtr<DSprite9SliceNode> aDStack_38 [8];
  DRefPtr<DSprite9SliceNode> aDStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DRefPtr<DLayer>::DRefPtr(aDStack_70);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_70);
  pcVar4 = *(code **)(*plVar1 + 0x210);
  (**(code **)(*(long *)this + 800))((string *)&local_40,this);
  plVar1 = (long *)(*pcVar4)(plVar1,(string *)&local_40);
  (**(code **)(*plVar1 + 0x270))(plVar1,0,0,0,0x80);
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_70);
  (**(code **)(*(long *)this + 0x368))(this,uVar2,2);
  DRefPtr<DMenu>::DRefPtr(aDStack_68);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_68);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x110))(0,0);
  (**(code **)(*plVar1 + 0x130))(0,0);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_70);
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_68);
  (**(code **)(*plVar1 + 0x30))(plVar1,uVar2);
  DRefPtr<DAnimNode>::DRefPtr(aDStack_60);
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_60);
  *(undefined8 *)(this + 0x138) = uVar2;
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_60);
  (**(code **)(*plVar1 + 0x2e8))(plVar1,this + 0x160);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_60);
  pcVar4 = *(code **)(*plVar1 + 0x340);
  std::string::string((string *)&local_40,"BOX_ON");
  FUN_0384297c(afStack_28,this);
  (*pcVar4)(plVar1,(string *)&local_40,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  std::string::~string((string *)&local_40);
  nop();
  DRefPtr<DButton>::DRefPtr(aDStack_58);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_58);
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_60);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x388))(plVar1,uVar2);
  pcVar4 = *(code **)(*plVar1 + 0x350);
  local_40 = this;
  DRefPtr<DSprite9SliceNode>::DRefPtr(aDStack_38,(DRefPtr *)aDStack_70);
  DRefPtr<DSprite9SliceNode>::DRefPtr(aDStack_30,(DRefPtr *)aDStack_58);
  FUN_03843250(afStack_28,(string *)&local_40);
  plVar1 = (long *)(*pcVar4)(plVar1,afStack_28);
  pcVar4 = *(code **)(*plVar1 + 0x210);
  (**(code **)(*(long *)this + 800))(aDStack_50,this);
  plVar1 = (long *)(*pcVar4)(plVar1,aDStack_50);
  pcVar4 = *(code **)(*plVar1 + 0x108);
  plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_70);
  (**(code **)(*plVar3 + 0xd0))(aDStack_48,0x3f000000,0x3f000000);
  (*pcVar4)(plVar1,aDStack_48);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  FUN_0355351c((string *)&local_40);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_60);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x130))(0x3f000000,0x3f000000);
  pcVar4 = *(code **)(*plVar1 + 0x108);
  plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_70);
  (**(code **)(*plVar3 + 0xd0))(aDStack_50,0x3f000000,0x3f000000);
  DVec2::DVec2(aDStack_48,270.0,80.0);
  DVec2::operator+(aDStack_50,aDStack_48);
  (*pcVar4)(plVar1,(string *)&local_40);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_68);
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_58);
  (**(code **)(*plVar1 + 0x28))(plVar1,uVar2,1);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_58);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_60);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_68);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIChestAward::~UIChestAward() */

void __thiscall UIChestAward::~UIChestAward(UIChestAward *this)

{
  *(undefined ***)this = &PTR_GetClass_066a6fd0;
  s_pWidgetHandler = 0;
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x168));
  std::string::~string((string *)(this + 0x160));
  std::vector<ChestAwardContent,std::allocator<ChestAwardContent>>::~vector
            ((vector<ChestAwardContent,std::allocator<ChestAwardContent>> *)(this + 0x140));
  DNodeWidget::~DNodeWidget((DNodeWidget *)this);
  return;
}


/* UIChestAward::~UIChestAward() */

void __thiscall UIChestAward::~UIChestAward(UIChestAward *this)

{
  ~UIChestAward(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIChestAward::UIChestAward(std::vector<ChestAwardContent, std::allocator<ChestAwardContent> >
   const&, std::string) */

void __thiscall UIChestAward::UIChestAward(UIChestAward *this,vector *param_1,undefined8 param_3)

{
  UIChestAward *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DNodeWidget::DNodeWidget((DNodeWidget *)this);
  *(undefined ***)this = &PTR_GetClass_066a6fd0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x140));
  Set8BytesTo0(this + 0x160);
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x168));
  std::vector<ChestAwardContent,std::allocator<ChestAwardContent>>::operator=
            ((vector<ChestAwardContent,std::allocator<ChestAwardContent>> *)(this + 0x140),param_1);
  this[0x158] = (UIChestAward)0x0;
  thunk_FUN_05475e00(this + 0x160,param_3);
  local_10 = this;
  FUN_03843678((function<void(Sexy::Graphics*)> *)(this + 0x168),(string *)&local_10);
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
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIChestAward::create(std::vector<ChestAwardContent, std::allocator<ChestAwardContent> > const&,
   std::string) */

void UIChestAward::create(undefined8 param_1)

{
  UIChestAward *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pUVar1 = s_pWidgetHandler;
  if (s_pWidgetHandler == (UIChestAward *)0x0) {
    FUN_05475d88(asStack_10);
    pUVar1 = ::operator_new(0x188);
    UIChestAward(pUVar1,param_1,asStack_10);
    std::string::~string(asStack_10);
    s_pWidgetHandler = pUVar1;
    (**(code **)(*(long *)pUVar1 + 0x310))(pUVar1);
    (**(code **)(*(long *)pUVar1 + 0x338))(pUVar1,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pUVar1);
}

