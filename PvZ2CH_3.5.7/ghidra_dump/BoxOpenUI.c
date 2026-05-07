// Class: BoxOpenUI


/* BoxOpenUI::ButtonDepress(int) */

int BoxOpenUI::ButtonDepress(int param_1)

{
  return param_1;
}


/* non-virtual thunk to BoxOpenUI::ButtonDepress(int) */

void __thiscall BoxOpenUI::ButtonDepress(BoxOpenUI *this,int param_1)

{
  ButtonDepress((int)this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoxOpenUI::GetDrawPosById(int) */

void __thiscall BoxOpenUI::GetDrawPosById(BoxOpenUI *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 local_10;
  long local_8;
  
  iVar2 = *(int *)(this + 0xec);
  local_8 = ___stack_chk_guard;
  if (iVar2 < 6) {
    iVar6 = FUN_041c5e24(0x82);
    iVar1 = *(int *)(this + 0x50);
    iVar3 = FUN_041c5e24(10);
    iVar4 = FUN_041c5e24(0xa0);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_10,
               (float)((iVar6 + iVar3) * param_1 +
                       ((iVar1 - iVar6 * iVar2) + iVar3 * (1 - iVar2)) / 2 + iVar6 / 2),(float)iVar4
              );
  }
  else {
    iVar1 = iVar2 >> 1;
    if (param_1 < iVar1) {
      iVar6 = FUN_041c5e24(0x82);
      iVar2 = *(int *)(this + 0x50);
      iVar3 = FUN_041c5e24(10);
      iVar4 = FUN_041c5e24(0xa0);
      Sexy::FastCurve::SetOutRange
                ((FastCurve *)&local_10,
                 (float)((iVar6 + iVar3) * param_1 +
                         ((iVar2 - iVar6 * iVar1) + iVar3 * (1 - iVar1)) / 2 + iVar6 / 2),
                 (float)iVar4);
    }
    else {
      iVar3 = FUN_041c5e24(0x82);
      iVar6 = *(int *)(this + 0x50);
      iVar4 = FUN_041c5e24(10);
      iVar5 = FUN_041c5e24(0xa0);
      Sexy::FastCurve::SetOutRange
                ((FastCurve *)&local_10,
                 (float)((iVar3 + iVar4) * (param_1 - iVar1) +
                         ((iVar6 - iVar3 * (iVar2 - iVar1)) + iVar4 * (1 - (iVar2 - iVar1))) / 2 +
                        iVar3 / 2),(float)(iVar3 + iVar5));
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((int)local_10,(int)((ulong)local_10 >> 0x20));
}


/* BoxOpenUI::TouchEnded(Sexy::Touch const&) */

void BoxOpenUI::TouchEnded(Touch *param_1)

{
  LawnApp *this;
  char cVar1;
  
  this = gLawnApp;
  cVar1 = LawnApp::IsAdventureSurpriseUIValid(gLawnApp);
  if (cVar1 != '\0') {
    return;
  }
  LawnApp::KillBoxOpenUI(this);
  return;
}


/* BoxOpenUI::SetAnimName(std::string) */

void BoxOpenUI::SetAnimName(long param_1)

{
  thunk_FUN_05475e00(param_1 + 0x110);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoxOpenUI::ResetAnimName() */

void __thiscall BoxOpenUI::ResetAnimName(BoxOpenUI *this)

{
  undefined8 uVar1;
  string asStack_18 [8];
  string asStack_10 [8];
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StringToUpper((Sexy *)(this + 0x118),___stack_chk_guard);
  uVar1 = FUN_0547429c(asStack_18);
  Sexy::StrFormat("POPANIM_EFFECTS_BOX_%s_OPEN",asStack_10,uVar1);
  SetAnimName(this,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoxOpenUI::getBoxRewardName(std::string&, std::string const&) */

void BoxOpenUI::getBoxRewardName(string *param_1,string *param_2)

{
  char cVar1;
  Magento *this;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar2;
  long lVar3;
  ulong uVar4;
  wchar_t *pwVar5;
  string *extraout_x1;
  string *in_x2;
  ulong uVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  Sexy aSStack_20 [8];
  wstring awStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178();
  nop();
  Magento::GetPlantLevelUp(this);
  uVar4 = 0;
  do {
    uVar6 = uVar4;
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
    uVar4 = FUN_041c5d24(*(undefined8 *)(lVar3 + 0x60),*(undefined8 *)(lVar3 + 0x68));
    if (uVar4 <= uVar6) {
      lVar3 = FUN_05474374(param_2,"plant_piece_",0);
      goto joined_r0x041c6438;
    }
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
    pRVar2 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_041c5d30(*(undefined8 *)(lVar3 + 0x60),uVar6);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
    cVar1 = std::operator==((string *)(lVar3 + 0x80),in_x2);
    uVar4 = uVar6 + 1;
  } while (cVar1 == '\0');
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
  pRVar2 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_041c5d30(*(undefined8 *)(lVar3 + 0x60),uVar6);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
  MagentoProductProps::GetLocalizedShortDescription();
  Sexy::UTF8StringToWString(aSStack_20,extraout_x1);
  TodStringTranslate(awStack_18);
  FUN_054766c8();
  FUN_05476c50(auStack_10);
  FUN_05476c50(awStack_18);
  std::string::~string((string *)aSStack_20);
  lVar3 = FUN_05474374(param_2,"plant_piece_",0);
joined_r0x041c6438:
  if (lVar3 == -1) {
    lVar3 = FUN_05474374(param_2,"avatar_piece",0);
    if (lVar3 == -1) goto LAB_041c6384;
    pwVar5 = L"[AVATAR_PIECE]";
  }
  else {
    pwVar5 = L"[PIECE]";
  }
  TodStringTranslate(pwVar5);
  thunk_FUN_05477668();
  FUN_05476c50(auStack_10);
LAB_041c6384:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* BoxOpenUI::SetPlayingAnimTime(float) */

void __thiscall BoxOpenUI::SetPlayingAnimTime(BoxOpenUI *this,float param_1)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0xe0) = fVar1 + param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoxOpenUI::StartPlayingAnimation() */

void __thiscall BoxOpenUI::StartPlayingAnimation(BoxOpenUI *this)

{
  Effect_PopAnim *pEVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pEVar1 = (Effect_PopAnim *)FUN_041c5d0c(*(undefined8 *)(this + 0x108));
  std::string::string(asStack_10,"explode");
  Effect_PopAnim::PlaySingleAnimation(pEVar1,asStack_10,0);
  std::string::~string(asStack_10);
  nop();
  SetPlayingAnimTime(this,0.6);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoxOpenUI::InitView() */

void __thiscall BoxOpenUI::InitView(BoxOpenUI *this)

{
  int iVar1;
  ResourceInfo *pRVar2;
  Effect_PopAnim *pEVar3;
  StandaloneEffect *this_00;
  RtWeakPtr aRStack_18 [8];
  FastCurve aFStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))
            (this,*(undefined4 *)(gLawnApp + 0x71c),*(undefined4 *)(gLawnApp + 0x720),
             *(undefined4 *)(gLawnApp + 0x724),*(undefined4 *)(gLawnApp + 0x728));
  GetPAMByName((string *)(this + 0x110));
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  pEVar3 = GameObject::CreateOutsideTable<Effect_PopAnim>();
  *(Effect_PopAnim **)(this + 0x108) = pEVar3;
  Effect_PopAnim::CreatePopAnimRig(pEVar3,(PopAnim *)pRVar2,(RtClass *)0x0);
  this_00 = *(StandaloneEffect **)(this + 0x108);
  iVar1 = FUN_041c5e24(0x96);
  Sexy::FastCurve::SetOutRange
            (aFStack_10,(float)(*(int *)(this + 0x50) / 2),
             (float)(iVar1 + *(int *)(this + 0x54) / 2));
  StandaloneEffect::SetScreenSpaceOrigin(this_00,(SexyVector2 *)aFStack_10,900000);
  Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0x108),true);
  (**(code **)(**(long **)(this + 0x108) + 0x80))(0x3fc00000,*(long **)(this + 0x108));
  pEVar3 = *(Effect_PopAnim **)(this + 0x108);
  std::string::string((string *)aFStack_10,"idle");
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(pEVar3,aFStack_10,0);
  std::string::~string((string *)aFStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoxOpenUI::BoxOpenUI(std::string const&) */

void __thiscall BoxOpenUI::BoxOpenUI(BoxOpenUI *this,string *param_1)

{
  LawnApp *pLVar1;
  long lVar2;
  undefined4 uVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06800c90;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06800fd0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf0));
  Set8BytesTo0(this + 0x110);
  FUN_05475d88(this + 0x118,param_1);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Effects_BoxOpen");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadshotFrame");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(undefined8 *)(this + 0x108) = 0;
  std::vector<BoxContent,std::allocator<BoxContent>>::clear
            ((vector<BoxContent,std::allocator<BoxContent>> *)(this + 0xf0));
  uVar3 = PVZ_EOT();
  this[0xe8] = (BoxOpenUI)0x0;
  lVar2 = ___stack_chk_guard;
  *(undefined4 *)(this + 0xe0) = uVar3;
  *(undefined4 *)(this + 0xe4) = uVar3;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoxOpenUI::~BoxOpenUI() */

void __thiscall BoxOpenUI::~BoxOpenUI(BoxOpenUI *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06800fd0;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06800c90;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Effects_BoxOpen");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadshotFrame");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (*(long **)(this + 0x108) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x108) + 0x18))();
    *(undefined8 *)(this + 0x108) = 0;
  }
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::string::~string((string *)(this + 0x118));
  std::string::~string((string *)(this + 0x110));
  std::vector<BoxContent,std::allocator<BoxContent>>::~vector
            ((vector<BoxContent,std::allocator<BoxContent>> *)(this + 0xf0));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoxOpenUI::~BoxOpenUI() */

void __thiscall BoxOpenUI::~BoxOpenUI(BoxOpenUI *this)

{
  ~BoxOpenUI(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x041c7f18 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* BoxOpenUI::DrawPrizePool(Sexy::Graphics*) */

void BoxOpenUI::DrawPrizePool(Graphics *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  string *psVar12;
  PlantAccessoryMgr *pPVar13;
  SeedPacketUtils *pSVar14;
  RtWeakPtr *this;
  LotteryResultProgressBar *pLVar15;
  SalesProgressBar *pSVar16;
  ResourceInfo *pRVar17;
  Image *pIVar18;
  int iVar19;
  Graphics *in_x1;
  int iVar20;
  ulong uVar21;
  float fVar22;
  undefined4 uVar23;
  undefined1 auVar24 [16];
  float in_s1;
  float fVar25;
  float fVar26;
  undefined1 *local_88;
  RtWeakPtr<Sexy::ResourceInfo> *local_80;
  string *local_78;
  int local_68;
  int local_64;
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  RtMixedPtrBase aRStack_40 [8];
  RtMixedPtrBase aRStack_38 [8];
  string asStack_30 [8];
  undefined1 auStack_28 [8];
  undefined4 local_20 [2];
  int local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_68 = *(int *)(param_1 + 0x50) / 2;
  uVar21 = 0;
  local_64 = FUN_041c5e24(0x32);
  local_64 = local_64 + *(int *)(param_1 + 0x54) / 2;
  lVar9 = FUN_041c5d10(*(undefined8 *)(param_1 + 0xf0),*(undefined8 *)(param_1 + 0xf8));
  if (lVar9 != 0) {
    do {
      fVar22 = (float)(**(code **)(*(long *)param_1 + 800))(param_1,uVar21 & 0xffffffff);
      fVar25 = *(float *)(param_1 + 0xe4);
      uVar23 = PVZ_T();
      local_18[0] = (int)fVar22;
      iVar3 = CurveLerp<int>(fVar25,fVar25 + 0.4,uVar23,&local_68,(string *)local_18,3);
      fVar22 = *(float *)(param_1 + 0xe4);
      uVar23 = PVZ_T();
      local_18[0] = (int)in_s1;
      iVar4 = CurveLerp<int>(fVar22,fVar22 + 0.4,uVar23,&local_64,(string *)local_18,3);
      in_s1 = *(float *)(param_1 + 0xe4);
      auVar24 = PVZ_T();
      in_s1 = in_s1 + 0.4;
      local_20[0] = 0x3dcccccd;
      local_18[0] = 0x3f800000;
      fVar22 = CurveLerp<float>(auVar24,in_s1,auVar24._0_4_,(wstring *)local_20,(string *)local_18,3
                               );
      uVar10 = FUN_041c5d1c(*(undefined8 *)(param_1 + 0xf0),uVar21);
      FUN_05475ffc((string *)local_18,uVar10,0,6);
      bVar1 = std::operator==((string *)local_18,"plant_");
      if (bVar1) {
        uVar10 = FUN_041c5d1c(*(undefined8 *)(param_1 + 0xf0),uVar21);
        lVar9 = FUN_05474374(uVar10,"plant_piece_",0);
        if (lVar9 != -1) goto LAB_041c7f50;
        std::string::~string((string *)local_18);
        uVar10 = FUN_041c5d1c(*(undefined8 *)(param_1 + 0xf0),uVar21);
        FUN_05475ffc(asStack_30,uVar10,6,0xffffffffffffffff);
        pLVar15 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af18c8);
        iVar20 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
        iVar5 = (int)((float)iVar3 - fVar22 * 0.5 * (float)iVar20);
        pSVar16 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af18c8);
        iVar20 = SalesProgressBar::GetCurrentLevel(pSVar16);
        iVar20 = (int)((float)iVar4 - fVar22 * 0.5 * (float)iVar20);
        pSVar14 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
        lVar9 = SeedPacketUtils::GetPlantPacketRenderData(pSVar14,asStack_30,-1,-1,-1);
        pRVar17 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar9 + 0x170));
        Sexy::Insets::Insets
                  ((Insets *)local_18,iVar5 + *(int *)(lVar9 + 0x30),iVar20 + *(int *)(lVar9 + 0x34)
                   ,*(int *)(lVar9 + 0x28),*(int *)(lVar9 + 0x2c));
        Sexy::Graphics::DrawImage(in_x1,(Image *)pRVar17,(TRect *)local_18,(TRect *)(lVar9 + 0x20));
        pRVar17 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar9 + 0x170));
        Sexy::Graphics::DrawImage
                  (in_x1,(Image *)pRVar17,iVar5 + *(int *)(lVar9 + 0x18),
                   iVar20 + *(int *)(lVar9 + 0x1c),(TRect *)(lVar9 + 8));
        psVar12 = (string *)FUN_041c5d1c(*(undefined8 *)(param_1 + 0xf0),uVar21);
        getBoxRewardName((string *)param_1,psVar12);
        uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
        iVar20 = FUN_041c5e24(100);
        pSVar16 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af18c8);
        iVar5 = SalesProgressBar::GetCurrentLevel(pSVar16);
        iVar6 = FUN_041c5e24(200);
        FUN_05477b24((wstring *)local_20,auStack_28);
        Sexy::Color::Color((Color *)local_18,1);
        in_s1 = (float)(iVar4 + iVar5 / 2);
        Sexy::PrimeTypeface::DrawString_Line
                  ((PrimeTypeface *)(float)(iVar3 - iVar20),in_s1,(float)iVar6,uVar10);
        FUN_05476c50((wstring *)local_20);
        FUN_05476c50(auStack_28);
        std::string::~string(asStack_30);
      }
      else {
LAB_041c7f50:
        std::string::~string((string *)local_18);
        uVar10 = FUN_041c5d1c(*(undefined8 *)(param_1 + 0xf0),uVar21);
        lVar9 = FUN_05474374(uVar10,"plant_piece_",0);
        if (lVar9 == -1) {
          uVar10 = FUN_041c5d1c(*(undefined8 *)(param_1 + 0xf0),uVar21);
          lVar9 = FUN_05474374(uVar10,"avatar_piece_",0);
          if (lVar9 == -1) {
            uVar10 = FUN_041c5d1c(*(undefined8 *)(param_1 + 0xf0),uVar21);
            FUN_05475ffc((string *)local_18,uVar10,0,10);
            bVar1 = std::operator==((string *)local_18,"accessory_");
            if (bVar1) {
              uVar10 = FUN_041c5d1c(*(undefined8 *)(param_1 + 0xf0),uVar21);
              lVar9 = FUN_05474374(uVar10,"accessory_piece_",0);
              if (lVar9 == -1) {
                std::string::~string((string *)local_18);
                uVar10 = FUN_041c5d1c(*(undefined8 *)(param_1 + 0xf0),uVar21);
                FUN_05475ffc(asStack_30,uVar10,10,0xffffffffffffffff);
                psVar12 = (string *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
                pLVar15 = (LotteryResultProgressBar *)
                          PlantAccessoryMgr::GetAccessoryDisplayImage(psVar12);
                if (pLVar15 != (LotteryResultProgressBar *)0x0) {
                  iVar20 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
                  iVar5 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar15);
                  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
                  iVar7 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar15);
                  Sexy::Graphics::DrawImage
                            (in_x1,(Image *)pLVar15,iVar3 - iVar20 / 2,iVar4 - iVar5 / 2,
                             (int)((float)iVar6 * fVar22),(int)((float)iVar7 * fVar22));
                }
                pPVar13 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance()
                ;
                PlantAccessoryMgr::GetAccessoryDisplayName(pPVar13,asStack_30);
                uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18)
                ;
                iVar20 = FUN_041c5e24(100);
                iVar5 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar15);
                in_s1 = (float)iVar4 + (float)iVar5 * fVar22 * 0.5;
                iVar4 = FUN_041c5e24(200);
                FUN_05477b24((wstring *)local_20,auStack_28);
                Sexy::Color::Color((Color *)local_18,1);
                Sexy::PrimeTypeface::DrawString_Line
                          ((PrimeTypeface *)(float)(iVar3 - iVar20),in_s1,(float)iVar4,uVar10);
                FUN_05476c50((wstring *)local_20);
                FUN_05476c50(auStack_28);
                std::string::~string(asStack_30);
                goto LAB_041c7fc4;
              }
            }
            std::string::~string((string *)local_18);
            uVar10 = FUN_041c5d1c(*(undefined8 *)(param_1 + 0xf0),uVar21);
            lVar9 = FUN_05474374(uVar10,"accessory_piece_",0);
            if (lVar9 == -1) goto LAB_041c7fc4;
            uVar10 = FUN_041c5d1c(*(undefined8 *)(param_1 + 0xf0),uVar21);
            FUN_05475ffc(asStack_58,uVar10,0x10,0xffffffffffffffff);
            bVar1 = std::operator!=(asStack_58,"");
            if (bVar1) {
              FUN_05475d88(asStack_50,asStack_58);
              std::string::string(asStack_48,"_piece");
              nop();
              FUN_031dcc6c(aRStack_40,asStack_50,asStack_48);
              psVar12 = (string *)
                        Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
              ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar12);
              cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_38);
              if (cVar2 != '\0') {
                lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
                pIVar18 = (Image *)StringHelper::ToImage((string *)(lVar9 + 0x60),false);
                if (pIVar18 != (Image *)0x0) {
                  pLVar15 = (LotteryResultProgressBar *)
                            CachedUIResourcePtr<Sexy::Image>::operator->
                                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af17e0);
                  iVar20 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
                  pSVar16 = (SalesProgressBar *)
                            CachedUIResourcePtr<Sexy::Image>::operator->
                                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af17e0);
                  iVar5 = SalesProgressBar::GetCurrentLevel(pSVar16);
                  pLVar15 = (LotteryResultProgressBar *)
                            CachedUIResourcePtr<Sexy::Image>::operator->
                                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af17e0);
                  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
                  pSVar16 = (SalesProgressBar *)
                            CachedUIResourcePtr<Sexy::Image>::operator->
                                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af17e0);
                  iVar7 = SalesProgressBar::GetCurrentLevel(pSVar16);
                  Sexy::Graphics::DrawImage
                            (in_x1,pIVar18,iVar3 - iVar20 / 2,iVar4 - iVar5 / 2,
                             (int)((float)iVar6 * fVar22),(int)((float)iVar7 * fVar22));
                }
                lVar9 = FUN_041c5d1c(*(undefined8 *)(param_1 + 0xf0),uVar21);
                Sexy::StrFormat(L"x%d",asStack_30,(ulong)*(uint *)(lVar9 + 8));
                uVar10 = PrimeText_PotentialTypeface::Typeface
                                   (PrimeText_Game::Typeface_CafeteriaBlack_20);
                iVar20 = FUN_041c5e24(0x23);
                iVar5 = FUN_041c5e24(0x14);
                FUN_05477b24((wstring *)local_20,asStack_30);
                Sexy::Color::Color((Color *)local_18,1);
                Sexy::PrimeTypeface::DrawString_Line
                          ((PrimeTypeface *)(float)(iVar20 + iVar3),(float)(iVar5 + iVar4),
                           (float)iVar20,uVar10);
                FUN_05476c50((wstring *)local_20);
                pPVar13 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance()
                ;
                PlantAccessoryMgr::GetAccessoryDisplayName(pPVar13,asStack_58);
                TodStringTranslate(L"[PIECE]");
                std::operator+((wstring *)local_20,(wstring *)local_18);
                FUN_05476c50((string *)local_18);
                FUN_05476c50((wstring *)local_20);
                goto LAB_041c8d2c;
              }
              goto LAB_041c885c;
            }
          }
          else {
            uVar10 = FUN_041c5d1c(*(undefined8 *)(param_1 + 0xf0),uVar21);
            FUN_05475ffc(asStack_58,uVar10,0xd,0xffffffffffffffff);
            bVar1 = std::operator!=(asStack_58,"");
            if (bVar1) {
              std::string::string(asStack_50,"avatar_piece_");
              nop();
              FUN_05475d88(asStack_48,asStack_58);
              FUN_031dcc6c(aRStack_40,asStack_50,asStack_48);
              psVar12 = (string *)
                        Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
              ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar12);
              cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_38);
              if (cVar2 != '\0') {
                lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
                pIVar18 = (Image *)StringHelper::ToImage((string *)(lVar9 + 0x60),false);
                if (pIVar18 != (Image *)0x0) {
                  pLVar15 = (LotteryResultProgressBar *)
                            CachedUIResourcePtr<Sexy::Image>::operator->
                                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af17e0);
                  iVar20 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
                  pSVar16 = (SalesProgressBar *)
                            CachedUIResourcePtr<Sexy::Image>::operator->
                                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af17e0);
                  iVar5 = SalesProgressBar::GetCurrentLevel(pSVar16);
                  pLVar15 = (LotteryResultProgressBar *)
                            CachedUIResourcePtr<Sexy::Image>::operator->
                                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af17e0);
                  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
                  pSVar16 = (SalesProgressBar *)
                            CachedUIResourcePtr<Sexy::Image>::operator->
                                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af17e0);
                  iVar7 = SalesProgressBar::GetCurrentLevel(pSVar16);
                  Sexy::Graphics::DrawImage
                            (in_x1,pIVar18,iVar3 - iVar20 / 2,iVar4 - iVar5 / 2,
                             (int)((float)iVar6 * fVar22),(int)((float)iVar7 * fVar22));
                }
                lVar9 = FUN_041c5d1c(*(undefined8 *)(param_1 + 0xf0),uVar21);
                Sexy::StrFormat(L"x%d",asStack_30,(ulong)*(uint *)(lVar9 + 8));
                uVar10 = PrimeText_PotentialTypeface::Typeface
                                   (PrimeText_Game::Typeface_CafeteriaBlack_20);
                iVar20 = FUN_041c5e24(0x23);
                iVar5 = FUN_041c5e24(0x14);
                FUN_05477b24((wstring *)local_20,asStack_30);
                Sexy::Color::Color((Color *)local_18,1);
                Sexy::PrimeTypeface::DrawString_Line
                          ((PrimeTypeface *)(float)(iVar20 + iVar3),(float)(iVar5 + iVar4),
                           (float)iVar20,uVar10);
                FUN_05476c50((wstring *)local_20);
                psVar12 = (string *)FUN_041c5d1c(*(undefined8 *)(param_1 + 0xf0),uVar21);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
                nop();
                getBoxRewardName((string *)param_1,psVar12);
LAB_041c8d2c:
                local_88 = auStack_28;
                uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18)
                ;
                iVar20 = FUN_041c5e24(100);
                pSVar16 = (SalesProgressBar *)
                          CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af17e0);
                iVar5 = SalesProgressBar::GetCurrentLevel(pSVar16);
                in_s1 = (float)iVar4 + (float)iVar5 * fVar22 * 0.5;
                iVar4 = FUN_041c5e24(200);
                FUN_05477b24((wstring *)local_20,local_88);
                Sexy::Color::Color((Color *)local_18,1);
                Sexy::PrimeTypeface::DrawString_Line
                          ((PrimeTypeface *)(float)(iVar3 - iVar20),in_s1,(float)iVar4,uVar10,in_x1,
                           (wstring *)local_20,1,(string *)local_18,0);
                FUN_05476c50((wstring *)local_20);
                FUN_05476c50(local_88);
                FUN_05476c50(asStack_30);
              }
LAB_041c885c:
              local_78 = asStack_50;
              local_80 = (RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38;
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_80);
              std::string::~string((string *)aRStack_40);
              std::string::~string(asStack_48);
              std::string::~string(local_78);
            }
          }
          std::string::~string(asStack_58);
        }
        else {
          uVar10 = FUN_041c5d1c(*(undefined8 *)(param_1 + 0xf0),uVar21);
          FUN_05475ffc(asStack_60,uVar10,0xc,0xffffffffffffffff);
          bVar1 = std::operator!=(asStack_60,"");
          if (bVar1) {
            std::string::string(asStack_58,"plant_piece_");
            nop();
            FUN_05475d88(asStack_50,asStack_60);
            FUN_031dcc6c(asStack_48,asStack_58,asStack_50);
            psVar12 = (string *)
                      Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
            ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar12);
            cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_40);
            if (cVar2 != '\0') {
              psVar12 = (string *)
                        Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
              ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar12);
              cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_38);
              if (cVar2 == '\0') {
                iVar19 = 0;
                iVar20 = 0;
              }
              else {
                pSVar14 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
                lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
                this = (RtWeakPtr *)
                       SeedPacketUtils::GetPlantPiecePacketRenderData(pSVar14,(string *)(lVar9 + 8))
                ;
                fVar22 = fVar22 * 0.7;
                pLVar15 = (LotteryResultProgressBar *)
                          CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af17b8);
                iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
                pSVar16 = (SalesProgressBar *)
                          CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af17b8);
                iVar8 = SalesProgressBar::GetCurrentLevel(pSVar16);
                iVar5 = *(int *)(this + 0x10);
                iVar6 = *(int *)(this + 0x14);
                iVar19 = (int)(fVar22 * (float)*(int *)(this + 0x28));
                iVar20 = (int)(fVar22 * (float)*(int *)(this + 0x2c));
                pRVar17 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this + 0x170);
                fVar25 = (float)(int)((float)iVar3 - fVar22 * (float)(iVar7 / 2));
                fVar26 = (float)(int)((float)iVar4 - fVar22 * (float)(iVar8 / 2));
                Sexy::Insets::Insets
                          ((Insets *)local_18,(int)(fVar25 + (float)*(int *)(this + 0x30) * fVar22),
                           (int)(fVar26 + (float)*(int *)(this + 0x34) * fVar22),iVar19,iVar20);
                Sexy::Graphics::DrawImage
                          (in_x1,(Image *)pRVar17,(TRect *)local_18,(TRect *)(this + 0x20));
                bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
                if (bVar1) {
                  lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)this);
                  pRVar17 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_
                                      ((RtWeakPtr *)(lVar9 + 0x48));
                  Sexy::Insets::Insets
                            ((Insets *)local_18,
                             (int)(fVar25 + (float)*(int *)(this + 0x18) * fVar22),
                             (int)(fVar26 + (float)*(int *)(this + 0x1c) * fVar22),
                             (int)(fVar22 * (float)iVar5),(int)(fVar22 * (float)iVar6));
                  Sexy::Graphics::DrawImage
                            (in_x1,(Image *)pRVar17,(TRect *)local_18,(TRect *)(this + 8));
                  iVar20 = iVar20 / 2;
                  iVar19 = iVar19 / 2;
                }
                else {
                  iVar20 = iVar20 / 2;
                  iVar19 = iVar19 / 2;
                }
              }
              lVar9 = FUN_041c5d1c(*(undefined8 *)(param_1 + 0xf0),uVar21);
              Sexy::StrFormat(L"x%d",asStack_30,(ulong)*(uint *)(lVar9 + 8));
              uVar10 = PrimeText_PotentialTypeface::Typeface
                                 (PrimeText_Game::Typeface_CafeteriaBlack_20);
              iVar5 = FUN_041c5e24(0x14);
              iVar6 = FUN_041c5e24(0x23);
              FUN_05477b24((wstring *)local_20,asStack_30);
              Sexy::Color::Color((Color *)local_18,1);
              Sexy::PrimeTypeface::DrawString_Line
                        ((PrimeTypeface *)(float)(iVar3 + iVar19),(float)(iVar5 + iVar4),
                         (float)iVar6,uVar10);
              FUN_05476c50((wstring *)local_20);
              psVar12 = (string *)FUN_041c5d1c(*(undefined8 *)(param_1 + 0xf0),uVar21);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
              nop();
              getBoxRewardName((string *)param_1,psVar12);
              uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
              iVar5 = FUN_041c5e24(100);
              iVar6 = FUN_041c5e24(200);
              FUN_05477b24((wstring *)local_20,auStack_28);
              Sexy::Color::Color((Color *)local_18,1);
              in_s1 = (float)(iVar4 + iVar20);
              Sexy::PrimeTypeface::DrawString_Line
                        ((PrimeTypeface *)(float)(iVar3 - iVar5),in_s1,(float)iVar6,uVar10);
              FUN_05476c50((wstring *)local_20);
              FUN_05476c50(auStack_28);
              FUN_05476c50(asStack_30);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
            }
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
            std::string::~string(asStack_48);
            std::string::~string(asStack_50);
            std::string::~string(asStack_58);
          }
          std::string::~string(asStack_60);
        }
      }
LAB_041c7fc4:
      uVar21 = uVar21 + 1;
      uVar11 = FUN_041c5d10(*(undefined8 *)(param_1 + 0xf0),*(undefined8 *)(param_1 + 0xf8));
    } while (uVar21 < uVar11);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoxOpenUI::SetContentList(std::map<std::string, int, std::less<std::string >,
   std::allocator<std::pair<std::string const, int> > > const&) */

void __thiscall BoxOpenUI::SetContentList(BoxOpenUI *this,map *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 local_28;
  undefined8 local_20;
  PVPSeedZombie aPStack_18 [8];
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
          ::size((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                  *)param_1);
  *(undefined4 *)(this + 0xec) = uVar2;
  local_28 = std::
             map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
             ::begin((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                      *)param_1);
  local_20 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)param_1);
  while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_28,(rbtree_iterator *)&local_20), bVar1
        ) {
    lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_28);
    PVPSeedZombie::PVPSeedZombie(aPStack_18);
    thunk_FUN_05475e00(aPStack_18,lVar3);
    local_10 = *(undefined4 *)(lVar3 + 8);
    std::vector<BoxContent,std::allocator<BoxContent>>::push_back
              ((vector<BoxContent,std::allocator<BoxContent>> *)(this + 0xf0),
               (BoxContent *)aPStack_18);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)aPStack_18);
    std::_Rb_tree_const_iterator<Sexy::PIEffect*>::operator++
              ((_Rb_tree_const_iterator<Sexy::PIEffect*> *)&local_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoxOpenUI::Draw(Sexy::Graphics*) */

void __thiscall BoxOpenUI::Draw(BoxOpenUI *this,Graphics *param_1)

{
  char cVar1;
  StandaloneEffect *this_00;
  
  LawnApp::DrawDarkeningLayer(gLawnApp,param_1,0.7);
  nop();
  this_00 = (StandaloneEffect *)FUN_041c5d0c(*(undefined8 *)(this + 0x108));
  if (this_00 != (StandaloneEffect *)0x0) {
    StandaloneEffect::Draw(this_00,param_1);
  }
  cVar1 = FUN_041c5d08(this[0xe8]);
  if (cVar1 != '\0') {
    (**(code **)(*(long *)this + 0x318))(this,param_1);
  }
  return;
}


/* BoxOpenUI::Update() */

void __thiscall BoxOpenUI::Update(BoxOpenUI *this)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  if (*(StandaloneEffect **)(this + 0x108) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Update(*(StandaloneEffect **)(this + 0x108));
  }
  fVar3 = *(float *)(this + 0xe0);
  fVar1 = (float)PVZ_T();
  if (fVar3 < fVar1) {
    uVar2 = PVZ_EOT();
    *(undefined4 *)(this + 0xe0) = uVar2;
    uVar2 = PVZ_T();
    this[0xe8] = (BoxOpenUI)0x1;
    *(undefined4 *)(this + 0xe4) = uVar2;
  }
  return;
}

