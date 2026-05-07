// Class: UISpringFestival2024DifficultyButton


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpringFestival2024DifficultyButton::StaticClassInit() */

void UISpringFestival2024DifficultyButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"UISpringFestival2024DifficultyButton");
    (*pcVar2)(plVar1,asStack_10,FUN_0456d024,0x1e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UISpringFestival2024DifficultyButton::StaticGetClass() */

long * UISpringFestival2024DifficultyButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"UISpringFestival2024DifficultyButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UISpringFestival2024DifficultyButton::GetClass() const */

long * UISpringFestival2024DifficultyButton::GetClass(void)

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
  (*pcVar3)(plVar1,"UISpringFestival2024DifficultyButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UISpringFestival2024DifficultyButton::~UISpringFestival2024DifficultyButton() */

void __thiscall
UISpringFestival2024DifficultyButton::~UISpringFestival2024DifficultyButton
          (UISpringFestival2024DifficultyButton *this)

{
  *(undefined ***)this = &PTR_GetClass_0685d1e0;
  *(undefined ***)(this + 0x10) = &PTR__UISpringFestival2024DifficultyButton_0685d390;
  std::string::~string((string *)(this + 0x1d0));
  UIEasyButtonWidget::~UIEasyButtonWidget((UIEasyButtonWidget *)this);
  return;
}


/* non-virtual thunk to
   UISpringFestival2024DifficultyButton::~UISpringFestival2024DifficultyButton() */

void __thiscall
UISpringFestival2024DifficultyButton::~UISpringFestival2024DifficultyButton
          (UISpringFestival2024DifficultyButton *this)

{
  ~UISpringFestival2024DifficultyButton(this + -0x10);
  return;
}


/* UISpringFestival2024DifficultyButton::~UISpringFestival2024DifficultyButton() */

void __thiscall
UISpringFestival2024DifficultyButton::~UISpringFestival2024DifficultyButton
          (UISpringFestival2024DifficultyButton *this)

{
  ~UISpringFestival2024DifficultyButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to
   UISpringFestival2024DifficultyButton::~UISpringFestival2024DifficultyButton() */

void __thiscall
UISpringFestival2024DifficultyButton::~UISpringFestival2024DifficultyButton
          (UISpringFestival2024DifficultyButton *this)

{
  ~UISpringFestival2024DifficultyButton(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpringFestival2024DifficultyButton::GetCurrentLevelName() */

void __thiscall
UISpringFestival2024DifficultyButton::GetCurrentLevelName
          (UISpringFestival2024DifficultyButton *this)

{
  char cVar1;
  int iVar2;
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this_00;
  undefined8 uVar3;
  FilesystemSaveGameContext *this_01;
  char *pcVar4;
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
             *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  uVar3 = std::
          _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          ::_M_root(this_00);
  FUN_05475d88(asStack_28,uVar3);
  this_01 = (FilesystemSaveGameContext *)
            Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  cVar1 = Sexy::FilesystemSaveGameContext::HasError(this_01);
  iVar2 = PVZ2UnchartedModeUtils::GetSpringFestival2024CurrentLevelIndex();
  if (cVar1 == '\0') {
    pcVar4 = "_n";
  }
  else {
    pcVar4 = "_h";
  }
  std::operator+(asStack_28,pcVar4);
  std::operator+(asStack_20,"_");
  Sexy::StrFormat("%d",asStack_10,(ulong)(iVar2 + 1));
  std::operator+(asStack_18,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpringFestival2024DifficultyButton::GetLevelDifficulty(std::string) */

void __thiscall
UISpringFestival2024DifficultyButton::GetLevelDifficulty(undefined8 param_1,bool param_2)

{
  string *psVar1;
  ResourceInfo *pRVar2;
  long lVar3;
  RtWeakPtr<Sexy::ResourceInfo> *this;
  undefined4 uVar4;
  undefined8 uVar5;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)Sexy::LazySingleton<LevelUtils>::GetInstance();
  LevelUtils::LoadLevelDefinition(psVar1,param_2);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (pRVar2 == (ResourceInfo *)0x0) {
    uVar4 = 1;
  }
  else {
    uVar5 = *(undefined8 *)(pRVar2 + 0x1c8);
    lVar3 = FUN_0456c1f0(uVar5,*(undefined8 *)(pRVar2 + 0x1d0));
    uVar4 = 1;
    if (lVar3 != 0) {
      this = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0456c260(uVar5,1);
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
      uVar4 = *(undefined4 *)(lVar3 + 0x30);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpringFestival2024DifficultyButton::UISpringFestival2024DifficultyButton() */

void __thiscall
UISpringFestival2024DifficultyButton::UISpringFestival2024DifficultyButton
          (UISpringFestival2024DifficultyButton *this)

{
  UISpringFestival2024DifficultyButton *pUVar1;
  undefined4 uVar2;
  string asStack_38 [8];
  string asStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  pUVar1 = this + 0x1d0;
  local_8 = ___stack_chk_guard;
  UIEasyButtonWidget::UIEasyButtonWidget((UIEasyButtonWidget *)this);
  *(undefined ***)this = &PTR_GetClass_0685d1e0;
  *(undefined ***)(this + 0x10) = &PTR__UISpringFestival2024DifficultyButton_0685d390;
  Set8BytesTo0(pUVar1);
  GetCurrentLevelName(this);
  FUN_05474278(pUVar1,asStack_30);
  std::string::~string(asStack_30);
  FUN_05475d88(asStack_30,pUVar1);
  uVar2 = GetLevelDifficulty(this,asStack_30);
  *(undefined4 *)(this + 0x1d8) = uVar2;
  std::string::~string(asStack_30);
  if (*(int *)(this + 0x1d8) < 1) {
    UIWidget::SetVisible((UIWidget *)this,false);
  }
  else {
    Sexy::StrFormat("IMAGE_UI_UNCHARTED_CHALLENGE_BASE_DESC_%d",asStack_38);
    UIEasyButtonWidget::SetImageNormal((UIEasyButtonWidget *)this,asStack_38);
    std::string::string(asStack_30,"Play_UI_Map_Select_Universe_Press");
    DEditorNode::setRootName((string *)this);
    std::string::~string(asStack_30);
    nop();
    std::string::string(asStack_30,"Play_UI_Map_Select_Universe_Release");
    UIEasyButtonWidget::SetSoundReleased((string *)this);
    std::string::~string(asStack_30);
    nop();
    FUN_0456c7f0(afStack_28,this);
    PopingBonusUI::SetCloseFuction((PopingBonusUI *)this,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
    std::string::~string(asStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UISpringFestival2024DifficultyButton::StaticNew() */

UISpringFestival2024DifficultyButton * UISpringFestival2024DifficultyButton::StaticNew(void)

{
  UISpringFestival2024DifficultyButton *this;
  
  this = ::operator_new(0x1e0);
  UISpringFestival2024DifficultyButton(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpringFestival2024DifficultyButton::OnClick() */

void __thiscall
UISpringFestival2024DifficultyButton::OnClick(UISpringFestival2024DifficultyButton *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  string *psVar5;
  ResourceInfo *pRVar6;
  long lVar7;
  PVZ2UIDialog *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  PrimeText_PotentialText *pPVar12;
  PrimeTextWidget *pPVar13;
  UIMessageBox *this_01;
  string *extraout_x1;
  code *pcVar14;
  ulong uVar15;
  float fVar16;
  int local_90;
  int local_8c;
  Sexy aSStack_88 [8];
  undefined1 auStack_80 [8];
  string asStack_78 [8];
  Color aCStack_70 [16];
  Insets aIStack_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar5 = (string *)Sexy::LazySingleton<LevelUtils>::GetInstance();
  LevelUtils::LoadLevelDefinition(psVar5,(bool)((char)this + -0x30));
  pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
  if ((pRVar6 == (ResourceInfo *)0x0) ||
     (lVar7 = FUN_0456c1f0(*(undefined8 *)(pRVar6 + 0x1c8),*(undefined8 *)(pRVar6 + 0x1d0)),
     lVar7 == 0)) {
    this_01 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (this_01 != (UIMessageBox *)0x0) {
      std::string::string(asStack_78,"[UNCHARTED_WORLD_DIFFICULTY_1_DESC]");
      StringHelper::ToStringValue(asStack_78);
      std::string::string((string *)aIStack_60,"[UNCHARTED_WORLD_DIFFICULTY_1]");
      StringHelper::ToStringValue((string *)aIStack_60);
      UIMessageBox::SetMessage(this_01,(wstring *)aCStack_70,(wstring *)&local_50);
      FUN_05476c50((RtWeakPtr *)&local_50);
      std::string::~string((string *)aIStack_60);
      nop();
      FUN_05476c50((wstring *)aCStack_70);
      std::string::~string(asStack_78);
      nop();
      UIMessageBox::SetShowType(this_01,2);
    }
  }
  else {
    iVar1 = FUN_0456c8a8(0x1e0);
    iVar2 = FUN_0456c8a8(0x118);
    this_00 = (PVZ2UIDialog *)
              LawnApp::ShowPVZ2Dialog(gLawnApp,(float)iVar1,(float)iVar2,(PVZ2UIDialog *)0x0);
    Sexy::StrFormat("[UNCHARTED_WORLD_DIFFICULTY_%d]",aSStack_88,(ulong)*(uint *)(this + 0x1d8));
    Sexy::StringToWString(aSStack_88,extraout_x1);
    PVZ2UIDialog::SetHeaderLabel(this_00,(wstring *)&local_50);
    FUN_05476c50((RtWeakPtr *)&local_50);
    FUN_05478178(aIStack_60,L"[DIALOG_STRING_OK]",aCStack_70);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,(RtWeakPtr *)&local_50);
    PVZ2UIDialog::AddButton(this_00,aIStack_60,aDStack_38,0);
    FUN_05476c50(aIStack_60);
    nop();
    pRVar8 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0456c260(*(undefined8 *)(pRVar6 + 0x1c8));
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar8);
    std::
    vector<Sexy::RtWeakPtr<LevelModifierModuleCollection>,std::allocator<Sexy::RtWeakPtr<LevelModifierModuleCollection>>>
    ::vector((vector<Sexy::RtWeakPtr<LevelModifierModuleCollection>,std::allocator<Sexy::RtWeakPtr<LevelModifierModuleCollection>>>
              *)&local_50,(vector *)(lVar7 + 0x18));
    iVar1 = FUN_0456c8a8(0x3c);
    uVar9 = FUN_0456c1fc(local_50,local_48);
    if (uVar9 == 0) {
      std::string::string((string *)aIStack_60,"[UNCHARTED_WORLD_DIFFICULTY_1_DESC]");
      StringHelper::ToStringValue((string *)aIStack_60);
      std::string::~string((string *)aIStack_60);
      nop();
      local_90 = 0;
      local_8c = 0;
      uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
      iVar3 = FUN_0456c8a8(0x18);
      iVar2 = *(int *)(this_00 + 0x50);
      FUN_05477b24(aIStack_60,auStack_80);
      Sexy::PrimeTypeface::SizeString_Paragraph
                ((float)(iVar2 - iVar3),uVar10,aIStack_60,&local_90,&local_8c);
      FUN_05476c50(aIStack_60);
      Sexy::Color::Color(aCStack_70,0x42,0x41,0);
      pcVar14 = *(code **)(*(long *)this_00 + 0x60);
      iVar3 = FUN_0456c8a8(0x1e0);
      iVar2 = local_90;
      iVar4 = FUN_0456c8a8(0x1e);
      fVar16 = (float)local_8c;
      FUN_05477b24(asStack_78,auStack_80);
      Sexy::Insets::Insets(aIStack_60,(Insets *)aCStack_70);
      pPVar12 = (PrimeText_PotentialText *)
                Sexy::BuildPotentialText_Paragraph
                          ((float)((iVar3 - iVar2) / 2),(float)(iVar4 + iVar1),(float)iVar2,fVar16,
                           uVar10,asStack_78,1,1,aIStack_60);
      pPVar13 = ::operator_new(0xf8);
      Sexy::PrimeTextWidget::PrimeTextWidget(pPVar13,pPVar12);
      (*pcVar14)(this_00,pPVar13);
      FUN_05476c50(asStack_78);
      FUN_05476c50(auStack_80);
      uVar9 = FUN_0456c1fc(local_50,local_48);
    }
    uVar15 = 0;
    while (uVar15 < uVar9) {
      local_90 = 0;
      local_8c = 0;
      uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
      pRVar8 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0456c208(local_50,uVar15);
      plVar11 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar8);
      (**(code **)(*plVar11 + 0x80))(auStack_80);
      iVar3 = FUN_0456c8a8(0x18);
      iVar2 = *(int *)(this_00 + 0x50);
      FUN_05477b24(aIStack_60,auStack_80);
      Sexy::PrimeTypeface::SizeString_Paragraph
                ((float)(iVar2 - iVar3),uVar10,aIStack_60,&local_90,&local_8c);
      FUN_05476c50(aIStack_60);
      Sexy::Color::Color(aCStack_70,0x42,0x41,0);
      pcVar14 = *(code **)(*(long *)this_00 + 0x60);
      iVar3 = FUN_0456c8a8(0x1e0);
      iVar2 = local_90;
      fVar16 = (float)local_8c;
      FUN_05477b24(asStack_78,auStack_80);
      Sexy::Insets::Insets(aIStack_60,(Insets *)aCStack_70);
      pPVar12 = (PrimeText_PotentialText *)
                Sexy::BuildPotentialText_Paragraph
                          ((float)((iVar3 - iVar2) / 2),(float)iVar1,(float)iVar2,fVar16,uVar10,
                           asStack_78,1,1,aIStack_60);
      pPVar13 = ::operator_new(0xf8);
      Sexy::PrimeTextWidget::PrimeTextWidget(pPVar13,pPVar12);
      (*pcVar14)(this_00,pPVar13);
      FUN_05476c50(asStack_78);
      iVar1 = iVar1 + local_8c;
      FUN_05476c50(auStack_80);
      uVar9 = FUN_0456c1fc(local_50,local_48);
      uVar15 = uVar15 + 1;
    }
    std::
    vector<Sexy::RtWeakPtr<LevelModifierModuleCollection>,std::allocator<Sexy::RtWeakPtr<LevelModifierModuleCollection>>>
    ::~vector((vector<Sexy::RtWeakPtr<LevelModifierModuleCollection>,std::allocator<Sexy::RtWeakPtr<LevelModifierModuleCollection>>>
               *)&local_50);
    std::string::~string((string *)aSStack_88);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

