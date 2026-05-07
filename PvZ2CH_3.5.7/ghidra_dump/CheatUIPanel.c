// Class: CheatUIPanel


/* CheatUIPanel::IsVisible() const */

CheatUIPanel __thiscall CheatUIPanel::IsVisible(CheatUIPanel *this)

{
  return this[0x48];
}


/* CheatUIPanel::GetDefaultLineHeight() const */

void CheatUIPanel::GetDefaultLineHeight(void)

{
  FUN_03c58574(DAT_06ad0b28);
  return;
}


/* CheatUIPanel::SetKeyboardMode(bool) */

void __thiscall CheatUIPanel::SetKeyboardMode(CheatUIPanel *this,bool param_1)

{
  this[0x49] = (CheatUIPanel)param_1;
  if (!param_1) {
    (**(code **)(*gLawnApp + 0x340))(gLawnApp);
    return;
  }
  (**(code **)(*gLawnApp + 0x328))(gLawnApp);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CheatUIPanel::BuildUILineForCheat(std::string const&, std::string const&) */

void CheatUIPanel::BuildUILineForCheat(string *param_1,string *param_2)

{
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10);
  uVar1 = FUN_03c5846c();
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* CheatUIPanel::TouchesCanceled() */

void __thiscall CheatUIPanel::TouchesCanceled(CheatUIPanel *this)

{
  *(undefined8 *)(this + 8) = 0;
  this[0x4a] = (CheatUIPanel)0x0;
  *(undefined4 *)(this + 0x4c) = 0;
  this[0x50] = (CheatUIPanel)0x0;
  return;
}


/* CheatUIPanel::GetScreenRect() const */

void __thiscall CheatUIPanel::GetScreenRect(CheatUIPanel *this)

{
  long lVar1;
  Insets *in_x8;
  float fVar2;
  
  lVar1 = gLawnApp;
  fVar2 = (float)FUN_03c58574(DAT_06ad0bb8);
  Sexy::Insets::Insets
            (in_x8,(int)((float)*(int *)(lVar1 + 0xd4) - fVar2),0,(int)fVar2,*(int *)(lVar1 + 0xd8))
  ;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CheatUIPanel::getCloseButtonRect() const */

void CheatUIPanel::getCloseButtonRect(void)

{
  bool bVar1;
  CheatUIPanel *in_x0;
  Insets *in_x8;
  float fVar2;
  float fVar3;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetScreenRect(in_x0);
  Sexy::Insets::Insets(in_x8,aIStack_18);
  fVar3 = DAT_06ad0a98;
  fVar2 = (float)FUN_03c58574(DAT_06ad0a98 + 8.0);
  *(int *)in_x8 = (int)((float)*(int *)in_x8 - fVar2);
  fVar2 = (float)FUN_03c58574(0);
  *(int *)(in_x8 + 4) = (int)(fVar2 + (float)*(int *)(in_x8 + 4));
  fVar2 = (float)FUN_03c58574(fVar3);
  *(int *)(in_x8 + 8) = (int)fVar2;
  fVar3 = (float)FUN_03c58574(fVar3);
  bVar1 = local_8 == ___stack_chk_guard;
  *(int *)(in_x8 + 0xc) = (int)fVar3;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CheatUIPanel::getCollapseButtonRect() const */

void CheatUIPanel::getCollapseButtonRect(void)

{
  bool bVar1;
  CheatUIPanel *in_x0;
  Insets *in_x8;
  float fVar2;
  float fVar3;
  float fVar4;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetScreenRect(in_x0);
  Sexy::Insets::Insets(in_x8,aIStack_18);
  fVar3 = DAT_06ad0a98;
  fVar4 = DAT_06ad0a98 + 8.0;
  fVar2 = (float)FUN_03c58574(fVar4);
  *(int *)in_x8 = (int)((float)*(int *)in_x8 - fVar2);
  fVar2 = (float)FUN_03c58574(fVar4);
  *(int *)(in_x8 + 4) = (int)(fVar2 + (float)*(int *)(in_x8 + 4));
  fVar2 = (float)FUN_03c58574(fVar3);
  *(int *)(in_x8 + 8) = (int)fVar2;
  fVar3 = (float)FUN_03c58574(fVar3);
  bVar1 = local_8 == ___stack_chk_guard;
  *(int *)(in_x8 + 0xc) = (int)fVar3;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CheatUIPanel::AddSeparator() */

void CheatUIPanel::AddSeparator(void)

{
  wchar_t *in_x0;
  CheatUILineSeparator *this;
  PFILE *in_x2;
  
  this = ::operator_new(0x50);
  CheatUILineSeparator::CheatUILineSeparator(this);
  PakInterfaceBase::FGetS(in_x0,(int)this,in_x2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CheatUIPanel::TouchBegan(Sexy::Touch const&) */

void __thiscall CheatUIPanel::TouchBegan(CheatUIPanel *this,Touch *param_1)

{
  TPoint *pTVar1;
  undefined8 uVar2;
  char cVar3;
  CheatUIPanel CVar4;
  TRect<int> aTStack_38 [16];
  TRect<int> aTStack_28 [16];
  TRect<int> aTStack_18 [16];
  long local_8;
  
  CVar4 = this[0x48];
  local_8 = ___stack_chk_guard;
  if (CVar4 != (CheatUIPanel)0x0) {
    if (this[0x49] == (CheatUIPanel)0x0) {
      if (*(long *)(this + 8) == 0) {
        pTVar1 = (TPoint *)(param_1 + 0x10);
        GetScreenRect(this);
        cVar3 = Sexy::TRect<int>::Contains(aTStack_38,pTVar1);
        if (cVar3 == '\0') {
          getCloseButtonRect();
          cVar3 = Sexy::TRect<int>::Contains(aTStack_28,pTVar1);
          if (cVar3 == '\0') {
            getCollapseButtonRect();
            cVar3 = Sexy::TRect<int>::Contains(aTStack_18,pTVar1);
            if (cVar3 == '\0') {
              this[0x4a] = (CheatUIPanel)0x0;
              CVar4 = (CheatUIPanel)0x0;
              goto LAB_03c59a44;
            }
          }
        }
        uVar2 = *(undefined8 *)(param_1 + 8);
        *(undefined8 *)(this + 8) = *(undefined8 *)param_1;
        *(undefined8 *)(this + 0x10) = uVar2;
        uVar2 = *(undefined8 *)(param_1 + 0x18);
        *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x10);
        *(undefined8 *)(this + 0x20) = uVar2;
        uVar2 = *(undefined8 *)(param_1 + 0x28);
        *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x20);
        *(undefined8 *)(this + 0x30) = uVar2;
        *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x30);
      }
      else {
        CVar4 = (CheatUIPanel)0x0;
      }
    }
    else {
      CVar4 = (CheatUIPanel)0x0;
    }
  }
LAB_03c59a44:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(CVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CheatUIPanel::SetVisible(bool) */

void __thiscall CheatUIPanel::SetVisible(CheatUIPanel *this,bool param_1)

{
  LawnApp *this_00;
  char cVar1;
  long lVar2;
  PVZ2UIDialog *pPVar3;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<NetworkItemMgr>::GetInstance();
  cVar1 = NetworkItemMgr::HasNetworkCacheSyncComplete();
  if (cVar1 == '\0') {
    lVar2 = Sexy::LazySingleton<NetworkItemMgr>::GetInstance();
    cVar1 = FUN_03c58454(*(undefined1 *)(lVar2 + 0x12));
    this_00 = gLawnApp;
    if (cVar1 == '\0') {
      FUN_05478178(awStack_58,L"[SYNCING_WAITING_TITLE]",auStack_68);
      FUN_05478178(awStack_50,L"[SYNCING_WAITING_TEXT]",auStack_60);
      pPVar3 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
      FUN_05476c50(awStack_50);
      nop();
      FUN_05476c50(awStack_58);
      nop();
      FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_60);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
      Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
      PVZ2UIDialog::AddButton(pPVar3,awStack_58,aDStack_38,0);
      FUN_05476c50(awStack_58);
      nop();
      goto LAB_03c5a248;
    }
  }
  this[0x48] = (CheatUIPanel)param_1;
  if (!param_1) {
    SetKeyboardMode(this,false);
  }
LAB_03c5a248:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CheatUIPanel::DoPartialOpenOrClose() */

void __thiscall CheatUIPanel::DoPartialOpenOrClose(CheatUIPanel *this)

{
  LawnApp *this_00;
  char cVar1;
  long lVar2;
  PVZ2UIDialog *pPVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = IsVisible(this);
  if (cVar1 == '\0') {
    Sexy::LazySingleton<NetworkItemMgr>::GetInstance();
    cVar1 = NetworkItemMgr::HasNetworkCacheSyncComplete();
    if (cVar1 == '\0') {
      lVar2 = Sexy::LazySingleton<NetworkItemMgr>::GetInstance();
      cVar1 = FUN_03c58454(*(undefined1 *)(lVar2 + 0x12));
      this_00 = gLawnApp;
      if (cVar1 == '\0') {
        FUN_05478178(awStack_58,L"[SYNCING_WAITING_TITLE]",auStack_68);
        FUN_05478178(awStack_50,L"[SYNCING_WAITING_TEXT]",auStack_60);
        pPVar3 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
        FUN_05476c50(awStack_50);
        nop();
        FUN_05476c50(awStack_58);
        nop();
        FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_60);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
        Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
        PVZ2UIDialog::AddButton(pPVar3,awStack_58,aDStack_38,0);
        FUN_05476c50(awStack_58);
        nop();
        goto LAB_03c5a3d8;
      }
    }
    fVar4 = (float)PVZ_EOT();
    if ((fVar4 <= *(float *)(this + 0x44)) ||
       (fVar6 = (float)PVZ_RealT(), 1.0 <= fVar6 - *(float *)(this + 0x44))) {
      uVar5 = PVZ_RealT();
      *(undefined4 *)(this + 0x44) = uVar5;
    }
    else {
      *(float *)(this + 0x44) = fVar4;
      SetVisible(this,true);
    }
  }
  else {
    SetVisible(this,false);
  }
LAB_03c5a3d8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CheatUIPanel::collapseTopLevelFolder() */

void __thiscall CheatUIPanel::collapseTopLevelFolder(CheatUIPanel *this)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  CheatUILineFolder *this_00;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar4 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)(this + 0x58);
    uVar2 = FUN_03c58458(uVar5,*(undefined8 *)(this + 0x60));
    uVar1 = uVar4 + 1;
    if (uVar2 <= uVar4) break;
    puVar3 = (undefined8 *)FUN_03c58464(uVar5,uVar4);
    this_00 = Sexy::RtObject::Cast<CheatUILineFolder>((RtObject *)*puVar3);
    uVar4 = uVar1;
    if (this_00 != (CheatUILineFolder *)0x0) {
      PakInterface::SetPassCode((PakInterface *)this_00,'\0');
    }
  }
  return;
}


/* CheatUIPanel::CheatUIPanel() */

void __thiscall CheatUIPanel::CheatUIPanel(CheatUIPanel *this)

{
  undefined4 uVar1;
  
  Sexy::LazySingleton<CheatUIPanel>::LazySingleton((LazySingleton<CheatUIPanel> *)this);
  *(undefined ***)this = &PTR__CheatUIPanel_06754090;
  Sexy::Touch::Touch((Touch *)(this + 8));
  *(undefined4 *)(this + 0x40) = 0;
  uVar1 = PVZ_EOT();
  this[0x48] = (CheatUIPanel)0x0;
  this[0x49] = (CheatUIPanel)0x0;
  this[0x4a] = (CheatUIPanel)0x0;
  *(undefined4 *)(this + 0x4c) = 0;
  this[0x50] = (CheatUIPanel)0x0;
  *(undefined4 *)(this + 0x44) = uVar1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x70));
  *(undefined8 *)(this + 8) = 0;
  return;
}


/* CheatUIPanel::getTotalHeight() */

float __thiscall CheatUIPanel::getTotalHeight(CheatUIPanel *this)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  Cheat *pCVar4;
  CheatManager *this_00;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  
  uVar6 = 0;
  uVar7 = *(undefined8 *)(this + 0x58);
  fVar9 = 0.0;
  lVar2 = FUN_03c58458(uVar7,*(undefined8 *)(this + 0x60));
  if (lVar2 != 0) {
    do {
      puVar3 = (undefined8 *)FUN_03c58464(uVar7,uVar6);
      pCVar4 = (Cheat *)Sexy::ProfileManager::GetListener((ProfileManager *)*puVar3);
      if (pCVar4 == (Cheat *)0x0) {
LAB_03c5ae54:
        puVar3 = (undefined8 *)FUN_03c58464(*(undefined8 *)(this + 0x58),uVar6);
        fVar8 = (float)(**(code **)(*(long *)*puVar3 + 0x48))((long *)*puVar3);
        fVar9 = fVar9 + fVar8;
      }
      else {
        this_00 = (CheatManager *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
        cVar1 = CheatManager::IsCheatValidForCurrentContext(this_00,pCVar4);
        if (cVar1 != '\0') goto LAB_03c5ae54;
      }
      uVar7 = *(undefined8 *)(this + 0x58);
      uVar6 = uVar6 + 1;
      uVar5 = FUN_03c58458(uVar7,*(undefined8 *)(this + 0x60));
    } while (uVar6 < uVar5);
  }
  return fVar9;
}


/* CheatUIPanel::getSliderButtonRect() */

void CheatUIPanel::getSliderButtonRect(void)

{
  uint uVar1;
  CheatUIPanel *in_x0;
  int iVar2;
  Insets *in_x8;
  float fVar3;
  float fVar4;
  float fVar5;
  
  Sexy::Insets::Insets(in_x8);
  fVar3 = (float)FUN_03c58574(0x41900000);
  *(int *)in_x8 = (int)((float)*(int *)(gLawnApp + 0xd4) - fVar3);
  fVar3 = (float)FUN_03c58574(0x41800000);
  *(int *)(in_x8 + 8) = (int)fVar3;
  fVar3 = (float)getTotalHeight(in_x0);
  iVar2 = 0;
  fVar4 = (float)*(int *)(gLawnApp + 0xd8);
  if (fVar3 <= fVar4) {
    fVar3 = fVar4;
  }
  fVar5 = (fVar4 / fVar3) * fVar4;
  if (fVar4 != fVar5) {
    uVar1 = (int)*(uint *)(in_x0 + 0x40) >> 0x1f;
    iVar2 = (int)((fVar4 - fVar5) *
                 ((float)(int)((*(uint *)(in_x0 + 0x40) ^ uVar1) - uVar1) / (fVar3 - fVar4)));
  }
  *(int *)(in_x8 + 4) = iVar2;
  *(int *)(in_x8 + 0xc) = (int)fVar5;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CheatUIPanel::Tap(Sexy::Point) */

void __thiscall CheatUIPanel::Tap(CheatUIPanel *this,TPoint *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 *puVar6;
  CheatManager *pCVar7;
  ulong uVar8;
  Cheat *pCVar9;
  ulong uVar10;
  int iVar11;
  undefined8 uVar12;
  float fVar13;
  Point aPStack_20 [8];
  Insets aIStack_18 [4];
  int local_14;
  int local_c;
  long local_8;
  
  uVar3 = DAT_06ad0bb8;
  local_8 = ___stack_chk_guard;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) - *(int *)(this + 0x40);
  fVar13 = (float)FUN_03c58574(uVar3);
  uVar10 = 0;
  Sexy::Insets::Insets(aIStack_18,0,0,(int)fVar13,0);
  uVar12 = *(undefined8 *)(this + 0x58);
  lVar5 = FUN_03c58458(uVar12,*(undefined8 *)(this + 0x60));
  if (lVar5 != 0) {
    do {
      puVar6 = (undefined8 *)FUN_03c58464(uVar12,uVar10);
      uVar3 = PakInterface::GetFileSearchOrder((PakInterface *)*puVar6);
      pCVar7 = (CheatManager *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
      uVar4 = CheatManager::GetCurrentContext(pCVar7);
      bVar1 = TestFlag<VaseFlags>(uVar3,uVar4);
      if (bVar1) {
        pCVar9 = (Cheat *)Sexy::ProfileManager::GetListener((ProfileManager *)*puVar6);
        if (pCVar9 != (Cheat *)0x0) {
          pCVar7 = (CheatManager *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
          cVar2 = CheatManager::IsCheatValidForCurrentContext(pCVar7,pCVar9);
          if (cVar2 == '\0') goto LAB_03c5b040;
        }
        puVar6 = (undefined8 *)FUN_03c58464(*(undefined8 *)(this + 0x58),uVar10);
        fVar13 = (float)(**(code **)(*(long *)*puVar6 + 0x48))((long *)*puVar6);
        local_c = (int)fVar13;
        cVar2 = Sexy::TRect<int>::Contains((TRect<int> *)aIStack_18,param_2);
        iVar11 = (int)fVar13;
        if (cVar2 != '\0') {
          Sexy::Point::Point(aPStack_20,*(int *)param_2,*(int *)(param_2 + 4) - local_14);
          puVar6 = (undefined8 *)FUN_03c58464(*(undefined8 *)(this + 0x58),uVar10);
          DTransformNode::getChildRecursionByName<DTouchLayer*>((string *)*puVar6);
          iVar11 = local_c;
        }
        local_14 = local_14 + iVar11;
      }
LAB_03c5b040:
      uVar10 = uVar10 + 1;
      uVar12 = *(undefined8 *)(this + 0x58);
      uVar8 = FUN_03c58458(uVar12,*(undefined8 *)(this + 0x60));
    } while (uVar10 < uVar8);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CheatUIPanel::TouchEnded(Sexy::Touch const&) */

void __thiscall CheatUIPanel::TouchEnded(CheatUIPanel *this,Touch *param_1)

{
  TPoint<int> *this_00;
  char cVar1;
  undefined8 uVar2;
  Point aPStack_50 [8];
  TPoint aTStack_48 [8];
  Point aPStack_40 [8];
  TRect<int> aTStack_38 [16];
  TRect<int> aTStack_28 [16];
  int local_18;
  int local_14;
  long local_8;
  
  uVar2 = 0;
  local_8 = ___stack_chk_guard;
  if (*(long *)param_1 == *(long *)(this + 8)) {
    this_00 = (TPoint<int> *)(param_1 + 0x10);
    getCloseButtonRect();
    getCollapseButtonRect();
    cVar1 = Sexy::TRect<int>::Contains(aTStack_38,(TPoint *)this_00);
    if (cVar1 == '\0') {
      cVar1 = Sexy::TRect<int>::Contains(aTStack_28,(TPoint *)this_00);
      if (cVar1 == '\0') {
        if (this[0x4a] == (CheatUIPanel)0x0) {
          GetScreenRect(this);
          Sexy::Point::Point(aPStack_50,local_18,local_14);
          Sexy::TPoint<int>::operator-(this_00,(TPoint *)aPStack_50);
          Sexy::Point::Point(aPStack_40,aTStack_48);
          Tap(this,aPStack_40);
        }
      }
      else {
        collapseTopLevelFolder(this);
      }
    }
    else {
      (**(code **)(*gLawnApp + 0x2c0))(gLawnApp,0);
    }
    *(undefined8 *)(this + 8) = 0;
    uVar2 = 1;
    this[0x4a] = (CheatUIPanel)0x0;
    *(undefined4 *)(this + 0x4c) = 0;
    this[0x50] = (CheatUIPanel)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* CheatUIPanel::SetScrollAmount(int) */

void __thiscall CheatUIPanel::SetScrollAmount(CheatUIPanel *this,int param_1)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  Cheat *pCVar4;
  CheatManager *this_00;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  
  if ((float)param_1 <= 0.0) {
    *(int *)(this + 0x40) = param_1;
    fVar9 = 0.0;
    uVar6 = 0;
    uVar7 = *(undefined8 *)(this + 0x58);
    lVar2 = FUN_03c58458(uVar7,*(undefined8 *)(this + 0x60));
    if (lVar2 != 0) {
      do {
        puVar3 = (undefined8 *)FUN_03c58464(uVar7,uVar6);
        pCVar4 = (Cheat *)Sexy::ProfileManager::GetListener((ProfileManager *)*puVar3);
        if (pCVar4 == (Cheat *)0x0) {
LAB_03c5b31c:
          puVar3 = (undefined8 *)FUN_03c58464(*(undefined8 *)(this + 0x58),uVar6);
          fVar8 = (float)(**(code **)(*(long *)*puVar3 + 0x48))((long *)*puVar3);
          fVar9 = fVar9 + fVar8;
        }
        else {
          this_00 = (CheatManager *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
          cVar1 = CheatManager::IsCheatValidForCurrentContext(this_00,pCVar4);
          if (cVar1 != '\0') goto LAB_03c5b31c;
        }
        uVar7 = *(undefined8 *)(this + 0x58);
        uVar6 = uVar6 + 1;
        uVar5 = FUN_03c58458(uVar7,*(undefined8 *)(this + 0x60));
      } while (uVar6 < uVar5);
    }
    fVar8 = (float)*(int *)(gLawnApp + 0xd8) - fVar9;
    if (fVar9 <= (float)*(int *)(gLawnApp + 0xd8)) {
      fVar8 = 0.0;
    }
    if ((float)*(int *)(this + 0x40) < fVar8) {
      *(int *)(this + 0x40) = (int)fVar8;
      return;
    }
  }
  else {
    *(undefined4 *)(this + 0x40) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CheatUIPanel::TouchMoved(Sexy::Touch const&) */

void __thiscall CheatUIPanel::TouchMoved(CheatUIPanel *this,Touch *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  TPoint<int> aTStack_18 [16];
  long local_8;
  
  uVar3 = 0;
  local_8 = ___stack_chk_guard;
  if (*(long *)param_1 == *(long *)(this + 8)) {
    if (this[0x4a] == (CheatUIPanel)0x0) {
      Sexy::TPoint<int>::operator-((TPoint<int> *)(this + 0x18),(TPoint *)(param_1 + 0x10));
      iVar4 = Sexy::TPoint<int>::Magnitude(aTStack_18);
      dVar6 = *(double *)(param_1 + 0x28);
      dVar7 = *(double *)(this + 0x30);
      iVar2 = FUN_03c58560(10);
      if ((iVar2 < iVar4) || (0.25 < dVar6 - dVar7)) {
        *(undefined4 *)(this + 0x4c) = *(undefined4 *)(this + 0x40);
        this[0x4a] = (CheatUIPanel)0x1;
        getSliderButtonRect();
        cVar1 = Sexy::TRect<int>::Contains((TRect<int> *)aTStack_18,(TPoint *)(this + 0x18));
        if (cVar1 != '\0') {
          this[0x50] = (CheatUIPanel)0x1;
        }
      }
      if (this[0x4a] == (CheatUIPanel)0x0) {
        uVar3 = 1;
        goto LAB_03c5b3fc;
      }
    }
    iVar4 = *(int *)(param_1 + 0x14) - *(int *)(this + 0x1c);
    if (this[0x50] != (CheatUIPanel)0x0) {
      iVar2 = *(int *)(gLawnApp + 0xd8);
      fVar5 = (float)getTotalHeight(this);
      iVar4 = (int)((fVar5 * (float)-iVar4) / (float)iVar2);
    }
    SetScrollAmount(this,iVar4 + *(int *)(this + 0x4c));
    uVar3 = 1;
  }
LAB_03c5b3fc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CheatUIPanel::Draw(Sexy::Graphics*) */

void __thiscall CheatUIPanel::Draw(CheatUIPanel *this,Graphics *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  CheatManager *pCVar11;
  Cheat *pCVar12;
  ulong uVar13;
  Image *pIVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  GraphicsAutoState aGStack_38 [8];
  GraphicsAutoState aGStack_30 [8];
  Insets aIStack_28 [4];
  int local_24;
  Insets aIStack_18 [12];
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x48] == (CheatUIPanel)0x0) {
    fVar15 = (float)PVZ_EOT();
    if ((*(float *)(this + 0x44) < fVar15) &&
       (fVar15 = (float)PVZ_RealT(), fVar15 - *(float *)(this + 0x44) < 1.0)) {
      Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)aIStack_28,param_1);
      Sexy::Graphics::SetDrawMode(param_1,0);
      Sexy::Graphics::SetColorizeImages(param_1,true);
      Sexy::Insets::Insets(aIStack_18,0x46,0x46,0x46,0xf0);
      Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
      iVar6 = FUN_03c58560(10);
      Sexy::Graphics::FillRect
                (param_1,*(int *)((long)gLawnApp + 0xd4) - iVar6,0,iVar6,(int)gLawnApp[0x1b]);
      plVar1 = gLawnApp;
      iVar7 = FUN_03c58560(10);
      iVar6 = *(int *)((long)plVar1 + 0xd4);
      fVar15 = (float)FUN_03c58574(DAT_06ad0a88);
      Sexy::Graphics::Translate
                (param_1,iVar6 - iVar7,(int)(((float)(int)plVar1[0x1b] - fVar15) * 0.5));
      pIVar14 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                   ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad0ab0);
      Sexy::Graphics::DrawImage(param_1,pIVar14,0,0);
      Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)aIStack_28);
    }
  }
  else if (this[0x49] == (CheatUIPanel)0x0) {
    SetScrollAmount(this,*(int *)(this + 0x40));
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_38,param_1);
    fVar15 = (float)FUN_03c58574(DAT_06ad0bb8);
    Sexy::Graphics::Translate(param_1,(int)((float)*(int *)((long)gLawnApp + 0xd4) - fVar15),0);
    Sexy::Graphics::SetDrawMode(param_1,0);
    Sexy::Graphics::SetColorizeImages(param_1,true);
    Sexy::Insets::Insets(aIStack_18,0x46,0x46,0x46,0xf0);
    Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
    fVar15 = (float)FUN_03c58574(DAT_06ad0bb8);
    Sexy::Graphics::FillRect(param_1,0,0,(int)fVar15,(int)gLawnApp[0x1b]);
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_30,param_1);
    fVar15 = (float)FUN_03c58574(DAT_06ad0a98 + 8.0);
    fVar16 = (float)FUN_03c58574(0);
    Sexy::Graphics::Translate(param_1,(int)-fVar15,(int)fVar16);
    Sexy::Insets::Insets(aIStack_18,0x46,0x46,0x46,0xf0);
    Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
    fVar15 = (float)FUN_03c58574(DAT_06ad0a98 + 8.0);
    Sexy::Graphics::FillRect(param_1,0,0,(int)fVar15,(int)fVar15);
    Sexy::Color::Color((Color *)aIStack_18,1);
    Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
    pIVar14 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                 ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad0b70);
    fVar15 = (float)FUN_03c58574(0x40800000);
    fVar16 = (float)FUN_03c58574(DAT_06ad0a98);
    Sexy::Insets::Insets(aIStack_28,(int)fVar15,(int)fVar15,(int)fVar16,(int)fVar16);
    lVar8 = CachedResourcePtr<Sexy::Image>::operator->
                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad0b70);
    iVar6 = *(int *)(lVar8 + 0x38);
    lVar8 = CachedResourcePtr<Sexy::Image>::operator->
                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad0b70);
    Sexy::Insets::Insets(aIStack_18,0,0,iVar6,*(int *)(lVar8 + 0x3c));
    Sexy::Graphics::DrawImage(param_1,pIVar14,(TRect *)aIStack_28,(TRect *)aIStack_18);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_30);
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_30,param_1);
    fVar15 = (float)FUN_03c58574(DAT_06ad0a98 + 8.0);
    Sexy::Graphics::Translate(param_1,(int)-fVar15,(int)fVar15);
    Sexy::Insets::Insets(aIStack_18,0x46,0x46,0x46,0xf0);
    Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
    fVar15 = (float)FUN_03c58574(DAT_06ad0a98 + 8.0);
    Sexy::Graphics::FillRect(param_1,0,0,(int)fVar15,(int)fVar15);
    Sexy::Color::Color((Color *)aIStack_18,1);
    Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
    pIVar14 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                 ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad0ab0);
    fVar15 = DAT_06ad0a98;
    fVar16 = (float)FUN_03c58574(DAT_06ad0a98 * 0.25 + 4.0);
    fVar17 = (float)FUN_03c58574(0x40800000);
    fVar18 = (float)FUN_03c58574(fVar15 * 0.5);
    fVar15 = (float)FUN_03c58574(fVar15);
    Sexy::Insets::Insets(aIStack_28,(int)fVar16,(int)fVar17,(int)fVar18,(int)fVar15);
    lVar8 = CachedResourcePtr<Sexy::Image>::operator->
                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad0ab0);
    iVar6 = *(int *)(lVar8 + 0x38);
    lVar8 = CachedResourcePtr<Sexy::Image>::operator->
                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad0ab0);
    Sexy::Insets::Insets(aIStack_18,0,0,iVar6,*(int *)(lVar8 + 0x3c));
    Sexy::Graphics::DrawImage(param_1,pIVar14,(TRect *)aIStack_28,(TRect *)aIStack_18);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_30);
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_30,param_1);
    fVar15 = (float)FUN_03c58574(DAT_06ad0bb8 - 20.0);
    iVar6 = FUN_03c58560(0);
    Sexy::Graphics::Translate(param_1,(int)fVar15,iVar6);
    Sexy::Insets::Insets(aIStack_18,0x8c,0x8c,0x8c,0xf0);
    Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
    iVar6 = FUN_03c58560(0x14);
    Sexy::Graphics::FillRect(param_1,0,0,iVar6,(int)gLawnApp[0x1b]);
    Sexy::Insets::Insets(aIStack_18,0x46,0x46,0x46,0xf0);
    Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
    getSliderButtonRect();
    fVar15 = (float)FUN_03c58574(0x41800000);
    getSliderButtonRect();
    Sexy::Graphics::FillRect(param_1,2,local_24,(int)fVar15,local_c);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_30);
    lVar8 = FUN_03c58458(*(undefined8 *)(this + 0x58),*(undefined8 *)(this + 0x60));
    if (lVar8 != 0) {
      lVar8 = 0;
      Sexy::Graphics::Translate(param_1,0,*(int *)(this + 0x40));
      uVar9 = *(undefined8 *)(this + 0x58);
      do {
        puVar10 = (undefined8 *)FUN_03c58464(uVar9,lVar8);
        uVar4 = PakInterface::GetFileSearchOrder((PakInterface *)*puVar10);
        pCVar11 = (CheatManager *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
        uVar5 = CheatManager::GetCurrentContext(pCVar11);
        bVar3 = TestFlag<VaseFlags>(uVar4,uVar5);
        if (bVar3) {
          pCVar12 = (Cheat *)Sexy::ProfileManager::GetListener((ProfileManager *)*puVar10);
          if (pCVar12 != (Cheat *)0x0) {
            pCVar11 = (CheatManager *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
            cVar2 = CheatManager::IsCheatValidForCurrentContext(pCVar11,pCVar12);
            if (cVar2 == '\0') goto LAB_03c5ba6c;
          }
          CheatUILine::Draw((CheatUILine *)*puVar10,param_1);
          fVar15 = (float)(**(code **)(*(long *)*puVar10 + 0x48))((long *)*puVar10);
          Sexy::Graphics::Translate(param_1,0,(int)fVar15);
          uVar9 = *(undefined8 *)(this + 0x58);
          uVar13 = FUN_03c58458(uVar9,*(undefined8 *)(this + 0x60));
          if (uVar13 <= lVar8 + 1U) break;
        }
        else {
LAB_03c5ba6c:
          uVar9 = *(undefined8 *)(this + 0x58);
          uVar13 = FUN_03c58458(uVar9,*(undefined8 *)(this + 0x60));
          if (uVar13 <= lVar8 + 1U) break;
        }
        lVar8 = lVar8 + 1;
      } while( true );
    }
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_38);
  }
  else {
    cVar2 = (**(code **)(*gLawnApp + 0x348))(gLawnApp);
    if (cVar2 == '\0') {
      SetVisible(this,false);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CheatUIPanel::~CheatUIPanel() */

void __thiscall CheatUIPanel::~CheatUIPanel(CheatUIPanel *this)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0x58);
  uVar4 = 0;
  *(undefined ***)this = &PTR__CheatUIPanel_06754090;
  uVar1 = FUN_03c58458(uVar5,*(undefined8 *)(this + 0x60));
  while (uVar3 = uVar4, uVar4 < uVar1) {
    while( true ) {
      uVar4 = uVar3 + 1;
      plVar2 = (long *)FUN_03c58464(uVar5,uVar3);
      plVar2 = (long *)*plVar2;
      if (plVar2 == (long *)0x0) break;
      (**(code **)(*plVar2 + 0x18))(plVar2);
      uVar5 = *(undefined8 *)(this + 0x58);
      uVar1 = FUN_03c58458(uVar5,*(undefined8 *)(this + 0x60));
      uVar3 = uVar4;
      if (uVar1 <= uVar4) goto LAB_03c5c414;
    }
  }
LAB_03c5c414:
  std::vector<CheatUILineTracker,std::allocator<CheatUILineTracker>>::clear
            ((vector<CheatUILineTracker,std::allocator<CheatUILineTracker>> *)(this + 0x58));
  std::vector<CheatUILineFolder*,std::allocator<CheatUILineFolder*>>::~vector
            ((vector<CheatUILineFolder*,std::allocator<CheatUILineFolder*>> *)(this + 0x70));
  std::vector<CheatUILineTracker,std::allocator<CheatUILineTracker>>::~vector
            ((vector<CheatUILineTracker,std::allocator<CheatUILineTracker>> *)(this + 0x58));
  Sexy::LazySingleton<CheatUIPanel>::~LazySingleton((LazySingleton<CheatUIPanel> *)this);
  return;
}


/* CheatUIPanel::~CheatUIPanel() */

void __thiscall CheatUIPanel::~CheatUIPanel(CheatUIPanel *this)

{
  ~CheatUIPanel(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CheatUIPanel::EndFolder() */

void __thiscall CheatUIPanel::EndFolder(CheatUIPanel *this)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  uVar3 = *(undefined8 *)(this + 0x70);
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_03c58474(uVar3,*(undefined8 *)(this + 0x78));
  puVar2 = (undefined8 *)FUN_03c58480(uVar3,lVar1 + -1);
  uVar3 = *puVar2;
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x70));
  lVar1 = FUN_03c58474(*(undefined8 *)(this + 0x70),*(undefined8 *)(this + 0x78));
  local_20 = __gnu_cxx::
             __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
             ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                          *)&local_28,lVar1);
  local_18 = __gnu_cxx::
             __normal_iterator<Sexy::IResStreamsDriver::TaskResource**,std::vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>>
             ::operator-((__normal_iterator<Sexy::IResStreamsDriver::TaskResource**,std::vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>>
                          *)&local_20,1);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_10,(__normal_iterator *)&local_18);
  std::vector<CheatUILineFolder*,std::allocator<CheatUILineFolder*>>::erase
            ((vector<CheatUILineFolder*,std::allocator<CheatUILineFolder*>> *)(this + 0x70),local_10
            );
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CheatUIPanel::BeginFolder(std::string const&, bool) */

void __thiscall CheatUIPanel::BeginFolder(CheatUIPanel *this,string *param_1,bool param_2)

{
  CheatUILineFolder *this_00;
  PFILE *pPVar1;
  CheatUILineFolder *local_10;
  long local_8;
  
  pPVar1 = (PFILE *)(ulong)param_2;
  local_8 = ___stack_chk_guard;
  this_00 = ::operator_new(0x68);
  CheatUILineFolder::CheatUILineFolder(this_00,param_1,param_2);
  local_10 = this_00;
  PakInterfaceBase::FGetS((wchar_t *)this,(int)this_00,pPVar1);
  std::vector<CheatUILineFolder*,std::allocator<CheatUILineFolder*>>::push_back
            ((vector<CheatUILineFolder*,std::allocator<CheatUILineFolder*>> *)(this + 0x70),
             &local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10);
}

