// Class: AvatarPieceButton


/* AvatarPieceButton::~AvatarPieceButton() */

void __thiscall AvatarPieceButton::~AvatarPieceButton(AvatarPieceButton *this)

{
  *(undefined ***)this = &PTR_GetClass_069c2940;
  *(undefined ***)(this + 0x148) = &PTR_ButtonPress_069c2d38;
  BagItemButtonBase::~BagItemButtonBase((BagItemButtonBase *)this);
  return;
}


/* AvatarPieceButton::~AvatarPieceButton() */

void __thiscall AvatarPieceButton::~AvatarPieceButton(AvatarPieceButton *this)

{
  ~AvatarPieceButton(this);
  AK::FreeHook(this);
  return;
}


/* AvatarPieceButton::AvatarPieceButton(int, UIRewardFrame::RewardType, std::string const&, int,
   bool) */

void __thiscall AvatarPieceButton::AvatarPieceButton(AvatarPieceButton *this)

{
  BagItemButtonBase::BagItemButtonBase();
  *(undefined ***)this = &PTR_GetClass_069c2940;
  *(undefined ***)(this + 0x148) = &PTR_ButtonPress_069c2d38;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AvatarPieceButton::ButtonDepress(int) */

void __thiscall AvatarPieceButton::ButtonDepress(AvatarPieceButton *this,int param_1)

{
  UIBagItemBox *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate2<UIBagItemBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(this + 0x150) == param_1) &&
     (this_00 = (UIBagItemBox *)UISingletonDialog<UIBagItemBox>::ShowDialog(),
     this_00 != (UIBagItemBox *)0x0)) {
    UIBagItemBox::InitView(this_00,1,*(int *)(this + 0x150),*(int *)(this + 0x154));
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,(_func_void *)0x3e0);
    Sexy::Delegate2<UIBagItemBox*,int>::
    Delegate2<AvatarPieceButton,void(AvatarPieceButton::*)(UIBagItemBox*,int)>
              (aDStack_38,aCStack_50);
    UIBagItemBox::SetCallBack(this_00,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to AvatarPieceButton::ButtonDepress(int) */

void __thiscall AvatarPieceButton::ButtonDepress(AvatarPieceButton *this,int param_1)

{
  ButtonDepress(this + -0x148,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AvatarPieceButton::ButtonCallback(UIBagItemBox*, int) */

void __thiscall
AvatarPieceButton::ButtonCallback(AvatarPieceButton *this,UIBagItemBox *param_1,int param_2)

{
  char cVar1;
  char *__s;
  TGALogMgr *pTVar2;
  NewPlantUIMgr *this_00;
  size_t __n;
  TGABagData aTStack_20 [8];
  DString aDStack_18 [16];
  long local_8;
  
  __n = (size_t)(uint)param_2;
  local_8 = ___stack_chk_guard;
  TGABagData::TGABagData(aTStack_20);
  DString::DString(aDStack_18,3);
  __s = (char *)DString::c_str(aDStack_18);
  std::string::append((string *)aTStack_20,__s,__n);
  DString::~DString(aDStack_18);
  pTVar2 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGABagData::TGABagData((TGABagData *)aDStack_18,aTStack_20);
  TGALogMgr::LogBag(pTVar2,aDStack_18);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aDStack_18);
  if (param_2 == 1) {
    UISingletonDialog<UIBagItemBox>::CloseDialog();
    UISingletonDialog<UIBag>::CloseDialog();
    this_00 = (NewPlantUIMgr *)Sexy::LazySingleton<NewPlantUIMgr>::GetInstancePtr();
    cVar1 = NewPlantUIMgr::IsNewUI(this_00);
    if (cVar1 == '\0') {
      GameStateMgr::ShowPlantAvatar(gGameStateMgr,5,5);
    }
    else {
      GameStateMgr::ShowNewPlantUIEntryScreen(gGameStateMgr);
    }
  }
  else if (param_2 == 2) {
    UISingletonDialog<UIBagItemBox>::CloseDialog();
    UISingletonDialog<UIBag>::CloseDialog();
    LawnApp::ShowTransGenosisUI(SUB81(gLawnApp,0));
  }
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

