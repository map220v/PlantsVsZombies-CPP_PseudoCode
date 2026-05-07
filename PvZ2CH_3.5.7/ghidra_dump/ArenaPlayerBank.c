// Class: ArenaPlayerBank


/* ArenaPlayerBank::SetPlayerName(std::wstring) */

void ArenaPlayerBank::SetPlayerName(long param_1)

{
  thunk_FUN_05477b9c(param_1 + 0x178);
  return;
}


/* ArenaPlayerBank::~ArenaPlayerBank() */

void __thiscall ArenaPlayerBank::~ArenaPlayerBank(ArenaPlayerBank *this)

{
  *(undefined ***)this = &PTR_GetClass_06953fb0;
  *(undefined ***)(this + 0x10) = &PTR__ArenaPlayerBank_06954150;
  FUN_05476c50(this + 0x1e0);
  FUN_05476c50(this + 0x1d8);
  FUN_05476c50(this + 0x1d0);
  FUN_05476c50(this + 0x1c8);
  FUN_05476c50(this + 0x1c0);
  FUN_05476c50(this + 0x1b8);
  FUN_05476c50(this + 0x1b0);
  FUN_05476c50(this + 0x1a0);
  FUN_05476c50(this + 0x198);
  FUN_05476c50(this + 400);
  FUN_05476c50(this + 0x188);
  FUN_05476c50(this + 0x180);
  FUN_05476c50(this + 0x178);
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to ArenaPlayerBank::~ArenaPlayerBank() */

void __thiscall ArenaPlayerBank::~ArenaPlayerBank(ArenaPlayerBank *this)

{
  ~ArenaPlayerBank(this + -0x10);
  return;
}


/* ArenaPlayerBank::~ArenaPlayerBank() */

void __thiscall ArenaPlayerBank::~ArenaPlayerBank(ArenaPlayerBank *this)

{
  ~ArenaPlayerBank(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ArenaPlayerBank::~ArenaPlayerBank() */

void __thiscall ArenaPlayerBank::~ArenaPlayerBank(ArenaPlayerBank *this)

{
  ~ArenaPlayerBank(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaPlayerBank::StaticClassInit() */

void ArenaPlayerBank::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"ArenaPlayerBank");
    (*pcVar2)(plVar1,asStack_10,FUN_04b14eb4,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArenaPlayerBank::StaticGetClass() */

long * ArenaPlayerBank::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"ArenaPlayerBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArenaPlayerBank::GetClass() const */

long * ArenaPlayerBank::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"ArenaPlayerBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaPlayerBank::ArenaPlayerBank() */

void __thiscall ArenaPlayerBank::ArenaPlayerBank(ArenaPlayerBank *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  PVPManager *this_00;
  wstring *extraout_x1;
  string asStack_1c8 [8];
  wstring awStack_1c0 [8];
  NameEffectStruct aNStack_1b8 [16];
  Sexy aSStack_1a8 [8];
  int local_1a0;
  undefined4 local_194;
  int local_18c;
  int local_188;
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined ***)this = &PTR_GetClass_06953fb0;
  *(undefined ***)(this + 0x10) = &PTR__ArenaPlayerBank_06954150;
  FUN_05476574(this + 0x178);
  FUN_05476574(this + 0x180);
  FUN_05476574(this + 0x188);
  FUN_05476574(this + 400);
  FUN_05476574(this + 0x198);
  FUN_05476574(this + 0x1a0);
  FUN_05476574(this + 0x1b0);
  FUN_05476574(this + 0x1b8);
  FUN_05476574(this + 0x1c0);
  FUN_05476574(this + 0x1c8);
  FUN_05476574(this + 0x1d0);
  FUN_05476574(this + 0x1d8);
  FUN_05476574(this + 0x1e0);
  *(undefined4 *)(this + 0x168) = 0;
  *(undefined4 *)(this + 0x16c) = 0;
  *(undefined4 *)(this + 0x170) = 0;
  this[0x163] = (ArenaPlayerBank)0x0;
  *(undefined4 *)(this + 0x164) = 0;
  TodStringTranslate(L"[ARENA_PLAYER_BANK_TXT_WIN]");
  FUN_054766c8(this + 0x198,aNStack_1b8);
  FUN_05476c50(aNStack_1b8);
  TodStringTranslate(L"[ARENA_PLAYER_BANK_TXT_LOSE]");
  FUN_054766c8(this + 0x1a0,aNStack_1b8);
  FUN_05476c50(aNStack_1b8);
  lVar4 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  iVar1 = FUN_04b14d60(*(undefined4 *)(lVar4 + 0x128));
  *(int *)(this + 0x1a8) = iVar1;
  if (iVar1 == 2) {
    lVar4 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    FUN_04b14d64(*(undefined4 *)(lVar4 + 0x16c));
    lVar4 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    iVar1 = FUN_04b14d68(*(undefined4 *)(lVar4 + 0x170));
    iVar2 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    PVPManager::GetPVPMapData(iVar2,iVar1);
    TodStringTranslate(L"[ARENA_PVP_OCCUPY_LEVEL]");
    TodReplaceNumberString(awStack_1c0,L"{LEVEL}",local_1a0);
    FUN_054766c8(this + 0x1b0,asStack_1c8);
    FUN_05476c50(asStack_1c8);
    FUN_05476c50(awStack_1c0);
    Sexy::ToWString(aSStack_1a8,extraout_x1);
    FUN_054766c8(this + 0x1d8,awStack_1c0);
    FUN_05476c50(awStack_1c0);
    TodStringTranslate(L"[ARENA_PVP_OCCUPY_CURRENCY]");
    TodReplaceNumberString(awStack_1c0,L"{CURRENCY_NUM}",local_188);
    FUN_054766c8(this + 0x1c0,asStack_1c8);
    FUN_05476c50(asStack_1c8);
    FUN_05476c50(awStack_1c0);
    TodStringTranslate(L"[ARENA_PVP_OCCUPY_MEDAL]");
    TodReplaceNumberString(awStack_1c0,L"{MEDAL_NUM}",local_18c);
    FUN_054766c8(this + 0x1c8,asStack_1c8);
    FUN_05476c50(asStack_1c8);
    FUN_05476c50(awStack_1c0);
    uVar3 = operator|(0x10,8);
    FUN_05462470(auStack_178,uVar3);
    FUN_0546065c(auStack_168,local_194);
    FUN_05462824(asStack_1c8,auStack_178);
    Sexy::ToWString(asStack_1c8);
    FUN_054766c8(this + 0x1e0,awStack_1c0);
    FUN_05476c50(awStack_1c0);
    TodStringTranslate(L"[ARENA_PVP_OCCUPY_TXT]");
    FUN_054766c8(this + 0x1b8,awStack_1c0);
    FUN_05476c50(awStack_1c0);
    TodStringTranslate(L"[ARENA_PVP_GET_CURRENCY_TXT]");
    FUN_054766c8(this + 0x1d0,awStack_1c0);
    FUN_05476c50(awStack_1c0);
    std::string::~string(asStack_1c8);
    FUN_054617bc(auStack_178);
    NameEffectStruct::~NameEffectStruct(aNStack_1b8);
  }
  else if (iVar1 == 1) {
    lVar4 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    iVar1 = FUN_04b14d64(*(undefined4 *)(lVar4 + 0x16c));
    lVar4 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    iVar2 = FUN_04b14d68(*(undefined4 *)(lVar4 + 0x170));
    this_00 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    lVar4 = PVPManager::GetPVPMapPVPData(this_00,iVar2,iVar1);
    if ((lVar4 != 0) && (*(int *)(lVar4 + 0x28) == 4)) {
      *(undefined4 *)(this + 0x164) = *(undefined4 *)(lVar4 + 0x38);
      this[0x163] = (ArenaPlayerBank)0x1;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArenaPlayerBank::StaticNew() */

ArenaPlayerBank * ArenaPlayerBank::StaticNew(void)

{
  ArenaPlayerBank *this;
  
  this = ::operator_new(0x1e8);
  ArenaPlayerBank(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaPlayerBank::Draw(Sexy::Graphics*) */

void __thiscall ArenaPlayerBank::Draw(ArenaPlayerBank *this,Graphics *param_1)

{
  uint uVar1;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  LotteryResultProgressBar *pLVar11;
  SalesProgressBar *pSVar12;
  Image *pIVar13;
  undefined8 uVar14;
  GraphicsAutoState aGStack_50 [8];
  int local_48;
  int local_44;
  int local_40;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_50,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  UIWidget::GetDrawRect();
  local_48 = 0;
  local_44 = 0;
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b83810);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  pSVar12 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b83810);
  iVar3 = SalesProgressBar::GetCurrentLevel(pSVar12);
  pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b83810);
  if (this[0x163] != (ArenaPlayerBank)0x0) {
    iVar3 = (iVar3 << 1) / 3;
  }
  Sexy::Graphics::DrawImage(param_1,pIVar13,local_48,local_44,iVar2,iVar3);
  iVar3 = local_40;
  if (*(int *)(this + 0x1a8) == 1) {
    iVar6 = FUN_04b14d6c(100);
    iVar2 = local_44;
    iVar3 = local_48 + (iVar3 - iVar6) / 2;
    iVar4 = FUN_04b14d6c(0xf);
    iVar5 = FUN_04b14d6c(0x1e);
    Sexy::Insets::Insets((Insets *)&local_38,iVar3,iVar2 + iVar4,iVar6,iVar5);
    uVar14 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_FZShaoEr_26_ThickOutline);
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,this + 0x178,(Insets *)&local_38,uVar14,aCStack_18,5,1);
    iVar3 = local_44;
    local_34 = FUN_04b14d6c(0x3c);
    local_34 = iVar3 + local_34;
    local_2c = FUN_04b14d6c(0x14);
    uVar14 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_FZShaoEr_26_ThickOutline);
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,this + 0x198,(Insets *)&local_38,uVar14,aCStack_18,5,1);
    iVar3 = local_44;
    if (this[0x163] == (ArenaPlayerBank)0x0) {
      local_34 = FUN_04b14d6c(0x8a);
      local_34 = iVar3 + local_34;
      uVar14 = PrimeText_PotentialTypeface::Typeface
                         (PrimeText_Game::Typeface_FZShaoEr_26_ThickOutline);
      Sexy::Color::Color(aCStack_18,1);
      WriteWordInRect(param_1,this + 0x1a0,(Insets *)&local_38,uVar14,aCStack_18,5,1);
    }
    pLVar11 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b83890);
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
    pLVar11 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b83868);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
    pLVar11 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b838b8);
    LotteryResultProgressBar::GetCurrentLevel(pLVar11);
    pSVar12 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b838b8);
    SalesProgressBar::GetCurrentLevel(pSVar12);
    pSVar12 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b83868);
    iVar4 = SalesProgressBar::GetCurrentLevel(pSVar12);
    pSVar12 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b83890);
    SalesProgressBar::GetCurrentLevel(pSVar12);
    iVar5 = FUN_04b14d6c(0x19);
    iVar3 = local_44;
    iVar2 = local_48 + (local_40 - (iVar2 + iVar6 + iVar5)) / 2;
    iVar5 = FUN_04b14d6c(0x55);
    iVar3 = iVar3 + iVar5;
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b838b8;
    if (this[0x163] == (ArenaPlayerBank)0x0) {
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b83868;
    }
    pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
    Sexy::Graphics::DrawImage(param_1,pIVar13,iVar2,iVar3);
    uVar1 = *(uint *)(this + 0x164);
    if (this[0x163] == (ArenaPlayerBank)0x0) {
      uVar1 = *(uint *)(this + 0x168);
    }
    Sexy::StrFormat(L"%d",aCStack_18,(ulong)uVar1);
    FUN_054766c8(this + 0x180,aCStack_18);
    FUN_05476c50(aCStack_18);
    iVar5 = FUN_04b14d6c(0xfffffffa);
    iVar7 = FUN_04b14d6c(0x14);
    Sexy::Insets::Insets((Insets *)&local_28,iVar2,iVar5 + iVar3 + iVar4,iVar6,iVar7);
    uVar14 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_FZShaoEr_26_ThickOutline);
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,this + 0x180,(Insets *)&local_28,uVar14,aCStack_18,5,1);
    iVar5 = FUN_04b14d6c(0x19);
    iVar2 = iVar2 + iVar5 + iVar6;
    pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b83890);
    Sexy::Graphics::DrawImage(param_1,pIVar13,iVar2,iVar3);
    Sexy::StrFormat(L"%d",aCStack_18,(ulong)*(uint *)(this + 0x170));
    FUN_054766c8(this + 400,aCStack_18);
    FUN_05476c50(aCStack_18);
    local_28 = FUN_04b14d6c(10);
    local_28 = iVar2 - local_28;
    iVar3 = FUN_04b14d6c(0x14);
    local_20 = local_20 + iVar3;
    uVar14 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_FZShaoEr_26_ThickOutline);
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,this + 400,(Insets *)&local_28,uVar14,aCStack_18,5,1);
    iVar3 = local_44;
    if (this[0x163] == (ArenaPlayerBank)0x0) {
      iVar2 = local_48 + (local_40 - iVar6) / 2;
      iVar6 = FUN_04b14d6c(0xa5);
      pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b83868);
      Sexy::Graphics::DrawImage(param_1,pIVar13,iVar2,iVar3 + iVar6);
      Sexy::StrFormat(L"%d",aCStack_18,(ulong)*(uint *)(this + 0x16c));
      FUN_054766c8(this + 0x188,aCStack_18);
      FUN_05476c50(aCStack_18);
      iVar5 = FUN_04b14d6c(0xfffffffa);
      local_24 = iVar5 + iVar3 + iVar6 + iVar4;
      local_28 = iVar2;
      uVar14 = PrimeText_PotentialTypeface::Typeface
                         (PrimeText_Game::Typeface_FZShaoEr_26_ThickOutline);
      Sexy::Color::Color(aCStack_18,1);
      WriteWordInRect(param_1,this + 0x188,(Insets *)&local_28,uVar14,aCStack_18,5,1);
    }
  }
  else {
    iVar2 = FUN_04b14d6c(0x28);
    iVar6 = local_44;
    iVar3 = local_48 + (iVar3 - iVar2) / 2;
    iVar4 = FUN_04b14d6c(2);
    iVar5 = FUN_04b14d6c(0x14);
    Sexy::Insets::Insets((Insets *)&local_38,iVar3,iVar6 + iVar4,iVar2,iVar5);
    uVar14 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_FZShaoEr_26_ThickOutline);
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,this + 0x1b0,(Insets *)&local_38,uVar14,aCStack_18,5,1);
    iVar3 = local_40;
    iVar2 = FUN_04b14d6c(100);
    iVar3 = local_48 + (iVar3 - iVar2) / 2;
    iVar5 = FUN_04b14d6c(0x14);
    iVar2 = FUN_04b14d6c(1);
    iVar2 = iVar5 + iVar6 + iVar4 + iVar2;
    local_38 = iVar3;
    local_34 = iVar2;
    local_30 = FUN_04b14d6c(100);
    local_2c = FUN_04b14d6c(0x1e);
    uVar14 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_FZShaoEr_26_ThickOutline);
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,this + 0x1d8,(Insets *)&local_38,uVar14,aCStack_18,5,1);
    iVar3 = local_40;
    iVar6 = FUN_04b14d6c(0x50);
    iVar4 = (iVar3 - iVar6) / 2;
    iVar3 = iVar4 + local_48;
    iVar5 = FUN_04b14d6c(0x1e);
    iVar6 = FUN_04b14d6c(1);
    iVar6 = iVar5 + iVar2 + iVar6;
    local_38 = iVar3;
    local_34 = iVar6;
    local_30 = FUN_04b14d6c(0x50);
    local_2c = FUN_04b14d6c(0x14);
    uVar14 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_FZShaoEr_26_ThickOutline);
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,this + 0x1b8,(Insets *)&local_38,uVar14,aCStack_18,5,1);
    pLVar11 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b83890);
    iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
    pLVar11 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b83868);
    LotteryResultProgressBar::GetCurrentLevel(pLVar11);
    pLVar11 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b838b8);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
    pSVar12 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b838b8);
    SalesProgressBar::GetCurrentLevel(pSVar12);
    pSVar12 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b83868);
    SalesProgressBar::GetCurrentLevel(pSVar12);
    pSVar12 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b83890);
    iVar8 = SalesProgressBar::GetCurrentLevel(pSVar12);
    iVar2 = FUN_04b14d6c(0x19);
    iVar3 = local_48 + (local_40 - (iVar7 + iVar3 + iVar2)) / 2;
    iVar5 = FUN_04b14d6c(0x14);
    iVar2 = FUN_04b14d6c(1);
    iVar2 = iVar5 + iVar6 + iVar2;
    pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b83890);
    Sexy::Graphics::DrawImage(param_1,pIVar13,iVar3,iVar2);
    iVar6 = FUN_04b14d6c(0xfffffffa);
    iVar6 = iVar6 + iVar2 + iVar8;
    iVar9 = FUN_04b14d6c(0x3c);
    iVar5 = FUN_04b14d6c(5);
    iVar5 = (local_40 - (iVar5 + iVar9 * 2)) / 2;
    iVar10 = FUN_04b14d6c(0x14);
    Sexy::Insets::Insets((Insets *)&local_28,iVar5,iVar6,iVar9,iVar10);
    uVar14 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_FZShaoEr_26_ThickOutline);
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,this + 0x1c0,(Insets *)&local_28,uVar14,aCStack_18,5,1);
    iVar9 = FUN_04b14d6c(0x19);
    pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b838b8);
    Sexy::Graphics::DrawImage(param_1,pIVar13,iVar3 + iVar9 + iVar7,iVar2);
    iVar3 = FUN_04b14d6c(5);
    local_28 = FUN_04b14d6c(0x3c);
    local_28 = iVar3 + iVar5 + local_28;
    uVar14 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_FZShaoEr_26_ThickOutline);
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,this + 0x1c8,(Insets *)&local_28,uVar14,aCStack_18,5,1);
    iVar4 = iVar4 + local_48;
    iVar2 = FUN_04b14d6c(0x14);
    iVar3 = FUN_04b14d6c(3);
    iVar3 = iVar2 + iVar6 + iVar3;
    local_38 = iVar4;
    local_34 = iVar3;
    local_30 = FUN_04b14d6c(0x50);
    local_2c = FUN_04b14d6c(0x14);
    uVar14 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_FZShaoEr_26_ThickOutline);
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,this + 0x1d0,(Insets *)&local_38,uVar14,aCStack_18,5,1);
    iVar2 = local_48 + (local_40 - iVar7) / 2;
    iVar4 = FUN_04b14d6c(0x14);
    iVar6 = FUN_04b14d6c(3);
    iVar6 = iVar4 + iVar3 + iVar6;
    pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b83890);
    Sexy::Graphics::DrawImage(param_1,pIVar13,iVar2,iVar6);
    iVar3 = FUN_04b14d6c(0x3c);
    iVar3 = local_48 + (local_40 - iVar3) / 2;
    local_24 = FUN_04b14d6c(0xfffffffa);
    local_24 = iVar6 + iVar8 + local_24;
    local_28 = iVar3;
    local_20 = FUN_04b14d6c(0x3c);
    local_1c = FUN_04b14d6c(0x14);
    uVar14 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_FZShaoEr_26_ThickOutline);
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,this + 0x1e0,(Insets *)&local_28,uVar14,aCStack_18,5,1);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ArenaPlayerBank::Draw(Sexy::Graphics*) */

void __thiscall ArenaPlayerBank::Draw(ArenaPlayerBank *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

