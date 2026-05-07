// Class: MiniGameTabButton


/* MiniGameTabButton::NotifySelectMiniGame(int) */

void __thiscall MiniGameTabButton::NotifySelectMiniGame(MiniGameTabButton *this,int param_1)

{
  this[0x314] = (MiniGameTabButton)(*(int *)(this + 0x310) == param_1);
  return;
}


/* MiniGameTabButton::~MiniGameTabButton() */

void __thiscall MiniGameTabButton::~MiniGameTabButton(MiniGameTabButton *this)

{
  *(undefined ***)(this + 0x198) = &PTR__MiniGameTabButton_066b49d0;
  *(undefined ***)this = &PTR_GetClass_066b4670;
  *(undefined ***)(this + 0x300) = &PTR_ButtonPress_066b49f8;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  PVZ2UIButton::~PVZ2UIButton((PVZ2UIButton *)this);
  return;
}


/* non-virtual thunk to MiniGameTabButton::~MiniGameTabButton() */

void __thiscall MiniGameTabButton::~MiniGameTabButton(MiniGameTabButton *this)

{
  ~MiniGameTabButton(this + -0x198);
  return;
}


/* MiniGameTabButton::~MiniGameTabButton() */

void __thiscall MiniGameTabButton::~MiniGameTabButton(MiniGameTabButton *this)

{
  ~MiniGameTabButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to MiniGameTabButton::~MiniGameTabButton() */

void __thiscall MiniGameTabButton::~MiniGameTabButton(MiniGameTabButton *this)

{
  ~MiniGameTabButton(this + -0x198);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameTabButton::InitView() */

void __thiscall MiniGameTabButton::InitView(MiniGameTabButton *this)

{
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat("IMAGE_UI_MINIGAME_COLLECTION_TAB_%d",asStack_10,
                  (ulong)(*(int *)(this + 0x308) - 0x44c));
  uVar1 = StringHelper::ToImage(asStack_10,false);
  *(undefined8 *)(this + 0x318) = uVar1;
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameTabButton::MiniGameTabButton(int, int, bool) */

void __thiscall
MiniGameTabButton::MiniGameTabButton(MiniGameTabButton *this,int param_1,int param_2,bool param_3)

{
  undefined *puVar1;
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
  FUN_05478178(awStack_28,&DAT_056f11a8,auStack_30);
  Sexy::Color::Color((Color *)&local_20,1);
  PVZ2UIButton::PVZ2UIButton
            ((PVZ2UIButton *)this,param_1,(ButtonListener *)(this + 0x300),awStack_28,
             (Color *)&local_20);
  FUN_05476c50(awStack_28);
  nop();
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x300));
  *(undefined8 *)(this + 0x318) = 0;
  *(undefined ***)this = &PTR_GetClass_066b4670;
  *(undefined ***)(this + 0x198) = &PTR__MiniGameTabButton_066b49d0;
  *(int *)(this + 0x308) = param_1;
  *(int *)(this + 0x310) = param_2;
  *(undefined ***)(this + 0x300) = &PTR_ButtonPress_066b49f8;
  this[0x314] = (MiniGameTabButton)0x0;
  this[0x30c] = (MiniGameTabButton)param_3;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,NotifySelectMiniGame);
  local_50 = local_20;
  uStack_48 = uStack_18;
  local_40 = local_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<MiniGameTabButton,void(MiniGameTabButton::*)(int)>>
            ((MessageRouter *)puVar1,Message::SelectMiniGame,&local_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameTabButton::Draw(Sexy::Graphics*) */

void __thiscall MiniGameTabButton::Draw(MiniGameTabButton *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  Image *pIVar4;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Graphics::DrawImage
            (param_1,*(Image **)(this + 0x318),0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  if (this[0x30c] == (MiniGameTabButton)0x0) {
    iVar1 = *(int *)(this + 0x54);
    iVar2 = *(int *)(this + 0x50);
    pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab7080);
    Sexy::Insets::Insets
              (aIStack_28,(iVar2 - iVar1) / 2,0,*(int *)(this + 0x54),*(int *)(this + 0x54));
    this_00 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab7080);
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    this_01 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab7080);
    iVar2 = SalesProgressBar::GetCurrentLevel(this_01);
    Sexy::Insets::Insets(aIStack_18,0,0,iVar1,iVar2);
    Sexy::Graphics::DrawImage(param_1,pIVar4,(TRect *)aIStack_28,(TRect *)aIStack_18);
  }
  if (this[0x314] != (MiniGameTabButton)0x0) {
    iVar1 = FUN_038b4cfc(0xfffffff7);
    iVar2 = FUN_038b4cfc(0x12);
    Sexy::Insets::Insets
              (aIStack_18,iVar1,iVar1,iVar2 + *(int *)(this + 0x50),iVar2 + *(int *)(this + 0x54));
    uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab7218);
    Draw9SliceImage(param_1,aIStack_18,uVar3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGameTabButton::ButtonDepress(int) */

void __thiscall MiniGameTabButton::ButtonDepress(MiniGameTabButton *this,int param_1)

{
  if ((*(int *)(this + 0x308) == param_1) && (this[0x30c] != (MiniGameTabButton)0x0)) {
    MessageRouter::Post<int,int>
              ((MessageRouter *)gMessageRouter,Message::SelectMiniGame,*(int *)(this + 0x310));
    return;
  }
  return;
}


/* non-virtual thunk to MiniGameTabButton::ButtonDepress(int) */

void __thiscall MiniGameTabButton::ButtonDepress(MiniGameTabButton *this,int param_1)

{
  ButtonDepress(this + -0x300,param_1);
  return;
}

