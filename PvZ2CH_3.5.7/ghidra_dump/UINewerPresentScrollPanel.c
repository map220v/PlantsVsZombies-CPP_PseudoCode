// Class: UINewerPresentScrollPanel


/* UINewerPresentScrollPanel::ButtonPress(int) */

int UINewerPresentScrollPanel::ButtonPress(int param_1)

{
  return param_1;
}


/* non-virtual thunk to UINewerPresentScrollPanel::ButtonPress(int) */

void __thiscall UINewerPresentScrollPanel::ButtonPress(UINewerPresentScrollPanel *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewerPresentScrollPanel::GetLayoutName() */

void __thiscall UINewerPresentScrollPanel::GetLayoutName(UINewerPresentScrollPanel *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UINewerPresentScrollPanel");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UINewerPresentScrollPanel::~UINewerPresentScrollPanel() */

void __thiscall
UINewerPresentScrollPanel::~UINewerPresentScrollPanel(UINewerPresentScrollPanel *this)

{
  *(undefined ***)this = &PTR_GetClass_067792a0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_067795f0;
  UISingletonDialog<UINewerPresentScrollPanel>::~UISingletonDialog
            ((UISingletonDialog<UINewerPresentScrollPanel> *)this);
  return;
}


/* UINewerPresentScrollPanel::~UINewerPresentScrollPanel() */

void __thiscall
UINewerPresentScrollPanel::~UINewerPresentScrollPanel(UINewerPresentScrollPanel *this)

{
  ~UINewerPresentScrollPanel(this);
  AK::FreeHook(this);
  return;
}


/* UINewerPresentScrollPanel::AddButton(Sexy::Widget*, int, std::string const&, std::string const&,
   int, int, int, int, Sexy::ButtonListener*) */

NewerPresentButton * __thiscall
UINewerPresentScrollPanel::AddButton
          (UINewerPresentScrollPanel *this,Widget *param_1,int param_2,string *param_3,
          string *param_4,int param_5,int param_6,int param_7,int param_8,ButtonListener *param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  NewerPresentButton *this_00;
  
  this_00 = ::operator_new(0x310);
  NewerPresentButton::NewerPresentButton(this_00,param_2,param_3,param_4,param_9);
  uVar1 = FUN_03dbed94(param_5);
  uVar2 = FUN_03dbed94(param_6);
  uVar3 = FUN_03dbed94(param_7);
  uVar4 = FUN_03dbed94(param_8);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar1,uVar2,uVar3,uVar4);
  (**(code **)(*(long *)param_1 + 0x60))(param_1,this_00);
  return this_00;
}


/* UINewerPresentScrollPanel::AddText(Sexy::Widget*, std::wstring const&, int, int, int, int) */

NewerPresentText * __thiscall
UINewerPresentScrollPanel::AddText
          (UINewerPresentScrollPanel *this,Widget *param_1,wstring *param_2,int param_3,int param_4,
          int param_5,int param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  NewerPresentText *this_00;
  
  this_00 = ::operator_new(0x100);
  NewerPresentText::NewerPresentText(this_00,param_2);
  (**(code **)(*(long *)this_00 + 0x90))(this_00,1);
  uVar1 = FUN_03dbed94(param_3);
  uVar2 = FUN_03dbed94(param_4);
  uVar3 = FUN_03dbed94(param_5);
  uVar4 = FUN_03dbed94(param_6);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar1,uVar2,uVar3,uVar4);
  (**(code **)(*(long *)param_1 + 0x60))(param_1,this_00);
  return this_00;
}


/* UINewerPresentScrollPanel::AddImage(Sexy::Widget*, std::string const&, int, int, int, int) */

NewerPresentImage * __thiscall
UINewerPresentScrollPanel::AddImage
          (UINewerPresentScrollPanel *this,Widget *param_1,string *param_2,int param_3,int param_4,
          int param_5,int param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  NewerPresentImage *this_00;
  
  this_00 = ::operator_new(0x128);
  NewerPresentImage::NewerPresentImage(this_00,param_2);
  (**(code **)(*(long *)this_00 + 0x90))(this_00,1);
  uVar1 = FUN_03dbed94(param_3);
  uVar2 = FUN_03dbed94(param_4);
  uVar3 = FUN_03dbed94(param_5);
  uVar4 = FUN_03dbed94(param_6);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar1,uVar2,uVar3,uVar4);
  (**(code **)(*(long *)param_1 + 0x60))(param_1,this_00);
  return this_00;
}


/* UINewerPresentScrollPanel::AddImage(Sexy::Widget*, std::string const&, int, int) */

NewerPresentImage * __thiscall
UINewerPresentScrollPanel::AddImage
          (UINewerPresentScrollPanel *this,Widget *param_1,string *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  NewerPresentImage *this_00;
  
  this_00 = ::operator_new(0x128);
  NewerPresentImage::NewerPresentImage(this_00,param_2);
  (**(code **)(*(long *)this_00 + 0x90))(this_00,1);
  uVar1 = FUN_03dbed94(param_3);
  uVar2 = FUN_03dbed94(param_4);
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,uVar1,uVar2,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
  (**(code **)(*(long *)param_1 + 0x60))(param_1,this_00);
  return this_00;
}


/* UINewerPresentScrollPanel::UINewerPresentScrollPanel() */

void __thiscall
UINewerPresentScrollPanel::UINewerPresentScrollPanel(UINewerPresentScrollPanel *this)

{
  UISingletonDialog<UINewerPresentScrollPanel>::UISingletonDialog
            ((UISingletonDialog<UINewerPresentScrollPanel> *)this);
  *(undefined ***)this = &PTR_GetClass_067792a0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_067795f0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewerPresentScrollPanel::UpdateUI(PVZ2UIScrollingWidget*) */

void __thiscall
UINewerPresentScrollPanel::UpdateUI(UINewerPresentScrollPanel *this,PVZ2UIScrollingWidget *param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  NewerPresentMgr *pNVar6;
  Widget *pWVar7;
  string *psVar8;
  Widget *pWVar9;
  ulong uVar10;
  CUILabel *this_00;
  int iVar11;
  uint uVar12;
  int iVar13;
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [32];
  char local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pNVar6 = (NewerPresentMgr *)Sexy::LazySingleton<NewerPresentMgr>::GetInstance();
  uVar3 = NewerPresentMgr::GetNumPresents(pNVar6);
  std::string::string(asStack_38,"UIImage_BG");
  pWVar7 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,asStack_38);
  std::string::~string(asStack_38);
  nop();
  (**(code **)(*(long *)pWVar7 + 0x80))(pWVar7,1,1);
  if (0 < (int)uVar3) {
    iVar13 = 10;
    uVar12 = 0;
    do {
      iVar4 = Sexy::LazySingleton<NewerPresentMgr>::GetInstance();
      uVar1 = uVar12 + 1;
      NewerPresentMgr::FindTargetPresent(iVar4);
      Sexy::StrFormat("IMAGE_UI_NEWER_PRESENT_PRESENT_%d",asStack_50,(ulong)uVar1);
      psVar8 = (string *)
               AddButton(this,pWVar7,uVar12,asStack_50,asStack_50,iVar13,1,0xbc,0x172,
                         (ButtonListener *)(this + 0xd8));
      PVPSkillUpgrade::SkillButton::SetSkill(psVar8);
      FUN_03dbe5b0(psVar8 + 0x308,local_18);
      if (local_18 == '\0') {
        pNVar6 = (NewerPresentMgr *)Sexy::LazySingleton<NewerPresentMgr>::GetInstance();
        cVar2 = NewerPresentMgr::CheckTargetUnlocked(pNVar6,uVar12);
        if (cVar2 == '\0') {
          psVar8[0x6d] = (string)0x0;
          std::string::string(asStack_40,"IMAGE_UI_NEWER_PRESENT_GRAY_MASK");
          pWVar9 = (Widget *)AddImage(this,(Widget *)psVar8,asStack_40,0,0,0xbc,0x16d);
          std::string::~string(asStack_40);
          nop();
          std::string::string(asStack_40,"IMAGE_UI_NEWER_PRESENT_LOCK");
          iVar4 = 0x8c;
          iVar11 = 0x136;
          goto LAB_03dc2ffc;
        }
        std::string::string(asStack_40,"IMAGE_UI_NEWER_PRESENT_LINE");
        iVar11 = 0x19;
        pWVar9 = (Widget *)AddImage(this,(Widget *)psVar8,asStack_40,0x19,0x137,0x96,0x1d);
        std::string::~string(asStack_40);
        nop();
        iVar4 = Sexy::LazySingleton<NewerPresentMgr>::GetInstance();
        uVar10 = NewerPresentMgr::GetTargetPrice(iVar4);
        std::string::string(asStack_48,"[REAL_MONEY_FORMAT]");
        StringHelper::ReplaceNumberString
                  ((StringHelper *)asStack_48,(string *)L"{NUMBER}",(wchar_t *)(uVar10 & 0xffffffff)
                   ,iVar11);
        this_00 = (CUILabel *)AddText(this,pWVar9,(wstring *)asStack_40,0x14,2,100,0x28);
        FUN_05476c50(asStack_40);
        std::string::~string(asStack_48);
        nop();
        Lua::CUILabel::SetTypeface(this_00,PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline);
        Lua::CUILabel::SetTextColorPreDefined(this_00,1);
        Lua::CUILabel::SetHAlignment(this_00,1);
      }
      else {
        psVar8[0x6d] = (string)0x0;
        std::string::string(asStack_40,"IMAGE_UI_NEWER_PRESENT_GRAY_MASK");
        pWVar9 = (Widget *)AddImage(this,(Widget *)psVar8,asStack_40,0,0,0xbc,0x16d);
        std::string::~string(asStack_40);
        nop();
        std::string::string(asStack_40,"IMAGE_UI_NEWER_PRESENT_BUY_ALREADY");
        AddImage(this,pWVar9,asStack_40,0x44,0x82);
        std::string::~string(asStack_40);
        nop();
        std::string::string(asStack_40,"IMAGE_UI_NEWER_PRESENT_BUY_ALREADY_TEXT");
        iVar4 = 0x3c;
        iVar11 = 200;
LAB_03dc2ffc:
        AddImage(this,pWVar9,asStack_40,iVar4,iVar11);
        std::string::~string(asStack_40);
        nop();
      }
      psVar8[0x59] = (string)0x0;
      iVar13 = iVar13 + 200;
      std::string::~string(asStack_50);
      PresentDetail::~PresentDetail((PresentDetail *)asStack_38);
      uVar12 = uVar1;
    } while (uVar1 != uVar3);
  }
  uVar5 = FUN_03dbed94(uVar3 * 200 + 10);
  *(undefined4 *)(this + 0x50) = uVar5;
  Sexy::ScrollWidget::ClientSizeChanged((ScrollWidget *)param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINewerPresentScrollPanel::ButtonDepress(int) */

void __thiscall
UINewerPresentScrollPanel::ButtonDepress(UINewerPresentScrollPanel *this,int param_1)

{
  NewerPresentMgr *this_00;
  
  this_00 = (NewerPresentMgr *)Sexy::LazySingleton<NewerPresentMgr>::GetInstance();
  NewerPresentMgr::ShowNewerPresentDetail(this_00,param_1);
  return;
}


/* non-virtual thunk to UINewerPresentScrollPanel::ButtonDepress(int) */

void __thiscall
UINewerPresentScrollPanel::ButtonDepress(UINewerPresentScrollPanel *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

