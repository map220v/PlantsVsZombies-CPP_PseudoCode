// Class: PVZ2UIPresentWidget


/* PVZ2UIPresentWidget::~PVZ2UIPresentWidget() */

void __thiscall PVZ2UIPresentWidget::~PVZ2UIPresentWidget(PVZ2UIPresentWidget *this)

{
  long *plVar1;
  
  *(undefined ***)this = &PTR_GetClass_0683b850;
  if (*(long **)(this + 0xd8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xd8) + 8))();
    *(undefined8 *)(this + 0xd8) = 0;
  }
  if (*(long **)(this + 0xf8) == (long *)0x0) {
    plVar1 = *(long **)(this + 0xe8);
    if (plVar1 == (long *)0x0) {
      Sexy::Widget::~Widget((Widget *)this);
      return;
    }
  }
  else {
    (**(code **)(**(long **)(this + 0xf8) + 0x18))();
    *(undefined8 *)(this + 0xf8) = 0;
    plVar1 = *(long **)(this + 0xe8);
    if (plVar1 == (long *)0x0) goto LAB_04386dd0;
  }
  (**(code **)(*plVar1 + 8))();
  *(undefined8 *)(this + 0xe8) = 0;
LAB_04386dd0:
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PVZ2UIPresentWidget::~PVZ2UIPresentWidget() */

void __thiscall PVZ2UIPresentWidget::~PVZ2UIPresentWidget(PVZ2UIPresentWidget *this)

{
  ~PVZ2UIPresentWidget(this);
  AK::FreeHook(this);
  return;
}


/* PVZ2UIPresentWidget::IsDoneOpening() const */

byte __thiscall PVZ2UIPresentWidget::IsDoneOpening(PVZ2UIPresentWidget *this)

{
  byte bVar1;
  
  bVar1 = 0;
  if (this[0x104] != (PVZ2UIPresentWidget)0x0) {
    bVar1 = PopAnimRig::IsPlayingAnything(*(PopAnimRig **)(this + 0xe0));
    bVar1 = bVar1 ^ 1;
  }
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIPresentWidget::Draw(Sexy::Graphics*) */

void __thiscall PVZ2UIPresentWidget::Draw(PVZ2UIPresentWidget *this,Graphics *param_1)

{
  int iVar1;
  PopAnimRigRectDrawer *pPVar2;
  StandaloneEffect *this_00;
  GraphicsAutoState aGStack_48 [8];
  Insets aIStack_40 [16];
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_48,param_1);
  Sexy::Graphics::ClearClipRect(param_1);
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
  pPVar2 = *(PopAnimRigRectDrawer **)(this + 0xd8);
  Sexy::Insets::Insets(aIStack_40,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  PopAnimRigRectDrawer::Draw(pPVar2,param_1,(TRect *)aIStack_40,aSStack_30);
  if (this[0x105] != (PVZ2UIPresentWidget)0x0) {
    if (((DAT_06afeaf8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06afeaf8), iVar1 != 0)) {
      Sexy::FastCurve::SetOutRange((FastCurve *)&DAT_06afeb80,0.2,0.0);
      __cxa_guard_release(&DAT_06afeaf8);
    }
    this_00 = *(StandaloneEffect **)(this + 0xf8);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)aIStack_40,
               (float)(*(int *)(this + 0x50) / 2) + DAT_06afeb80 * (float)*(int *)(this + 0x50),
               (float)(*(int *)(this + 0x54) / 2) + DAT_06afeb84 * (float)*(int *)(this + 0x54));
    StandaloneEffect::SetScreenSpaceOrigin(this_00,(SexyVector2 *)aIStack_40,900000);
    StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0xf8),param_1);
    pPVar2 = *(PopAnimRigRectDrawer **)(this + 0xe8);
    Sexy::Insets::Insets
              (aIStack_40,(int)((float)*(int *)(this + 0x50) * DAT_06afeb80),
               (int)((float)*(int *)(this + 0x54) * DAT_06afeb84),*(int *)(this + 0x50),
               *(int *)(this + 0x54));
    PopAnimRigRectDrawer::Draw(pPVar2,param_1,(TRect *)aIStack_40,aSStack_30);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_48);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIPresentWidget::StartOpening() */

void __thiscall PVZ2UIPresentWidget::StartOpening(PVZ2UIPresentWidget *this)

{
  PopAnimRig *pPVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x104] == (PVZ2UIPresentWidget)0x0) {
    pPVar1 = *(PopAnimRig **)(this + 0xe0);
    std::string::string(asStack_40,"open");
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    PopAnimRig::PlayAndStop(pPVar1,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    this[0x104] = (PVZ2UIPresentWidget)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIPresentWidget::MouseDown(int, int, int, int) */

void PVZ2UIPresentWidget::MouseDown(int param_1,int param_2,int param_3,int param_4)

{
  ulong uVar1;
  PopAnimRig *pPVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long lStack_8;
  
  uVar1 = (ulong)(uint)param_1;
  lStack_8 = ___stack_chk_guard;
  if (*(char *)(uVar1 + 0x104) == '\0') {
    pPVar2 = *(PopAnimRig **)(uVar1 + 0xe0);
    std::string::string(asStack_40,"open");
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    PopAnimRig::PlayAndStop(pPVar2,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    *(undefined1 *)(uVar1 + 0x104) = 1;
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIPresentWidget::showPrize() */

void __thiscall PVZ2UIPresentWidget::showPrize(PVZ2UIPresentWidget *this)

{
  PopAnimRig *pPVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x105] == (PVZ2UIPresentWidget)0x0) {
    pPVar1 = *(PopAnimRig **)(this + 0xf0);
    std::string::string(asStack_40,"animation");
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    PopAnimRig::PlayAndStop(pPVar1,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    this[0x105] = (PVZ2UIPresentWidget)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UIPresentWidget::onAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void PVZ2UIPresentWidget::onAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_4,"show_present");
  if (!bVar1) {
    return;
  }
  showPrize((PVZ2UIPresentWidget *)param_1);
  return;
}


/* PVZ2UIPresentWidget::Update() */

void __thiscall PVZ2UIPresentWidget::Update(PVZ2UIPresentWidget *this)

{
  char cVar1;
  PopAnimRig *pPVar2;
  float fVar3;
  float fVar4;
  
  pPVar2 = *(PopAnimRig **)(this + 0xe0);
  fVar3 = (float)PVZ_RealT();
  fVar4 = (float)PVZ_RealDt();
  PopAnimRig::UpdateAnim(pPVar2,fVar3,fVar4);
  if (this[0x105] == (PVZ2UIPresentWidget)0x0) {
    cVar1 = IsDoneOpening(this);
    if (cVar1 != '\0') {
      showPrize(this);
    }
    if (this[0x105] == (PVZ2UIPresentWidget)0x0) {
      return;
    }
  }
  pPVar2 = *(PopAnimRig **)(this + 0xf0);
  fVar3 = (float)PVZ_RealT();
  fVar4 = (float)PVZ_RealDt();
  PopAnimRig::UpdateAnim(pPVar2,fVar3,fVar4);
  StandaloneEffect::Update(*(StandaloneEffect **)(this + 0xf8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIPresentWidget::PVZ2UIPresentWidget(StandaloneEffect*, bool) */

void __thiscall
PVZ2UIPresentWidget::PVZ2UIPresentWidget
          (PVZ2UIPresentWidget *this,StandaloneEffect *param_1,bool param_2)

{
  bool bVar1;
  PopAnim *pPVar2;
  RtClass *pRVar3;
  PopAnimRig *pPVar4;
  PopAnimRigRectDrawer *pPVar5;
  undefined8 uVar6;
  TimeChallengeEndLevelUI *this_00;
  string asStack_50 [24];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(StandaloneEffect **)(this + 0xf8) = param_1;
  this[0x104] = (PVZ2UIPresentWidget)0x0;
  *(undefined ***)this = &PTR_GetClass_0683b850;
  this[0x105] = (PVZ2UIPresentWidget)0x0;
  pPVar2 = CachedResourcePtr::operator_cast_to_PopAnim_((CachedResourcePtr *)&DAT_06afeb28);
  pRVar3 = (RtClass *)PopAnimRig::StaticGetClass();
  pPVar4 = (PopAnimRig *)PopAnimRig::CreateRigOutsideTable(pPVar2,pRVar3);
  *(PopAnimRig **)(this + 0xe0) = pPVar4;
  std::string::string(asStack_50,"idle");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar4,asStack_50,0,aDStack_38);
  std::string::~string(asStack_50);
  nop();
  this_00 = *(TimeChallengeEndLevelUI **)(this + 0xe0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAnimCommand);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
  Delegate4<PVZ2UIPresentWidget,void(PVZ2UIPresentWidget::*)(std::string_const&,float,std::string_const&,std::string_const&)>
            ((Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *)aDStack_38
             ,asStack_50);
  TimeChallengeEndLevelUI::SetContinueCallBack(this_00,aDStack_38);
  pPVar5 = ::operator_new(0x20);
  PopAnimRigRectDrawer::PopAnimRigRectDrawer(pPVar5,*(PopAnimRig **)(this + 0xe0));
  *(PopAnimRigRectDrawer **)(this + 0xd8) = pPVar5;
  pPVar2 = CachedResourcePtr::operator_cast_to_PopAnim_((CachedResourcePtr *)&DAT_06afeb50);
  pRVar3 = (RtClass *)PopAnimRig::StaticGetClass();
  uVar6 = PopAnimRig::CreateRigOutsideTable(pPVar2,pRVar3);
  *(undefined8 *)(this + 0xf0) = uVar6;
  pPVar5 = ::operator_new(0x20);
  PopAnimRigRectDrawer::PopAnimRigRectDrawer(pPVar5,*(PopAnimRig **)(this + 0xf0));
  *(PopAnimRigRectDrawer **)(this + 0xe8) = pPVar5;
  bVar1 = local_8 == ___stack_chk_guard;
  uVar6 = *(undefined8 *)(*(long *)(this + 0xd8) + 0x10);
  *(undefined8 *)(pPVar5 + 8) = *(undefined8 *)(*(long *)(this + 0xd8) + 8);
  *(undefined8 *)(pPVar5 + 0x10) = uVar6;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

