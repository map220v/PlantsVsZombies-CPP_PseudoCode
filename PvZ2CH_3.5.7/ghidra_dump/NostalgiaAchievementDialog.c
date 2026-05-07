// Class: NostalgiaAchievementDialog


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NostalgiaAchievementDialog::~NostalgiaAchievementDialog() */

void __thiscall
NostalgiaAchievementDialog::~NostalgiaAchievementDialog(NostalgiaAchievementDialog *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0x10) = &PTR__NostalgiaAchievementDialog_0676eae0;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_0676e930;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_NostalgiaPVZ");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_PVZ1");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_PauseMenu");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  FUN_05476c50(this + 0x1b0);
  SlidingWidget::~SlidingWidget((SlidingWidget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to NostalgiaAchievementDialog::~NostalgiaAchievementDialog() */

void __thiscall
NostalgiaAchievementDialog::~NostalgiaAchievementDialog(NostalgiaAchievementDialog *this)

{
  ~NostalgiaAchievementDialog(this + -0x10);
  return;
}


/* NostalgiaAchievementDialog::~NostalgiaAchievementDialog() */

void __thiscall
NostalgiaAchievementDialog::~NostalgiaAchievementDialog(NostalgiaAchievementDialog *this)

{
  ~NostalgiaAchievementDialog(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NostalgiaAchievementDialog::~NostalgiaAchievementDialog() */

void __thiscall
NostalgiaAchievementDialog::~NostalgiaAchievementDialog(NostalgiaAchievementDialog *this)

{
  ~NostalgiaAchievementDialog(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NostalgiaAchievementDialog::StaticClassInit() */

void NostalgiaAchievementDialog::StaticClassInit(void)

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
    std::string::string(asStack_10,"NostalgiaAchievementDialog");
    (*pcVar2)(plVar1,asStack_10,FUN_03d6cf98,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NostalgiaAchievementDialog::StaticGetClass() */

long * NostalgiaAchievementDialog::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NostalgiaAchievementDialog",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NostalgiaAchievementDialog::GetClass() const */

long * NostalgiaAchievementDialog::GetClass(void)

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
  (*pcVar3)(plVar1,"NostalgiaAchievementDialog",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NostalgiaAchievementDialog::InitView(std::string const&, std::string const&) */

void __thiscall
NostalgiaAchievementDialog::InitView
          (NostalgiaAchievementDialog *this,string *param_1,string *param_2)

{
  undefined8 uVar1;
  wstring awStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = StringHelper::ToImage(param_1,false);
  *(undefined8 *)(this + 0x1a8) = uVar1;
  Sexy::ToWString(param_2);
  TodStringTranslate(awStack_18);
  FUN_054766c8(this + 0x1b0,auStack_10);
  FUN_05476c50(auStack_10);
  FUN_05476c50(awStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NostalgiaAchievementDialog::SetDescription(std::wstring const&) */

void NostalgiaAchievementDialog::SetDescription(wstring *param_1)

{
  *(undefined4 *)(param_1 + 0x19c) = 1;
  thunk_FUN_05477b9c(param_1 + 0x1b0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NostalgiaAchievementDialog::NostalgiaAchievementDialog() */

void __thiscall
NostalgiaAchievementDialog::NostalgiaAchievementDialog(NostalgiaAchievementDialog *this)

{
  LawnApp *pLVar1;
  undefined4 uVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SlidingWidget::SlidingWidget((SlidingWidget *)this);
  *(undefined4 *)(this + 0x19c) = 0;
  this[0x1a0] = (NostalgiaAchievementDialog)0x0;
  *(undefined ***)this = &PTR_GetClass_0676e930;
  *(undefined ***)(this + 0x10) = &PTR__NostalgiaAchievementDialog_0676eae0;
  *(undefined8 *)(this + 0x1a8) = 0;
  FUN_05476574(this + 0x1b0);
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x1b8) = uVar2;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_NostalgiaPVZ");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_PVZ1");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_PauseMenu");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  UIWidget::SetClickable((UIWidget *)this,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NostalgiaAchievementDialog::StaticNew() */

NostalgiaAchievementDialog * NostalgiaAchievementDialog::StaticNew(void)

{
  NostalgiaAchievementDialog *this;
  
  this = ::operator_new(0x1c0);
  NostalgiaAchievementDialog(this);
  return this;
}


/* NostalgiaAchievementDialog::onSlideInFinished() */

void __thiscall NostalgiaAchievementDialog::onSlideInFinished(NostalgiaAchievementDialog *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x1b8) = fVar1 + 3.0;
  return;
}


/* NostalgiaAchievementDialog::onSlideOutFinished() */

void __thiscall NostalgiaAchievementDialog::onSlideOutFinished(NostalgiaAchievementDialog *this)

{
  NostalgiaAchievementDialogManager *this_00;
  
  this_00 = (NostalgiaAchievementDialogManager *)
            Sexy::LazySingleton<NostalgiaAchievementDialogManager>::GetInstance();
  NostalgiaAchievementDialogManager::StartNext(this_00,this);
  this[0x1a0] = (NostalgiaAchievementDialog)0x1;
  (**(code **)(*(long *)this + 0x48))(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NostalgiaAchievementDialog::Draw(Sexy::Graphics*) */

void __thiscall NostalgiaAchievementDialog::Draw(NostalgiaAchievementDialog *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  Image *pIVar7;
  GraphicsAutoState aGStack_38 [8];
  undefined1 auStack_30 [8];
  Color aCStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_38,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  iVar1 = FUN_03d6ce50(4);
  iVar2 = FUN_03d6cdc8(*(undefined4 *)(this + 0x38));
  iVar3 = FUN_03d6cdcc(*(undefined4 *)(this + 0x3c));
  iVar4 = FUN_03d6ce50(8);
  Sexy::Insets::Insets(aIStack_18,0,iVar1,iVar2,iVar3 - iVar4);
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad89d0);
  Draw3SliceImage(param_1,aIStack_18,uVar6);
  if (*(int *)(this + 0x19c) == 0) {
    pIVar7 = *(Image **)(this + 0x1a8);
    if (pIVar7 != (Image *)0x0) {
      iVar1 = FUN_03d6cdcc(*(undefined4 *)(this + 0x3c));
      Sexy::Graphics::DrawImage(param_1,pIVar7,0,0,iVar1,iVar1);
      pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad8980);
      iVar1 = FUN_03d6cdcc(*(undefined4 *)(this + 0x3c));
      Sexy::Graphics::DrawImage(param_1,pIVar7,0,0,iVar1,iVar1);
    }
    iVar2 = FUN_03d6cdcc(*(undefined4 *)(this + 0x3c));
    iVar3 = FUN_03d6ce50(0x28);
    iVar4 = FUN_03d6ce50(6);
    iVar1 = FUN_03d6ce50(10);
    iVar1 = iVar2 / 2 - iVar1;
    Sexy::Insets::Insets(aIStack_18,iVar2 + iVar3,iVar4,iVar1,iVar1);
    uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad8a50);
    DrawAdaptiveImage(param_1,aIStack_18,uVar6);
    iVar2 = FUN_03d6cdcc(*(undefined4 *)(this + 0x3c));
    iVar1 = iVar2 / 2;
    iVar3 = FUN_03d6ce50(0x28);
    iVar4 = FUN_03d6ce50(4);
    iVar5 = FUN_03d6cdc8(*(undefined4 *)(this + 0x38));
    Sexy::Insets::Insets
              (aIStack_18,iVar2 + iVar1 + iVar3,iVar4,(iVar5 - iVar2) - iVar1,iVar1 - iVar4);
    uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16);
    Sexy::Color::Color(aCStack_28,0xff,0xa2,0);
    WriteWordInRect(param_1,this + 0x1b0,aIStack_18,uVar6,aCStack_28,3,1);
    TodStringTranslate(L"[PVZ1_ACHIEVEMENT_FINISH]");
    iVar1 = FUN_03d6cdcc(*(undefined4 *)(this + 0x3c));
    iVar2 = FUN_03d6cdc8(*(undefined4 *)(this + 0x38));
    iVar3 = FUN_03d6ce50(4);
    Sexy::Insets::Insets(aIStack_18,iVar1,iVar1 / 2,iVar2 - iVar1,iVar1 / 2 - iVar3);
    uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16);
    Sexy::Color::Color(aCStack_28,0x4b,0x3c,0);
    WriteWordInRect(param_1,auStack_30,aIStack_18,uVar6,aCStack_28,5,1);
    FUN_05476c50(auStack_30);
  }
  else if (*(int *)(this + 0x19c) == 1) {
    iVar1 = FUN_03d6ce50(4);
    iVar2 = FUN_03d6cdc8(*(undefined4 *)(this + 0x38));
    iVar3 = FUN_03d6cdcc(*(undefined4 *)(this + 0x3c));
    iVar4 = FUN_03d6ce50(8);
    Sexy::Insets::Insets(aIStack_18,0,iVar1,iVar2,iVar3 - iVar4);
    uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
    Sexy::Color::Color(aCStack_28,0,0,0);
    WriteWordInRect(param_1,this + 0x1b0,aIStack_18,uVar6,aCStack_28,3,1);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to NostalgiaAchievementDialog::Draw(Sexy::Graphics*) */

void __thiscall NostalgiaAchievementDialog::Draw(NostalgiaAchievementDialog *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


/* NostalgiaAchievementDialog::onUpdate() */

void __thiscall NostalgiaAchievementDialog::onUpdate(NostalgiaAchievementDialog *this)

{
  float fVar1;
  
  SlidingWidget::onUpdate((SlidingWidget *)this);
  fVar1 = (float)PVZ_T();
  if (fVar1 <= *(float *)(this + 0x1b8)) {
    return;
  }
  SlidingWidget::SlideOut((SlidingWidget *)this);
  return;
}


/* NostalgiaAchievementDialog::onDestroy() */

void __thiscall NostalgiaAchievementDialog::onDestroy(NostalgiaAchievementDialog *this)

{
  NostalgiaAchievementDialogManager *this_00;
  
  UIWidget::onDestroy((UIWidget *)this);
  if (this[0x1a0] != (NostalgiaAchievementDialog)0x0) {
    return;
  }
  this_00 = (NostalgiaAchievementDialogManager *)
            Sexy::LazySingleton<NostalgiaAchievementDialogManager>::GetInstance();
  NostalgiaAchievementDialogManager::StartNext(this_00,this);
  return;
}

