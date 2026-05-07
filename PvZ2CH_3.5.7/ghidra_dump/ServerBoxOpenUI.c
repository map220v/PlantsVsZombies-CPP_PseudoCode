// Class: ServerBoxOpenUI


/* ServerBoxOpenUI::TouchEnded(Sexy::Touch const&) */

void ServerBoxOpenUI::TouchEnded(Touch *param_1)

{
  LawnApp::KillServerBoxOpenUI(gLawnApp);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ServerBoxOpenUI::ServerBoxOpenUI() */

void __thiscall ServerBoxOpenUI::ServerBoxOpenUI(ServerBoxOpenUI *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"plant");
  BoxOpenUI::BoxOpenUI((BoxOpenUI *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(undefined ***)this = &PTR_GetClass_06801020;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06801360;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x128));
  FUN_05476574(this + 0x140);
  std::vector<ServerBoxContent,std::allocator<ServerBoxContent>>::clear
            ((vector<ServerBoxContent,std::allocator<ServerBoxContent>> *)(this + 0x128));
  *(undefined8 *)(this + 0x120) = 0;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_AwardDialog");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Gacha");
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
/* ServerBoxOpenUI::~ServerBoxOpenUI() */

void __thiscall ServerBoxOpenUI::~ServerBoxOpenUI(ServerBoxOpenUI *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06801360;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06801020;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  if (*(long **)(this + 0x120) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x120) + 0x18))();
    *(undefined8 *)(this + 0x120) = 0;
  }
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_AwardDialog");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Gacha");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  FUN_05476c50(this + 0x140);
  std::vector<ServerBoxContent,std::allocator<ServerBoxContent>>::~vector
            ((vector<ServerBoxContent,std::allocator<ServerBoxContent>> *)(this + 0x128));
  BoxOpenUI::~BoxOpenUI((BoxOpenUI *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ServerBoxOpenUI::~ServerBoxOpenUI() */

void __thiscall ServerBoxOpenUI::~ServerBoxOpenUI(ServerBoxOpenUI *this)

{
  ~ServerBoxOpenUI(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ServerBoxOpenUI::SetContentList(std::map<int, int, std::less<int>, std::allocator<std::pair<int
   const, int> > > const&) */

void __thiscall ServerBoxOpenUI::SetContentList(ServerBoxOpenUI *this,map *param_1)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  NameMapperBase *this_00;
  Effect_PopAnim *pEVar7;
  ResourceInfo *pRVar8;
  StandaloneEffect *this_01;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = false;
  uVar4 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::size
                    ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)param_1
                    );
  *(undefined4 *)(this + 0xec) = uVar4;
  local_20 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin
                       ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                        param_1);
  local_18 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)param_1);
  while( true ) {
    bVar3 = eastl::operator!=((rbtree_iterator *)&local_20,(rbtree_iterator *)&local_18);
    if (!bVar3) break;
    piVar6 = (int *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20);
    local_10 = *piVar6;
    local_c = piVar6[1];
    std::vector<ServerBoxContent,std::allocator<ServerBoxContent>>::push_back
              ((vector<ServerBoxContent,std::allocator<ServerBoxContent>> *)(this + 0x128),
               (ServerBoxContent *)&local_10);
    this_00 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
    cVar2 = NameMapperBase::ContainsId(this_00,*piVar6);
    if (cVar2 != '\0') {
      bVar1 = true;
    }
    std::_Rb_tree_const_iterator<Sexy::PIEffect*>::operator++
              ((_Rb_tree_const_iterator<Sexy::PIEffect*> *)&local_20);
  }
  if (bVar1) {
    pEVar7 = GameObject::CreateOutsideTable<Effect_PopAnim>();
    *(Effect_PopAnim **)(this + 0x120) = pEVar7;
    std::string::string((string *)&local_18,"POPANIM_EFFECTS_GACHA_BACK_LIGHT");
    GetPAMByName((string *)&local_18);
    pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_10);
    Effect_PopAnim::CreatePopAnimRig(pEVar7,(PopAnim *)pRVar8,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    std::string::~string((string *)&local_18);
    nop();
    this_01 = *(StandaloneEffect **)(this + 0x120);
    iVar5 = FUN_041c5e24(0x32);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_10,(float)(*(int *)(this + 0x50) / 2),
               (float)(iVar5 + *(int *)(this + 0x54) / 2));
    StandaloneEffect::SetScreenSpaceOrigin(this_01,(SexyVector2 *)&local_10,900000);
    Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0x120),true);
    pEVar7 = *(Effect_PopAnim **)(this + 0x120);
    std::string::string((string *)&local_10,"anim");
    PVZ_EOT();
    Effect_PopAnim::PlayLoopingAnimation(pEVar7,(RtWeakPtr *)&local_10,0);
    std::string::~string((string *)&local_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ServerBoxOpenUI::Draw(Sexy::Graphics*) */

void __thiscall ServerBoxOpenUI::Draw(ServerBoxOpenUI *this,Graphics *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 auStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoxOpenUI::Draw((BoxOpenUI *)this,param_1);
  cVar1 = FUN_054765e8((wstring *)(this + 0x140));
  if (cVar1 == '\0') {
    pcVar4 = *(code **)(*(long *)this + 0x290);
    uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_40_ThickOutline)
    ;
    Sexy::Color::Color(aCStack_18,1);
    uVar2 = FUN_041c5e24(0x1e);
    TodStringTranslate((wstring *)(this + 0x140));
    (*pcVar4)(this,param_1,uVar3,aCStack_18,uVar2,auStack_20);
    FUN_05476c50(auStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ServerBoxOpenUI::Update() */

void __thiscall ServerBoxOpenUI::Update(ServerBoxOpenUI *this)

{
  BoxOpenUI::Update((BoxOpenUI *)this);
  if (*(StandaloneEffect **)(this + 0x120) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Update(*(StandaloneEffect **)(this + 0x120));
    return;
  }
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x041c9d68 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ServerBoxOpenUI::DrawPrizePool(Sexy::Graphics*) */

void ServerBoxOpenUI::DrawPrizePool(Graphics *param_1)

{
  char *__s;
  uint uVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  uint *puVar12;
  NameMapperBase *pNVar13;
  LotteryResultProgressBar *pLVar14;
  SalesProgressBar *pSVar15;
  SeedPacketUtils *pSVar16;
  ResourceInfo *pRVar17;
  undefined8 uVar18;
  ulong uVar19;
  string *psVar20;
  RtWeakPtr *this;
  Image *pIVar21;
  string *extraout_x0;
  int iVar22;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  int extraout_w1_02;
  int iVar23;
  int iVar24;
  int extraout_w1_03;
  Graphics *in_x1;
  long *plVar25;
  ulong uVar26;
  StandaloneEffect *this_00;
  float fVar27;
  undefined4 uVar28;
  undefined1 auVar29 [16];
  ulong in_d1;
  float fVar30;
  uint uVar31;
  float fVar32;
  int local_98;
  int local_94;
  string asStack_90 [8];
  string asStack_88 [8];
  string asStack_80 [8];
  string asStack_78 [8];
  RtMixedPtrBase aRStack_70 [8];
  string asStack_68 [8];
  wstring awStack_60 [8];
  wstring awStack_58 [16];
  undefined4 local_48 [4];
  int local_38 [8];
  string asStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_98 = *(int *)(param_1 + 0x50) / 2;
  uVar26 = 0;
  local_94 = FUN_041c5e24(0x32);
  local_94 = local_94 + *(int *)(param_1 + 0x54) / 2;
  lVar11 = FUN_041c5d38(*(undefined8 *)(param_1 + 0x128),*(undefined8 *)(param_1 + 0x130));
  if (lVar11 != 0) {
    do {
      fVar30 = (float)in_d1;
      fVar27 = (float)(**(code **)(*(long *)param_1 + 800))(param_1,uVar26 & 0xffffffff);
      fVar32 = *(float *)(param_1 + 0xe4);
      uVar28 = PVZ_T();
      local_38[0] = (int)fVar27;
      iVar5 = CurveLerp<int>(fVar32,fVar32 + 0.4,uVar28,&local_98,(FastCurve *)local_38,3);
      fVar27 = *(float *)(param_1 + 0xe4);
      uVar28 = PVZ_T();
      local_38[0] = (int)fVar30;
      iVar6 = CurveLerp<int>(fVar27,fVar27 + 0.4,uVar28,&local_94,(FastCurve *)local_38,3);
      fVar27 = *(float *)(param_1 + 0xe4);
      auVar29 = PVZ_T();
      in_d1 = (ulong)(uint)(fVar27 + 0.4);
      local_48[0] = 0x3dcccccd;
      local_38[0] = 0x3f800000;
      fVar27 = CurveLerp<float>(auVar29,in_d1,auVar29._0_4_,(string *)local_48,(FastCurve *)local_38
                                ,3);
      puVar12 = (uint *)FUN_041c5d44(*(undefined8 *)(param_1 + 0x128),uVar26);
      uVar1 = *puVar12;
      uVar10 = puVar12[1];
      uVar19 = (ulong)uVar10;
      pNVar13 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
      cVar2 = NameMapperBase::ContainsId(pNVar13,uVar1);
      if (cVar2 == '\0') {
        pNVar13 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
        cVar2 = NameMapperBase::ContainsId(pNVar13,uVar1);
        if (cVar2 == '\0') {
          pNVar13 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
          cVar2 = NameMapperBase::ContainsId(pNVar13,uVar1);
          if (cVar2 == '\0') {
            OtherServerNameMapper::GetInstance();
            cVar2 = FUN_041c5cec(uVar1);
            if (cVar2 == '\0') {
              OtherServerNameMapper::GetInstance();
              cVar2 = FUN_041c5cdc(uVar1);
              if (cVar2 != '\0') {
                __s = "IMAGE_UI_AWARDDIALOG_GOLD";
                goto LAB_041ca150;
              }
              OtherServerNameMapper::GetInstance();
              cVar2 = FUN_041c5cfc(uVar1);
              if (cVar2 == '\0') {
                pNVar13 = (NameMapperBase *)MaterialItemMapper::GetInstance();
                cVar2 = NameMapperBase::ContainsId(pNVar13,uVar1);
                if (cVar2 == '\0') {
                  DSingleton<HeadshotConfig>::getInstance();
                  nop();
                  DString::DString((DString *)local_38,uVar1);
                  DString::operator_cast_to_string((DString *)local_38);
                  std::string::string((string *)awStack_58,"plant");
                  std::string::string((string *)local_48,"none");
                  DIniFile::getItem(extraout_x0,(string *)awStack_60,(string *)awStack_58);
                  std::string::~string((string *)local_48);
                  nop();
                  std::string::~string((string *)awStack_58);
                  nop();
                  std::string::~string((string *)awStack_60);
                  DString::~DString((DString *)local_38);
                  bVar3 = std::operator!=(asStack_80,"none");
                  if (bVar3) {
                    iVar7 = FUN_041c5e24(0x41);
                    iVar22 = FUN_041c5e24(0x82);
                    Sexy::Insets::Insets
                              ((Insets *)local_38,iVar5 - iVar7,iVar6 - iVar7,
                               (int)((float)iVar22 * fVar27),(int)((float)iVar22 * fVar27));
                    FUN_041c9848();
                    FUN_05476574(asStack_78);
                    DString::DString((DString *)local_38,uVar1);
                    DString::operator_cast_to_string((DString *)local_38);
                    std::string::string(asStack_68,"name");
                    std::string::string((string *)awStack_60,"");
                    DIniFile::getItem(extraout_x0,(string *)aRStack_70,asStack_68);
                    DString::DString((DString *)awStack_58,(string *)local_48);
                    std::string::~string((string *)local_48);
                    std::string::~string((string *)awStack_60);
                    nop();
                    std::string::~string(asStack_68);
                    nop();
                    std::string::~string((string *)aRStack_70);
                    DString::~DString((DString *)local_38);
                    cVar2 = DString::empty((DString *)awStack_58);
                    if (cVar2 == '\0') {
                      DString::replace((char *)awStack_58,"\t");
                      DString::operator=((DString *)awStack_58,(DString *)local_38);
                      DString::~DString((DString *)local_38);
                      ::operator+("[",(DString *)awStack_58);
                      ::operator+((DString *)local_48,"]");
                      DString::operator_cast_to_string((DString *)local_38);
                      Sexy::UTF8StringToSexyString((string *)aRStack_70);
                      TodStringTranslate((wstring *)asStack_68);
                      FUN_054766c8(asStack_78,(string *)awStack_60);
                      FUN_05476c50((string *)awStack_60);
                      FUN_05476c50(asStack_68);
                      std::string::~string((string *)aRStack_70);
                      DString::~DString((DString *)local_38);
                      DString::~DString((DString *)local_48);
                    }
                    else {
                      TodStringTranslate(L"[BOSS_CHALLENGE_HEAD_ID_10000]");
                      FUN_054766c8(asStack_78,(FastCurve *)local_38);
                      FUN_05476c50((FastCurve *)local_38);
                    }
                    uVar18 = PrimeText_PotentialTypeface::Typeface
                                       (PrimeText_Game::Typeface_FZShaoEr_18);
                    iVar7 = FUN_041c5e24(100);
                    iVar22 = FUN_041c5e24(0x82);
                    in_d1 = (ulong)(uint)((float)iVar6 + (float)iVar22 * fVar27 * 0.5);
                    iVar6 = FUN_041c5e24(200);
                    FUN_05477b24((string *)local_48,asStack_78);
                    Sexy::Color::Color((Color *)local_38,1);
                    Sexy::PrimeTypeface::DrawString_Line
                              ((PrimeTypeface *)(float)(iVar5 - iVar7),in_d1,(float)iVar6,uVar18);
                    FUN_05476c50((string *)local_48);
                    DString::~DString((DString *)awStack_58);
                    FUN_05476c50(asStack_78);
                  }
                  std::string::~string(asStack_80);
                }
                else {
                  GetGameItemInfo(uVar1,0x100,0);
                  pLVar14 = (LotteryResultProgressBar *)StringHelper::ToImage(asStack_18,false);
                  if (pLVar14 != (LotteryResultProgressBar *)0x0) {
                    iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
                    iVar22 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar14);
                    iVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
                    iVar9 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar14);
                    Sexy::Graphics::DrawImage
                              (in_x1,(Image *)pLVar14,iVar5 - iVar7 / 2,iVar6 - iVar22 / 2,
                               (int)((float)iVar8 * fVar27),(int)((float)iVar9 * fVar27));
                    Sexy::StrFormat(L"x%d",asStack_68,uVar19);
                    uVar18 = PrimeText_PotentialTypeface::Typeface
                                       (PrimeText_Game::Typeface_CafeteriaBlack_20);
                    iVar7 = FUN_041c5e24(0x23);
                    iVar22 = FUN_041c5e24(0x14);
                    FUN_05477b24(awStack_58,asStack_68);
                    Sexy::Color::Color((Color *)local_48,1);
                    Sexy::PrimeTypeface::DrawString_Line
                              ((PrimeTypeface *)(float)(iVar7 + iVar5),(float)(iVar22 + iVar6),
                               (float)iVar7,uVar18);
                    FUN_05476c50(awStack_58);
                    FUN_05477b24(awStack_60,auStack_10);
                    uVar18 = PrimeText_PotentialTypeface::Typeface
                                       (PrimeText_Game::Typeface_FZShaoEr_18);
                    iVar7 = FUN_041c5e24(100);
                    iVar22 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar14);
                    in_d1 = (ulong)(uint)((float)iVar6 + (float)iVar22 * fVar27 * 0.5);
                    iVar6 = FUN_041c5e24(200);
                    FUN_05477b24(awStack_58,awStack_60);
                    Sexy::Color::Color((Color *)local_48,1);
                    Sexy::PrimeTypeface::DrawString_Line
                              ((PrimeTypeface *)(float)(iVar5 - iVar7),in_d1,(float)iVar6,uVar18);
                    FUN_05476c50(awStack_58);
                    FUN_05476c50(awStack_60);
                    FUN_05476c50(asStack_68);
                  }
                  GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)local_38);
                }
                goto LAB_041ca030;
              }
              std::string::string((string *)local_38,"IMAGE_UI_AWARDDIALOG_TACTICALCUKE");
              GetImageByName((string *)local_38);
              std::string::~string((string *)local_38);
              nop();
              cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_68);
              if (cVar2 != '\0') {
                pIVar21 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                             ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
                pLVar14 = (LotteryResultProgressBar *)
                          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
                iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
                pSVar15 = (SalesProgressBar *)
                          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
                iVar22 = SalesProgressBar::GetCurrentLevel(pSVar15);
                pLVar14 = (LotteryResultProgressBar *)
                          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
                iVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
                pSVar15 = (SalesProgressBar *)
                          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
                iVar9 = SalesProgressBar::GetCurrentLevel(pSVar15);
                Sexy::Graphics::DrawImage
                          (in_x1,pIVar21,iVar5 - iVar7 / 2,iVar6 - iVar22 / 2,
                           (int)((float)iVar8 * fVar27),(int)((float)iVar9 * fVar27));
                Sexy::StrFormat(L"x%d",awStack_60,uVar19);
                uVar18 = PrimeText_PotentialTypeface::Typeface
                                   (PrimeText_Game::Typeface_CafeteriaBlack_20);
                iVar7 = FUN_041c5e24(0x23);
                iVar22 = FUN_041c5e24(0x14);
                FUN_05477b24((string *)local_48,awStack_60);
                Sexy::Color::Color((Color *)local_38,1);
                Sexy::PrimeTypeface::DrawString_Line
                          ((PrimeTypeface *)(float)(iVar7 + iVar5),(float)(iVar22 + iVar6),
                           (float)iVar7,uVar18);
                FUN_05476c50((string *)local_48);
                NetworkHelper::getObjectNameByActId((NetworkHelper *)(ulong)uVar1,extraout_w1_02);
                uVar18 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18)
                ;
                iVar7 = FUN_041c5e24(100);
                pSVar15 = (SalesProgressBar *)
                          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
                iVar22 = SalesProgressBar::GetCurrentLevel(pSVar15);
                in_d1 = (ulong)(uint)((float)iVar6 + (float)iVar22 * fVar27 * 0.5);
                iVar6 = FUN_041c5e24(200);
                FUN_05477b24((string *)local_48,awStack_58);
                Sexy::Color::Color((Color *)local_38,1);
                Sexy::PrimeTypeface::DrawString_Line
                          ((PrimeTypeface *)(float)(iVar5 - iVar7),in_d1,(float)iVar6,uVar18);
                FUN_05476c50((string *)local_48);
                FUN_05476c50(awStack_58);
                FUN_05476c50(awStack_60);
              }
            }
            else {
              __s = "IMAGE_UI_AWARDDIALOG_GEM";
LAB_041ca150:
              std::string::string((string *)local_38,__s);
              GetImageByName((string *)local_38);
              std::string::~string((string *)local_38);
              nop();
              cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_68);
              if (cVar2 != '\0') {
                pIVar21 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                             ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
                pLVar14 = (LotteryResultProgressBar *)
                          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
                iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
                pSVar15 = (SalesProgressBar *)
                          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
                iVar22 = SalesProgressBar::GetCurrentLevel(pSVar15);
                pLVar14 = (LotteryResultProgressBar *)
                          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
                iVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
                pSVar15 = (SalesProgressBar *)
                          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
                iVar9 = SalesProgressBar::GetCurrentLevel(pSVar15);
                Sexy::Graphics::DrawImage
                          (in_x1,pIVar21,iVar5 - iVar7 / 2,iVar6 - iVar22 / 2,
                           (int)((float)iVar8 * fVar27),(int)((float)iVar9 * fVar27));
                Sexy::StrFormat(L"x%d",awStack_60,uVar19);
                NetworkHelper::getObjectNameByActId((NetworkHelper *)(ulong)uVar1,extraout_w1_00);
                std::operator+((wstring *)local_38,awStack_60);
                FUN_05476c50((FastCurve *)local_38);
                uVar18 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18)
                ;
                iVar7 = FUN_041c5e24(100);
                pSVar15 = (SalesProgressBar *)
                          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
                iVar22 = SalesProgressBar::GetCurrentLevel(pSVar15);
                in_d1 = (ulong)(uint)((float)iVar6 + (float)iVar22 * fVar27 * 0.5);
                iVar6 = FUN_041c5e24(200);
                FUN_05477b24((string *)local_48,awStack_58);
                Sexy::Color::Color((Color *)local_38,1);
                Sexy::PrimeTypeface::DrawString_Line
                          ((PrimeTypeface *)(float)(iVar5 - iVar7),in_d1,(float)iVar6,uVar18);
                FUN_05476c50((string *)local_48);
                FUN_05476c50(awStack_58);
                FUN_05476c50(awStack_60);
              }
            }
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
          }
          else {
            iVar7 = AvatarChipNameMapperServerID::GetInstance();
            NameMapperBase::GetNameForId(iVar7);
            bVar3 = std::operator!=(asStack_88,"");
            if (bVar3) {
              std::string::string(asStack_80,"avatar_piece_");
              nop();
              FUN_05475d88(asStack_78,asStack_88);
              FUN_031dcc6c((string *)aRStack_70,asStack_80,asStack_78);
              psVar20 = (string *)
                        Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
              ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar20);
              cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_68);
              if (cVar2 != '\0') {
                lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
                pIVar21 = (Image *)StringHelper::ToImage((string *)(lVar11 + 0x60),false);
                if (pIVar21 != (Image *)0x0) {
                  pLVar14 = (LotteryResultProgressBar *)
                            CachedUIResourcePtr<Sexy::Image>::operator->
                                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af17e0);
                  iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
                  pSVar15 = (SalesProgressBar *)
                            CachedUIResourcePtr<Sexy::Image>::operator->
                                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af17e0);
                  iVar22 = SalesProgressBar::GetCurrentLevel(pSVar15);
                  pLVar14 = (LotteryResultProgressBar *)
                            CachedUIResourcePtr<Sexy::Image>::operator->
                                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af17e0);
                  iVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
                  pSVar15 = (SalesProgressBar *)
                            CachedUIResourcePtr<Sexy::Image>::operator->
                                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af17e0);
                  iVar9 = SalesProgressBar::GetCurrentLevel(pSVar15);
                  Sexy::Graphics::DrawImage
                            (in_x1,pIVar21,iVar5 - iVar7 / 2,iVar6 - iVar22 / 2,
                             (int)((float)iVar8 * fVar27),(int)((float)iVar9 * fVar27));
                }
                Sexy::StrFormat(L"x%d",awStack_60,uVar19);
                uVar18 = PrimeText_PotentialTypeface::Typeface
                                   (PrimeText_Game::Typeface_CafeteriaBlack_20);
                iVar7 = FUN_041c5e24(0x23);
                iVar22 = FUN_041c5e24(0x14);
                FUN_05477b24((string *)local_48,awStack_60);
                Sexy::Color::Color((Color *)local_38,1);
                Sexy::PrimeTypeface::DrawString_Line
                          ((PrimeTypeface *)(float)(iVar7 + iVar5),(float)(iVar22 + iVar6),
                           (float)iVar7,uVar18);
                FUN_05476c50((string *)local_48);
                NetworkHelper::getObjectNameByActId((NetworkHelper *)(ulong)uVar1,extraout_w1_03);
                uVar18 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18)
                ;
                iVar7 = FUN_041c5e24(100);
                pSVar15 = (SalesProgressBar *)
                          CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af17e0);
                iVar22 = SalesProgressBar::GetCurrentLevel(pSVar15);
                in_d1 = (ulong)(uint)((float)iVar6 + (float)iVar22 * fVar27 * 0.5);
                iVar6 = FUN_041c5e24(200);
                FUN_05477b24((string *)local_48,awStack_58);
                Sexy::Color::Color((Color *)local_38,1);
                Sexy::PrimeTypeface::DrawString_Line
                          ((PrimeTypeface *)(float)(iVar5 - iVar7),in_d1,(float)iVar6,uVar18);
                FUN_05476c50((string *)local_48);
                FUN_05476c50(awStack_58);
                FUN_05476c50(awStack_60);
              }
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
              std::string::~string((string *)aRStack_70);
              std::string::~string(asStack_78);
              std::string::~string(asStack_80);
            }
            std::string::~string(asStack_88);
          }
        }
        else {
          iVar7 = PlantChipNameMapperServerID::GetInstance();
          NameMapperBase::GetNameForId(iVar7);
          bVar3 = std::operator!=(asStack_90,"");
          if (bVar3) {
            std::string::string(asStack_88,"plant_piece_");
            nop();
            FUN_05475d88(asStack_80,asStack_90);
            FUN_031dcc6c(asStack_78,asStack_88,asStack_80);
            psVar20 = (string *)
                      Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
            ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar20);
            cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_70);
            if (cVar2 != '\0') {
              psVar20 = (string *)
                        Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
              ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar20);
              bVar4 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_68);
              uVar10 = (uint)bVar4;
              uVar31 = (uint)bVar4;
              if (bVar4 != 0) {
                pSVar16 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
                lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
                this = (RtWeakPtr *)
                       SeedPacketUtils::GetPlantPiecePacketRenderData
                                 (pSVar16,(string *)(lVar11 + 8));
                fVar27 = fVar27 * 0.7;
                pLVar14 = (LotteryResultProgressBar *)
                          CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af17b8);
                iVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
                pSVar15 = (SalesProgressBar *)
                          CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af17b8);
                iVar9 = SalesProgressBar::GetCurrentLevel(pSVar15);
                iVar7 = *(int *)(this + 0x10);
                iVar22 = *(int *)(this + 0x14);
                iVar23 = (int)(fVar27 * (float)*(int *)(this + 0x28));
                iVar24 = (int)(fVar27 * (float)*(int *)(this + 0x2c));
                pRVar17 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this + 0x170);
                fVar30 = (float)(int)((float)iVar5 - fVar27 * (float)(iVar8 / 2));
                fVar32 = (float)(int)((float)iVar6 - fVar27 * (float)(iVar9 / 2));
                Sexy::Insets::Insets
                          ((Insets *)local_38,(int)(fVar30 + (float)*(int *)(this + 0x30) * fVar27),
                           (int)(fVar32 + (float)*(int *)(this + 0x34) * fVar27),iVar23,iVar24);
                Sexy::Graphics::DrawImage
                          (in_x1,(Image *)pRVar17,(TRect *)local_38,(TRect *)(this + 0x20));
                bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
                if (bVar3) {
                  lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)this);
                  pRVar17 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_
                                      ((RtWeakPtr *)(lVar11 + 0x48));
                  Sexy::Insets::Insets
                            ((Insets *)local_38,
                             (int)(fVar30 + (float)*(int *)(this + 0x18) * fVar27),
                             (int)(fVar32 + (float)*(int *)(this + 0x1c) * fVar27),
                             (int)(fVar27 * (float)iVar7),(int)(fVar27 * (float)iVar22));
                  Sexy::Graphics::DrawImage
                            (in_x1,(Image *)pRVar17,(TRect *)local_38,(TRect *)(this + 8));
                  uVar10 = iVar24 / 2;
                  uVar31 = iVar23 / 2;
                }
                else {
                  uVar10 = iVar24 / 2;
                  uVar31 = iVar23 / 2;
                }
              }
              Sexy::StrFormat(L"x%d",awStack_60,uVar19);
              uVar18 = PrimeText_PotentialTypeface::Typeface
                                 (PrimeText_Game::Typeface_CafeteriaBlack_20);
              iVar7 = FUN_041c5e24(0x14);
              iVar22 = FUN_041c5e24(0x23);
              FUN_05477b24((string *)local_48,awStack_60);
              Sexy::Color::Color((Color *)local_38,1);
              Sexy::PrimeTypeface::DrawString_Line
                        ((PrimeTypeface *)(float)(int)(iVar5 + uVar31),(float)(iVar7 + iVar6),
                         (float)iVar22,uVar18);
              FUN_05476c50((string *)local_48);
              NetworkHelper::getObjectNameByActId((NetworkHelper *)(ulong)uVar1,extraout_w1_01);
              uVar18 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
              iVar7 = FUN_041c5e24(100);
              iVar22 = FUN_041c5e24(200);
              FUN_05477b24((string *)local_48,awStack_58);
              Sexy::Color::Color((Color *)local_38,1);
              in_d1 = (ulong)(uint)(float)(int)(iVar6 + uVar10);
              Sexy::PrimeTypeface::DrawString_Line
                        ((PrimeTypeface *)(float)(iVar5 - iVar7),in_d1,(float)iVar22,uVar18);
              FUN_05476c50((string *)local_48);
              FUN_05476c50(awStack_58);
              FUN_05476c50(awStack_60);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
            }
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
            std::string::~string(asStack_78);
            std::string::~string(asStack_80);
            std::string::~string(asStack_88);
          }
          std::string::~string(asStack_90);
        }
      }
      else {
        iVar7 = PlantNameMapperServerID::GetInstance();
        NameMapperBase::GetNameForId(iVar7);
        pLVar14 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af18c8);
        iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
        iVar22 = (int)((float)iVar5 - fVar27 * 0.5 * (float)iVar7);
        pSVar15 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af18c8);
        iVar7 = SalesProgressBar::GetCurrentLevel(pSVar15);
        plVar25 = *(long **)(param_1 + 0x120);
        iVar7 = (int)((float)iVar6 - fVar27 * 0.5 * (float)iVar7);
        if (plVar25 != (long *)0x0) {
          (**(code **)(*plVar25 + 0x80))(fVar27,plVar25);
          this_00 = *(StandaloneEffect **)(param_1 + 0x120);
          Sexy::FastCurve::SetOutRange((FastCurve *)local_38,(float)iVar5,(float)iVar6);
          StandaloneEffect::SetScreenSpaceOrigin(this_00,(SexyVector2 *)local_38,900000);
          StandaloneEffect::Draw(*(StandaloneEffect **)(param_1 + 0x120),in_x1);
        }
        pSVar16 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
        lVar11 = SeedPacketUtils::GetPlantPacketRenderData(pSVar16,asStack_68,-1,-1,-1);
        pRVar17 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar11 + 0x170));
        Sexy::Insets::Insets
                  ((Insets *)local_38,iVar22 + *(int *)(lVar11 + 0x30),
                   iVar7 + *(int *)(lVar11 + 0x34),*(int *)(lVar11 + 0x28),*(int *)(lVar11 + 0x2c));
        Sexy::Graphics::DrawImage(in_x1,(Image *)pRVar17,(TRect *)local_38,(TRect *)(lVar11 + 0x20))
        ;
        pRVar17 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar11 + 0x170));
        Sexy::Graphics::DrawImage
                  (in_x1,(Image *)pRVar17,iVar22 + *(int *)(lVar11 + 0x18),
                   iVar7 + *(int *)(lVar11 + 0x1c),(TRect *)(lVar11 + 8));
        NetworkHelper::getObjectNameByActId((NetworkHelper *)(ulong)uVar1,extraout_w1);
        if (1 < (int)uVar10) {
          TodStringTranslate(L"[GROUP_BUY_PLANT_LEVEL]");
          TodReplaceNumberString(awStack_58,L"{NUMBER}",uVar10);
          std::operator+(awStack_60,(wstring *)local_48);
          FUN_054766c8(awStack_60,(FastCurve *)local_38);
          FUN_05476c50((FastCurve *)local_38);
          FUN_05476c50((string *)local_48);
          FUN_05476c50(awStack_58);
        }
        uVar18 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
        iVar7 = FUN_041c5e24(0x62);
        pSVar15 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af18c8);
        iVar22 = SalesProgressBar::GetCurrentLevel(pSVar15);
        iVar8 = FUN_041c5e24(0x14);
        iVar9 = FUN_041c5e24(200);
        FUN_05477b24((string *)local_48,awStack_60);
        Sexy::Color::Color((Color *)local_38,1);
        in_d1 = (ulong)(uint)(float)(iVar6 + iVar22 / 2 + iVar8);
        Sexy::PrimeTypeface::DrawString_Line
                  ((PrimeTypeface *)(float)(iVar5 - iVar7),in_d1,(float)iVar9,uVar18);
        FUN_05476c50((string *)local_48);
        FUN_05476c50(awStack_60);
        std::string::~string(asStack_68);
      }
LAB_041ca030:
      uVar26 = uVar26 + 1;
      uVar19 = FUN_041c5d38(*(undefined8 *)(param_1 + 0x128),*(undefined8 *)(param_1 + 0x130));
    } while (uVar26 < uVar19);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

