// Class: WorldMap_PlantWarsInfoButton


/* WorldMap_PlantWarsInfoButton::closeDescriptionWidget() */

void __thiscall
WorldMap_PlantWarsInfoButton::closeDescriptionWidget(WorldMap_PlantWarsInfoButton *this)

{
  if (*(long *)(this + 0x1d0) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 0x1d0))
    ;
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x1d0));
    *(undefined8 *)(this + 0x1d0) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_PlantWarsInfoButton::StaticClassInit() */

void WorldMap_PlantWarsInfoButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_PlantWarsInfoButton");
    (*pcVar2)(plVar1,asStack_10,FUN_04d8f248,0x1d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_PlantWarsInfoButton::StaticGetClass() */

long * WorldMap_PlantWarsInfoButton::StaticGetClass(void)

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
  uVar2 = UIEasyButtonWidget::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_PlantWarsInfoButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_PlantWarsInfoButton::GetClass() const */

long * WorldMap_PlantWarsInfoButton::GetClass(void)

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
  uVar2 = UIEasyButtonWidget::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_PlantWarsInfoButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_PlantWarsInfoButton::~WorldMap_PlantWarsInfoButton() */

void __thiscall
WorldMap_PlantWarsInfoButton::~WorldMap_PlantWarsInfoButton(WorldMap_PlantWarsInfoButton *this)

{
  *(undefined ***)this = &PTR_GetClass_069ba740;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_PlantWarsInfoButton_069ba8f0;
  UIEasyButtonWidget::~UIEasyButtonWidget((UIEasyButtonWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_PlantWarsInfoButton::~WorldMap_PlantWarsInfoButton() */

void __thiscall
WorldMap_PlantWarsInfoButton::~WorldMap_PlantWarsInfoButton(WorldMap_PlantWarsInfoButton *this)

{
  ~WorldMap_PlantWarsInfoButton(this + -0x10);
  return;
}


/* WorldMap_PlantWarsInfoButton::~WorldMap_PlantWarsInfoButton() */

void __thiscall
WorldMap_PlantWarsInfoButton::~WorldMap_PlantWarsInfoButton(WorldMap_PlantWarsInfoButton *this)

{
  ~WorldMap_PlantWarsInfoButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_PlantWarsInfoButton::~WorldMap_PlantWarsInfoButton() */

void __thiscall
WorldMap_PlantWarsInfoButton::~WorldMap_PlantWarsInfoButton(WorldMap_PlantWarsInfoButton *this)

{
  ~WorldMap_PlantWarsInfoButton(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_PlantWarsInfoButton::OnClick() */

void WorldMap_PlantWarsInfoButton::OnClick(void)

{
  LawnApp *this;
  int iVar1;
  int iVar2;
  int iVar3;
  PVZ2UIDialog *this_00;
  char *pcVar4;
  PrimeText_PotentialText *pPVar5;
  PrimeTextWidget *this_01;
  undefined8 uVar6;
  uint uVar7;
  code *pcVar8;
  float fVar9;
  float fVar10;
  int local_80;
  int local_7c;
  string asStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  string asStack_60 [16];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04d8dacc(0x1e0);
  this = gLawnApp;
  uVar7 = 0;
  iVar2 = FUN_04d8dacc(0x1b8);
  this_00 = (PVZ2UIDialog *)
            LawnApp::ShowPVZ2Dialog(this,(float)iVar1,(float)iVar2,(PVZ2UIDialog *)0x0);
  FUN_05478178(awStack_50,L"[PLANTWARS_KEY_INFO_TITLE]",asStack_60);
  PVZ2UIDialog::SetHeaderLabel(this_00,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05478178(asStack_60,L"[DIALOG_STRING_OK]",auStack_68);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(this_00,asStack_60,aDStack_38,0);
  FUN_05476c50(asStack_60);
  nop();
  std::string::string(asStack_78,"[PLANTWARS_KEY_INFO_TEXT_%d]");
  nop();
  iVar1 = FUN_04d8dacc(0x3c);
  do {
    local_80 = 0;
    local_7c = 0;
    if ((uVar7 & 1) == 0) {
      uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
    }
    else {
      uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
    }
    uVar7 = uVar7 + 1;
    pcVar4 = (char *)FUN_0547429c(asStack_78);
    Sexy::StrFormat(pcVar4,asStack_60,(ulong)uVar7);
    Sexy::ToWString(asStack_60);
    TodStringTranslate(awStack_50);
    FUN_05476c50(awStack_50);
    std::string::~string(asStack_60);
    iVar3 = FUN_04d8dacc(0x18);
    iVar2 = *(int *)(this_00 + 0x50);
    FUN_05477b24(awStack_50,auStack_70);
    Sexy::PrimeTypeface::SizeString_Paragraph
              ((float)(iVar2 - iVar3),uVar6,awStack_50,&local_80,&local_7c);
    FUN_05476c50(awStack_50);
    Sexy::Color::Color((Color *)asStack_60,0x42,0x41,0);
    pcVar8 = *(code **)(*(long *)this_00 + 0x60);
    iVar2 = FUN_04d8dacc(0xc);
    fVar9 = (float)local_80;
    fVar10 = (float)local_7c;
    FUN_05477b24(auStack_68,auStack_70);
    Sexy::Insets::Insets((Insets *)awStack_50,(Insets *)asStack_60);
    pPVar5 = (PrimeText_PotentialText *)
             Sexy::BuildPotentialText_Paragraph
                       ((float)iVar2,(float)iVar1,fVar9,fVar10,uVar6,auStack_68,0,1,awStack_50);
    this_01 = ::operator_new(0xf8);
    Sexy::PrimeTextWidget::PrimeTextWidget(this_01,pPVar5);
    (*pcVar8)(this_00,this_01);
    FUN_05476c50(auStack_68);
    iVar1 = iVar1 + local_7c;
    FUN_05476c50(auStack_70);
  } while (uVar7 != 8);
  std::string::~string(asStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_PlantWarsInfoButton::showDescriptionWidget() */

void __thiscall
WorldMap_PlantWarsInfoButton::showDescriptionWidget(WorldMap_PlantWarsInfoButton *this)

{
  ActivityDescriptionUI *this_00;
  PlantWarsLevelSelectUI *pPVar1;
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x1d0) == 0) {
    this_00 = ::operator_new(0x128);
    ActivityDescriptionUI::ActivityDescriptionUI(this_00);
    *(ActivityDescriptionUI **)(this + 0x1d0) = this_00;
    TodStringTranslate(L"[PLANTWARS_KEY_INFO_TEXT_ALL]");
    TodStringTranslate(L"[PLANTWARS_KEY_INFO_TITLE]");
    ActivityDescriptionUI::InitView(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    FUN_05476c50(awStack_58);
    pPVar1 = *(PlantWarsLevelSelectUI **)(this + 0x1d0);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,closeDescriptionWidget);
    Sexy::Delegate0::Delegate0<WorldMap_PlantWarsInfoButton,void(WorldMap_PlantWarsInfoButton::*)()>
              (aDStack_38,awStack_50);
    PlantWarsLevelSelectUI::SetStartLevelCallBack(pPVar1,aDStack_38);
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x1d0));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x1d0));
    LawnApp::PushOverlaysToTop(gLawnApp);
    Sexy::WidgetManager::AddBaseModal
              (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x1d0));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x1d0));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_PlantWarsInfoButton::WorldMap_PlantWarsInfoButton() */

void __thiscall
WorldMap_PlantWarsInfoButton::WorldMap_PlantWarsInfoButton(WorldMap_PlantWarsInfoButton *this)

{
  string asStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIEasyButtonWidget::UIEasyButtonWidget((UIEasyButtonWidget *)this);
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined ***)this = &PTR_GetClass_069ba740;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_PlantWarsInfoButton_069ba8f0;
  std::string::string(asStack_30,"IMAGE_UI_GENERIC_INFO_BTN");
  UIEasyButtonWidget::SetImageNormal((UIEasyButtonWidget *)this,asStack_30);
  std::string::~string(asStack_30);
  nop();
  std::string::string(asStack_30,"Play_UI_Map_Select_Universe_Press");
  DEditorNode::setRootName((string *)this);
  std::string::~string(asStack_30);
  nop();
  std::string::string(asStack_30,"Play_UI_Map_Select_Universe_Release");
  UIEasyButtonWidget::SetSoundReleased((string *)this);
  std::string::~string(asStack_30);
  nop();
  FUN_04d8d95c(afStack_28,this);
  PopingBonusUI::SetCloseFuction((PopingBonusUI *)this,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_PlantWarsInfoButton::StaticNew() */

WorldMap_PlantWarsInfoButton * WorldMap_PlantWarsInfoButton::StaticNew(void)

{
  WorldMap_PlantWarsInfoButton *this;
  
  this = ::operator_new(0x1d8);
  WorldMap_PlantWarsInfoButton(this);
  return this;
}

