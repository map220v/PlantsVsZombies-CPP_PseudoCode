// Class: ConsumeAndReceivePage


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConsumeAndReceivePage::GetLayoutName() */

void __thiscall ConsumeAndReceivePage::GetLayoutName(ConsumeAndReceivePage *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIConsumeAndReceivePage");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConsumeAndReceivePage::UpdateInfo() */

void __thiscall ConsumeAndReceivePage::UpdateInfo(ConsumeAndReceivePage *this)

{
  ProfileMgr *this_00;
  long lVar1;
  UIWidgetText *pUVar2;
  ulong uVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar1 = ProfileMgr::GetCurrentProfile(this_00);
  std::string::string(asStack_10,"UIText_RechargeValue");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  uVar3 = FUN_03ac12e0(*(undefined4 *)(lVar1 + 0x105c));
  Sexy::StrFormat(L"%d",asStack_10,uVar3 & 0xffffffff);
  PuzzleTip::SetTip(pUVar2,asStack_10);
  FUN_05476c50(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConsumeAndReceivePage::ConsumeAndReceivePage() */

void __thiscall ConsumeAndReceivePage::ConsumeAndReceivePage(ConsumeAndReceivePage *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<ConsumeAndReceivePage>::UISingletonDialog
            ((UISingletonDialog<ConsumeAndReceivePage> *)this);
  *(undefined4 *)(this + 0x134) = 5;
  *(undefined ***)this = &PTR_GetClass_06722150;
  *(undefined **)(this + 0xd8) = &DAT_067224a0;
  FUN_05478178(this + 0x138,&DAT_056f11a8,&local_20);
  nop();
  Sexy::Color::Color((Color *)(this + 0x140),1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x150));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifiedReceiveMessage);
  local_40 = local_20;
  uStack_38 = uStack_18;
  local_30 = local_10;
  MessageRouter::
  Subscribe<bool,S2C_PiggyBankReward_const*,Sexy::CBMemberTranslatorX<ConsumeAndReceivePage,void(ConsumeAndReceivePage::*)(bool,S2C_PiggyBankReward_const*)>>
            ((MessageRouter *)puVar1,Message::NotifySpringOutingConsumeAndReceive,&local_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ConsumeAndReceivePage::~ConsumeAndReceivePage() */

void __thiscall ConsumeAndReceivePage::~ConsumeAndReceivePage(ConsumeAndReceivePage *this)

{
  *(undefined **)(this + 0xd8) = &DAT_067224a0;
  *(undefined ***)this = &PTR_GetClass_06722150;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<ConsumeAndReceiveItemWidget*,std::allocator<ConsumeAndReceiveItemWidget*>>::~vector
            ((vector<ConsumeAndReceiveItemWidget*,std::allocator<ConsumeAndReceiveItemWidget*>> *)
             (this + 0x150));
  FUN_05476c50(this + 0x138);
  UISingletonDialog<ConsumeAndReceivePage>::~UISingletonDialog
            ((UISingletonDialog<ConsumeAndReceivePage> *)this);
  return;
}


/* ConsumeAndReceivePage::~ConsumeAndReceivePage() */

void __thiscall ConsumeAndReceivePage::~ConsumeAndReceivePage(ConsumeAndReceivePage *this)

{
  ~ConsumeAndReceivePage(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConsumeAndReceivePage::InitTestData(NetworkConsumeAndReceive&) */

void __thiscall
ConsumeAndReceivePage::InitTestData(ConsumeAndReceivePage *this,NetworkConsumeAndReceive *param_1)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  iVar1 = 5;
  *(undefined4 *)(param_1 + 0x14) = 0x494;
  local_8 = ___stack_chk_guard;
  do {
    local_18 = 0x494;
    local_10 = 1000;
    local_14 = 0xf;
    local_c = 5000;
    std::vector<ConsumeAndReceiveReward,std::allocator<ConsumeAndReceiveReward>>::push_back
              ((vector<ConsumeAndReceiveReward,std::allocator<ConsumeAndReceiveReward>> *)
               (param_1 + 0x18),(ConsumeAndReceiveReward *)&local_18);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConsumeAndReceivePage::UpdateTimer() */

void __thiscall ConsumeAndReceivePage::UpdateTimer(ConsumeAndReceivePage *this)

{
  ConsumeAndReceivePage *pCVar1;
  int iVar2;
  long lVar3;
  UIWidgetText *pUVar4;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  wstring awStack_90 [8];
  ActiveItem aAStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  iVar2 = ActiveItem::GetLeftDays(aAStack_88);
  lVar3 = LawnApp::GetRealBeijingTime(gLawnApp);
  lVar3 = 0x15180 - (lVar3 + 0x1c200) % 0x15180;
  if (iVar2 < 1) {
    iVar2 = (int)(lVar3 / 0x3c);
    Sexy::StrFormat(L"%02d: %02d: %02d",awStack_90,lVar3 / 0xe10 & 0xffffffff,
                    (ulong)(uint)(iVar2 + (int)((lVar3 / 0x3c) / 0x3c) * -0x3c),
                    (ulong)(uint)((int)lVar3 + iVar2 * -0x3c));
    FUN_054766c8(this + 0x138,awStack_90);
    FUN_05476c50(awStack_90);
  }
  else {
    pCVar1 = this + 0x138;
    FUN_05478178(awStack_90,L"[TOTAL_LOGIN_DAYS]",auStack_a0);
    TodReplaceNumberString(awStack_90,L"{DAY_COUNT}",iVar2);
    FUN_05476c50(awStack_90);
    nop();
    Sexy::StrFormat(L"%02d:%02d",awStack_90,lVar3 / 0xe10 & 0xffffffff,
                    (ulong)(uint)((int)(lVar3 / 0x3c) + (int)((lVar3 / 0x3c) / 0x3c) * -0x3c));
    FUN_054766c8(pCVar1,awStack_90);
    FUN_05476c50(awStack_90);
    FUN_0342e660(awStack_90,auStack_98,pCVar1);
    FUN_054766c8(pCVar1,awStack_90);
    FUN_05476c50(awStack_90);
    FUN_05476c50(auStack_98);
  }
  std::string::string((string *)awStack_90,"UIText_ActivityTime");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)awStack_90);
  std::string::~string((string *)awStack_90);
  nop();
  if (pUVar4 != (UIWidgetText *)0x0) {
    PuzzleTip::SetTip(pUVar4,this + 0x138);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ConsumeAndReceivePage::Update() */

void __thiscall ConsumeAndReceivePage::Update(ConsumeAndReceivePage *this)

{
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  UpdateTimer(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConsumeAndReceivePage::HasAnyNotReceivedReward() */

void ConsumeAndReceivePage::HasAnyNotReceivedReward(void)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  ProfileMgr *this;
  long lVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  NetworkConsumeAndReceive aNStack_c0 [24];
  undefined8 local_a8;
  undefined8 local_a0;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar4);
  cVar3 = FUN_03ac12f8(local_80);
  bVar8 = false;
  if ((cVar3 != '\0') && (bVar8 = false, local_70 != '\0')) {
    NetworkConsumeAndReceive::NetworkConsumeAndReceive(aNStack_c0);
    cVar3 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aNStack_c0);
    if (cVar3 == '\0') {
LAB_03ada09c:
      bVar8 = false;
    }
    else {
      this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      lVar5 = ProfileMgr::GetCurrentProfile(this);
      iVar4 = FUN_03ac12e0(*(undefined4 *)(lVar5 + 0x105c));
      lVar6 = FUN_03ac20c4(local_a8,local_a0);
      lVar5 = 0;
      do {
        if (lVar5 == lVar6) goto LAB_03ada09c;
        lVar7 = FUN_03ac20ec(local_a8,lVar5);
        bVar1 = *(int *)(lVar7 + 8) <= iVar4;
        bVar2 = *(int *)(lVar7 + 0xc) == 0;
        bVar8 = bVar1 && bVar2;
        lVar5 = lVar5 + 1;
      } while (!bVar1 || !bVar2);
    }
    NetworkConsumeAndReceive::~NetworkConsumeAndReceive(aNStack_c0);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar8);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConsumeAndReceivePage::InitView() */

void __thiscall ConsumeAndReceivePage::InitView(ConsumeAndReceivePage *this)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  UIWidgetImage *pUVar9;
  UIWidgetText *pUVar10;
  ProfileMgr *this_00;
  long lVar11;
  UIRewardFrame *pUVar12;
  ConsumeAndReceiveItemWidget *pCVar13;
  int *piVar14;
  UIWidgetImage *pUVar15;
  char *pcVar16;
  TGALogMgr *pTVar17;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  string *extraout_x1_02;
  string *__n;
  ulong uVar18;
  undefined8 uVar19;
  uint uVar20;
  code *pcVar21;
  float fVar22;
  string asStack_168 [8];
  string asStack_160 [8];
  undefined1 auStack_158 [8];
  string asStack_150 [8];
  wstring awStack_148 [8];
  ConsumeAndReceiveItemWidget *local_140;
  string asStack_138 [8];
  Sexy aSStack_130 [8];
  string asStack_128 [8];
  string asStack_120 [8];
  string asStack_118 [40];
  string asStack_f0 [48];
  NetworkConsumeAndReceive aNStack_c0 [24];
  undefined8 local_a8;
  undefined8 local_a0;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  uVar19 = *(undefined8 *)(this + 0x150);
  uVar18 = 0;
  local_8 = ___stack_chk_guard;
  uVar7 = FUN_03ac20b0(uVar19,*(undefined8 *)(this + 0x158));
  if (uVar7 != 0) {
    do {
      plVar8 = (long *)FUN_03ac20bc(uVar19,uVar18);
      if ((*plVar8 != 0) && (plVar8 = *(long **)(*plVar8 + 0x20), plVar8 != (long *)0x0)) {
        (**(code **)(*plVar8 + 0x68))();
        uVar19 = *(undefined8 *)(this + 0x150);
        uVar7 = FUN_03ac20b0(uVar19,*(undefined8 *)(this + 0x158));
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 < uVar7);
  }
  iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar5);
  cVar4 = FUN_03ac12f8(local_80);
  if ((cVar4 != '\0') && (local_70 != '\0')) {
    NetworkConsumeAndReceive::NetworkConsumeAndReceive(aNStack_c0);
    cVar4 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aNStack_c0);
    if (cVar4 != '\0') {
      std::string::string(asStack_168,"");
      nop();
      iVar5 = PlantChipNameMapperServerID::GetInstance();
      NameMapperBase::GetNameForId(iVar5);
      FUN_05474278(asStack_168,asStack_f0);
      std::string::~string(asStack_f0);
      std::string::string(asStack_128,"IMAGE_UI_NATIONALCENTER_RECHARGEPAGE_");
      Sexy::StringToUpper((Sexy *)asStack_168,extraout_x1);
      std::operator+(asStack_128,asStack_120);
      std::operator+(asStack_f0,"_WEEKLY");
      std::string::~string(asStack_f0);
      std::string::~string(asStack_120);
      std::string::~string(asStack_128);
      nop();
      std::string::string(asStack_f0,"UImage_icon");
      pUVar9 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_f0);
      std::string::~string(asStack_f0);
      nop();
      UIWidgetImage::SetImage(pUVar9,asStack_160);
      std::string::string(asStack_f0,"UIText_DES");
      pUVar10 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_f0);
      std::string::~string(asStack_f0);
      nop();
      if (pUVar10 != (UIWidgetText *)0x0) {
        TodStringTranslate(L"[CONSUME_RECIVE_DES]");
        Sexy::StringToUpper((Sexy *)asStack_168,extraout_x1_00);
        std::operator+("[",(string *)&local_140);
        std::operator+(asStack_138,"]");
        Sexy::ToSexyString(aSStack_130,extraout_x1_01);
        TodStringTranslate((wstring *)asStack_128);
        TodReplaceString(awStack_148,L"{NAME}",(wstring *)asStack_120);
        PuzzleTip::SetTip(pUVar10,asStack_f0);
        FUN_05476c50(asStack_f0);
        FUN_05476c50(asStack_120);
        FUN_05476c50(asStack_128);
        std::string::~string((string *)aSStack_130);
        std::string::~string(asStack_138);
        std::string::~string((string *)&local_140);
        FUN_05476c50(awStack_148);
      }
      this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      lVar11 = ProfileMgr::GetCurrentProfile(this_00);
      std::string::string(asStack_f0,"UIText_RechargeValue");
      uVar20 = 0;
      pUVar10 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_f0);
      std::string::~string(asStack_f0);
      nop();
      uVar6 = FUN_03ac12e0(*(undefined4 *)(lVar11 + 0x105c));
      Sexy::StrFormat(L"%d",auStack_158,(ulong)uVar6);
      PuzzleTip::SetTip(pUVar10,auStack_158);
      std::vector<ConsumeAndReceiveItemWidget*,std::allocator<ConsumeAndReceiveItemWidget*>>::clear
                ((vector<ConsumeAndReceiveItemWidget*,std::allocator<ConsumeAndReceiveItemWidget*>>
                  *)(this + 0x150));
      uVar18 = 0;
      while( true ) {
        uVar19 = local_a8;
        uVar7 = FUN_03ac20c4(local_a8,local_a0);
        if (uVar7 <= uVar18) break;
        uVar1 = (int)uVar18 + 1;
        lVar11 = FUN_03ac20ec(uVar19,uVar18);
        bVar3 = *(int *)(lVar11 + 0xc) != 0;
        Sexy::StrFormat("UIImage_Mask%d",asStack_150,(ulong)uVar1);
        pcVar16 = (char *)FUN_0547429c(asStack_150);
        std::string::string(asStack_f0,pcVar16);
        pUVar9 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_f0);
        std::string::~string(asStack_f0);
        nop();
        (**(code **)(*(long *)pUVar9 + 0x158))(pUVar9,bVar3);
        Sexy::StrFormat("UIImage_Reward%d",(string *)awStack_148,(ulong)uVar1);
        pcVar16 = (char *)FUN_0547429c((string *)awStack_148);
        std::string::string(asStack_f0,pcVar16);
        pUVar15 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_f0);
        std::string::~string(asStack_f0);
        nop();
        pUVar12 = ::operator_new(0x148);
        UIRewardFrame::UIRewardFrame(pUVar12,3,asStack_168,0,0);
        iVar5 = (int)((float)*(int *)(pUVar15 + 0x54) * 0.95);
        (**(code **)(*(long *)pUVar12 + 0x198))
                  (pUVar12,(int)((float)*(int *)(pUVar15 + 0x50) * 0.13),
                   (int)((float)*(int *)(pUVar15 + 0x54) * 0.025),iVar5,iVar5);
        lVar11 = *(long *)pUVar15;
        pUVar12[0x59] = (UIRewardFrame)0x0;
        (**(code **)(lVar11 + 0x60))(pUVar15,pUVar12);
        pCVar13 = ::operator_new(0x100);
        ConsumeAndReceiveItemWidget::ConsumeAndReceiveItemWidget(pCVar13);
        local_140 = pCVar13;
        piVar14 = (int *)FUN_03ac20ec(local_a8,uVar18);
        ConsumeAndReceiveItemWidget::LoadData
                  (pCVar13,(int)uVar18,*piVar14,piVar14[1],piVar14[2],
                   piVar14[2] <= (int)uVar6 && !bVar3);
        PuzzleTip::SetFont((PuzzleTip *)local_140,(PrimeTypeface *)pUVar9);
        pCVar13 = local_140;
        pcVar21 = *(code **)(*(long *)local_140 + 0x1a0);
        Sexy::Insets::Insets
                  ((Insets *)asStack_f0,0,0,*(int *)(pUVar15 + 0x50),*(int *)(pUVar15 + 0x54));
        (*pcVar21)(pCVar13,asStack_f0);
        (**(code **)(*(long *)pUVar15 + 0x60))(pUVar15,local_140);
        std::vector<ConsumeAndReceiveItemWidget*,std::allocator<ConsumeAndReceiveItemWidget*>>::
        push_back((vector<ConsumeAndReceiveItemWidget*,std::allocator<ConsumeAndReceiveItemWidget*>>
                   *)(this + 0x150),&local_140);
        Sexy::StrFormat("UIImage_Level%d",asStack_138,(ulong)uVar1);
        pcVar16 = (char *)FUN_0547429c(asStack_138);
        std::string::string(asStack_f0,pcVar16);
        pUVar10 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_f0);
        std::string::~string(asStack_f0);
        nop();
        FUN_05476574(aSStack_130);
        lVar11 = FUN_03ac20ec(local_a8,uVar18);
        std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar11 + 8));
        Sexy::ToSexyString((Sexy *)asStack_128,extraout_x1_02);
        TodStringTranslate((wstring *)asStack_120);
        FUN_054766c8(aSStack_130,asStack_f0);
        FUN_05476c50(asStack_f0);
        FUN_05476c50(asStack_120);
        std::string::~string(asStack_128);
        PuzzleTip::SetTip(pUVar10,aSStack_130);
        lVar11 = FUN_03ac20ec(local_a8,uVar18);
        if (*(int *)(lVar11 + 8) <= (int)uVar6) {
          uVar20 = uVar1;
        }
        FUN_05476c50(aSStack_130);
        std::string::~string(asStack_138);
        std::string::~string((string *)awStack_148);
        std::string::~string(asStack_150);
        uVar18 = uVar18 + 1;
      }
      fVar22 = 1.0;
      lVar11 = FUN_03ac20ec(uVar19,4);
      if ((int)uVar6 < *(int *)(lVar11 + 8)) {
        if (uVar20 == 0) {
          lVar11 = FUN_03ac20ec(uVar19,0);
          iVar5 = *(int *)(lVar11 + 8);
          uVar1 = uVar6;
        }
        else {
          lVar11 = FUN_03ac20ec(uVar19,(long)(int)(uVar20 - 1));
          iVar2 = *(int *)(lVar11 + 8);
          lVar11 = FUN_03ac20ec(uVar19,(long)(int)uVar20);
          iVar5 = *(int *)(lVar11 + 8) - iVar2;
          uVar1 = uVar6 - iVar2;
        }
        fVar22 = ((float)(int)uVar1 / (float)iVar5) * 0.2;
        if (fVar22 <= 0.0) {
          fVar22 = 0.0;
        }
        fVar22 = (float)(int)uVar20 * 0.2 + fVar22;
      }
      std::string::string(asStack_f0,"UIImage_bar");
      pUVar9 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_f0);
      std::string::~string(asStack_f0);
      nop();
      __n = asStack_120;
      std::string::string(asStack_f0,"UIImage_barBG");
      pUVar15 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_f0);
      std::string::~string(asStack_f0);
      nop();
      *(int *)(pUVar9 + 0x50) = (int)(fVar22 * (float)*(int *)(pUVar15 + 0x50));
      TGASecretStore::TGASecretStore((TGASecretStore *)asStack_120);
      std::string::append(asStack_120,"1",(size_t)__n);
      DString::DString((DString *)asStack_f0,uVar6);
      pcVar16 = (char *)DString::c_str((DString *)asStack_f0);
      std::string::append(asStack_118,pcVar16,(size_t)__n);
      DString::~DString((DString *)asStack_f0);
      pTVar17 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGASecretStore::TGASecretStore((TGASecretStore *)asStack_f0,(TGASecretStore *)asStack_120);
      TGALogMgr::LogConsumeReceive(pTVar17,asStack_f0);
      DropGroupNode::~DropGroupNode((DropGroupNode *)asStack_f0);
      DropGroupNode::~DropGroupNode((DropGroupNode *)asStack_120);
      FUN_05476c50(auStack_158);
      std::string::~string(asStack_160);
      std::string::~string(asStack_168);
      NetworkConsumeAndReceive::~NetworkConsumeAndReceive(aNStack_c0);
      ActiveItem::~ActiveItem(aAStack_88);
      goto LAB_03ae41c0;
    }
    NetworkConsumeAndReceive::~NetworkConsumeAndReceive(aNStack_c0);
  }
  ActiveItem::~ActiveItem(aAStack_88);
LAB_03ae41c0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ConsumeAndReceivePage::OnCreate() */

char __thiscall ConsumeAndReceivePage::OnCreate(ConsumeAndReceivePage *this)

{
  char cVar1;
  
  cVar1 = UI::Dialog::OnCreate((Dialog *)this);
  if (cVar1 != '\0') {
    InitView(this);
  }
  return cVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConsumeAndReceivePage::OnNotifiedReceiveMessage(bool, S2C_PiggyBankReward const*) */

void __thiscall
ConsumeAndReceivePage::OnNotifiedReceiveMessage
          (ConsumeAndReceivePage *this,bool param_1,S2C_PiggyBankReward *param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  UIWidgetImage *pUVar6;
  UILimitGroupShowReward *this_00;
  AbtestMgr *this_01;
  TGALogMgr *pTVar7;
  size_t __n;
  undefined8 uVar8;
  long *plVar9;
  undefined1 auStack_90 [8];
  string asStack_88 [8];
  int local_80 [6];
  string asStack_68 [8];
  string asStack_60 [8];
  undefined1 auStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    uVar8 = *(undefined8 *)(this + 0x150);
    iVar2 = *(int *)(param_2 + 0x1c);
    uVar3 = FUN_03ac20b0(uVar8,*(undefined8 *)(this + 0x158));
    if ((ulong)(long)iVar2 < uVar3) {
      puVar4 = (undefined8 *)FUN_03ac20bc(uVar8);
      plVar9 = (long *)*puVar4;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x188))(plVar9,1);
        (**(code **)(*plVar9 + 0x158))(plVar9,0);
      }
      Sexy::StrFormat("UIImage_Mask%d",asStack_68,(ulong)(iVar2 + 1));
      pcVar5 = (char *)FUN_0547429c(asStack_68);
      std::string::string(asStack_38,pcVar5);
      pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_38);
      std::string::~string(asStack_38);
      nop();
      (**(code **)(*(long *)pUVar6 + 0x158))(pUVar6,1);
      std::string::~string(asStack_68);
    }
    ProfileChangeItemAmount(*(int *)(param_2 + 0x14),*(int *)(param_2 + 0x18),false);
    GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)asStack_38);
    this_00 = (UILimitGroupShowReward *)UISingletonDialog<UILimitGroupShowReward>::ShowDialog();
    __n = (size_t)*(uint *)(param_2 + 0x18);
    UILimitGroupShowReward::LoadData(this_00,*(int *)(param_2 + 0x14),*(uint *)(param_2 + 0x18));
    TodStringTranslate(L"[AWARD_SCREEN_NEW_BONUS]");
    FUN_05477b24((GAME_ITEM_INFO *)asStack_38,auStack_90);
    UILimitGroupShowReward::SetTitle(this_00,(GAME_ITEM_INFO *)asStack_38);
    FUN_05476c50((GAME_ITEM_INFO *)asStack_38);
    iVar1 = PlantChipNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar1);
    local_80[0] = 100;
    local_80[1] = 500;
    local_80[2] = 1000;
    local_80[3] = 2000;
    local_80[4] = 3000;
    TGASecretStore::TGASecretStore((TGASecretStore *)asStack_68);
    std::string::append(asStack_68,"2",__n);
    DString::DString((DString *)asStack_38,local_80[iVar2]);
    pcVar5 = (char *)DString::c_str((DString *)asStack_38);
    std::string::append(asStack_60,pcVar5,__n);
    DString::~DString((DString *)asStack_38);
    thunk_FUN_05475e00(auStack_58,asStack_88);
    DString::DString((DString *)asStack_38,*(int *)(param_2 + 0x18));
    pcVar5 = (char *)DString::c_str((DString *)asStack_38);
    std::string::append(asStack_50,pcVar5,__n);
    DString::~DString((DString *)asStack_38);
    this_01 = (AbtestMgr *)Sexy::LazySingleton<AbtestMgr>::GetInstance();
    iVar2 = AbtestMgr::GetActivityAbtestId(this_01,0x2a00);
    DString::DString((DString *)asStack_38,0x2a00);
    pcVar5 = (char *)DString::c_str((DString *)asStack_38);
    std::string::append(asStack_48,pcVar5,__n);
    DString::~DString((DString *)asStack_38);
    DString::DString((DString *)asStack_38,iVar2);
    pcVar5 = (char *)DString::c_str((DString *)asStack_38);
    std::string::append(asStack_40,pcVar5,__n);
    DString::~DString((DString *)asStack_38);
    pTVar7 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGASecretStore::TGASecretStore((TGASecretStore *)asStack_38,(TGASecretStore *)asStack_68);
    TGALogMgr::LogConsumeReceive(pTVar7,(GAME_ITEM_INFO *)asStack_38);
    DropGroupNode::~DropGroupNode((DropGroupNode *)asStack_38);
    DropGroupNode::~DropGroupNode((DropGroupNode *)asStack_68);
    std::string::~string(asStack_88);
    FUN_05476c50(auStack_90);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

