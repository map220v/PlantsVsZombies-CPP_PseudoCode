// Class: StarLevelChallengeUI


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarLevelChallengeUI::~StarLevelChallengeUI() */

void __thiscall StarLevelChallengeUI::~StarLevelChallengeUI(StarLevelChallengeUI *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  *(undefined **)(this + 0xd8) = &DAT_06851560;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06851230;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Activity");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_StarChallenge");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  FUN_05476c50(this + 0x110);
  FUN_05476c50(this + 0xe0);
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarLevelChallengeUI::~StarLevelChallengeUI() */

void __thiscall StarLevelChallengeUI::~StarLevelChallengeUI(StarLevelChallengeUI *this)

{
  ~StarLevelChallengeUI(this);
  AK::FreeHook(this);
  return;
}


/* StarLevelChallengeUI::Update() */

void __thiscall StarLevelChallengeUI::Update(StarLevelChallengeUI *this)

{
  char cVar1;
  Board *this_00;
  
  if (this[0xf8] == (StarLevelChallengeUI)0x0) {
    this_00 = *(Board **)(gLawnApp + 0x9f0);
    if ((this_00 != (Board *)0x0) && (cVar1 = FUN_04496de4(this_00[0x9dc]), cVar1 == '\0')) {
      Board::ClearCursors(this_00);
      LawnApp::PauseMusic(gLawnApp);
      (**(code **)(**(long **)(gLawnApp + 0x9f0) + 800))(*(long **)(gLawnApp + 0x9f0),1);
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarLevelChallengeUI::GetMaxZombieLevel(LevelDefinition const*) */

void __thiscall
StarLevelChallengeUI::GetMaxZombieLevel(StarLevelChallengeUI *this,LevelDefinition *param_1)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  RtWeakPtrBase *pRVar4;
  RtObject *this_00;
  WaveManagerModuleProperties *pWVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  int iVar10;
  undefined8 uVar11;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  uVar9 = 0;
  local_8 = ___stack_chk_guard;
  do {
    uVar11 = *(undefined8 *)(param_1 + 0x88);
    uVar3 = FUN_04496e64(uVar11,*(undefined8 *)(param_1 + 0x90));
    if (uVar3 <= uVar9) {
LAB_04496ff8:
      iVar10 = 1;
LAB_04496fcc:
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(iVar10);
      }
      return;
    }
    pRVar4 = (RtWeakPtrBase *)FUN_04496e70(uVar11,uVar9);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,pRVar4);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_10);
    if (bVar2) {
      this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      pWVar5 = Sexy::RtObject::Cast<WaveManagerModuleProperties>(this_00);
      if (pWVar5 != (WaveManagerModuleProperties *)0x0) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        uVar11 = *(undefined8 *)(pWVar5 + 0x50);
        lVar6 = FUN_04496e78(uVar11,*(undefined8 *)(pWVar5 + 0x58));
        if (lVar6 != 0) {
          lVar6 = FUN_04496e8c(uVar11);
          uVar11 = *(undefined8 *)(lVar6 + 0x28);
          lVar7 = FUN_04496e58(uVar11,*(undefined8 *)(lVar6 + 0x30));
          lVar6 = 0;
          iVar10 = 1;
          while (lVar6 != lVar7) {
            lVar1 = lVar6 + 1;
            piVar8 = (int *)FUN_04496e84(uVar11,lVar6);
            lVar6 = lVar1;
            if (iVar10 < *piVar8) {
              iVar10 = *piVar8;
            }
          }
          goto LAB_04496fcc;
        }
        goto LAB_04496ff8;
      }
    }
    uVar9 = uVar9 + 1;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarLevelChallengeUI::StarLevelChallengeUI(int, int) */

void __thiscall
StarLevelChallengeUI::StarLevelChallengeUI(StarLevelChallengeUI *this,int param_1,int param_2)

{
  ButtonListener *this_00;
  int iVar1;
  LawnApp *pLVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  PVZ2UIButton *pPVar14;
  LotteryResultProgressBar *pLVar15;
  SalesProgressBar *pSVar16;
  wchar_t *pwVar17;
  code *pcVar18;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ButtonListener *)(this + 0xd8);
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener(this_00);
  *(undefined ***)this = &PTR_GetClass_06851230;
  *(undefined **)(this + 0xd8) = &DAT_06851560;
  FUN_05476574(this + 0xe0);
  Sexy::Insets::Insets((Insets *)(this + 0xe8));
  Sexy::Insets::Insets((Insets *)(this + 0xfc));
  FUN_05476574(this + 0x110);
  Sexy::Insets::Insets((Insets *)(this + 0x118));
  this[0xf8] = (StarLevelChallengeUI)0x0;
  *(int *)(this + 0x128) = param_2;
  this[0xf9] = (StarLevelChallengeUI)0x0;
  *(undefined8 *)(this + 0x130) = 0;
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_40,"UI_Activity");
  LawnApp::LoadGroup(pLVar2,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_40,"UI_StarChallenge");
  LawnApp::LoadGroup(pLVar2,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_40,"UI_Fragment_Pieces");
  LawnApp::LoadGroup(pLVar2,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  iVar3 = FUN_04496e90(0);
  Sexy::Widget::Resize
            ((Widget *)this,iVar3,iVar3,*(int *)(gLawnApp + 0xd4),*(int *)(gLawnApp + 0xd8));
  TodStringTranslate(L"[REVIVE_TIP]");
  FUN_054766c8(this + 0xe0,(string *)&local_40);
  FUN_05476c50((string *)&local_40);
  FUN_05478178(auStack_80,&DAT_056f11a8,(string *)&local_40);
  nop();
  switch(param_1) {
  case 0:
    pwVar17 = L"[EGYPT]";
    break;
  case 1:
    pwVar17 = L"[PIRATE]";
    break;
  case 2:
    pwVar17 = L"[COWBOY]";
    break;
  case 3:
    pwVar17 = L"[WORLD_NAME_KONGFU]";
    break;
  case 4:
    pwVar17 = L"[FUTURE]";
    break;
  case 5:
    pwVar17 = L"[DARK]";
    break;
  default:
    goto switchD_044971f8_default;
  }
  TodStringTranslate(pwVar17);
  FUN_054766c8(auStack_80,(string *)&local_40);
  FUN_05476c50((string *)&local_40);
switchD_044971f8_default:
  iVar3 = FUN_04496e90(0x130);
  iVar4 = FUN_04496e90(0x122);
  Sexy::Insets::Insets
            ((Insets *)&local_40,(int)((float)(*(int *)(this + 0x50) - iVar3) * 0.5),
             (int)((float)(*(int *)(this + 0x54) - iVar4) * 0.5),iVar3,iVar4);
  *(undefined8 *)(this + 0xe8) = local_40;
  *(undefined8 *)(this + 0xf0) = uStack_38;
  FUN_05478178(awStack_78,L"[MAINMENU_PLAY]",auStack_88);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar14 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar14,0x3e9,this_00,awStack_78,(Color *)&local_40);
  FUN_05476c50(awStack_78);
  nop();
  iVar3 = *(int *)(this + 0xf0);
  iVar4 = *(int *)(this + 0xe8);
  pcVar18 = *(code **)(*(long *)pPVar14 + 0x198);
  pLVar15 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0b4c0);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
  iVar6 = FUN_04496e90(0x32);
  iVar1 = *(int *)(this + 0xec);
  iVar12 = *(int *)(this + 0xf4);
  pSVar16 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0b4c0);
  iVar7 = SalesProgressBar::GetCurrentLevel(pSVar16);
  iVar8 = FUN_04496e90(0x2d);
  pLVar15 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0b4c0);
  iVar9 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
  iVar10 = FUN_04496e90(0x32);
  pSVar16 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0b4c0);
  uVar11 = SalesProgressBar::GetCurrentLevel(pSVar16);
  (*pcVar18)(pPVar14,(int)((float)(iVar4 + iVar3 / 2) - (float)(iVar5 + iVar6) * 0.5),
             (iVar1 + iVar12 + iVar7 / 2) - iVar8,iVar9 + iVar10,uVar11);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b0b4c0,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b0b6d0,3);
  PVZ2UIButton::SetDialogStates(pPVar14,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)pPVar14);
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_88);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar14 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar14,1000,this_00,awStack_78,(Color *)&local_40);
  FUN_05476c50(awStack_78);
  nop();
  iVar3 = *(int *)(this + 0xe8);
  iVar4 = *(int *)(this + 0xf0);
  pcVar18 = *(code **)(*(long *)pPVar14 + 0x198);
  iVar12 = FUN_04496e90(0x41);
  iVar1 = *(int *)(this + 0xec);
  pSVar16 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0b7c8);
  iVar5 = SalesProgressBar::GetCurrentLevel(pSVar16);
  iVar6 = FUN_04496e90(2);
  pLVar15 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0b7c8);
  uVar11 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
  pSVar16 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0b7c8);
  uVar13 = SalesProgressBar::GetCurrentLevel(pSVar16);
  (*pcVar18)(pPVar14,(iVar3 + iVar4) - iVar12,(iVar1 - iVar5) - iVar6,uVar11,uVar13);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b0b7c8,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b0b850,1);
  PVZ2UIButton::SetDialogStates(pPVar14,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)pPVar14);
  FUN_05476c50(auStack_80);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarLevelChallengeUI::Draw(Sexy::Graphics*) */

void __thiscall StarLevelChallengeUI::Draw(StarLevelChallengeUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  Image *pIVar8;
  long lVar9;
  undefined8 uVar10;
  GraphicsAutoState aGStack_50 [8];
  Insets aIStack_48 [16];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  Insets aIStack_28 [4];
  int local_24;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::DrawDarkeningLayer(gLawnApp,param_1,0.5);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_50,param_1);
  Sexy::Graphics::ClearClipRect(param_1);
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0b8f0);
  iVar2 = FUN_04496e90(10);
  iVar1 = *(int *)(this + 0xec);
  iVar6 = *(int *)(this + 0xe8);
  lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0b8f0);
  iVar7 = *(int *)(lVar9 + 0x3c);
  lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0b8f0);
  iVar3 = *(int *)(lVar9 + 0x38);
  lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0b8f0);
  Sexy::Graphics::DrawImage(param_1,pIVar8,iVar6 - iVar2,iVar1 - iVar7,iVar3,*(int *)(lVar9 + 0x3c))
  ;
  Sexy::Insets::Insets((Insets *)&local_18,(Insets *)(this + 0xe8));
  uVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0b878);
  DrawImageTiled(0x3f800000,param_1,(Insets *)&local_18,uVar10);
  iVar3 = FUN_04496e90(0xfffffff3);
  iVar1 = *(int *)(this + 0xe8);
  iVar2 = FUN_04496e90(0xfffffff7);
  iVar6 = *(int *)(this + 0xec);
  iVar4 = FUN_04496e90(0x1a);
  iVar7 = *(int *)(this + 0xf0);
  iVar5 = FUN_04496e90(0x17);
  Sexy::Insets::Insets
            (aIStack_48,iVar3 + iVar1,iVar2 + iVar6,iVar4 + iVar7,iVar5 + *(int *)(this + 0xf4));
  Sexy::Insets::Insets((Insets *)&local_18,aIStack_48);
  uVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0b720);
  Draw9SliceImage(param_1,(Insets *)&local_18,uVar10);
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0b950);
  iVar1 = *(int *)(this + 0xf0);
  lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0b950);
  iVar6 = *(int *)(lVar9 + 0x38);
  iVar7 = *(int *)(this + 0xe8);
  iVar4 = FUN_04496e90(0x1e);
  iVar3 = *(int *)(this + 0xec);
  lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0b950);
  iVar2 = *(int *)(lVar9 + 0x38);
  lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0b950);
  Sexy::Graphics::DrawImage
            (param_1,pIVar8,(int)((float)iVar7 + (float)(iVar1 - iVar6) * 0.5),iVar3 - iVar4,iVar2,
             *(int *)(lVar9 + 0x3c));
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0b828);
  iVar1 = *(int *)(this + 0xec);
  iVar6 = *(int *)(this + 0xe8);
  iVar7 = *(int *)(this + 0xf4);
  lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0b828);
  iVar3 = *(int *)(lVar9 + 0x3c);
  lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0b828);
  iVar2 = *(int *)(lVar9 + 0x38);
  lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0b828);
  Sexy::Graphics::DrawImage
            (param_1,pIVar8,iVar6,(iVar1 + iVar7) - iVar3,iVar2,*(int *)(lVar9 + 0x3c));
  iVar3 = FUN_04496e90(10);
  iVar1 = *(int *)(this + 0xe8);
  iVar6 = *(int *)(this + 0xec);
  iVar2 = FUN_04496e90(0x14);
  iVar7 = *(int *)(this + 0xf0);
  iVar4 = FUN_04496e90(0xcc);
  Sexy::Insets::Insets((Insets *)&local_38,iVar3 + iVar1,iVar3 + iVar6,iVar7 - iVar2,iVar4);
  Sexy::Insets::Insets((Insets *)&local_18,(Insets *)&local_38);
  uVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0b800);
  Draw9SliceImage(param_1,(Insets *)&local_18,uVar10);
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0b600);
  iVar6 = *(int *)(this + 0xe8);
  iVar7 = *(int *)(this + 0xf0);
  lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0b600);
  iVar3 = *(int *)(lVar9 + 0x38);
  iVar1 = local_34 + local_2c;
  iVar4 = FUN_04496e90(4);
  lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0b600);
  iVar2 = *(int *)(lVar9 + 0x38);
  lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0b600);
  Sexy::Graphics::DrawImage
            (param_1,pIVar8,(int)((float)iVar6 + (float)(iVar7 - iVar3) * 0.5),iVar1 + iVar4,iVar2,
             *(int *)(lVar9 + 0x3c));
  iVar1 = local_38;
  iVar6 = FUN_04496e90(10);
  iVar7 = FUN_04496e90(0x46);
  Sexy::Insets::Insets(aIStack_28,iVar1,local_34 + iVar6,local_30,iVar7);
  uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  Sexy::Color::Color((Color *)&local_18,1);
  WriteWordInRect(param_1,this + 0x110,aIStack_28,uVar10,(Insets *)&local_18,5,1);
  iVar6 = FUN_04496e90(8);
  iVar7 = FUN_04496e90(0xf);
  lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0b650);
  iVar1 = *(int *)(lVar9 + 0x38);
  lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0b650);
  Sexy::Insets::Insets
            ((Insets *)&local_18,local_38 + iVar6,(local_24 + local_1c) - iVar7,iVar1,
             *(int *)(lVar9 + 0x3c));
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0b650);
  Sexy::Graphics::DrawImage(param_1,pIVar8,local_18,local_14,local_10,local_c);
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0b3f0);
  lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0b3f0);
  iVar1 = *(int *)(lVar9 + 0x38);
  iVar6 = FUN_04496e90(10);
  Sexy::Graphics::DrawImage(param_1,pIVar8,local_18 + iVar1 + iVar6,local_14,local_10,local_c);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarLevelChallengeUI::ButtonPress(int) */

void StarLevelChallengeUI::ButtonPress(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Press");
  return;
}


/* non-virtual thunk to StarLevelChallengeUI::ButtonPress(int) */

void __thiscall StarLevelChallengeUI::ButtonPress(StarLevelChallengeUI *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* StarLevelChallengeUI::ButtonDepress(int) */

void __thiscall StarLevelChallengeUI::ButtonDepress(StarLevelChallengeUI *this,int param_1)

{
  char *pcVar1;
  ProfileMgr *this_00;
  long lVar2;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Release");
  if (param_1 == 1000) {
    this[0xf8] = (StarLevelChallengeUI)0x1;
    LawnApp::KillStarLevelChallengeUI(gLawnApp);
    MessageRouter::Post((_func_void *)gMessageRouter);
    return;
  }
  if (param_1 == 0x3e9) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar2 = ProfileMgr::GetCurrentProfile(this_00);
    if (lVar2 != 0) {
      MessageRouter::Post((_func_void *)gMessageRouter);
      LawnApp::KillStarLevelChallengeUI(gLawnApp);
      return;
    }
  }
  return;
}


/* non-virtual thunk to StarLevelChallengeUI::ButtonDepress(int) */

void __thiscall StarLevelChallengeUI::ButtonDepress(StarLevelChallengeUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

