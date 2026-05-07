// Class: UIArtifactBoostDetails


/* UIArtifactBoostDetails::ScrollTargetReached(Sexy::ScrollWidget*) */

void UIArtifactBoostDetails::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIArtifactBoostDetails::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
UIArtifactBoostDetails::ScrollTargetReached(UIArtifactBoostDetails *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UIArtifactBoostDetails::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UIArtifactBoostDetails::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIArtifactBoostDetails::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
UIArtifactBoostDetails::ScrollTargetInterrupted(UIArtifactBoostDetails *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIArtifactBoostDetails::GetLayoutName() */

void __thiscall UIArtifactBoostDetails::GetLayoutName(UIArtifactBoostDetails *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIArtifactBoostDetails");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIArtifactBoostDetails::~UIArtifactBoostDetails() */

void __thiscall UIArtifactBoostDetails::~UIArtifactBoostDetails(UIArtifactBoostDetails *this)

{
  *(undefined ***)this = &PTR_GetClass_06697940;
  *(undefined **)(this + 0xd8) = &DAT_06697ca0;
  *(undefined ***)(this + 0x138) = &PTR__UIArtifactBoostDetails_06697ce8;
  UISingletonDialog<UIArtifactBoostDetails>::~UISingletonDialog
            ((UISingletonDialog<UIArtifactBoostDetails> *)this);
  return;
}


/* non-virtual thunk to UIArtifactBoostDetails::~UIArtifactBoostDetails() */

void __thiscall UIArtifactBoostDetails::~UIArtifactBoostDetails(UIArtifactBoostDetails *this)

{
  ~UIArtifactBoostDetails(this + -0x138);
  return;
}


/* UIArtifactBoostDetails::~UIArtifactBoostDetails() */

void __thiscall UIArtifactBoostDetails::~UIArtifactBoostDetails(UIArtifactBoostDetails *this)

{
  ~UIArtifactBoostDetails(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIArtifactBoostDetails::~UIArtifactBoostDetails() */

void __thiscall UIArtifactBoostDetails::~UIArtifactBoostDetails(UIArtifactBoostDetails *this)

{
  ~UIArtifactBoostDetails(this + -0x138);
  return;
}


/* UIArtifactBoostDetails::ButtonDepress(int) */

void __thiscall UIArtifactBoostDetails::ButtonDepress(UIArtifactBoostDetails *this,int param_1)

{
  if (param_1 != 0x58) {
    return;
  }
  UISingletonDialog<UIArtifactBoostDetails>::CloseDialog();
  return;
}


/* non-virtual thunk to UIArtifactBoostDetails::ButtonDepress(int) */

void __thiscall UIArtifactBoostDetails::ButtonDepress(UIArtifactBoostDetails *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIArtifactBoostDetails::InitView(int) */

void __thiscall UIArtifactBoostDetails::InitView(UIArtifactBoostDetails *this,int param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long lVar10;
  UIWidgetImage *pUVar11;
  UIWidgetText *pUVar12;
  ArtifactSkillButtonUI *this_00;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  PVZ2UIScrollingWidget *this_01;
  Widget *this_02;
  UIWidgetImage *this_03;
  Image *pIVar17;
  CurrentArtifactBoostInfo *pCVar18;
  undefined8 uVar19;
  code *pcVar20;
  ulong uVar21;
  undefined1 auVar22 [16];
  RtMixedPtr<Sexy::Image> aRStack_70 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_68 [8];
  string asStack_60 [8];
  undefined8 local_58 [2];
  undefined8 local_48 [2];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ArtifactUtils::GetArtifactPropertyPtr(param_1);
  cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!(aRStack_70);
  if (cVar2 == '\0') {
    uVar21 = 0;
    lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)(lVar10 + 0xd8));
    std::string::string((string *)&local_20,"UIImage_Artifact");
    pUVar11 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_20);
    std::string::~string((string *)&local_20);
    nop();
    auVar22 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    Sexy::StringToUpper((Sexy *)(auVar22._0_8_ + 0x10),auVar22._8_8_);
    std::operator+("IMAGE_UI_ARTIFACT_",(string *)&local_38);
    UIWidgetImage::SetImage(pUVar11,(string *)&local_20);
    std::string::~string((string *)&local_20);
    std::string::~string((string *)&local_38);
    std::string::string((string *)&local_20,"UIText_ArtifactName");
    pUVar12 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_20);
    std::string::~string((string *)&local_20);
    nop();
    auVar22 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    Sexy::StringToUpper((Sexy *)(auVar22._0_8_ + 0x10),auVar22._8_8_);
    std::operator+("[",asStack_60);
    std::operator+((string *)local_58,"]");
    Sexy::ToWString((string *)local_48);
    TodStringTranslate((wstring *)&local_38);
    PuzzleTip::SetTip(pUVar12,(string *)&local_20);
    FUN_05476c50((string *)&local_20);
    FUN_05476c50((string *)&local_38);
    std::string::~string((string *)local_48);
    std::string::~string((string *)local_58);
    std::string::~string(asStack_60);
    lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    lVar10 = FUN_037ac57c(*(undefined8 *)(lVar10 + 0x10),*(undefined8 *)(lVar10 + 0x18));
    if (lVar10 != 0) {
      do {
        uVar1 = (int)uVar21 + 1;
        Sexy::StrFormat("UIImage_SkillImage%d",(string *)&local_20,(ulong)uVar1);
        pUVar11 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_20);
        std::string::~string((string *)&local_20);
        if (pUVar11 != (UIWidgetImage *)0x0) {
          (**(code **)(*(long *)pUVar11 + 0x80))(pUVar11,1,1);
          this_00 = ::operator_new(0x118);
          ArtifactSkillButtonUI::ArtifactSkillButtonUI(this_00);
          (**(code **)(*(long *)this_00 + 0x198))
                    (this_00,0,0,*(undefined4 *)(pUVar11 + 0x50),*(undefined4 *)(pUVar11 + 0x54));
          ArtifactSkillButtonUI::SetContent(this_00,param_1,uVar1);
          (**(code **)(*(long *)pUVar11 + 0x60))(pUVar11,this_00);
        }
        Sexy::StrFormat("UIText_SkillDes%d",(string *)&local_20,(ulong)uVar1);
        pUVar12 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_20);
        std::string::~string((string *)&local_20);
        if (pUVar12 != (UIWidgetText *)0x0) {
          lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
          lVar10 = FUN_037ac56c(*(undefined8 *)(lVar10 + 0x10),uVar21);
          Sexy::ToWString((string *)(lVar10 + 0x48));
          TodStringTranslate((wstring *)&local_38);
          PuzzleTip::SetTip(pUVar12,(string *)&local_20);
          FUN_05476c50((string *)&local_20);
          FUN_05476c50((string *)&local_38);
        }
        uVar21 = uVar21 + 1;
        lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
        uVar13 = FUN_037ac57c(*(undefined8 *)(lVar10 + 0x10),*(undefined8 *)(lVar10 + 0x18));
      } while (uVar21 < uVar13);
    }
    iVar4 = Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    ArtifactMgr::GetCurrentBoostInfo(iVar4,SUB41(param_1,0));
    lVar10 = FUN_037ac5f0(local_38,local_30);
    if (lVar10 != 0) {
      std::string::string((string *)&local_20,"UIImage_BoostFirst");
      pUVar11 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_20);
      std::string::~string((string *)&local_20);
      nop();
      lVar10 = FUN_037ac5fc(local_38,0);
      pIVar17 = (Image *)convertTypeToTypeIcon(*(int *)(lVar10 + 0x10));
      UIWidgetImage::SetImage(pUVar11,pIVar17);
      std::string::string((string *)&local_20,"UIText_BoostFirst");
      pUVar12 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_20);
      std::string::~string((string *)&local_20);
      nop();
      pCVar18 = (CurrentArtifactBoostInfo *)FUN_037ac5fc(local_38,0);
      convertStringValueByBoostInfo(pCVar18);
      PuzzleTip::SetTip(pUVar12,(string *)&local_20);
      FUN_05476c50((string *)&local_20);
      uVar21 = FUN_037ac5f0(local_38,local_30);
      if (1 < uVar21) {
        std::string::string((string *)&local_20,"UIImage_BoostSecond");
        pUVar11 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_20);
        std::string::~string((string *)&local_20);
        nop();
        lVar10 = FUN_037ac5fc(local_38,1);
        pIVar17 = (Image *)convertTypeToTypeIcon(*(int *)(lVar10 + 0x10));
        UIWidgetImage::SetImage(pUVar11,pIVar17);
        std::string::string((string *)&local_20,"UIText_BoostSecond");
        pUVar12 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_20);
        std::string::~string((string *)&local_20);
        nop();
        pCVar18 = (CurrentArtifactBoostInfo *)FUN_037ac5fc(local_38,1);
        convertStringValueByBoostInfo(pCVar18);
        PuzzleTip::SetTip(pUVar12,(string *)&local_20);
        FUN_05476c50((string *)&local_20);
      }
    }
    iVar4 = Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    ArtifactMgr::GetCurrentGlobalBoostInfo(iVar4);
    local_58[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)&local_20);
LAB_037b58f4:
    local_48[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)&local_20);
    bVar3 = __gnu_cxx::operator!=((__normal_iterator *)local_58,(__normal_iterator *)local_48);
    if (bVar3) {
      do {
        uVar19 = local_38;
        lVar10 = 0;
        lVar14 = FUN_037ac5f0(local_38,local_30);
        if (lVar14 != 0) {
          do {
            lVar15 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_58);
            lVar16 = FUN_037ac5fc(uVar19,lVar10);
            if (((*(int *)(lVar15 + 0x18) == *(int *)(lVar16 + 0x18)) &&
                (*(int *)(lVar15 + 0x14) == *(int *)(lVar16 + 0x14))) &&
               (*(int *)(lVar15 + 0x10) == *(int *)(lVar16 + 0x10))) {
              __gnu_cxx::
              __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              ::__normal_iterator<Sexy::RenderStateManager::Context**>
                        ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                          *)local_48,(__normal_iterator *)local_58);
              local_58[0] = std::
                            vector<CurrentArtifactBoostInfo,std::allocator<CurrentArtifactBoostInfo>>
                            ::erase((vector<CurrentArtifactBoostInfo,std::allocator<CurrentArtifactBoostInfo>>
                                     *)&local_20,local_48[0]);
              goto LAB_037b58f4;
            }
            lVar10 = lVar10 + 1;
          } while (lVar10 != lVar14);
        }
        FUN_037aeafc((string *)local_58);
        local_48[0] = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)&local_20);
        bVar3 = __gnu_cxx::operator!=((__normal_iterator *)local_58,(__normal_iterator *)local_48);
      } while (bVar3);
    }
    std::string::string((string *)local_48,"UIImage_Outer");
    pUVar11 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)local_48);
    std::string::~string((string *)local_48);
    nop();
    this_01 = ::operator_new(0x248);
    PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_01,(ScrollWidgetListener *)(this + 0x138));
    this_02 = ::operator_new(0xd8);
    Sexy::Widget::Widget(this_02);
    iVar4 = FUN_037ad3c8(0);
    iVar5 = FUN_037ad3c8(200);
    iVar6 = FUN_037ad3c8(0xe6);
    Sexy::Insets::Insets((Insets *)local_58,iVar4,iVar5,*(int *)(pUVar11 + 0x50),iVar6);
    (**(code **)(*(long *)this_01 + 0x1a0))(this_01,(string *)local_58);
    Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_01,2);
    (**(code **)(*(long *)this_02 + 0x1a0))(this_02,(string *)local_58);
    uVar21 = 0;
    while( true ) {
      uVar13 = FUN_037ac5f0(local_20,local_18);
      if (uVar13 <= uVar21) break;
      this_03 = ::operator_new(0x118);
      UIWidgetImage::UIWidgetImage(this_03);
      lVar10 = FUN_037ac5fc(local_20,uVar21);
      pIVar17 = (Image *)convertTypeToTypeIcon(*(int *)(lVar10 + 0x10));
      UIWidgetImage::SetImage(this_03,pIVar17);
      local_48[0] = CONCAT44(local_48[0]._4_4_,2);
      UIWidgetImage::SetImageType(this_03,(string *)local_48,0.0);
      uVar7 = FUN_037ad3c8(0x50);
      iVar4 = FUN_037ad3c8(0x37);
      uVar8 = FUN_037ad3c8(0x28);
      (**(code **)(*(long *)this_03 + 0x198))(this_03,uVar7,iVar4 * (int)uVar21,uVar8,uVar8);
      (**(code **)(*(long *)this_02 + 0x60))(this_02,this_03);
      pCVar18 = (CurrentArtifactBoostInfo *)FUN_037ac5fc(local_20,uVar21);
      convertStringValueByBoostInfo(pCVar18);
      pUVar12 = ::operator_new(0x108);
      UIWidgetText::UIWidgetText(pUVar12,(wstring *)asStack_60);
      uVar19 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
      FUN_037ac55c(pUVar12 + 0xe8,uVar19);
      FUN_037ac564(pUVar12 + 0xe0,3);
      pcVar20 = *(code **)(*(long *)pUVar12 + 0x170);
      Sexy::Color::Color((Color *)local_48,0xff,0,0);
      (*pcVar20)(pUVar12,0,(string *)local_48);
      uVar7 = FUN_037ad3c8(0x8c);
      iVar4 = FUN_037ad3c8(0x37);
      uVar8 = FUN_037ad3c8(0xb4);
      uVar9 = FUN_037ad3c8(0x28);
      (**(code **)(*(long *)pUVar12 + 0x198))(pUVar12,uVar7,iVar4 * (int)uVar21,uVar8,uVar9);
      (**(code **)(*(long *)this_02 + 0x60))(this_02,pUVar12);
      FUN_05476c50(asStack_60);
      uVar21 = uVar21 + 1;
    }
    iVar4 = FUN_037ad3c8(0x37);
    pcVar20 = *(code **)(*(long *)pUVar11 + 0x60);
    *(int *)(this_02 + 0x54) = iVar4 * (int)uVar13;
    (*pcVar20)(pUVar11,this_01);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
    std::vector<CurrentArtifactBoostInfo,std::allocator<CurrentArtifactBoostInfo>>::~vector
              ((vector<CurrentArtifactBoostInfo,std::allocator<CurrentArtifactBoostInfo>> *)
               &local_20);
    std::vector<CurrentArtifactBoostInfo,std::allocator<CurrentArtifactBoostInfo>>::~vector
              ((vector<CurrentArtifactBoostInfo,std::allocator<CurrentArtifactBoostInfo>> *)
               &local_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  }
  else {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIArtifactBoostDetails::UIArtifactBoostDetails() */

void __thiscall UIArtifactBoostDetails::UIArtifactBoostDetails(UIArtifactBoostDetails *this)

{
  UISingletonDialog<UIArtifactBoostDetails>::UISingletonDialog
            ((UISingletonDialog<UIArtifactBoostDetails> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_06697940;
  *(undefined **)(this + 0xd8) = &DAT_06697ca0;
  *(undefined ***)(this + 0x138) = &PTR__UIArtifactBoostDetails_06697ce8;
  return;
}

