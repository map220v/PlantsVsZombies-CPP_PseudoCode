// Class: TipsManager


/* TipsManager::~TipsManager() */

void __thiscall TipsManager::~TipsManager(TipsManager *this)

{
  *(undefined ***)this = &PTR__TipsManager_06852b70;
  FUN_05476c50(this + 8);
  Sexy::LazySingleton<TipsManager>::~LazySingleton((LazySingleton<TipsManager> *)this);
  return;
}


/* TipsManager::~TipsManager() */

void __thiscall TipsManager::~TipsManager(TipsManager *this)

{
  ~TipsManager(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TipsManager::increaseUIGroupRefCount() */

void __thiscall TipsManager::increaseUIGroupRefCount(TipsManager *this)

{
  short sVar1;
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  sVar1 = *(short *)(this + 0x38);
  *(short *)(this + 0x38) = sVar1 + 1;
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if ((short)(sVar1 + 1) == 1) {
    std::string::string(asStack_10,"UI_Tips");
    LawnApp::LoadGroup(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TipsManager::decreaseUIGroupRefCount() */

void __thiscall TipsManager::decreaseUIGroupRefCount(TipsManager *this)

{
  short sVar1;
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  sVar1 = *(short *)(this + 0x38) + -1;
  local_8 = ___stack_chk_guard;
  *(short *)(this + 0x38) = sVar1;
  this_00 = gLawnApp;
  if (sVar1 == 0) {
    std::string::string(asStack_10,"UI_Tips");
    LawnApp::DeleteGroup(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    *(undefined8 *)(this + 0x30) = 0;
  }
  else if (sVar1 < 0) {
    *(undefined2 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x30) = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TipsManager::Draw(Sexy::Graphics*) */

void __thiscall TipsManager::Draw(TipsManager *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  SocialInfo *this_00;
  char *pcVar6;
  undefined8 uVar7;
  SalesProgressBar *this_01;
  float fVar8;
  float fVar9;
  GraphicsAutoState aGStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x10) != 0) {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_30,param_1);
    lVar5 = LawnApp::GetActivityConfig();
    if (lVar5 != 0) {
      this_00 = (SocialInfo *)LawnApp::GetActivityConfig();
      pcVar6 = (char *)SocialInfo::GetReceivedSunList(this_00);
      lVar5 = gLawnApp;
      if (*pcVar6 != '\0') {
        fVar8 = (float)FUN_044ae8a0(0x43020000);
        fVar9 = (float)FUN_044ae8a0(0x42480000);
        Sexy::Insets::Insets
                  (aIStack_28,0,(int)(fVar8 + (float)*(int *)(lVar5 + 0xd8) * 0.5),
                   *(int *)(lVar5 + 0xd4),(int)fVar9);
        uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26_Shaded);
        Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x18));
        WriteWordInRect(param_1,this + 8,aIStack_28,uVar7,aIStack_18,5,0);
      }
    }
    if (*(long *)(this + 0x30) != 0) {
      Sexy::Graphics::SetColorizeImages(param_1,true);
      Sexy::Insets::Insets(aIStack_18,0xff,0xff,0xff,*(int *)(this + 0x24));
      Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
      iVar1 = *(int *)(gLawnApp + 0xd4);
      iVar3 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x30))
      ;
      this_01 = *(SalesProgressBar **)(this + 0x30);
      iVar2 = *(int *)(gLawnApp + 0xd8);
      iVar4 = SalesProgressBar::GetCurrentLevel(this_01);
      fVar8 = (float)FUN_044ae8a0(0x42700000);
      Sexy::Graphics::DrawImage
                (param_1,(Image *)this_01,(iVar1 - iVar3) / 2,
                 (int)((float)((iVar2 - iVar4) / 2) - fVar8));
      Sexy::Graphics::SetColorizeImages(param_1,false);
    }
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TipsManager::TipsManager() */

void __thiscall TipsManager::TipsManager(TipsManager *this)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<TipsManager>::LazySingleton((LazySingleton<TipsManager> *)this);
  *(undefined ***)this = &PTR__TipsManager_06852b70;
  FUN_05478178(this + 8,&DAT_056f11a8,auStack_10);
  nop();
  *(undefined4 *)(this + 0x10) = 0;
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x14) = uVar2;
  Sexy::Color::Color((Color *)(this + 0x18),1);
  *(undefined2 *)(this + 0x38) = 0;
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x30) = 0;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TipsManager::setState(TipsState) */

void __thiscall TipsManager::setState(TipsManager *this,undefined4 param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(this + 0x10) = param_2;
  switch(param_2) {
  case 0:
    decreaseUIGroupRefCount(this);
    uVar1 = PVZ_EOT();
    *(undefined4 *)(this + 0x14) = uVar1;
    return;
  case 1:
    *(undefined4 *)(this + 0x24) = 0;
    uVar1 = PVZ_T();
    *(undefined4 *)(this + 0x14) = uVar1;
    return;
  case 2:
    *(undefined4 *)(this + 0x24) = 0xff;
    uVar1 = PVZ_EOT();
    *(undefined4 *)(this + 0x14) = uVar1;
    return;
  case 3:
    *(undefined4 *)(this + 0x24) = 0xff;
    uVar1 = PVZ_T();
    *(undefined4 *)(this + 0x14) = uVar1;
    return;
  default:
    uVar1 = PVZ_EOT();
    *(undefined4 *)(this + 0x14) = uVar1;
    return;
  }
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TipsManager::StartNewTip(std::wstring const&, int, int, Sexy::Color const&) */

void __thiscall
TipsManager::StartNewTip(TipsManager *this,wstring *param_1,int param_2,int param_3,Color *param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  wstring awStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = FUN_054766ec(param_1);
  uVar2 = RandRangeInt(param_2,param_2 + param_3 + -1);
  Sexy::StrFormat(L"[%ls_%d]",awStack_18,uVar1,uVar2 & 0xffffffff);
  TodStringTranslate(awStack_18);
  FUN_054766c8(this + 8,auStack_10);
  FUN_05476c50(auStack_10);
  uVar1 = *(undefined8 *)(param_4 + 8);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)param_4;
  *(undefined8 *)(this + 0x20) = uVar1;
  setState(this,1);
  FUN_05476c50(awStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TipsManager::StopTip() */

void __thiscall TipsManager::StopTip(TipsManager *this)

{
  setState(this,3);
  return;
}


/* TipsManager::Update() */

void __thiscall TipsManager::Update(TipsManager *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (*(int *)(this + 0x10) == 1) {
    fVar1 = (float)PVZ_T();
    fVar2 = *(float *)(this + 0x14);
    *(int *)(this + 0x24) = (int)((fVar1 - fVar2) * 510.0);
    fVar1 = (float)PVZ_T();
    if (fVar2 + 0.5 < fVar1) {
      setState(this,2);
      return;
    }
  }
  else if (*(int *)(this + 0x10) == 3) {
    fVar1 = *(float *)(this + 0x14);
    fVar2 = (float)PVZ_T();
    fVar3 = *(float *)(this + 0x14);
    *(int *)(this + 0x24) = (int)(((fVar1 + 0.5) - fVar2) * 510.0);
    fVar1 = (float)PVZ_T();
    if (fVar3 + 0.5 < fVar1) {
      setState(this,0);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TipsManager::StartNewTipFromAcitvityConfig() */

void __thiscall TipsManager::StartNewTipFromAcitvityConfig(TipsManager *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  ActivityConfig *pAVar5;
  undefined8 uVar6;
  SocialInfo *pSVar7;
  TipsData *pTVar8;
  string *psVar9;
  string asStack_70 [8];
  wstring awStack_68 [8];
  undefined8 local_60;
  undefined8 uStack_58;
  TipsData aTStack_50 [24];
  undefined8 local_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = LawnApp::GetActivityConfig();
  if (lVar4 != 0) {
    lVar4 = LawnApp::GetActivityConfig();
    cVar1 = FUN_044ae888(*(undefined1 *)(lVar4 + 0x98));
    if (cVar1 != '\0') {
      increaseUIGroupRefCount(this);
      pAVar5 = (ActivityConfig *)LawnApp::GetActivityConfig();
      uVar6 = ActivityConfig::GetTipsImage(pAVar5);
      *(undefined8 *)(this + 0x30) = uVar6;
      pSVar7 = (SocialInfo *)LawnApp::GetActivityConfig();
      lVar4 = SocialInfo::GetReceivedSunList(pSVar7);
      iVar2 = FUN_044ae88c(*(undefined8 *)(lVar4 + 0x18),*(undefined8 *)(lVar4 + 0x20));
      if (-1 < iVar2 + -1) {
        iVar2 = RandRangeInt(0,iVar2 + -1);
        pSVar7 = (SocialInfo *)LawnApp::GetActivityConfig();
        pTVar8 = (TipsData *)SocialInfo::GetReceivedSunList(pSVar7);
        TipsData::TipsData(aTStack_50,pTVar8);
        psVar9 = (string *)FUN_044ae898(local_38,(long)iVar2);
        Sexy::ToWString(psVar9);
        TodStringTranslate(awStack_68);
        FUN_054766c8(this + 8,(Color *)&local_60);
        FUN_05476c50((Color *)&local_60);
        FUN_05476c50(awStack_68);
        pSVar7 = (SocialInfo *)LawnApp::GetActivityConfig();
        lVar4 = SocialInfo::GetReceivedSunList(pSVar7);
        FUN_05475d88(asStack_70,lVar4 + 0x10);
        pAVar5 = (ActivityConfig *)LawnApp::GetActivityConfig();
        FUN_05475d88(awStack_68,asStack_70);
        uVar3 = ActivityConfig::GetActivityTextColor(pAVar5,awStack_68);
        Sexy::Color::Color((Color *)&local_60,uVar3);
        *(undefined8 *)(this + 0x18) = local_60;
        *(undefined8 *)(this + 0x20) = uStack_58;
        std::string::~string((string *)awStack_68);
        setState(this,1);
        std::string::~string(asStack_70);
        TipsData::~TipsData(aTStack_50);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

