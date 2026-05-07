// Class: LevelEditorGroundSetting


/* LevelEditorGroundSetting::ScrollTargetReached(Sexy::ScrollWidget*) */

void LevelEditorGroundSetting::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to LevelEditorGroundSetting::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
LevelEditorGroundSetting::ScrollTargetReached(LevelEditorGroundSetting *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xe0));
  return;
}


/* LevelEditorGroundSetting::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void LevelEditorGroundSetting::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to LevelEditorGroundSetting::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
LevelEditorGroundSetting::ScrollTargetInterrupted
          (LevelEditorGroundSetting *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xe0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorGroundSetting::ButtonDepress(int) */

void __thiscall LevelEditorGroundSetting::ButtonDepress(LevelEditorGroundSetting *this,int param_1)

{
  undefined *puVar1;
  PVZ2UIButton *pPVar2;
  PVZ2UIImage aPStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0xd) {
    (**(code **)(**(long **)(this + 0x100) + 0x158))(*(long **)(this + 0x100),1);
    (**(code **)(**(long **)(this + 0x108) + 0x158))(*(long **)(this + 0x108),0);
    pPVar2 = *(PVZ2UIButton **)(this + 0xf0);
    PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b85448,3);
    puVar1 = &DAT_06b85a90;
    PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b85448,3);
    PVZ2UIButton::SetDialogStates(pPVar2,aPStack_78,aPStack_40);
  }
  else {
    if (param_1 != 0xe) goto LAB_04b2d120;
    (**(code **)(**(long **)(this + 0x100) + 0x158))(*(long **)(this + 0x100),0);
    (**(code **)(**(long **)(this + 0x108) + 0x158))(*(long **)(this + 0x108),1);
    pPVar2 = *(PVZ2UIButton **)(this + 0xf0);
    PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b85a90,3);
    puVar1 = &DAT_06b85448;
    PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b85a90,3);
    PVZ2UIButton::SetDialogStates(pPVar2,aPStack_78,aPStack_40);
  }
  pPVar2 = *(PVZ2UIButton **)(this + 0xf8);
  PVZ2UIImage::PVZ2UIImage(aPStack_78,puVar1,3);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,puVar1,3);
  PVZ2UIButton::SetDialogStates(pPVar2,aPStack_78,aPStack_40);
LAB_04b2d120:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to LevelEditorGroundSetting::ButtonDepress(int) */

void __thiscall LevelEditorGroundSetting::ButtonDepress(LevelEditorGroundSetting *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorGroundSetting::TriggerTutorial() */

void __thiscall LevelEditorGroundSetting::TriggerTutorial(LevelEditorGroundSetting *this)

{
  int iVar1;
  ProfileMgr *this_00;
  long lVar2;
  string asStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar2 = ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = FUN_04b2d7d4(*(undefined4 *)(lVar2 + 0x40));
  if (iVar1 == 0x3c) {
    LawnApp::KillGameMaskUI(gLawnApp);
    lVar2 = *(long *)(this + 0x140);
    if (lVar2 != 0) {
      std::string::string(asStack_20,"[CUSTOM_LEVEL_TUTORIAL_7]");
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


/* LevelEditorGroundSetting::LevelEditorGroundSetting() */

void __thiscall LevelEditorGroundSetting::LevelEditorGroundSetting(LevelEditorGroundSetting *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xe0));
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined ***)this = &PTR_GetClass_0695a240;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0695a578;
  *(undefined ***)(this + 0xe0) = &PTR__LevelEditorGroundSetting_0695a5c0;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x110));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x128));
  *(undefined8 *)(this + 0x140) = 0;
  return;
}


/* LevelEditorGroundSetting::~LevelEditorGroundSetting() */

void __thiscall LevelEditorGroundSetting::~LevelEditorGroundSetting(LevelEditorGroundSetting *this)

{
  *(undefined ***)this = &PTR_GetClass_0695a240;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0695a578;
  *(undefined ***)(this + 0xe0) = &PTR__LevelEditorGroundSetting_0695a5c0;
  std::vector<LevelEditorPlantRare*,std::allocator<LevelEditorPlantRare*>>::~vector
            ((vector<LevelEditorPlantRare*,std::allocator<LevelEditorPlantRare*>> *)(this + 0x128));
  std::vector<LevelEditorCardPlant*,std::allocator<LevelEditorCardPlant*>>::~vector
            ((vector<LevelEditorCardPlant*,std::allocator<LevelEditorCardPlant*>> *)(this + 0x110));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* non-virtual thunk to LevelEditorGroundSetting::~LevelEditorGroundSetting() */

void __thiscall LevelEditorGroundSetting::~LevelEditorGroundSetting(LevelEditorGroundSetting *this)

{
  ~LevelEditorGroundSetting(this + -0xe0);
  return;
}


/* LevelEditorGroundSetting::~LevelEditorGroundSetting() */

void __thiscall LevelEditorGroundSetting::~LevelEditorGroundSetting(LevelEditorGroundSetting *this)

{
  ~LevelEditorGroundSetting(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to LevelEditorGroundSetting::~LevelEditorGroundSetting() */

void __thiscall LevelEditorGroundSetting::~LevelEditorGroundSetting(LevelEditorGroundSetting *this)

{
  ~LevelEditorGroundSetting(this + -0xe0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorGroundSetting::Init(int, int, std::function<void (LevelEditorCardInfo const&)>) */

void __thiscall
LevelEditorGroundSetting::Init
          (LevelEditorGroundSetting *this,undefined4 param_1,undefined4 param_2,function *param_4)

{
  OTFTagStruct *this_00;
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  PVZ2UIButton *pPVar13;
  undefined8 uVar14;
  Widget *pWVar15;
  PVZ2UIScrollingWidget *pPVar16;
  ProfileMgr *this_01;
  long lVar17;
  LevelEditorCardItem *pLVar18;
  LevelEditorCardInfo *pLVar19;
  ulong uVar20;
  undefined8 uVar21;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar22;
  UIWidgetText *this_02;
  LevelEditorPlantRare *pLVar23;
  LevelEditorCardPlant *this_03;
  string *psVar24;
  int extraout_w1;
  uint uVar25;
  long *plVar26;
  ulong uVar27;
  code *pcVar28;
  uint uVar29;
  LevelEditorGroundSetting *local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  Widget *local_e0;
  PVZ2UIScrollingWidget *pPStack_d8;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_d0 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_c8 [8];
  LevelEditorCardItem *local_c0;
  Insets aIStack_b8 [8];
  int local_b0;
  undefined4 local_ac;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_a8 [8];
  int local_a0;
  undefined4 local_9c;
  function<void(int,std::string)> afStack_98 [32];
  undefined8 local_78;
  int local_6c;
  undefined8 local_40;
  int local_38;
  int local_34;
  int local_30;
  int iStack_2c;
  uint local_28;
  undefined4 uStack_24;
  Widget *local_20;
  PVZ2UIScrollingWidget *local_18;
  long local_8;
  
  *(undefined4 *)(this + 0xe8) = param_1;
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0xec) = param_2;
  TodStringTranslate(L"[LEVEL_EDITOR_SENCE]");
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar13 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar13,0xd,(ButtonListener *)(this + 0xd8),(wstring *)&local_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0xf0) = pPVar13;
  FUN_05476c50((RtId *)&local_78);
  pPVar13 = *(PVZ2UIButton **)(this + 0xf0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_78,&DAT_06b85448,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b85448,3);
  PVZ2UIButton::SetDialogStates(pPVar13,(PVZ2UIImage *)&local_78,(PVZ2UIImage *)&local_40);
  plVar26 = *(long **)(this + 0xf0);
  uVar3 = FUN_04b334ec(0x19);
  uVar4 = FUN_04b334ec(0);
  uVar5 = FUN_04b334ec(100);
  uVar6 = FUN_04b334ec(0x1e);
  (**(code **)(*plVar26 + 0x198))(plVar26,uVar3,uVar4,uVar5,uVar6);
  plVar26 = *(long **)(this + 0xf0);
  pcVar28 = *(code **)(*plVar26 + 800);
  uVar14 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_20_Outline);
  (*pcVar28)(plVar26,uVar14);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf0));
  TodStringTranslate(L"[PLANT]");
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar13 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar13,0xe,(ButtonListener *)(this + 0xd8),(wstring *)&local_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0xf8) = pPVar13;
  FUN_05476c50((RtId *)&local_78);
  pPVar13 = *(PVZ2UIButton **)(this + 0xf8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_78,&DAT_06b85a90,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b85a90,3);
  PVZ2UIButton::SetDialogStates(pPVar13,(PVZ2UIImage *)&local_78,(PVZ2UIImage *)&local_40);
  plVar26 = *(long **)(this + 0xf8);
  uVar3 = FUN_04b334ec(0x82);
  uVar4 = FUN_04b334ec(0);
  uVar5 = FUN_04b334ec(100);
  uVar6 = FUN_04b334ec(0x1e);
  (**(code **)(*plVar26 + 0x198))(plVar26,uVar3,uVar4,uVar5,uVar6);
  plVar26 = *(long **)(this + 0xf8);
  pcVar28 = *(code **)(*plVar26 + 800);
  uVar14 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_20_Outline);
  (*pcVar28)(plVar26,uVar14);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf8));
  iVar7 = FUN_04b334ec(5);
  pWVar15 = ::operator_new(0xd8);
  Sexy::Widget::Widget(pWVar15);
  *(Widget **)(this + 0x100) = pWVar15;
  uVar3 = FUN_04b334ec(0x28);
  uVar4 = FUN_04b334ec(0xfa);
  (**(code **)(*(long *)pWVar15 + 0x198))(pWVar15,0,uVar3,*(undefined4 *)(this + 0x50),uVar4);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x100));
  pPVar16 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(pPVar16,(ScrollWidgetListener *)(this + 0xe0));
  pWVar15 = ::operator_new(0xd8);
  Sexy::Widget::Widget(pWVar15);
  iVar8 = FUN_04b334ec(0);
  iVar9 = FUN_04b334ec(300);
  iVar10 = FUN_04b334ec(0xfa);
  Sexy::Insets::Insets(aIStack_b8,iVar8,iVar8,iVar9,iVar10);
  (**(code **)(*(long *)pPVar16 + 0x1a0))(pPVar16,aIStack_b8);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)pPVar16,2);
  (**(code **)(*(long *)pWVar15 + 0x198))(pWVar15,0,0,local_b0,local_ac);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_d0);
  uVar14 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable((Iterator *)&local_40,uVar14,0x9f);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)&local_40), bVar1) {
    Sexy::RtDbTable::Iterator::operator*((Iterator *)&local_40);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_a8,(RtWeakPtrBase *)&local_78);
    Sexy::RtId::~RtId((RtId *)&local_78);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_a8);
    if (bVar1) {
      plVar26 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_a8);
      pcVar28 = *(code **)(*plVar26 + 0x20);
      uVar14 = LevelEditorConfig::StaticGetClass();
      cVar2 = (*pcVar28)(plVar26,uVar14);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                  ((RtWeakPtr<SpartanBambooMatrixSystem> *)a_Stack_d0,(RtWeakPtrBase *)aRStack_a8);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a8);
    Sexy::RtDbTable::Iterator::operator++((Iterator *)&local_40,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator((Iterator *)&local_40);
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_01);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)a_Stack_d0);
  if (bVar1) {
    uVar27 = 0;
    uVar25 = 0;
    local_b0 = local_b0 + iVar7 * -5;
    iVar8 = 0;
    iVar9 = local_b0 + 3;
    if (-1 < local_b0) {
      iVar9 = local_b0;
    }
    iVar9 = iVar9 >> 2;
    lVar17 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_d0);
    lVar17 = FUN_04b2d870(*(undefined8 *)(lVar17 + 0x10),*(undefined8 *)(lVar17 + 0x18));
    if (lVar17 != 0) {
      do {
        Sexy::Insets::Insets
                  ((Insets *)&local_40,iVar7 + (iVar7 + iVar9) * (uVar25 & 3),
                   (iVar7 + (int)((double)iVar9 * 0.65)) * ((int)uVar25 >> 2),iVar9,
                   (int)((double)iVar9 * 0.65));
        iVar10 = *(int *)(this + 0xe8);
        if (iVar10 == 0) {
          lVar17 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_d0);
          lVar17 = FUN_04b2d87c(*(undefined8 *)(lVar17 + 0x10),uVar27);
          bVar1 = std::operator==((string *)(lVar17 + 8),"slider_up_modern");
          if (!bVar1) {
            iVar10 = *(int *)(this + 0xe8);
            iVar11 = BoardConstants::NUMBER_OF_ROWS();
            if (iVar10 == iVar11 + -1) goto LAB_04b44094;
            goto LAB_04b43aa4;
          }
        }
        else {
          iVar11 = BoardConstants::NUMBER_OF_ROWS();
          if (iVar10 == iVar11 + -1) {
LAB_04b44094:
            lVar17 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_d0);
            lVar17 = FUN_04b2d87c(*(undefined8 *)(lVar17 + 0x10),uVar27);
            bVar1 = std::operator==((string *)(lVar17 + 8),"slider_down_modern");
            if (bVar1) goto LAB_04b43b34;
          }
LAB_04b43aa4:
          uVar25 = uVar25 + 1;
          pLVar18 = ::operator_new(0x110);
          LevelEditorCardItem::LevelEditorCardItem(pLVar18);
          (**(code **)(*(long *)pLVar18 + 0x1a0))(pLVar18,(Iterator *)&local_40);
          std::function<void(int,std::string)>::function(afStack_98,param_4);
          LevelEditorCardItem::SetClickFunction(pLVar18,afStack_98);
          std::function<bool(Sexy::Touch_const&)>::~function
                    ((function<bool(Sexy::Touch_const&)> *)afStack_98);
          lVar17 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_d0);
          pLVar19 = (LevelEditorCardInfo *)FUN_04b2d87c(*(undefined8 *)(lVar17 + 0x10),uVar27);
          LevelEditorCardItem::SetData(pLVar18,pLVar19);
          (**(code **)(*(long *)pWVar15 + 0x60))(pWVar15,pLVar18);
          iVar8 = local_40._4_4_ + local_34;
        }
LAB_04b43b34:
        uVar27 = uVar27 + 1;
        lVar17 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_d0);
        uVar20 = FUN_04b2d870(*(undefined8 *)(lVar17 + 0x10),*(undefined8 *)(lVar17 + 0x18));
      } while (uVar27 < uVar20);
    }
  }
  else {
    iVar8 = 0;
  }
  plVar26 = *(long **)(this + 0x100);
  uVar27 = 0;
  *(int *)(pWVar15 + 0x54) = iVar8;
  uVar25 = 0;
  (**(code **)(*plVar26 + 0x60))(plVar26,pPVar16);
  (**(code **)(*(long *)pPVar16 + 0x60))(pPVar16,pWVar15);
  pWVar15 = ::operator_new(0xd8);
  Sexy::Widget::Widget(pWVar15);
  *(Widget **)(this + 0x108) = pWVar15;
  uVar3 = FUN_04b334ec(0x28);
  uVar4 = FUN_04b334ec(0xfa);
  (**(code **)(*(long *)pWVar15 + 0x198))(pWVar15,0,uVar3,*(undefined4 *)(this + 0x50),uVar4);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x108));
  pPVar16 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(pPVar16,(ScrollWidgetListener *)(this + 0xe0));
  pWVar15 = ::operator_new(0xd8);
  Sexy::Widget::Widget(pWVar15);
  iVar8 = FUN_04b334ec(0);
  iVar9 = FUN_04b334ec(0x28);
  iVar10 = FUN_04b334ec(300);
  iVar11 = FUN_04b334ec(0xd2);
  Sexy::Insets::Insets((Insets *)aRStack_a8,iVar8,iVar9,iVar10,iVar11);
  (**(code **)(*(long *)pPVar16 + 0x1a0))(pPVar16,aRStack_a8);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)pPVar16,2);
  (**(code **)(*(long *)pWVar15 + 0x198))(pWVar15,0,0,local_a0,local_9c);
  local_a0 = iVar7 * -5 + local_a0;
  iVar8 = local_a0 + 3;
  if (-1 < local_a0) {
    iVar8 = local_a0;
  }
  iVar8 = iVar8 >> 2;
  uVar12 = (uint)((double)iVar8 * 0.65);
  Magento::GetPlantLevelUp((Magento *)(ulong)uVar12);
  lVar17 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_c8);
  lVar17 = FUN_04b2d884(*(undefined8 *)(lVar17 + 0x60),*(undefined8 *)(lVar17 + 0x68));
  uVar29 = uVar25;
  if (lVar17 != 0) {
    do {
      lVar17 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_d0)
      ;
      uVar14 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(lVar17 + 0x88));
      lVar17 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_d0)
      ;
      uVar21 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(lVar17 + 0x88));
      lVar17 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_c8);
      pRVar22 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04b2d890(*(undefined8 *)(lVar17 + 0x60),uVar27)
      ;
      lVar17 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar22);
      local_78 = (LevelEditorPlantRare *)
                 std::
                 find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                           (uVar14,uVar21,lVar17 + 0x80);
      lVar17 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_d0)
      ;
      local_40 = (LevelEditorGroundSetting *)
                 std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(lVar17 + 0x88));
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_78,(__normal_iterator *)&local_40);
      if (!bVar1) {
        uVar29 = uVar25 & 3;
        iVar9 = (int)uVar25 >> 2;
        uVar25 = uVar25 + 1;
        Sexy::Insets::Insets
                  ((Insets *)&local_78,iVar7 + (iVar7 + iVar8) * uVar29,(iVar7 + uVar12) * iVar9,
                   iVar8,uVar12);
        this_03 = ::operator_new(0x118);
        LevelEditorCardPlant::LevelEditorCardPlant(this_03);
        local_c0 = (LevelEditorCardItem *)this_03;
        (**(code **)(*(long *)this_03 + 0x1a0))(this_03,(RtId *)&local_78);
        pLVar18 = local_c0;
        std::function<void(int,std::string)>::function(afStack_98,param_4);
        LevelEditorCardItem::SetClickFunction
                  (pLVar18,(function<bool(Sexy::Touch_const&)> *)afStack_98);
        std::function<bool(Sexy::Touch_const&)>::~function
                  ((function<bool(Sexy::Touch_const&)> *)afStack_98);
        pLVar18 = local_c0;
        lVar17 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_c8);
        pRVar22 = (RtWeakPtr<Sexy::ResourceInfo> *)
                  FUN_04b2d890(*(undefined8 *)(lVar17 + 0x60),uVar27);
        lVar17 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar22);
        LevelEditorCardInfo::LevelEditorCardInfo((LevelEditorCardInfo *)&local_40,1,lVar17 + 0x80);
        LevelEditorCardItem::SetData(pLVar18,(LevelEditorCardInfo *)&local_40);
        PakRecord::~PakRecord((PakRecord *)&local_40);
        this_00 = (OTFTagStruct *)(local_c0 + 0x110);
        psVar24 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        lVar17 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_c8);
        pRVar22 = (RtWeakPtr<Sexy::ResourceInfo> *)
                  FUN_04b2d890(*(undefined8 *)(lVar17 + 0x60),uVar27);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar22);
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar24);
        lVar17 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
        EA::Text::OTFTagStruct::OTFTagStruct(this_00,*(uint *)(lVar17 + 0xd0));
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
        (**(code **)(*(long *)pWVar15 + 0x60))(pWVar15,local_c0);
        std::vector<LevelEditorCardPlant*,std::allocator<LevelEditorCardPlant*>>::push_back
                  ((vector<LevelEditorCardPlant*,std::allocator<LevelEditorCardPlant*>> *)
                   (this + 0x110),(LevelEditorCardPlant **)&local_c0);
        uVar29 = local_78._4_4_ + local_6c;
      }
      uVar27 = uVar27 + 1;
      lVar17 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_c8);
      uVar20 = FUN_04b2d884(*(undefined8 *)(lVar17 + 0x60),*(undefined8 *)(lVar17 + 0x68));
    } while (uVar27 < uVar20);
  }
  plVar26 = *(long **)(this + 0x108);
  *(uint *)(pWVar15 + 0x54) = uVar29;
  (**(code **)(*plVar26 + 0x60))(plVar26,pPVar16);
  (**(code **)(*(long *)pPVar16 + 0x60))(pPVar16,pWVar15);
  TodStringTranslate(L"[LEVEL_EDITOR_SELECT_RARE]");
  this_02 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(this_02,(wstring *)&local_40);
  FUN_05476c50((Iterator *)&local_40);
  uVar3 = FUN_04b334ec(0x87);
  uVar4 = FUN_04b334ec(0x28);
  (**(code **)(*(long *)this_02 + 0x198))(this_02,0,0,uVar3,uVar4);
  UIWidgetText::SetFontIndex(this_02,5);
  pcVar28 = *(code **)(*(long *)this_02 + 0x170);
  Sexy::Color::Color((Color *)&local_40,0x66,0x37,0);
  (*pcVar28)(this_02,0,(Iterator *)&local_40);
  FUN_04b2dcbc(this_02 + 0xe0);
  (**(code **)(**(long **)(this + 0x108) + 0x60))(*(long **)(this + 0x108),this_02);
  iVar9 = 0;
  local_40 = this;
  local_38 = iVar7;
  local_34 = iVar7;
  local_30 = iVar7;
  iStack_2c = iVar8;
  local_28 = uVar12;
  local_20 = pWVar15;
  local_18 = pPVar16;
  do {
    pLVar23 = ::operator_new(0x100);
    LevelEditorPlantRare::LevelEditorPlantRare(pLVar23);
    local_78 = pLVar23;
    iVar7 = FUN_04b334ec(0x8c);
    iVar8 = FUN_04b334ec(0x1e);
    uVar3 = FUN_04b334ec(2);
    uVar4 = FUN_04b334ec(0x19);
    (**(code **)(*(long *)pLVar23 + 0x198))(pLVar23,iVar7 + iVar8 * iVar9,uVar3,uVar4,iVar8);
    iVar7 = iVar9 + 1;
    FUN_04b2d7f4(local_78 + 0xd8,iVar9);
    pLVar23 = local_78;
    uStack_f8 = CONCAT44(local_34,local_38);
    local_f0 = CONCAT44(iStack_2c,local_30);
    uStack_e8 = CONCAT44(uStack_24,local_28);
    local_e0 = local_20;
    pPStack_d8 = local_18;
    local_100 = local_40;
    FUN_04b32618((function<bool(Sexy::Touch_const&)> *)afStack_98,&local_100);
    LevelEditorPlantRare::SetCallBack(pLVar23,(function<bool(Sexy::Touch_const&)> *)afStack_98);
    std::function<bool(Sexy::Touch_const&)>::~function
              ((function<bool(Sexy::Touch_const&)> *)afStack_98);
    (**(code **)(**(long **)(this + 0x108) + 0x60))(*(long **)(this + 0x108),local_78);
    std::vector<LevelEditorPlantRare*,std::allocator<LevelEditorPlantRare*>>::push_back
              ((vector<LevelEditorPlantRare*,std::allocator<LevelEditorPlantRare*>> *)(this + 0x128)
               ,(LevelEditorPlantRare **)&local_78);
    iVar9 = iVar7;
  } while (iVar7 != 5);
  (**(code **)(*(long *)this + 0x310))(this,0xd);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_c8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_d0);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

