// Class: WorldMap_ScrollBannerSwitchButton


/* WorldMap_ScrollBannerSwitchButton::ShowScrollBannerSwitch() */

void __thiscall
WorldMap_ScrollBannerSwitchButton::ShowScrollBannerSwitch(WorldMap_ScrollBannerSwitchButton *this)

{
  UIWidget::SetVisible((UIWidget *)this,true);
  this[0x1d0] = (WorldMap_ScrollBannerSwitchButton)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_ScrollBannerSwitchButton::StaticClassInit() */

void WorldMap_ScrollBannerSwitchButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_ScrollBannerSwitchButton");
    (*pcVar2)(plVar1,asStack_10,FUN_045a2038,0x1d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_ScrollBannerSwitchButton::StaticGetClass() */

long * WorldMap_ScrollBannerSwitchButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_ScrollBannerSwitchButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_ScrollBannerSwitchButton::GetClass() const */

long * WorldMap_ScrollBannerSwitchButton::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_ScrollBannerSwitchButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_ScrollBannerSwitchButton::checkVisiable() */

undefined8 __thiscall
WorldMap_ScrollBannerSwitchButton::checkVisiable(WorldMap_ScrollBannerSwitchButton *this)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = LawnApp::GetScrollBanner(gLawnApp);
  bVar1 = RiftUtils::IsWorldMapButtonsEnabled();
  if ((bVar1 & lVar3 != 0) != 0) {
    bVar2 = (bool)FUN_045a1bd4(*(undefined1 *)(lVar3 + 0x1f0));
    UIWidget::SetVisible((UIWidget *)this,bVar2);
    uVar4 = FUN_045a1bd4(*(undefined1 *)(lVar3 + 0x1f0));
    return uVar4;
  }
  return 0;
}


/* WorldMap_ScrollBannerSwitchButton::NotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void WorldMap_ScrollBannerSwitchButton::NotifyRefreshActivityList(bool param_1,set *param_2)

{
  bool bVar1;
  
  if (((ulong)param_2 & 0xff) == 0) {
    return;
  }
  bVar1 = (bool)checkVisiable((WorldMap_ScrollBannerSwitchButton *)(ulong)param_1);
  UIWidget::SetVisible((UIWidget *)(ulong)param_1,bVar1);
  Sexy::OutputDebugStrF
            ((wchar_t *)"WorldMap_ScrollBannerSwitchButton NotifyRefreshActivityList SetVisible %d",
             (ulong)bVar1);
  return;
}


/* WorldMap_ScrollBannerSwitchButton::~WorldMap_ScrollBannerSwitchButton() */

void __thiscall
WorldMap_ScrollBannerSwitchButton::~WorldMap_ScrollBannerSwitchButton
          (WorldMap_ScrollBannerSwitchButton *this)

{
  *(undefined ***)this = &PTR_GetClass_068666a0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_ScrollBannerSwitchButton_06866848;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UIEasyButtonWidget::~UIEasyButtonWidget((UIEasyButtonWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_ScrollBannerSwitchButton::~WorldMap_ScrollBannerSwitchButton() */

void __thiscall
WorldMap_ScrollBannerSwitchButton::~WorldMap_ScrollBannerSwitchButton
          (WorldMap_ScrollBannerSwitchButton *this)

{
  ~WorldMap_ScrollBannerSwitchButton(this + -0x10);
  return;
}


/* WorldMap_ScrollBannerSwitchButton::~WorldMap_ScrollBannerSwitchButton() */

void __thiscall
WorldMap_ScrollBannerSwitchButton::~WorldMap_ScrollBannerSwitchButton
          (WorldMap_ScrollBannerSwitchButton *this)

{
  ~WorldMap_ScrollBannerSwitchButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_ScrollBannerSwitchButton::~WorldMap_ScrollBannerSwitchButton() */

void __thiscall
WorldMap_ScrollBannerSwitchButton::~WorldMap_ScrollBannerSwitchButton
          (WorldMap_ScrollBannerSwitchButton *this)

{
  ~WorldMap_ScrollBannerSwitchButton(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_ScrollBannerSwitchButton::WorldMap_ScrollBannerSwitchButton() */

void __thiscall
WorldMap_ScrollBannerSwitchButton::WorldMap_ScrollBannerSwitchButton
          (WorldMap_ScrollBannerSwitchButton *this)

{
  undefined *puVar1;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  function<bool(Sexy::Touch_const&)> afStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIEasyButtonWidget::UIEasyButtonWidget((UIEasyButtonWidget *)this);
  *(undefined ***)this = &PTR_GetClass_068666a0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_ScrollBannerSwitchButton_06866848;
  UIEasyButtonWidget::SetImageNormal((UIEasyButtonWidget *)this,(string *)&DAT_06b14c10);
  std::string::string((string *)&local_50,"Play_UI_Map_Select_Universe_Press");
  DEditorNode::setRootName((string *)this);
  std::string::~string((string *)&local_50);
  nop();
  std::string::string((string *)&local_50,"Play_UI_Map_Select_Universe_Release");
  UIEasyButtonWidget::SetSoundReleased((string *)this);
  std::string::~string((string *)&local_50);
  nop();
  this[0x1d0] = (WorldMap_ScrollBannerSwitchButton)0x0;
  UIWidget::SetVisible((UIWidget *)this,false);
  FUN_045a1e54(afStack_38,this);
  PopingBonusUI::SetCloseFuction((PopingBonusUI *)this,afStack_38);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,ShowScrollBannerSwitch);
  Sexy::Delegate0::
  Delegate0<WorldMap_ScrollBannerSwitchButton,void(WorldMap_ScrollBannerSwitchButton::*)()>
            ((Delegate0 *)afStack_38,(string *)&local_50);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::ShowScrollBannerSwitch,(Delegate0 *)afStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,NotifyRefreshActivityList);
  local_80 = local_50;
  uStack_78 = uStack_48;
  local_70 = local_40;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<WorldMap_ScrollBannerSwitchButton,void(WorldMap_ScrollBannerSwitchButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_ScrollBannerSwitchButton::StaticNew() */

WorldMap_ScrollBannerSwitchButton * WorldMap_ScrollBannerSwitchButton::StaticNew(void)

{
  WorldMap_ScrollBannerSwitchButton *this;
  
  this = ::operator_new(0x1d8);
  WorldMap_ScrollBannerSwitchButton(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_ScrollBannerSwitchButton::onLoadComplete() */

void WorldMap_ScrollBannerSwitchButton::onLoadComplete(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  UIWidget *in_x0;
  LotteryResultProgressBar *this;
  int *piVar4;
  SexyVector2 *this_00;
  LineBreakCategory *in_x2;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  undefined4 uVar5;
  float fVar6;
  undefined1 auVar7 [16];
  uint local_14;
  int local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (LotteryResultProgressBar *)
         CachedUIResourcePtr<Sexy::Image>::operator->
                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b14b80);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(this);
  auVar7 = FUN_045a1eb0();
  iVar3 = auVar7._0_4_;
  uVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (auVar7._0_8_,auVar7._8_8_,in_x2,in_x3,in_x4);
  if ((uVar2 & 0xff) == 0) {
    local_14 = uVar2 & 0xff;
    iVar3 = FUN_045a1bd0(*(undefined4 *)(in_x0 + 0x38));
    local_10[0] = ((int)((float)iVar1 * 1.1) - iVar3) / 2;
    piVar4 = eastl::max_alt<int>((int *)&local_14,local_10);
    iVar3 = *piVar4;
  }
  this_00 = (SexyVector2 *)UIWidget::GetPositionOffset(in_x0);
  iVar1 = FUN_045a1eb0();
  fVar6 = (float)iVar1;
  Sexy::FastCurve::SetOutRange((FastCurve *)local_10,(float)iVar3,fVar6);
  uVar5 = Sexy::SexyVector2::operator+(this_00,(SexyVector2 *)local_10);
  UIWidget::SetPositionOffset(uVar5,fVar6);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_ScrollBannerSwitchButton::UpdateSwitchButton(bool) */

void __thiscall
WorldMap_ScrollBannerSwitchButton::UpdateSwitchButton
          (WorldMap_ScrollBannerSwitchButton *this,bool param_1)

{
  string *psVar1;
  
  if (param_1) {
    psVar1 = (string *)&DAT_06b14c10;
  }
  else {
    psVar1 = (string *)&DAT_06b14bf8;
  }
  UIEasyButtonWidget::SetImageNormal((UIEasyButtonWidget *)this,psVar1);
  MessageRouter::Post<bool,bool>((MessageRouter *)gMessageRouter,Message::ShowScrollBanner,param_1);
  return;
}

