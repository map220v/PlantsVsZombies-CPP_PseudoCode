// Class: PennyClassroomPlayerSurveySelectBox


/* PennyClassroomPlayerSurveySelectBox::~PennyClassroomPlayerSurveySelectBox() */

void __thiscall
PennyClassroomPlayerSurveySelectBox::~PennyClassroomPlayerSurveySelectBox
          (PennyClassroomPlayerSurveySelectBox *this)

{
  *(undefined ***)this = &PTR_GetClass_069cd6b0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069cd9e0;
  PlayerSurveySelectBox::~PlayerSurveySelectBox((PlayerSurveySelectBox *)this);
  return;
}


/* PennyClassroomPlayerSurveySelectBox::~PennyClassroomPlayerSurveySelectBox() */

void __thiscall
PennyClassroomPlayerSurveySelectBox::~PennyClassroomPlayerSurveySelectBox
          (PennyClassroomPlayerSurveySelectBox *this)

{
  ~PennyClassroomPlayerSurveySelectBox(this);
  AK::FreeHook(this);
  return;
}


/* PennyClassroomPlayerSurveySelectBox::PennyClassroomPlayerSurveySelectBox() */

void __thiscall
PennyClassroomPlayerSurveySelectBox::PennyClassroomPlayerSurveySelectBox
          (PennyClassroomPlayerSurveySelectBox *this)

{
  PlayerSurveySelectBox::PlayerSurveySelectBox((PlayerSurveySelectBox *)this);
  this[0xf8] = (PennyClassroomPlayerSurveySelectBox)0x0;
  *(undefined ***)this = &PTR_GetClass_069cd6b0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069cd9e0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyClassroomPlayerSurveySelectBox::Draw(Sexy::Graphics*) */

void __thiscall
PennyClassroomPlayerSurveySelectBox::Draw
          (PennyClassroomPlayerSurveySelectBox *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  CachedUIResourcePtr<Sexy::Image> *pCVar6;
  Image *pIVar7;
  Insets aIStack_38 [8];
  int local_30;
  int local_2c;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_38,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  if (this[0xe4] == (PennyClassroomPlayerSurveySelectBox)0x0) {
    Sexy::Insets::Insets(aIStack_18,aIStack_38);
    uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9c3c8);
    Draw9SliceImage(param_1,aIStack_18,uVar5);
  }
  else {
    Sexy::Insets::Insets(aIStack_18,aIStack_38);
    if (this[0xf8] == (PennyClassroomPlayerSurveySelectBox)0x0) {
      pCVar6 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9c548;
    }
    else {
      pCVar6 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9c2c0;
    }
    uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->(pCVar6);
    Draw9SliceImage(param_1,aIStack_18,uVar5);
    pCVar6 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9c298;
    this_00 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9c298);
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    this_01 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9c298);
    iVar2 = SalesProgressBar::GetCurrentLevel(this_01);
    iVar3 = FUN_04de8b64(10);
    iVar4 = FUN_04de8b64(5);
    if (this[0xf8] == (PennyClassroomPlayerSurveySelectBox)0x0) {
      pCVar6 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9c470;
    }
    pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar6);
    Sexy::Graphics::DrawImage
              (param_1,pIVar7,(local_30 - (int)(float)iVar1) + iVar3,
               (local_2c - (int)(float)iVar2) + iVar4,(int)(float)iVar1,(int)(float)iVar2);
  }
  iVar1 = FUN_04de8b64(2);
  iVar2 = FUN_04de8b64(4);
  Sexy::Insets::Insets(aIStack_18,iVar1,0,*(int *)(this + 0x50) - iVar2,*(int *)(this + 0x54));
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16);
  Sexy::Insets::Insets(aIStack_28,0x66,0x37,0,0xff);
  WriteWordInRect(param_1,this + 0xf0,aIStack_18,uVar5,aIStack_28,5,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PennyClassroomPlayerSurveySelectBox::ButtonDepress(int) */

void PennyClassroomPlayerSurveySelectBox::ButtonDepress(int param_1)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = (ulong)(uint)param_1;
  lVar3 = UISingletonDialog<UIPennyClassroomSurvey>::GetSingletonPtr();
  cVar1 = FUN_04de7960(*(undefined1 *)(lVar3 + 0x248));
  if ((cVar1 == '\0') && (*(char *)(uVar2 + 0xe4) == '\0')) {
    *(undefined1 *)(uVar2 + 0xe4) = 1;
    MessageRouter::Post<int,int>
              ((MessageRouter *)gMessageRouter,Message::NotifySelectBoxSelected,
               *(int *)(uVar2 + 0xe0));
    MessageRouter::Post<bool,bool>
              ((MessageRouter *)gMessageRouter,Message::NotifySelectBoxIsCorrect,
               *(bool *)(uVar2 + 0xf8));
    return;
  }
  return;
}


/* non-virtual thunk to PennyClassroomPlayerSurveySelectBox::ButtonDepress(int) */

void __thiscall
PennyClassroomPlayerSurveySelectBox::ButtonDepress
          (PennyClassroomPlayerSurveySelectBox *this,int param_1)

{
  ButtonDepress((int)this + -0xd8);
  return;
}

