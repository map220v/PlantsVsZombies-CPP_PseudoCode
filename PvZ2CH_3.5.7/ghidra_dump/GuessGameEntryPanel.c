// Class: GuessGameEntryPanel


/* GuessGameEntryPanel::ButtonDepress(int) */

void __thiscall GuessGameEntryPanel::ButtonDepress(GuessGameEntryPanel *this,int param_1)

{
  if (param_1 == 1000) {
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,this);
  }
  return;
}


/* non-virtual thunk to GuessGameEntryPanel::ButtonDepress(int) */

void __thiscall GuessGameEntryPanel::ButtonDepress(GuessGameEntryPanel *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* GuessGameEntryPanel::~GuessGameEntryPanel() */

void __thiscall GuessGameEntryPanel::~GuessGameEntryPanel(GuessGameEntryPanel *this)

{
  *(undefined ***)this = &PTR_GetClass_06988780;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06988ab0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,false,false);
  FUN_05476c50(this + 0xe8);
  FUN_05476c50(this + 0xe0);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* GuessGameEntryPanel::~GuessGameEntryPanel() */

void __thiscall GuessGameEntryPanel::~GuessGameEntryPanel(GuessGameEntryPanel *this)

{
  ~GuessGameEntryPanel(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GuessGameEntryPanel::GuessGameEntryPanel() */

void __thiscall GuessGameEntryPanel::GuessGameEntryPanel(GuessGameEntryPanel *this)

{
  long lVar1;
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06988780;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06988ab0;
  FUN_05476574(this + 0xe0);
  FUN_05476574(this + 0xe8);
  std::string::string(asStack_10,"[xxxx]");
  StringHelper::ToStringValue(asStack_10);
  FUN_054766c8(this + 0xe0,auStack_18);
  FUN_05476c50(auStack_18);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"[xxxx]");
  StringHelper::ToStringValue(asStack_10);
  FUN_054766c8(this + 0xe8,auStack_18);
  FUN_05476c50(auStack_18);
  std::string::~string(asStack_10);
  nop();
  *(undefined8 *)(this + 0xf0) = 0;
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GuessGameEntryPanel::UpdateUI(PlayerInfo*) */

void GuessGameEntryPanel::UpdateUI(PlayerInfo *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  GuessGameCostButton *pGVar7;
  long *plVar8;
  PVZ2UIButton *pPVar9;
  undefined1 auStack_80 [8];
  string asStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_78,"[xxxx]");
  StringHelper::ToStringValue(asStack_78);
  FUN_054766c8(param_1 + 0xe8,aPStack_40);
  FUN_05476c50(aPStack_40);
  std::string::~string(asStack_78);
  nop();
  iVar2 = FUN_04c4a134(0xbd);
  iVar2 = (*(int *)(param_1 + 0x50) / 2 - iVar2) / 2;
  uVar3 = FUN_04c4a134(0x82);
  plVar8 = *(long **)(param_1 + 0xf0);
  if (plVar8 == (long *)0x0) {
    FUN_05478178(asStack_78,&DAT_056f11a8,auStack_80);
    Sexy::Color::Color((Color *)aPStack_40,1);
    pGVar7 = ::operator_new(0x318);
    GuessGameCostButton::GuessGameCostButton
              (pGVar7,0x3e9,(ButtonListener *)(param_1 + 0xd8),(wstring *)asStack_78,
               (Color *)aPStack_40);
    *(GuessGameCostButton **)(param_1 + 0xf0) = pGVar7;
    FUN_05476c50(asStack_78);
    nop();
    plVar8 = *(long **)(param_1 + 0xf0);
    uVar5 = FUN_04c4a134(uVar3);
    uVar6 = FUN_04c4a134(0xbd);
    uVar4 = FUN_04c4a134(0x6e);
    (**(code **)(*plVar8 + 0x198))(plVar8,iVar2,uVar5,uVar6,uVar4);
    pPVar9 = *(PVZ2UIButton **)(param_1 + 0xf0);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06b910d8,2);
    PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b90e50,2);
    PVZ2UIButton::SetDialogStates(pPVar9,(PVZ2UIImage *)asStack_78,aPStack_40);
    plVar8 = *(long **)(param_1 + 0xf0);
    *(undefined1 *)((long)plVar8 + 0x59) = 0;
    (**(code **)(*plVar8 + 0x188))(plVar8,1);
    (**(code **)(*(long *)param_1 + 0x60))(param_1,*(undefined8 *)(param_1 + 0xf0));
    plVar8 = *(long **)(param_1 + 0xf8);
  }
  else {
    (**(code **)(*plVar8 + 0x188))(plVar8,1);
    plVar8 = *(long **)(param_1 + 0xf8);
  }
  if (plVar8 == (long *)0x0) {
    FUN_05478178(asStack_78,&DAT_056f11a8,auStack_80);
    Sexy::Color::Color((Color *)aPStack_40,1);
    pGVar7 = ::operator_new(0x318);
    GuessGameCostButton::GuessGameCostButton
              (pGVar7,0x3ea,(ButtonListener *)(param_1 + 0xd8),(wstring *)asStack_78,
               (Color *)aPStack_40);
    *(GuessGameCostButton **)(param_1 + 0xf8) = pGVar7;
    FUN_05476c50(asStack_78);
    nop();
    plVar8 = *(long **)(param_1 + 0xf8);
    iVar1 = *(int *)(param_1 + 0x50);
    uVar5 = FUN_04c4a134(0xbd);
    uVar6 = FUN_04c4a134(0x6e);
    (**(code **)(*plVar8 + 0x198))(plVar8,iVar2 + iVar1 / 2,uVar3,uVar5,uVar6);
    pPVar9 = *(PVZ2UIButton **)(param_1 + 0xf8);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06b910d8,2);
    PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b90e50,2);
    PVZ2UIButton::SetDialogStates(pPVar9,(PVZ2UIImage *)asStack_78,aPStack_40);
    plVar8 = *(long **)(param_1 + 0xf8);
    *(undefined1 *)((long)plVar8 + 0x59) = 0;
    (**(code **)(*plVar8 + 0x188))(plVar8,0);
    (**(code **)(*(long *)param_1 + 0x60))(param_1,*(undefined8 *)(param_1 + 0xf8));
  }
  else {
    (**(code **)(*plVar8 + 0x188))(plVar8,0);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* GuessGameEntryPanel::InitView() */

void __thiscall GuessGameEntryPanel::InitView(GuessGameEntryPanel *this)

{
  ProfileUtils::Profile();
  UpdateUI((PlayerInfo *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GuessGameEntryPanel::Draw(Sexy::Graphics*) */

void __thiscall GuessGameEntryPanel::Draw(GuessGameEntryPanel *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::DrawDarkeningLayer(gLawnApp,param_1,0.5);
  nop();
  iVar5 = DAT_06b916d0;
  if (((DAT_06b91588 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(&DAT_06b91588), iVar5 = DAT_06b916d0, iVar4 != 0)) {
    iVar5 = FUN_04c4a134(100);
    DAT_06b916d0 = iVar5;
    __cxa_guard_release(&DAT_06b91588);
  }
  iVar4 = DAT_06b91270;
  if (((DAT_06b91240 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(&DAT_06b91240), iVar4 = DAT_06b91270, iVar3 != 0)) {
    iVar4 = FUN_04c4a134(0x3c);
    DAT_06b91270 = iVar4;
    __cxa_guard_release(&DAT_06b91240);
  }
  iVar3 = DAT_06b90c40;
  if (((DAT_06b90ee8 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&DAT_06b90ee8), iVar3 = DAT_06b90c40, iVar2 != 0)) {
    iVar3 = (*(int *)(this + 0x50) - iVar5) / 2;
    DAT_06b90c40 = iVar3;
    __cxa_guard_release(&DAT_06b90ee8);
  }
  iVar2 = DAT_06b90c44;
  if (((DAT_06b916a0 & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&DAT_06b916a0), iVar2 = DAT_06b90c44, iVar1 != 0)) {
    iVar2 = FUN_04c4a134(0x28);
    DAT_06b90c44 = iVar2;
    __cxa_guard_release(&DAT_06b916a0);
  }
  Sexy::Insets::Insets((Insets *)&local_28,iVar3,iVar2,iVar5,iVar4);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_40_ThickOutline);
  Sexy::Color::Color((Color *)&local_18,1);
  WriteWordInRect(param_1,this + 0xe0,(Insets *)&local_28,uVar6,(Insets *)&local_18,2,1);
  iVar5 = DAT_06b90c78;
  if (((DAT_06b90cb0 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(&DAT_06b90cb0), iVar5 = DAT_06b90c78, iVar4 != 0)) {
    iVar5 = FUN_04c4a134(200);
    DAT_06b90c78 = iVar5;
    __cxa_guard_release(&DAT_06b90cb0);
  }
  iVar4 = DAT_06b90cf8;
  if (((DAT_06b911e0 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(&DAT_06b911e0), iVar4 = DAT_06b90cf8, iVar3 != 0)) {
    iVar4 = FUN_04c4a134(0x96);
    DAT_06b90cf8 = iVar4;
    __cxa_guard_release(&DAT_06b911e0);
  }
  iVar3 = DAT_06b90e48;
  if (((DAT_06b90cf0 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&DAT_06b90cf0), iVar3 = DAT_06b90e48, iVar2 != 0)) {
    iVar3 = (*(int *)(this + 0x50) - iVar5) / 2;
    DAT_06b90e48 = iVar3;
    __cxa_guard_release(&DAT_06b90cf0);
  }
  iVar2 = DAT_06b90e78;
  if (((DAT_06b90d00 & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&DAT_06b90d00), iVar2 = DAT_06b90e78, iVar1 != 0)) {
    iVar2 = FUN_04c4a134(100);
    DAT_06b90e78 = iVar2;
    __cxa_guard_release(&DAT_06b90d00);
  }
  Sexy::Insets::Insets((Insets *)&local_18,iVar3,iVar2,iVar5,iVar4);
  local_28 = local_18;
  uStack_20 = uStack_10;
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_40_ThickOutline);
  Sexy::Color::Color((Color *)&local_18,1);
  WriteWordInRect(param_1,this + 0xe8,(Insets *)&local_28,uVar6,(Insets *)&local_18,2,1);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

