// Class: UIArtifactPresentScrollPanel


/* UIArtifactPresentScrollPanel::ButtonPress(int) */

int UIArtifactPresentScrollPanel::ButtonPress(int param_1)

{
  return param_1;
}


/* non-virtual thunk to UIArtifactPresentScrollPanel::ButtonPress(int) */

void __thiscall
UIArtifactPresentScrollPanel::ButtonPress(UIArtifactPresentScrollPanel *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIArtifactPresentScrollPanel::GetLayoutName() */

void __thiscall UIArtifactPresentScrollPanel::GetLayoutName(UIArtifactPresentScrollPanel *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIArtifactPresentScrollPanel");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIArtifactPresentScrollPanel::~UIArtifactPresentScrollPanel() */

void __thiscall
UIArtifactPresentScrollPanel::~UIArtifactPresentScrollPanel(UIArtifactPresentScrollPanel *this)

{
  *(undefined ***)this = &PTR_GetClass_0677a6a0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0677a9f0;
  UISingletonDialog<UIArtifactPresentScrollPanel>::~UISingletonDialog
            ((UISingletonDialog<UIArtifactPresentScrollPanel> *)this);
  return;
}


/* UIArtifactPresentScrollPanel::~UIArtifactPresentScrollPanel() */

void __thiscall
UIArtifactPresentScrollPanel::~UIArtifactPresentScrollPanel(UIArtifactPresentScrollPanel *this)

{
  ~UIArtifactPresentScrollPanel(this);
  AK::FreeHook(this);
  return;
}


/* UIArtifactPresentScrollPanel::AddButton(Sexy::Widget*, int, std::string const&, std::string
   const&, int, int, int, int, Sexy::ButtonListener*) */

NewerPresentButton * __thiscall
UIArtifactPresentScrollPanel::AddButton
          (UIArtifactPresentScrollPanel *this,Widget *param_1,int param_2,string *param_3,
          string *param_4,int param_5,int param_6,int param_7,int param_8,ButtonListener *param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  NewerPresentButton *this_00;
  
  this_00 = ::operator_new(0x310);
  NewerPresentButton::NewerPresentButton(this_00,param_2,param_3,param_4,param_9);
  uVar1 = FUN_03dc5288(param_5);
  uVar2 = FUN_03dc5288(param_6);
  uVar3 = FUN_03dc5288(param_7);
  uVar4 = FUN_03dc5288(param_8);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar1,uVar2,uVar3,uVar4);
  (**(code **)(*(long *)param_1 + 0x60))(param_1,this_00);
  return this_00;
}


/* UIArtifactPresentScrollPanel::AddImage(Sexy::Widget*, std::string const&, int, int, int, int) */

NewerPresentImage * __thiscall
UIArtifactPresentScrollPanel::AddImage
          (UIArtifactPresentScrollPanel *this,Widget *param_1,string *param_2,int param_3,
          int param_4,int param_5,int param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  NewerPresentImage *this_00;
  
  this_00 = ::operator_new(0x128);
  NewerPresentImage::NewerPresentImage(this_00,param_2);
  (**(code **)(*(long *)this_00 + 0x90))(this_00,1);
  uVar1 = FUN_03dc5288(param_3);
  uVar2 = FUN_03dc5288(param_4);
  uVar3 = FUN_03dc5288(param_5);
  uVar4 = FUN_03dc5288(param_6);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar1,uVar2,uVar3,uVar4);
  (**(code **)(*(long *)param_1 + 0x60))(param_1,this_00);
  return this_00;
}


/* UIArtifactPresentScrollPanel::AddImage(Sexy::Widget*, std::string const&, int, int) */

NewerPresentImage * __thiscall
UIArtifactPresentScrollPanel::AddImage
          (UIArtifactPresentScrollPanel *this,Widget *param_1,string *param_2,int param_3,
          int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  NewerPresentImage *this_00;
  
  this_00 = ::operator_new(0x128);
  NewerPresentImage::NewerPresentImage(this_00,param_2);
  (**(code **)(*(long *)this_00 + 0x90))(this_00,1);
  uVar1 = FUN_03dc5288(param_3);
  uVar2 = FUN_03dc5288(param_4);
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,uVar1,uVar2,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
  (**(code **)(*(long *)param_1 + 0x60))(param_1,this_00);
  return this_00;
}


/* UIArtifactPresentScrollPanel::AddText(Sexy::Widget*, std::wstring const&, int, int, int, int) */

NewerPresentText * __thiscall
UIArtifactPresentScrollPanel::AddText
          (UIArtifactPresentScrollPanel *this,Widget *param_1,wstring *param_2,int param_3,
          int param_4,int param_5,int param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  NewerPresentText *this_00;
  
  this_00 = ::operator_new(0x100);
  NewerPresentText::NewerPresentText(this_00,param_2);
  (**(code **)(*(long *)this_00 + 0x90))(this_00,1);
  uVar1 = FUN_03dc5288(param_3);
  uVar2 = FUN_03dc5288(param_4);
  uVar3 = FUN_03dc5288(param_5);
  uVar4 = FUN_03dc5288(param_6);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar1,uVar2,uVar3,uVar4);
  (**(code **)(*(long *)param_1 + 0x60))(param_1,this_00);
  return this_00;
}


/* UIArtifactPresentScrollPanel::UIArtifactPresentScrollPanel() */

void __thiscall
UIArtifactPresentScrollPanel::UIArtifactPresentScrollPanel(UIArtifactPresentScrollPanel *this)

{
  UISingletonDialog<UIArtifactPresentScrollPanel>::UISingletonDialog
            ((UISingletonDialog<UIArtifactPresentScrollPanel> *)this);
  *(undefined ***)this = &PTR_GetClass_0677a6a0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0677a9f0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIArtifactPresentScrollPanel::UpdateUI(PVZ2UIScrollingWidget*) */

void __thiscall
UIArtifactPresentScrollPanel::UpdateUI
          (UIArtifactPresentScrollPanel *this,PVZ2UIScrollingWidget *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  ArtifactPresentMgr *this_02;
  Widget *pWVar10;
  ulong uVar11;
  uint *puVar12;
  Widget *pWVar13;
  CUIButton *this_03;
  undefined8 uVar14;
  NameMapperBase *this_04;
  Widget *pWVar15;
  CUILabel *pCVar16;
  undefined8 local_88;
  undefined8 local_80;
  string asStack_78 [8];
  undefined1 auStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [16];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_50 [24];
  string asStack_38 [32];
  int local_18;
  uint local_14;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  this_02 = (ArtifactPresentMgr *)Sexy::LazySingleton<ArtifactPresentMgr>::GetInstance();
  DAT_06ada4d0 = ArtifactPresentMgr::GetNumPresents(this_02);
  std::string::string(asStack_38,"UIImage_BG");
  pWVar10 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,asStack_38);
  std::string::~string(asStack_38);
  nop();
  (**(code **)(*(long *)pWVar10 + 0x80))(pWVar10,1,1);
  Sexy::LazySingleton<ArtifactPresentMgr>::GetInstance();
  ArtifactPresentMgr::GetServerIdList();
  local_88 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_50);
  local_80 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_50);
  iVar7 = 0;
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_88,(__normal_iterator *)&local_80);
    if (!bVar1) {
      uVar8 = FUN_03dc5288(iVar7 * 200 + 10);
      *(undefined4 *)(this + 0x50) = uVar8;
      Sexy::ScrollWidget::ClientSizeChanged((ScrollWidget *)param_1);
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_50);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    puVar12 = (uint *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_88);
    uVar9 = *puVar12;
    iVar3 = Sexy::LazySingleton<ArtifactPresentMgr>::GetInstance();
    iVar4 = uVar9 - 1;
    ArtifactPresentMgr::FindTargetPresent(iVar3);
    iVar3 = iVar7;
    if (local_c != 0) {
      iVar3 = iVar7 + 1;
      Sexy::StrFormat("IMAGE_UI_BUNDLE_ARTIFACT_PRESENT_PRESENT_%d",asStack_78,(ulong)uVar9);
      iVar5 = iVar7 * 200 + 10;
      pWVar13 = (Widget *)AddImage(this,pWVar10,asStack_78,iVar5,1,0xbc,0x172);
      cVar2 = FUN_0547419c(asStack_38);
      if (cVar2 == '\0') {
        this_03 = (CUIButton *)
                  AddButton(this,pWVar10,iVar4,asStack_78,asStack_78,iVar5,1,0xbc,0x172,
                            (ButtonListener *)(this + 0xd8));
        cVar2 = FUN_0547419c(asStack_38);
        if (cVar2 == '\0') goto LAB_03dc9f50;
LAB_03dc9bf4:
        if (local_18 == 0) goto LAB_03dc9f70;
        FUN_03dc4a90(pWVar13 + 0x126);
        cVar2 = FUN_0547419c(asStack_38);
        if (cVar2 == '\0') {
          std::string::string(asStack_60,"IMAGE_UI_BUNDLE_ARTIFACT_PRESENT_LINE");
          iVar4 = 0x13;
          pWVar13 = (Widget *)AddImage(this,(Widget *)this_03,asStack_60,0x13,0x11d,0x96,0x1d);
          std::string::~string(asStack_60);
          nop();
          iVar7 = Sexy::LazySingleton<ArtifactPresentMgr>::GetInstance();
          uVar11 = ArtifactPresentMgr::GetTargetPrice(iVar7);
          std::string::string(asStack_68,"[REAL_MONEY_FORMAT]");
          StringHelper::ReplaceNumberString
                    ((StringHelper *)asStack_68,(string *)L"{NUMBER}",
                     (wchar_t *)(uVar11 & 0xffffffff),iVar4);
          pCVar16 = (CUILabel *)AddText(this,pWVar13,(wstring *)asStack_60,0x14,2,100,0x28);
          FUN_05476c50(asStack_60);
          std::string::~string(asStack_68);
          nop();
          Lua::CUILabel::SetTypeface(pCVar16,PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline);
          Lua::CUILabel::SetTextColorPreDefined(pCVar16,1);
          Lua::CUILabel::SetHAlignment(pCVar16,1);
        }
      }
      else {
        std::string::string(asStack_68,"IMAGE_UI_GENERIC_LIGHT_BUTTON_GREEN");
        std::string::string(asStack_60,"IMAGE_UI_GENERIC_LIGHT_BUTTON_GREEN_DOWN");
        this_03 = (CUIButton *)
                  AddButton(this,pWVar10,iVar4,asStack_68,asStack_60,iVar7 * 200 + 0x2c,0x10f,0x78,
                            0x32,(ButtonListener *)(this + 0xd8));
        std::string::~string(asStack_60);
        nop();
        std::string::~string(asStack_68);
        nop();
        Lua::CUIButton::SetImageType(this_03,3);
        iVar4 = FUN_03dc5288(0);
        iVar5 = FUN_03dc5288(8);
        iVar7 = *(int *)(this_03 + 0x50);
        iVar6 = FUN_03dc5288(0x24);
        TodStringTranslate(L"[SECRET_BUY_STR]");
        Sexy::StrFormat(L"%d",asStack_60,(ulong)local_14);
        TodReplaceString((wstring *)asStack_68,L"{NUMBER}",(wstring *)asStack_60);
        FUN_05476c50(asStack_60);
        FUN_05476c50(asStack_68);
        Sexy::Insets::Insets((Insets *)asStack_60,iVar4,iVar5,iVar7,iVar6);
        uVar14 = PrimeText_PotentialTypeface::Typeface
                           (PrimeText_Game::Typeface_FZShaoEr_28_ThickOutline);
        PVZ2UIButton::AddText((PVZ2UIButton *)this_03,auStack_70,asStack_60,uVar14,0);
        FUN_05476c50(auStack_70);
        cVar2 = FUN_0547419c(asStack_38);
        if (cVar2 != '\0') goto LAB_03dc9bf4;
LAB_03dc9f50:
        this_04 = (NameMapperBase *)ArtifactMapper::GetInstance();
        iVar7 = NameMapperBase::GetIdForName(this_04,asStack_38);
        cVar2 = PlayerInfo::IsArtifactUnlocked(this_01,iVar7);
        if (cVar2 == '\0') goto LAB_03dc9bf4;
LAB_03dc9f70:
        FUN_03dc4a90(pWVar13 + 0x126,1);
        *(PVZ2UIButton *)(this_03 + 0x6d) = (PVZ2UIButton)0x0;
        (**(code **)(*(long *)this_03 + 0x188))(this_03,1);
        cVar2 = FUN_0547419c(asStack_38);
        if (cVar2 == '\0') {
          PVZ2UIButton::SetInvisible((PVZ2UIButton *)this_03,true);
          std::string::string(asStack_60,"IMAGE_UI_BUNDLE_ARTIFACT_PRESENT_LINE");
          pWVar15 = (Widget *)AddImage(this,pWVar13,asStack_60,0x13,0x11d,0x96,0x1d);
          std::string::~string(asStack_60);
          nop();
          iVar7 = Sexy::LazySingleton<ArtifactPresentMgr>::GetInstance();
          uVar9 = ArtifactPresentMgr::GetTargetPrice(iVar7);
          std::string::string(asStack_68,"[REAL_MONEY_FORMAT]");
          StringHelper::ReplaceNumberString
                    ((StringHelper *)asStack_68,(string *)L"{NUMBER}",(wchar_t *)(ulong)uVar9,uVar9)
          ;
          pCVar16 = (CUILabel *)AddText(this,pWVar15,(wstring *)asStack_60,0x14,2,100,0x28);
          FUN_05476c50(asStack_60);
          std::string::~string(asStack_68);
          nop();
          Lua::CUILabel::SetTypeface(pCVar16,PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline);
          Lua::CUILabel::SetTextColorPreDefined(pCVar16,1);
          Lua::CUILabel::SetHAlignment(pCVar16,1);
        }
        std::string::string(asStack_60,"IMAGE_UI_BUNDLE_ARTIFACT_PRESENT_GRAY_MASK");
        pWVar13 = (Widget *)AddImage(this,pWVar13,asStack_60,0,0,0xbc,0x16d);
        std::string::~string(asStack_60);
        nop();
        std::string::string(asStack_60,"IMAGE_UI_BUNDLE_ARTIFACT_PRESENT_BUY_ALREADY");
        AddImage(this,pWVar13,asStack_60,0x44,0x82);
        std::string::~string(asStack_60);
        nop();
        std::string::string(asStack_60,"IMAGE_UI_BUNDLE_ARTIFACT_PRESENT_BUY_ALREADY_TEXT");
        AddImage(this,pWVar13,asStack_60,0x3c,200);
        std::string::~string(asStack_60);
        nop();
      }
      std::string::~string(asStack_78);
    }
    ArtifactPresentDetail::~ArtifactPresentDetail((ArtifactPresentDetail *)asStack_38);
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_88);
    iVar7 = iVar3;
  } while( true );
}


/* UIArtifactPresentScrollPanel::ButtonDepress(int) */

void __thiscall
UIArtifactPresentScrollPanel::ButtonDepress(UIArtifactPresentScrollPanel *this,int param_1)

{
  ArtifactPresentMgr *pAVar1;
  
  if ((2 < param_1 - 5U) && (2 < param_1)) {
    pAVar1 = (ArtifactPresentMgr *)Sexy::LazySingleton<ArtifactPresentMgr>::GetInstance();
    ArtifactPresentMgr::ShowNewerPresentDetail(pAVar1,param_1);
    return;
  }
  pAVar1 = (ArtifactPresentMgr *)Sexy::LazySingleton<ArtifactPresentMgr>::GetInstance();
  ArtifactPresentMgr::BuyOffer(pAVar1,param_1);
  return;
}


/* non-virtual thunk to UIArtifactPresentScrollPanel::ButtonDepress(int) */

void __thiscall
UIArtifactPresentScrollPanel::ButtonDepress(UIArtifactPresentScrollPanel *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

