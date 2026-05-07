// Class: UIArtifactBoostPreview


/* UIArtifactBoostPreview::ScrollTargetReached(Sexy::ScrollWidget*) */

void UIArtifactBoostPreview::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIArtifactBoostPreview::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
UIArtifactBoostPreview::ScrollTargetReached(UIArtifactBoostPreview *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UIArtifactBoostPreview::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UIArtifactBoostPreview::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIArtifactBoostPreview::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
UIArtifactBoostPreview::ScrollTargetInterrupted(UIArtifactBoostPreview *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIArtifactBoostPreview::GetLayoutName() */

void __thiscall UIArtifactBoostPreview::GetLayoutName(UIArtifactBoostPreview *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIArtifactBoostPreview");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIArtifactBoostPreview::~UIArtifactBoostPreview() */

void __thiscall UIArtifactBoostPreview::~UIArtifactBoostPreview(UIArtifactBoostPreview *this)

{
  *(undefined ***)this = &PTR_GetClass_06697d30;
  *(undefined **)(this + 0xd8) = &DAT_06698090;
  *(undefined ***)(this + 0x138) = &PTR__UIArtifactBoostPreview_066980d8;
  UISingletonDialog<UIArtifactBoostPreview>::~UISingletonDialog
            ((UISingletonDialog<UIArtifactBoostPreview> *)this);
  return;
}


/* non-virtual thunk to UIArtifactBoostPreview::~UIArtifactBoostPreview() */

void __thiscall UIArtifactBoostPreview::~UIArtifactBoostPreview(UIArtifactBoostPreview *this)

{
  ~UIArtifactBoostPreview(this + -0x138);
  return;
}


/* UIArtifactBoostPreview::~UIArtifactBoostPreview() */

void __thiscall UIArtifactBoostPreview::~UIArtifactBoostPreview(UIArtifactBoostPreview *this)

{
  ~UIArtifactBoostPreview(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIArtifactBoostPreview::~UIArtifactBoostPreview() */

void __thiscall UIArtifactBoostPreview::~UIArtifactBoostPreview(UIArtifactBoostPreview *this)

{
  ~UIArtifactBoostPreview(this + -0x138);
  return;
}


/* UIArtifactBoostPreview::ButtonDepress(int) */

void __thiscall UIArtifactBoostPreview::ButtonDepress(UIArtifactBoostPreview *this,int param_1)

{
  if (param_1 != 0x58) {
    return;
  }
  UISingletonDialog<UIArtifactBoostPreview>::CloseDialog();
  return;
}


/* non-virtual thunk to UIArtifactBoostPreview::ButtonDepress(int) */

void __thiscall UIArtifactBoostPreview::ButtonDepress(UIArtifactBoostPreview *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* UIArtifactBoostPreview::UIArtifactBoostPreview() */

void __thiscall UIArtifactBoostPreview::UIArtifactBoostPreview(UIArtifactBoostPreview *this)

{
  UISingletonDialog<UIArtifactBoostPreview>::UISingletonDialog
            ((UISingletonDialog<UIArtifactBoostPreview> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_06697d30;
  *(undefined **)(this + 0xd8) = &DAT_06698090;
  *(undefined ***)(this + 0x138) = &PTR__UIArtifactBoostPreview_066980d8;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIArtifactBoostPreview::InitView(int) */

void __thiscall UIArtifactBoostPreview::InitView(UIArtifactBoostPreview *this,int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  UIWidgetImage *pUVar12;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  UIWidgetImage *this_02;
  Image *pIVar13;
  CurrentArtifactBoostInfo *pCVar14;
  UIWidgetText *pUVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  code *pcVar19;
  wstring awStack_60 [8];
  undefined8 local_58 [2];
  undefined8 local_48 [2];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  ArtifactMgr::GetCurrentBoostInfo(iVar2,SUB41(param_1,0));
  lVar8 = FUN_037ac5f0(local_38,local_30);
  if (lVar8 != 0) {
    std::string::string((string *)&local_20,"UIImage_BoostFirst");
    pUVar12 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_20);
    std::string::~string((string *)&local_20);
    nop();
    lVar8 = FUN_037ac5fc(local_38,0);
    pIVar13 = (Image *)convertTypeToTypeIcon(*(int *)(lVar8 + 0x10));
    UIWidgetImage::SetImage(pUVar12,pIVar13);
    std::string::string((string *)&local_20,"UIText_BoostFirst");
    pUVar15 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_20);
    std::string::~string((string *)&local_20);
    nop();
    pCVar14 = (CurrentArtifactBoostInfo *)FUN_037ac5fc(local_38,0);
    convertStringValueByBoostInfo(pCVar14);
    PuzzleTip::SetTip(pUVar15,(vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                               *)&local_20);
    FUN_05476c50((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)&local_20);
    uVar18 = FUN_037ac5f0(local_38,local_30);
    if (1 < uVar18) {
      std::string::string((string *)&local_20,"UIImage_BoostSecond");
      pUVar12 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_20);
      std::string::~string((string *)&local_20);
      nop();
      lVar8 = FUN_037ac5fc(local_38,1);
      pIVar13 = (Image *)convertTypeToTypeIcon(*(int *)(lVar8 + 0x10));
      UIWidgetImage::SetImage(pUVar12,pIVar13);
      std::string::string((string *)&local_20,"UIText_BoostSecond");
      pUVar15 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_20);
      std::string::~string((string *)&local_20);
      nop();
      pCVar14 = (CurrentArtifactBoostInfo *)FUN_037ac5fc(local_38,1);
      convertStringValueByBoostInfo(pCVar14);
      PuzzleTip::SetTip(pUVar15,(vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                 *)&local_20);
      FUN_05476c50((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_20);
    }
  }
  iVar2 = Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  ArtifactMgr::GetCurrentGlobalBoostInfo(iVar2);
  local_58[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)&local_20);
LAB_037b5f1c:
  local_48[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)&local_20);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)local_58,(__normal_iterator *)local_48);
  if (bVar1) {
    do {
      uVar16 = local_38;
      lVar8 = 0;
      lVar9 = FUN_037ac5f0(local_38,local_30);
      if (lVar9 != 0) {
        do {
          lVar10 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_58);
          lVar11 = FUN_037ac5fc(uVar16,lVar8);
          if (((*(int *)(lVar10 + 0x18) == *(int *)(lVar11 + 0x18)) &&
              (*(int *)(lVar10 + 0x14) == *(int *)(lVar11 + 0x14))) &&
             (*(int *)(lVar10 + 0x10) == *(int *)(lVar11 + 0x10))) {
            __gnu_cxx::
            __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
            ::__normal_iterator<Sexy::RenderStateManager::Context**>
                      ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                        *)local_48,(__normal_iterator *)local_58);
            local_58[0] = std::
                          vector<CurrentArtifactBoostInfo,std::allocator<CurrentArtifactBoostInfo>>
                          ::erase((vector<CurrentArtifactBoostInfo,std::allocator<CurrentArtifactBoostInfo>>
                                   *)&local_20,local_48[0]);
            goto LAB_037b5f1c;
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 != lVar9);
      }
      FUN_037aeafc((__normal_iterator *)local_58);
      local_48[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)&local_20);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)local_58,(__normal_iterator *)local_48);
    } while (bVar1);
  }
  std::string::string((string *)local_48,"UIImage_Outer");
  pUVar12 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)local_48);
  std::string::~string((string *)local_48);
  nop();
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  iVar2 = FUN_037ad3c8(0);
  iVar3 = FUN_037ad3c8(200);
  iVar4 = FUN_037ad3c8(0xe6);
  Sexy::Insets::Insets((Insets *)local_58,iVar2,iVar3,*(int *)(pUVar12 + 0x50),iVar4);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,(__normal_iterator *)local_58);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  (**(code **)(*(long *)this_01 + 0x1a0))(this_01,(__normal_iterator *)local_58);
  uVar18 = 0;
  while( true ) {
    uVar17 = FUN_037ac5f0(local_20,local_18);
    if (uVar17 <= uVar18) break;
    this_02 = ::operator_new(0x118);
    UIWidgetImage::UIWidgetImage(this_02);
    lVar8 = FUN_037ac5fc(local_20,uVar18);
    pIVar13 = (Image *)convertTypeToTypeIcon(*(int *)(lVar8 + 0x10));
    UIWidgetImage::SetImage(this_02,pIVar13);
    local_48[0] = CONCAT44(local_48[0]._4_4_,2);
    UIWidgetImage::SetImageType(this_02,(string *)local_48,0.0);
    uVar5 = FUN_037ad3c8(0x50);
    iVar2 = FUN_037ad3c8(0x37);
    uVar6 = FUN_037ad3c8(0x28);
    (**(code **)(*(long *)this_02 + 0x198))(this_02,uVar5,iVar2 * (int)uVar18,uVar6,uVar6);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
    pCVar14 = (CurrentArtifactBoostInfo *)FUN_037ac5fc(local_20,uVar18);
    convertStringValueByBoostInfo(pCVar14);
    pUVar15 = ::operator_new(0x108);
    UIWidgetText::UIWidgetText(pUVar15,awStack_60);
    uVar16 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
    FUN_037ac55c(pUVar15 + 0xe8,uVar16);
    FUN_037ac564(pUVar15 + 0xe0,3);
    pcVar19 = *(code **)(*(long *)pUVar15 + 0x170);
    Sexy::Color::Color((Color *)local_48,0xff,0,0);
    (*pcVar19)(pUVar15,0,(string *)local_48);
    uVar5 = FUN_037ad3c8(0x8c);
    iVar2 = FUN_037ad3c8(0x37);
    uVar6 = FUN_037ad3c8(0xb4);
    uVar7 = FUN_037ad3c8(0x28);
    (**(code **)(*(long *)pUVar15 + 0x198))(pUVar15,uVar5,iVar2 * (int)uVar18,uVar6,uVar7);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,pUVar15);
    FUN_05476c50(awStack_60);
    uVar18 = uVar18 + 1;
  }
  iVar2 = FUN_037ad3c8(0x37);
  pcVar19 = *(code **)(*(long *)pUVar12 + 0x60);
  *(int *)(this_01 + 0x54) = iVar2 * (int)uVar17;
  (*pcVar19)(pUVar12,this_00);
  (**(code **)(*(long *)this_00 + 0x60))(this_00,this_01);
  std::vector<CurrentArtifactBoostInfo,std::allocator<CurrentArtifactBoostInfo>>::~vector
            ((vector<CurrentArtifactBoostInfo,std::allocator<CurrentArtifactBoostInfo>> *)&local_20)
  ;
  std::vector<CurrentArtifactBoostInfo,std::allocator<CurrentArtifactBoostInfo>>::~vector
            ((vector<CurrentArtifactBoostInfo,std::allocator<CurrentArtifactBoostInfo>> *)&local_38)
  ;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

