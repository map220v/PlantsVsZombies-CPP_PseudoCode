// Class: TGButton


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGButton::InitView() */

void __thiscall TGButton::InitView(TGButton *this)

{
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x308) - 4U < 2) {
    TodStringTranslate(L"[ADVERTISEMENT_WATCH]");
  }
  else {
    TodStringTranslate(L"[TRANS_GENOSIS_BTN]");
  }
  FUN_054766c8(this + 0x348,auStack_10);
  FUN_05476c50(auStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TGButton::SetIsInTutorial(bool) */

void __thiscall TGButton::SetIsInTutorial(TGButton *this,bool param_1)

{
  this[0x30c] = (TGButton)param_1;
  return;
}


/* TGButton::SetPrice(int) */

void __thiscall TGButton::SetPrice(TGButton *this,int param_1)

{
  *(int *)(this + 0x310) = param_1;
  return;
}


/* TGButton::~TGButton() */

void __thiscall TGButton::~TGButton(TGButton *this)

{
  *(undefined ***)this = &PTR_GetClass_0697a280;
  *(undefined ***)(this + 0x198) = &PTR__TGButton_0697a5d8;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  FUN_05476c50(this + 0x350);
  FUN_05476c50(this + 0x348);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x300));
  PVZ2UIButton::~PVZ2UIButton((PVZ2UIButton *)this);
  return;
}


/* non-virtual thunk to TGButton::~TGButton() */

void __thiscall TGButton::~TGButton(TGButton *this)

{
  ~TGButton(this + -0x198);
  return;
}


/* TGButton::~TGButton() */

void __thiscall TGButton::~TGButton(TGButton *this)

{
  ~TGButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to TGButton::~TGButton() */

void __thiscall TGButton::~TGButton(TGButton *this)

{
  ~TGButton(this + -0x198);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGButton::TGButton(int, Sexy::ButtonListener*) */

void __thiscall TGButton::TGButton(TGButton *this,int param_1,ButtonListener *param_2)

{
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_20,&DAT_056f11a8,auStack_28);
  Sexy::Color::Color(aCStack_18,1);
  PVZ2UIButton::PVZ2UIButton((PVZ2UIButton *)this,param_1,param_2,awStack_20,aCStack_18);
  FUN_05476c50(awStack_20);
  nop();
  *(undefined ***)this = &PTR_GetClass_0697a280;
  *(undefined ***)(this + 0x198) = &PTR__TGButton_0697a5d8;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x300));
  *(undefined4 *)(this + 0x308) = 0;
  this[0x30c] = (TGButton)0x0;
  *(undefined4 *)(this + 0x310) = 0;
  *(undefined4 *)(this + 0x314) = 0;
  Sexy::Insets::Insets((Insets *)(this + 0x318));
  Sexy::Insets::Insets((Insets *)(this + 0x328));
  Sexy::Insets::Insets((Insets *)(this + 0x338));
  FUN_05478178(this + 0x348,&DAT_056f11a8,aCStack_18);
  nop();
  FUN_05478178(this + 0x350,&DAT_056f11a8,aCStack_18);
  nop();
  *(int *)(this + 0x358) = param_1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGButton::SetPayType(TG_PayType) */

void __thiscall TGButton::SetPayType(TGButton *this,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  ADManager *pAVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  *(int *)(this + 0x308) = param_2;
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x358) == 0x68) {
    pAVar3 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
    cVar1 = ADManager::CanWatchAD(pAVar3,0x14);
  }
  else {
    cVar1 = '\0';
    if (*(int *)(this + 0x358) == 0x70) {
      pAVar3 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
      cVar1 = ADManager::CanWatchAD(pAVar3,0x15);
    }
  }
  if (param_2 == 1) {
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b8b128);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x300),(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    uVar2 = FUN_04bc5564(0x14);
    *(undefined4 *)(this + 0x314) = uVar2;
  }
  else if (param_2 == 2) {
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b8b100);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x300),(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if (cVar1 == '\0') {
      uVar2 = FUN_04bc5564(0x28);
      *(undefined4 *)(this + 0x314) = uVar2;
    }
    else {
      uVar2 = FUN_04bc5564(0xfffffff1);
      *(undefined4 *)(this + 0x314) = uVar2;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGButton::TGButton(int, Sexy::ButtonListener*, TG_PayType, int) */

void __thiscall
TGButton::TGButton(TGButton *this,int param_1,ButtonListener *param_2,undefined4 param_4,int param_5
                  )

{
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_20,&DAT_056f11a8,auStack_28);
  Sexy::Color::Color(aCStack_18,1);
  PVZ2UIButton::PVZ2UIButton((PVZ2UIButton *)this,param_1,param_2,awStack_20,aCStack_18);
  FUN_05476c50(awStack_20);
  nop();
  *(undefined ***)this = &PTR_GetClass_0697a280;
  *(undefined ***)(this + 0x198) = &PTR__TGButton_0697a5d8;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x300));
  *(undefined4 *)(this + 0x308) = 0;
  this[0x30c] = (TGButton)0x0;
  *(undefined4 *)(this + 0x310) = 0;
  *(undefined4 *)(this + 0x314) = 0;
  Sexy::Insets::Insets((Insets *)(this + 0x318));
  Sexy::Insets::Insets((Insets *)(this + 0x328));
  Sexy::Insets::Insets((Insets *)(this + 0x338));
  FUN_05478178(this + 0x348,&DAT_056f11a8,aCStack_18);
  nop();
  FUN_05478178(this + 0x350,&DAT_056f11a8,aCStack_18);
  nop();
  *(int *)(this + 0x358) = param_1;
  SetPayType(this,param_4);
  SetPrice(this,param_5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGButton::Resize(Sexy::TRect<int> const&) */

void __thiscall TGButton::Resize(TGButton *this,TRect *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ADManager *pAVar7;
  int iVar8;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x308) == 4) {
    pAVar7 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
    cVar2 = ADManager::CanWatchAD(pAVar7,0x14);
LAB_04bdd568:
    PlantHeadshot::Resize((PlantHeadshot *)this,param_1);
    iVar4 = *(int *)(this + 0x50);
    iVar3 = *(int *)(this + 0x308);
    iVar8 = iVar4 + 3;
    if (-1 < iVar4) {
      iVar8 = iVar4;
    }
    iVar8 = iVar8 >> 2;
    if ((cVar2 != '\0') && (iVar3 == 2)) {
      cVar2 = '\x01';
      iVar4 = FUN_04bc5564(0);
      Sexy::Insets::Insets((Insets *)&local_18,iVar4,0,iVar8,*(int *)(this + 0x54));
      *(undefined8 *)(this + 0x318) = local_18;
      *(undefined8 *)(this + 800) = uStack_10;
      goto LAB_04bdd41c;
    }
  }
  else {
    if (*(int *)(this + 0x308) == 5) {
      pAVar7 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
      cVar2 = ADManager::CanWatchAD(pAVar7,0x15);
      goto LAB_04bdd568;
    }
    PlantHeadshot::Resize((PlantHeadshot *)this,param_1);
    iVar4 = *(int *)(this + 0x50);
    cVar2 = '\0';
    iVar3 = *(int *)(this + 0x308);
    iVar8 = iVar4 + 3;
    if (-1 < iVar4) {
      iVar8 = iVar4;
    }
    iVar8 = iVar8 >> 2;
  }
  if (iVar3 - 4U < 2) {
    iVar3 = FUN_04bc5564(0xfffffff4);
    Sexy::Insets::Insets((Insets *)&local_18,iVar3,0,iVar4,*(int *)(this + 0x54));
    *(undefined8 *)(this + 0x318) = local_18;
    *(undefined8 *)(this + 800) = uStack_10;
  }
  else {
    iVar3 = FUN_04bc5564(5);
    Sexy::Insets::Insets((Insets *)&local_18,iVar3,0,iVar4 / 3,*(int *)(this + 0x54));
    *(undefined8 *)(this + 0x318) = local_18;
    *(undefined8 *)(this + 800) = uStack_10;
  }
LAB_04bdd41c:
  iVar4 = FUN_04bc5564(0x1e);
  iVar4 = *(int *)(this + 0x54) - iVar4;
  if ((cVar2 == '\0') || (*(int *)(this + 0x308) != 2)) {
    iVar8 = *(int *)(this + 0x50) / 3 + *(int *)(this + 0x314);
  }
  else {
    iVar8 = iVar8 + *(int *)(this + 0x314);
  }
  iVar3 = FUN_04bc5564(0xd);
  Sexy::Insets::Insets((Insets *)&local_18,iVar8,iVar3,iVar4,iVar4);
  *(undefined8 *)(this + 0x328) = local_18;
  *(undefined8 *)(this + 0x330) = uStack_10;
  iVar8 = *(int *)(this + 0x328);
  iVar5 = FUN_04bc5564(5);
  iVar3 = *(int *)(this + 0x50);
  iVar1 = *(int *)(this + 800);
  iVar6 = FUN_04bc5564(10);
  Sexy::Insets::Insets
            ((Insets *)&local_18,iVar4 + iVar8 + iVar5,0,
             (((iVar3 - iVar1) - iVar4) - iVar6) - *(int *)(this + 0x314),*(int *)(this + 0x54));
  *(undefined8 *)(this + 0x338) = local_18;
  *(undefined8 *)(this + 0x340) = uStack_10;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGButton::Update() */

void __thiscall TGButton::Update(TGButton *this)

{
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ2UIButton::Update((PVZ2UIButton *)this);
  Sexy::StrFormat(L"%d",auStack_10,(ulong)*(uint *)(this + 0x310));
  FUN_054766c8(this + 0x350,auStack_10);
  FUN_05476c50(auStack_10);
  if ((this[0x30c] != (TGButton)0x0) && (*(int *)(this + 0x308) == 2)) {
    (**(code **)(*(long *)this + 0x188))(this,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGButton::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall TGButton::DrawAll(TGButton *this,ModalFlags *param_1,Graphics *param_2)

{
  LawnApp *this_00;
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  ADManager *pAVar4;
  TransGenosisUI *this_01;
  ResourceInfo *pRVar5;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ2UIButton::DrawAll((PVZ2UIButton *)this,param_1,param_2);
  this_00 = gLawnApp;
  if ((this[0x30c] != (TGButton)0x0) &&
     (cVar1 = LawnApp::IsTransGenosisUIValid(gLawnApp), cVar1 != '\0')) {
    this_01 = (TransGenosisUI *)LawnApp::GetTransGenosisUI(this_00);
    cVar1 = TransGenosisUI::CanStartTrans(this_01);
    if (cVar1 != '\0') {
      if (*(int *)(this + 0x308) == 1) {
        TodStringTranslate(L"[TRANS_GENOSIS_BTN_FREE]");
        Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
        uVar3 = PrimeText_PotentialTypeface::Typeface
                          (PrimeText_Game::Typeface_FZShaoEr_32_ThickOutline);
        Sexy::Color::Color(aCStack_18,1);
        WriteWordInRect(param_2,auStack_30,aIStack_28,uVar3,aCStack_18,5,1);
        FUN_05476c50(auStack_30);
      }
      else if (*(int *)(this + 0x308) == 2) {
        TodStringTranslate(L"[TRANS_GENOSIS_BTN_DISABLED]");
        Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
        uVar3 = PrimeText_PotentialTypeface::Typeface
                          (PrimeText_Game::Typeface_FZShaoEr_32_ThickOutline);
        Sexy::Color::Color(aCStack_18,1);
        WriteWordInRect(param_2,auStack_30,aIStack_28,uVar3,aCStack_18,5,1);
        FUN_05476c50(auStack_30);
      }
      goto LAB_04bdd7b0;
    }
  }
  if (*(int *)(this + 0x308) == 2) {
    if (*(int *)(this + 0x358) != 0x68) {
      if (*(int *)(this + 0x358) == 0x70) {
        pAVar4 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
        cVar1 = ADManager::CanWatchAD(pAVar4,0x15);
        if (cVar1 != '\0') goto LAB_04bdd73c;
      }
      goto LAB_04bdd6f4;
    }
    pAVar4 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
    cVar1 = ADManager::CanWatchAD(pAVar4,0x14);
    if (cVar1 == '\0') goto LAB_04bdd6f4;
  }
  else {
LAB_04bdd6f4:
    uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_32_ThickOutline)
    ;
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_2,this + 0x348,this + 0x318,uVar3,aCStack_18,4,1);
  }
LAB_04bdd73c:
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x300));
  if (bVar2) {
    pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x300));
    Sexy::Graphics::DrawImage
              (param_2,(Image *)pRVar5,*(int *)(this + 0x328),*(int *)(this + 0x32c),
               *(int *)(this + 0x330),*(int *)(this + 0x334));
  }
  if ((*(int *)(this + 0x308) == 2) || (1 < *(int *)(this + 0x308) - 4U)) {
    uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_32_ThickOutline)
    ;
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_2,this + 0x350,this + 0x338,uVar3,aCStack_18,3,1);
  }
LAB_04bdd7b0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

