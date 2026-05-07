// Class: StarLevelWorldMapEvent


/* StarLevelWorldMapEvent::~StarLevelWorldMapEvent() */

void __thiscall StarLevelWorldMapEvent::~StarLevelWorldMapEvent(StarLevelWorldMapEvent *this)

{
  *(undefined ***)this = &PTR__StarLevelWorldMapEvent_068515b0;
  *(undefined ***)(this + 8) = &PTR_ButtonPress_06851620;
  WorldMapEventAlert::~WorldMapEventAlert((WorldMapEventAlert *)this);
  return;
}


/* StarLevelWorldMapEvent::~StarLevelWorldMapEvent() */

void __thiscall StarLevelWorldMapEvent::~StarLevelWorldMapEvent(StarLevelWorldMapEvent *this)

{
  ~StarLevelWorldMapEvent(this);
  AK::FreeHook(this);
  return;
}


/* StarLevelWorldMapEvent::StarLevelWorldMapEvent() */

void __thiscall StarLevelWorldMapEvent::StarLevelWorldMapEvent(StarLevelWorldMapEvent *this)

{
  WorldMapEventAlert::WorldMapEventAlert((WorldMapEventAlert *)this);
  *(undefined4 *)(this + 0x2b4) = 0xffffffff;
  *(undefined ***)this = &PTR__StarLevelWorldMapEvent_068515b0;
  *(undefined ***)(this + 8) = &PTR_ButtonPress_06851620;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarLevelWorldMapEvent::DrawFromMap(Sexy::Graphics*, WorldMapCamera*, int) */

void __thiscall
StarLevelWorldMapEvent::DrawFromMap
          (StarLevelWorldMapEvent *this,Graphics *param_1,WorldMapCamera *param_2,int param_3)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  if (this[0x50] != (StarLevelWorldMapEvent)0x0) {
    *(int *)(this + 0x2b4) = param_3;
    if ((*(int *)(this + 0x280) == 0) && (*(int *)(this + 0x28c) == 1)) {
      if (param_2 != (WorldMapCamera *)0x0) {
        WorldMapEventAlert::GetAnchorLocation();
        EA::Text::GlyphCache_Memory::EndUpdate(gLawnApp);
      }
    }
    else {
      (**(code **)(*(long *)this + 0x10))(this);
    }
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarLevelWorldMapEvent::drawYetiLevelDialog(Sexy::Graphics*) */

void __thiscall
StarLevelWorldMapEvent::drawYetiLevelDialog(StarLevelWorldMapEvent *this,Graphics *param_1)

{
  StarLevelWorldMapEvent SVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  LotteryResultProgressBar *pLVar13;
  ResourceInfo *pRVar14;
  undefined8 uVar15;
  Image *pIVar16;
  SalesProgressBar *pSVar17;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  wchar_t *pwVar18;
  long lVar19;
  PrimeTypeface *pPVar22;
  float fVar20;
  float fVar21;
  int local_50;
  int local_4c;
  undefined1 auStack_48 [4];
  int local_44;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EA::Text::GlyphCache_Memory::EndUpdate(gLawnApp);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_40);
  cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)a_Stack_40);
  if (cVar2 != '\0') {
    std::string::string((string *)&local_28,"IMAGE_UI_HUD_WORLDMAP_YATI_HEAD");
    GetImageByName((string *)&local_28);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_40,(RtWeakPtr *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    std::string::~string((string *)&local_28);
    nop();
  }
  iVar3 = FUN_04497bf0(0x28);
  iVar11 = *(int *)(this + 0x24);
  pLVar13 = (LotteryResultProgressBar *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_40);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
  iVar10 = *(int *)(this + 0x28);
  iVar5 = FUN_04497bf0(0xc);
  iVar6 = FUN_04497bf0(0xf);
  iVar9 = *(int *)(this + 0x2c);
  iVar7 = FUN_04497bf0(0x28);
  iVar8 = FUN_04497bf0(0x18);
  Sexy::Insets::Insets
            ((Insets *)&local_28,iVar3 + iVar11 + iVar4,iVar10 + iVar5,(iVar9 - iVar6) - iVar7,
             (*(int *)(*(long *)(this + 0x10) + 0x4c) - iVar8) - iVar10);
  iVar11 = local_28._4_4_;
  pRVar14 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)a_Stack_40);
  iVar9 = FUN_04497bf0(0x28);
  iVar10 = *(int *)(this + 0x24);
  iVar3 = FUN_04497bf0(0xc);
  Sexy::Graphics::DrawImage(param_1,(Image *)pRVar14,iVar9 + iVar10,iVar3 + *(int *)(this + 0x28));
  uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  pPVar22._0_4_ = (PrimeTypeface *)(float)(int)local_28;
  fVar20 = (float)(int)local_20;
  fVar21 = (float)Sexy::PrimeTypeface::ParagraphHeightUnlimited;
  FUN_05477b24(auStack_30,this + 0x90);
  Sexy::Insets::Insets((Insets *)&local_18,(Insets *)&PrimeText_Game::Color_Popover_Header);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar22._0_4_,(float)iVar11,fVar20,fVar21,uVar15,param_1,auStack_30,0,0,
             (Insets *)&local_18,0);
  FUN_05476c50(auStack_30);
  uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  FUN_05477b24((Insets *)&local_18,this + 0x90);
  Sexy::PrimeTypeface::SizeString_Paragraph
            ((float)(int)local_20,uVar15,(Insets *)&local_18,&local_50,&local_4c);
  FUN_05476c50((Insets *)&local_18);
  iVar10 = FUN_04497bf0(0);
  iVar11 = iVar11 + iVar10 + local_4c;
  uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_28);
  fVar21 = (float)Sexy::PrimeTypeface::ParagraphHeightUnlimited;
  fVar20 = (float)(int)local_20;
  FUN_05477b24(auStack_30,this + 0x70);
  Sexy::Insets::Insets((Insets *)&local_18,(Insets *)&PrimeText_Game::Color_Popover_Header);
  Sexy::PrimeTypeface::DrawString_Paragraph
            ((PrimeTypeface *)(float)(int)local_28,(float)iVar11,fVar20,fVar21,uVar15,param_1,
             auStack_30,0,0,(Insets *)&local_18,0);
  FUN_05476c50(auStack_30);
  uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_28);
  FUN_05477b24((Insets *)&local_18,this + 0x70);
  Sexy::PrimeTypeface::SizeString_Paragraph
            ((float)(int)local_20,uVar15,(Insets *)&local_18,&local_50,&local_4c);
  FUN_05476c50((Insets *)&local_18);
  iVar10 = FUN_04497bf0(0);
  iVar11 = iVar11 + iVar10 + local_4c;
  iVar4 = FUN_04497bf0(0xf);
  iVar10 = *(int *)(this + 0x24);
  iVar9 = *(int *)(this + 0x28);
  iVar5 = FUN_04497bf0(0xc);
  iVar3 = *(int *)(this + 0x2c);
  iVar6 = FUN_04497bf0(0x18);
  Sexy::Insets::Insets
            ((Insets *)&local_18,iVar4 + iVar10,iVar9 + iVar5,iVar3 + iVar4 * -2,
             (*(int *)(*(long *)(this + 0x10) + 0x4c) - iVar6) - iVar9);
  local_28 = local_18;
  local_20 = uStack_10;
  pIVar16 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0bb40);
  uVar15 = local_28;
  iVar9 = FUN_04497bf0(0);
  iVar10 = (int)local_20 + iVar9 * 2;
  pSVar17 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0bb40);
  iVar3 = SalesProgressBar::GetCurrentLevel(pSVar17);
  Sexy::Graphics::DrawImage(param_1,pIVar16,(int)uVar15 - iVar9,iVar11,iVar10,iVar3);
  pSVar17 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0bb40);
  iVar9 = SalesProgressBar::GetCurrentLevel(pSVar17);
  iVar3 = FUN_04497bf0(10);
  iVar10 = FUN_04497bf0(5);
  iVar10 = iVar11 + iVar9 + iVar3 + iVar10;
  uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  pPVar22._0_4_ = (PrimeTypeface *)(float)(int)local_28;
  fVar21 = (float)Sexy::PrimeTypeface::ParagraphHeightUnlimited;
  fVar20 = (float)(int)local_20;
  FUN_05477b24(auStack_30,this + 0x98);
  Sexy::Insets::Insets((Insets *)&local_18,(Insets *)&PrimeText_Game::Color_Popover_Desc);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar22._0_4_,(float)iVar10,fVar20,fVar21,uVar15,param_1,auStack_30,1,0,
             (Insets *)&local_18,0);
  FUN_05476c50(auStack_30);
  uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  FUN_05477b24((Insets *)&local_18,this + 0x98);
  Sexy::PrimeTypeface::SizeString_Paragraph
            ((float)(int)local_20,uVar15,(Insets *)&local_18,auStack_48,&local_44);
  FUN_05476c50((Insets *)&local_18);
  iVar10 = iVar10 + local_44;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  PlayerInfo::DoOnlineRefreshEventTime(this_01);
  iVar11 = PlayerInfo::GetPlayYetiLevelCount(this_01);
  if ((iVar11 < 1) && (cVar2 = PlayerInfo::IsYetiTutorialPlayed(this_01), cVar2 != '\0')) {
    lVar19 = LawnApp::GetRealBeijingTime((LawnApp *)gLawnApp);
    if (lVar19 < 1) {
      (**(code **)(**(long **)(this + 0x10) + 0x158))(*(long **)(this + 0x10),0);
      pwVar18 = L"[WORLDMAP_YETI_EVENT_NEED_REFRESH]";
    }
    else {
      (**(code **)(**(long **)(this + 0x10) + 0x158))(*(long **)(this + 0x10),0);
      pwVar18 = L"[WORLDMAP_YETI_EVENT_NONE]";
    }
    TodStringTranslate(pwVar18);
    uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
    pPVar22._0_4_ = (PrimeTypeface *)(float)(int)local_28;
    fVar20 = (float)(int)local_20;
    fVar21 = (float)Sexy::PrimeTypeface::ParagraphHeightUnlimited;
    FUN_05477b24(auStack_30,auStack_38);
    Sexy::Color::Color((Color *)&local_18,0xfd,0,0);
    Sexy::PrimeTypeface::DrawString_Paragraph
              (pPVar22._0_4_,(float)iVar10,fVar20,fVar21,uVar15,param_1,auStack_30,1,0,
               (Insets *)&local_18,0);
    FUN_05476c50(auStack_30);
    uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
    FUN_05477b24((Insets *)&local_18,auStack_38);
    Sexy::PrimeTypeface::SizeString_Paragraph
              ((float)(int)local_20,uVar15,(Insets *)&local_18,auStack_48,&local_44);
    FUN_05476c50((Insets *)&local_18);
    FUN_05476c50(auStack_38);
  }
  else {
    (**(code **)(**(long **)(this + 0x10) + 0x158))(*(long **)(this + 0x10),1);
  }
  iVar11 = FUN_04497bf0(0x14);
  iVar9 = *(int *)(this + 0x24);
  iVar10 = iVar10 + iVar11;
  iVar11 = (int)local_20 / 2;
  iVar3 = FUN_04497bf0(0xa0);
  lVar19 = *(long *)(this + 0x10);
  iVar11 = (iVar9 + iVar11) - iVar3 / 2;
  *(int *)(lVar19 + 0x4c) = iVar10;
  *(int *)(lVar19 + 0x48) = iVar11;
  uVar12 = FUN_04497bf0(0xa0);
  *(undefined4 *)(lVar19 + 0x50) = uVar12;
  if (*(char *)(lVar19 + 0x6c) != '\0') {
    if (this[0x1e4] == (StarLevelWorldMapEvent)0x0) {
      iVar9 = FUN_04497bf0(0xa0);
      Sexy::Insets::Insets((Insets *)&local_18,iVar11,iVar10,iVar9,*(int *)(lVar19 + 0x54));
      uVar15 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0ba38);
      Draw3SliceImage(param_1,(Insets *)&local_18,uVar15);
      SVar1 = this[0x284];
    }
    else {
      iVar9 = FUN_04497bf0(0xa0);
      Sexy::Insets::Insets((Insets *)&local_18,iVar11,iVar10,iVar9,*(int *)(lVar19 + 0x54));
      uVar15 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0b9b0);
      Draw3SliceImage(param_1,(Insets *)&local_18,uVar15);
      SVar1 = this[0x284];
    }
    if (SVar1 == (StarLevelWorldMapEvent)0x0) {
      uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
      FUN_05477b24((Insets *)&local_18,*(long *)(this + 0x10) + 0xd8);
      iVar9 = FUN_04497bf0(0xa0);
      Sexy::PrimeTypeface::SizeString_Paragraph
                ((float)iVar9,uVar15,(Insets *)&local_18,&local_50,&local_4c);
      FUN_05476c50((Insets *)&local_18);
      uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
      lVar19 = *(long *)(this + 0x10);
      iVar9 = *(int *)(lVar19 + 0x54);
      iVar3 = FUN_04497bf0(0xa0);
      fVar20 = (float)Sexy::PrimeTypeface::ParagraphHeightUnlimited;
      FUN_05477b24(auStack_30,lVar19 + 0xd8);
      Sexy::Insets::Insets((Insets *)&local_18,(Insets *)&PrimeText_Game::Color_Popover_Btn_Label);
      Sexy::PrimeTypeface::DrawString_Paragraph
                ((PrimeTypeface *)(float)iVar11,(float)((iVar10 + iVar9 / 2) - local_4c / 2),
                 (float)iVar3,fVar20,uVar15,param_1,auStack_30,1,0,(Insets *)&local_18,0);
      FUN_05476c50(auStack_30);
    }
    else {
      pIVar16 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0bb18);
      iVar9 = FUN_04497bf0(0xf);
      iVar3 = FUN_04497bf0(5);
      Sexy::Graphics::DrawImage(param_1,pIVar16,iVar9 + iVar11,iVar10 + iVar3);
      pLVar13 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0bb18);
      iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
      iVar9 = FUN_04497bf0(0xf);
      iVar9 = iVar3 + iVar11 + iVar9;
      Sexy::StrFormat(L"%d",auStack_38,(ulong)*(uint *)(this + 0x288));
      uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_22);
      FUN_05477b24((Insets *)&local_18,auStack_38);
      iVar11 = FUN_04497bf0(0xa0);
      Sexy::PrimeTypeface::SizeString_Paragraph
                ((float)iVar11,uVar15,(Insets *)&local_18,&local_50,&local_4c);
      FUN_05476c50((Insets *)&local_18);
      uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_22);
      iVar3 = *(int *)(*(long *)(this + 0x10) + 0x54);
      iVar11 = local_4c / 2;
      iVar4 = FUN_04497bf0(0xa0);
      fVar20 = (float)Sexy::PrimeTypeface::ParagraphHeightUnlimited;
      FUN_05477b24(auStack_30,auStack_38);
      Sexy::Insets::Insets((Insets *)&local_18,(Insets *)&PrimeText_Game::Color_Popover_Btn_Label);
      Sexy::PrimeTypeface::DrawString_Paragraph
                ((PrimeTypeface *)(float)iVar9,(float)((iVar10 + iVar3 / 2) - iVar11),(float)iVar4,
                 fVar20,uVar15,param_1,auStack_30,0,0,(Insets *)&local_18,0);
      FUN_05476c50(auStack_30);
      iVar3 = FUN_04497bf0(2);
      uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
      FUN_05477b24((Insets *)&local_18,*(long *)(this + 0x10) + 0xd8);
      iVar11 = FUN_04497bf0(0xa0);
      Sexy::PrimeTypeface::SizeString_Paragraph
                ((float)iVar11,uVar15,(Insets *)&local_18,&local_50,&local_4c);
      FUN_05476c50((Insets *)&local_18);
      uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
      lVar19 = *(long *)(this + 0x10);
      iVar11 = *(int *)(lVar19 + 0x54);
      iVar4 = FUN_04497bf0(0xa0);
      fVar20 = (float)Sexy::PrimeTypeface::ParagraphHeightUnlimited;
      FUN_05477b24(auStack_30,lVar19 + 0xd8);
      Sexy::Insets::Insets((Insets *)&local_18,(Insets *)&PrimeText_Game::Color_Popover_Btn_Label);
      Sexy::PrimeTypeface::DrawString_Paragraph
                ((PrimeTypeface *)(float)(iVar9 + iVar3 + local_50),
                 (float)((iVar10 + iVar11 / 2) - local_4c / 2),(float)iVar4,fVar20,uVar15,param_1,
                 auStack_30,0,0,(Insets *)&local_18,0);
      FUN_05476c50(auStack_30);
      FUN_05476c50(auStack_38);
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarLevelWorldMapEvent::OnMouseUp(int, int) */

void StarLevelWorldMapEvent::OnMouseUp(int param_1,int param_2)

{
  char cVar1;
  long *plVar2;
  string *psVar3;
  long *plVar4;
  
  plVar2 = (long *)(ulong)(uint)param_1;
  plVar4 = (long *)plVar2[2];
  if ((*(char *)((long)plVar4 + 0x6c) != '\0') &&
     (cVar1 = (**(code **)(*plVar4 + 0x300))(plVar4,param_2), cVar1 != '\0')) {
    cVar1 = FUN_0547419c(plVar2 + 0x1d);
    if (cVar1 != '\0') {
      (**(code **)(*plVar2 + 0x48))(plVar2);
      Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(plVar2 + 0x3d));
      return;
    }
    psVar3 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(psVar3,plVar2 + 0x1d);
    (**(code **)(*plVar2 + 0x48))(plVar2);
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(plVar2 + 0x3d));
    return;
  }
  return;
}

