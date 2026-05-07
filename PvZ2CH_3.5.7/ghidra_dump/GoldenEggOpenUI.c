// Class: GoldenEggOpenUI


/* GoldenEggOpenUI::ButtonDepress(int) */

int GoldenEggOpenUI::ButtonDepress(int param_1)

{
  return param_1;
}


/* non-virtual thunk to GoldenEggOpenUI::ButtonDepress(int) */

void __thiscall GoldenEggOpenUI::ButtonDepress(GoldenEggOpenUI *this,int param_1)

{
  ButtonDepress((int)this + -0xd8);
  return;
}


/* GoldenEggOpenUI::InitView() */

void __thiscall GoldenEggOpenUI::InitView(GoldenEggOpenUI *this)

{
  (**(code **)(*(long *)this + 0x198))
            (this,*(undefined4 *)(gLawnApp + 0x71c),*(undefined4 *)(gLawnApp + 0x720),
             *(undefined4 *)(gLawnApp + 0x724),*(undefined4 *)(gLawnApp + 0x728));
  return;
}


/* GoldenEggOpenUI::HasBonus() */

bool __thiscall GoldenEggOpenUI::HasBonus(GoldenEggOpenUI *this)

{
  long lVar1;
  
  lVar1 = FUN_04beaa0c(*(undefined8 *)(this + 0xe0),*(undefined8 *)(this + 0xe8));
  return lVar1 != 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GoldenEggOpenUI::GetDrawPosById(int) */

void GoldenEggOpenUI::GetDrawPosById(int param_1)

{
  int iVar1;
  FastCurve local_20 [8];
  int local_18;
  int local_14;
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = LawnApp::GetGoldenEggUI(gLawnApp);
  GoldenEggUI::GetBonusRect(iVar1);
  Sexy::FastCurve::SetOutRange(local_20,(float)(local_18 + local_10 / 2),(float)local_14);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_20._0_4_,local_20._4_4_);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GoldenEggOpenUI::getBoxRewardName(std::string&, std::string const&) */

void GoldenEggOpenUI::getBoxRewardName(string *param_1,string *param_2)

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
    uVar4 = FUN_04beaa20(*(undefined8 *)(lVar3 + 0x60),*(undefined8 *)(lVar3 + 0x68));
    if (uVar4 <= uVar6) {
      lVar3 = FUN_05474374(param_2,"plant_piece_",0);
      goto joined_r0x04beb6b8;
    }
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
    pRVar2 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04beaa2c(*(undefined8 *)(lVar3 + 0x60),uVar6);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
    cVar1 = std::operator==((string *)(lVar3 + 0x80),in_x2);
    uVar4 = uVar6 + 1;
  } while (cVar1 == '\0');
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
  pRVar2 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04beaa2c(*(undefined8 *)(lVar3 + 0x60),uVar6);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
  MagentoProductProps::GetLocalizedShortDescription();
  Sexy::UTF8StringToWString(aSStack_20,extraout_x1);
  TodStringTranslate(awStack_18);
  FUN_054766c8();
  FUN_05476c50(auStack_10);
  FUN_05476c50(awStack_18);
  std::string::~string((string *)aSStack_20);
  lVar3 = FUN_05474374(param_2,"plant_piece_",0);
joined_r0x04beb6b8:
  if (lVar3 == -1) {
    lVar3 = FUN_05474374(param_2,"avatar_piece",0);
    if (lVar3 == -1) goto LAB_04beb604;
    pwVar5 = L"[AVATAR_PIECE]";
  }
  else {
    pwVar5 = L"[PIECE]";
  }
  TodStringTranslate(pwVar5);
  thunk_FUN_05477668();
  FUN_05476c50(auStack_10);
LAB_04beb604:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GoldenEggOpenUI::GoldenEggOpenUI() */

void __thiscall GoldenEggOpenUI::GoldenEggOpenUI(GoldenEggOpenUI *this)

{
  LawnApp *pLVar1;
  undefined4 uVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_0697d530;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0697d858;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe0));
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
  std::vector<EggContent,std::allocator<EggContent>>::clear
            ((vector<EggContent,std::allocator<EggContent>> *)(this + 0xe0));
  this[0xf8] = (GoldenEggOpenUI)0x0;
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0x100) = uVar2;
  Sexy::Widget::SetVisible((Widget *)this,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GoldenEggOpenUI::~GoldenEggOpenUI() */

void __thiscall GoldenEggOpenUI::~GoldenEggOpenUI(GoldenEggOpenUI *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0697d858;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_0697d530;
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
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::vector<EggContent,std::allocator<EggContent>>::~vector
            ((vector<EggContent,std::allocator<EggContent>> *)(this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GoldenEggOpenUI::~GoldenEggOpenUI() */

void __thiscall GoldenEggOpenUI::~GoldenEggOpenUI(GoldenEggOpenUI *this)

{
  ~GoldenEggOpenUI(this);
  AK::FreeHook(this);
  return;
}


/* GoldenEggOpenUI::TouchEnded(Sexy::Touch const&) */

void GoldenEggOpenUI::TouchEnded(Touch *param_1)

{
  char cVar1;
  GoldenEggUI *this;
  LawnApp *this_00;
  
  if (param_1[0x6c] != (Touch)0x0) {
    if ((gLawnApp != (LawnApp *)0x0) &&
       (cVar1 = LawnApp::GoldenEggHasBonus(gLawnApp), this_00 = gLawnApp, cVar1 != '\0')) {
      cVar1 = LawnApp::IsGoldenEggOpenUIValid(gLawnApp);
      if (cVar1 != '\0') {
        this = (GoldenEggUI *)LawnApp::GetGoldenEggUI(this_00);
        GoldenEggUI::KillBonusUI(this);
        this_00 = gLawnApp;
      }
      cVar1 = LawnApp::IsAccessoryBonusUIValid(this_00);
      if (cVar1 != '\0') {
        LawnApp::GetAccessoryBonusUI(this_00);
        DailyAccessoryBonusUI::KillBonusUI();
        return;
      }
    }
  }
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x04bed044 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* GoldenEggOpenUI::DrawPrizePool(Sexy::Graphics*) */

void GoldenEggOpenUI::DrawPrizePool(Graphics *param_1)

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
  ulong uVar10;
  SeedPacketUtils *this;
  ResourceInfo *pRVar11;
  string *psVar12;
  PlantAccessoryMgr *pPVar13;
  Image *pIVar14;
  LotteryResultProgressBar *pLVar15;
  SalesProgressBar *pSVar16;
  Graphics *in_x1;
  undefined8 uVar17;
  ulong uVar18;
  float fVar19;
  undefined4 uVar20;
  undefined1 auVar21 [16];
  float in_s1;
  float fVar22;
  undefined1 *local_98;
  string *local_88;
  string *local_78;
  string *local_68;
  int local_60;
  int local_5c;
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  RtMixedPtrBase aRStack_38 [8];
  string asStack_30 [8];
  undefined1 auStack_28 [8];
  undefined4 local_20 [2];
  int local_18 [4];
  long local_8;
  
  uVar17 = *(undefined8 *)(param_1 + 0xe0);
  local_8 = ___stack_chk_guard;
  uVar18 = 0;
  lVar9 = FUN_04beaa0c(uVar17,*(undefined8 *)(param_1 + 0xe8));
  if (lVar9 != 0) {
    do {
      FUN_04beaa18(uVar17,uVar18);
      fVar19 = (float)GetDrawPosById((int)param_1);
      fVar22 = *(float *)(param_1 + 0x100);
      local_60 = (int)fVar19;
      local_5c = (int)in_s1;
      uVar20 = PVZ_T();
      local_18[0] = (int)fVar19;
      iVar3 = CurveLerp<int>(fVar22,fVar22 + 0.4,uVar20,&local_60,(string *)local_18,3);
      fVar19 = *(float *)(param_1 + 0x100);
      uVar20 = PVZ_T();
      local_18[0] = (int)in_s1;
      iVar4 = CurveLerp<int>(fVar19,fVar19 + 0.4,uVar20,&local_5c,(string *)local_18,3);
      in_s1 = *(float *)(param_1 + 0x100);
      auVar21 = PVZ_T();
      in_s1 = in_s1 + 0.4;
      local_20[0] = 0x3dcccccd;
      local_18[0] = 0x3f800000;
      fVar19 = CurveLerp<float>(auVar21,in_s1,auVar21._0_4_,(wstring *)local_20,(string *)local_18,3
                               );
      uVar17 = FUN_04beaa18(*(undefined8 *)(param_1 + 0xe0),uVar18);
      FUN_05475ffc((string *)local_18,uVar17,0,6);
      bVar1 = std::operator==((string *)local_18,"plant_");
      if (bVar1) {
        uVar17 = FUN_04beaa18(*(undefined8 *)(param_1 + 0xe0),uVar18);
        lVar9 = FUN_05474374(uVar17,"plant_piece_",0);
        if (lVar9 != -1) goto LAB_04bed07c;
        std::string::~string((string *)local_18);
        uVar17 = FUN_04beaa18(*(undefined8 *)(param_1 + 0xe0),uVar18);
        FUN_05475ffc(asStack_30,uVar17,6,0xffffffffffffffff);
        pLVar15 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8c2e0);
        iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
        iVar6 = (int)((float)iVar3 - fVar19 * 0.5 * (float)iVar5);
        pSVar16 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8c2e0);
        iVar5 = SalesProgressBar::GetCurrentLevel(pSVar16);
        iVar5 = (int)((float)iVar4 - fVar19 * 0.5 * (float)iVar5);
        this = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
        lVar9 = SeedPacketUtils::GetPlantPacketRenderData(this,asStack_30,-1,-1,-1);
        pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar9 + 0x170));
        Sexy::Insets::Insets
                  ((Insets *)local_18,iVar6 + *(int *)(lVar9 + 0x30),iVar5 + *(int *)(lVar9 + 0x34),
                   *(int *)(lVar9 + 0x28),*(int *)(lVar9 + 0x2c));
        Sexy::Graphics::DrawImage(in_x1,(Image *)pRVar11,(TRect *)local_18,(TRect *)(lVar9 + 0x20));
        pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar9 + 0x170));
        Sexy::Graphics::DrawImage
                  (in_x1,(Image *)pRVar11,iVar6 + *(int *)(lVar9 + 0x18),
                   iVar5 + *(int *)(lVar9 + 0x1c),(TRect *)(lVar9 + 8));
        psVar12 = (string *)FUN_04beaa18(*(undefined8 *)(param_1 + 0xe0),uVar18);
        getBoxRewardName((string *)param_1,psVar12);
        uVar17 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
        iVar5 = FUN_04beab84(100);
        pSVar16 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8c2e0);
        iVar6 = SalesProgressBar::GetCurrentLevel(pSVar16);
        iVar7 = FUN_04beab84(200);
        FUN_05477b24((wstring *)local_20,auStack_28);
        Sexy::Color::Color((Color *)local_18,1);
        in_s1 = (float)(iVar4 + iVar6 / 2);
        Sexy::PrimeTypeface::DrawString_Line
                  ((PrimeTypeface *)(float)(iVar3 - iVar5),in_s1,(float)iVar7,uVar17);
        FUN_05476c50((wstring *)local_20);
        FUN_05476c50(auStack_28);
        std::string::~string(asStack_30);
      }
      else {
LAB_04bed07c:
        std::string::~string((string *)local_18);
        uVar17 = FUN_04beaa18(*(undefined8 *)(param_1 + 0xe0),uVar18);
        lVar9 = FUN_05474374(uVar17,"plant_piece_",0);
        if (lVar9 == -1) {
          uVar17 = FUN_04beaa18(*(undefined8 *)(param_1 + 0xe0),uVar18);
          lVar9 = FUN_05474374(uVar17,"avatar_piece_",0);
          if (lVar9 == -1) {
            uVar17 = FUN_04beaa18(*(undefined8 *)(param_1 + 0xe0),uVar18);
            FUN_05475ffc((string *)local_18,uVar17,0,10);
            bVar1 = std::operator==((string *)local_18,"accessory_");
            if (bVar1) {
              uVar17 = FUN_04beaa18(*(undefined8 *)(param_1 + 0xe0),uVar18);
              lVar9 = FUN_05474374(uVar17,"accessory_piece_",0);
              if (lVar9 == -1) {
                std::string::~string((string *)local_18);
                uVar17 = FUN_04beaa18(*(undefined8 *)(param_1 + 0xe0),uVar18);
                FUN_05475ffc(asStack_30,uVar17,10,0xffffffffffffffff);
                psVar12 = (string *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
                pLVar15 = (LotteryResultProgressBar *)
                          PlantAccessoryMgr::GetAccessoryDisplayImage(psVar12);
                if (pLVar15 != (LotteryResultProgressBar *)0x0) {
                  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
                  iVar6 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar15);
                  iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
                  iVar8 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar15);
                  Sexy::Graphics::DrawImage
                            (in_x1,(Image *)pLVar15,iVar3 - iVar5 / 2,iVar4 - iVar6 / 2,
                             (int)((float)iVar7 * fVar19),(int)((float)iVar8 * fVar19));
                }
                pPVar13 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance()
                ;
                PlantAccessoryMgr::GetAccessoryDisplayName(pPVar13,asStack_30);
                uVar17 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18)
                ;
                iVar5 = FUN_04beab84(100);
                iVar6 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar15);
                in_s1 = (float)iVar4 + (float)iVar6 * fVar19 * 0.5;
                iVar4 = FUN_04beab84(200);
                FUN_05477b24((wstring *)local_20,auStack_28);
                Sexy::Color::Color((Color *)local_18,1);
                Sexy::PrimeTypeface::DrawString_Line
                          ((PrimeTypeface *)(float)(iVar3 - iVar5),in_s1,(float)iVar4,uVar17);
                FUN_05476c50((wstring *)local_20);
                FUN_05476c50(auStack_28);
                std::string::~string(asStack_30);
                goto LAB_04bed0f0;
              }
            }
            std::string::~string((string *)local_18);
            uVar17 = FUN_04beaa18(*(undefined8 *)(param_1 + 0xe0),uVar18);
            lVar9 = FUN_05474374(uVar17,"accessory_piece_",0);
            if (lVar9 == -1) goto LAB_04bed0f0;
            uVar17 = FUN_04beaa18(*(undefined8 *)(param_1 + 0xe0),uVar18);
            FUN_05475ffc(asStack_58,uVar17,0x10,0xffffffffffffffff);
            bVar1 = std::operator!=(asStack_58,"");
            if (bVar1) {
              FUN_05475d88(asStack_50,asStack_58);
              std::string::string(asStack_48,"_piece");
              nop();
              FUN_031dcc6c(asStack_40,asStack_50,asStack_48);
              psVar12 = (string *)
                        Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
              ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar12);
              cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_38);
              if (cVar2 != '\0') {
                lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
                pIVar14 = (Image *)StringHelper::ToImage((string *)(lVar9 + 0x60),false);
                if (pIVar14 != (Image *)0x0) {
                  pLVar15 = (LotteryResultProgressBar *)
                            CachedUIResourcePtr<Sexy::Image>::operator->
                                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8c360);
                  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
                  pSVar16 = (SalesProgressBar *)
                            CachedUIResourcePtr<Sexy::Image>::operator->
                                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8c360);
                  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar16);
                  pLVar15 = (LotteryResultProgressBar *)
                            CachedUIResourcePtr<Sexy::Image>::operator->
                                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8c360);
                  iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
                  pSVar16 = (SalesProgressBar *)
                            CachedUIResourcePtr<Sexy::Image>::operator->
                                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8c360);
                  iVar8 = SalesProgressBar::GetCurrentLevel(pSVar16);
                  Sexy::Graphics::DrawImage
                            (in_x1,pIVar14,iVar3 - iVar5 / 2,iVar4 - iVar6 / 2,
                             (int)((float)iVar7 * fVar19),(int)((float)iVar8 * fVar19));
                }
                lVar9 = FUN_04beaa18(*(undefined8 *)(param_1 + 0xe0),uVar18);
                Sexy::StrFormat(L"x%d",asStack_30,(ulong)*(uint *)(lVar9 + 8));
                uVar17 = PrimeText_PotentialTypeface::Typeface
                                   (PrimeText_Game::Typeface_CafeteriaBlack_20);
                iVar5 = FUN_04beab84(0x28);
                iVar6 = FUN_04beab84(0x1e);
                iVar7 = FUN_04beab84(0x14);
                FUN_05477b24((wstring *)local_20,asStack_30);
                Sexy::Color::Color((Color *)local_18,1);
                Sexy::PrimeTypeface::DrawString_Line
                          ((PrimeTypeface *)(float)(iVar5 + iVar3),(float)(iVar6 + iVar4),
                           (float)iVar7,uVar17);
                FUN_05476c50((wstring *)local_20);
                pPVar13 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance()
                ;
                PlantAccessoryMgr::GetAccessoryDisplayName(pPVar13,asStack_58);
                TodStringTranslate(L"[PIECE]");
                std::operator+((wstring *)local_20,(wstring *)local_18);
                FUN_05476c50((string *)local_18);
                FUN_05476c50((wstring *)local_20);
                goto LAB_04bedb0c;
              }
              goto LAB_04bed650;
            }
          }
          else {
            uVar17 = FUN_04beaa18(*(undefined8 *)(param_1 + 0xe0),uVar18);
            FUN_05475ffc(asStack_58,uVar17,0xd,0xffffffffffffffff);
            bVar1 = std::operator!=(asStack_58,"");
            if (bVar1) {
              std::string::string(asStack_50,"avatar_piece_");
              nop();
              FUN_05475d88(asStack_48,asStack_58);
              FUN_031dcc6c(asStack_40,asStack_50,asStack_48);
              psVar12 = (string *)
                        Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
              ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar12);
              cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_38);
              if (cVar2 != '\0') {
                lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
                pIVar14 = (Image *)StringHelper::ToImage((string *)(lVar9 + 0x60),false);
                if (pIVar14 != (Image *)0x0) {
                  pLVar15 = (LotteryResultProgressBar *)
                            CachedUIResourcePtr<Sexy::Image>::operator->
                                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8c360);
                  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
                  pSVar16 = (SalesProgressBar *)
                            CachedUIResourcePtr<Sexy::Image>::operator->
                                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8c360);
                  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar16);
                  pLVar15 = (LotteryResultProgressBar *)
                            CachedUIResourcePtr<Sexy::Image>::operator->
                                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8c360);
                  iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
                  pSVar16 = (SalesProgressBar *)
                            CachedUIResourcePtr<Sexy::Image>::operator->
                                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8c360);
                  iVar8 = SalesProgressBar::GetCurrentLevel(pSVar16);
                  Sexy::Graphics::DrawImage
                            (in_x1,pIVar14,iVar3 - iVar5 / 2,iVar4 - iVar6 / 2,
                             (int)((float)iVar7 * fVar19),(int)((float)iVar8 * fVar19));
                }
                lVar9 = FUN_04beaa18(*(undefined8 *)(param_1 + 0xe0),uVar18);
                Sexy::StrFormat(L"x%d",asStack_30,(ulong)*(uint *)(lVar9 + 8));
                uVar17 = PrimeText_PotentialTypeface::Typeface
                                   (PrimeText_Game::Typeface_CafeteriaBlack_20);
                iVar5 = FUN_04beab84(0x28);
                iVar6 = FUN_04beab84(0x1e);
                iVar7 = FUN_04beab84(0x14);
                FUN_05477b24((wstring *)local_20,asStack_30);
                Sexy::Color::Color((Color *)local_18,1);
                Sexy::PrimeTypeface::DrawString_Line
                          ((PrimeTypeface *)(float)(iVar5 + iVar3),(float)(iVar6 + iVar4),
                           (float)iVar7,uVar17);
                FUN_05476c50((wstring *)local_20);
                local_78 = (string *)FUN_04beaa18(*(undefined8 *)(param_1 + 0xe0),uVar18);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
                nop();
                goto LAB_04bedaf0;
              }
              goto LAB_04bed650;
            }
          }
        }
        else {
          uVar17 = FUN_04beaa18(*(undefined8 *)(param_1 + 0xe0),uVar18);
          FUN_05475ffc(asStack_58,uVar17,0xc,0xffffffffffffffff);
          bVar1 = std::operator!=(asStack_58,"");
          if (bVar1) {
            std::string::string(asStack_50,"plant_piece_");
            nop();
            FUN_05475d88(asStack_48,asStack_58);
            FUN_031dcc6c(asStack_40,asStack_50,asStack_48);
            psVar12 = (string *)
                      Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
            ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar12);
            cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_38);
            if (cVar2 != '\0') {
              lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
              pIVar14 = (Image *)StringHelper::ToImage((string *)(lVar9 + 0x60),false);
              if (pIVar14 != (Image *)0x0) {
                pLVar15 = (LotteryResultProgressBar *)
                          CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8c360);
                iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
                pSVar16 = (SalesProgressBar *)
                          CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8c360);
                iVar6 = SalesProgressBar::GetCurrentLevel(pSVar16);
                pLVar15 = (LotteryResultProgressBar *)
                          CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8c360);
                iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
                pSVar16 = (SalesProgressBar *)
                          CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8c360);
                iVar8 = SalesProgressBar::GetCurrentLevel(pSVar16);
                Sexy::Graphics::DrawImage
                          (in_x1,pIVar14,iVar3 - iVar5 / 2,iVar4 - iVar6 / 2,
                           (int)((float)iVar7 * fVar19),(int)((float)iVar8 * fVar19));
              }
              lVar9 = FUN_04beaa18(*(undefined8 *)(param_1 + 0xe0),uVar18);
              Sexy::StrFormat(L"x%d",asStack_30,(ulong)*(uint *)(lVar9 + 8));
              uVar17 = PrimeText_PotentialTypeface::Typeface
                                 (PrimeText_Game::Typeface_CafeteriaBlack_20);
              iVar5 = FUN_04beab84(0x28);
              iVar6 = FUN_04beab84(0x1e);
              iVar7 = FUN_04beab84(0x14);
              FUN_05477b24((wstring *)local_20,asStack_30);
              Sexy::Color::Color((Color *)local_18,1);
              Sexy::PrimeTypeface::DrawString_Line
                        ((PrimeTypeface *)(float)(iVar5 + iVar3),(float)(iVar6 + iVar4),(float)iVar7
                         ,uVar17);
              FUN_05476c50((wstring *)local_20);
              local_78 = (string *)FUN_04beaa18(*(undefined8 *)(param_1 + 0xe0),uVar18);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
              nop();
LAB_04bedaf0:
              getBoxRewardName((string *)param_1,local_78);
LAB_04bedb0c:
              local_88 = asStack_30;
              local_98 = auStack_28;
              uVar17 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
              iVar5 = FUN_04beab84(100);
              pSVar16 = (SalesProgressBar *)
                        CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8c360);
              iVar6 = SalesProgressBar::GetCurrentLevel(pSVar16);
              in_s1 = (float)iVar4 + (float)iVar6 * fVar19 * 0.5;
              iVar4 = FUN_04beab84(200);
              FUN_05477b24((wstring *)local_20,local_98);
              Sexy::Color::Color((Color *)local_18,1);
              Sexy::PrimeTypeface::DrawString_Line
                        ((PrimeTypeface *)(float)(iVar3 - iVar5),in_s1,(float)iVar4,uVar17,in_x1,
                         (wstring *)local_20,1,(string *)local_18,0);
              FUN_05476c50((wstring *)local_20);
              FUN_05476c50(local_98);
              FUN_05476c50(local_88);
            }
LAB_04bed650:
            local_68 = asStack_40;
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
            std::string::~string(local_68);
            std::string::~string(asStack_48);
            std::string::~string(asStack_50);
          }
        }
        std::string::~string(asStack_58);
      }
LAB_04bed0f0:
      uVar18 = uVar18 + 1;
      uVar17 = *(undefined8 *)(param_1 + 0xe0);
      uVar10 = FUN_04beaa0c(uVar17,*(undefined8 *)(param_1 + 0xe8));
    } while (uVar18 < uVar10);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GoldenEggOpenUI::AddBonus(std::string, int, int) */

void __thiscall
GoldenEggOpenUI::AddBonus
          (GoldenEggOpenUI *this,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  GridItemCardGameTowerGenerateData aGStack_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = FUN_04beaa0c(*(undefined8 *)(this + 0xe0),*(undefined8 *)(this + 0xe8));
  *(undefined4 *)(this + 0xfc) = uVar1;
  GridItemCardGameTowerGenerateData::GridItemCardGameTowerGenerateData(aGStack_18);
  thunk_FUN_05475e00(aGStack_18,param_2);
  local_10 = param_3;
  local_c = param_4;
  std::vector<EggContent,std::allocator<EggContent>>::push_back
            ((vector<EggContent,std::allocator<EggContent>> *)(this + 0xe0),(EggContent *)aGStack_18
            );
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aGStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GoldenEggOpenUI::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
GoldenEggOpenUI::DrawAll(GoldenEggOpenUI *this,ModalFlags *param_1,Graphics *param_2)

{
  if (this[0x6c] == (GoldenEggOpenUI)0x0) {
    return;
  }
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GoldenEggOpenUI::Draw(Sexy::Graphics*) */

void __thiscall GoldenEggOpenUI::Draw(GoldenEggOpenUI *this,Graphics *param_1)

{
  LawnApp *this_00;
  char cVar1;
  GraphicsAutoState aGStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x6c] != (GoldenEggOpenUI)0x0) {
    LawnApp::DrawDarkeningLayer(gLawnApp,param_1,0.5);
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
    Sexy::Point::Point((Point *)&local_18,0,0);
    this_00 = gLawnApp;
    if ((gLawnApp != (LawnApp *)0x0) &&
       (cVar1 = LawnApp::IsGoldenEggOpenUIValid(gLawnApp), cVar1 != '\0')) {
      LawnApp::GetGoldenEggUI(this_00);
      GoldenEggUI::GetDrawOffsetPoint();
      local_18 = local_10;
    }
    Sexy::Graphics::Translate(param_1,(int)local_18,local_18._4_4_);
    nop();
    DrawPrizePool((Graphics *)this);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GoldenEggOpenUI::Update() */

void __thiscall GoldenEggOpenUI::Update(GoldenEggOpenUI *this)

{
  undefined4 uVar1;
  
  if (this[0x6c] == (GoldenEggOpenUI)0x0) {
    return;
  }
  if (this[0xf8] != (GoldenEggOpenUI)0x0) {
    UIFutureGiftShop::Update((UIFutureGiftShop *)this);
    return;
  }
  this[0xf8] = (GoldenEggOpenUI)0x1;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x100) = uVar1;
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  return;
}

