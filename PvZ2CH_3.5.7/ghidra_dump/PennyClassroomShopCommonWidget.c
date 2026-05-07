// Class: PennyClassroomShopCommonWidget


/* PennyClassroomShopCommonWidget::~PennyClassroomShopCommonWidget() */

void __thiscall
PennyClassroomShopCommonWidget::~PennyClassroomShopCommonWidget
          (PennyClassroomShopCommonWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_069cecf0;
  PVZ1ModeShopCommonWidget::~PVZ1ModeShopCommonWidget((PVZ1ModeShopCommonWidget *)this);
  return;
}


/* PennyClassroomShopCommonWidget::~PennyClassroomShopCommonWidget() */

void __thiscall
PennyClassroomShopCommonWidget::~PennyClassroomShopCommonWidget
          (PennyClassroomShopCommonWidget *this)

{
  ~PennyClassroomShopCommonWidget(this);
  AK::FreeHook(this);
  return;
}


/* PennyClassroomShopCommonWidget::PennyClassroomShopCommonWidget(int) */

void __thiscall
PennyClassroomShopCommonWidget::PennyClassroomShopCommonWidget
          (PennyClassroomShopCommonWidget *this,int param_1)

{
  PVZ1ModeShopCommonWidget::PVZ1ModeShopCommonWidget((PVZ1ModeShopCommonWidget *)this,param_1);
  *(undefined ***)this = &PTR_GetClass_069cecf0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyClassroomShopCommonWidget::ClickCallback() */

void __thiscall PennyClassroomShopCommonWidget::ClickCallback(PennyClassroomShopCommonWidget *this)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  UIMessageBox *this_02;
  Image *pIVar2;
  long lVar3;
  NetworkMgr *this_03;
  long *plVar4;
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = PlayerInfo::GetMaterialNum(this_01,*(int *)(this + 0xe0));
  if (iVar1 < *(int *)(this + 0xe4)) {
    this_02 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (this_02 != (UIMessageBox *)0x0) {
      UIMessageBox::SetShowType(this_02,4);
      TodStringTranslate(L"[REVIVE_TIP]");
      TodStringTranslate(L"[MAT_PENNY_CLASSROOM_COIN_NOT_ENOUGH]");
      TodStringTranslate(L"[BUTTON_OK]");
      UIMessageBox::SetMessage(this_02,awStack_20,awStack_28);
      std::string::string(asStack_10,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar2 = (Image *)StringHelper::ToImage(asStack_10,false);
      UIMessageBox::SetBackground(this_02,pIVar2);
      std::string::~string(asStack_10);
      nop();
      lVar3 = UIMessageBox::GetButtonCancel(this_02);
      thunk_FUN_05477b9c(lVar3 + 0xd8,auStack_18);
      FUN_05476c50(auStack_18);
      FUN_05476c50(awStack_20);
      FUN_05476c50(awStack_28);
    }
  }
  else {
    this_03 = (NetworkMgr *)NetworkMgr::Instance();
    plVar4 = (long *)NetworkMgr::GetNewNetWorkProcess(this_03);
    (**(code **)(*plVar4 + 0x370))
              (plVar4,0xc,*(undefined4 *)(this + 0xd8),1,*(undefined4 *)(this + 0xe0),
               *(undefined4 *)(this + 0xe4));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyClassroomShopCommonWidget::InitButton() */

void __thiscall PennyClassroomShopCommonWidget::InitButton(PennyClassroomShopCommonWidget *this)

{
  uint uVar1;
  int iVar2;
  PennyClassroomShopButton *this_00;
  int iVar3;
  CornucopiaShopButton *pCVar4;
  Delegate0 aDStack_a8 [48];
  PVZ2UIImage aPStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = ::operator_new(0x368);
  PennyClassroomShopButton::PennyClassroomShopButton(this_00,*(int *)(this + 400));
  *(PennyClassroomShopButton **)(this + 0x1c0) = this_00;
  PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b9c448,3);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b9c598,3);
  PVZ2UIButton::SetDialogStates((PVZ2UIButton *)this_00,aPStack_78,aPStack_40);
  iVar2 = FUN_04de8b64(0x2d);
  uVar1 = (int)*(uint *)(this + 0x1b8) >> 0x1f;
  iVar3 = (*(uint *)(this + 0x1b8) ^ uVar1) - uVar1;
  (**(code **)(**(long **)(this + 0x1c0) + 0x198))
            (*(long **)(this + 0x1c0),iVar2,*(int *)(this + 0x54) + (iVar3 / 2) * -4,
             *(int *)(this + 0x50) + iVar2 * -2,iVar3 * 2);
  PVZ1ModeShopButton::InitView(*(PVZ1ModeShopButton **)(this + 0x1c0));
  FUN_04de7930(*(long *)(this + 0x1c0) + 0x328,*(undefined8 *)(this + 0x120));
  CornucopiaShopButton::SetItemAmount((int)*(undefined8 *)(this + 0x1c0));
  pCVar4 = *(CornucopiaShopButton **)(this + 0x1c0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x320);
  Sexy::Delegate0::
  Delegate0<PennyClassroomShopCommonWidget,void(PennyClassroomShopCommonWidget::*)()>
            (aDStack_a8,aPStack_40);
  CornucopiaShopButton::SetClickCallback(pCVar4,aDStack_a8);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x1c0));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

