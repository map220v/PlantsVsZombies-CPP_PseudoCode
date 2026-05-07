// Class: SecretStorePane


/* SecretStorePane::SetDisable(bool) */

void __thiscall SecretStorePane::SetDisable(SecretStorePane *this,bool param_1)

{
  if (*(long *)(this + 0x140) != 0) {
    *(bool *)(*(long *)(this + 0x140) + 0x6d) = !param_1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecretStorePane::Init() */

void __thiscall SecretStorePane::Init(SecretStorePane *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  CUILabel *pCVar12;
  ulong uVar13;
  undefined4 *puVar14;
  UIRewardFrame *pUVar15;
  CUIButton *pCVar16;
  long lVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined1 auStack_50 [8];
  wstring awStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [4];
  int local_34;
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0547419c((string *)(this + 0x128));
  if (cVar1 == '\0') {
    SecretStoreUtils::AddImageUnScaled
              ((Widget *)this,(string *)(this + 0x128),0,0,*(int *)(this + 0x50),
               *(int *)(this + 0x54),false);
    cVar1 = FUN_0547419c(this + 0x130);
  }
  else {
    cVar1 = FUN_0547419c(this + 0x130);
  }
  if (cVar1 == '\0') {
    iVar3 = FUN_03da11e8(0xf);
    SecretStoreUtils::AddImageUnScaledCenterWidth
              ((Widget *)this,(string *)(this + 0x130),0,0,*(int *)(this + 0x50),
               *(int *)(this + 0x54),iVar3,false);
    iVar3 = *(int *)(this + 0x11c);
  }
  else {
    iVar3 = *(int *)(this + 0x11c);
  }
  if (iVar3 == 0) {
    cVar1 = std::vector<SecretAwardInfo,std::allocator<SecretAwardInfo>>::empty
                      ((vector<SecretAwardInfo,std::allocator<SecretAwardInfo>> *)(this + 0xe0));
  }
  else {
    RewardImageFactory::GetImageForReward
              ((RtWeakPtr *)asStack_40,awStack_48,iVar3,*(undefined4 *)(this + 0x120));
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)asStack_40);
    if (bVar2) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_38,(RtWeakPtrBase *)asStack_40);
      iVar4 = FUN_03da11e8(0x32);
      iVar3 = *(int *)(this + 0x50);
      uVar10 = FUN_03da11e8(0x50);
      uVar11 = FUN_03da11e8(100);
      SecretStoreUtils::AddImageAdaptive
                (this,(RtWeakPtr<Sexy::SoundResource> *)asStack_38,iVar3 / 2 - iVar4,uVar10,uVar11,
                 uVar11);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_38);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_40);
    cVar1 = std::vector<SecretAwardInfo,std::allocator<SecretAwardInfo>>::empty
                      ((vector<SecretAwardInfo,std::allocator<SecretAwardInfo>> *)(this + 0xe0));
  }
  if (cVar1 == '\0') {
    lVar17 = FUN_03da0a0c(*(undefined8 *)(this + 0xe0),0);
    GetGameItemInfo(*(int *)(lVar17 + 4),0x7fffffff,0);
    if ((local_34 == 8) || (local_34 == 2)) {
      iVar3 = FUN_03da11e8(0x37);
      iVar4 = FUN_03da11e8(0x28);
      pCVar12 = (CUILabel *)
                SecretStoreUtils::AddTextUnScaled
                          ((Widget *)this,awStack_10,0,iVar3,*(int *)(this + 0x50),iVar4);
      Lua::CUILabel::SetTypeface(pCVar12,PrimeText_Game::Typeface_FZCuYuan_20_HardShadow);
      Lua::CUILabel::SetTextColorPreDefined(pCVar12,1);
      Lua::CUILabel::SetHAlignment(pCVar12,1);
      GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)asStack_38);
    }
    else {
      GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)asStack_38);
    }
  }
  TodStringTranslate(L"[SECRET_MIDDLE_STR]");
  iVar3 = FUN_03da11e8(0xb6);
  iVar4 = FUN_03da11e8(0x28);
  pCVar12 = (CUILabel *)
            SecretStoreUtils::AddTextUnScaled
                      ((Widget *)this,(wstring *)asStack_38,0,iVar3,*(int *)(this + 0x50),iVar4);
  FUN_05476c50(asStack_38);
  Lua::CUILabel::SetTypeface(pCVar12,PrimeText_Game::Typeface_FZCuYuan_20);
  Lua::CUILabel::SetTextColorPreDefined(pCVar12,0);
  Lua::CUILabel::SetHAlignment(pCVar12,1);
  uVar18 = *(undefined8 *)(this + 0xe0);
  uVar13 = FUN_03da0a18(uVar18,*(undefined8 *)(this + 0xe8));
  iVar5 = FUN_03da11e8(0x3c);
  iVar6 = FUN_03da11e8(0xf);
  iVar7 = FUN_03da11e8(0x17);
  iVar3 = *(int *)(pCVar12 + 0x4c);
  uVar19 = 0;
  iVar4 = (((1 - (int)uVar13) * iVar6 - iVar5 * (int)uVar13) + *(int *)(this + 0x50)) / 2;
  while (uVar19 < uVar13) {
    puVar14 = (undefined4 *)FUN_03da0a0c(uVar18);
    uVar10 = *puVar14;
    uVar11 = puVar14[4];
    pUVar15 = ::operator_new(0x148);
    UIRewardFrame::UIRewardFrame(pUVar15,uVar10,puVar14 + 2,uVar11,1);
    (**(code **)(*(long *)pUVar15 + 0x198))(pUVar15,iVar4,iVar7 + iVar3,iVar5,iVar5);
    (**(code **)(*(long *)this + 0x60))(this,pUVar15);
    uVar18 = *(undefined8 *)(this + 0xe0);
    uVar13 = FUN_03da0a18(uVar18,*(undefined8 *)(this + 0xe8));
    uVar19 = uVar19 + 1;
    iVar4 = iVar4 + iVar5 + iVar6;
  }
  iVar6 = FUN_03da11e8(0x96);
  iVar8 = FUN_03da11e8(0x32);
  iVar4 = *(int *)(this + 0x50);
  iVar9 = FUN_03da11e8(5);
  std::string::string(asStack_40,"IMAGE_UI_GENERIC_LIGHT_BUTTON_GREEN");
  std::string::string(asStack_38,"IMAGE_UI_GENERIC_LIGHT_BUTTON_GREEN_DOWN");
  pCVar16 = (CUIButton *)
            SecretStoreUtils::AddButtonUnScaled
                      ((Widget *)this,10,asStack_40,asStack_38,(iVar4 - iVar6) / 2,
                       iVar5 + iVar9 + iVar7 + iVar3,iVar6,iVar8,(ButtonListener *)(this + 0xd8));
  std::string::~string(asStack_38);
  nop();
  std::string::~string(asStack_40);
  nop();
  Lua::CUIButton::SetImageType(pCVar16,3);
  iVar4 = FUN_03da11e8(0);
  iVar3 = *(int *)(pCVar16 + 0x50);
  iVar5 = FUN_03da11e8(0x24);
  if (*(int *)(this + 0x114) == 0) {
    TodStringTranslate(L"[SECRET_BUY_STR_FREE]");
  }
  else {
    TodStringTranslate(L"[SECRET_BUY_STR]");
    Sexy::StrFormat(L"%d",asStack_38,(ulong)*(uint *)(this + 0x114));
    TodReplaceString((wstring *)asStack_40,L"{NUMBER}",(wstring *)asStack_38);
    FUN_05476c50(asStack_38);
    FUN_05476c50(asStack_40);
  }
  Sexy::Insets::Insets((Insets *)asStack_38,iVar4,iVar4,iVar3,iVar5);
  uVar18 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_ThickOutline);
  PVZ2UIButton::AddText((PVZ2UIButton *)pCVar16,auStack_50,asStack_38,uVar18,0);
  iVar3 = *(int *)(pCVar16 + 0x54);
  iVar4 = *(int *)(pCVar16 + 0x4c);
  *(CUIButton **)(this + 0x140) = pCVar16;
  iVar5 = FUN_03da11e8(5);
  TodStringTranslate(L"[SECRET_BUY_LEFT_STR]");
  Sexy::StrFormat(L"%d",asStack_38,(ulong)*(uint *)(this + 0x118));
  TodReplaceString((wstring *)asStack_40,L"{NUMBER}",(wstring *)asStack_38);
  FUN_05476c50(asStack_38);
  FUN_05476c50(asStack_40);
  iVar6 = FUN_03da11e8(0x28);
  pCVar12 = (CUILabel *)
            SecretStoreUtils::AddTextUnScaled
                      ((Widget *)this,awStack_48,0,iVar4 + iVar3 + iVar5,*(int *)(this + 0x50),iVar6
                      );
  Lua::CUILabel::SetTypeface(pCVar12,PrimeText_Game::Typeface_FZCuYuan_20);
  Lua::CUILabel::SetHAlignment(pCVar12,1);
  FUN_05476c50(awStack_48);
  FUN_05476c50(auStack_50);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* SecretStorePane::~SecretStorePane() */

void __thiscall SecretStorePane::~SecretStorePane(SecretStorePane *this)

{
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined ***)this = &PTR_GetClass_06775bc0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06775ee8;
  std::string::~string((string *)(this + 0x130));
  std::string::~string((string *)(this + 0x128));
  SecretBundleDetail::~SecretBundleDetail((SecretBundleDetail *)(this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* SecretStorePane::~SecretStorePane() */

void __thiscall SecretStorePane::~SecretStorePane(SecretStorePane *this)

{
  ~SecretStorePane(this);
  AK::FreeHook(this);
  return;
}


/* SecretStorePane::SecretStorePane(SecretBundleDetail const&, std::string const&, std::string
   const&) */

void __thiscall
SecretStorePane::SecretStorePane
          (SecretStorePane *this,SecretBundleDetail *param_1,string *param_2,string *param_3)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06775bc0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06775ee8;
  SecretBundleDetail::SecretBundleDetail((SecretBundleDetail *)(this + 0xe0),param_1);
  FUN_05475d88(this + 0x128,param_2);
  FUN_05475d88(this + 0x130,param_3);
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined4 *)(this + 0x138) = 0xffffffff;
  return;
}


/* SecretStorePane::ButtonDepress(int) */

void SecretStorePane::ButtonDepress(int param_1)

{
  int iVar1;
  
  iVar1 = Sexy::LazySingleton<SecretStoreMgr>::GetInstance();
  SecretStoreMgr::BuyOffer(iVar1,*(int *)((ulong)(uint)param_1 + 0x138));
  return;
}


/* non-virtual thunk to SecretStorePane::ButtonDepress(int) */

void __thiscall SecretStorePane::ButtonDepress(SecretStorePane *this,int param_1)

{
  ButtonDepress((int)this + -0xd8);
  return;
}

