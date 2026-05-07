// Class: LevelEditorSeedChooser


/* LevelEditorSeedChooser::ScrollTargetReached(Sexy::ScrollWidget*) */

void LevelEditorSeedChooser::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to LevelEditorSeedChooser::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
LevelEditorSeedChooser::ScrollTargetReached(LevelEditorSeedChooser *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xe0));
  return;
}


/* LevelEditorSeedChooser::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void LevelEditorSeedChooser::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to LevelEditorSeedChooser::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
LevelEditorSeedChooser::ScrollTargetInterrupted(LevelEditorSeedChooser *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xe0));
  return;
}


/* LevelEditorSeedChooser::SetLevel(int) */

void __thiscall LevelEditorSeedChooser::SetLevel(LevelEditorSeedChooser *this,int param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  if (param_1 < 2) {
    plVar3 = *(long **)(this + 0xf0);
    uVar1 = 1;
    *(undefined4 *)(this + 0xe8) = 1;
    lVar2 = *plVar3;
  }
  else {
    if (4 < param_1) {
      *(undefined4 *)(this + 0xe8) = 5;
      (**(code **)(**(long **)(this + 0xf0) + 0x188))(*(long **)(this + 0xf0),0);
      (**(code **)(**(long **)(this + 0xf8) + 0x188))(*(long **)(this + 0xf8),1);
      return;
    }
    plVar3 = *(long **)(this + 0xf0);
    uVar1 = 0;
    *(int *)(this + 0xe8) = param_1;
    lVar2 = *plVar3;
  }
  (**(code **)(lVar2 + 0x188))(plVar3,uVar1);
  (**(code **)(**(long **)(this + 0xf8) + 0x188))(*(long **)(this + 0xf8),0);
  return;
}


/* LevelEditorSeedChooser::Reload() */

void __thiscall LevelEditorSeedChooser::Reload(LevelEditorSeedChooser *this)

{
  int iVar1;
  CustomLevelMgr *this_00;
  
  this_00 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  iVar1 = CustomLevelMgr::GetSeedBankGlobalLevel(this_00);
  if (0 < iVar1) {
    SetLevel(this,iVar1);
    return;
  }
  (**(code **)(**(long **)(this + 0xf0) + 0x188))(*(long **)(this + 0xf0),1);
  *(undefined4 *)(this + 0xe8) = 1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorSeedChooser::DisableCard(LevelEditorCardInfo const&) */

void __thiscall
LevelEditorSeedChooser::DisableCard(LevelEditorSeedChooser *this,LevelEditorCardInfo *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  PakRecord aPStack_18 [16];
  long local_8;
  
  uVar7 = *(undefined8 *)(this + 0x100);
  local_8 = ___stack_chk_guard;
  uVar6 = 0;
  lVar3 = FUN_04b2d8ac(uVar7,*(undefined8 *)(this + 0x108));
  if (lVar3 != 0) {
    do {
      FUN_04b2d8b8(uVar7,uVar6);
      LevelEditorCardItem::GetData();
      cVar1 = LevelEditorCardInfo::operator==(param_1,(LevelEditorCardInfo *)aPStack_18);
      if ((cVar1 == '\0') ||
         (bVar2 = std::operator!=((string *)(param_1 + 8),"minigame_imitater"), !bVar2)) {
        PakRecord::~PakRecord(aPStack_18);
      }
      else {
        PakRecord::~PakRecord(aPStack_18);
        puVar5 = (undefined8 *)FUN_04b2d8b8(*(undefined8 *)(this + 0x100),uVar6);
        (**(code **)(*(long *)*puVar5 + 0x188))((long *)*puVar5,1);
      }
      uVar6 = uVar6 + 1;
      uVar7 = *(undefined8 *)(this + 0x100);
      uVar4 = FUN_04b2d8ac(uVar7,*(undefined8 *)(this + 0x108));
    } while (uVar6 < uVar4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditorSeedChooser::ConfirmSetting(UIMessageBox*, int) */

void __thiscall
LevelEditorSeedChooser::ConfirmSetting
          (LevelEditorSeedChooser *this,UIMessageBox *param_1,int param_2)

{
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 != 1) {
    return;
  }
  std::function<void(int)>::operator()((function<void(int)> *)(this + 0x130),*(int *)(this + 0xe8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorSeedChooser::TriggerTutorial() */

void __thiscall LevelEditorSeedChooser::TriggerTutorial(LevelEditorSeedChooser *this)

{
  int iVar1;
  ProfileMgr *this_00;
  long lVar2;
  long *plVar3;
  string asStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar2 = ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = FUN_04b2d7d4(*(undefined4 *)(lVar2 + 0x40));
  if (iVar1 == 0x3c) {
    LawnApp::KillGameMaskUI(gLawnApp);
    plVar3 = (long *)FUN_04b2d8b8(*(undefined8 *)(this + 0x100),0);
    lVar2 = *plVar3;
    if (lVar2 != 0) {
      std::string::string(asStack_20,"[CUSTOM_LEVEL_TUTORIAL_4]");
      Sexy::Insets::Insets(aIStack_18);
      GameMaskUI::ShowMask(lVar2,1,asStack_20,aIStack_18);
      std::string::~string(asStack_20);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorSeedChooser::ButtonDepress(int) */

void __thiscall LevelEditorSeedChooser::ButtonDepress(LevelEditorSeedChooser *this,int param_1)

{
  UIMessageBox *this_00;
  Image *pIVar1;
  long lVar2;
  string *extraout_x1;
  wstring awStack_70 [8];
  wstring awStack_68 [8];
  Sexy aSStack_60 [8];
  wstring awStack_58 [8];
  string asStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x11) {
    SetLevel(this,*(int *)(this + 0xe8) + 1);
  }
  else if (param_1 == 0x1f) {
    this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (this_00 != (UIMessageBox *)0x0) {
      UIMessageBox::SetShowType(this_00,6);
      TodStringTranslate(L"[REVIVE_TIP]");
      TodStringTranslate(L"[LEVEL_EDITOR_PLANT_LEVEL_SETTING_HINT]");
      std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xe8));
      Sexy::ToSexyString(aSStack_60,extraout_x1);
      TodReplaceString(awStack_68,L"{NUM}",awStack_58);
      FUN_054766c8(awStack_68,asStack_50);
      FUN_05476c50(asStack_50);
      FUN_05476c50(awStack_58);
      std::string::~string((string *)aSStack_60);
      TodStringTranslate(L"[BUTTON_OK]");
      UIMessageBox::SetMessage(this_00,awStack_68,awStack_70);
      std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar1 = (Image *)StringHelper::ToImage(asStack_50,false);
      UIMessageBox::SetBackground(this_00,pIVar1);
      std::string::~string(asStack_50);
      nop();
      lVar2 = UIMessageBox::GetButtonOK(this_00);
      thunk_FUN_05477b9c(lVar2 + 0xd8,awStack_58);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,ConfirmSetting);
      Sexy::Delegate2<UIMessageBox*,int>::
      Delegate2<LevelEditorSeedChooser,void(LevelEditorSeedChooser::*)(UIMessageBox*,int)>
                (aDStack_38,asStack_50);
      UIMessageBox::SetCallback(this_00,aDStack_38);
      FUN_05476c50(awStack_58);
      FUN_05476c50(awStack_68);
      FUN_05476c50(awStack_70);
    }
  }
  else if (param_1 == 0x10) {
    SetLevel(this,*(int *)(this + 0xe8) + -1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to LevelEditorSeedChooser::ButtonDepress(int) */

void __thiscall LevelEditorSeedChooser::ButtonDepress(LevelEditorSeedChooser *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* LevelEditorSeedChooser::SetChangeGlobalLevelCallback(std::function<void (int)>) */

void __thiscall
LevelEditorSeedChooser::SetChangeGlobalLevelCallback(LevelEditorSeedChooser *this,function *param_2)

{
  std::function<void(int)>::operator=((function<void(int)> *)(this + 0x130),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorSeedChooser::Draw(Sexy::Graphics*) */

void __thiscall LevelEditorSeedChooser::Draw(LevelEditorSeedChooser *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  string asStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85600);
  Draw9SliceImage(param_1,aIStack_18,uVar6);
  TodStringTranslate(L"[LEVEL_EDITOR_PLANT_SELECT]");
  iVar1 = FUN_04b334ec(0);
  iVar2 = FUN_04b334ec(0x46);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar1,*(int *)(this + 0x50),iVar2);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_34_HardShadow);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar6,aIStack_18,5,1);
  FUN_05476c50(auStack_30);
  iVar2 = FUN_04b334ec(0x14);
  iVar3 = FUN_04b334ec(0x46);
  iVar4 = FUN_04b334ec(0x28);
  iVar1 = *(int *)(this + 0x50);
  iVar5 = FUN_04b334ec(0xfa);
  Sexy::Insets::Insets(aIStack_18,iVar2,iVar3,iVar1 - iVar4,iVar5);
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85798);
  Draw9SliceImage(param_1,aIStack_18,uVar6);
  iVar2 = FUN_04b334ec(0x14);
  iVar3 = FUN_04b334ec(0x145);
  iVar4 = FUN_04b334ec(0x28);
  iVar1 = *(int *)(this + 0x50);
  iVar5 = FUN_04b334ec(0xaf);
  Sexy::Insets::Insets(aIStack_18,iVar2,iVar3,iVar1 - iVar4,iVar5);
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85798);
  Draw9SliceImage(param_1,aIStack_18,uVar6);
  TodStringTranslate(L"[LEVEL_EDITOR_PLANT_LEVEL_SETTING]");
  iVar1 = FUN_04b334ec(0);
  iVar2 = FUN_04b334ec(0x14a);
  iVar3 = FUN_04b334ec(0x1e);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,*(int *)(this + 0x50),iVar3);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  Sexy::Color::Color((Color *)aIStack_28,0x66,0x37,0);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar6,aIStack_28,5,1);
  FUN_05476c50(auStack_30);
  TodStringTranslate(L"[LEVEL_EDITOR_PLANT_LEVEL_SETTING_DES]");
  iVar1 = FUN_04b334ec(0);
  iVar2 = FUN_04b334ec(0x1db);
  iVar3 = FUN_04b334ec(0x19);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,*(int *)(this + 0x50),iVar3);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16);
  Sexy::Color::Color((Color *)aIStack_28,0xe9,5,5);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar6,aIStack_28,5,1);
  FUN_05476c50(auStack_30);
  iVar1 = FUN_04b334ec(0x96);
  iVar2 = FUN_04b334ec(0x16d);
  iVar3 = FUN_04b334ec(0x32);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar3);
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85650);
  Draw9SliceImage(param_1,aIStack_18,uVar6);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xe8));
  Sexy::ToWString(asStack_38);
  iVar1 = FUN_04b334ec(0x96);
  iVar2 = FUN_04b334ec(0x16d);
  iVar3 = FUN_04b334ec(0x32);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar3);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_28,0x66,0x37,0);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar6,aIStack_28,5,1);
  FUN_05476c50(auStack_30);
  std::string::~string(asStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditorSeedChooser::LevelEditorSeedChooser() */

void __thiscall LevelEditorSeedChooser::LevelEditorSeedChooser(LevelEditorSeedChooser *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_0695da00;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0695dd38;
  *(undefined ***)(this + 0xe0) = &PTR__LevelEditorSeedChooser_0695dd80;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x100));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x118));
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x130));
  return;
}


/* LevelEditorSeedChooser::~LevelEditorSeedChooser() */

void __thiscall LevelEditorSeedChooser::~LevelEditorSeedChooser(LevelEditorSeedChooser *this)

{
  *(undefined ***)this = &PTR_GetClass_0695da00;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0695dd38;
  *(undefined ***)(this + 0xe0) = &PTR__LevelEditorSeedChooser_0695dd80;
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x130));
  std::vector<LevelEditorPlantRare*,std::allocator<LevelEditorPlantRare*>>::~vector
            ((vector<LevelEditorPlantRare*,std::allocator<LevelEditorPlantRare*>> *)(this + 0x118));
  std::vector<LevelEditorCardPlant*,std::allocator<LevelEditorCardPlant*>>::~vector
            ((vector<LevelEditorCardPlant*,std::allocator<LevelEditorCardPlant*>> *)(this + 0x100));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* non-virtual thunk to LevelEditorSeedChooser::~LevelEditorSeedChooser() */

void __thiscall LevelEditorSeedChooser::~LevelEditorSeedChooser(LevelEditorSeedChooser *this)

{
  ~LevelEditorSeedChooser(this + -0xe0);
  return;
}


/* LevelEditorSeedChooser::~LevelEditorSeedChooser() */

void __thiscall LevelEditorSeedChooser::~LevelEditorSeedChooser(LevelEditorSeedChooser *this)

{
  ~LevelEditorSeedChooser(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to LevelEditorSeedChooser::~LevelEditorSeedChooser() */

void __thiscall LevelEditorSeedChooser::~LevelEditorSeedChooser(LevelEditorSeedChooser *this)

{
  ~LevelEditorSeedChooser(this + -0xe0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorSeedChooser::Init(bool, std::function<void (LevelEditorCardInfo const&)>) */

void __thiscall
LevelEditorSeedChooser::Init(LevelEditorSeedChooser *this,undefined8 param_2,function *param_3)

{
  ButtonListener *pBVar1;
  OTFTagStruct *pOVar2;
  LevelEditorSeedChooser *pLVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  Widget *this_00;
  PVZ2UIScrollingWidget *this_01;
  Widget *this_02;
  undefined8 uVar16;
  long *plVar17;
  long lVar18;
  undefined8 uVar19;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar20;
  ulong uVar21;
  UIWidgetText *this_03;
  LevelEditorPlantRare *pLVar22;
  PVZ2UIButton *pPVar23;
  LevelEditorCardPlant *pLVar24;
  string *psVar25;
  int *piVar26;
  int extraout_w1;
  uint uVar27;
  ulong uVar28;
  uint uVar29;
  code *pcVar30;
  LevelEditorSeedChooser *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  Widget *local_100;
  PVZ2UIScrollingWidget *pPStack_f8;
  undefined1 auStack_f0 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_e8 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_e0 [8];
  Insets aIStack_d8 [8];
  int local_d0;
  undefined4 local_cc;
  function<bool(Sexy::Touch_const&)> afStack_c8 [32];
  LevelEditorSeedChooser *local_a8;
  int local_a0;
  int local_9c;
  int local_98;
  int iStack_94;
  int local_90;
  undefined4 uStack_8c;
  Widget *local_88;
  PVZ2UIScrollingWidget *local_80;
  undefined8 local_78;
  int local_6c;
  LevelEditorPlantRare *local_40 [7];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar6 = FUN_04b334ec(5);
  this_00 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_00);
  uVar7 = FUN_04b334ec(0x19);
  uVar8 = FUN_04b334ec(0x4b);
  uVar9 = FUN_04b334ec(300);
  uVar10 = FUN_04b334ec(0xf0);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar7,uVar8,uVar9,uVar10);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  this_01 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_01,(ScrollWidgetListener *)(this + 0xe0));
  this_02 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_02);
  iVar11 = FUN_04b334ec(0);
  iVar12 = FUN_04b334ec(0x28);
  iVar13 = FUN_04b334ec(300);
  iVar14 = FUN_04b334ec(200);
  Sexy::Insets::Insets(aIStack_d8,iVar11,iVar12,iVar13,iVar14);
  (**(code **)(*(long *)this_01 + 0x1a0))(this_01,aIStack_d8);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_01,2);
  (**(code **)(*(long *)this_02 + 0x198))(this_02,0,0,local_d0,local_cc);
  local_d0 = local_d0 + iVar6 * -5;
  iVar11 = local_d0 + 3;
  if (-1 < local_d0) {
    iVar11 = local_d0;
  }
  iVar11 = iVar11 >> 2;
  iVar12 = (int)((double)iVar11 * 0.65);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_e8);
  uVar16 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable((Iterator *)local_40,uVar16,0x9f);
  while (bVar4 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)local_40), bVar4) {
    Sexy::RtDbTable::Iterator::operator*((Iterator *)local_40);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_a8,(RtWeakPtrBase *)&local_78);
    Sexy::RtId::~RtId((RtId *)&local_78);
    bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_a8);
    if (bVar4) {
      plVar17 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)&local_a8);
      pcVar30 = *(code **)(*plVar17 + 0x20);
      uVar16 = LevelEditorConfig::StaticGetClass();
      cVar5 = (*pcVar30)(plVar17,uVar16);
      if (cVar5 != '\0') {
        Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                  ((RtWeakPtr<SpartanBambooMatrixSystem> *)a_Stack_e8,(RtWeakPtrBase *)&local_a8);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_a8);
    Sexy::RtDbTable::Iterator::operator++((Iterator *)local_40,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator((Iterator *)local_40);
  lVar18 = Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  uVar15 = FUN_04b2d86c(*(undefined4 *)(lVar18 + 0x30c));
  if (uVar15 < 2) {
    uVar28 = 0;
    uVar27 = 0;
    uVar29 = uVar27;
    while( true ) {
      lVar18 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_e8)
      ;
      uVar21 = FUN_04b2d870(*(undefined8 *)(lVar18 + 0x40),*(undefined8 *)(lVar18 + 0x48));
      if (uVar21 <= uVar28) break;
      lVar18 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_e8)
      ;
      piVar26 = (int *)FUN_04b2d87c(*(undefined8 *)(lVar18 + 0x40),uVar28);
      if ((uVar15 == 0) && (*piVar26 != 1)) {
        uVar28 = uVar28 + 1;
      }
      else {
        Sexy::Insets::Insets
                  ((Insets *)&local_78,iVar6 + (iVar6 + iVar11) * (uVar27 & 3),
                   (iVar6 + iVar12) * ((int)uVar27 >> 2),iVar11,iVar12);
        pLVar24 = ::operator_new(0x118);
        LevelEditorCardPlant::LevelEditorCardPlant(pLVar24);
        local_a8 = (LevelEditorSeedChooser *)pLVar24;
        (**(code **)(*(long *)pLVar24 + 0x1a0))(pLVar24,(RtId *)&local_78);
        pLVar3 = local_a8;
        std::function<void(int,std::string)>::function
                  ((function<void(int,std::string)> *)afStack_c8,param_3);
        LevelEditorCardItem::SetClickFunction
                  ((LevelEditorCardItem *)pLVar3,(function<void(int,std::string)> *)afStack_c8);
        std::function<bool(Sexy::Touch_const&)>::~function(afStack_c8);
        pLVar3 = local_a8;
        if (*piVar26 == 1) {
          LevelEditorCardInfo::LevelEditorCardInfo((LevelEditorCardInfo *)local_40,1,piVar26 + 2);
          LevelEditorCardItem::SetData
                    ((LevelEditorCardItem *)pLVar3,(LevelEditorCardInfo *)local_40);
          PakRecord::~PakRecord((PakRecord *)local_40);
          pOVar2 = (OTFTagStruct *)(local_a8 + 0x110);
          psVar25 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
          ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar25);
          lVar18 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)local_40);
          EA::Text::OTFTagStruct::OTFTagStruct(pOVar2,*(uint *)(lVar18 + 0xd0));
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_40)
          ;
        }
        else if (*piVar26 == 2) {
          LevelEditorCardInfo::LevelEditorCardInfo((LevelEditorCardInfo *)local_40,2,piVar26 + 2);
          LevelEditorCardItem::SetData
                    ((LevelEditorCardItem *)pLVar3,(LevelEditorCardInfo *)local_40);
          PakRecord::~PakRecord((PakRecord *)local_40);
          EA::Text::OTFTagStruct::OTFTagStruct((OTFTagStruct *)(local_a8 + 0x110),0);
        }
        uVar28 = uVar28 + 1;
        uVar27 = uVar27 + 1;
        (**(code **)(*(long *)this_02 + 0x60))(this_02,local_a8);
        std::vector<LevelEditorCardPlant*,std::allocator<LevelEditorCardPlant*>>::push_back
                  ((vector<LevelEditorCardPlant*,std::allocator<LevelEditorCardPlant*>> *)
                   (this + 0x100),(LevelEditorCardPlant **)&local_a8);
        uVar29 = local_78._4_4_ + local_6c;
      }
    }
  }
  else {
    uVar29 = 0;
    uVar27 = 0;
  }
  uVar28 = 0;
  Magento::GetPlantLevelUp((Magento *)(this + 0x100));
  lVar18 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_e0);
  lVar18 = FUN_04b2d884(*(undefined8 *)(lVar18 + 0x60),*(undefined8 *)(lVar18 + 0x68));
  if (lVar18 != 0) {
    do {
      lVar18 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_e8)
      ;
      uVar16 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(lVar18 + 0xa0));
      lVar18 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_e8)
      ;
      uVar19 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(lVar18 + 0xa0));
      lVar18 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_e0);
      pRVar20 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04b2d890(*(undefined8 *)(lVar18 + 0x60),uVar28)
      ;
      lVar18 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar20);
      local_78 = std::
                 find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                           (uVar16,uVar19,lVar18 + 0x80);
      lVar18 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_e8)
      ;
      local_40[0] = (LevelEditorPlantRare *)
                    std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(lVar18 + 0xa0));
      bVar4 = __gnu_cxx::operator!=((__normal_iterator *)&local_78,(__normal_iterator *)local_40);
      if (!bVar4) {
        uVar15 = uVar27 & 3;
        iVar13 = (int)uVar27 >> 2;
        uVar27 = uVar27 + 1;
        Sexy::Insets::Insets
                  ((Insets *)&local_78,iVar6 + (iVar6 + iVar11) * uVar15,(iVar6 + iVar12) * iVar13,
                   iVar11,iVar12);
        pLVar24 = ::operator_new(0x118);
        LevelEditorCardPlant::LevelEditorCardPlant(pLVar24);
        local_a8 = (LevelEditorSeedChooser *)pLVar24;
        (**(code **)(*(long *)pLVar24 + 0x1a0))(pLVar24,(RtId *)&local_78);
        pLVar3 = local_a8;
        std::function<void(int,std::string)>::function
                  ((function<void(int,std::string)> *)afStack_c8,param_3);
        LevelEditorCardItem::SetClickFunction((LevelEditorCardItem *)pLVar3,afStack_c8);
        std::function<bool(Sexy::Touch_const&)>::~function(afStack_c8);
        pLVar3 = local_a8;
        lVar18 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_e0);
        pRVar20 = (RtWeakPtr<Sexy::ResourceInfo> *)
                  FUN_04b2d890(*(undefined8 *)(lVar18 + 0x60),uVar28);
        lVar18 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar20);
        LevelEditorCardInfo::LevelEditorCardInfo((LevelEditorCardInfo *)local_40,1,lVar18 + 0x80);
        LevelEditorCardItem::SetData((LevelEditorCardItem *)pLVar3,(LevelEditorCardInfo *)local_40);
        PakRecord::~PakRecord((PakRecord *)local_40);
        pOVar2 = (OTFTagStruct *)(local_a8 + 0x110);
        psVar25 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        lVar18 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_e0);
        pRVar20 = (RtWeakPtr<Sexy::ResourceInfo> *)
                  FUN_04b2d890(*(undefined8 *)(lVar18 + 0x60),uVar28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar20);
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar25);
        lVar18 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_40)
        ;
        EA::Text::OTFTagStruct::OTFTagStruct(pOVar2,*(uint *)(lVar18 + 0xd0));
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_40);
        (**(code **)(*(long *)this_02 + 0x60))(this_02,local_a8);
        std::vector<LevelEditorCardPlant*,std::allocator<LevelEditorCardPlant*>>::push_back
                  ((vector<LevelEditorCardPlant*,std::allocator<LevelEditorCardPlant*>> *)
                   (this + 0x100),(LevelEditorCardPlant **)&local_a8);
        uVar29 = local_78._4_4_ + local_6c;
      }
      uVar28 = uVar28 + 1;
      lVar18 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_e0);
      uVar21 = FUN_04b2d884(*(undefined8 *)(lVar18 + 0x60),*(undefined8 *)(lVar18 + 0x68));
    } while (uVar28 < uVar21);
  }
  pcVar30 = *(code **)(*(long *)this_00 + 0x60);
  *(uint *)(this_02 + 0x54) = uVar29;
  (*pcVar30)(this_00,this_01);
  (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
  TodStringTranslate(L"[LEVEL_EDITOR_SELECT_RARE]");
  this_03 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(this_03,(wstring *)local_40);
  FUN_05476c50((Iterator *)local_40);
  uVar7 = FUN_04b334ec(0x87);
  uVar8 = FUN_04b334ec(0x28);
  (**(code **)(*(long *)this_03 + 0x198))(this_03,0,0,uVar7,uVar8);
  UIWidgetText::SetFontIndex(this_03,5);
  pcVar30 = *(code **)(*(long *)this_03 + 0x170);
  Sexy::Color::Color((Color *)local_40,0x66,0x37,0);
  (*pcVar30)(this_03,0,(Iterator *)local_40);
  FUN_04b2dcbc(this_03 + 0xe0);
  (**(code **)(*(long *)this_00 + 0x60))(this_00,this_03);
  iVar13 = 0;
  local_a8 = this;
  local_a0 = iVar6;
  local_9c = iVar6;
  local_98 = iVar6;
  iStack_94 = iVar11;
  local_90 = iVar12;
  local_88 = this_02;
  local_80 = this_01;
  do {
    pLVar22 = ::operator_new(0x100);
    LevelEditorPlantRare::LevelEditorPlantRare(pLVar22);
    local_40[0] = pLVar22;
    iVar11 = FUN_04b334ec(0x8c);
    iVar6 = FUN_04b334ec(0x1e);
    uVar7 = FUN_04b334ec(2);
    uVar8 = FUN_04b334ec(0x19);
    (**(code **)(*(long *)pLVar22 + 0x198))(pLVar22,iVar11 + iVar6 * iVar13,uVar7,uVar8,iVar6);
    iVar11 = iVar13 + 1;
    FUN_04b2d7f4(local_40[0] + 0xd8,iVar13);
    pLVar22 = local_40[0];
    uStack_118 = CONCAT44(local_9c,local_a0);
    local_110 = CONCAT44(iStack_94,local_98);
    uStack_108 = CONCAT44(uStack_8c,local_90);
    local_100 = local_88;
    pPStack_f8 = local_80;
    local_120 = local_a8;
    FUN_04b32900(afStack_c8,&local_120);
    LevelEditorPlantRare::SetCallBack(pLVar22,afStack_c8);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_c8);
    (**(code **)(*(long *)this_00 + 0x60))(this_00,local_40[0]);
    std::vector<LevelEditorPlantRare*,std::allocator<LevelEditorPlantRare*>>::push_back
              ((vector<LevelEditorPlantRare*,std::allocator<LevelEditorPlantRare*>> *)(this + 0x118)
               ,local_40);
    iVar13 = iVar11;
  } while (iVar11 != 5);
  pBVar1 = (ButtonListener *)(this + 0xd8);
  FUN_05478178((RtId *)&local_78,&DAT_056f11a8,auStack_f0);
  Sexy::Color::Color((Color *)local_40,1);
  pPVar23 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar23,0x10,pBVar1,(wstring *)&local_78,(Color *)local_40);
  *(PVZ2UIButton **)(this + 0xf0) = pPVar23;
  FUN_05476c50((RtId *)&local_78);
  nop();
  pPVar23 = *(PVZ2UIButton **)(this + 0xf0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_78,&DAT_06b854c0,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06b854c0,2);
  PVZ2UIButton::SetDialogStates(pPVar23,(PVZ2UIImage *)&local_78,(PVZ2UIImage *)local_40);
  plVar17 = *(long **)(this + 0xf0);
  uVar7 = FUN_04b334ec(0x69);
  uVar8 = FUN_04b334ec(0x172);
  uVar9 = FUN_04b334ec(0x28);
  (**(code **)(*plVar17 + 0x198))(plVar17,uVar7,uVar8,uVar9,uVar9);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf0));
  FUN_05478178((RtId *)&local_78,&DAT_056f11a8,auStack_f0);
  Sexy::Color::Color((Color *)local_40,1);
  pPVar23 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar23,0x11,pBVar1,(wstring *)&local_78,(Color *)local_40);
  *(PVZ2UIButton **)(this + 0xf8) = pPVar23;
  FUN_05476c50((RtId *)&local_78);
  nop();
  pPVar23 = *(PVZ2UIButton **)(this + 0xf8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_78,&DAT_06b85a10,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06b85a10,2);
  PVZ2UIButton::SetDialogStates(pPVar23,(PVZ2UIImage *)&local_78,(PVZ2UIImage *)local_40);
  plVar17 = *(long **)(this + 0xf8);
  uVar7 = FUN_04b334ec(0xcd);
  uVar8 = FUN_04b334ec(0x172);
  uVar9 = FUN_04b334ec(0x28);
  (**(code **)(*plVar17 + 0x198))(plVar17,uVar7,uVar8,uVar9,uVar9);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf8));
  TodStringTranslate(L"[BUTTON_OK]");
  Sexy::Color::Color((Color *)local_40,1);
  pPVar23 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar23,0x1f,pBVar1,(wstring *)&local_78,(Color *)local_40);
  FUN_05476c50((RtId *)&local_78);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_78,&DAT_06b859c0,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06b85318,3);
  PVZ2UIButton::SetDialogStates(pPVar23,(PVZ2UIImage *)&local_78,(PVZ2UIImage *)local_40);
  uVar7 = FUN_04b334ec(0x73);
  uVar8 = FUN_04b334ec(0x1a4);
  uVar9 = FUN_04b334ec(0x78);
  uVar10 = FUN_04b334ec(0x32);
  (**(code **)(*(long *)pPVar23 + 0x198))(pPVar23,uVar7,uVar8,uVar9,uVar10);
  pcVar30 = *(code **)(*(long *)pPVar23 + 800);
  uVar16 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar30)(pPVar23,uVar16);
  (**(code **)(*(long *)this + 0x60))(this,pPVar23);
  Reload(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_e0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_e8);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

