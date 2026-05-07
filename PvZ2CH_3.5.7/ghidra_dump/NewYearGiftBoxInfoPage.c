// Class: NewYearGiftBoxInfoPage


/* NewYearGiftBoxInfoPage::~NewYearGiftBoxInfoPage() */

void __thiscall NewYearGiftBoxInfoPage::~NewYearGiftBoxInfoPage(NewYearGiftBoxInfoPage *this)

{
  *(undefined ***)this = &PTR_GetClass_067aa150;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  FUN_05476c50(this + 0xe0);
  FUN_05476c50(this + 0xd8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* NewYearGiftBoxInfoPage::~NewYearGiftBoxInfoPage() */

void __thiscall NewYearGiftBoxInfoPage::~NewYearGiftBoxInfoPage(NewYearGiftBoxInfoPage *this)

{
  ~NewYearGiftBoxInfoPage(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewYearGiftBoxInfoPage::Draw(Sexy::Graphics*) */

void __thiscall NewYearGiftBoxInfoPage::Draw(NewYearGiftBoxInfoPage *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  GraphicsAutoState aGStack_98 [8];
  wstring awStack_90 [8];
  Insets aIStack_88 [12];
  int local_7c;
  Insets aIStack_78 [16];
  Insets aIStack_68 [12];
  int local_5c;
  Insets aIStack_58 [12];
  int local_4c;
  Insets aIStack_48 [12];
  int local_3c;
  wstring awStack_38 [12];
  int local_2c;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_98,param_1);
  Sexy::Graphics::ClearClipRect(param_1);
  iVar1 = FUN_03fc35bc(0x28);
  fVar7 = (float)iVar1;
  switch(*(undefined4 *)(this + 0xd4)) {
  case 0:
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_26);
    iVar1 = FUN_03fc35bc(0);
    iVar2 = FUN_03fc35bc(0x1e);
    Sexy::Insets::Insets(aIStack_58,iVar1,(int)fVar7,*(int *)(this + 0x50),iVar2);
    TodStringTranslate(L"[NEWYEAR_GIFTBOX_INDEX1_1]");
    TodReplaceString(awStack_38,L"{NAME}",(wstring *)(this + 0xd8));
    Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
    WriteWordInRect(param_1,aIStack_28,aIStack_58,uVar5,aIStack_18,0,1);
    FUN_05476c50(aIStack_28);
    FUN_05476c50(awStack_38);
    fVar6 = (float)local_4c;
    iVar1 = FUN_03fc35bc(0xc);
    fVar7 = fVar7 + fVar6 + (float)iVar1;
    iVar1 = FUN_03fc35bc(0);
    iVar2 = FUN_03fc35bc(0x21);
    Sexy::Insets::Insets(aIStack_48,iVar1,(int)fVar7,*(int *)(this + 0x50),iVar2);
    TodStringTranslate(L"[NEWYEAR_GIFTBOX_INDEX1_2]");
    Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
    WriteWordInRect(param_1,aIStack_28,aIStack_48,uVar5,aIStack_18,2,1);
    FUN_05476c50(aIStack_28);
    iVar1 = FUN_03fc35bc(0x18);
    iVar2 = FUN_03fc35bc(7);
    fVar7 = fVar7 + (float)(iVar1 + iVar2) + (float)(local_4c << 1);
    iVar1 = FUN_03fc35bc(0);
    iVar2 = FUN_03fc35bc(0x28);
    Sexy::Insets::Insets((Insets *)awStack_38,iVar1,(int)fVar7,*(int *)(this + 0x50),iVar2);
    TodStringTranslate(L"[NEWYEAR_GIFTBOX_INDEX1_3]");
    TodReplaceNumberString((wstring *)aIStack_68,L"{COUNT}",*(int *)(this + 0xe8));
    Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
    WriteWordInRect(param_1,aIStack_28,awStack_38,uVar5,aIStack_18,0,1);
    FUN_05476c50(aIStack_28);
    FUN_05476c50((wstring *)aIStack_68);
    iVar1 = FUN_03fc35bc(0xc);
    iVar2 = FUN_03fc35bc(0);
    iVar3 = FUN_03fc35bc(3);
    iVar4 = FUN_03fc35bc(0x23);
    Sexy::Insets::Insets
              (aIStack_28,iVar2,(int)((float)iVar1 + (float)iVar3 + (float)local_4c + fVar7),
               *(int *)(this + 0x50),iVar4);
    TodStringTranslate(L"[NEWYEAR_GIFTBOX_INDEX1_4]");
    TodReplaceNumberString((wstring *)aIStack_78,L"{COUNT}",*(int *)(this + 0xec));
    Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
    WriteWordInRect(param_1,(wstring *)aIStack_68,aIStack_28,uVar5,aIStack_18,2,1);
    FUN_05476c50((wstring *)aIStack_68);
    FUN_05476c50((wstring *)aIStack_78);
    break;
  case 1:
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_26);
    iVar1 = FUN_03fc35bc(0);
    iVar2 = FUN_03fc35bc(0x1e);
    Sexy::Insets::Insets(aIStack_88,iVar1,(int)fVar7,*(int *)(this + 0x50),iVar2);
    TodStringTranslate(L"[NEWYEAR_GIFTBOX_INDEX1_6]");
    Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
    WriteWordInRect(param_1,aIStack_28,aIStack_88,uVar5,aIStack_18,0,1);
    FUN_05476c50(aIStack_28);
    fVar6 = (float)local_7c;
    iVar1 = FUN_03fc35bc(0xc);
    fVar7 = fVar7 + fVar6 + (float)iVar1;
    iVar1 = FUN_03fc35bc(0);
    iVar2 = FUN_03fc35bc(0x1e);
    iVar3 = FUN_03fc35bc(0x25);
    Sexy::Insets::Insets(aIStack_78,iVar1 + iVar2,(int)fVar7,*(int *)(this + 0x50),iVar3);
    TodStringTranslate(L"[NEWYEAR_GIFTBOX_INDEX1_7]");
    TodReplaceNumberString(awStack_38,L"{COUNT}",*(int *)(this + 0xf0));
    Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
    WriteWordInRect(param_1,aIStack_28,aIStack_78,uVar5,aIStack_18,0,1);
    FUN_05476c50(aIStack_28);
    FUN_05476c50(awStack_38);
    iVar1 = FUN_03fc35bc(0xc);
    fVar7 = (float)iVar1 + (float)local_7c + fVar7;
    iVar1 = FUN_03fc35bc(0);
    iVar2 = FUN_03fc35bc(0x1e);
    Sexy::Insets::Insets(aIStack_68,iVar1,(int)fVar7,*(int *)(this + 0x50),iVar2);
    TodStringTranslate(L"[NEWYEAR_GIFTBOX_INDEX1_8]");
    TodReplaceNumberString(awStack_38,L"{COUNT}",*(int *)(this + 0xf4));
    Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
    WriteWordInRect(param_1,aIStack_28,aIStack_68,uVar5,aIStack_18,2,1);
    FUN_05476c50(aIStack_28);
    FUN_05476c50(awStack_38);
    iVar1 = FUN_03fc35bc(0xc);
    fVar7 = (float)iVar1 + (float)local_5c + fVar7;
    iVar1 = FUN_03fc35bc(0);
    iVar2 = FUN_03fc35bc(0x1e);
    Sexy::Insets::Insets(aIStack_58,iVar1,(int)fVar7,*(int *)(this + 0x50),iVar2);
    TodStringTranslate(L"[NEWYEAR_GIFTBOX_INDEX1_9]");
    TodReplaceNumberString(awStack_38,L"{COUNT}",*(int *)(this + 0xf8));
    Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
    WriteWordInRect(param_1,aIStack_28,aIStack_58,uVar5,aIStack_18,2,1);
    FUN_05476c50(aIStack_28);
    FUN_05476c50(awStack_38);
    iVar1 = FUN_03fc35bc(0xc);
    iVar2 = FUN_03fc35bc(3);
    fVar7 = (float)(iVar1 - iVar2) + (float)local_4c + fVar7;
    iVar2 = FUN_03fc35bc(0);
    iVar3 = FUN_03fc35bc(0x32);
    iVar1 = *(int *)(this + 0x50);
    iVar4 = FUN_03fc35bc(0x23);
    Sexy::Insets::Insets(aIStack_48,iVar2,(int)fVar7,iVar3 + iVar1,iVar4);
    TodStringTranslate(L"[NEWYEAR_GIFTBOX_INDEX1_10]");
    TodReplaceNumberString(awStack_38,L"{COUNT}",*(int *)(this + 0xfc));
    Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
    WriteWordInRect(param_1,aIStack_28,aIStack_48,uVar5,aIStack_18,3,1);
    FUN_05476c50(aIStack_28);
    FUN_05476c50(awStack_38);
    iVar1 = FUN_03fc35bc(0xc);
    fVar7 = (float)iVar1 + (float)local_3c + fVar7;
    iVar1 = FUN_03fc35bc(0);
    iVar2 = FUN_03fc35bc(0x1e);
    iVar3 = FUN_03fc35bc(0x23);
    Sexy::Insets::Insets((Insets *)awStack_38,iVar1 + iVar2,(int)fVar7,*(int *)(this + 0x50),iVar3);
    TodStringTranslate(L"[NEWYEAR_GIFTBOX_INDEX1_11]");
    TodReplaceNumberString(awStack_90,L"{COUNT}",*(int *)(this + 0x100));
    Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
    WriteWordInRect(param_1,aIStack_28,awStack_38,uVar5,aIStack_18,3,1);
    FUN_05476c50(aIStack_28);
    FUN_05476c50(awStack_90);
    iVar1 = FUN_03fc35bc(0xc);
    iVar2 = FUN_03fc35bc(7);
    iVar3 = FUN_03fc35bc(0);
    iVar4 = FUN_03fc35bc(0x23);
    Sexy::Insets::Insets
              (aIStack_28,iVar3,(int)((float)(iVar1 + iVar2) + (float)local_2c + fVar7),
               *(int *)(this + 0x50),iVar4);
    TodStringTranslate(L"[NEWYEAR_GIFTBOX_INDEX1_12]");
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_32);
    Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
    WriteWordInRect(param_1,awStack_90,aIStack_28,uVar5,aIStack_18,2,1);
    FUN_05476c50(awStack_90);
    break;
  case 2:
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_26);
    iVar2 = FUN_03fc35bc(0);
    iVar3 = FUN_03fc35bc(0x32);
    iVar1 = *(int *)(this + 0x50);
    iVar4 = FUN_03fc35bc(0x23);
    Sexy::Insets::Insets(aIStack_68,iVar2,(int)fVar7,iVar3 + iVar1,iVar4);
    TodStringTranslate(L"[NEWYEAR_GIFTBOX_INDEX1_13]");
    TodReplaceNumberString(awStack_38,L"{COUNT}",*(int *)(this + 0x104));
    Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
    WriteWordInRect(param_1,aIStack_28,aIStack_68,uVar5,aIStack_18,0,1);
    FUN_05476c50(aIStack_28);
    FUN_05476c50(awStack_38);
    iVar1 = FUN_03fc35bc(0xc);
    fVar7 = fVar7 + (float)local_5c + (float)iVar1;
    iVar1 = FUN_03fc35bc(0);
    iVar2 = FUN_03fc35bc(0x41);
    iVar3 = FUN_03fc35bc(0x23);
    Sexy::Insets::Insets(aIStack_58,iVar1 + iVar2,(int)fVar7,*(int *)(this + 0x50),iVar3);
    TodStringTranslate(L"[NEWYEAR_GIFTBOX_INDEX1_14]");
    TodReplaceString(awStack_38,L"{NAME}",(wstring *)(this + 0xe0));
    Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
    WriteWordInRect(param_1,aIStack_28,aIStack_58,uVar5,aIStack_18,0,1);
    FUN_05476c50(aIStack_28);
    FUN_05476c50(awStack_38);
    iVar1 = FUN_03fc35bc(0xc);
    iVar2 = FUN_03fc35bc(7);
    fVar7 = fVar7 + (float)(iVar1 - iVar2) + (float)local_4c;
    iVar1 = FUN_03fc35bc(0);
    iVar2 = FUN_03fc35bc(0x41);
    iVar3 = FUN_03fc35bc(0x32);
    Sexy::Insets::Insets(aIStack_48,iVar1 + iVar2,(int)fVar7,*(int *)(this + 0x50),iVar3);
    TodStringTranslate(L"[NEWYEAR_GIFTBOX_INDEX1_15]");
    TodReplaceNumberString(awStack_38,L"{COUNT}",*(int *)(this + 0x10c));
    Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
    WriteWordInRect(param_1,aIStack_28,aIStack_48,uVar5,aIStack_18,0,1);
    FUN_05476c50(aIStack_28);
    FUN_05476c50(awStack_38);
    iVar1 = FUN_03fc35bc(0xc);
    fVar7 = (float)(iVar1 << 1) + (float)local_3c + fVar7;
    iVar1 = FUN_03fc35bc(0);
    iVar2 = FUN_03fc35bc(7);
    iVar3 = FUN_03fc35bc(0x32);
    Sexy::Insets::Insets
              ((Insets *)awStack_38,iVar1,(int)(fVar7 + (float)iVar2),*(int *)(this + 0x50),iVar3);
    TodStringTranslate(L"[NEWYEAR_GIFTBOX_INDEX1_19]");
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_32);
    Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
    WriteWordInRect(param_1,aIStack_28,awStack_38,uVar5,aIStack_18,2,1);
    FUN_05476c50(aIStack_28);
    iVar1 = FUN_03fc35bc(0);
    iVar2 = FUN_03fc35bc(0x96);
    Sexy::Insets::Insets
              (aIStack_28,iVar1,(int)(fVar7 + (float)local_2c),*(int *)(this + 0x50),iVar2);
    TodStringTranslate(L"[NEWYEAR_GIFTBOX_INDEX1_18]");
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_32);
    Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
    WriteWordInRect(param_1,aIStack_78,aIStack_28,uVar5,aIStack_18,2,1);
    FUN_05476c50(aIStack_78);
    break;
  case 3:
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_26);
    iVar2 = FUN_03fc35bc(0);
    iVar3 = FUN_03fc35bc(0x3c);
    iVar1 = *(int *)(this + 0x50);
    iVar4 = FUN_03fc35bc(0x23);
    Sexy::Insets::Insets((Insets *)awStack_38,iVar2,(int)fVar7,iVar3 + iVar1,iVar4);
    TodStringTranslate(L"[NEWYEAR_GIFTBOX_INDEX1_16]");
    TodReplaceString((wstring *)aIStack_48,L"{NAME}",(wstring *)(this + 0xd8));
    Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
    WriteWordInRect(param_1,aIStack_28,(Insets *)awStack_38,uVar5,aIStack_18,0,0);
    FUN_05476c50(aIStack_28);
    FUN_05476c50((wstring *)aIStack_48);
    iVar1 = FUN_03fc35bc(0xc);
    iVar2 = FUN_03fc35bc(0);
    iVar3 = FUN_03fc35bc(0x1e);
    Sexy::Insets::Insets
              (aIStack_28,iVar2 + iVar3,(int)(fVar7 + (float)local_2c + (float)iVar1),
               *(int *)(this + 0x50),iVar3);
    TodStringTranslate(L"[NEWYEAR_GIFTBOX_INDEX1_17]");
    Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
    WriteWordInRect(param_1,(wstring *)aIStack_48,aIStack_28,uVar5,aIStack_18,0,1);
    FUN_05476c50((wstring *)aIStack_48);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_98);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewYearGiftBoxInfoPage::setupScreen() */

void __thiscall NewYearGiftBoxInfoPage::setupScreen(NewYearGiftBoxInfoPage *this)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ProfileMgr *this_00;
  string *extraout_x1;
  long lVar7;
  Sexy aSStack_e8 [8];
  wstring awStack_e0 [8];
  Insets aIStack_d8 [16];
  NetworkNewYearGiftBoxData aNStack_c8 [20];
  int local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  lVar7 = *(long *)(this + 0x118);
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_03fc35bc(0x1e);
  iVar6 = *(int *)(lVar7 + 0x48);
  iVar4 = FUN_03fc35bc(0x50);
  iVar1 = *(int *)(lVar7 + 0x4c);
  iVar5 = FUN_03fc35bc(0x19);
  Sexy::Insets::Insets
            (aIStack_d8,iVar3 + iVar6,iVar4 + iVar1,*(int *)(lVar7 + 0x50) - iVar5,
             *(int *)(lVar7 + 0x54));
  (**(code **)(*(long *)this + 0x1a0))(this,aIStack_d8);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar7 = ProfileMgr::GetCurrentProfile(this_00);
  if (lVar7 != 0) {
    PlayerInfo::AM_GetName();
    FUN_054766c8(this + 0xd8,aNStack_c8);
    FUN_05476c50(aNStack_c8);
  }
  iVar6 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar6);
  cVar2 = FUN_03fc2ee0(local_80);
  if ((cVar2 != '\0') && (local_70 != '\0')) {
    NetworkNewYearGiftBoxData::NetworkNewYearGiftBoxData(aNStack_c8);
    cVar2 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aNStack_c8);
    if (cVar2 != '\0') {
      *(undefined4 *)(this + 0xe8) = local_b0;
      *(undefined4 *)(this + 0xec) = local_ac;
      *(undefined4 *)(this + 0xf0) = local_a8;
      *(undefined4 *)(this + 0xf4) = local_a4;
      *(undefined4 *)(this + 0xf8) = local_a0;
      *(undefined4 *)(this + 0xfc) = local_9c;
      *(undefined4 *)(this + 0x100) = local_98;
      *(undefined4 *)(this + 0x104) = local_94;
      *(undefined4 *)(this + 0x108) = local_90;
      *(undefined4 *)(this + 0x10c) = local_8c;
      this[0x110] = (NewYearGiftBoxInfoPage)(local_b4 != 0);
    }
    NetworkNewYearGiftBoxData::~NetworkNewYearGiftBoxData(aNStack_c8);
  }
  Sexy::StrFormat("[NEW_PVP_DUAN_RANK_%d]",aSStack_e8,(ulong)*(uint *)(this + 0x108));
  Sexy::ToSexyString(aSStack_e8,extraout_x1);
  TodStringTranslate(awStack_e0);
  FUN_054766c8(this + 0xe0,aNStack_c8);
  FUN_05476c50(aNStack_c8);
  FUN_05476c50(awStack_e0);
  std::string::~string((string *)aSStack_e8);
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewYearGiftBoxInfoPage::NewYearGiftBoxInfoPage(UIWidgetImage*) */

void __thiscall
NewYearGiftBoxInfoPage::NewYearGiftBoxInfoPage(NewYearGiftBoxInfoPage *this,UIWidgetImage *param_1)

{
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_067aa150;
  FUN_05476574(this + 0xd8);
  FUN_05476574(this + 0xe0);
  *(undefined4 *)(this + 0xd4) = 0;
  FUN_054772c4(this + 0xd8,&DAT_056f11a8);
  *(undefined4 *)(this + 0xe8) = 0;
  this[0x110] = (NewYearGiftBoxInfoPage)0x1;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xf4) = 0;
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0x104) = 0;
  *(undefined4 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 0x10c) = 0;
  *(UIWidgetImage **)(this + 0x118) = param_1;
  FUN_05476574(auStack_18);
  FUN_05476574(auStack_10);
  setupScreen(this);
  FUN_05476c50(auStack_10);
  FUN_05476c50(auStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

