// Class: BossChallengeInfoRankItem


/* BossChallengeInfoRankItem::BossChallengeInfoRankItem() */

void __thiscall
BossChallengeInfoRankItem::BossChallengeInfoRankItem(BossChallengeInfoRankItem *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_0697f760;
  BossChallengeRankServerData::BossChallengeRankServerData
            ((BossChallengeRankServerData *)(this + 0xd8));
  this[0xf8] = (BossChallengeInfoRankItem)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossChallengeInfoRankItem::Init(BossChallengeRankServerData const&, bool) */

void __thiscall
BossChallengeInfoRankItem::Init
          (BossChallengeInfoRankItem *this,BossChallengeRankServerData *param_1,bool param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  UIHeadshotIcon *this_00;
  float fVar6;
  float fVar7;
  string asStack_10 [8];
  long local_8;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  uVar5 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0xf4) = *(undefined4 *)(param_1 + 0x1c);
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0xe0) = uVar1;
  *(undefined4 *)(this + 0xe4) = uVar2;
  this[0xf8] = (BossChallengeInfoRankItem)param_2;
  *(undefined4 *)(this + 0xe8) = uVar3;
  *(undefined4 *)(this + 0xec) = uVar4;
  *(undefined4 *)(this + 0xf0) = uVar5;
  fVar6 = (float)FUN_04bfecc8(0x44260000);
  fVar7 = (float)FUN_04bfecc8(0x42840000);
  (**(code **)(*(long *)this + 0x198))(this,0,0,(int)fVar6,(int)fVar7);
  this_00 = (UIHeadshotIcon *)UIHeadshotIcon::create(*(int *)(this + 0xf4));
  UIHeadshotIcon::setPostion(this_00,330.0,0.0);
  UIHeadshotIcon::setScale(this_00,0.4,0.4);
  std::string::string(asStack_10,"B_Lv");
  UIHeadshotIcon::setBackSuffix((string *)this_00);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BossChallengeInfoRankItem::Create(BossChallengeRankServerData const&, bool) */

BossChallengeInfoRankItem *
BossChallengeInfoRankItem::Create(BossChallengeRankServerData *param_1,bool param_2)

{
  BossChallengeInfoRankItem *this;
  
  this = ::operator_new(0x100);
  BossChallengeInfoRankItem(this);
  Init(this,param_1,param_2);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossChallengeInfoRankItem::GetRankString() const */

void BossChallengeInfoRankItem::GetRankString(void)

{
  long in_x0;
  int in_w3;
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0xf8) == '\0') {
    if (*(int *)(in_x0 + 0xe0) == *(int *)(in_x0 + 0xe4)) {
      std::string::string((string *)awStack_10,"[BOSS_CHALLENGE_INFO_RANK]");
      StringHelper::ReplaceNumberString
                ((StringHelper *)awStack_10,(string *)&DAT_0570d078,
                 (wchar_t *)(ulong)*(uint *)(in_x0 + 0xe0),in_w3);
      std::string::~string((string *)awStack_10);
      nop();
    }
    else {
      FUN_05478178(awStack_10,L"[BOSS_CHALLENGE_INFO_RANK]",auStack_20);
      Sexy::StrFormat(L"%d-%d",awStack_18,(ulong)*(uint *)(in_x0 + 0xe0),
                      (ulong)*(uint *)(in_x0 + 0xe4));
      TodReplaceString(awStack_10,L"{RANK}",awStack_18);
      FUN_05476c50(awStack_18);
      FUN_05476c50(awStack_10);
      nop();
    }
  }
  else {
    TodStringTranslate(L"[BOSS_CHALLENGE_INFO_LAST_ITEM]");
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossChallengeInfoRankItem::GetRankDesc() const */

void BossChallengeInfoRankItem::GetRankDesc(void)

{
  long in_x0;
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat(L"[BOSS_CHALLENGE_HEAD_ID_%d]",awStack_10,(ulong)*(uint *)(in_x0 + 0xf4));
  TodStringTranslate(awStack_10);
  FUN_05476c50(awStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossChallengeInfoRankItem::Draw(Sexy::Graphics*) */

void __thiscall BossChallengeInfoRankItem::Draw(BossChallengeInfoRankItem *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  Image *pIVar4;
  long lVar5;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  Image *local_40;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar6 = (float)FUN_04bfecc8(0x44260000);
  fVar7 = (float)FUN_04bfecc8(0x42700000);
  Sexy::Insets::Insets(aIStack_18,0,3,(int)fVar6,(int)fVar7);
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8d308);
  Draw9SliceImage(param_1,aIStack_18,uVar3);
  iVar2 = *(int *)(this + 0xe0);
  if (iVar2 == 1) {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8d330;
LAB_04bffd90:
    local_40 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
    uVar3 = 0x41d00000;
  }
  else {
    if (iVar2 == 2) {
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8d470;
      goto LAB_04bffd90;
    }
    if (iVar2 != 3) {
      GetRankString();
      iVar2 = FUN_04bfecb4();
      fVar6 = (float)FUN_04bfecc8(0x41840000);
      fVar7 = (float)FUN_04bfecc8(0x43020000);
      fVar8 = (float)FUN_04bfecc8(0x42040000);
      Sexy::Insets::Insets(aIStack_28,iVar2,(int)fVar6,(int)fVar7,(int)fVar8);
      uVar3 = PrimeText_Game::Typeface_CafeteriaBlack_26_Outline;
      Sexy::Color::Color((Color *)aIStack_18,3);
      WriteWordInRect(param_1,auStack_30,aIStack_28,uVar3,aIStack_18,5,1);
      FUN_05476c50(auStack_30);
      goto LAB_04bff9c0;
    }
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8d498;
    local_40 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8d498);
    uVar3 = 0x41e80000;
  }
  fVar6 = (float)FUN_04bfecc8(uVar3);
  fVar7 = (float)FUN_04bfecc8(0x42840000);
  lVar5 = CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
  Sexy::Graphics::DrawImage
            (param_1,local_40,(int)fVar6,(int)((fVar7 - (float)*(int *)(lVar5 + 0x3c)) * 0.5));
LAB_04bff9c0:
  GetRankDesc();
  fVar6 = (float)FUN_04bfecc8(0x42f00000);
  fVar7 = (float)FUN_04bfecc8(0x41840000);
  fVar8 = (float)FUN_04bfecc8(0x43480000);
  fVar9 = (float)FUN_04bfecc8(0x42040000);
  Sexy::Insets::Insets(aIStack_28,(int)fVar6,(int)fVar7,(int)fVar8,(int)fVar9);
  uVar3 = PrimeText_Game::Typeface_FZCuYuan_26;
  Sexy::Color::Color((Color *)aIStack_18,0x49,0x27,0);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar3,aIStack_18,4,1);
  FUN_05476c50(auStack_30);
  if (*(int *)(this + 0xe8) != 0) {
    Sexy::StrFormat(L"%d",auStack_30);
    fVar6 = (float)FUN_04bfecc8(0x44110000);
    fVar7 = (float)FUN_04bfecc8(0x41840000);
    fVar8 = (float)FUN_04bfecc8(0x42b40000);
    fVar9 = (float)FUN_04bfecc8(0x42040000);
    Sexy::Insets::Insets(aIStack_28,(int)fVar6,(int)fVar7,(int)fVar8,(int)fVar9);
    uVar3 = PrimeText_Game::Typeface_CafeteriaBlack_26_Outline;
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar3,aIStack_18,5,1);
    FUN_05476c50(auStack_30);
    pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8d3b0);
    fVar6 = (float)FUN_04bfecc8(0x44070000);
    fVar7 = (float)FUN_04bfecc8(0x42840000);
    lVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8d3b0);
    iVar2 = *(int *)(lVar5 + 0x3c);
    lVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8d3b0);
    iVar1 = *(int *)(lVar5 + 0x38);
    lVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8d3b0);
    Sexy::Graphics::DrawImage
              (param_1,pIVar4,(int)fVar6,(int)((fVar7 - (float)iVar2 * 1.5) * 0.5),
               (int)((float)iVar1 * 1.5),(int)((float)*(int *)(lVar5 + 0x3c) * 1.5));
  }
  if (*(int *)(this + 0xec) != 0) {
    Sexy::StrFormat(L"%d",auStack_30);
    fVar6 = (float)FUN_04bfecc8(0x43dc0000);
    fVar7 = (float)FUN_04bfecc8(0x41840000);
    fVar8 = (float)FUN_04bfecc8(0x42b40000);
    fVar9 = (float)FUN_04bfecc8(0x42040000);
    Sexy::Insets::Insets(aIStack_28,(int)fVar6,(int)fVar7,(int)fVar8,(int)fVar9);
    uVar3 = PrimeText_Game::Typeface_CafeteriaBlack_26_Outline;
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar3,aIStack_18,5,1);
    FUN_05476c50(auStack_30);
    pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8d420);
    fVar6 = (float)FUN_04bfecc8(0x43c80000);
    fVar7 = (float)FUN_04bfecc8(0x42840000);
    lVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8d420);
    iVar2 = *(int *)(lVar5 + 0x3c);
    lVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8d420);
    iVar1 = *(int *)(lVar5 + 0x38);
    lVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8d420);
    Sexy::Graphics::DrawImage
              (param_1,pIVar4,(int)fVar6,(int)((fVar7 - (float)iVar2 * 1.5) * 0.5),
               (int)((float)iVar1 * 1.5),(int)((float)*(int *)(lVar5 + 0x3c) * 1.5));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BossChallengeInfoRankItem::~BossChallengeInfoRankItem() */

void __thiscall
BossChallengeInfoRankItem::~BossChallengeInfoRankItem(BossChallengeInfoRankItem *this)

{
  *(undefined ***)this = &PTR_GetClass_0697f760;
  BossChallengeRankServerData::~BossChallengeRankServerData
            ((BossChallengeRankServerData *)(this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* BossChallengeInfoRankItem::~BossChallengeInfoRankItem() */

void __thiscall
BossChallengeInfoRankItem::~BossChallengeInfoRankItem(BossChallengeInfoRankItem *this)

{
  ~BossChallengeInfoRankItem(this);
  AK::FreeHook(this);
  return;
}

