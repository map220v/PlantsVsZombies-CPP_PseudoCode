// Class: WorldLevelEntryPanel


/* WorldLevelEntryPanel::ButtonDepress(int) */

void __thiscall WorldLevelEntryPanel::ButtonDepress(WorldLevelEntryPanel *this,int param_1)

{
  if ((param_1 == 0x7d4) || (param_1 == 0x7d5)) {
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,this);
  }
  return;
}


/* non-virtual thunk to WorldLevelEntryPanel::ButtonDepress(int) */

void __thiscall WorldLevelEntryPanel::ButtonDepress(WorldLevelEntryPanel *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WorldLevelEntryPanel::~WorldLevelEntryPanel() */

void __thiscall WorldLevelEntryPanel::~WorldLevelEntryPanel(WorldLevelEntryPanel *this)

{
  *(undefined ***)this = &PTR_GetClass_06988b00;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06988e30;
  FUN_05476c50(this + 0xe8);
  FUN_05476c50(this + 0xe0);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* WorldLevelEntryPanel::~WorldLevelEntryPanel() */

void __thiscall WorldLevelEntryPanel::~WorldLevelEntryPanel(WorldLevelEntryPanel *this)

{
  ~WorldLevelEntryPanel(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldLevelEntryPanel::InitView() */

void __thiscall WorldLevelEntryPanel::InitView(WorldLevelEntryPanel *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  GuessGameCostButton *pGVar7;
  long lVar8;
  code *pcVar9;
  PVZ2UIButton *pPVar10;
  long *plVar11;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_04c4a134(0xbd);
  iVar2 = (*(int *)(this + 0x50) / 2 - iVar2) / 2;
  uVar3 = FUN_04c4a134(0x82);
  if (*(long *)(this + 0xf0) == 0) {
    FUN_05478178(awStack_78,&DAT_05747c48,auStack_80);
    Sexy::Color::Color((Color *)aPStack_40,1);
    pGVar7 = ::operator_new(0x318);
    GuessGameCostButton::GuessGameCostButton
              (pGVar7,0x3e9,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
    *(GuessGameCostButton **)(this + 0xf0) = pGVar7;
    FUN_05476c50(awStack_78);
    nop();
    plVar11 = *(long **)(this + 0xf0);
    uVar4 = FUN_04c4a134(uVar3);
    uVar5 = FUN_04c4a134(0xbd);
    uVar6 = FUN_04c4a134(0x6e);
    (**(code **)(*plVar11 + 0x198))(plVar11,iVar2,uVar4,uVar5,uVar6);
    pPVar10 = *(PVZ2UIButton **)(this + 0xf0);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b910d8,2);
    PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b90e50,2);
    PVZ2UIButton::SetDialogStates(pPVar10,(PVZ2UIImage *)awStack_78,aPStack_40);
    lVar8 = *(long *)(this + 0xf0);
    pcVar9 = *(code **)(*(long *)this + 0x60);
    *(undefined1 *)(lVar8 + 0x59) = 0;
    (*pcVar9)(this,lVar8);
  }
  if (*(long *)(this + 0xf8) == 0) {
    FUN_05478178(awStack_78,L"escape",auStack_80);
    Sexy::Color::Color((Color *)aPStack_40,1);
    pGVar7 = ::operator_new(0x318);
    GuessGameCostButton::GuessGameCostButton
              (pGVar7,0x3ea,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
    *(GuessGameCostButton **)(this + 0xf8) = pGVar7;
    FUN_05476c50(awStack_78);
    nop();
    plVar11 = *(long **)(this + 0xf8);
    iVar1 = *(int *)(this + 0x50);
    uVar4 = FUN_04c4a134(0xbd);
    uVar5 = FUN_04c4a134(0x6e);
    (**(code **)(*plVar11 + 0x198))(plVar11,iVar2 + iVar1 / 2,uVar3,uVar4,uVar5);
    pPVar10 = *(PVZ2UIButton **)(this + 0xf8);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b910d8,2);
    PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b90e50,2);
    PVZ2UIButton::SetDialogStates(pPVar10,(PVZ2UIImage *)awStack_78,aPStack_40);
    lVar8 = *(long *)(this + 0xf8);
    pcVar9 = *(code **)(*(long *)this + 0x60);
    *(undefined1 *)(lVar8 + 0x59) = 0;
    (*pcVar9)(this,lVar8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldLevelEntryPanel::WorldLevelEntryPanel() */

void __thiscall WorldLevelEntryPanel::WorldLevelEntryPanel(WorldLevelEntryPanel *this)

{
  long lVar1;
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06988b00;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06988e30;
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
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldLevelEntryPanel::Draw(Sexy::Graphics*) */

void __thiscall WorldLevelEntryPanel::Draw(WorldLevelEntryPanel *this,Graphics *param_1)

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
  iVar5 = DAT_06b90c48;
  if (((DAT_06b915c8 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(&DAT_06b915c8), iVar5 = DAT_06b90c48, iVar4 != 0)) {
    iVar5 = FUN_04c4a134(100);
    DAT_06b90c48 = iVar5;
    __cxa_guard_release(&DAT_06b915c8);
  }
  iVar4 = DAT_06b911e8;
  if (((DAT_06b91428 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(&DAT_06b91428), iVar4 = DAT_06b911e8, iVar3 != 0)) {
    iVar4 = FUN_04c4a134(0x3c);
    DAT_06b911e8 = iVar4;
    __cxa_guard_release(&DAT_06b91428);
  }
  iVar3 = DAT_06b91180;
  if (((DAT_06b915b8 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&DAT_06b915b8), iVar3 = DAT_06b91180, iVar2 != 0)) {
    iVar3 = (*(int *)(this + 0x50) - iVar5) / 2;
    DAT_06b91180 = iVar3;
    __cxa_guard_release(&DAT_06b915b8);
  }
  iVar2 = DAT_06b911d8;
  if (((DAT_06b915c0 & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&DAT_06b915c0), iVar2 = DAT_06b911d8, iVar1 != 0)) {
    iVar2 = FUN_04c4a134(0x28);
    DAT_06b911d8 = iVar2;
    __cxa_guard_release(&DAT_06b915c0);
  }
  Sexy::Insets::Insets((Insets *)&local_28,iVar3,iVar2,iVar5,iVar4);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_40_ThickOutline);
  Sexy::Color::Color((Color *)&local_18,1);
  WriteWordInRect(param_1,this + 0xe0,(Insets *)&local_28,uVar6,(Insets *)&local_18,2,1);
  iVar5 = DAT_06b912a0;
  if (((DAT_06b91558 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(&DAT_06b91558), iVar5 = DAT_06b912a0, iVar4 != 0)) {
    iVar5 = FUN_04c4a134(200);
    DAT_06b912a0 = iVar5;
    __cxa_guard_release(&DAT_06b91558);
  }
  iVar4 = DAT_06b913d0;
  if (((DAT_06b90c80 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(&DAT_06b90c80), iVar4 = DAT_06b913d0, iVar3 != 0)) {
    iVar4 = FUN_04c4a134(0x96);
    DAT_06b913d0 = iVar4;
    __cxa_guard_release(&DAT_06b90c80);
  }
  iVar3 = DAT_06b90ce8;
  if (((DAT_06b91320 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&DAT_06b91320), iVar3 = DAT_06b90ce8, iVar2 != 0)) {
    iVar3 = (*(int *)(this + 0x50) - iVar5) / 2;
    DAT_06b90ce8 = iVar3;
    __cxa_guard_release(&DAT_06b91320);
  }
  iVar2 = DAT_06b90cec;
  if (((DAT_06b91328 & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&DAT_06b91328), iVar2 = DAT_06b90cec, iVar1 != 0)) {
    iVar2 = FUN_04c4a134(100);
    DAT_06b90cec = iVar2;
    __cxa_guard_release(&DAT_06b91328);
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

