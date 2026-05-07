// Class: AccessoryPieceButton


/* AccessoryPieceButton::~AccessoryPieceButton() */

void __thiscall AccessoryPieceButton::~AccessoryPieceButton(AccessoryPieceButton *this)

{
  *(undefined ***)this = &PTR_GetClass_069c2d80;
  *(undefined ***)(this + 0x148) = &PTR_ButtonPress_069c3178;
  BagItemButtonBase::~BagItemButtonBase((BagItemButtonBase *)this);
  return;
}


/* AccessoryPieceButton::~AccessoryPieceButton() */

void __thiscall AccessoryPieceButton::~AccessoryPieceButton(AccessoryPieceButton *this)

{
  ~AccessoryPieceButton(this);
  AK::FreeHook(this);
  return;
}


/* AccessoryPieceButton::AccessoryPieceButton(int, UIRewardFrame::RewardType, std::string const&,
   int, bool) */

void __thiscall AccessoryPieceButton::AccessoryPieceButton(AccessoryPieceButton *this)

{
  BagItemButtonBase::BagItemButtonBase();
  *(undefined ***)this = &PTR_GetClass_069c2d80;
  *(undefined ***)(this + 0x148) = &PTR_ButtonPress_069c3178;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccessoryPieceButton::ButtonDepress(int) */

void __thiscall AccessoryPieceButton::ButtonDepress(AccessoryPieceButton *this,int param_1)

{
  UIBagItemBox *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate2<UIBagItemBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(this + 0x150) == param_1) &&
     (this_00 = (UIBagItemBox *)UISingletonDialog<UIBagItemBox>::ShowDialog(),
     this_00 != (UIBagItemBox *)0x0)) {
    UIBagItemBox::InitView(this_00,2,*(int *)(this + 0x150),*(int *)(this + 0x154));
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,(_func_void *)0x3e0);
    Sexy::Delegate2<UIBagItemBox*,int>::
    Delegate2<AccessoryPieceButton,void(AccessoryPieceButton::*)(UIBagItemBox*,int)>
              (aDStack_38,aCStack_50);
    UIBagItemBox::SetCallBack(this_00,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to AccessoryPieceButton::ButtonDepress(int) */

void __thiscall AccessoryPieceButton::ButtonDepress(AccessoryPieceButton *this,int param_1)

{
  ButtonDepress(this + -0x148,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccessoryPieceButton::ButtonCallback(UIBagItemBox*, int) */

void __thiscall
AccessoryPieceButton::ButtonCallback(AccessoryPieceButton *this,UIBagItemBox *param_1,int param_2)

{
  LawnApp *pLVar1;
  char cVar2;
  char *__s;
  TGALogMgr *pTVar3;
  string *psVar4;
  NewPlantUIMgr *this_00;
  size_t __n;
  TGABagData aTStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  DString aDStack_18 [16];
  long local_8;
  
  __n = (size_t)(uint)param_2;
  local_8 = ___stack_chk_guard;
  TGABagData::TGABagData(aTStack_28);
  DString::DString(aDStack_18,4);
  __s = (char *)DString::c_str(aDStack_18);
  std::string::append((string *)aTStack_28,__s,__n);
  DString::~DString(aDStack_18);
  pTVar3 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGABagData::TGABagData((TGABagData *)aDStack_18,aTStack_28);
  TGALogMgr::LogBag(pTVar3,aDStack_18);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aDStack_18);
  if (param_2 == 3) {
    UISingletonDialog<UIBagItemBox>::CloseDialog();
    UISingletonDialog<UIBag>::CloseDialog();
    psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string((string *)aDStack_18,"sunflower");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar4);
    std::string::~string((string *)aDStack_18);
    nop();
    this_00 = (NewPlantUIMgr *)Sexy::LazySingleton<NewPlantUIMgr>::GetInstancePtr();
    cVar2 = NewPlantUIMgr::IsNewUI(this_00);
    pLVar1 = gLawnApp;
    if (cVar2 == '\0') {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aDStack_18,(RtWeakPtrBase *)aRStack_20);
      LawnApp::ShowPlantAccessoryUI(pLVar1,2,aDStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aDStack_18);
    }
    else {
      GameStateMgr::ShowNewPlantUIEntryScreen(gGameStateMgr,5,5);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  }
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

