// Class: UICustomLevelLevelDetailShare


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelLevelDetailShare::GetLayoutName() */

void __thiscall UICustomLevelLevelDetailShare::GetLayoutName(UICustomLevelLevelDetailShare *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UICustomLevelLevelDetailShare");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelLevelDetailShare::OnNotifyShareSaveFinished() */

void __thiscall
UICustomLevelLevelDetailShare::OnNotifyShareSaveFinished(UICustomLevelLevelDetailShare *this)

{
  long *plVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"SaveToLocal");
  plVar1 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  (**(code **)(*plVar1 + 0x188))(plVar1,0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelLevelDetailShare::OnNotifyShareSaveBegin() */

void __thiscall
UICustomLevelLevelDetailShare::OnNotifyShareSaveBegin(UICustomLevelLevelDetailShare *this)

{
  long *plVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"SaveToLocal");
  plVar1 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  (**(code **)(*plVar1 + 0x188))(plVar1,1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UICustomLevelLevelDetailShare::CalcEvalutionParam(int, int, float) */

float __thiscall
UICustomLevelLevelDetailShare::CalcEvalutionParam
          (UICustomLevelLevelDetailShare *this,int param_1,int param_2,float param_3)

{
  return (float)param_1 / ((float)param_2 * param_3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelLevelDetailShare::GetEvaluationString(float) */

void __thiscall
UICustomLevelLevelDetailShare::GetEvaluationString
          (UICustomLevelLevelDetailShare *this,float param_1)

{
  undefined1 *__n;
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  __n = auStack_18;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"[CUSTOM_LEVEL_EVALUATION_RATE_3]");
  nop();
  if (0.8 < param_1) {
    std::string::append(asStack_10,"[CUSTOM_LEVEL_EVALUATION_RATE_1]",(size_t)__n);
  }
  else if (0.6 <= param_1) {
    std::string::append(asStack_10,"[CUSTOM_LEVEL_EVALUATION_RATE_2]",(size_t)__n);
  }
  else if (0.4 <= param_1) {
    std::string::append(asStack_10,"[CUSTOM_LEVEL_EVALUATION_RATE_3]",(size_t)__n);
  }
  else if (0.2 <= param_1) {
    std::string::append(asStack_10,"[CUSTOM_LEVEL_EVALUATION_RATE_4]",(size_t)__n);
  }
  else if (0.0 <= param_1) {
    std::string::append(asStack_10,"[CUSTOM_LEVEL_EVALUATION_RATE_5]",(size_t)__n);
  }
  StringHelper::ToStringValue(asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelLevelDetailShare::GetParams(int&, int&, int&, int&) */

void __thiscall
UICustomLevelLevelDetailShare::GetParams
          (UICustomLevelLevelDetailShare *this,int *param_1,int *param_2,int *param_3,int *param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_10,"SaveToLocal");
  UI::Dialog::GetWidget((Dialog *)this,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  std::string::string((string *)&local_10,"UIImage_Share_White_Bg");
  lVar1 = UI::Dialog::GetWidget((Dialog *)this,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  std::string::string((string *)&local_10,"Background_0");
  plVar2 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  (**(code **)(*plVar2 + 0xd0))((string *)&local_10,plVar2);
  lVar3 = *plVar2;
  *param_1 = local_10;
  (**(code **)(lVar3 + 0xd0))((string *)&local_10,plVar2);
  *param_2 = local_c;
  *param_3 = (int)plVar2[10];
  lVar3 = ___stack_chk_guard;
  *param_4 = *(int *)(lVar1 + 0x4c);
  if (local_8 == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelLevelDetailShare::OnNotifyShareRewardFinished() */

void __thiscall
UICustomLevelLevelDetailShare::OnNotifyShareRewardFinished(UICustomLevelLevelDetailShare *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long *plVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = Sexy::LazySingleton<SocialShareMgr>::GetInstance();
  uVar1 = SocialShareMgr::HasShareReward(uVar2,1);
  std::string::string(asStack_10,"UIImage_Share_Reward");
  plVar3 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  (**(code **)(*plVar3 + 0x158))(plVar3,uVar1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelLevelDetailShare::UICustomLevelLevelDetailShare() */

void __thiscall
UICustomLevelLevelDetailShare::UICustomLevelLevelDetailShare(UICustomLevelLevelDetailShare *this)

{
  undefined *puVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UICustomLevelLevelDetailShare>::UISingletonDialog
            ((UISingletonDialog<UICustomLevelLevelDetailShare> *)this);
  *(undefined ***)this = &PTR_GetClass_06665ad0;
  *(undefined **)(this + 0xd8) = &DAT_06665e20;
  CustomNetworkUploadData::CustomNetworkUploadData((CustomNetworkUploadData *)(this + 0x138));
  FUN_05476574(this + 0x240);
  Sexy::Insets::Insets((Insets *)(this + 0x248));
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined8 *)(this + 0x218) = 0;
  *(undefined8 *)(this + 0x228) = 0;
  *(undefined8 *)(this + 0x230) = 0;
  *(undefined4 *)(this + 0x208) = 0xffffffff;
  *(undefined8 *)(this + 0x220) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyShareSaveFinished);
  Sexy::Delegate0::Delegate0<UICustomLevelLevelDetailShare,void(UICustomLevelLevelDetailShare::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::NotifyShareSaveFinished,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyShareRewardFinished);
  Sexy::Delegate0::Delegate0<UICustomLevelLevelDetailShare,void(UICustomLevelLevelDetailShare::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::NotifyShareRewardFinished,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyShareSaveBegin);
  Sexy::Delegate0::Delegate0<UICustomLevelLevelDetailShare,void(UICustomLevelLevelDetailShare::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::NotifyShareSaveBegin,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UICustomLevelLevelDetailShare::LoadData(CustomNetworkUploadData const&) */

void __thiscall
UICustomLevelLevelDetailShare::LoadData
          (UICustomLevelLevelDetailShare *this,CustomNetworkUploadData *param_1)

{
  CustomNetworkUploadData::operator=((CustomNetworkUploadData *)(this + 0x138),param_1);
  return;
}


/* UICustomLevelLevelDetailShare::~UICustomLevelLevelDetailShare() */

void __thiscall
UICustomLevelLevelDetailShare::~UICustomLevelLevelDetailShare(UICustomLevelLevelDetailShare *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06665e20;
  *(undefined ***)this = &PTR_GetClass_06665ad0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  FUN_05476c50(this + 0x240);
  CustomNetworkUploadData::~CustomNetworkUploadData((CustomNetworkUploadData *)(this + 0x138));
  UISingletonDialog<UICustomLevelLevelDetailShare>::~UISingletonDialog
            ((UISingletonDialog<UICustomLevelLevelDetailShare> *)this);
  return;
}


/* UICustomLevelLevelDetailShare::~UICustomLevelLevelDetailShare() */

void __thiscall
UICustomLevelLevelDetailShare::~UICustomLevelLevelDetailShare(UICustomLevelLevelDetailShare *this)

{
  ~UICustomLevelLevelDetailShare(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelLevelDetailShare::OnCreate() */

void __thiscall UICustomLevelLevelDetailShare::OnCreate(UICustomLevelLevelDetailShare *this)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long *plVar5;
  Util *this_00;
  SocialShareMgr *this_01;
  UIWidgetImage *this_02;
  string asStack_40 [8];
  DString aDStack_38 [16];
  DString aDStack_28 [16];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = UI::Dialog::OnCreate((Dialog *)this);
  uVar4 = Sexy::LazySingleton<SocialShareMgr>::GetInstance();
  uVar3 = SocialShareMgr::HasShareReward(uVar4,1);
  std::string::string(asStack_18,"UIImage_Share_Reward");
  plVar5 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_18);
  (**(code **)(*plVar5 + 0x158))(plVar5,uVar3);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"UIImage_Share_Code");
  plVar5 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_18);
  (**(code **)(*plVar5 + 0x158))(plVar5,1);
  std::string::~string(asStack_18);
  nop();
  Android::Util::GetPackageName(this_00);
  this_01 = (SocialShareMgr *)Sexy::LazySingleton<SocialShareMgr>::GetInstance();
  cVar1 = SocialShareMgr::HasShareCode(this_01,asStack_40);
  if (cVar1 == '\0') {
    std::string::string(asStack_18,"UIImage_Share_Code");
    plVar5 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_18);
    (**(code **)(*plVar5 + 0x158))(plVar5,0);
    std::string::~string(asStack_18);
    nop();
  }
  else {
    DString::DString(aDStack_38,asStack_40);
    DString::makeUpper();
    DString::operator=(aDStack_38,(DString *)asStack_18);
    DString::~DString((DString *)asStack_18);
    DString::replace((char *)aDStack_38,".");
    ::operator+("IMAGE_UI_CUSTOM_LEVEL_SHARE_CODE_",aDStack_28);
    DString::operator=(aDStack_38,(DString *)asStack_18);
    DString::~DString((DString *)asStack_18);
    DString::~DString(aDStack_28);
    std::string::string((string *)aDStack_28,"UIImage_Share_Code");
    this_02 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)aDStack_28);
    DString::operator_cast_to_string(aDStack_38);
    UIWidgetImage::SetImage(this_02,asStack_18);
    std::string::~string(asStack_18);
    std::string::~string((string *)aDStack_28);
    nop();
    DString::~DString(aDStack_38);
  }
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelLevelDetailShare::DoSave() */

void __thiscall UICustomLevelLevelDetailShare::DoSave(UICustomLevelLevelDetailShare *this)

{
  char *pcVar1;
  TGALogMgr *this_00;
  SocialShareMgr *this_01;
  size_t in_x2;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  TGASecretStore aTStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [16];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TGASecretStore::TGASecretStore(aTStack_38);
  std::string::append((string *)aTStack_38,"2",in_x2);
  DString::DString((DString *)&local_48,*(int *)(this + 0x14c));
  pcVar1 = (char *)DString::c_str((DString *)&local_48);
  std::string::append(asStack_30,pcVar1,in_x2);
  DString::~DString((DString *)&local_48);
  pcVar1 = "0";
  if (*(int *)(this + 0x208) != 0) {
    pcVar1 = "1";
  }
  std::string::append(asStack_28,pcVar1,in_x2);
  std::string::append(asStack_18,"0",in_x2);
  this_00 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogCustomLevelShare(this_00,(TGACustomLevelShareData *)aTStack_38);
  Sexy::Insets::Insets((Insets *)&local_48);
  GetParams(this,&local_48,&local_44,&local_40,&local_3c);
  this_01 = (SocialShareMgr *)Sexy::LazySingleton<SocialShareMgr>::GetInstance();
  SocialShareMgr::SaveScreenImageToGallery(this_01,local_48,local_44,local_40,local_3c);
  DropGroupNode::~DropGroupNode((DropGroupNode *)aTStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelLevelDetailShare::DoShare() */

void __thiscall UICustomLevelLevelDetailShare::DoShare(UICustomLevelLevelDetailShare *this)

{
  char *__s;
  TGALogMgr *this_00;
  long lVar1;
  SocialShareMgr *pSVar2;
  char *__s_00;
  size_t in_x2;
  undefined4 local_48;
  int local_44;
  int local_40;
  int local_3c;
  TGASecretStore aTStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [16];
  string asStack_18 [16];
  long local_8;
  
  __s_00 = "1";
  local_8 = ___stack_chk_guard;
  TGASecretStore::TGASecretStore(aTStack_38);
  std::string::append((string *)aTStack_38,"1",in_x2);
  DString::DString((DString *)&local_48,*(int *)(this + 0x14c));
  __s = (char *)DString::c_str((DString *)&local_48);
  std::string::append(asStack_30,__s,in_x2);
  DString::~DString((DString *)&local_48);
  if (*(int *)(this + 0x208) == 0) {
    __s_00 = "0";
  }
  std::string::append(asStack_28,__s_00,in_x2);
  std::string::append(asStack_18,"0",in_x2);
  this_00 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogCustomLevelShare(this_00,(TGACustomLevelShareData *)aTStack_38);
  lVar1 = Sexy::LazySingleton<SocialShareMgr>::GetInstance();
  FUN_035e6440(lVar1 + 0x20);
  Sexy::Insets::Insets((Insets *)&local_48);
  GetParams(this,(int *)&local_48,&local_44,&local_40,&local_3c);
  pSVar2 = (SocialShareMgr *)Sexy::LazySingleton<SocialShareMgr>::GetInstance();
  SocialShareMgr::ShareWithImage(pSVar2,0,local_48,local_44,local_40,local_3c);
  DropGroupNode::~DropGroupNode((DropGroupNode *)aTStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* UICustomLevelLevelDetailShare::ButtonDepress(int) */

void __thiscall
UICustomLevelLevelDetailShare::ButtonDepress(UICustomLevelLevelDetailShare *this,int param_1)

{
  if (param_1 == 0xbb9) {
    DoSave(this);
    return;
  }
  if (param_1 != 0xbba) {
    if (param_1 != 3000) {
      return;
    }
    DoShare(this);
    return;
  }
  UISingletonDialog<UICustomLevelLevelDetailShare>::CloseDialog();
  return;
}


/* non-virtual thunk to UICustomLevelLevelDetailShare::ButtonDepress(int) */

void __thiscall
UICustomLevelLevelDetailShare::ButtonDepress(UICustomLevelLevelDetailShare *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelLevelDetailShare::InitView(int) */

void __thiscall
UICustomLevelLevelDetailShare::InitView(UICustomLevelLevelDetailShare *this,int param_1)

{
  wstring *pwVar1;
  uint uVar2;
  bool bVar3;
  UIWidgetImage *pUVar4;
  long *plVar5;
  CustomLevelDetailItemWidget *this_00;
  UIWidgetText *pUVar6;
  CustomLevelFilterSelectAllButton *this_01;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  string *extraout_x1_02;
  string *extraout_x1_03;
  undefined8 uVar7;
  code *pcVar8;
  float fVar9;
  undefined1 auStack_68 [8];
  string asStack_60 [8];
  wstring awStack_58 [8];
  Sexy aSStack_50 [8];
  Sexy aSStack_48 [8];
  wstring awStack_40 [8];
  Insets aIStack_38 [16];
  wstring awStack_28 [16];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0x208) = param_1;
  std::string::string(asStack_18,"Background_0");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  UI::Dialog::SetCenter((Dialog *)this,(Widget *)pUVar4,true);
  std::string::string(asStack_18,"level_icon");
  plVar5 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  Sexy::Insets::Insets(aIStack_38,0,0,(int)plVar5[10],*(int *)((long)plVar5 + 0x54));
  this_00 = ::operator_new(0x3c8);
  CustomLevelDetailItemWidget::CustomLevelDetailItemWidget(this_00,0);
  *(CustomLevelDetailItemWidget **)(this + 0x210) = this_00;
  FUN_035e5ccc(this_00 + 0x3c0,*(undefined4 *)(this + 0x208));
  FUN_035e5cd4(*(long *)(this + 0x210) + 0x3c4,1);
  (**(code **)(**(long **)(this + 0x210) + 0x328))(*(long **)(this + 0x210),this + 0x138);
  (**(code **)(**(long **)(this + 0x210) + 0x1a0))(*(long **)(this + 0x210),aIStack_38);
  (**(code **)(**(long **)(this + 0x210) + 0x310))(*(long **)(this + 0x210),1);
  (**(code **)(*plVar5 + 0x60))(plVar5,*(undefined8 *)(this + 0x210));
  std::string::string(asStack_18,"zan_count");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  *(UIWidgetText **)(this + 0x218) = pUVar6;
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"cai_count");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  *(UIWidgetText **)(this + 0x220) = pUVar6;
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"playtime");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  *(UIWidgetText **)(this + 0x228) = pUVar6;
  std::string::~string(asStack_18);
  nop();
  uVar7 = *(undefined8 *)(this + 0x228);
  FUN_05478178(awStack_28,L"[CUSTOM_LEVEL_LEVEL_DETAIL_TEXT_BESTRECORD]",aSStack_48);
  bVar3 = std::operator!=((string *)(this + 0x1b0),"");
  if (bVar3) {
    Sexy::UTF8StringToWString((Sexy *)(this + 0x1b0),extraout_x1);
    TodReplaceString(awStack_28,L"{NAME}",awStack_40);
    PuzzleTip::SetTip(uVar7,asStack_18);
    FUN_05476c50(asStack_18);
    FUN_05476c50(awStack_40);
  }
  else {
    FUN_05478178(awStack_40,&DAT_057031b0,aSStack_50);
    TodReplaceString(awStack_28,L"{NAME}",awStack_40);
    PuzzleTip::SetTip(uVar7,asStack_18);
    FUN_05476c50(asStack_18);
    FUN_05476c50(awStack_40);
    nop();
  }
  FUN_05476c50(awStack_28);
  pwVar1 = (wstring *)(this + 0x240);
  nop();
  uVar2 = *(uint *)(this + 0x164);
  uVar7 = *(undefined8 *)(this + 0x218);
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  Sexy::StrFormat(L"%d",asStack_18,(ulong)uVar2);
  PuzzleTip::SetTip(uVar7,asStack_18);
  FUN_05476c50(asStack_18);
  uVar2 = *(uint *)(this + 0x16c);
  uVar7 = *(undefined8 *)(this + 0x220);
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  Sexy::StrFormat(L"%d",asStack_18,(ulong)uVar2);
  PuzzleTip::SetTip(uVar7,asStack_18);
  FUN_05476c50(asStack_18);
  std::string::string(asStack_18,"UIImage_Appraise1");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
  (**(code **)(*(long *)pUVar4 + 0x158))(pUVar4,0);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"UIImage_Appraise2");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
  (**(code **)(*(long *)pUVar4 + 0x158))(pUVar4,0);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"UIImage_Appraise3");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
  (**(code **)(*(long *)pUVar4 + 0x158))(pUVar4,0);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"playstyle");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  Sexy::StrFormat("[CUSTOM_LEVEL_LEVEL_MODE_TYPE_%d]",asStack_60,(ulong)*(uint *)(this + 0x15c));
  StringHelper::ToStringValue(asStack_60);
  FUN_05478178(awStack_40,L"[CUSTOM_LEVEL_LEVEL_DETAIL_TEXT_PLAY_STYLE]",aSStack_48);
  TodReplaceString(awStack_40,L"{NAME}",awStack_58);
  TodStringTranslate(awStack_28);
  PuzzleTip::SetTip(pUVar6,asStack_18);
  FUN_05476c50(asStack_18);
  FUN_05476c50(awStack_28);
  FUN_05476c50(awStack_40);
  nop();
  std::string::string(asStack_18,"levelname");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  *(UIWidgetText **)(this + 0x230) = pUVar6;
  std::string::~string(asStack_18);
  nop();
  FUN_05475d88(aSStack_50,this + 0x150);
  uVar7 = *(undefined8 *)(this + 0x230);
  FUN_05478178(awStack_28,L"[CUSTOM_LEVEL_LEVEL_DETAIL_TEXT_NAME]",aSStack_48);
  Sexy::UTF8StringToWString(aSStack_50,extraout_x1_00);
  TodReplaceString(awStack_28,L"{NAME}",awStack_40);
  PuzzleTip::SetTip(uVar7,asStack_18);
  FUN_05476c50(asStack_18);
  FUN_05476c50(awStack_40);
  FUN_05476c50(awStack_28);
  nop();
  FUN_035e4e48(awStack_40);
  DString::DString((DString *)awStack_28,*(int *)(this + 0x14c));
  ::operator+((string *)awStack_40,(DString *)awStack_28);
  DString::operator_cast_to_string((DString *)asStack_18);
  DString::~DString((DString *)asStack_18);
  DString::~DString((DString *)awStack_28);
  std::string::~string((string *)awStack_40);
  std::string::string(asStack_18,"levelid");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  FUN_05478178(awStack_28,L"[CUSTOM_LEVEL_LEVEL_DETAIL_TEXT_ID]",auStack_68);
  Sexy::UTF8StringToWString(aSStack_48,extraout_x1_01);
  TodReplaceString(awStack_28,L"{NAME}",awStack_40);
  PuzzleTip::SetTip(pUVar6,asStack_18);
  FUN_05476c50(asStack_18);
  FUN_05476c50(awStack_40);
  FUN_05476c50(awStack_28);
  nop();
  std::string::string(asStack_18,"uploaddate");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  FUN_05478178(awStack_28,L"[CUSTOM_LEVEL_LEVEL_DETAIL_TEXT_UPLOAD_DATE]",auStack_68);
  Sexy::UTF8StringToWString((Sexy *)(this + 0x198),extraout_x1_02);
  TodReplaceString(awStack_28,L"{NAME}",awStack_40);
  PuzzleTip::SetTip(pUVar6,asStack_18);
  FUN_05476c50(asStack_18);
  FUN_05476c50(awStack_40);
  FUN_05476c50(awStack_28);
  nop();
  std::string::string(asStack_18,"playername");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  Sexy::UTF8StringToWString((Sexy *)(this + 0x188),extraout_x1_03);
  PuzzleTip::SetTip(pUVar6,asStack_18);
  FUN_05476c50(asStack_18);
  fVar9 = (float)LawnApp::GetCustomLevelEvaluationParam(gLawnApp);
  fVar9 = (float)CalcEvalutionParam(this,*(int *)(this + 0x164),
                                    *(int *)(this + 0x164) + *(int *)(this + 0x168),fVar9);
  *(float *)(this + 0x238) = fVar9;
  GetEvaluationString(this,fVar9);
  FUN_054766c8(pwVar1,asStack_18);
  FUN_05476c50(asStack_18);
  if (*(int *)(this + 0x164) + *(int *)(this + 0x168) < 0x32) {
    FUN_05476574(asStack_18);
    FUN_054766c8(pwVar1,asStack_18);
    FUN_05476c50(asStack_18);
  }
  Sexy::OutputDebugStrF((wchar_t *)"GetEvaluationString %f",(double)*(float *)(this + 0x238));
  std::string::string(asStack_18,"evaluateValue");
  plVar5 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  pUVar6 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(pUVar6,pwVar1);
  (**(code **)(*(long *)pUVar6 + 0x198))
            (pUVar6,0,0,(int)plVar5[10],*(undefined4 *)((long)plVar5 + 0x54));
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline);
  FUN_035e5cac(pUVar6 + 0xe8,uVar7);
  FUN_035e5cb4(pUVar6 + 0xe0,3);
  pcVar8 = *(code **)(*(long *)pUVar6 + 0x170);
  Sexy::Insets::Insets((Insets *)asStack_18,0,0xf7,0x17,0xff);
  (*pcVar8)(pUVar6,0,asStack_18);
  (**(code **)(*plVar5 + 0x60))(plVar5,pUVar6);
  std::string::string(asStack_18,"copybutton");
  plVar5 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  this_01 = ::operator_new(0x348);
  CustomLevelFilterSelectAllButton::CustomLevelFilterSelectAllButton(this_01,0x3f2);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,(int)plVar5[10],*(undefined4 *)((long)plVar5 + 0x54));
  FUN_035e5d08(this_01 + 0x308,this[0x160]);
  TodStringTranslate(L"[CUSTOM_LEVEL_LEVEL_DETAIL_BTN_COPYCHANGE]");
  PVZ1ModeSelectLevelChallengeWidget::SetDescStr(this_01,asStack_18);
  FUN_05476c50(asStack_18);
  (**(code **)(*plVar5 + 0x60))(plVar5,this_01);
  std::string::~string((string *)aSStack_48);
  std::string::~string((string *)aSStack_50);
  FUN_05476c50(awStack_58);
  std::string::~string(asStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

