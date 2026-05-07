// Class: PuzzleGetGiftButton


/* PuzzleGetGiftButton::Update() */

void __thiscall PuzzleGetGiftButton::Update(PuzzleGetGiftButton *this)

{
  float fVar1;
  float fVar2;
  
  Sexy::ButtonWidget::Update((ButtonWidget *)this);
  fVar2 = *(float *)(this + 0x2c4);
  if ((0.0 < fVar2) && (fVar1 = (float)PVZ_T(), fVar2 < fVar1)) {
    (**(code **)(*(long *)this + 0x188))(this,0);
    *(undefined4 *)(this + 0x2c4) = 0xbf800000;
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PuzzleGetGiftButton::~PuzzleGetGiftButton() */

void __thiscall PuzzleGetGiftButton::~PuzzleGetGiftButton(PuzzleGetGiftButton *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06986f10;
  *(undefined ***)(this + 0x198) = &PTR__PuzzleGetGiftButton_06987268;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_LimitLottery");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_PlanformGift");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  FUN_05476c50(this + 0x338);
  FUN_05476c50(this + 0x330);
  PVZ2UIButton::~PVZ2UIButton((PVZ2UIButton *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PuzzleGetGiftButton::~PuzzleGetGiftButton() */

void __thiscall PuzzleGetGiftButton::~PuzzleGetGiftButton(PuzzleGetGiftButton *this)

{
  ~PuzzleGetGiftButton(this + -0x198);
  return;
}


/* PuzzleGetGiftButton::~PuzzleGetGiftButton() */

void __thiscall PuzzleGetGiftButton::~PuzzleGetGiftButton(PuzzleGetGiftButton *this)

{
  ~PuzzleGetGiftButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PuzzleGetGiftButton::~PuzzleGetGiftButton() */

void __thiscall PuzzleGetGiftButton::~PuzzleGetGiftButton(PuzzleGetGiftButton *this)

{
  ~PuzzleGetGiftButton(this + -0x198);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PuzzleGetGiftButton::Draw(Sexy::Graphics*) */

void __thiscall PuzzleGetGiftButton::Draw(PuzzleGetGiftButton *this,Graphics *param_1)

{
  undefined8 uVar1;
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ2UIButton::Draw((PVZ2UIButton *)this,param_1);
  if (*(Image **)(this + 0x310) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0x310),*(int *)(this + 0x2fc),*(int *)(this + 0x300),
               *(int *)(this + 0x304),*(int *)(this + 0x308));
  }
  uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_1,this + 0x338,this + 0x318,uVar1,aCStack_18,5,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PuzzleGetGiftButton::SetGachaCount(int) */

void PuzzleGetGiftButton::SetGachaCount(int param_1)

{
  string *extraout_x1;
  Sexy aSStack_28 [8];
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat("%d",aSStack_28,(ulong)*(uint *)((ulong)(uint)param_1 + 0x328));
  TodStringTranslate(L"[LOTTERY_TIMES]");
  Sexy::ToSexyString(aSStack_28,extraout_x1);
  TodReplaceString(awStack_20,L"{NUMBER}",awStack_18);
  FUN_054766c8((ulong)(uint)param_1 + 0x338,auStack_10);
  FUN_05476c50(auStack_10);
  FUN_05476c50(awStack_18);
  FUN_05476c50(awStack_20);
  std::string::~string((string *)aSStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PuzzleGetGiftButton::InitRect() */

void __thiscall PuzzleGetGiftButton::InitRect(PuzzleGetGiftButton *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  lVar7 = *(long *)(this + 0x310);
  local_8 = ___stack_chk_guard;
  if (lVar7 != 0) {
    iVar1 = FUN_04c409f4(0x19);
    iVar2 = FUN_04c409f4(0x14);
    iVar3 = FUN_04c409f4((int)((float)*(int *)(lVar7 + 0x38) * 0.4));
    iVar4 = FUN_04c409f4((int)((float)*(int *)(lVar7 + 0x3c) * 0.4));
    Sexy::Insets::Insets((Insets *)&local_18,iVar1,iVar2,iVar3,iVar4);
    *(undefined8 *)(this + 0x2fc) = local_18;
    *(undefined8 *)(this + 0x304) = uStack_10;
  }
  if (*(int *)(this + 0x340) == 1) {
    iVar3 = FUN_04c409f4(0x46);
    iVar1 = *(int *)(this + 0x50);
    iVar4 = FUN_04c409f4(0x19);
    iVar2 = *(int *)(this + 0x54);
    iVar5 = FUN_04c409f4(0x32);
    iVar6 = FUN_04c409f4(0x1e);
    Sexy::Insets::Insets((Insets *)&local_18,iVar1 - iVar3,iVar2 / 2 - iVar4,iVar5,iVar6);
    *(undefined8 *)(this + 0x318) = local_18;
    *(undefined8 *)(this + 800) = uStack_10;
  }
  else {
    iVar2 = FUN_04c409f4(0x19);
    iVar1 = *(int *)(this + 0x54);
    iVar3 = FUN_04c409f4(0x1e);
    Sexy::Insets::Insets((Insets *)&local_18,0,iVar1 / 2 - iVar2,*(int *)(this + 0x50),iVar3);
    *(undefined8 *)(this + 0x318) = local_18;
    *(undefined8 *)(this + 800) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PuzzleGetGiftButton::Resize(Sexy::TRect<int> const&) */

void __thiscall PuzzleGetGiftButton::Resize(PuzzleGetGiftButton *this,TRect *param_1)

{
  PlantHeadshot::Resize((PlantHeadshot *)this,param_1);
  InitRect(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PuzzleGetGiftButton::UpdateButtonStatus() */

void __thiscall PuzzleGetGiftButton::UpdateButtonStatus(PuzzleGetGiftButton *this)

{
  wchar_t *pwVar1;
  undefined8 uVar2;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x340) == 0) {
    pwVar1 = L"[LOTTERY_TIMES_GET_INFO]";
  }
  else {
    if (*(int *)(this + 0x340) == 1) {
      uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b905f0);
      *(undefined8 *)(this + 0x310) = uVar2;
      SetGachaCount((int)this);
      goto LAB_04c422a0;
    }
    pwVar1 = L"[LOTTERY_TIMES_EMPTY]";
  }
  TodStringTranslate(pwVar1);
  FUN_054766c8(this + 0x338,auStack_10);
  FUN_05476c50(auStack_10);
LAB_04c422a0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PuzzleGetGiftButton::InitButton() */

void __thiscall PuzzleGetGiftButton::InitButton(PuzzleGetGiftButton *this)

{
  PVZ2UIImage aPStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b907a0,3);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b90620,3);
  PVZ2UIButton::SetDialogStates((PVZ2UIButton *)this,aPStack_78,aPStack_40);
  InitRect(this);
  UpdateButtonStatus(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PuzzleGetGiftButton::PuzzleGetGiftButton(int, Sexy::ButtonListener*, GachaStatus, int) */

void __thiscall
PuzzleGetGiftButton::PuzzleGetGiftButton
          (PuzzleGetGiftButton *this,int param_1,ButtonListener *param_2,undefined4 param_4,
          undefined4 param_5)

{
  LawnApp *pLVar1;
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_20,&DAT_056f11a8,auStack_28);
  Sexy::Color::Color((Color *)asStack_18,1);
  PVZ2UIButton::PVZ2UIButton((PVZ2UIButton *)this,param_1,param_2,awStack_20,(Color *)asStack_18);
  FUN_05476c50(awStack_20);
  nop();
  *(undefined ***)this = &PTR_GetClass_06986f10;
  *(undefined ***)(this + 0x198) = &PTR__PuzzleGetGiftButton_06987268;
  Sexy::Insets::Insets((Insets *)(this + 0x2fc));
  Sexy::Insets::Insets((Insets *)(this + 0x318));
  *(undefined4 *)(this + 0x328) = param_5;
  FUN_05476574(this + 0x330);
  FUN_05476574(this + 0x338);
  *(undefined4 *)(this + 0x340) = param_4;
  pLVar1 = gLawnApp;
  std::string::string(asStack_18,"UI_LimitLottery");
  LawnApp::LoadGroup(pLVar1,asStack_18);
  std::string::~string(asStack_18);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_18,"UI_PlanformGift");
  LawnApp::LoadGroup(pLVar1,asStack_18);
  std::string::~string(asStack_18);
  nop();
  *(undefined8 *)(this + 0x310) = 0;
  InitButton(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

