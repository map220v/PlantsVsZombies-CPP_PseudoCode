// Class: PVZ2UIBuyGachaDialog


/* PVZ2UIBuyGachaDialog::OnServerGemCallBack(bool const&) */

void PVZ2UIBuyGachaDialog::OnServerGemCallBack(bool *param_1)

{
  return;
}


/* PVZ2UIBuyGachaDialog::~PVZ2UIBuyGachaDialog() */

void __thiscall PVZ2UIBuyGachaDialog::~PVZ2UIBuyGachaDialog(PVZ2UIBuyGachaDialog *this)

{
  *(undefined ***)this = &PTR_GetClass_0690e100;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0690e428;
  PVZ2UIBuyPlantDialog::~PVZ2UIBuyPlantDialog((PVZ2UIBuyPlantDialog *)this);
  return;
}


/* PVZ2UIBuyGachaDialog::~PVZ2UIBuyGachaDialog() */

void __thiscall PVZ2UIBuyGachaDialog::~PVZ2UIBuyGachaDialog(PVZ2UIBuyGachaDialog *this)

{
  ~PVZ2UIBuyGachaDialog(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIBuyGachaDialog::PVZ2UIBuyGachaDialog(Sexy::RtWeakPtr<MagentoProductProps>, bool) */

void __thiscall
PVZ2UIBuyGachaDialog::PVZ2UIBuyGachaDialog
          (PVZ2UIBuyGachaDialog *this,RtWeakPtr<Sexy::ResourceInfo> *param_2,
          PVZ2UIBuyGachaDialog param_3)

{
  bool bVar1;
  long lVar2;
  MagentoProductProps *this_00;
  PVZ2UIButton *pPVar3;
  undefined8 uVar4;
  int iVar5;
  float fVar6;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  wstring awStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ2UIBuyPlantDialog::PVZ2UIBuyPlantDialog((PVZ2UIBuyPlantDialog *)this);
  *(undefined ***)this = &PTR_GetClass_0690e100;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0690e428;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xe0),(RtWeakPtr *)param_2);
  this[0xe8] = param_3;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  bVar1 = std::operator==((string *)(lVar2 + 0x80),"gacha_diamond");
  if (!bVar1) {
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    bVar1 = std::operator==((string *)(lVar2 + 0x80),"gacha_diamond10");
    if (bVar1) {
      iVar5 = 10;
      goto LAB_0490e2c0;
    }
  }
  iVar5 = 1;
LAB_0490e2c0:
  *(undefined4 *)(this + 0xec) = 0;
  this_00 = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  fVar6 = (float)MagentoProductProps::GetPriceInUSD(this_00,false);
  *(int *)(this + 0xf0) = (int)fVar6;
  TodStringTranslate(L"[BUY_GACHA_TITLE]");
  FUN_054766c8(this + 0x118,awStack_40);
  FUN_05476c50(awStack_40);
  TodStringTranslate(L"[BUY_GACHA_DESC]");
  TodReplaceNumberString(awStack_40,L"{KEY_COUNT}",iVar5);
  FUN_054766c8(this + 0x120,awStack_78);
  FUN_05476c50(awStack_78);
  FUN_05476c50(awStack_40);
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)awStack_40,1);
  pPVar3 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar3,0,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)awStack_40);
  *(PVZ2UIButton **)(this + 0xf8) = pPVar3;
  FUN_05476c50(awStack_78);
  nop();
  pPVar3 = *(PVZ2UIButton **)(this + 0xf8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b6f058,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_40,&DAT_06b6ef40,3);
  PVZ2UIButton::SetDialogStates(pPVar3,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)awStack_40);
  pPVar3 = *(PVZ2UIButton **)(this + 0xf8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_40,&DAT_06b6eec0,1);
  PVZ2UIButton::AddImage(pPVar3,awStack_40,0);
  pPVar3 = *(PVZ2UIButton **)(this + 0xf8);
  Sexy::StrFormat(L"%d",awStack_40,(ulong)*(uint *)(this + 0xf0));
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_22);
  PVZ2UIButton::AddText(pPVar3,awStack_40,uVar4,0);
  FUN_05476c50(awStack_40);
  pPVar3 = *(PVZ2UIButton **)(this + 0xf8);
  TodStringTranslate(L"[BUY_PLANT_BUY]");
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22);
  PVZ2UIButton::AddText(pPVar3,awStack_40,uVar4,0);
  FUN_05476c50(awStack_40);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0xf8));
  FUN_05478178(awStack_78,L"[BUTTON_CANCEL]",auStack_80);
  Sexy::Color::Color((Color *)awStack_40,1);
  pPVar3 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar3,1,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)awStack_40);
  *(PVZ2UIButton **)(this + 0x100) = pPVar3;
  FUN_05476c50(awStack_78);
  nop();
  pPVar3 = *(PVZ2UIButton **)(this + 0x100);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b6eee8,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_40,&DAT_06b6ef68,3);
  PVZ2UIButton::SetDialogStates(pPVar3,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)awStack_40);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0x100));
  PVZ2UIBuyPlantDialog::Resize
            ((PVZ2UIBuyPlantDialog *)this,*(int *)(gLawnApp + 0x71c),*(int *)(gLawnApp + 0x720),
             *(int *)(gLawnApp + 0x724),*(int *)(gLawnApp + 0x728));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UIBuyGachaDialog::ButtonDepress(int) */

void __thiscall PVZ2UIBuyGachaDialog::ButtonDepress(PVZ2UIBuyGachaDialog *this,int param_1)

{
  bool bVar1;
  int iVar2;
  PlayerInfo *this_00;
  long lVar3;
  PVZ2UIBuyGachaDialog *pPVar4;
  
  if (param_1 == 0) {
    this_00 = (PlayerInfo *)ProfileUtils::Profile();
    iVar2 = PlayerInfo::GetNumGems(this_00,true);
    if (iVar2 < *(int *)(this + 0xf0)) {
      LawnApp::ShowGemStoreConfirm(gLawnApp,2,this[0xe8]);
    }
    else {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
      bVar1 = std::operator==((string *)(lVar3 + 0x80),"gacha_diamond");
      iVar2 = 0x89e;
      if (!bVar1) {
        iVar2 = 0x89f;
      }
      pPVar4 = ::operator_new(0x28);
      ICloudRequestCallbackFunction<PVZ2UIBuyGachaDialog,bool>::ICloudRequestCallbackFunction
                (pPVar4,(_func_void_bool_ptr *)this);
      PlayerInfo::SubtractGems(this_00,1,iVar2,(ICloudRequestCallbackFunctionBase *)pPVar4,1,false);
    }
    LawnApp::KillBuyGachaDialog(gLawnApp);
    return;
  }
  if (param_1 == 1) {
    LawnApp::KillBuyGachaDialog(gLawnApp);
    return;
  }
  return;
}


/* non-virtual thunk to PVZ2UIBuyGachaDialog::ButtonDepress(int) */

void __thiscall PVZ2UIBuyGachaDialog::ButtonDepress(PVZ2UIBuyGachaDialog *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

