// Class: ActiveChristmasProtectTab


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveChristmasProtectTab::GetTabContainerImageName() const */

void __thiscall ActiveChristmasProtectTab::GetTabContainerImageName(ActiveChristmasProtectTab *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"IMAGE_UI_ACTIVETABCENTER_PROTECT_BG");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* ActiveChristmasProtectTab::~ActiveChristmasProtectTab() */

void __thiscall
ActiveChristmasProtectTab::~ActiveChristmasProtectTab(ActiveChristmasProtectTab *this)

{
  *(undefined ***)this = &PTR__ActiveChristmasProtectTab_069730e0;
  FUN_05476c50(this + 0x50);
  FUN_05476c50(this + 0x48);
  nop();
  return;
}


/* ActiveChristmasProtectTab::~ActiveChristmasProtectTab() */

void __thiscall
ActiveChristmasProtectTab::~ActiveChristmasProtectTab(ActiveChristmasProtectTab *this)

{
  ~ActiveChristmasProtectTab(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveChristmasProtectTab::DrawForeground(Sexy::Graphics*) */

void __thiscall
ActiveChristmasProtectTab::DrawForeground(ActiveChristmasProtectTab *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  GraphicsAutoState aGStack_38 [8];
  int local_30;
  int local_2c;
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ActiveCenterTabBase::DrawForeground((ActiveCenterTabBase *)this,param_1);
  if ((*(long *)(this + 0x18) != 0) &&
     (cVar3 = FUN_04b909f8(*(undefined1 *)(*(long *)(this + 0x18) + 0x1a8)), cVar3 != '\0')) {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_38,param_1);
    (**(code **)(**(long **)(this + 0x20) + 0xd0))(&local_30,*(long **)(this + 0x20));
    Sexy::Graphics::Translate(param_1,local_30,local_2c);
    iVar4 = FUN_04b909fc(0x1a2);
    iVar1 = *(int *)(this + 0x28);
    iVar5 = FUN_04b909fc(0x176);
    iVar2 = *(int *)(this + 0x2c);
    iVar6 = FUN_04b909fc(0x2a);
    iVar7 = FUN_04b909fc(0x24);
    Sexy::Insets::Insets(aIStack_28,iVar4 + iVar1,iVar5 + iVar2,iVar6,iVar7);
    uVar8 = PrimeText_PotentialTypeface::Typeface
                      (PrimeText_Game::Typeface_CafeteriaBlack_28_Outline);
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,this + 0x48,aIStack_28,uVar8,aCStack_18,3,1);
    iVar4 = FUN_04b909fc(0x1d2);
    iVar1 = *(int *)(this + 0x28);
    iVar5 = FUN_04b909fc(0x176);
    iVar2 = *(int *)(this + 0x2c);
    iVar6 = FUN_04b909fc(100);
    iVar7 = FUN_04b909fc(0x24);
    Sexy::Insets::Insets(aIStack_28,iVar4 + iVar1,iVar5 + iVar2,iVar6,iVar7);
    uVar8 = PrimeText_PotentialTypeface::Typeface
                      (PrimeText_Game::Typeface_CafeteriaBlack_28_Outline);
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,this + 0x50,aIStack_28,uVar8,aCStack_18,3,1);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveChristmasProtectTab::ActiveChristmasProtectTab(int, UI::Dialog*) */

void __thiscall
ActiveChristmasProtectTab::ActiveChristmasProtectTab
          (ActiveChristmasProtectTab *this,int param_1,Dialog *param_2)

{
  undefined4 uVar1;
  ProfileMgr *this_00;
  ActivityConfig *this_01;
  int *piVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ActiveCenterTabBase::ActiveCenterTabBase((ActiveCenterTabBase *)this,param_1,param_2);
  *(undefined ***)this = &PTR__ActiveChristmasProtectTab_069730e0;
  Sexy::Insets::Insets((Insets *)(this + 0x28));
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  FUN_05476574(this + 0x48);
  FUN_05476574(this + 0x50);
  lVar4 = *(long *)(this + 0x20);
  Sexy::Insets::Insets
            ((Insets *)&local_18,*(int *)(lVar4 + 0x48),*(int *)(lVar4 + 0x4c),
             *(int *)(lVar4 + 0x50),*(int *)(lVar4 + 0x54));
  *(undefined8 *)(this + 0x28) = local_18;
  *(undefined8 *)(this + 0x30) = uStack_10;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar4 = ProfileMgr::GetCurrentProfile(this_00);
  this_01 = (ActivityConfig *)LawnApp::GetActivityConfig();
  if ((this_01 != (ActivityConfig *)0x0) && (lVar4 != 0)) {
    piVar2 = (int *)ActivityConfig::GetChristmasProtectData(this_01);
    uVar3 = ActivityConfig::DateMKTime(this_01,piVar2[1]);
    *(undefined8 *)(this + 0x40) = uVar3;
    uVar1 = ActivityConfig::GetCurrentActivityTimeStatus(this_01,*piVar2,piVar2[1]);
    *(undefined4 *)(this + 0x38) = uVar1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveChristmasProtectTab::Update() */

void __thiscall ActiveChristmasProtectTab::Update(ActiveChristmasProtectTab *this)

{
  ActiveChristmasProtectTab *pAVar1;
  uint uVar2;
  char cVar3;
  ProfileMgr *this_00;
  long lVar4;
  wchar_t *pwVar5;
  PVZ2UIButton *pPVar6;
  int iVar7;
  Dialog *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(long *)(this + 0x18) != 0) &&
     (cVar3 = FUN_04b909f8(*(undefined1 *)(*(long *)(this + 0x18) + 0x1a8)), cVar3 != '\0')) {
    pAVar1 = this + 0x48;
    FUN_054772c4(pAVar1,&DAT_056f11a8);
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar4 = ProfileMgr::GetCurrentProfile(this_00);
    if (lVar4 != 0) {
      lVar4 = LawnApp::GetRealBeijingTime(gLawnApp);
      if (lVar4 == 0) {
        FUN_054772c4(pAVar1,&DAT_05700290);
        TodStringTranslate(L"[PLANT_ADVENTURE_UNCONNECTED]");
        FUN_054766c8(this + 0x50,asStack_10);
        FUN_05476c50(asStack_10);
      }
      else {
        iVar7 = *(int *)(this + 0x38);
        if (iVar7 == 1) {
          uVar2 = (int)*(undefined8 *)(this + 0x40) - (int)lVar4;
          Sexy::StrFormat(L"%d",asStack_10,(ulong)uVar2 / 0x15180);
          FUN_054766c8(pAVar1,asStack_10);
          FUN_05476c50(asStack_10);
          iVar7 = (int)((ulong)uVar2 / 0x3c);
          Sexy::StrFormat(L"%02d:%02d:%02d",asStack_10,
                          (ulong)(uint)((int)((ulong)uVar2 / 0xe10) +
                                       (int)(((ulong)uVar2 / 0xe10) / 0x18) * -0x18),
                          (ulong)(uint)(iVar7 + (int)(((ulong)uVar2 / 0x3c) / 0x3c) * -0x3c),
                          (ulong)(uVar2 + iVar7 * -0x3c));
          FUN_054766c8(this + 0x50,asStack_10);
          FUN_05476c50(asStack_10);
        }
        else {
          if (iVar7 == 0) {
            pwVar5 = L"[ACTIVITY_NOT_OPEN]";
          }
          else {
            if (iVar7 != 2) goto LAB_04b90ee0;
            pwVar5 = L"[ACTIVITY_CLOSED]";
          }
          TodStringTranslate(pwVar5);
          FUN_054766c8(this + 0x50,asStack_10);
          FUN_05476c50(asStack_10);
          this_01 = *(Dialog **)(this + 0x10);
          std::string::string(asStack_10,"Btn_Goto");
          pPVar6 = UI::Dialog::GetWidget<PVZ2UIButton>(this_01,asStack_10);
          std::string::~string(asStack_10);
          nop();
          if (pPVar6 != (PVZ2UIButton *)0x0) {
            (**(code **)(*(long *)pPVar6 + 0x188))(pPVar6,1);
          }
        }
      }
    }
  }
LAB_04b90ee0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

