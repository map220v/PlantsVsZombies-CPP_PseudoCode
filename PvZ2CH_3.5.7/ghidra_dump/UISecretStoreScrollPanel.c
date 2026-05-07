// Class: UISecretStoreScrollPanel


/* UISecretStoreScrollPanel::ButtonDepress(int) */

int UISecretStoreScrollPanel::ButtonDepress(int param_1)

{
  return param_1;
}


/* non-virtual thunk to UISecretStoreScrollPanel::ButtonDepress(int) */

void __thiscall UISecretStoreScrollPanel::ButtonDepress(UISecretStoreScrollPanel *this,int param_1)

{
  ButtonDepress((int)this + -0xd8);
  return;
}


/* UISecretStoreScrollPanel::ButtonPress(int) */

int UISecretStoreScrollPanel::ButtonPress(int param_1)

{
  return param_1;
}


/* non-virtual thunk to UISecretStoreScrollPanel::ButtonPress(int) */

void __thiscall UISecretStoreScrollPanel::ButtonPress(UISecretStoreScrollPanel *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISecretStoreScrollPanel::GetLayoutName() */

void __thiscall UISecretStoreScrollPanel::GetLayoutName(UISecretStoreScrollPanel *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UISecretStoreScrollPanel");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UISecretStoreScrollPanel::~UISecretStoreScrollPanel() */

void __thiscall UISecretStoreScrollPanel::~UISecretStoreScrollPanel(UISecretStoreScrollPanel *this)

{
  *(undefined ***)this = &PTR_GetClass_06775f30;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06776280;
  UISingletonDialog<UISecretStoreScrollPanel>::~UISingletonDialog
            ((UISingletonDialog<UISecretStoreScrollPanel> *)this);
  return;
}


/* UISecretStoreScrollPanel::~UISecretStoreScrollPanel() */

void __thiscall UISecretStoreScrollPanel::~UISecretStoreScrollPanel(UISecretStoreScrollPanel *this)

{
  ~UISecretStoreScrollPanel(this);
  AK::FreeHook(this);
  return;
}


/* UISecretStoreScrollPanel::UISecretStoreScrollPanel() */

void __thiscall UISecretStoreScrollPanel::UISecretStoreScrollPanel(UISecretStoreScrollPanel *this)

{
  UISingletonDialog<UISecretStoreScrollPanel>::UISingletonDialog
            ((UISingletonDialog<UISecretStoreScrollPanel> *)this);
  *(undefined ***)this = &PTR_GetClass_06775f30;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06776280;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISecretStoreScrollPanel::UpdateUI(PVZ2UIScrollingWidget*) */

void __thiscall
UISecretStoreScrollPanel::UpdateUI(UISecretStoreScrollPanel *this,PVZ2UIScrollingWidget *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  SecretStoreMgr *this_00;
  Widget *pWVar4;
  SecretStorePane *this_01;
  Widget *pWVar5;
  uint uVar6;
  int iVar7;
  string asStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [48];
  char local_20;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (SecretStoreMgr *)Sexy::LazySingleton<SecretStoreMgr>::GetInstance();
  uVar1 = SecretStoreMgr::GetNumBundles(this_00);
  std::string::string(asStack_50,"UIImage_BG");
  pWVar4 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,asStack_50);
  std::string::~string(asStack_50);
  nop();
  (**(code **)(*(long *)pWVar4 + 0x80))(pWVar4,1,1);
  if (0 < (int)uVar1) {
    iVar7 = 10;
    uVar6 = 0;
    do {
      iVar2 = Sexy::LazySingleton<SecretStoreMgr>::GetInstance();
      SecretStoreMgr::FindTargetBundle(iVar2);
      std::string::string(asStack_68,"IMAGE_UI_SECRET_STORE_BACKGROUND");
      nop();
      Sexy::StrFormat("IMAGE_UI_SECRET_STORE_TITLE_%d",asStack_60,(ulong)uVar6);
      this_01 = (SecretStorePane *)
                SecretStoreUtils::AddPane
                          (pWVar4,(SecretBundleDetail *)asStack_50,asStack_68,asStack_60,iVar7,1,
                           0xbc,0x172);
      FUN_03da09f8(this_01 + 0x138,uVar6);
      if (local_20 != '\0') {
        SecretStorePane::SetDisable(this_01,true);
        std::string::string(asStack_58,"IMAGE_UI_SECRET_STORE_GRAY_MASK");
        pWVar5 = (Widget *)SecretStoreUtils::AddImage((Widget *)this_01,asStack_58,0,0,0xbc,0x16d);
        std::string::~string(asStack_58);
        nop();
        std::string::string(asStack_58,"IMAGE_UI_SECRET_STORE_BUY_ALREADY");
        SecretStoreUtils::AddImage(pWVar5,asStack_58,0x44,0x82);
        std::string::~string(asStack_58);
        nop();
        std::string::string(asStack_58,"IMAGE_UI_SECRET_STORE_BUY_ALREADY_TEXT");
        SecretStoreUtils::AddImage(pWVar5,asStack_58,0x3c,200);
        std::string::~string(asStack_58);
        nop();
      }
      this_01[0x59] = (SecretStorePane)0x0;
      uVar6 = uVar6 + 1;
      iVar7 = iVar7 + 200;
      std::string::~string(asStack_60);
      std::string::~string(asStack_68);
      SecretBundleDetail::~SecretBundleDetail((SecretBundleDetail *)asStack_50);
    } while (uVar6 != uVar1);
  }
  uVar3 = FUN_03da11e8(uVar1 * 200 + 10);
  *(undefined4 *)(this + 0x50) = uVar3;
  Sexy::ScrollWidget::ClientSizeChanged((ScrollWidget *)param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

