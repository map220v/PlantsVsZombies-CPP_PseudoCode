// Class: PlantOfferOpenUI


/* PlantOfferOpenUI::TouchEnded(Sexy::Touch const&) */

void PlantOfferOpenUI::TouchEnded(Touch *param_1)

{
  LawnApp::KillPlantOfferOpenUI(gLawnApp);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantOfferOpenUI::GetDrawPosById(int) */

void __thiscall PlantOfferOpenUI::GetDrawPosById(PlantOfferOpenUI *this,int param_1)

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
    iVar3 = FUN_041c5e24(100);
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
      iVar3 = FUN_041c5e24(100);
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
      iVar4 = FUN_041c5e24(100);
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


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x041c68bc */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* PlantOfferOpenUI::DrawPrizePool(Sexy::Graphics*) */

void PlantOfferOpenUI::DrawPrizePool(Graphics *param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  uint *puVar11;
  NameMapperBase *pNVar12;
  LotteryResultProgressBar *pLVar13;
  SalesProgressBar *pSVar14;
  Image *pIVar15;
  undefined8 uVar16;
  ulong uVar17;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  int extraout_w1_02;
  Graphics *in_x1;
  long *plVar18;
  StandaloneEffect *pSVar19;
  string *extraout_x1;
  NetworkHelper *this;
  ulong uVar20;
  float fVar21;
  undefined4 uVar22;
  undefined1 auVar23 [16];
  float fVar24;
  ulong in_d1;
  float fVar25;
  int local_58;
  int local_54;
  Sexy aSStack_50 [8];
  RtMixedPtrBase aRStack_48 [8];
  wstring awStack_40 [8];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_58 = *(int *)(param_1 + 0x50) / 2;
  local_54 = FUN_041c5e24(0x32);
  uVar20 = 0;
  local_54 = local_54 + *(int *)(param_1 + 0x54) / 2;
  lVar10 = FUN_041c5d38(*(undefined8 *)(param_1 + 0x128),*(undefined8 *)(param_1 + 0x130));
  if (lVar10 != 0) {
    do {
      fVar24 = (float)in_d1;
      fVar21 = (float)(**(code **)(*(long *)param_1 + 800))(param_1,uVar20 & 0xffffffff);
      fVar25 = *(float *)(param_1 + 0xe4);
      uVar22 = PVZ_T();
      local_18[0] = (int)fVar21;
      iVar4 = CurveLerp<int>(fVar25,fVar25 + 0.4,uVar22,&local_58,(FastCurve *)local_18,3);
      fVar21 = *(float *)(param_1 + 0xe4);
      uVar22 = PVZ_T();
      local_18[0] = (int)fVar24;
      iVar5 = CurveLerp<int>(fVar21,fVar21 + 0.4,uVar22,&local_54,(FastCurve *)local_18,3);
      fVar21 = *(float *)(param_1 + 0xe4);
      auVar23 = PVZ_T();
      in_d1 = (ulong)(uint)(fVar21 + 0.4);
      local_28 = 0x3dcccccd;
      local_18[0] = 0x3f800000;
      fVar21 = CurveLerp<float>(auVar23,in_d1,auVar23._0_4_,(string *)&local_28,
                                (FastCurve *)local_18,3);
      puVar11 = (uint *)FUN_041c5d44(*(undefined8 *)(param_1 + 0x128),uVar20);
      uVar1 = *puVar11;
      this = (NetworkHelper *)(ulong)uVar1;
      uVar2 = puVar11[1];
      pNVar12 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
      cVar3 = NameMapperBase::ContainsId(pNVar12,uVar1);
      if (cVar3 == '\0') {
        pNVar12 = (NameMapperBase *)AvatarNameMapperServerID::GetInstance();
        cVar3 = NameMapperBase::ContainsId(pNVar12,uVar1);
        if (cVar3 != '\0') {
          iVar6 = AvatarNameMapperServerID::GetInstance();
          NameMapperBase::GetNameForId(iVar6);
          pLVar13 = (LotteryResultProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1760);
          iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
          pSVar14 = (SalesProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1760);
          iVar7 = SalesProgressBar::GetCurrentLevel(pSVar14);
          plVar18 = *(long **)(param_1 + 0x120);
          if (plVar18 != (long *)0x0) {
            (**(code **)(*plVar18 + 0x80))(fVar21,plVar18);
            pSVar19 = *(StandaloneEffect **)(param_1 + 0x120);
            Sexy::FastCurve::SetOutRange((FastCurve *)local_18,(float)iVar4,(float)iVar5);
            StandaloneEffect::SetScreenSpaceOrigin(pSVar19,(SexyVector2 *)local_18,900000);
            StandaloneEffect::Draw(*(StandaloneEffect **)(param_1 + 0x120),in_x1);
          }
          pLVar13 = (LotteryResultProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1760);
          iVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
          pSVar14 = (SalesProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1760);
          iVar9 = SalesProgressBar::GetCurrentLevel(pSVar14);
          Sexy::Insets::Insets
                    ((Insets *)&local_38,(int)((float)iVar4 - fVar21 * 0.5 * (float)iVar6),
                     (int)((float)iVar5 - fVar21 * 0.5 * (float)iVar7),iVar8,iVar9);
          pIVar15 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1760);
          Sexy::Graphics::DrawImage(in_x1,pIVar15,local_38,local_34,local_30,local_2c);
          pLVar13 = (LotteryResultProgressBar *)
                    LawnApp::GetUpdateActivityImage(gLawnApp,0,aSStack_50);
          iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
          iVar7 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar13);
          Sexy::Insets::Insets
                    ((Insets *)&local_28,local_38 + (local_30 - (int)((float)iVar6 * 0.82)) / 2,
                     local_34 + (local_2c - (int)((float)iVar7 * 0.82)) / 2,
                     (int)((float)iVar6 * 0.82),(int)((float)iVar7 * 0.82));
          Sexy::Graphics::DrawImage(in_x1,(Image *)pLVar13,local_28,local_24,local_20,local_1c);
          NetworkHelper::getObjectNameByActId(this,extraout_w1_00);
          uVar16 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
          iVar8 = FUN_041c5e24(0x62);
          pSVar14 = (SalesProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af18c8);
          iVar6 = SalesProgressBar::GetCurrentLevel(pSVar14);
          iVar9 = FUN_041c5e24(0x37);
          iVar7 = FUN_041c5e24(200);
          goto LAB_041c6b5c;
        }
        OtherServerNameMapper::GetInstance();
        cVar3 = FUN_041c5cec(this);
        if (cVar3 == '\0') {
          OtherServerNameMapper::GetInstance();
          cVar3 = FUN_041c5cdc(this);
          if (cVar3 != '\0') {
            std::string::string((string *)local_18,"IMAGE_UI_AWARDDIALOG_GOLD");
            GetImageByName((string *)local_18);
            std::string::~string((string *)local_18);
            nop();
            cVar3 = Sexy::RtMixedPtrBase::IsValid(aRStack_48);
            if (cVar3 != '\0') {
              pIVar15 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
              pLVar13 = (LotteryResultProgressBar *)
                        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
              iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
              pSVar14 = (SalesProgressBar *)
                        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
              iVar7 = SalesProgressBar::GetCurrentLevel(pSVar14);
              pLVar13 = (LotteryResultProgressBar *)
                        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
              iVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
              pSVar14 = (SalesProgressBar *)
                        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
              iVar9 = SalesProgressBar::GetCurrentLevel(pSVar14);
              Sexy::Graphics::DrawImage
                        (in_x1,pIVar15,iVar4 - iVar6 / 2,iVar5 - iVar7 / 2,
                         (int)((float)iVar8 * fVar21),(int)((float)iVar9 * fVar21));
              Sexy::StrFormat(L"x%d",awStack_40,(ulong)uVar2);
              NetworkHelper::getObjectNameByActId(this,extraout_w1_01);
              std::operator+((wstring *)local_18,awStack_40);
              FUN_05476c50((FastCurve *)local_18);
              uVar16 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
              iVar6 = FUN_041c5e24(100);
              pSVar14 = (SalesProgressBar *)
                        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
              iVar7 = SalesProgressBar::GetCurrentLevel(pSVar14);
              in_d1 = (ulong)(uint)((float)iVar5 + (float)iVar7 * fVar21 * 0.5);
              iVar5 = FUN_041c5e24(200);
              FUN_05477b24((string *)&local_28,&local_38);
              Sexy::Color::Color((Color *)local_18,1);
              Sexy::PrimeTypeface::DrawString_Line
                        ((PrimeTypeface *)(float)(iVar4 - iVar6),in_d1,(float)iVar5,uVar16);
              FUN_05476c50((string *)&local_28);
              FUN_05476c50(&local_38);
              FUN_05476c50(awStack_40);
            }
            goto LAB_041c6ed4;
          }
        }
        else {
          std::string::string((string *)local_18,"IMAGE_UI_AWARDDIALOG_GEM");
          GetImageByName((string *)local_18);
          std::string::~string((string *)local_18);
          nop();
          cVar3 = Sexy::RtMixedPtrBase::IsValid(aRStack_48);
          if (cVar3 != '\0') {
            pIVar15 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                         ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
            pLVar13 = (LotteryResultProgressBar *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
            iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
            pSVar14 = (SalesProgressBar *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
            iVar7 = SalesProgressBar::GetCurrentLevel(pSVar14);
            pLVar13 = (LotteryResultProgressBar *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
            iVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
            pSVar14 = (SalesProgressBar *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
            iVar9 = SalesProgressBar::GetCurrentLevel(pSVar14);
            Sexy::Graphics::DrawImage
                      (in_x1,pIVar15,iVar4 - iVar6 / 2,iVar5 - iVar7 / 2,
                       (int)((float)iVar8 * fVar21),(int)((float)iVar9 * fVar21));
            Sexy::StrFormat(L"x%d",awStack_40,(ulong)uVar2);
            NetworkHelper::getObjectNameByActId(this,extraout_w1_02);
            std::operator+((wstring *)local_18,awStack_40);
            FUN_05476c50((FastCurve *)local_18);
            uVar16 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
            iVar6 = FUN_041c5e24(100);
            pSVar14 = (SalesProgressBar *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
            iVar7 = SalesProgressBar::GetCurrentLevel(pSVar14);
            in_d1 = (ulong)(uint)((float)iVar5 + (float)iVar7 * fVar21 * 0.5);
            iVar5 = FUN_041c5e24(200);
            FUN_05477b24((string *)&local_28,&local_38);
            Sexy::Color::Color((Color *)local_18,1);
            Sexy::PrimeTypeface::DrawString_Line
                      ((PrimeTypeface *)(float)(iVar4 - iVar6),in_d1,(float)iVar5,uVar16);
            FUN_05476c50((string *)&local_28);
            FUN_05476c50(&local_38);
            FUN_05476c50(awStack_40);
          }
LAB_041c6ed4:
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
        }
      }
      else {
        iVar6 = PlantNameMapperServerID::GetInstance();
        NameMapperBase::GetNameForId(iVar6);
        pLVar13 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1790);
        iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
        pSVar14 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1790);
        iVar7 = SalesProgressBar::GetCurrentLevel(pSVar14);
        plVar18 = *(long **)(param_1 + 0x120);
        if (plVar18 != (long *)0x0) {
          (**(code **)(*plVar18 + 0x80))(fVar21,plVar18);
          pSVar19 = *(StandaloneEffect **)(param_1 + 0x120);
          Sexy::FastCurve::SetOutRange((FastCurve *)local_18,(float)iVar4,(float)iVar5);
          StandaloneEffect::SetScreenSpaceOrigin(pSVar19,(SexyVector2 *)local_18,900000);
          StandaloneEffect::Draw(*(StandaloneEffect **)(param_1 + 0x120),in_x1);
        }
        pLVar13 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1790);
        iVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
        pSVar14 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1790);
        iVar9 = SalesProgressBar::GetCurrentLevel(pSVar14);
        Sexy::Insets::Insets
                  ((Insets *)&local_38,(int)((float)iVar4 - fVar21 * 0.5 * (float)iVar6),
                   (int)((float)iVar5 - fVar21 * 0.5 * (float)iVar7),iVar8,iVar9);
        pIVar15 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1790);
        Sexy::Graphics::DrawImage(in_x1,pIVar15,local_38,local_34,local_30,local_2c);
        Sexy::StringToUpper(aSStack_50,extraout_x1);
        std::operator+((string *)&PlantHeadshot::PlantBigPrefix,(string *)&local_28);
        pLVar13 = (LotteryResultProgressBar *)StringHelper::ToImage((string *)local_18,true);
        std::string::~string((string *)local_18);
        std::string::~string((string *)&local_28);
        iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
        iVar7 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar13);
        Sexy::Insets::Insets
                  ((Insets *)&local_28,local_38 + (local_30 - (int)((float)iVar6 * 0.82)) / 2,
                   local_34 + (local_2c - (int)((float)iVar7 * 0.82)) / 2,(int)((float)iVar6 * 0.82)
                   ,(int)((float)iVar7 * 0.82));
        Sexy::Graphics::DrawImage(in_x1,(Image *)pLVar13,local_28,local_24,local_20,local_1c);
        NetworkHelper::getObjectNameByActId(this,extraout_w1);
        uVar16 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
        iVar8 = FUN_041c5e24(0x62);
        pSVar14 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af18c8);
        iVar6 = SalesProgressBar::GetCurrentLevel(pSVar14);
        iVar9 = FUN_041c5e24(0x37);
        iVar7 = FUN_041c5e24(200);
LAB_041c6b5c:
        FUN_05477b24(awStack_40,aRStack_48);
        Sexy::Color::Color((Color *)local_18,1);
        in_d1 = (ulong)(uint)(float)(iVar5 + iVar6 / 2 + iVar9);
        Sexy::PrimeTypeface::DrawString_Line
                  ((PrimeTypeface *)(float)(iVar4 - iVar8),in_d1,(float)iVar7,uVar16);
        FUN_05476c50(awStack_40);
        FUN_05476c50(aRStack_48);
        std::string::~string((string *)aSStack_50);
      }
      uVar20 = uVar20 + 1;
      uVar17 = FUN_041c5d38(*(undefined8 *)(param_1 + 0x128),*(undefined8 *)(param_1 + 0x130));
    } while (uVar20 < uVar17);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantOfferOpenUI::PlantOfferOpenUI() */

void __thiscall PlantOfferOpenUI::PlantOfferOpenUI(PlantOfferOpenUI *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ServerBoxOpenUI::ServerBoxOpenUI((ServerBoxOpenUI *)this);
  *(undefined ***)this = &PTR_GetClass_068013b0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_068016f0;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_BigPlant");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_BigAvatar");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UPDATE_UI_HeadShot_BigAvatar");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantOfferOpenUI::~PlantOfferOpenUI() */

void __thiscall PlantOfferOpenUI::~PlantOfferOpenUI(PlantOfferOpenUI *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_068016f0;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_068013b0;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_BigPlant");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_BigAvatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UPDATE_UI_HeadShot_BigAvatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  ServerBoxOpenUI::~ServerBoxOpenUI((ServerBoxOpenUI *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantOfferOpenUI::~PlantOfferOpenUI() */

void __thiscall PlantOfferOpenUI::~PlantOfferOpenUI(PlantOfferOpenUI *this)

{
  ~PlantOfferOpenUI(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantOfferOpenUI::Draw(Sexy::Graphics*) */

void __thiscall PlantOfferOpenUI::Draw(PlantOfferOpenUI *this,Graphics *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ServerBoxOpenUI::Draw((ServerBoxOpenUI *)this,param_1);
  pcVar3 = *(code **)(*(long *)this + 0x290);
  uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline);
  Sexy::Color::Color(aCStack_18,1);
  uVar1 = FUN_041c5e24(0x14a);
  TodStringTranslate(L"[PLANT_OFFER_OPEN_TEXT]");
  (*pcVar3)(this,param_1,uVar2,aCStack_18,uVar1,auStack_20);
  FUN_05476c50(auStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

