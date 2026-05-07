// Class: PlantPieceCompletionDlg


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPieceCompletionDlg::GetLayoutName() */

void __thiscall PlantPieceCompletionDlg::GetLayoutName(PlantPieceCompletionDlg *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"PlantPieceCompletion");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantPieceCompletionDlg::OnClose() */

void __thiscall PlantPieceCompletionDlg::OnClose(PlantPieceCompletionDlg *this)

{
  UI::Dialog::OnClose((Dialog *)this);
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* PlantPieceCompletionDlg::~PlantPieceCompletionDlg() */

void __thiscall PlantPieceCompletionDlg::~PlantPieceCompletionDlg(PlantPieceCompletionDlg *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06928ce0;
  *(undefined ***)this = &PTR_GetClass_06928990;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x140));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x138));
  UISingletonDialog<PlantPieceCompletionDlg>::~UISingletonDialog
            ((UISingletonDialog<PlantPieceCompletionDlg> *)this);
  return;
}


/* PlantPieceCompletionDlg::~PlantPieceCompletionDlg() */

void __thiscall PlantPieceCompletionDlg::~PlantPieceCompletionDlg(PlantPieceCompletionDlg *this)

{
  ~PlantPieceCompletionDlg(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPieceCompletionDlg::OnCreate() */

void __thiscall PlantPieceCompletionDlg::OnCreate(PlantPieceCompletionDlg *this)

{
  char cVar1;
  UIWidgetAnim *pUVar2;
  PVZ2UIButton *pPVar3;
  bool *pbVar4;
  UIWidgetText *pUVar5;
  long lVar6;
  Widget *pWVar7;
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = UI::Dialog::OnCreate((Dialog *)this);
  if (cVar1 != '\0') {
    std::string::string(asStack_10,"PlantAnim");
    pUVar2 = UI::Dialog::GetWidget<UIWidgetAnim>((Dialog *)this,asStack_10);
    FUN_049cfe04(pUVar2 + 0xe8);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"Buy");
    pPVar3 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    TodStringTranslate(L"[PLANT_PIECE_COMPLETION_BUY]");
    pbVar4 = (bool *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x140));
    MagentoProductProps::GetLocalizedPriceString(pbVar4);
    std::operator+(awStack_20,L".00");
    TodReplaceString(awStack_28,L"{MONEY}",awStack_18);
    FUN_054766c8(pPVar3 + 0xd8,asStack_10);
    FUN_05476c50(asStack_10);
    FUN_05476c50(awStack_18);
    FUN_05476c50(awStack_20);
    FUN_05476c50(awStack_28);
    std::string::string(asStack_10,"Coin");
    pUVar5 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x140));
    Sexy::StrFormat(L"%d",asStack_10,(ulong)*(uint *)(lVar6 + 0x90));
    PuzzleTip::SetTip(pUVar5,asStack_10);
    FUN_05476c50(asStack_10);
    std::string::string(asStack_10,"UIImageBackground");
    pWVar7 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
    UI::Dialog::setWindowCenter((Dialog *)this,pWVar7);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPieceCompletionDlg::setPlantPiece(Sexy::RtWeakPtr<PlantType const>, int) */

void __thiscall
PlantPieceCompletionDlg::setPlantPiece
          (PlantPieceCompletionDlg *this,RtMixedPtr<Sexy::Image> *param_2,int param_3)

{
  char cVar1;
  PopAnimRig *pPVar2;
  UIWidgetAnim *this_00;
  UIWidgetText *this_01;
  wstring *pwVar3;
  UIWidgetImage *pUVar4;
  char *__s;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  string asStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(param_2);
  if (cVar1 == '\0') {
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x138),(RtWeakPtr *)param_2);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_2);
    pPVar2 = (PopAnimRig *)CreateStandalonePlantAnimRig(aRStack_10,1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    std::string::string((string *)aRStack_10,"PlantAnim");
    this_00 = UI::Dialog::GetWidget<UIWidgetAnim>((Dialog *)this,(string *)aRStack_10);
    UIWidgetAnim::SetAnimRig(this_00,pPVar2);
    std::string::~string((string *)aRStack_10);
    nop();
    std::string::string((string *)aRStack_10,"Reward_Text");
    this_01 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)aRStack_10);
    std::string::~string((string *)aRStack_10);
    nop();
    pwVar3 = (wstring *)UIWidgetImage::GetPVZ2Image((UIWidgetImage *)this_01);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)param_2);
    Plant::GetFormattedNameString((Plant *)asStack_18,aRStack_20);
    TodReplaceString(pwVar3,L"{NAME}",(wstring *)asStack_18);
    PuzzleTip::SetTip(this_01,aRStack_10);
    FUN_05476c50(aRStack_10);
    FUN_05476c50(asStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    if (param_3 == 8) {
      std::string::string(asStack_18,"Progress");
      pUVar4 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
      std::string::string((string *)aRStack_10,"IMAGE_UI_PLANTPIECECOMPLETION_PROGRESS2");
      UIWidgetImage::SetImage(pUVar4,(string *)aRStack_10);
      std::string::~string((string *)aRStack_10);
      nop();
      std::string::~string(asStack_18);
      nop();
      std::string::string(asStack_18,"Tips");
      pUVar4 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
      __s = "IMAGE_UI_PLANTPIECECOMPLETION_TIP2";
    }
    else {
      if (param_3 != 9) goto LAB_049d0280;
      std::string::string(asStack_18,"Progress");
      pUVar4 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
      std::string::string((string *)aRStack_10,"IMAGE_UI_PLANTPIECECOMPLETION_PROGRESS1");
      UIWidgetImage::SetImage(pUVar4,(string *)aRStack_10);
      std::string::~string((string *)aRStack_10);
      nop();
      std::string::~string(asStack_18);
      nop();
      std::string::string(asStack_18,"Tips");
      pUVar4 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
      __s = "IMAGE_UI_PLANTPIECECOMPLETION_TIP1";
    }
    std::string::string((string *)aRStack_10,__s);
    UIWidgetImage::SetImage(pUVar4,(string *)aRStack_10);
    std::string::~string((string *)aRStack_10);
    nop();
    std::string::~string(asStack_18);
    nop();
  }
LAB_049d0280:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPieceCompletionDlg::onDialogClose() */

void PlantPieceCompletionDlg::onDialogClose(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  UISingletonDialog<PlantPieceCompletionDlg>::CloseDialog();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPieceCompletionDlg::buySuccess() */

void __thiscall PlantPieceCompletionDlg::buySuccess(PlantPieceCompletionDlg *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  LawnApp *pLVar1;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  long lVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x138);
  local_8 = ___stack_chk_guard;
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  PlayerInfo::UnlockPlant(this_02,(string *)(lVar2 + 8),false);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  PlayerInfo::SetPlantPieceCount(this_02,(string *)(lVar2 + 8),0,true,true,true,true);
  pLVar1 = gLawnApp;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)this_00);
  LawnApp::ShowRewardPlantUI(pLVar1,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  UISingletonDialog<PlantPieceCompletionDlg>::CloseDialog();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPieceCompletionDlg::ButtonDepress(int) */

void __thiscall PlantPieceCompletionDlg::ButtonDepress(PlantPieceCompletionDlg *this,int param_1)

{
  LawnApp *this_00;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  PurchaseBroker *this_02;
  long lVar1;
  PVZ2UIDialog *pPVar2;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_70 [8];
  wstring awStack_68 [8];
  wstring awStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (param_1 == 0) {
    FUN_05478178(awStack_50,L"[SUMMARY_NOTICE]",auStack_78);
    FUN_05478178(awStack_60,L"[PLANT_PIECE_COMPLETION_CHANCE_DES]",auStack_80);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_70,(RtWeakPtrBase *)(this + 0x138));
    Plant::GetFormattedNameString((Plant *)awStack_68,aRStack_70);
    TodReplaceString(awStack_60,L"{NAME}",awStack_68);
    pPVar2 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_50,awStack_58);
    FUN_05476c50(awStack_58);
    FUN_05476c50(awStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    FUN_05476c50(awStack_60);
    nop();
    FUN_05476c50(awStack_50);
    nop();
    FUN_05478178(awStack_58,L"[PLANT_ADVENTURE_NOT_BUTTON]",awStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar2,awStack_58,aDStack_38,0);
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[PLANT_ADVENTURE_SURPRISE_BUTTON_GIVEUP]",awStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onDialogClose);
    Sexy::Delegate0::Delegate0<PlantPieceCompletionDlg,void(PlantPieceCompletionDlg::*)()>
              (aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar2,awStack_58,aDStack_38,0);
    FUN_05476c50(awStack_58);
    nop();
  }
  else if (param_1 == 1) {
    this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PurchaseBroker *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_rightmost(this_01);
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x140));
    PurchaseBroker::RequestPayment(this_02,(string *)(lVar1 + 0x10),0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PlantPieceCompletionDlg::ButtonDepress(int) */

void __thiscall PlantPieceCompletionDlg::ButtonDepress(PlantPieceCompletionDlg *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* PlantPieceCompletionDlg::onItemPurchasedFromStore(MagentoProductProps*) */

void __thiscall
PlantPieceCompletionDlg::onItemPurchasedFromStore
          (PlantPieceCompletionDlg *this,MagentoProductProps *param_1)

{
  ResourceInfo *pRVar1;
  
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x140));
  if (param_1 != (MagentoProductProps *)pRVar1) {
    return;
  }
  buySuccess(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPieceCompletionDlg::PlantPieceCompletionDlg() */

void __thiscall PlantPieceCompletionDlg::PlantPieceCompletionDlg(PlantPieceCompletionDlg *this)

{
  undefined *puVar1;
  string *extraout_x1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<PlantPieceCompletionDlg>::UISingletonDialog
            ((UISingletonDialog<PlantPieceCompletionDlg> *)this);
  *(undefined ***)this = &PTR_GetClass_06928990;
  *(undefined **)(this + 0xd8) = &DAT_06928ce0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x138));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x140));
  std::string::string((string *)&local_20,"com.popcap.ios.chs.PVZ2.coinplantpiece");
  Magento::GetProduct((Magento *)&local_20,extraout_x1);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x140),(RtWeakPtr *)aRStack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  std::string::~string((string *)&local_20);
  nop();
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onItemPurchasedFromStore);
  local_50 = local_20;
  uStack_48 = uStack_18;
  local_40 = local_10;
  MessageRouter::
  Subscribe<MagentoProductProps*,Sexy::CBMemberTranslatorX<PlantPieceCompletionDlg,void(PlantPieceCompletionDlg::*)(MagentoProductProps*)>>
            ((MessageRouter *)puVar1,Message::ItemPurchasedFromStore,&local_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

