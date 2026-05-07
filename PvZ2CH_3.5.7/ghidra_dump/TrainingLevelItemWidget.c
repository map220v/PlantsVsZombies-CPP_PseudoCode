// Class: TrainingLevelItemWidget


/* TrainingLevelItemWidget::ButtonDepress(int) */

int TrainingLevelItemWidget::ButtonDepress(int param_1)

{
  return param_1;
}


/* non-virtual thunk to TrainingLevelItemWidget::ButtonDepress(int) */

void __thiscall TrainingLevelItemWidget::ButtonDepress(TrainingLevelItemWidget *this,int param_1)

{
  ButtonDepress((int)this + -0xd8);
  return;
}


/* TrainingLevelItemWidget::~TrainingLevelItemWidget() */

void __thiscall TrainingLevelItemWidget::~TrainingLevelItemWidget(TrainingLevelItemWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06940170;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06940498;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* TrainingLevelItemWidget::~TrainingLevelItemWidget() */

void __thiscall TrainingLevelItemWidget::~TrainingLevelItemWidget(TrainingLevelItemWidget *this)

{
  ~TrainingLevelItemWidget(this);
  AK::FreeHook(this);
  return;
}


/* TrainingLevelItemWidget::OnNotifyLevelSelected(int) */

void __thiscall
TrainingLevelItemWidget::OnNotifyLevelSelected(TrainingLevelItemWidget *this,int param_1)

{
  if ((*(int *)(this + 0xe0) != param_1) && (this[0x120] != (TrainingLevelItemWidget)0x0)) {
    this[0x120] = (TrainingLevelItemWidget)0x0;
    nop();
    return;
  }
  return;
}


/* TrainingLevelItemWidget::Select() */

void __thiscall TrainingLevelItemWidget::Select(TrainingLevelItemWidget *this)

{
  if ((this[0x120] == (TrainingLevelItemWidget)0x0) && (this[0x118] == (TrainingLevelItemWidget)0x0)
     ) {
    this[0x120] = (TrainingLevelItemWidget)0x1;
    nop();
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrainingLevelItemWidget::InitLevel(DangerRoomPropertySheet const*, int) */

void __thiscall
TrainingLevelItemWidget::InitLevel
          (TrainingLevelItemWidget *this,DangerRoomPropertySheet *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  iVar2 = *(int *)(this + 0xe0);
  local_8 = ___stack_chk_guard;
  if (iVar2 < 1) {
LAB_04a8bcc4:
    uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7ec08);
    uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7ec30);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x1a8);
    iVar1 = 0;
    if (iVar3 != 0) {
      iVar1 = iVar2 / iVar3;
    }
    if (iVar2 == iVar1 * iVar3) {
      if (iVar2 != 1) {
        uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7ee08);
        uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7ee58);
        goto LAB_04a8bce4;
      }
    }
    else if (iVar2 != 1) goto LAB_04a8bcc4;
    uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7ec58);
    uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7ec98);
  }
LAB_04a8bce4:
  *(undefined8 *)(this + 0x100) = uVar5;
  *(undefined8 *)(this + 0xe8) = uVar4;
  this[0x118] = (TrainingLevelItemWidget)(iVar2 < param_2);
  *(undefined4 *)(this + 0x11c) = 0x3f666666;
  Sexy::Insets::Insets((Insets *)&local_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  *(undefined8 *)(this + 0x108) = local_18;
  *(undefined8 *)(this + 0x110) = uStack_10;
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0xe8));
  fVar6 = *(float *)(this + 0x11c);
  iVar3 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0xe8));
  Sexy::Insets::Insets
            ((Insets *)&local_18,(*(int *)(this + 0x110) - (int)((float)iVar2 * fVar6)) / 2,
             (*(int *)(this + 0x114) - (int)((float)iVar3 * *(float *)(this + 0x11c))) / 2,
             (int)((float)iVar2 * fVar6),(int)((float)iVar3 * *(float *)(this + 0x11c)));
  *(undefined8 *)(this + 0xf0) = local_18;
  *(undefined8 *)(this + 0xf8) = uStack_10;
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* TrainingLevelItemWidget::TrainingLevelItemWidget(int) */

void __thiscall
TrainingLevelItemWidget::TrainingLevelItemWidget(TrainingLevelItemWidget *this,int param_1)

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
  *(int *)(this + 0xe0) = param_1;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined ***)this = &PTR_GetClass_06940170;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06940498;
  Sexy::Insets::Insets((Insets *)(this + 0xf0));
  *(undefined8 *)(this + 0x100) = 0;
  Sexy::Insets::Insets((Insets *)(this + 0x108));
  this[0x118] = (TrainingLevelItemWidget)0x0;
  this[0x120] = (TrainingLevelItemWidget)0x0;
  *(undefined4 *)(this + 0x11c) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyLevelSelected);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<TrainingLevelItemWidget,void(TrainingLevelItemWidget::*)(int)>>
            ((MessageRouter *)puVar1,Message::NotifyLevelSelected,&local_40);
  return;
}


/* TrainingLevelItemWidget::TouchEnded(Sexy::Touch const&) */

void TrainingLevelItemWidget::TouchEnded(Touch *param_1)

{
  if ((param_1[0x120] == (Touch)0x0) && (param_1[0x118] == (Touch)0x0)) {
    param_1[0x120] = (Touch)0x1;
    nop();
    MessageRouter::Post<int,int>
              ((MessageRouter *)gMessageRouter,Message::NotifyLevelSelected,*(int *)(param_1 + 0xe0)
              );
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrainingLevelItemWidget::Draw(Sexy::Graphics*) */

void __thiscall TrainingLevelItemWidget::Draw(TrainingLevelItemWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  RenderEffectDefinition *pRVar8;
  RenderEffect *pRVar9;
  code *pcVar10;
  undefined1 auStack_48 [8];
  Insets aIStack_40 [16];
  Insets aIStack_30 [16];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x118] == (TrainingLevelItemWidget)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0xe8),*(int *)(this + 0xf0),*(int *)(this + 0xf4),
               *(int *)(this + 0xf8),*(int *)(this + 0xfc));
    if (this[0x120] != (TrainingLevelItemWidget)0x0) {
      Sexy::Graphics::DrawImage
                (param_1,*(Image **)(this + 0x100),*(int *)(this + 0x108),*(int *)(this + 0x10c),
                 *(int *)(this + 0x110),*(int *)(this + 0x114));
    }
    iVar4 = FUN_04a8a260(0xc);
    iVar1 = *(int *)(this + 0xf0);
    iVar5 = FUN_04a8a260(8);
    iVar2 = *(int *)(this + 0xf4);
    iVar6 = FUN_04a8a260(100);
    iVar7 = FUN_04a8a260(0x32);
    Sexy::Insets::Insets(aIStack_30,iVar4 + iVar1,iVar5 + iVar2,iVar6,iVar7);
    std::string::string(asStack_20,"[LEVEL_INDEX]");
    StringHelper::ReplaceNumberString
              ((StringHelper *)asStack_20,(string *)L"{NUMBER}",
               (wchar_t *)(ulong)*(uint *)(this + 0xe0),iVar6);
    std::string::~string(asStack_20);
    nop();
    uVar3 = PrimeText_Game::Typeface_FZShaoEr_26_Outline;
    Sexy::Color::Color((Color *)asStack_20,1);
    WriteWordInRect(param_1,aIStack_40,aIStack_30,uVar3,asStack_20,0,1);
    FUN_05476c50(aIStack_40);
  }
  else {
    pRVar8 = (RenderEffectDefinition *)Sexy::Graphics::Get3D(param_1);
    CachedResourcePtr::operator_cast_to_RenderEffectDefinition_((CachedResourcePtr *)&DAT_06b7ed10);
    pRVar9 = (RenderEffect *)Sexy::Graphics3D::GetEffect(pRVar8);
    pcVar10 = *(code **)(*(long *)pRVar9 + 0x38);
    std::string::string(asStack_20,"Default");
    (*pcVar10)(pRVar9,asStack_20,1);
    std::string::~string(asStack_20);
    nop();
    Sexy::RenderEffectAutoState::RenderEffectAutoState
              ((RenderEffectAutoState *)asStack_20,param_1,pRVar9,1);
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0xe8),*(int *)(this + 0xf0),*(int *)(this + 0xf4),
               *(int *)(this + 0xf8),*(int *)(this + 0xfc));
    iVar4 = FUN_04a8a260(0xc);
    iVar1 = *(int *)(this + 0xf0);
    iVar5 = FUN_04a8a260(8);
    iVar2 = *(int *)(this + 0xf4);
    iVar6 = FUN_04a8a260(100);
    iVar7 = FUN_04a8a260(0x32);
    Sexy::Insets::Insets(aIStack_40,iVar4 + iVar1,iVar5 + iVar2,iVar6,iVar7);
    std::string::string((string *)aIStack_30,"[LEVEL_INDEX]");
    StringHelper::ReplaceNumberString
              ((StringHelper *)aIStack_30,(string *)L"{NUMBER}",
               (wchar_t *)(ulong)*(uint *)(this + 0xe0),iVar6);
    std::string::~string((string *)aIStack_30);
    nop();
    uVar3 = PrimeText_Game::Typeface_FZShaoEr_26_Outline;
    Sexy::Color::Color((Color *)aIStack_30,1);
    WriteWordInRect(param_1,auStack_48,aIStack_40,uVar3,(string *)aIStack_30,0,1);
    FUN_05476c50(auStack_48);
    Sexy::RenderEffectAutoState::~RenderEffectAutoState((RenderEffectAutoState *)asStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

