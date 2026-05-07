// Class: PlantAvatarInfoDialog


/* PlantAvatarInfoDialog::CloseChildDialog() */

void PlantAvatarInfoDialog::CloseChildDialog(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  return;
}


/* PlantAvatarInfoDialog::~PlantAvatarInfoDialog() */

void __thiscall PlantAvatarInfoDialog::~PlantAvatarInfoDialog(PlantAvatarInfoDialog *this)

{
  *(undefined ***)this = &PTR_GetClass_06840760;
  *(undefined **)(this + 0xd8) = &DAT_06840a90;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  FUN_05476c50(this + 0x128);
  FUN_05476c50(this + 0x108);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PlantAvatarInfoDialog::~PlantAvatarInfoDialog() */

void __thiscall PlantAvatarInfoDialog::~PlantAvatarInfoDialog(PlantAvatarInfoDialog *this)

{
  ~PlantAvatarInfoDialog(this);
  AK::FreeHook(this);
  return;
}


/* PlantAvatarInfoDialog::CheckPlantIsInActivityLevel(FestivalGameMode&) */

bool __thiscall
PlantAvatarInfoDialog::CheckPlantIsInActivityLevel
          (PlantAvatarInfoDialog *this,FestivalGameMode *param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ActivityConfig *this_00;
  
  lVar3 = LawnApp::GetActivityConfig();
  bVar1 = false;
  if (lVar3 != 0) {
    this_00 = (ActivityConfig *)LawnApp::GetActivityConfig();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0))
    ;
    iVar2 = ActivityConfig::GetCurrentPlantPieceComeFrom(this_00,(string *)(lVar3 + 0x80),true);
    bVar1 = iVar2 != -1;
    *(int *)param_1 = iVar2;
  }
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAvatarInfoDialog::InitDialog() */

void __thiscall PlantAvatarInfoDialog::InitDialog(PlantAvatarInfoDialog *this)

{
  ButtonListener *pBVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  PVZ2UIButton *pPVar17;
  LotteryResultProgressBar *pLVar18;
  SalesProgressBar *pSVar19;
  undefined8 uVar20;
  wchar_t *pwVar21;
  long *plVar22;
  code *pcVar23;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  lVar16 = gLawnApp;
  local_8 = ___stack_chk_guard;
  pcVar23 = *(code **)(*(long *)this + 0x198);
  iVar4 = FUN_043a19d8(0x230);
  iVar2 = *(int *)(lVar16 + 0xd4);
  pBVar1 = (ButtonListener *)(this + 0xd8);
  iVar5 = FUN_043a19d8(0x14a);
  iVar9 = *(int *)(lVar16 + 0xd8);
  lVar16 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b018e8);
  iVar12 = *(int *)(lVar16 + 0x3c);
  uVar6 = FUN_043a19d8(0x230);
  iVar7 = FUN_043a19d8(0x14a);
  lVar16 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b018e8);
  iVar13 = *(int *)(lVar16 + 0x3c);
  iVar8 = FUN_043a19d8(100);
  (*pcVar23)(this,(int)(((float)iVar2 - (float)iVar4) * 0.5),
             (int)((((float)iVar9 - (float)iVar5) - (float)iVar12) * 0.38),uVar6,
             iVar7 + iVar13 + iVar8);
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar17 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar17,0,pBVar1,awStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0xf0) = pPVar17;
  FUN_05476c50(awStack_78);
  nop();
  pPVar17 = *(PVZ2UIButton **)(this + 0xf0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b018e8,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b018e8,1);
  PVZ2UIButton::SetDialogStates(pPVar17,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  plVar22 = *(long **)(this + 0xf0);
  pcVar23 = *(code **)(*plVar22 + 0x198);
  iVar9 = FUN_043a19d8(0x230);
  lVar16 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b018e8);
  iVar2 = *(int *)(lVar16 + 0x38);
  uVar6 = FUN_043a19d8(9);
  pLVar18 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b018e8);
  uVar10 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
  pSVar19 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b018e8);
  uVar11 = SalesProgressBar::GetCurrentLevel(pSVar19);
  (*pcVar23)(plVar22,(int)((float)iVar9 - (float)iVar2 * 1.8),uVar6,uVar10,uVar11);
  iVar2 = *(int *)(*(long *)(this + 0xf0) + 0x54);
  iVar9 = *(int *)(*(long *)(this + 0xf0) + 0x4c);
  iVar12 = FUN_043a19d8(0x14);
  iVar13 = FUN_043a19d8(0x14a);
  iVar4 = FUN_043a19d8(0);
  pSVar19 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b018e8);
  iVar5 = SalesProgressBar::GetCurrentLevel(pSVar19);
  iVar7 = FUN_043a19d8(4);
  iVar8 = FUN_043a19d8(0x230);
  pSVar19 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b018e8);
  iVar14 = SalesProgressBar::GetCurrentLevel(pSVar19);
  iVar15 = FUN_043a19d8(9);
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar4,iVar5 + iVar7,iVar8,
             ((iVar9 + iVar2 + iVar12 + iVar13) - iVar14) + iVar15);
  pcVar23 = *(code **)(*(long *)this + 0x60);
  *(undefined8 *)(this + 0x110) = local_40;
  *(undefined8 *)(this + 0x118) = uStack_38;
  (*pcVar23)(this,*(undefined8 *)(this + 0xf0));
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar17 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar17,3,pBVar1,awStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0xf8) = pPVar17;
  FUN_05476c50(awStack_78);
  nop();
  pPVar17 = *(PVZ2UIButton **)(this + 0xf8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b01228,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b01138,1);
  PVZ2UIButton::SetDialogStates(pPVar17,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  iVar2 = *(int *)(this + 0x50);
  plVar22 = *(long **)(this + 0xf8);
  pcVar23 = *(code **)(*plVar22 + 0x198);
  lVar16 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00d18);
  iVar12 = FUN_043a19d8(0x91);
  iVar9 = *(int *)(lVar16 + 0x38);
  uVar6 = FUN_043a19d8(0x13a);
  pLVar18 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b01228);
  uVar10 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
  pSVar19 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b01228);
  uVar11 = SalesProgressBar::GetCurrentLevel(pSVar19);
  (*pcVar23)(plVar22,(int)((float)iVar12 + (float)(iVar2 - iVar9) * 0.5),uVar6,uVar10,uVar11);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf8));
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar17 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar17,2,pBVar1,awStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0x100) = pPVar17;
  FUN_05476c50(awStack_78);
  nop();
  pPVar17 = *(PVZ2UIButton **)(this + 0x100);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b01228,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b01138,1);
  PVZ2UIButton::SetDialogStates(pPVar17,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  iVar2 = *(int *)(this + 0x50);
  plVar22 = *(long **)(this + 0x100);
  pcVar23 = *(code **)(*plVar22 + 0x198);
  lVar16 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00d18);
  iVar12 = FUN_043a19d8(0x176);
  iVar9 = *(int *)(lVar16 + 0x38);
  uVar6 = FUN_043a19d8(0x13a);
  pLVar18 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b01228);
  uVar10 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
  pSVar19 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b01228);
  uVar11 = SalesProgressBar::GetCurrentLevel(pSVar19);
  (*pcVar23)(plVar22,(int)((float)iVar12 + (float)(iVar2 - iVar9) * 0.5),uVar6,uVar10,uVar11);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x100));
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar17 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar17,1,pBVar1,awStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0xe8) = pPVar17;
  FUN_05476c50(awStack_78);
  nop();
  pPVar17 = *(PVZ2UIButton **)(this + 0xe8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b00bc0,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b00d40,3);
  PVZ2UIButton::SetDialogStates(pPVar17,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  plVar22 = *(long **)(this + 0xe8);
  pcVar23 = *(code **)(*plVar22 + 0x198);
  iVar9 = FUN_043a19d8(0x230);
  pLVar18 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00bc0);
  iVar12 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
  iVar13 = FUN_043a19d8(0x14a);
  lVar16 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b018e8);
  iVar2 = *(int *)(lVar16 + 0x3c);
  pSVar19 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00bc0);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar19);
  pLVar18 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00bc0);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
  pSVar19 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00bc0);
  uVar6 = SalesProgressBar::GetCurrentLevel(pSVar19);
  (*pcVar23)(plVar22,(int)(((float)iVar9 - (float)iVar12 * 1.3) * 0.5),
             (int)((float)(iVar13 + iVar2) + (float)iVar4 * 0.1),(int)((float)iVar5 * 1.3),uVar6);
  pPVar17 = *(PVZ2UIButton **)(this + 0xe8);
  TodStringTranslate(L"[PLANT_INFO_RETURN]");
  uVar20 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22);
  PVZ2UIButton::AddText(pPVar17,(Insets *)&local_40,uVar20,0);
  FUN_05476c50((Insets *)&local_40);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe8));
  cVar3 = CheckPlantIsInActivityLevel(this,this + 0x130);
  plVar22 = *(long **)(this + 0xf8);
  if (cVar3 == '\0') {
    (**(code **)(*plVar22 + 0x158))(plVar22);
    lVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
    cVar3 = *(char *)(lVar16 + 0xe0);
  }
  else {
    lVar16 = *plVar22;
    this[0x120] = (PlantAvatarInfoDialog)0x0;
    (**(code **)(lVar16 + 0x158))(plVar22);
    lVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
    cVar3 = *(char *)(lVar16 + 0xe0);
  }
  if (cVar3 == '\0') {
    (**(code **)(**(long **)(this + 0x100) + 0x158))(*(long **)(this + 0x100));
  }
  switch(*(undefined4 *)(this + 0x130)) {
  case 0:
    pwVar21 = L"[WORLDMAP_YETI_EVENT_ALERT_HEADER_2]";
    break;
  case 1:
    pwVar21 = L"[FESTIVALGAMEMODE_GARGANTUARCRISIS_TITLE]";
    break;
  case 2:
    pwVar21 = L"[ZOMBIE_ZOMBOSSMECH_EGYPT]";
    break;
  case 3:
    pwVar21 = L"[FESTIVALGAMEMODE_CAISHEN_TITLE]";
    break;
  default:
    goto switchD_043a4348_default;
  }
  TodStringTranslate(pwVar21);
  FUN_054766c8(this + 0x108,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
switchD_043a4348_default:
  if (this[0x122] != (PlantAvatarInfoDialog)0x0) {
    lVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
    Sexy::ToWString((string *)(lVar16 + 0xe8));
    TodStringTranslate(awStack_78);
    FUN_054766c8(this + 0x128,(Insets *)&local_40);
    FUN_05476c50((Insets *)&local_40);
    FUN_05476c50(awStack_78);
    plVar22 = *(long **)(this + 0xf8);
    if (plVar22 != (long *)0x0) {
      (**(code **)(*plVar22 + 0x188))(plVar22,1);
      (**(code **)(**(long **)(this + 0xf8) + 0x158))(*(long **)(this + 0xf8),0);
    }
    plVar22 = *(long **)(this + 0x100);
    if (plVar22 != (long *)0x0) {
      (**(code **)(*plVar22 + 0x188))(plVar22,1);
      (**(code **)(**(long **)(this + 0x100) + 0x158))(*(long **)(this + 0x100),0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAvatarInfoDialog::PlantAvatarInfoDialog(Sexy::RtWeakPtr<MagentoProductProps>, bool) */

void __thiscall
PlantAvatarInfoDialog::PlantAvatarInfoDialog
          (PlantAvatarInfoDialog *this,RtWeakPtr<Sexy::ResourceInfo> *param_2,
          PlantAvatarInfoDialog param_3)

{
  long lVar1;
  
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06840760;
  *(undefined **)(this + 0xd8) = &DAT_06840a90;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xe0));
  FUN_05476574(this + 0x108);
  Sexy::Insets::Insets((Insets *)(this + 0x110));
  FUN_05476574(this + 0x128);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xe0),(RtWeakPtr *)param_2);
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  FUN_054772c4(this + 0x108,&DAT_056f11a8);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  this[0x122] = *(PlantAvatarInfoDialog *)(lVar1 + 0xe1);
  FUN_054772c4(this + 0x128,&DAT_056f11a8);
  this[0x121] = param_3;
  this[0x120] = (PlantAvatarInfoDialog)0x0;
  *(undefined4 *)(this + 0x130) = 0xffffffff;
  InitDialog(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAvatarInfoDialog::GetCurrentPlantPieceLevel(std::string const&) */

void __thiscall
PlantAvatarInfoDialog::GetCurrentPlantPieceLevel(PlantAvatarInfoDialog *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  RtObject *this_00;
  PlantPieceLevelData *this_01;
  undefined8 *puVar4;
  long lVar5;
  string *psVar6;
  long lVar7;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x49);
  bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
  if (bVar1) {
    do {
      Sexy::RtDbTable::Iterator::operator*(aIStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
      Sexy::RtId::~RtId(aRStack_30);
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
      if (bVar1) {
        this_00 = (RtObject *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
        this_01 = Sexy::RtObject::Cast<PlantPieceLevelData>(this_00);
        if (this_01 != (PlantPieceLevelData *)0x0) {
          puVar4 = (undefined8 *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_end((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this_01);
          uVar3 = *puVar4;
          lVar5 = FUN_043a13ac(uVar3,puVar4[1]);
          lVar7 = 0;
          while (lVar7 != lVar5) {
            psVar6 = (string *)FUN_043a13c0(uVar3,lVar7);
            cVar2 = std::operator==(psVar6,param_1);
            lVar7 = lVar7 + 1;
            if (cVar2 != '\0') {
              param_1 = psVar6 + 8;
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
              goto LAB_043a52c4;
            }
          }
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtDbTable::Iterator::operator++(aIStack_28,0);
      bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    } while (bVar1);
  }
LAB_043a52c4:
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAvatarInfoDialog::GetCurrentPlantPieceLevelTextContent(std::string const&) */

void __thiscall
PlantAvatarInfoDialog::GetCurrentPlantPieceLevelTextContent
          (PlantAvatarInfoDialog *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  RtObject *this_00;
  PlantPieceLevelData *this_01;
  undefined8 *puVar4;
  long lVar5;
  string *psVar6;
  long lVar7;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x49);
  bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
  if (bVar1) {
    do {
      Sexy::RtDbTable::Iterator::operator*(aIStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
      Sexy::RtId::~RtId(aRStack_30);
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
      if (bVar1) {
        this_00 = (RtObject *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
        this_01 = Sexy::RtObject::Cast<PlantPieceLevelData>(this_00);
        if (this_01 != (PlantPieceLevelData *)0x0) {
          puVar4 = (undefined8 *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_end((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this_01);
          uVar3 = *puVar4;
          lVar5 = FUN_043a13ac(uVar3,puVar4[1]);
          lVar7 = 0;
          while (lVar7 != lVar5) {
            psVar6 = (string *)FUN_043a13c0(uVar3,lVar7);
            cVar2 = std::operator==(psVar6,param_1);
            lVar7 = lVar7 + 1;
            if (cVar2 != '\0') {
              param_1 = psVar6 + 0x10;
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
              goto LAB_043a5420;
            }
          }
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtDbTable::Iterator::operator++(aIStack_28,0);
      bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    } while (bVar1);
  }
LAB_043a5420:
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


/* PlantAvatarInfoDialog::ButtonPress(int) */

void PlantAvatarInfoDialog::ButtonPress(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Press");
  return;
}


/* non-virtual thunk to PlantAvatarInfoDialog::ButtonPress(int) */

void __thiscall PlantAvatarInfoDialog::ButtonPress(PlantAvatarInfoDialog *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAvatarInfoDialog::ButtonDepress(int) */

void __thiscall PlantAvatarInfoDialog::ButtonDepress(PlantAvatarInfoDialog *this,int param_1)

{
  GameStateMgr *pGVar1;
  LawnApp *this_00;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  WorldDataManager *this_01;
  long lVar6;
  PVZ2UIDialog *this_02;
  undefined1 auStack_68 [8];
  wstring awStack_60 [8];
  undefined1 auStack_58 [8];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar5,"Play_UI_Button_Click_Release");
  switch(param_1) {
  case 0:
  case 1:
    LawnApp::KillPlantAvatarInfoDialog(gLawnApp);
    break;
  case 2:
    LawnApp::KillPlantAvatarInfoDialog(gLawnApp);
    pGVar1 = gGameStateMgr;
    std::string::string(asStack_50,"Gacha");
    GameStateMgr::ShowStore(pGVar1,asStack_50,5,5);
    std::string::~string(asStack_50);
    nop();
    break;
  case 3:
    FUN_05476574(awStack_60);
    this_01 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
    std::string::string(asStack_50,"egypt5");
    lVar6 = WorldDataManager::FindEventByLevelName(this_01,asStack_50);
    std::string::~string(asStack_50);
    nop();
    cVar2 = FUN_043a1314(*(undefined1 *)(lVar6 + 0xf2));
    if (cVar2 == '\0') {
      TodStringTranslate(L"[SPECIAL_LEVEL_ACITVATED]");
      FUN_054766c8(awStack_60,asStack_50);
      FUN_05476c50(asStack_50);
      LawnApp::IsNetworkModuleOK();
LAB_043a6a20:
      iVar3 = FUN_043a19d8(0x17c);
      this_00 = gLawnApp;
      iVar4 = FUN_043a19d8(0xf0);
      this_02 = (PVZ2UIDialog *)
                LawnApp::ShowPVZ2Dialog(this_00,(float)iVar3,(float)iVar4,(PVZ2UIDialog *)0x0);
      if (this_02 != (PVZ2UIDialog *)0x0) {
        FUN_05478178(auStack_58,L"[CONTINUE_BUTTON]",auStack_68);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,CloseChildDialog);
        Sexy::Delegate0::Delegate0<PlantAvatarInfoDialog,void(PlantAvatarInfoDialog::*)()>
                  (aDStack_38,asStack_50);
        PVZ2UIDialog::AddButton(this_02,auStack_58,aDStack_38,0);
        FUN_05476c50(auStack_58);
        nop();
        PVZ2UIDialog::SetBackgroundDarken(this_02,true,0.5);
        PVZ2UIDialog::SetHeaderLabel(this_02,awStack_60);
      }
    }
    else {
      cVar2 = LawnApp::IsNetworkModuleOK();
      if (cVar2 == '\0') {
        TodStringTranslate(L"[NET_WORK_FAILD]");
        FUN_054766c8(awStack_60,asStack_50);
        FUN_05476c50(asStack_50);
        goto LAB_043a6a20;
      }
      LawnApp::SetOpenActivityGameUI(gLawnApp,*(undefined4 *)(this + 0x130));
      LawnApp::KillPlantAvatarInfoDialog(gLawnApp);
      GameStateMgr::ShowWorldMap(gGameStateMgr,5,5);
    }
    FUN_05476c50(awStack_60);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to PlantAvatarInfoDialog::ButtonDepress(int) */

void __thiscall PlantAvatarInfoDialog::ButtonDepress(PlantAvatarInfoDialog *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAvatarInfoDialog::Draw(Sexy::Graphics*) */

void __thiscall PlantAvatarInfoDialog::Draw(PlantAvatarInfoDialog *this,Graphics *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  Image *pIVar10;
  long lVar11;
  string *extraout_x1;
  string *extraout_x1_00;
  undefined1 auStack_68 [8];
  Sexy aSStack_60 [8];
  wstring awStack_58 [8];
  Sexy aSStack_50 [8];
  Insets aIStack_48 [16];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::DrawDarkeningLayer(gLawnApp,param_1,0.5);
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0);
  Sexy::Graphics::ClearClipRect(param_1);
  iVar2 = FUN_043a19d8(0xd);
  iVar6 = *(int *)(this + 0x110);
  iVar3 = FUN_043a19d8(9);
  iVar1 = *(int *)(this + 0x114);
  iVar4 = FUN_043a19d8(0x1a);
  iVar7 = *(int *)(this + 0x118);
  iVar5 = FUN_043a19d8(0x17);
  Sexy::Insets::Insets
            (aIStack_48,iVar2 + iVar6,iVar3 + iVar1,iVar7 - iVar4,*(int *)(this + 0x11c) - iVar5);
  Sexy::Insets::Insets((Insets *)&local_18,aIStack_48);
  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b016e8);
  DrawImageTiled(0x3f800000,param_1,(Insets *)&local_18,uVar9);
  Sexy::Insets::Insets((Insets *)&local_18,(Insets *)(this + 0x110));
  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b01a40);
  Draw9SliceImage(param_1,(Insets *)&local_18,uVar9);
  Sexy::Insets::Insets((Insets *)&local_38,(Insets *)(this + 0x110));
  iVar6 = FUN_043a19d8(0xf);
  local_38 = local_38 + iVar6;
  iVar6 = FUN_043a19d8(0xf);
  local_34 = local_34 + iVar6;
  iVar6 = FUN_043a19d8(0x1e);
  local_30 = local_30 - iVar6;
  iVar6 = FUN_043a19d8(0x3c);
  local_2c = local_2c - iVar6;
  Sexy::Insets::Insets((Insets *)&local_18,(Insets *)&local_38);
  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00e58);
  Draw9SliceImage(param_1,(Insets *)&local_18,uVar9);
  pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00ee8);
  iVar6 = local_38;
  iVar7 = FUN_043a19d8(0xf);
  iVar1 = local_34;
  iVar2 = FUN_043a19d8(100);
  Sexy::Graphics::DrawImage(param_1,pIVar10,iVar6 + iVar7,iVar1 + iVar2);
  pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00d18);
  iVar6 = *(int *)(this + 0x50);
  lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00d18);
  iVar2 = local_34;
  iVar1 = *(int *)(lVar11 + 0x38);
  lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00ee8);
  iVar7 = *(int *)(lVar11 + 0x3c);
  iVar3 = FUN_043a19d8(0x82);
  Sexy::Graphics::DrawImage
            (param_1,pIVar10,(int)((float)(iVar6 - iVar1) * 0.5),iVar2 + iVar7 + iVar3);
  pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b01740);
  iVar6 = *(int *)(this + 0x50);
  lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b01740);
  iVar2 = local_34;
  iVar1 = *(int *)(lVar11 + 0x38);
  lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00ee8);
  iVar7 = *(int *)(lVar11 + 0x3c);
  iVar3 = FUN_043a19d8(0x78);
  Sexy::Graphics::DrawImage
            (param_1,pIVar10,(int)((float)(iVar6 - iVar1) * 0.5),iVar2 + iVar7 + iVar3);
  iVar7 = FUN_043a19d8(0);
  iVar6 = local_34;
  iVar2 = FUN_043a19d8(0x1e);
  iVar1 = local_30;
  iVar3 = FUN_043a19d8(0x50);
  Sexy::Insets::Insets((Insets *)&local_28,iVar7,iVar6 + iVar2,iVar1,iVar3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  MagentoProductProps::GetLocalizedShortDescription();
  Sexy::UTF8StringToWString(aSStack_50,extraout_x1);
  TodStringTranslate((wstring *)&local_18);
  FUN_05476c50((Insets *)&local_18);
  std::string::~string((string *)aSStack_50);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_34_HardShadow);
  Sexy::Color::Color((Color *)&local_18,1);
  WriteWordInRect(param_1,auStack_68,(Insets *)&local_28,uVar9,(Insets *)&local_18,2,1);
  if (this[0x121] != (PlantAvatarInfoDialog)0x0) {
    iVar6 = FUN_043a19d8(0x55);
    local_28 = CONCAT44(local_28._4_4_ - iVar6,(int)local_28);
    TodStringTranslate(L"[PIECE_NOTICE_ON_LEVEL_UP]");
    uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_34_HardShadow);
    Sexy::Color::Color((Color *)&local_18,1);
    WriteWordInRect(param_1,aSStack_50,(Insets *)&local_28,uVar9,(Insets *)&local_18,2,1);
    FUN_05476c50(aSStack_50);
  }
  iVar7 = local_38;
  iVar3 = FUN_043a19d8(0x23);
  lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00ee8);
  iVar2 = local_34;
  iVar6 = *(int *)(lVar11 + 0x38);
  iVar4 = FUN_043a19d8(100);
  iVar1 = *(int *)(this + 0x50);
  lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00ee8);
  Sexy::Insets::Insets
            ((Insets *)&local_18,iVar7 + iVar3 + iVar6,iVar2 + iVar4,(int)((float)iVar1 * 0.6),
             (int)((float)*(int *)(lVar11 + 0x3c) * 1.1));
  local_28 = local_18;
  local_20 = uStack_10;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  MagentoProductProps::GetLocalizedDescription();
  Sexy::UTF8StringToWString(aSStack_60,extraout_x1_00);
  TodStringTranslate(awStack_58);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
  Sexy::Color::Color((Color *)&local_18,0);
  WriteWordInRect(param_1,aSStack_50,(Insets *)&local_28,uVar9,(Insets *)&local_18,0,1);
  FUN_05476c50(aSStack_50);
  FUN_05476c50(awStack_58);
  std::string::~string((string *)aSStack_60);
  iVar6 = *(int *)(this + 0x50);
  lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00d18);
  iVar7 = FUN_043a19d8(0x23);
  iVar1 = local_34;
  local_28 = CONCAT44(local_28._4_4_,
                      (int)((float)iVar7 + (float)(iVar6 - *(int *)(lVar11 + 0x38)) * 0.5));
  lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00ee8);
  iVar6 = *(int *)(lVar11 + 0x3c);
  iVar7 = FUN_043a19d8(0x9b);
  local_28 = CONCAT44(iVar1 + iVar6 + iVar7,(int)local_28);
  uVar8 = FUN_043a19d8(0x96);
  local_20 = CONCAT44(local_20._4_4_,uVar8);
  uVar8 = FUN_043a19d8(0x32);
  local_20._4_4_ = uVar8;
  if (this[0x122] == (PlantAvatarInfoDialog)0x0) {
    if (this[0x120] != (PlantAvatarInfoDialog)0x0) {
      uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
      Sexy::Color::Color((Color *)&local_18,1);
      WriteWordInRect(param_1,this + 0x108,(Insets *)&local_28,uVar9,(Insets *)&local_18,0,1);
    }
    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    if (*(char *)(lVar11 + 0xe0) != '\0') {
      iVar6 = FUN_043a19d8(0xce);
      local_28 = CONCAT44(local_28._4_4_,(int)local_28 + iVar6);
      TodStringTranslate(L"[GEM_BOX]");
      uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
      Sexy::Color::Color((Color *)&local_18,1);
      WriteWordInRect(param_1,aSStack_50,(Insets *)&local_28,uVar9,(Insets *)&local_18,0,1);
      FUN_05476c50(aSStack_50);
    }
  }
  else {
    local_20._0_4_ = FUN_043a19d8(0xfa);
    uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
    Sexy::Color::Color((Color *)&local_18,1);
    WriteWordInRect(param_1,this + 0x128,(Insets *)&local_28,uVar9,(Insets *)&local_18,0,1);
  }
  nop();
  FUN_05476c50(auStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

