// Class: UIConsumeAndReceiveExtra


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIConsumeAndReceiveExtra::GetLayoutName() */

void __thiscall UIConsumeAndReceiveExtra::GetLayoutName(UIConsumeAndReceiveExtra *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIConsumeAndReceiveExtra");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIConsumeAndReceiveExtra::UIConsumeAndReceiveExtra() */

void __thiscall UIConsumeAndReceiveExtra::UIConsumeAndReceiveExtra(UIConsumeAndReceiveExtra *this)

{
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIConsumeAndReceiveExtra>::UISingletonDialog
            ((UISingletonDialog<UIConsumeAndReceiveExtra> *)this);
  *(undefined4 *)(this + 0x134) = 5;
  *(undefined ***)this = &PTR_GetClass_066ea780;
  *(undefined **)(this + 0xd8) = &DAT_066eaad0;
  FUN_05478178(this + 0x138,&DAT_056f11a8,auStack_10);
  nop();
  Sexy::Color::Color((Color *)(this + 0x140),1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x150));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIConsumeAndReceiveExtra::~UIConsumeAndReceiveExtra() */

void __thiscall UIConsumeAndReceiveExtra::~UIConsumeAndReceiveExtra(UIConsumeAndReceiveExtra *this)

{
  *(undefined ***)this = &PTR_GetClass_066ea780;
  *(undefined **)(this + 0xd8) = &DAT_066eaad0;
  std::vector<ConsumeReceiveExtraRewardWidget*,std::allocator<ConsumeReceiveExtraRewardWidget*>>::
  ~vector((vector<ConsumeReceiveExtraRewardWidget*,std::allocator<ConsumeReceiveExtraRewardWidget*>>
           *)(this + 0x150));
  FUN_05476c50(this + 0x138);
  UISingletonDialog<UIConsumeAndReceiveExtra>::~UISingletonDialog
            ((UISingletonDialog<UIConsumeAndReceiveExtra> *)this);
  return;
}


/* UIConsumeAndReceiveExtra::~UIConsumeAndReceiveExtra() */

void __thiscall UIConsumeAndReceiveExtra::~UIConsumeAndReceiveExtra(UIConsumeAndReceiveExtra *this)

{
  ~UIConsumeAndReceiveExtra(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIConsumeAndReceiveExtra::UpdateTimer() */

void __thiscall UIConsumeAndReceiveExtra::UpdateTimer(UIConsumeAndReceiveExtra *this)

{
  UIConsumeAndReceiveExtra *pUVar1;
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
    pUVar1 = this + 0x138;
    FUN_05478178(awStack_90,L"[TOTAL_LOGIN_DAYS]",auStack_a0);
    TodReplaceNumberString(awStack_90,L"{DAY_COUNT}",iVar2);
    FUN_05476c50(awStack_90);
    nop();
    Sexy::StrFormat(L"%02d:%02d",awStack_90,lVar3 / 0xe10 & 0xffffffff,
                    (ulong)(uint)((int)(lVar3 / 0x3c) + (int)((lVar3 / 0x3c) / 0x3c) * -0x3c));
    FUN_054766c8(pUVar1,awStack_90);
    FUN_05476c50(awStack_90);
    FUN_0342e660(awStack_90,auStack_98,pUVar1);
    FUN_054766c8(pUVar1,awStack_90);
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


/* UIConsumeAndReceiveExtra::Update() */

void __thiscall UIConsumeAndReceiveExtra::Update(UIConsumeAndReceiveExtra *this)

{
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  UpdateTimer(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIConsumeAndReceiveExtra::HasAnyNotReceivedReward() */

void UIConsumeAndReceiveExtra::HasAnyNotReceivedReward(void)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  ProfileMgr *this;
  PlayerInfo *this_00;
  long lVar6;
  long lVar7;
  bool bVar8;
  long lVar9;
  ConsumeAndReceiveExtraData aCStack_b8 [24];
  undefined8 local_a0;
  undefined8 local_98;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  string asStack_68 [8];
  string asStack_60 [88];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar4);
  cVar3 = FUN_039bbe1c(local_80);
  bVar8 = false;
  if ((cVar3 != '\0') && (bVar8 = false, local_70 != '\0')) {
    ConsumeAndReceiveExtraData::ConsumeAndReceiveExtraData(aCStack_b8);
    cVar3 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aCStack_b8);
    if (cVar3 == '\0') {
LAB_039bd4a4:
      bVar8 = false;
    }
    else {
      this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
      iVar4 = StringHelper::ToInt(asStack_68);
      iVar5 = StringHelper::ToInt(asStack_60);
      iVar4 = PlayerInfo::GetNumGemConsumeRecordedBetween(this_00,iVar4,iVar5);
      lVar6 = FUN_039bc058(local_a0,local_98);
      lVar9 = 0;
      do {
        if (lVar9 == lVar6) goto LAB_039bd4a4;
        lVar7 = FUN_039bc080(local_a0,lVar9);
        bVar1 = *(int *)(lVar7 + 8) <= iVar4;
        bVar2 = *(int *)(lVar7 + 0xc) == 0;
        bVar8 = bVar1 && bVar2;
        lVar9 = lVar9 + 1;
      } while (!bVar1 || !bVar2);
    }
    ConsumeAndReceiveExtraData::~ConsumeAndReceiveExtraData(aCStack_b8);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar8);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIConsumeAndReceiveExtra::InitView() */

void __thiscall UIConsumeAndReceiveExtra::InitView(UIConsumeAndReceiveExtra *this)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  UIWidgetImage *pUVar9;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  UIWidgetText *pUVar10;
  ConsumeReceiveExtraRewardWidget *pCVar11;
  int *piVar12;
  ulong uVar13;
  long lVar14;
  UIWidgetImage *pUVar15;
  char *pcVar16;
  TGALogMgr *pTVar17;
  string *extraout_x1;
  string *extraout_x1_00;
  string *__n;
  size_t __n_00;
  uint uVar18;
  ulong uVar19;
  code *pcVar20;
  float fVar21;
  Sexy aSStack_160 [8];
  string asStack_158 [8];
  undefined1 auStack_150 [8];
  string asStack_148 [8];
  string asStack_140 [8];
  ConsumeReceiveExtraRewardWidget *local_138;
  string asStack_130 [8];
  undefined1 auStack_128 [8];
  Sexy aSStack_120 [8];
  ConsumeAndReceiveExtraData aCStack_118 [24];
  undefined8 local_100;
  undefined8 local_f8;
  string asStack_e8 [8];
  string asStack_e0 [24];
  string asStack_c8 [16];
  string asStack_b8 [48];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  string asStack_68 [8];
  string asStack_60 [88];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar6 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar6);
  cVar5 = FUN_039bbe1c(local_80);
  if ((cVar5 != '\0') && (local_70 != '\0')) {
    ConsumeAndReceiveExtraData::ConsumeAndReceiveExtraData(aCStack_118);
    cVar5 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aCStack_118);
    if (cVar5 != '\0') {
      iVar6 = PlantNameMapperServerID::GetInstance();
      NameMapperBase::GetNameForId(iVar6);
      std::string::string(asStack_e8,"IMAGE_UI_NATIONALCENTER_RECHARGEPAGE_EXTRA_");
      uVar18 = 0;
      Sexy::StringToUpper(aSStack_160,extraout_x1);
      std::operator+(asStack_e8,asStack_b8);
      std::string::~string(asStack_b8);
      std::string::~string(asStack_e8);
      nop();
      std::string::string(asStack_b8,"UImage_icon");
      pUVar9 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_b8);
      std::string::~string(asStack_b8);
      nop();
      UIWidgetImage::SetImage(pUVar9,asStack_158);
      this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
      iVar6 = StringHelper::ToInt(asStack_68);
      uVar7 = StringHelper::ToInt(asStack_60);
      uVar8 = PlayerInfo::GetNumGemConsumeRecordedBetween(this_01,iVar6,uVar7);
      std::string::string(asStack_b8,"UIText_RechargeValue");
      pUVar10 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_b8);
      std::string::~string(asStack_b8);
      nop();
      Sexy::StrFormat(L"%d",auStack_150,(ulong)uVar8);
      PuzzleTip::SetTip(pUVar10,auStack_150);
      std::vector<ConsumeReceiveExtraRewardWidget*,std::allocator<ConsumeReceiveExtraRewardWidget*>>
      ::clear((vector<ConsumeReceiveExtraRewardWidget*,std::allocator<ConsumeReceiveExtraRewardWidget*>>
               *)(this + 0x150));
      uVar19 = 0;
      while( true ) {
        uVar3 = local_100;
        uVar13 = FUN_039bc058(local_100,local_f8);
        if (uVar13 <= uVar19) break;
        uVar1 = (int)uVar19 + 1;
        lVar14 = FUN_039bc080(uVar3,uVar19);
        bVar4 = *(int *)(lVar14 + 0xc) != 0;
        Sexy::StrFormat("UIImage_Mask%d",asStack_148,(ulong)uVar1);
        pcVar16 = (char *)FUN_0547429c(asStack_148);
        std::string::string(asStack_b8,pcVar16);
        pUVar9 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_b8);
        std::string::~string(asStack_b8);
        nop();
        (**(code **)(*(long *)pUVar9 + 0x158))(pUVar9,bVar4);
        Sexy::StrFormat("UIImage_Reward%d",asStack_140,(ulong)uVar1);
        pcVar16 = (char *)FUN_0547429c(asStack_140);
        std::string::string(asStack_b8,pcVar16);
        pUVar15 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_b8);
        std::string::~string(asStack_b8);
        nop();
        pCVar11 = ::operator_new(0x100);
        ConsumeReceiveExtraRewardWidget::ConsumeReceiveExtraRewardWidget(pCVar11);
        local_138 = pCVar11;
        piVar12 = (int *)FUN_039bc080(local_100,uVar19);
        ConsumeAndReceiveItemWidget::LoadData
                  ((ConsumeAndReceiveItemWidget *)pCVar11,(int)uVar19,*piVar12,piVar12[1],piVar12[2]
                   ,piVar12[2] <= (int)uVar8 && !bVar4);
        PuzzleTip::SetFont((PuzzleTip *)local_138,(PrimeTypeface *)pUVar9);
        pCVar11 = local_138;
        pcVar20 = *(code **)(*(long *)local_138 + 0x1a0);
        Sexy::Insets::Insets
                  ((Insets *)asStack_b8,0,0,*(int *)(pUVar15 + 0x50),*(int *)(pUVar15 + 0x54));
        (*pcVar20)(pCVar11,asStack_b8);
        (**(code **)(*(long *)pUVar15 + 0x60))(pUVar15,local_138);
        std::
        vector<ConsumeReceiveExtraRewardWidget*,std::allocator<ConsumeReceiveExtraRewardWidget*>>::
        push_back((vector<ConsumeReceiveExtraRewardWidget*,std::allocator<ConsumeReceiveExtraRewardWidget*>>
                   *)(this + 0x150),&local_138);
        Sexy::StrFormat("UIImage_Level%d",asStack_130,(ulong)uVar1);
        pcVar16 = (char *)FUN_0547429c(asStack_130);
        std::string::string(asStack_b8,pcVar16);
        pUVar10 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_b8);
        std::string::~string(asStack_b8);
        nop();
        FUN_05476574(auStack_128);
        lVar14 = FUN_039bc080(local_100,uVar19);
        std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar14 + 8));
        Sexy::ToSexyString(aSStack_120,extraout_x1_00);
        TodStringTranslate((wstring *)asStack_e8);
        FUN_054766c8(auStack_128,asStack_b8);
        FUN_05476c50(asStack_b8);
        FUN_05476c50(asStack_e8);
        std::string::~string((string *)aSStack_120);
        PuzzleTip::SetTip(pUVar10,auStack_128);
        lVar14 = FUN_039bc080(local_100,uVar19);
        if (*(int *)(lVar14 + 8) <= (int)uVar8) {
          uVar18 = uVar1;
        }
        FUN_05476c50(auStack_128);
        std::string::~string(asStack_130);
        std::string::~string(asStack_140);
        std::string::~string(asStack_148);
        uVar19 = uVar19 + 1;
      }
      fVar21 = 1.0;
      lVar14 = FUN_039bc080(uVar3,4);
      if ((int)uVar8 < *(int *)(lVar14 + 8)) {
        if (uVar18 == 0) {
          lVar14 = FUN_039bc080(uVar3,0);
          fVar21 = ((float)(int)uVar8 / (float)*(int *)(lVar14 + 8)) * 0.2;
          if (fVar21 <= 0.0) {
            fVar21 = 0.0;
          }
          fVar21 = (float)(int)uVar18 * 0.2 + fVar21;
        }
        else {
          lVar14 = FUN_039bc080(uVar3,(long)(int)(uVar18 - 1));
          iVar2 = *(int *)(lVar14 + 8);
          lVar14 = FUN_039bc080(uVar3,(long)(int)uVar18);
          fVar21 = ((float)(int)(uVar8 - iVar2) / (float)(*(int *)(lVar14 + 8) - iVar2)) * 0.2;
          if (fVar21 <= 0.0) {
            fVar21 = 0.0;
          }
          fVar21 = (float)(int)uVar18 * 0.2 + fVar21;
        }
      }
      std::string::string(asStack_b8,"UIImage_bar");
      pUVar9 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_b8);
      std::string::~string(asStack_b8);
      nop();
      __n = asStack_e8;
      std::string::string(asStack_b8,"UIImage_barBG");
      pUVar15 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_b8);
      std::string::~string(asStack_b8);
      nop();
      *(int *)(pUVar9 + 0x50) = (int)(fVar21 * (float)*(int *)(pUVar15 + 0x50));
      TGASecretStore::TGASecretStore((TGASecretStore *)asStack_e8);
      std::string::append(asStack_e8,"1",(size_t)__n);
      __n_00 = (size_t)uVar7;
      iVar6 = PlayerInfo::GetNumGemConsumeRecordedBetween(this_01,iVar6,uVar7);
      DString::DString((DString *)asStack_b8,iVar6);
      pcVar16 = (char *)DString::c_str((DString *)asStack_b8);
      std::string::append(asStack_e0,pcVar16,__n_00);
      DString::~DString((DString *)asStack_b8);
      DString::DString((DString *)asStack_b8,0x2a11);
      pcVar16 = (char *)DString::c_str((DString *)asStack_b8);
      std::string::append(asStack_c8,pcVar16,__n_00);
      DString::~DString((DString *)asStack_b8);
      pTVar17 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGASecretStore::TGASecretStore((TGASecretStore *)asStack_b8,(TGASecretStore *)asStack_e8);
      TGALogMgr::LogConsumeReceiveExtra(pTVar17,asStack_b8);
      DropGroupNode::~DropGroupNode((DropGroupNode *)asStack_b8);
      DropGroupNode::~DropGroupNode((DropGroupNode *)asStack_e8);
      FUN_05476c50(auStack_150);
      std::string::~string(asStack_158);
      std::string::~string((string *)aSStack_160);
      ConsumeAndReceiveExtraData::~ConsumeAndReceiveExtraData(aCStack_118);
      ActiveItem::~ActiveItem(aAStack_88);
      goto LAB_039bdc0c;
    }
    ConsumeAndReceiveExtraData::~ConsumeAndReceiveExtraData(aCStack_118);
  }
  ActiveItem::~ActiveItem(aAStack_88);
LAB_039bdc0c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIConsumeAndReceiveExtra::OnCreate() */

char __thiscall UIConsumeAndReceiveExtra::OnCreate(UIConsumeAndReceiveExtra *this)

{
  char cVar1;
  
  cVar1 = UI::Dialog::OnCreate((Dialog *)this);
  if (cVar1 != '\0') {
    InitView(this);
  }
  return cVar1;
}

