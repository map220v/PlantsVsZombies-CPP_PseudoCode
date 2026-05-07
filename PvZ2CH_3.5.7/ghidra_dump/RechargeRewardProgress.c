// Class: RechargeRewardProgress


/* RechargeRewardProgress::ButtonPress(int) */

int RechargeRewardProgress::ButtonPress(int param_1)

{
  return param_1;
}


/* non-virtual thunk to RechargeRewardProgress::ButtonPress(int) */

void __thiscall RechargeRewardProgress::ButtonPress(RechargeRewardProgress *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeRewardProgress::onHideBtnChanged() */

void __thiscall RechargeRewardProgress::onHideBtnChanged(RechargeRewardProgress *this)

{
  wchar_t *pwVar1;
  long lVar2;
  undefined1 auStack_10 [8];
  long local_8;
  
  lVar2 = *(long *)(this + 0x118);
  local_8 = ___stack_chk_guard;
  if (this[0x120] == (RechargeRewardProgress)0x0) {
    pwVar1 = L"[RECHARGE_HIDE_BTN]";
  }
  else {
    pwVar1 = L"[RECHARGE_SHOW_BTN]";
  }
  TodStringTranslate(pwVar1);
  FUN_054766c8(lVar2 + 0xd8,auStack_10);
  FUN_05476c50(auStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RechargeRewardProgress::setCurrentRechargeAmount(int) */

void __thiscall
RechargeRewardProgress::setCurrentRechargeAmount(RechargeRewardProgress *this,int param_1)

{
  *(int *)(this + 0xf8) = param_1;
  FUN_049e33c8(*(long *)(this + 0xf0) + 0xe4);
  return;
}


/* RechargeRewardProgress::RechargeRewardProgress() */

void __thiscall RechargeRewardProgress::RechargeRewardProgress(RechargeRewardProgress *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_0692aeb0;
  *(undefined **)(this + 0xd8) = &DAT_0692b1e0;
  FUN_05476574(this + 0xe0);
  *(undefined4 *)(this + 0xf8) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x100));
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  this[0x120] = (RechargeRewardProgress)0x1;
  return;
}


/* RechargeRewardProgress::~RechargeRewardProgress() */

void __thiscall RechargeRewardProgress::~RechargeRewardProgress(RechargeRewardProgress *this)

{
  *(undefined ***)this = &PTR_GetClass_0692aeb0;
  *(undefined **)(this + 0xd8) = &DAT_0692b1e0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x100));
  FUN_05476c50(this + 0xe0);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* RechargeRewardProgress::~RechargeRewardProgress() */

void __thiscall RechargeRewardProgress::~RechargeRewardProgress(RechargeRewardProgress *this)

{
  ~RechargeRewardProgress(this);
  AK::FreeHook(this);
  return;
}


/* RechargeRewardProgress::ButtonDepress(int) */

void __thiscall RechargeRewardProgress::ButtonDepress(RechargeRewardProgress *this,int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Press");
  if (param_1 != 0) {
    return;
  }
  this[0x120] = (RechargeRewardProgress)((byte)this[0x120] ^ 1);
  onHideBtnChanged(this);
  return;
}


/* non-virtual thunk to RechargeRewardProgress::ButtonDepress(int) */

void __thiscall RechargeRewardProgress::ButtonDepress(RechargeRewardProgress *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeRewardProgress::Init() */

void __thiscall RechargeRewardProgress::Init(RechargeRewardProgress *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  RechargeRewardProgressBar *this_00;
  PVZ2UIButton *pPVar7;
  long lVar8;
  undefined1 auStack_128 [8];
  RechargeRewardItem aRStack_120 [8];
  vector avStack_118 [24];
  undefined4 local_100;
  wstring awStack_f8 [56];
  PVZ2UIImage aPStack_c0 [56];
  ActiveItem aAStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  ActiveItem::RefreshDate(aAStack_88);
  RechargeRewardItem::RechargeRewardItem(aRStack_120);
  cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aRStack_120);
  if (cVar1 != '\0') {
    *(undefined4 *)(this + 0xf8) = local_100;
    std::vector<int,std::allocator<int>>::operator=
              ((vector<int,std::allocator<int>> *)(this + 0x100),avStack_118);
  }
  this_00 = ::operator_new(0x120);
  RechargeRewardProgressBar::RechargeRewardProgressBar
            (this_00,*(int *)(this + 0xf8),(vector *)(this + 0x100));
  lVar8 = *(long *)this_00;
  *(RechargeRewardProgressBar **)(this + 0xf0) = this_00;
  (**(code **)(lVar8 + 0x198))
            (this_00,0,0,*(undefined4 *)(this + 0x50),*(undefined4 *)(this + 0x54));
  RechargeRewardProgressBar::Init(*(RechargeRewardProgressBar **)(this + 0xf0));
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf0));
  FUN_05478178(awStack_f8,L"[RECHARGE_SHOW_BTN]",auStack_128);
  Sexy::Color::Color((Color *)aPStack_c0,1);
  pPVar7 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar7,0,(ButtonListener *)(this + 0xd8),awStack_f8,(Color *)aPStack_c0);
  *(PVZ2UIButton **)(this + 0x118) = pPVar7;
  FUN_05476c50(awStack_f8);
  nop();
  pPVar7 = *(PVZ2UIButton **)(this + 0x118);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_f8,&DAT_06b76f00,3);
  PVZ2UIImage::PVZ2UIImage(aPStack_c0,&DAT_06b76f78,3);
  PVZ2UIButton::SetDialogStates(pPVar7,(PVZ2UIImage *)awStack_f8,aPStack_c0);
  iVar3 = FUN_049e37f4(0x50);
  uVar4 = FUN_049e37f4(0x2d);
  iVar2 = *(int *)(this + 0x50);
  iVar5 = FUN_049e37f4(0x19);
  uVar6 = FUN_049e37f4(5);
  (**(code **)(**(long **)(this + 0x118) + 0x198))
            (*(long **)(this + 0x118),(iVar2 - iVar3) - iVar5,uVar6,iVar3,uVar4);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x118));
  RechargeRewardItem::~RechargeRewardItem(aRStack_120);
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeRewardProgress::Draw(Sexy::Graphics*) */

void __thiscall RechargeRewardProgress::Draw(RechargeRewardProgress *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Image *pIVar6;
  LotteryResultProgressBar *this_00;
  undefined8 uVar7;
  PrimeTypeface *pPVar8;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  Insets aIStack_38 [16];
  wstring awStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b77040);
  iVar1 = *(int *)(this + 0x50);
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b77040);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  iVar3 = FUN_049e37f4(10);
  Sexy::Graphics::DrawImage(param_1,pIVar6,(iVar1 - iVar2) / 2,iVar3);
  iVar2 = FUN_049e37f4(0xfa);
  iVar1 = *(int *)(this + 0x50);
  iVar3 = FUN_049e37f4(10);
  iVar4 = FUN_049e37f4(0x87);
  iVar5 = FUN_049e37f4(0x28);
  Sexy::Insets::Insets(aIStack_38,iVar1 - iVar2,iVar3,iVar4,iVar5);
  Sexy::Insets::Insets(aIStack_18,aIStack_38);
  uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b77278);
  Draw9SliceImage(param_1,aIStack_18,uVar7);
  FUN_05476574(auStack_48);
  if (this[0x120] == (RechargeRewardProgress)0x0) {
    FUN_05478178(awStack_28,L"[RECHARGE_TOTAL_NUM]",auStack_40);
    TodReplaceNumberString(awStack_28,L"{NUMBER}",*(int *)(this + 0xf8));
    FUN_054766c8(auStack_48,aIStack_18);
    FUN_05476c50(aIStack_18);
    FUN_05476c50(awStack_28);
    nop();
  }
  else {
    TodStringTranslate(L"[RECHARGE_TOTAL_NUM_INVISIBLE]");
    FUN_054766c8(auStack_48,aIStack_18);
    FUN_05476c50(aIStack_18);
  }
  pPVar8 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Insets::Insets((Insets *)awStack_28,aIStack_38);
  FUN_05477b24(auStack_40,auStack_48);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_AlmanacDesc);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar8,param_1,(Insets *)awStack_28,auStack_40,1,1,aIStack_18,0);
  FUN_05476c50(auStack_40);
  iVar2 = FUN_049e37f4(0x10);
  iVar3 = FUN_049e37f4(0x34);
  iVar1 = *(int *)(this + 0x50);
  iVar4 = FUN_049e37f4(0x84);
  Sexy::Insets::Insets((Insets *)awStack_28,iVar2,iVar3,iVar1 + iVar2 * -2,iVar4);
  Sexy::Insets::Insets(aIStack_18,(Insets *)awStack_28);
  uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b773e8);
  Draw9SliceImage(param_1,aIStack_18,uVar7);
  nop();
  FUN_05476c50(auStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

