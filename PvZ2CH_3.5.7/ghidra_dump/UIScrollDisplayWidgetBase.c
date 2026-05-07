// Class: UIScrollDisplayWidgetBase


/* UIScrollDisplayWidgetBase::ButtonDepress(int) */

void __thiscall
UIScrollDisplayWidgetBase::ButtonDepress(UIScrollDisplayWidgetBase *this,int param_1)

{
  if (*(int *)(this + 0xe8) != param_1) {
    return;
  }
  (**(code **)(*(long *)this + 0x328))();
  this[0xec] = (UIScrollDisplayWidgetBase)0x1;
  return;
}


/* non-virtual thunk to UIScrollDisplayWidgetBase::ButtonDepress(int) */

void __thiscall
UIScrollDisplayWidgetBase::ButtonDepress(UIScrollDisplayWidgetBase *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* UIScrollDisplayWidgetBase::~UIScrollDisplayWidgetBase() */

void __thiscall
UIScrollDisplayWidgetBase::~UIScrollDisplayWidgetBase(UIScrollDisplayWidgetBase *this)

{
  *(undefined ***)this = &PTR_GetClass_0698ceb0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0698d200;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  if (*(long **)(this + 0xf0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xf0) + 0x18))();
    *(undefined8 *)(this + 0xf0) = 0;
  }
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* UIScrollDisplayWidgetBase::~UIScrollDisplayWidgetBase() */

void __thiscall
UIScrollDisplayWidgetBase::~UIScrollDisplayWidgetBase(UIScrollDisplayWidgetBase *this)

{
  ~UIScrollDisplayWidgetBase(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIScrollDisplayWidgetBase::InitView() */

void __thiscall UIScrollDisplayWidgetBase::InitView(UIScrollDisplayWidgetBase *this)

{
  PVZ2UIButton *this_00;
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_20,&DAT_056f11a8,auStack_28);
  Sexy::Color::Color(aCStack_18,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,*(int *)(this + 0xe8),(ButtonListener *)(this + 0xd8),awStack_20,aCStack_18);
  FUN_05476c50(awStack_20);
  nop();
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,0,0,*(undefined4 *)(this + 0x50),*(undefined4 *)(this + 0x54));
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  (**(code **)(*(long *)this + 0x338))(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIScrollDisplayWidgetBase::UIScrollDisplayWidgetBase(int, int) */

void __thiscall
UIScrollDisplayWidgetBase::UIScrollDisplayWidgetBase
          (UIScrollDisplayWidgetBase *this,int param_1,int param_2)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(int *)(this + 0xf8) = param_1;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0698d200;
  *(undefined ***)this = &PTR_GetClass_0698ceb0;
  *(int *)(this + 0xe8) = param_2;
  this[0xec] = (UIScrollDisplayWidgetBase)0x0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x330);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<UIScrollDisplayWidgetBase,void(UIScrollDisplayWidgetBase::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIScrollDisplayWidgetBase::InitShinningAnim() */

void __thiscall UIScrollDisplayWidgetBase::InitShinningAnim(UIScrollDisplayWidgetBase *this)

{
  char cVar1;
  Effect_PopAnim *pEVar2;
  ResourceInfo *pRVar3;
  LineBreakCategory *pLVar4;
  LineBreakCategory *pLVar5;
  LineBreakCategory *in_x4;
  StandaloneEffect *this_00;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  FastCurve aFStack_30 [8];
  string asStack_28 [16];
  RtWeakPtr aRStack_18 [8];
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0xf0) == 0) {
    pEVar2 = GameObject::CreateOutsideTable<Effect_PopAnim>();
    *(Effect_PopAnim **)(this + 0xf0) = pEVar2;
    std::string::string(asStack_28,"POPANIM_EFFECTS_UNIVERSE_SCROLLBANNER_LIGHT");
    GetPAMByName(asStack_28);
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    std::string::~string(asStack_28);
    nop();
    Effect_PopAnim::CreatePopAnimRig
              (*(Effect_PopAnim **)(this + 0xf0),(PopAnim *)pRVar3,(RtClass *)0x0);
    Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0xf0),true);
    StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0xf0),true);
    Sexy::Insets::Insets((Insets *)asStack_28);
    (**(code **)(*(long *)this + 0x48))(aRStack_18,this);
    this_00 = *(StandaloneEffect **)(this + 0xf0);
    pLVar5 = (LineBreakCategory *)(ulong)(uint)(local_10 / 2);
    Sexy::FastCurve::SetOutRange(aFStack_30,(float)(local_10 / 2),(float)(local_c / 2));
    pLVar4 = (LineBreakCategory *)0xdbba0;
    auVar7 = StandaloneEffect::SetScreenSpaceOrigin(this_00,(SexyVector2 *)aFStack_30,900000);
    cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (auVar7._0_8_,auVar7._8_8_,pLVar4,pLVar5,in_x4);
    uVar6 = 0x3f800000;
    if (cVar1 == '\0') {
      uVar6 = 0x400ccccd;
    }
    (**(code **)(**(long **)(this + 0xf0) + 0xb8))(uVar6,uVar6,*(long **)(this + 0xf0));
    pEVar2 = *(Effect_PopAnim **)(this + 0xf0);
    std::string::string((string *)aFStack_30,"idle");
    PVZ_EOT();
    Effect_PopAnim::PlayLoopingAnimation(pEVar2,aFStack_30,0);
    std::string::~string((string *)aFStack_30);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIScrollDisplayWidgetBase::Draw(Sexy::Graphics*) */

void __thiscall UIScrollDisplayWidgetBase::Draw(UIScrollDisplayWidgetBase *this,Graphics *param_1)

{
  int iVar1;
  Image *pIVar2;
  
  nop();
  pIVar2 = *(Image **)(this + 0xe0);
  if (pIVar2 != (Image *)0x0) {
    iVar1 = FUN_04c61824(0);
    Sexy::Graphics::DrawImage
              (param_1,pIVar2,iVar1,iVar1,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
  if (*(StandaloneEffect **)(this + 0xf0) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0xf0),param_1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIScrollDisplayWidgetBase::ButtonClick() */

void __thiscall UIScrollDisplayWidgetBase::ButtonClick(UIScrollDisplayWidgetBase *this)

{
  char *pcVar1;
  TGALogMgr *pTVar2;
  size_t in_x2;
  TGAScrollbannerData aTStack_28 [8];
  string asStack_20 [8];
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TGAScrollbannerData::TGAScrollbannerData(aTStack_28);
  DString::DString(aDStack_18,1);
  pcVar1 = (char *)DString::c_str(aDStack_18);
  std::string::append((string *)aTStack_28,pcVar1,in_x2);
  DString::~DString(aDStack_18);
  DString::DString(aDStack_18,*(int *)(this + 0xf8));
  pcVar1 = (char *)DString::c_str(aDStack_18);
  std::string::append(asStack_20,pcVar1,in_x2);
  DString::~DString(aDStack_18);
  pTVar2 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  LogCacheInfo::LogCacheInfo((LogCacheInfo *)aDStack_18,(LogCacheInfo *)aTStack_28);
  TGALogMgr::LogScrollbanner(pTVar2,aDStack_18);
  Sexy::PACommand::~PACommand((PACommand *)aDStack_18);
  thunk_FUN_04c634ac(gMessageRouter);
  Sexy::PACommand::~PACommand((PACommand *)aTStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

