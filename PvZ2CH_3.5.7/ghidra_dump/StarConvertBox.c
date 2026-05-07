// Class: StarConvertBox


/* StarConvertBox::HideAllButtonAndAnims() */

void __thiscall StarConvertBox::HideAllButtonAndAnims(StarConvertBox *this)

{
  (**(code **)(**(long **)(this + 0x1b0) + 0x158))(*(long **)(this + 0x1b0),0);
  (**(code **)(**(long **)(this + 0x1b0) + 0x188))(*(long **)(this + 0x1b0),1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarConvertBox::RecoverAllButtonAndAnims() */

void __thiscall StarConvertBox::RecoverAllButtonAndAnims(StarConvertBox *this)

{
  char cVar1;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(**(long **)(this + 0x1b0) + 0x158))(*(long **)(this + 0x1b0),1);
  (**(code **)(**(long **)(this + 0x1b0) + 0x188))(*(long **)(this + 0x1b0),0);
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x248));
  if (cVar1 != '\0') {
    std::string::string(asStack_18,"effects_on");
    std::string::string(asStack_10,"effects_loop");
    EffectAnim_UIAnim::PlayOnceThenLoop((EffectAnim_UIAnim *)(this + 0x248),asStack_18,asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarConvertBox::InitShiningAnims() */

void __thiscall StarConvertBox::InitShiningAnims(StarConvertBox *this)

{
  EffectAnim_UIAnim *pEVar1;
  char cVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pEVar1 = (EffectAnim_UIAnim *)(this + 0x1b8);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_20,(float)(*(int *)(this + 0x158) + *(int *)(this + 0x160) / 2),
             (float)(*(int *)(this + 0x15c) + *(int *)(this + 0x164) / 2));
  std::string::string(asStack_10,"POPANIM_EFFECTS_SALES_REWARD_POPING");
  EffectAnim_UIAnim::InitUIAnim(0x3fc7bb30,local_20,local_1c,pEVar1,asStack_10,1);
  std::string::~string(asStack_10);
  nop();
  cVar2 = EffectAnim_UIAnim::IsValid(pEVar1);
  if (cVar2 != '\0') {
    std::string::string((string *)&local_18,"effect_on");
    std::string::string(asStack_10,"effect_fullscreen_star");
    EffectAnim_UIAnim::PlayOnceThenLoop(pEVar1,(FastCurve *)&local_18,asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::~string((string *)&local_18);
    nop();
  }
  pEVar1 = (EffectAnim_UIAnim *)(this + 0x1e8);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_18,(float)(*(int *)(gLawnApp + 0xd4) / 2),
             (float)(*(int *)(gLawnApp + 0xd8) / 2));
  std::string::string(asStack_10,"POPANIM_EFFECTS_SALES_REWARD_POPED");
  EffectAnim_UIAnim::InitUIAnim(0x3fc7bb30,local_18,local_14,pEVar1,asStack_10,1);
  std::string::~string(asStack_10);
  nop();
  cVar2 = EffectAnim_UIAnim::IsValid(pEVar1);
  if (cVar2 != '\0') {
    std::string::string(asStack_10,"effects_behind");
    EffectAnim_UIAnim::PlayLoop(pEVar1,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarConvertBox::InitDescription() */

void __thiscall StarConvertBox::InitDescription(StarConvertBox *this)

{
  string *psVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ProfileMgr *this_00;
  long lVar7;
  NameMapperBase *this_01;
  string *extraout_x1;
  wstring awStack_58 [8];
  wstring awStack_50 [8];
  int local_48 [4];
  undefined8 local_38;
  int local_30;
  undefined4 uStack_2c;
  undefined1 auStack_10 [8];
  long local_8;
  
  psVar1 = (string *)(this + 0x130);
  local_8 = ___stack_chk_guard;
  PopingWidget::GetMainRect();
  PopingWidget::GetMainRect();
  iVar6 = local_30 / 2;
  PopingWidget::GetMainRect();
  PopingWidget::GetMainRect();
  iVar4 = FUN_04a64e50(0x1c2);
  iVar5 = FUN_04a64e50(0x46);
  Sexy::Insets::Insets
            ((Insets *)&local_38,(local_48[0] + iVar6) - iVar4 / 2,
             *(int *)(this + 0x17c) + *(int *)(this + 0x184),iVar4,iVar5);
  *(undefined8 *)(this + 0x168) = local_38;
  *(ulong *)(this + 0x170) = CONCAT44(uStack_2c,local_30);
  bVar2 = std::operator==("Plant",psVar1);
  if (bVar2) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar7 = ProfileMgr::GetCurrentProfile(this_00);
    if (lVar7 != 0) {
      Sexy::StrFormat("[STAR_CONVERT_PLANT_LEVEL%d]",(Insets *)&local_38,
                      (ulong)*(uint *)(this + 300));
      Sexy::ToWString((string *)&local_38);
      std::string::~string((string *)&local_38);
      TodReplaceString(awStack_50,L"{PLANT}",(wstring *)(this + 0x1a8));
      FUN_054766c8(awStack_50,(Insets *)&local_38);
      FUN_05476c50((Insets *)&local_38);
      TodStringTranslate(L"[STAR_CONVERT_SUCCESS]");
      TodReplaceString((wstring *)local_48,L"{REWARD}",awStack_50);
      FUN_054766c8(this + 0x1a0,(Insets *)&local_38);
      FUN_05476c50((Insets *)&local_38);
      FUN_05476c50((wstring *)local_48);
      FUN_05476c50(awStack_50);
    }
  }
  else {
    bVar2 = std::operator==("Feature",psVar1);
    if (bVar2) {
      FUN_05475d88((wstring *)local_48,this + 0x138);
      GameFeatureType::GetGameFeatureTypeFromUnlockString
                ((GameFeatureType *)&local_38,(wstring *)local_48);
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
      FUN_05475d88((Sexy *)awStack_50,lVar7 + 0x18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
      std::string::~string((string *)local_48);
      TodStringTranslate(L"[STAR_CONVERT_SUCCESS]");
      TodReplaceString((wstring *)local_48,L"{REWARD}",(wstring *)(this + 0x1a8));
      thunk_FUN_05477668(this + 0x1a0,(Insets *)&local_38);
      FUN_05476c50((Insets *)&local_38);
      FUN_05476c50((wstring *)local_48);
      Sexy::UTF8StringToWString((Sexy *)awStack_50,extraout_x1);
      TodStringTranslate((wstring *)local_48);
      thunk_FUN_05477668(this + 0x1a0,(Insets *)&local_38);
      FUN_05476c50((Insets *)&local_38);
      FUN_05476c50((wstring *)local_48);
      std::string::~string((string *)awStack_50);
    }
    else {
      bVar2 = std::operator==("Avatar",psVar1);
      if (bVar2) {
        this_01 = (NameMapperBase *)AvatarNameMapperServerID::GetInstance();
        iVar6 = NameMapperBase::GetIdForName(this_01,(string *)(this + 0x138));
        GetGameItemInfo(iVar6,0x7fffffff,0);
        FUN_05477b24(awStack_58,auStack_10);
        bVar2 = std::operator==(awStack_58,L"");
        if ((bVar2) || (cVar3 = FUN_054765e8(awStack_58), cVar3 != '\0')) {
          TodStringTranslate(L"[AVATAR]");
          std::operator+((wstring *)(this + 0x1a8),awStack_50);
          FUN_054766c8(awStack_58,(wstring *)local_48);
          FUN_05476c50((wstring *)local_48);
          FUN_05476c50(awStack_50);
        }
        TodStringTranslate(L"[STAR_CONVERT_SUCCESS]");
        TodReplaceString(awStack_50,L"{REWARD}",awStack_58);
        thunk_FUN_05477668(this + 0x1a0,(wstring *)local_48);
        FUN_05476c50((wstring *)local_48);
        FUN_05476c50(awStack_50);
        FUN_05476c50(awStack_58);
        GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_38);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarConvertBox::InitView() */

void __thiscall StarConvertBox::InitView(StarConvertBox *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  PVZ2UIButton *pPVar7;
  wstring awStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  this[0x59] = (StarConvertBox)0x0;
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  FUN_054772c4(this + 0x1a0,&DAT_056f11a8);
  iVar3 = FUN_04a64e50(500);
  iVar4 = FUN_04a64e50(300);
  iVar2 = *(int *)(this + 0x54);
  iVar1 = *(int *)(this + 0x50) - iVar3 >> 1;
  iVar5 = FUN_04a64e50(0x28);
  iVar2 = (iVar2 - iVar4) + iVar5 >> 1;
  Sexy::Insets::Insets((Insets *)&local_40,iVar1,iVar2,iVar3,iVar4);
  iVar1 = iVar1 + iVar3 / 2;
  PopingWidget::SetMainRect((PopingWidget *)this,(Insets *)&local_40);
  iVar3 = FUN_04a64e50(0x87);
  iVar5 = FUN_04a64e50(0xe);
  iVar6 = FUN_04a64e50(0x28);
  Sexy::Insets::Insets((Insets *)&local_40,iVar1 - iVar3 / 2,iVar5 + iVar2,iVar3,iVar6);
  *(undefined8 *)(this + 0x158) = local_40;
  *(undefined8 *)(this + 0x160) = uStack_38;
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7d2a0);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7d2a0);
  iVar3 = SalesProgressBar::GetCurrentLevel(this_01);
  iVar3 = (iVar3 * 6) / 5;
  TodStringTranslate(L"[STAR_CONVERT_SUCCESS_TITLE]");
  FUN_054766c8(this + 0x198,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
  TodStringTranslate(L"[SALES_REWARD_BOX_CLOSE]");
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar7 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar7,0,(ButtonListener *)(this + 0x120),awStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0x1b0) = pPVar7;
  FUN_05476c50(awStack_78);
  pPVar7 = *(PVZ2UIButton **)(this + 0x1b0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b7d548,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b7d698,3);
  PVZ2UIButton::SetDialogStates(pPVar7,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  (**(code **)(**(long **)(this + 0x1b0) + 0x198))
            (*(long **)(this + 0x1b0),iVar1 - ((iVar5 << 1) >> 1),(iVar2 + iVar4) - iVar3 / 2,
             iVar5 << 1,iVar3);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x1b0));
  (**(code **)(*(long *)this + 0x318))(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarConvertBox::StarConvertBox() */

void __thiscall StarConvertBox::StarConvertBox(StarConvertBox *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PopingWidget::PopingWidget((PopingWidget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x120));
  *(undefined ***)this = &PTR_GetClass_069375b0;
  *(undefined ***)(this + 0x120) = &PTR_ButtonPress_069378f0;
  ConvertObject::ConvertObject((ConvertObject *)(this + 0x130));
  Sexy::Insets::Insets((Insets *)(this + 0x158));
  Sexy::Insets::Insets((Insets *)(this + 0x168));
  Sexy::Insets::Insets((Insets *)(this + 0x178));
  Sexy::Insets::Insets((Insets *)(this + 0x188));
  FUN_05476574(this + 0x198);
  FUN_05476574(this + 0x1a0);
  FUN_05476574(this + 0x1a8);
  EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x1b8));
  EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x1e8));
  EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x218));
  EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x248));
  *(undefined8 *)(this + 0x278) = 0;
  *(undefined8 *)(this + 0x280) = 0;
  this_00 = gLawnApp;
  std::string::string(asStack_10,"Sales_Effect");
  LawnApp::LoadGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  this[0x128] = (StarConvertBox)0x0;
  this[0x129] = (StarConvertBox)0x0;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x278) = 0;
  FUN_054772c4(this + 0x198,&DAT_056f11a8);
  FUN_054772c4(this + 0x1a8,&DAT_056f11a8);
  FUN_054772c4(this + 0x1a0,&DAT_056f11a8);
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarConvertBox::Draw(Sexy::Graphics*) */

void __thiscall StarConvertBox::Draw(StarConvertBox *this,Graphics *param_1)

{
  string *psVar1;
  EffectAnim_UIAnim *this_00;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  SalesProgressBar *this_01;
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar6 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x1e8));
  if (cVar6 != '\0') {
    EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)(this + 0x1e8),param_1);
  }
  PopingWidget::GetMainRect();
  uVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7d4e8);
  PopingWidget::DrawPoping9SliceImage((PopingWidget *)this,param_1,aCStack_18,uVar10);
  cVar6 = FUN_04a64ba8(this[0x115]);
  if (cVar6 != '\0') goto LAB_04a665f0;
  psVar1 = (string *)(this + 0x130);
  bVar7 = std::operator==("Plant",psVar1);
  if (bVar7) {
    cVar6 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x218));
    if (cVar6 != '\0') {
      EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)(this + 0x218),param_1);
    }
    if (*(Image **)(this + 0x278) != (Image *)0x0) {
      Sexy::Graphics::DrawImage
                (param_1,*(Image **)(this + 0x278),*(int *)(this + 0x188),*(int *)(this + 0x18c));
    }
    this_00 = (EffectAnim_UIAnim *)(this + 0x248);
    cVar6 = EffectAnim_UIAnim::IsValid(this_00);
joined_r0x04a667e4:
    if (cVar6 != '\0') {
      EffectAnim_UIAnim::OnDraw(this_00,param_1);
    }
  }
  else {
    bVar7 = std::operator==("Feature",psVar1);
    if (bVar7) {
      if (*(LotteryResultProgressBar **)(this + 0x280) != (LotteryResultProgressBar *)0x0) {
        iVar2 = *(int *)(this + 0x180);
        iVar3 = *(int *)(this + 0x178);
        iVar8 = LotteryResultProgressBar::GetCurrentLevel
                          (*(LotteryResultProgressBar **)(this + 0x280));
        this_01 = *(SalesProgressBar **)(this + 0x280);
        iVar4 = *(int *)(this + 0x184);
        iVar5 = *(int *)(this + 0x17c);
        iVar9 = SalesProgressBar::GetCurrentLevel(this_01);
        Sexy::Graphics::DrawImage
                  (param_1,(Image *)this_01,iVar3 + (iVar2 - iVar8) / 2,iVar5 + (iVar4 - iVar9) / 2)
        ;
      }
    }
    else {
      bVar7 = std::operator==("Avatar",psVar1);
      if (bVar7) {
        this_00 = (EffectAnim_UIAnim *)(this + 0x218);
        cVar6 = EffectAnim_UIAnim::IsValid(this_00);
        goto joined_r0x04a667e4;
      }
    }
  }
  uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_26_Shaded);
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_1,this + 0x198,this + 0x158,uVar10,aCStack_18,5,1);
  uVar10 = PrimeText_PotentialTypeface::Typeface
                     (PrimeText_Game::Typeface_CafeteriaBlack_19_ThickOutline);
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_1,this + 0x1a0,this + 0x168,uVar10,aCStack_18,5,1);
LAB_04a665f0:
  cVar6 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x1b8));
  if (cVar6 != '\0') {
    EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)(this + 0x1b8),param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarConvertBox::~StarConvertBox() */

void __thiscall StarConvertBox::~StarConvertBox(StarConvertBox *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0x120) = &PTR_ButtonPress_069378f0;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_069375b0;
  this_00 = gLawnApp;
  std::string::string(asStack_10,"Sales_Effect");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x248));
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x218));
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x1e8));
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x1b8));
  FUN_05476c50(this + 0x1a8);
  FUN_05476c50(this + 0x1a0);
  FUN_05476c50(this + 0x198);
  ConvertObject::~ConvertObject((ConvertObject *)(this + 0x130));
  PopingWidget::~PopingWidget((PopingWidget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarConvertBox::~StarConvertBox() */

void __thiscall StarConvertBox::~StarConvertBox(StarConvertBox *this)

{
  ~StarConvertBox(this);
  AK::FreeHook(this);
  return;
}


/* StarConvertBox::ButtonDepress(int) */

StarConvertBox * __thiscall StarConvertBox::ButtonDepress(StarConvertBox *this,int param_1)

{
  LawnApp *this_00;
  byte bVar1;
  StarConvert *this_01;
  StarConvertBox *pSVar2;
  
  this_00 = gLawnApp;
  if (param_1 == 0) {
    bVar1 = LawnApp::IsStarConvertIValid(gLawnApp);
    this = (StarConvertBox *)(ulong)bVar1;
    if (bVar1 != 0) {
      this_01 = (StarConvert *)LawnApp::GetStarConvert(this_00);
      StarConvert::KillConvertBox(this_01);
      pSVar2 = (StarConvertBox *)MessageRouter::Broadcast((_func_void *)gMessageRouter);
      return pSVar2;
    }
  }
  return this;
}


/* non-virtual thunk to StarConvertBox::ButtonDepress(int) */

void __thiscall StarConvertBox::ButtonDepress(StarConvertBox *this,int param_1)

{
  ButtonDepress(this + -0x120,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarConvertBox::InitPlantView() */

void __thiscall StarConvertBox::InitPlantView(StarConvertBox *this)

{
  EffectAnim_UIAnim *pEVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  undefined8 uVar11;
  string *psVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  string asStack_48 [8];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30 [4];
  undefined8 local_20;
  int local_18;
  undefined4 uStack_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar12 = (string *)(this + 0x130);
  PopingWidget::GetMainRect();
  PopingWidget::GetMainRect();
  iVar9 = local_18 / 2;
  PopingWidget::GetMainRect();
  PopingWidget::GetMainRect();
  iVar6 = FUN_04a64e50(0x96);
  iVar7 = FUN_04a64e50(0x87);
  iVar2 = *(int *)(this + 0x15c);
  iVar10 = *(int *)(this + 0x164);
  iVar8 = FUN_04a64e50(0xf);
  Sexy::Insets::Insets
            ((Insets *)&local_20,(local_30[0] + iVar9) - iVar6 / 2,iVar2 + iVar10 + iVar8,iVar6,
             iVar7);
  *(undefined8 *)(this + 0x178) = local_20;
  *(ulong *)(this + 0x180) = CONCAT44(uStack_14,local_18);
  FUN_05475d88(asStack_48,this + 0x138);
  bVar3 = std::operator==("Plant",psVar12);
  if (bVar3) {
    pEVar1 = (EffectAnim_UIAnim *)(this + 0x218);
    iVar9 = FUN_04a64e50(0xe);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_40,(float)(*(int *)(this + 0x178) + *(int *)(this + 0x180) / 2),
               (float)(iVar9 + *(int *)(this + 0x17c) + *(int *)(this + 0x184) / 2));
    FUN_05475d88((Insets *)&local_20,asStack_48);
    EffectAnim_UIAnim::InitPlantUIAnim(0x3fb33333,local_40,local_3c,pEVar1,(Insets *)&local_20,1);
    std::string::~string((string *)&local_20);
    cVar4 = EffectAnim_UIAnim::IsValid(pEVar1);
    if (cVar4 != '\0') {
      EffectAnim_UIAnim::HideAvatarLayer(pEVar1);
      EffectAnim_UIAnim::PlayIdleLoop(pEVar1);
    }
    iVar10 = FUN_04a64e50(10);
    iVar9 = *(int *)(this + 0x178);
    iVar2 = *(int *)(this + 0x17c);
    this_00 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7d248);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    this_01 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7d248);
    iVar7 = SalesProgressBar::GetCurrentLevel(this_01);
    Sexy::Insets::Insets((Insets *)&local_20,iVar10 + iVar9,iVar10 + iVar2,iVar6,iVar7);
    *(undefined8 *)(this + 0x188) = local_20;
    *(ulong *)(this + 400) = CONCAT44(uStack_14,local_18);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_38,
               (float)*(int *)(this + 0x188) + (float)*(int *)(this + 400) * 0.5,
               (float)*(int *)(this + 0x18c) + (float)*(int *)(this + 0x194) * 0.5);
    uVar11 = FUN_04a64bb4(DAT_06b7d490,(long)(*(int *)(this + 300) + -1));
    FUN_05475d88((string *)local_30,uVar11);
    FUN_05475d88((Insets *)&local_20,(string *)local_30);
    EffectAnim_UIAnim::InitUIAnim(0x3fc00000,local_38,local_34,this + 0x248,(Insets *)&local_20,1);
    std::string::~string((string *)&local_20);
    std::string::~string((string *)local_30);
  }
  else {
    bVar5 = std::operator==("Feature",psVar12);
    if (bVar5) {
      FUN_05475d88((string *)local_30,this + 0x138);
      GameFeatureType::GetGameFeatureTypeFromUnlockString
                ((GameFeatureType *)&local_20,(string *)local_30);
      lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      FUN_05475d88((string *)&local_38,lVar13 + 0x20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      std::string::~string((string *)local_30);
      uVar11 = StringHelper::ToImage((string *)&local_38,bVar3);
      *(undefined8 *)(this + 0x280) = uVar11;
      std::string::~string((string *)&local_38);
    }
    else {
      bVar3 = std::operator==("Avatar",psVar12);
      if (bVar3) {
        pEVar1 = (EffectAnim_UIAnim *)(this + 0x218);
        iVar9 = FUN_04a64e50(0xe);
        Sexy::FastCurve::SetOutRange
                  ((FastCurve *)&local_40,
                   (float)(*(int *)(this + 0x178) + *(int *)(this + 0x180) / 2),
                   (float)(iVar9 + *(int *)(this + 0x17c) + *(int *)(this + 0x184) / 2));
        FUN_05475d88((Insets *)&local_20,asStack_48);
        EffectAnim_UIAnim::InitPlantUIAnim
                  (0x3fb33333,local_40,local_3c,pEVar1,(Insets *)&local_20,1);
        std::string::~string((string *)&local_20);
        cVar4 = EffectAnim_UIAnim::IsValid(pEVar1);
        if (cVar4 != '\0') {
          EffectAnim_UIAnim::HideAvatarLayer(pEVar1);
          EffectAnim_UIAnim::PlayIdleLoop(pEVar1);
          psVar12 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
          ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar12);
          std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                    ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
          lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
          lVar13 = FUN_04a64bbc(*(undefined8 *)(lVar13 + 0x50),*(undefined8 *)(lVar13 + 0x58));
          if (lVar13 != 0) {
            uVar15 = 0;
            while( true ) {
              lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
              lVar13 = FUN_04a64d0c(*(undefined8 *)(lVar13 + 0x50));
              uVar14 = FUN_04a64bd0(*(undefined8 *)(lVar13 + 8),*(undefined8 *)(lVar13 + 0x10));
              if (uVar14 <= uVar15) break;
              lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
              lVar13 = FUN_04a64d0c(*(undefined8 *)(lVar13 + 0x50));
              psVar12 = (string *)FUN_04a64bb4(*(undefined8 *)(lVar13 + 8),uVar15);
              std::vector<std::string,std::allocator<std::string>>::push_back
                        ((vector<std::string,std::allocator<std::string>> *)&local_20,psVar12);
              uVar15 = uVar15 + 1;
            }
          }
          uVar15 = 0;
          while( true ) {
            uVar11 = local_20;
            uVar14 = FUN_04a64bd0(local_20,CONCAT44(uStack_14,local_18));
            if (uVar14 <= uVar15) break;
            uVar11 = FUN_04a64bdc(uVar11,uVar15);
            FUN_05475d88((string *)local_30,uVar11);
            EffectAnim_UIAnim::ShowLayer(pEVar1,(string *)local_30);
            std::string::~string((string *)local_30);
            uVar15 = uVar15 + 1;
          }
          std::vector<std::string,std::allocator<std::string>>::~vector
                    ((vector<std::string,std::allocator<std::string>> *)&local_20);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
        }
      }
    }
  }
  std::string::~string(asStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarConvertBox::InitBox(ConvertObject, std::wstring, int) */

void __thiscall
StarConvertBox::InitBox
          (StarConvertBox *this,ConvertObject *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  ConvertObject::operator=((ConvertObject *)(this + 0x130),param_2);
  thunk_FUN_05477b9c(this + 0x1a8,param_3);
  *(undefined4 *)(this + 300) = param_4;
  switch(param_4) {
  case 2:
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7d248);
    *(undefined8 *)(this + 0x278) = uVar1;
    break;
  case 3:
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7d2c8);
    *(undefined8 *)(this + 0x278) = uVar1;
    break;
  case 4:
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7d368);
    *(undefined8 *)(this + 0x278) = uVar1;
    break;
  case 5:
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7d5e8);
    *(undefined8 *)(this + 0x278) = uVar1;
    break;
  default:
    *(undefined8 *)(this + 0x278) = 0;
  }
  this[0x128] = (StarConvertBox)0x1;
  InitPlantView(this);
  InitDescription(this);
  InitShiningAnims(this);
  return;
}


/* StarConvertBox::Update() */

void __thiscall StarConvertBox::Update(StarConvertBox *this)

{
  char cVar1;
  
  PopingWidget::Update((PopingWidget *)this);
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x1e8));
  if (cVar1 != '\0') {
    EffectAnim_UIAnim::OnUpdate((EffectAnim_UIAnim *)(this + 0x1e8));
  }
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x1b8));
  if (cVar1 != '\0') {
    EffectAnim_UIAnim::OnUpdate((EffectAnim_UIAnim *)(this + 0x1b8));
  }
  cVar1 = FUN_04a64ba8(this[0x115]);
  if (cVar1 == '\0') {
    cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x218));
    if (cVar1 != '\0') {
      EffectAnim_UIAnim::OnUpdate((EffectAnim_UIAnim *)(this + 0x218));
    }
    cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x248));
    if (cVar1 != '\0') {
      EffectAnim_UIAnim::OnUpdate((EffectAnim_UIAnim *)(this + 0x248));
      return;
    }
  }
  return;
}

