// Class: LoginRewardContent


/* LoginRewardContent::~LoginRewardContent() */

void __thiscall LoginRewardContent::~LoginRewardContent(LoginRewardContent *this)

{
  *(undefined ***)this = &PTR_GetClass_06931e00;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06932128;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LoginRewardContent::~LoginRewardContent() */

void __thiscall LoginRewardContent::~LoginRewardContent(LoginRewardContent *this)

{
  ~LoginRewardContent(this);
  AK::FreeHook(this);
  return;
}


/* LoginRewardContent::Resize(int, int, int, int) */

void __thiscall
LoginRewardContent::Resize(LoginRewardContent *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  LotteryResultProgressBar *pLVar5;
  int iVar6;
  long *plVar7;
  code *pcVar8;
  
  Sexy::Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
  iVar6 = *(int *)(this + 0x50);
  if (*(int *)(this + 0x10c) != 9) {
    pLVar5 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a268);
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar5);
    iVar6 = iVar6 - iVar1;
  }
  plVar7 = *(long **)(this + 0x118);
  *(int *)(this + 0x108) = iVar6;
  if (plVar7 != (long *)0x0) {
    pcVar8 = *(code **)(*plVar7 + 0x198);
    pLVar5 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79f60);
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar5);
    uVar2 = FUN_04a38b1c(0xfa);
    pLVar5 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79f60);
    uVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar5);
    uVar4 = FUN_04a38b1c(0x32);
    (*pcVar8)(plVar7,(iVar6 - iVar1) / 2,uVar2,uVar3,uVar4);
  }
  return;
}


/* LoginRewardContent::Draw(Sexy::Graphics*) */

void __thiscall LoginRewardContent::Draw(LoginRewardContent *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  LotteryResultProgressBar *pLVar7;
  SalesProgressBar *pSVar8;
  Image *pIVar9;
  
  nop();
  if (this[0x112] != (LoginRewardContent)0x0) {
    iVar1 = FUN_04a38b1c(0x46);
    pSVar8 = (SalesProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a170);
    iVar2 = SalesProgressBar::GetCurrentLevel(pSVar8);
    pSVar8 = (SalesProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a4f8);
    iVar3 = SalesProgressBar::GetCurrentLevel(pSVar8);
    pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a170);
    Sexy::Graphics::DrawImage(param_1,pIVar9,0,iVar1 - (iVar2 - iVar3) / 2);
  }
  if (*(long *)(this + 0xe8) != 0) {
    pLVar7 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a170);
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0xe8));
    iVar3 = FUN_04a38b1c(0x46);
    Sexy::Graphics::DrawImage(param_1,*(Image **)(this + 0xe8),(iVar1 - iVar2) / 2,iVar3);
  }
  if (*(LotteryResultProgressBar **)(this + 0xe0) != (LotteryResultProgressBar *)0x0) {
    iVar1 = *(int *)(this + 0x108);
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0xe0));
    iVar3 = FUN_04a38b1c(0x82);
    Sexy::Graphics::DrawImage(param_1,*(Image **)(this + 0xe0),(iVar1 - iVar2) / 2,iVar3);
  }
  if (*(LotteryResultProgressBar **)(this + 0xf0) != (LotteryResultProgressBar *)0x0) {
    iVar1 = *(int *)(this + 0x108);
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0xf0));
    iVar3 = FUN_04a38b1c(0x4b);
    Sexy::Graphics::DrawImage(param_1,*(Image **)(this + 0xf0),(iVar1 - iVar2) / 2,iVar3);
  }
  if (*(LotteryResultProgressBar **)(this + 0xf8) != (LotteryResultProgressBar *)0x0) {
    iVar1 = *(int *)(this + 0x108);
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0xf8));
    iVar3 = FUN_04a38b1c(0x14);
    Sexy::Graphics::DrawImage(param_1,*(Image **)(this + 0xf8),(iVar1 - iVar2) / 2,iVar3);
  }
  if (*(int *)(this + 0x10c) != 9) {
    pLVar7 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a170);
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
    pLVar7 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a4f8);
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
    iVar3 = FUN_04a38b1c(0x46);
    pSVar8 = (SalesProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a4f8);
    iVar4 = SalesProgressBar::GetCurrentLevel(pSVar8);
    pSVar8 = (SalesProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a268);
    iVar5 = SalesProgressBar::GetCurrentLevel(pSVar8);
    pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a268);
    Sexy::Graphics::DrawImage(param_1,pIVar9,(iVar1 + iVar2) / 2,iVar3 + (iVar4 - iVar5) / 2);
  }
  if (this[0x110] == (LoginRewardContent)0x0) {
    return;
  }
  iVar2 = FUN_04a38b1c(0x46);
  pSVar8 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a4f8);
  iVar3 = SalesProgressBar::GetCurrentLevel(pSVar8);
  pSVar8 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79f88);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar8);
  pLVar7 = *(LotteryResultProgressBar **)(this + 0x100);
  iVar1 = *(int *)(this + 0x108);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
  iVar6 = FUN_04a38b1c(0xfa);
  Sexy::Graphics::DrawImage(param_1,(Image *)pLVar7,(iVar1 - iVar5) / 2,iVar6);
  pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79f88);
  iVar1 = *(int *)(this + 0x108);
  pLVar7 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79f88);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
  Sexy::Graphics::DrawImage(param_1,pIVar9,(iVar1 - iVar5) / 2,iVar2 + (iVar3 - iVar4) / 2);
  return;
}


/* LoginRewardContent::onTotalLoginRewardReceived(int) */

void __thiscall LoginRewardContent::onTotalLoginRewardReceived(LoginRewardContent *this,int param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(this + 0x10c) == param_1) {
    this[0x110] = (LoginRewardContent)0x1;
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a078);
    *(undefined8 *)(this + 0x100) = uVar1;
    if (*(long *)(this + 0x118) != 0) {
      (**(code **)(*(long *)this + 0x68))(this);
      if (*(long **)(this + 0x118) != (long *)0x0) {
        (**(code **)(**(long **)(this + 0x118) + 0x18))();
      }
      *(undefined8 *)(this + 0x118) = 0;
      return;
    }
  }
  return;
}


/* LoginRewardContent::InitView() */

void __thiscall LoginRewardContent::InitView(LoginRewardContent *this)

{
  undefined8 uVar1;
  
  switch(*(undefined4 *)(this + 0x10c)) {
  case 0:
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a308);
    *(undefined8 *)(this + 0xe0) = uVar1;
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a4f8);
    *(undefined8 *)(this + 0xe8) = uVar1;
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a5a8);
    *(undefined8 *)(this + 0xf0) = uVar1;
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79f10);
    *(undefined8 *)(this + 0xf8) = uVar1;
    if (this[0x112] != (LoginRewardContent)0x0) {
      uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a5d0);
      *(undefined8 *)(this + 0xf8) = uVar1;
    }
    break;
  case 1:
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a4a8);
    *(undefined8 *)(this + 0xe0) = uVar1;
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a4f8);
    *(undefined8 *)(this + 0xe8) = uVar1;
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a6c8);
    *(undefined8 *)(this + 0xf0) = uVar1;
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a4d0);
    *(undefined8 *)(this + 0xf8) = uVar1;
    if (this[0x112] != (LoginRewardContent)0x0) {
      uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a120);
      *(undefined8 *)(this + 0xf8) = uVar1;
    }
    break;
  case 2:
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a1c0);
    *(undefined8 *)(this + 0xe0) = uVar1;
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a4f8);
    *(undefined8 *)(this + 0xe8) = uVar1;
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79f38);
    *(undefined8 *)(this + 0xf0) = uVar1;
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79fd8);
    *(undefined8 *)(this + 0xf8) = uVar1;
    if (this[0x112] != (LoginRewardContent)0x0) {
      uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a648);
      *(undefined8 *)(this + 0xf8) = uVar1;
    }
    break;
  case 3:
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79d60);
    *(undefined8 *)(this + 0xe0) = uVar1;
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a4f8);
    *(undefined8 *)(this + 0xe8) = uVar1;
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a240);
    *(undefined8 *)(this + 0xf0) = uVar1;
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a558);
    *(undefined8 *)(this + 0xf8) = uVar1;
    if (this[0x112] != (LoginRewardContent)0x0) {
      uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a198);
      *(undefined8 *)(this + 0xf8) = uVar1;
    }
    break;
  case 4:
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79e60);
    *(undefined8 *)(this + 0xe0) = uVar1;
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a580);
    *(undefined8 *)(this + 0xe8) = uVar1;
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a1e8);
    *(undefined8 *)(this + 0xf0) = uVar1;
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a428);
    *(undefined8 *)(this + 0xf8) = uVar1;
    if (this[0x112] != (LoginRewardContent)0x0) {
      uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a678);
      *(undefined8 *)(this + 0xf8) = uVar1;
    }
    break;
  case 5:
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79dc0);
    *(undefined8 *)(this + 0xe0) = uVar1;
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a4f8);
    *(undefined8 *)(this + 0xe8) = uVar1;
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a290);
    *(undefined8 *)(this + 0xf0) = uVar1;
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a620);
    *(undefined8 *)(this + 0xf8) = uVar1;
    if (this[0x112] != (LoginRewardContent)0x0) {
      uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a218);
      *(undefined8 *)(this + 0xf8) = uVar1;
    }
    break;
  case 6:
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a000);
    *(undefined8 *)(this + 0xe0) = uVar1;
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a580);
    *(undefined8 *)(this + 0xe8) = uVar1;
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79e10);
    *(undefined8 *)(this + 0xf0) = uVar1;
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a148);
    *(undefined8 *)(this + 0xf8) = uVar1;
    if (this[0x112] != (LoginRewardContent)0x0) {
      uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a2b8);
      *(undefined8 *)(this + 0xf8) = uVar1;
    }
    break;
  case 7:
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79e38);
    *(undefined8 *)(this + 0xe0) = uVar1;
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a580);
    *(undefined8 *)(this + 0xe8) = uVar1;
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79d88);
    *(undefined8 *)(this + 0xf0) = uVar1;
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79d38);
    *(undefined8 *)(this + 0xf8) = uVar1;
    if (this[0x112] != (LoginRewardContent)0x0) {
      uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a388);
      *(undefined8 *)(this + 0xf8) = uVar1;
    }
    break;
  case 8:
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a720);
    *(undefined8 *)(this + 0xe0) = uVar1;
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a4f8);
    *(undefined8 *)(this + 0xe8) = uVar1;
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a6f0);
    *(undefined8 *)(this + 0xf0) = uVar1;
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a520);
    *(undefined8 *)(this + 0xf8) = uVar1;
    if (this[0x112] != (LoginRewardContent)0x0) {
      uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a028);
      *(undefined8 *)(this + 0xf8) = uVar1;
    }
    break;
  case 9:
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a360);
    *(undefined8 *)(this + 0xe0) = uVar1;
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a580);
    *(undefined8 *)(this + 0xe8) = uVar1;
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a3b0);
    *(undefined8 *)(this + 0xf0) = uVar1;
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a480);
    *(undefined8 *)(this + 0xf8) = uVar1;
    if (this[0x112] != (LoginRewardContent)0x0) {
      uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a5f8);
      *(undefined8 *)(this + 0xf8) = uVar1;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LoginRewardContent::LoginRewardContent(int, bool, bool, bool) */

void __thiscall
LoginRewardContent::LoginRewardContent
          (LoginRewardContent *this,int param_1,bool param_2,bool param_3,bool param_4)

{
  undefined *puVar1;
  PVZ2UIButton *pPVar2;
  undefined8 uVar3;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 auStack_98 [8];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined4 *)(this + 0x108) = *(undefined4 *)(this + 0x50);
  *(int *)(this + 0x10c) = param_1;
  this[0x112] = (LoginRewardContent)param_4;
  *(undefined ***)this = &PTR_GetClass_06931e00;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06932128;
  this[0x110] = (LoginRewardContent)param_2;
  this[0x111] = (LoginRewardContent)param_3;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  InitView(this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onTotalLoginRewardReceived);
  local_c0 = local_90;
  uStack_b8 = uStack_88;
  local_b0 = local_80;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<LoginRewardContent,void(LoginRewardContent::*)(int)>>
            ((MessageRouter *)puVar1,Message::TotalLoginRewardReceived,&local_c0);
  if (this[0x110] == (LoginRewardContent)0x0) {
    FUN_05478178(awStack_78,L"[PLANT_OBTAIN]",auStack_98);
    Sexy::Color::Color((Color *)aPStack_40,1);
    pPVar2 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar2,1,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
    *(PVZ2UIButton **)(this + 0x118) = pPVar2;
    FUN_05476c50(awStack_78);
    nop();
    pPVar2 = *(PVZ2UIButton **)(this + 0x118);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b79f60,3);
    PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b7a458,3);
    PVZ2UIButton::SetDialogStates(pPVar2,(PVZ2UIImage *)awStack_78,aPStack_40);
    (**(code **)(**(long **)(this + 0x118) + 0x188))(*(long **)(this + 0x118),!param_3);
    Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0x118));
  }
  else {
    uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a078);
    *(undefined8 *)(this + 0x100) = uVar3;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LoginRewardContent::ButtonDepress(int) */

void __thiscall LoginRewardContent::ButtonDepress(LoginRewardContent *this,int param_1)

{
  if (param_1 != 1) {
    return;
  }
  MessageRouter::Post<int,int>
            ((MessageRouter *)gMessageRouter,Message::ProcessLoginRewardResult,
             *(int *)(this + 0x10c));
  MessageRouter::Post<int,int>
            ((MessageRouter *)gMessageRouter,Message::LoginRewardCollection,
             (&DAT_05754e60)[*(int *)(this + 0x10c)]);
  return;
}


/* non-virtual thunk to LoginRewardContent::ButtonDepress(int) */

void __thiscall LoginRewardContent::ButtonDepress(LoginRewardContent *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

