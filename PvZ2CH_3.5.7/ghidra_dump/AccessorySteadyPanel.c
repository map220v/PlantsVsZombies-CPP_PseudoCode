// Class: AccessorySteadyPanel


/* AccessorySteadyPanel::~AccessorySteadyPanel() */

void __thiscall AccessorySteadyPanel::~AccessorySteadyPanel(AccessorySteadyPanel *this)

{
  *(undefined ***)this = &PTR_GetClass_06914320;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* AccessorySteadyPanel::~AccessorySteadyPanel() */

void __thiscall AccessorySteadyPanel::~AccessorySteadyPanel(AccessorySteadyPanel *this)

{
  ~AccessorySteadyPanel(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccessorySteadyPanel::init() */

void __thiscall AccessorySteadyPanel::init(AccessorySteadyPanel *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  AccessoryContent *pAVar8;
  TextScollingWidget *pTVar9;
  long *plVar10;
  string asStack_68 [16];
  AccessoryPieceUIInfo aAStack_58 [24];
  AccessoryUIInfo aAStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AccessoryUIInfo::AccessoryUIInfo(aAStack_40);
  AccessoryPieceUIInfo::AccessoryPieceUIInfo(aAStack_58);
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71608);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71608);
  uVar2 = SalesProgressBar::GetCurrentLevel(this_01);
  std::string::string(asStack_68,"");
  pAVar8 = ::operator_new(0x180);
  AccessoryContent::AccessoryContent(pAVar8,0xffffffff,0,aAStack_40,1,asStack_68,0,aAStack_58,4);
  *(AccessoryContent **)(this + 0xd8) = pAVar8;
  std::string::~string(asStack_68);
  nop();
  AccessoryContent::SetSpecial(*(AccessoryContent **)(this + 0xd8),true);
  plVar10 = *(long **)(this + 0xd8);
  uVar3 = FUN_04950334(0x46);
  uVar4 = FUN_04950334(0x37);
  (**(code **)(*plVar10 + 0x198))(plVar10,uVar3,uVar4,iVar1,uVar2);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xd8));
  std::string::string(asStack_68,"");
  pAVar8 = ::operator_new(0x180);
  AccessoryContent::AccessoryContent(pAVar8,0xffffffff,0,aAStack_40,1,asStack_68,0,aAStack_58,4);
  *(AccessoryContent **)(this + 0xe0) = pAVar8;
  std::string::~string(asStack_68);
  nop();
  AccessoryContent::SetSpecial(*(AccessoryContent **)(this + 0xe0),true);
  plVar10 = *(long **)(this + 0xe0);
  uVar3 = FUN_04950334(0x136);
  uVar4 = FUN_04950334(0x37);
  (**(code **)(*plVar10 + 0x198))(plVar10,uVar3,uVar4,iVar1,uVar2);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe0));
  pTVar9 = ::operator_new(0x108);
  TextScollingWidget::TextScollingWidget(pTVar9);
  *(TextScollingWidget **)(this + 0xe8) = pTVar9;
  iVar5 = FUN_04950334(0x46);
  iVar6 = FUN_04950334(0xb4);
  iVar7 = FUN_04950334(0xc);
  uVar2 = FUN_04950334(0x8c);
  uVar3 = FUN_04950334(0xa0);
  uVar4 = FUN_04950334(0x3c);
  (**(code **)(*(long *)pTVar9 + 0x198))
            (pTVar9,((iVar5 + iVar1 / 2) - iVar6 / 2) + iVar7,uVar2,uVar3,uVar4);
  pTVar9 = *(TextScollingWidget **)(this + 0xe8);
  Sexy::Color::Color((Color *)asStack_68,0xec,0xd3,0);
  TextScollingWidget::SetStringColor(pTVar9,(Color *)asStack_68);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe8));
  pTVar9 = ::operator_new(0x108);
  TextScollingWidget::TextScollingWidget(pTVar9);
  *(TextScollingWidget **)(this + 0xf0) = pTVar9;
  iVar5 = FUN_04950334(0x136);
  iVar6 = FUN_04950334(0xb4);
  iVar7 = FUN_04950334(0xc);
  uVar2 = FUN_04950334(0x8c);
  uVar3 = FUN_04950334(0xa0);
  uVar4 = FUN_04950334(0x3c);
  (**(code **)(*(long *)pTVar9 + 0x198))
            (pTVar9,((iVar1 / 2 + iVar5) - iVar6 / 2) + iVar7,uVar2,uVar3,uVar4);
  pTVar9 = *(TextScollingWidget **)(this + 0xf0);
  Sexy::Color::Color((Color *)asStack_68,0x3b,0xdd,0x52);
  TextScollingWidget::SetStringColor(pTVar9,(Color *)asStack_68);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf0));
  AccessoryPieceUIInfo::~AccessoryPieceUIInfo(aAStack_58);
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)aAStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccessorySteadyPanel::OnSteadyUINoticed(AccessoryContent*) */

void __thiscall
AccessorySteadyPanel::OnSteadyUINoticed(AccessorySteadyPanel *this,AccessoryContent *param_1)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  string *psVar2;
  Image *pIVar3;
  long lVar4;
  ulong uVar5;
  PrimeTypeface *pPVar6;
  TextScollingWidget *pTVar7;
  AccessoryContent *pAVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = AccessoryContent::GetId(param_1);
  iVar1 = PlayerInfo::GetPlantAccessoryLevelById(this_01,(long)iVar1);
  psVar2 = (string *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
  Lua::CUIDialog::GetLayoutName();
  PlantAccessoryMgr::GetAccessoryByType(psVar2);
  std::string::~string(asStack_10);
  pAVar8 = *(AccessoryContent **)(this + 0xd8);
  if (pAVar8 == (AccessoryContent *)0x0) {
LAB_04953068:
    pAVar8 = *(AccessoryContent **)(this + 0xe0);
    if (pAVar8 == (AccessoryContent *)0x0) goto LAB_0495311c;
    pIVar3 = (Image *)AccessoryContent::GetDisplayImage(param_1);
    AccessoryContent::SetDisplayImage(pAVar8,pIVar3);
    AccessoryContent::SetLevel(*(AccessoryContent **)(this + 0xe0),iVar1 + 1);
    if (-1 < iVar1) goto LAB_04953094;
  }
  else {
    pIVar3 = (Image *)AccessoryContent::GetDisplayImage(param_1);
    AccessoryContent::SetDisplayImage(pAVar8,pIVar3);
    AccessoryContent::SetLevel(*(AccessoryContent **)(this + 0xd8),iVar1);
    if (iVar1 != 0) {
      if (0 < iVar1) {
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
        uVar5 = FUN_0494fc50(*(undefined8 *)(lVar4 + 0x90),*(undefined8 *)(lVar4 + 0x98));
        if ((ulong)(long)iVar1 <= uVar5) {
          lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
          lVar4 = FUN_0494fc64(*(undefined8 *)(lVar4 + 0x90),(long)(iVar1 + -1));
          goto LAB_049531c8;
        }
      }
      goto LAB_04953068;
    }
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
LAB_049531c8:
    Sexy::ToWString((string *)(lVar4 + 0x20));
    TodStringTranslate((wstring *)asStack_10);
    FUN_05476c50(asStack_10);
    pTVar7 = *(TextScollingWidget **)(this + 0xe8);
    pPVar6 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
    TextScollingWidget::SetString(pTVar7,awStack_18,pPVar6);
    FUN_05476c50(awStack_18);
    pAVar8 = *(AccessoryContent **)(this + 0xe0);
    if (pAVar8 == (AccessoryContent *)0x0) goto LAB_0495311c;
    pIVar3 = (Image *)AccessoryContent::GetDisplayImage(param_1);
    AccessoryContent::SetDisplayImage(pAVar8,pIVar3);
    AccessoryContent::SetLevel(*(AccessoryContent **)(this + 0xe0),iVar1 + 1);
LAB_04953094:
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    uVar5 = FUN_0494fc50(*(undefined8 *)(lVar4 + 0x90),*(undefined8 *)(lVar4 + 0x98));
    if ((ulong)(long)iVar1 < uVar5) {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
      lVar4 = FUN_0494fc64(*(undefined8 *)(lVar4 + 0x90),(long)iVar1);
      Sexy::ToWString((string *)(lVar4 + 0x20));
      TodStringTranslate((wstring *)asStack_10);
      FUN_05476c50(asStack_10);
      pTVar7 = *(TextScollingWidget **)(this + 0xf0);
      pPVar6 = (PrimeTypeface *)
               PrimeText_PotentialTypeface::Typeface
                         (PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
      TextScollingWidget::SetString(pTVar7,awStack_18,pPVar6);
      FUN_05476c50(awStack_18);
      goto LAB_0495311c;
    }
  }
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  if (*(int *)(lVar4 + 0x8c) <= iVar1) {
    AccessoryContent::SetDisplayImage(*(AccessoryContent **)(this + 0xe0),(Image *)0x0);
    AccessoryContent::SetLevel(*(AccessoryContent **)(this + 0xe0),0);
    TodStringTranslate(L"[STEADY_MAX]");
    pTVar7 = *(TextScollingWidget **)(this + 0xf0);
    pPVar6 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
    TextScollingWidget::SetString(pTVar7,(wstring *)asStack_10,pPVar6);
    FUN_05476c50(asStack_10);
  }
LAB_0495311c:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AccessorySteadyPanel::AccessorySteadyPanel() */

void __thiscall AccessorySteadyPanel::AccessorySteadyPanel(AccessorySteadyPanel *this)

{
  undefined *puVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::Widget::Widget((Widget *)this);
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined ***)this = &PTR_GetClass_06914320;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnSteadyUINoticed);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<AccessoryContent*,Sexy::CBMemberTranslatorX<AccessorySteadyPanel,void(AccessorySteadyPanel::*)(AccessoryContent*)>>
            ((MessageRouter *)puVar1,Message::NoticeMainUI,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnSteadySuccess);
  local_60 = local_8;
  local_70 = local_18;
  uStack_68 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<AccessorySteadyPanel,void(AccessorySteadyPanel::*)(int)>>
            ((MessageRouter *)puVar1,Message::OnSteadySuccess,&local_70);
  init(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccessorySteadyPanel::OnSteadySuccess(int) */

void __thiscall AccessorySteadyPanel::OnSteadySuccess(AccessorySteadyPanel *this,int param_1)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  vector *pvVar2;
  ulong uVar3;
  PlantAccessoryInfo *pPVar4;
  string *psVar5;
  long lVar6;
  PrimeTypeface *pPVar7;
  ulong uVar8;
  wstring *pwVar9;
  TextScollingWidget *pTVar10;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  wstring awStack_50 [8];
  wstring awStack_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  PlantAccessoryInfo aPStack_28 [32];
  long local_8;
  
  uVar8 = (ulong)param_1;
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = PlayerInfo::GetPlantAccessoryLevelById(this_01,uVar8);
  pvVar2 = (vector *)PlayerInfo::GetPlantAccessoryInfos(this_01);
  std::vector<PlantAccessoryInfo,std::allocator<PlantAccessoryInfo>>::vector
            ((vector<PlantAccessoryInfo,std::allocator<PlantAccessoryInfo>> *)&local_40,pvVar2);
  uVar3 = FUN_0494fc70(local_40,local_38);
  if (uVar3 <= uVar8) goto LAB_04955860;
  pPVar4 = (PlantAccessoryInfo *)FUN_0494fc14(local_40,uVar8);
  PlantAccessoryInfo::PlantAccessoryInfo(aPStack_28,pPVar4);
  psVar5 = (string *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
  PlantAccessoryMgr::GetAccessoryByType(psVar5);
  if (*(AccessoryContent **)(this + 0xd8) == (AccessoryContent *)0x0) {
LAB_04955a1c:
    if (*(AccessoryContent **)(this + 0xe0) != (AccessoryContent *)0x0) {
      AccessoryContent::SetLevel(*(AccessoryContent **)(this + 0xe0),iVar1 + 1);
      if (-1 < iVar1) goto LAB_0495597c;
LAB_04955a30:
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
      if (*(int *)(lVar6 + 0x8c) <= iVar1) {
        pwVar9 = awStack_48;
        AccessoryContent::SetDisplayImage(*(AccessoryContent **)(this + 0xe0),(Image *)0x0);
        AccessoryContent::SetLevel(*(AccessoryContent **)(this + 0xe0),0);
        TodStringTranslate(L"[STEADY_MAX]");
LAB_049559dc:
        pTVar10 = *(TextScollingWidget **)(this + 0xf0);
        pPVar7 = (PrimeTypeface *)
                 PrimeText_PotentialTypeface::Typeface
                           (PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
        TextScollingWidget::SetString(pTVar10,pwVar9,pPVar7);
        FUN_05476c50(pwVar9);
      }
    }
  }
  else {
    AccessoryContent::SetLevel(*(AccessoryContent **)(this + 0xd8),iVar1);
    if (iVar1 != 0) {
      if (0 < iVar1) {
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
        uVar3 = FUN_0494fc50(*(undefined8 *)(lVar6 + 0x90),*(undefined8 *)(lVar6 + 0x98));
        if ((ulong)(long)iVar1 <= uVar3) {
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
          lVar6 = FUN_0494fc64(*(undefined8 *)(lVar6 + 0x90),(long)(iVar1 + -1));
          goto LAB_04955920;
        }
      }
      goto LAB_04955a1c;
    }
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
LAB_04955920:
    Sexy::ToWString((string *)(lVar6 + 0x20));
    TodStringTranslate(awStack_48);
    FUN_05476c50(awStack_48);
    pTVar10 = *(TextScollingWidget **)(this + 0xe8);
    pPVar7 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
    TextScollingWidget::SetString(pTVar10,awStack_50,pPVar7);
    FUN_05476c50(awStack_50);
    if (*(AccessoryContent **)(this + 0xe0) != (AccessoryContent *)0x0) {
      AccessoryContent::SetLevel(*(AccessoryContent **)(this + 0xe0),iVar1 + 1);
LAB_0495597c:
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
      uVar3 = FUN_0494fc50(*(undefined8 *)(lVar6 + 0x90),*(undefined8 *)(lVar6 + 0x98));
      if (uVar3 <= (ulong)(long)iVar1) goto LAB_04955a30;
      pwVar9 = awStack_50;
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
      lVar6 = FUN_0494fc64(*(undefined8 *)(lVar6 + 0x90),(long)iVar1);
      Sexy::ToWString((string *)(lVar6 + 0x20));
      TodStringTranslate(awStack_48);
      FUN_05476c50(awStack_48);
      goto LAB_049559dc;
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  PakRecord::~PakRecord((PakRecord *)aPStack_28);
LAB_04955860:
  std::vector<PlantAccessoryInfo,std::allocator<PlantAccessoryInfo>>::~vector
            ((vector<PlantAccessoryInfo,std::allocator<PlantAccessoryInfo>> *)&local_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccessorySteadyPanel::Draw(Sexy::Graphics*) */

void __thiscall AccessorySteadyPanel::Draw(AccessorySteadyPanel *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  LotteryResultProgressBar *this_00;
  undefined8 uVar8;
  undefined8 uVar9;
  Image *pIVar10;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(L"[CURRENT_EFFECT]");
  TodStringTranslate(L"[NEXT_EFFECT]");
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71608);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  iVar2 = FUN_04950334(0x46);
  iVar1 = iVar1 / 2;
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  FUN_05477b24(aCStack_18,auStack_38);
  iVar3 = Sexy::PrimeTypeface::StringWidth(uVar8,aCStack_18);
  FUN_05476c50(aCStack_18);
  iVar4 = FUN_04950334(0x136);
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  FUN_05477b24(aCStack_18,auStack_30);
  iVar5 = Sexy::PrimeTypeface::StringWidth(uVar8,aCStack_18);
  FUN_05476c50(aCStack_18);
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  iVar6 = FUN_04950334(0xf);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  FUN_05477b24(auStack_28,auStack_38);
  iVar7 = Sexy::PrimeTypeface::StringWidth(uVar9,auStack_28);
  FUN_05477b24(auStack_20,auStack_38);
  Sexy::Color::Color(aCStack_18,0xf7,0xfc,99);
  Sexy::PrimeTypeface::DrawString_Line
            ((PrimeTypeface *)(float)((iVar2 + iVar1) - iVar3 / 2),(float)iVar6,(float)iVar7,uVar8,
             param_1,auStack_20,1,aCStack_18,0);
  FUN_05476c50(auStack_20);
  FUN_05476c50(auStack_28);
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  iVar2 = FUN_04950334(0xf);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  FUN_05477b24(auStack_28,auStack_30);
  iVar3 = Sexy::PrimeTypeface::StringWidth(uVar9,auStack_28);
  FUN_05477b24(auStack_20,auStack_30);
  Sexy::Color::Color(aCStack_18,0xf7,0xfc,99);
  Sexy::PrimeTypeface::DrawString_Line
            ((PrimeTypeface *)(float)((iVar1 + iVar4) - iVar5 / 2),(float)iVar2,(float)iVar3,uVar8,
             param_1,auStack_20,1,aCStack_18,0);
  FUN_05476c50(auStack_20);
  FUN_05476c50(auStack_28);
  pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b718a8);
  iVar3 = FUN_04950334(0x2b);
  iVar2 = *(int *)(this + 0x50);
  iVar4 = FUN_04950334(0x46);
  iVar5 = FUN_04950334(0x2d);
  Sexy::Graphics::DrawImage(param_1,pIVar10,iVar2 / 2 - iVar3,iVar4,iVar4,iVar5);
  iVar2 = FUN_04950334(0x46);
  iVar3 = FUN_04950334(0xb4);
  iVar4 = FUN_04950334(0x136);
  pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71330);
  iVar5 = FUN_04950334(0x82);
  iVar6 = FUN_04950334(0xb4);
  iVar7 = FUN_04950334(0x4d);
  Sexy::Graphics::DrawImage(param_1,pIVar10,iVar1 + iVar2 + -(iVar3 / 2),iVar5,iVar6,iVar7);
  pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71330);
  iVar2 = FUN_04950334(0x82);
  iVar5 = FUN_04950334(0xb4);
  iVar6 = FUN_04950334(0x4d);
  Sexy::Graphics::DrawImage(param_1,pIVar10,-(iVar3 / 2) + iVar1 + iVar4,iVar2,iVar5,iVar6);
  nop();
  FUN_05476c50(auStack_30);
  FUN_05476c50(auStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

