// Class: CrackerTabUI


/* CrackerTabUI::~CrackerTabUI() */

void __thiscall CrackerTabUI::~CrackerTabUI(CrackerTabUI *this)

{
  *(undefined ***)this = &PTR__CrackerTabUI_0671d100;
  if (*(long *)(this + 0x40) != 0) {
    (**(code **)(**(long **)(this + 0x20) + 0x68))(*(long **)(this + 0x20));
    if (*(long **)(this + 0x40) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x40) + 0x18))();
    }
    *(undefined8 *)(this + 0x40) = 0;
  }
  nop();
  return;
}


/* CrackerTabUI::~CrackerTabUI() */

void __thiscall CrackerTabUI::~CrackerTabUI(CrackerTabUI *this)

{
  ~CrackerTabUI(this);
  AK::FreeHook(this);
  return;
}


/* CrackerTabUI::RemoveExternalWidget() */

void __thiscall CrackerTabUI::RemoveExternalWidget(CrackerTabUI *this)

{
  if (*(long *)(this + 0x40) != 0) {
    (**(code **)(**(long **)(this + 0x20) + 0x68))(*(long **)(this + 0x20));
    if (*(long **)(this + 0x40) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x40) + 0x18))();
    }
    *(undefined8 *)(this + 0x40) = 0;
    this[0x38] = (CrackerTabUI)0x0;
  }
  return;
}


/* CrackerTabUI::CrackerTabUI(int, UI::Dialog*) */

void __thiscall CrackerTabUI::CrackerTabUI(CrackerTabUI *this,int param_1,Dialog *param_2)

{
  FestivalEventTabBase::FestivalEventTabBase((FestivalEventTabBase *)this,param_1,param_2);
  *(undefined8 *)(this + 0x28) = 0;
  this[0x38] = (CrackerTabUI)0x0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined ***)this = &PTR__CrackerTabUI_0671d100;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrackerTabUI::SetSelect(bool) */

void __thiscall CrackerTabUI::SetSelect(CrackerTabUI *this,bool param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  PVZ2UIButton *pPVar6;
  undefined8 uVar7;
  LotteryResultProgressBar *pLVar8;
  long *plVar9;
  UIWidgetImage *pUVar10;
  Dialog *pDVar11;
  code *pcVar12;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FestivalEventTabBase::SetSelect((FestivalEventTabBase *)this,param_1);
  pDVar11 = *(Dialog **)(this + 0x10);
  std::string::string(asStack_10,"Btn_Goto");
  pPVar6 = UI::Dialog::GetWidget<PVZ2UIButton>(pDVar11,asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*(long *)pPVar6 + 0x158))(pPVar6,1);
  pcVar12 = *(code **)(*(long *)pPVar6 + 800);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_24_Outline);
  (*pcVar12)(pPVar6,uVar7);
  if (param_1) {
    pLVar8 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac8380);
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
    iVar5 = *(int *)(pPVar6 + 0x50);
    iVar1 = *(int *)(*(long *)(this + 0x20) + 0x48);
    iVar3 = FUN_03ac4800(10);
    uVar4 = FUN_03ac4800(0x196);
    (**(code **)(*(long *)pPVar6 + 0x1a8))(pPVar6,((iVar2 + iVar1) - iVar5) - iVar3,uVar4);
    pDVar11 = *(Dialog **)(this + 0x10);
    std::string::string(asStack_10,"Tab1_Cost_Back");
    plVar9 = (long *)UI::Dialog::GetWidget(pDVar11,asStack_10);
    std::string::~string(asStack_10);
    nop();
    (**(code **)(*plVar9 + 0x158))(plVar9,0);
  }
  else {
    pLVar8 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac8380);
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
    (**(code **)(*(long *)pPVar6 + 0x1a8))
              (pPVar6,(iVar5 - *(int *)(pPVar6 + 0x50)) / 2,*(undefined4 *)(pPVar6 + 0x4c));
    pDVar11 = *(Dialog **)(this + 0x10);
    std::string::string(asStack_10,"Tab1_Cost_Back");
    plVar9 = (long *)UI::Dialog::GetWidget(pDVar11,asStack_10);
    std::string::~string(asStack_10);
    nop();
    (**(code **)(*plVar9 + 0x158))(plVar9,0);
    if (*(long *)(this + 0x40) != 0) {
      RemoveExternalWidget(this);
    }
  }
  pDVar11 = *(Dialog **)(this + 0x10);
  std::string::string(asStack_10,"UIImage_Gem_Icon");
  pUVar10 = UI::Dialog::GetWidget<UIWidgetImage>(pDVar11,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar10 != (UIWidgetImage *)0x0) {
    (**(code **)(*(long *)pUVar10 + 0x158))(pUVar10,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CrackerTabUI::InitView() */

void __thiscall CrackerTabUI::InitView(CrackerTabUI *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long *plVar4;
  
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac87f8);
  *(undefined8 *)(this + 0x28) = uVar3;
  plVar4 = *(long **)(this + 0x20);
  uVar1 = FUN_03ac4800(0x24e);
  uVar2 = FUN_03ac4800(0x1d6);
  (**(code **)(*plVar4 + 0x198))(plVar4,0,0,uVar1,uVar2);
  plVar4 = (long *)ActiveCenterTabBase::GetTabContent((ActiveCenterTabBase *)this);
  (**(code **)(*plVar4 + 0x60))(plVar4,*(undefined8 *)(this + 0x20));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrackerTabUI::DrawForeground(Sexy::Graphics*) */

void __thiscall CrackerTabUI::DrawForeground(CrackerTabUI *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  Image *pIVar7;
  undefined8 uVar8;
  long lVar9;
  GraphicsAutoState aGStack_40 [8];
  int local_38;
  int local_34;
  undefined1 auStack_30 [8];
  Color aCStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  if ((*(long *)(this + 0x18) != 0) &&
     (cVar1 = FUN_03ac12b0(*(undefined1 *)(*(long *)(this + 0x18) + 0x1a8)), cVar1 != '\0')) {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_40,param_1);
    (**(code **)(**(long **)(this + 0x20) + 0xd0))(&local_38,*(long **)(this + 0x20));
    Sexy::Graphics::Translate(param_1,local_38,local_34);
    pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac8240);
    lVar9 = *(long *)(this + 0x20);
    iVar2 = FUN_03ac4800(0x54);
    Sexy::Graphics::DrawImage
              (param_1,pIVar7,*(int *)(lVar9 + 0x48),*(int *)(lVar9 + 0x4c),*(int *)(lVar9 + 0x50),
               iVar2);
    iVar2 = *(int *)(*(long *)(this + 0x20) + 0x48);
    if (0 < *(long *)(this + 0x30)) {
      TodStringTranslate(L"[ACTIVITY_TIME_DOWN]");
      iVar3 = FUN_03ac4800(0x1a4);
      iVar4 = FUN_03ac4800(100);
      iVar5 = FUN_03ac4800(0x1e);
      Sexy::Insets::Insets(aIStack_18,0,iVar3,iVar4,iVar5);
      uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
      Sexy::Color::Color(aCStack_28,0x42,0x26,0);
      WriteWordInRect(param_1,auStack_30,aIStack_18,uVar8,aCStack_28,5,1);
      FUN_05476c50(auStack_30);
      iVar3 = FUN_03ac4800(0x69);
      iVar4 = FUN_03ac4800(0x1a4);
      iVar5 = FUN_03ac4800(0x8c);
      iVar6 = FUN_03ac4800(0x1e);
      Sexy::Insets::Insets(aIStack_18,iVar3,iVar4,iVar5,iVar6);
      uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac7ff0);
      Draw3SliceImage(param_1,aIStack_18,uVar8);
      pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac8358);
      iVar3 = FUN_03ac4800(0x69);
      iVar4 = FUN_03ac4800(0x1a4);
      iVar5 = FUN_03ac4800(0x21);
      Sexy::Graphics::DrawImage(param_1,pIVar7,iVar3,iVar4,iVar5,iVar5);
      FUN_05476574(auStack_30);
      lVar9 = *(long *)(this + 0x30);
      if (lVar9 < 0x15181) {
        StringHelper::ToTimeString((StringHelper *)0x1,(float)lVar9,(int)lVar9);
        FUN_054766c8(auStack_30,aIStack_18);
        FUN_05476c50(aIStack_18);
      }
      else {
        std::string::string((string *)aCStack_28,"[ZEN_GARDEN_TIMESPAN_D]");
        StringHelper::ReplaceNumberString
                  ((StringHelper *)aCStack_28,(string *)&DAT_0570bbc8,
                   (wchar_t *)(*(long *)(this + 0x30) / 0x15180),
                   SUB164(SEXT816(*(long *)(this + 0x30)) * SEXT816(0x1845c8a0ce512957),8));
        FUN_054766c8(auStack_30,aIStack_18);
        FUN_05476c50(aIStack_18);
        std::string::~string((string *)aCStack_28);
        nop();
      }
      iVar3 = FUN_03ac4800(0x8c);
      iVar4 = FUN_03ac4800(0x1a4);
      iVar5 = FUN_03ac4800(100);
      iVar6 = FUN_03ac4800(0x1e);
      Sexy::Insets::Insets((Insets *)aCStack_28,iVar3 + iVar2,iVar4,iVar5,iVar6);
      uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
      Sexy::Color::Color((Color *)aIStack_18,1);
      WriteWordInRect(param_1,auStack_30,aCStack_28,uVar8,aIStack_18,5,1);
      FUN_05476c50(auStack_30);
    }
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrackerTabUI::SyncActivityData(int) */

void CrackerTabUI::SyncActivityData(int param_1)

{
  char cVar1;
  int iVar2;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_03ac12f8(local_80);
  if (cVar1 != '\0') {
    iVar2 = ActiveItem::GetLeftTimes(aAStack_88);
    *(long *)((ulong)(uint)param_1 + 0x30) = (long)iVar2;
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

