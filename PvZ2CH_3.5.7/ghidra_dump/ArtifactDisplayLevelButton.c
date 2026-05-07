// Class: ArtifactDisplayLevelButton


/* ArtifactDisplayLevelButton::SelectLevel(int) */

void __thiscall
ArtifactDisplayLevelButton::SelectLevel(ArtifactDisplayLevelButton *this,int param_1)

{
  this[0xe0] = (ArtifactDisplayLevelButton)(*(int *)(this + 0xe4) == param_1);
  return;
}


/* ArtifactDisplayLevelButton::~ArtifactDisplayLevelButton() */

void __thiscall
ArtifactDisplayLevelButton::~ArtifactDisplayLevelButton(ArtifactDisplayLevelButton *this)

{
  *(undefined ***)this = &PTR_GetClass_066992e0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06699608;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* ArtifactDisplayLevelButton::~ArtifactDisplayLevelButton() */

void __thiscall
ArtifactDisplayLevelButton::~ArtifactDisplayLevelButton(ArtifactDisplayLevelButton *this)

{
  ~ArtifactDisplayLevelButton(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactDisplayLevelButton::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
ArtifactDisplayLevelButton::DrawAll
          (ArtifactDisplayLevelButton *this,ModalFlags *param_1,Graphics *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Image *pIVar5;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  Sexy::Graphics::ClearClipRect(param_2);
  if (*(long *)(this + 0xe8) != 0) {
    if (this[0x6e] != (ArtifactDisplayLevelButton)0x0) {
      Sexy::Graphics::SetColorizeImages(param_2,true);
      Sexy::Insets::Insets(aIStack_18,0x46,0x46,0x46,0xf0);
      Sexy::Graphics::SetColor(param_2,(Color *)aIStack_18);
    }
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0c68);
    Sexy::Graphics::DrawImage(param_2,pIVar5,0,0);
    this_00 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0c68);
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0xe8));
    this_01 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0c68);
    iVar3 = SalesProgressBar::GetCurrentLevel(this_01);
    iVar4 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0xe8));
    Sexy::Graphics::DrawImage
              (param_2,*(Image **)(this + 0xe8),(iVar1 - iVar2) / 2,(iVar3 - iVar4) / 2);
  }
  if (this[0xe0] != (ArtifactDisplayLevelButton)0x0) {
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0ca0);
    iVar1 = FUN_037ba924(0xfffffffa);
    Sexy::Graphics::DrawImage(param_2,pIVar5,iVar1,iVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactDisplayLevelButton::ArtifactDisplayLevelButton(int) */

void __thiscall
ArtifactDisplayLevelButton::ArtifactDisplayLevelButton(ArtifactDisplayLevelButton *this,int param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  PVZ2UIButton *this_00;
  long lVar5;
  code *pcVar6;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 auStack_30 [8];
  wstring awStack_28 [8];
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(int *)(this + 0xe4) = param_1;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined ***)this = &PTR_GetClass_066992e0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06699608;
  switch(param_1) {
  case 1:
    uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0d00);
    *(undefined8 *)(this + 0xe8) = uVar4;
    break;
  case 2:
    uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0bc0);
    *(undefined8 *)(this + 0xe8) = uVar4;
    break;
  case 3:
    uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0da0);
    *(undefined8 *)(this + 0xe8) = uVar4;
    break;
  case 4:
    uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0cc8);
    *(undefined8 *)(this + 0xe8) = uVar4;
    break;
  default:
    uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0bf0);
    *(undefined8 *)(this + 0xe8) = uVar4;
  }
  FUN_05478178(awStack_28,&DAT_056f11a8,auStack_30);
  Sexy::Color::Color((Color *)&local_20,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,0,(ButtonListener *)(this + 0xd8),awStack_28,(Color *)&local_20);
  FUN_05476c50(awStack_28);
  nop();
  pcVar6 = *(code **)(*(long *)this_00 + 0x198);
  uVar3 = FUN_037ba924(0);
  lVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0ca0);
  uVar1 = *(undefined4 *)(lVar5 + 0x38);
  lVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0ca0);
  (*pcVar6)(this_00,uVar3,uVar3,uVar1,*(undefined4 *)(lVar5 + 0x3c));
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)this_00);
  puVar2 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,SelectLevel);
  local_50 = local_20;
  uStack_48 = uStack_18;
  local_40 = local_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<ArtifactDisplayLevelButton,void(ArtifactDisplayLevelButton::*)(int)>>
            ((MessageRouter *)puVar2,Message::ArtifactDisplaySelectButton,&local_50);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ArtifactDisplayLevelButton::ButtonDepress(int) */

void ArtifactDisplayLevelButton::ButtonDepress(int param_1)

{
  MessageRouter::Post<int,int>
            ((MessageRouter *)gMessageRouter,Message::ArtifactDisplayLevelSelect,
             *(int *)((ulong)(uint)param_1 + 0xe4));
  return;
}


/* non-virtual thunk to ArtifactDisplayLevelButton::ButtonDepress(int) */

void __thiscall
ArtifactDisplayLevelButton::ButtonDepress(ArtifactDisplayLevelButton *this,int param_1)

{
  ButtonDepress((int)this + -0xd8);
  return;
}

