// Class: PVZ2UIStoreItemDisplayer


/* PVZ2UIStoreItemDisplayer::SetTimingFreeInSmallWindow(bool) */

void __thiscall
PVZ2UIStoreItemDisplayer::SetTimingFreeInSmallWindow(PVZ2UIStoreItemDisplayer *this,bool param_1)

{
  this[0x198] = (PVZ2UIStoreItemDisplayer)param_1;
  return;
}


/* PVZ2UIStoreItemDisplayer::SetIgnoreShowPieces(bool) */

void __thiscall
PVZ2UIStoreItemDisplayer::SetIgnoreShowPieces(PVZ2UIStoreItemDisplayer *this,bool param_1)

{
  this[0x149] = (PVZ2UIStoreItemDisplayer)param_1;
  return;
}


/* PVZ2UIStoreItemDisplayer::~PVZ2UIStoreItemDisplayer() */

void __thiscall PVZ2UIStoreItemDisplayer::~PVZ2UIStoreItemDisplayer(PVZ2UIStoreItemDisplayer *this)

{
  *(undefined ***)this = &PTR_GetClass_0683b530;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  FUN_05476c50(this + 0x160);
  FUN_05476c50(this + 0x130);
  FUN_05476c50(this + 0x128);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PVZ2UIStoreItemDisplayer::~PVZ2UIStoreItemDisplayer() */

void __thiscall PVZ2UIStoreItemDisplayer::~PVZ2UIStoreItemDisplayer(PVZ2UIStoreItemDisplayer *this)

{
  ~PVZ2UIStoreItemDisplayer(this);
  AK::FreeHook(this);
  return;
}


/* PVZ2UIStoreItemDisplayer::CloseCurrentGemProductNotice(std::string const&) */

void __thiscall
PVZ2UIStoreItemDisplayer::CloseCurrentGemProductNotice
          (PVZ2UIStoreItemDisplayer *this,string *param_1)

{
  char cVar1;
  long lVar2;
  
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
  cVar1 = std::operator==((string *)(lVar2 + 0x10),param_1);
  if (cVar1 != '\0') {
    *(undefined8 *)(this + 0x108) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIStoreItemDisplayer::Resize(int, int, int, int) */

void __thiscall
PVZ2UIStoreItemDisplayer::Resize
          (PVZ2UIStoreItemDisplayer *this,int param_1,int param_2,int param_3,int param_4)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
  iVar2 = FUN_043772fc(0x18);
  iVar3 = FUN_043772fc(0x30);
  iVar5 = *(int *)(this + 0x50);
  iVar4 = FUN_043772fc(0x8c);
  Sexy::Insets::Insets((Insets *)&local_28,iVar2,*(int *)(this + 0x138),iVar5 - iVar3,iVar4);
  plVar8 = *(long **)(this + 0xe0);
  if (((plVar8 != (long *)0x0) &&
      ((**(code **)(*plVar8 + 0x1a0))(plVar8,(Insets *)&local_28),
      this[0x148] != (PVZ2UIStoreItemDisplayer)0x0)) &&
     (*(LotteryResultProgressBar **)(this + 0x118) != (LotteryResultProgressBar *)0x0)) {
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x118));
    iVar2 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x118));
    iVar3 = FUN_043772fc(2);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x118));
    iVar6 = FUN_043772fc(2);
    iVar7 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x118));
    Sexy::Insets::Insets
              ((Insets *)&local_18,local_28 + iVar5,((local_24 + local_1c) - iVar2) - iVar3,
               (local_20 - iVar4) - iVar6,iVar7);
    *(undefined8 *)(this + 0x168) = local_18;
    *(undefined8 *)(this + 0x170) = uStack_10;
  }
  plVar8 = *(long **)(this + 0xe8);
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x1a0))(plVar8,(Insets *)&local_28);
  }
  plVar8 = *(long **)(this + 0xf0);
  if (plVar8 != (long *)0x0) {
    iVar5 = *(int *)(this + 0x178);
    iVar3 = FUN_043772fc(0x2b);
    iVar2 = *(int *)(this + 0x54);
    iVar4 = FUN_043772fc(0x37);
    (**(code **)(*plVar8 + 0x198))
              (plVar8,(*(int *)(this + 0x50) - iVar5) / 2,(iVar2 - iVar3) - iVar4);
  }
  if (*(long *)(this + 0xf8) != 0) {
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8);
    lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    bVar1 = std::operator==((string *)(lVar9 + 0x78),"battlezTicket");
    if (!bVar1) {
      lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      bVar1 = std::operator==((string *)(lVar9 + 0x78),"mystery_crystal");
      if (!bVar1) {
        lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        bVar1 = std::operator==((string *)(lVar9 + 0x78),"fuel");
        if (!bVar1) {
          lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
          bVar1 = std::operator==((string *)(lVar9 + 0x78),"pvz1mode_time_energy");
          if (!bVar1) {
            iVar5 = *(int *)(*(long *)(this + 0xf8) + 0x38);
            iVar2 = *(int *)(*(long *)(this + 0xf8) + 0x3c);
            Sexy::Insets::Insets
                      ((Insets *)&local_18,(*(int *)(this + 0x50) - iVar5) / 2,
                       *(int *)(this + 0x54) - iVar2,iVar5,iVar2);
            *(undefined8 *)(this + 0x17c) = local_18;
            *(undefined8 *)(this + 0x184) = uStack_10;
            goto LAB_0437a4fc;
          }
        }
      }
    }
    lVar9 = *(long *)(this + 0xf0);
    iVar5 = *(int *)(lVar9 + 0x50);
    iVar2 = *(int *)(lVar9 + 0x48);
    iVar3 = FUN_043772fc(0x14);
    iVar4 = FUN_043772fc(0x1c);
    Sexy::Insets::Insets
              ((Insets *)&local_18,(iVar2 + iVar5) - iVar3,*(int *)(lVar9 + 0x4c) - iVar4,
               *(int *)(*(long *)(this + 0xf8) + 0x38),*(int *)(*(long *)(this + 0xf8) + 0x3c));
    *(undefined8 *)(this + 0x17c) = local_18;
    *(undefined8 *)(this + 0x184) = uStack_10;
  }
LAB_0437a4fc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UIStoreItemDisplayer::OnNotifyFreeItemGot(std::string const&) */

void __thiscall
PVZ2UIStoreItemDisplayer::OnNotifyFreeItemGot(PVZ2UIStoreItemDisplayer *this,string *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  char cVar1;
  bool bVar2;
  long lVar3;
  MagentoProductProps *this_01;
  long *plVar4;
  float fVar5;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  cVar1 = std::operator==((string *)(lVar3 + 0x78),param_1);
  if (cVar1 != '\0') {
    this_01 = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    fVar5 = (float)MagentoProductProps::GetPriceInUSD(this_01,false);
    if ((int)fVar5 == 0) {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      bVar2 = std::operator!=((string *)(lVar3 + 0x88),"ad");
      if ((bVar2) && (plVar4 = *(long **)(this + 0xf0), plVar4 != (long *)0x0)) {
        (**(code **)(*plVar4 + 0x188))(plVar4,1);
        return;
      }
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIStoreItemDisplayer::Draw(Sexy::Graphics*) */

void __thiscall PVZ2UIStoreItemDisplayer::Draw(PVZ2UIStoreItemDisplayer *this,Graphics *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  PrimeTypeface *pPVar11;
  Image *pIVar12;
  float fVar13;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  int local_68 [2];
  int local_60;
  Insets aIStack_58 [16];
  Insets aIStack_48 [16];
  Insets aIStack_38 [16];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8);
  iVar4 = FUN_043772fc(4);
  iVar5 = FUN_043772fc(8);
  iVar1 = *(int *)(this + 0x50);
  fVar13 = (float)FUN_04377390(0x41f00000);
  Sexy::Insets::Insets
            ((Insets *)local_68,iVar4,0,iVar1 - iVar5,(int)((float)*(int *)(this + 0x54) - fVar13));
  Sexy::Insets::Insets(aIStack_18,(Insets *)local_68);
  Draw9SliceImage(param_1,aIStack_18,*(undefined8 *)(this + 0x100));
  iVar1 = local_68[0];
  iVar5 = FUN_043772fc(10);
  fVar13 = (float)FUN_04377390(0x40a00000);
  iVar4 = local_60;
  iVar6 = FUN_043772fc(0x14);
  Sexy::Insets::Insets(aIStack_58,iVar1 + iVar5,(int)fVar13,iVar4 - iVar6,*(int *)(this + 0x138));
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x128,aIStack_58,uVar9,aIStack_18,5,1);
  lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  bVar2 = std::operator==((string *)(lVar10 + 0x78),"battlezTicket");
  if (!bVar2) {
    lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    bVar2 = std::operator==((string *)(lVar10 + 0x78),"sun");
    if (!bVar2) {
      lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      bVar2 = std::operator==((string *)(lVar10 + 0x78),"fuel");
      if (!bVar2) {
        lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        bVar2 = std::operator==((string *)(lVar10 + 0x78),"mystery_crystal");
        if (!bVar2) {
          lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
          bVar2 = std::operator==((string *)(lVar10 + 0x78),"gem");
          if (!bVar2) {
            lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
            bVar2 = std::operator==((string *)(lVar10 + 0x78),"coin");
            if (!bVar2) {
              lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
              bVar2 = std::operator==((string *)(lVar10 + 0x78),"pvpCoin");
              if (!bVar2) {
                lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
                bVar2 = std::operator==((string *)(lVar10 + 0x78),"avatar_ticket");
                if (!bVar2) {
                  uVar9 = 0xa1;
                  goto LAB_0437a854;
                }
              }
            }
          }
        }
      }
    }
  }
  uVar9 = 0x91;
LAB_0437a854:
  iVar6 = FUN_043772fc(uVar9);
  iVar4 = local_68[0];
  iVar1 = *(int *)(this + 0x138);
  iVar7 = FUN_043772fc(10);
  iVar5 = local_60;
  iVar8 = FUN_043772fc(0x14);
  pPVar11 = (PrimeTypeface *)
            PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  fVar13 = (float)Sexy::PrimeTypeface::GetLineHeight(pPVar11);
  Sexy::Insets::Insets(aIStack_48,iVar4 + iVar7,iVar6 + iVar1,iVar5 - iVar8,(int)(fVar13 * 4.0));
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
  WriteWordInRect(param_1,this + 0x130,aIStack_48,uVar9,aIStack_18,*(undefined4 *)(this + 0x144),1);
  cVar3 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)this_00);
  if ((cVar3 != '\0') && (this[0x158] == (PVZ2UIStoreItemDisplayer)0x0)) {
    Sexy::Insets::Insets
              (aIStack_38,local_68[0],*(int *)(this + 0x138),local_60,
               *(int *)(this + 0x54) - *(int *)(this + 0x138));
    pPVar11 = (PrimeTypeface *)
              PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_60);
    Sexy::Insets::Insets(aIStack_18,aIStack_38);
    FUN_05478178(auStack_70,&DAT_057055c0,auStack_78);
    Sexy::Insets::Insets(aIStack_28,0xff,0xff,0xff,0x7d);
    Sexy::PrimeTypeface::DrawString_Paragraph
              (pPVar11,param_1,aIStack_18,auStack_70,1,1,aIStack_28,0);
    FUN_05476c50(auStack_70);
    nop();
  }
  pIVar12 = *(Image **)(this + 0x150);
  if (pIVar12 != (Image *)0x0) {
    iVar4 = FUN_043772fc(0x18);
    iVar5 = FUN_043772fc(0x30);
    iVar1 = *(int *)(this + 0x50);
    iVar6 = FUN_043772fc(0x8c);
    Sexy::Graphics::DrawImage(param_1,pIVar12,iVar4,*(int *)(this + 0x138),iVar1 - iVar5,iVar6);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UIStoreItemDisplayer::onADFinished(int) */

void PVZ2UIStoreItemDisplayer::onADFinished(int param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this;
  bool bVar1;
  char cVar2;
  long lVar3;
  ADManager *this_00;
  long *plVar4;
  
  this = (RtWeakPtr<Sexy::ResourceInfo> *)((ulong)(uint)param_1 + 0xd8);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  bVar1 = std::operator==((string *)(lVar3 + 0x88),"ad");
  if (bVar1) {
    this_00 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
    cVar2 = ADManager::CanWatchAD(this_00,(string *)(lVar3 + 0x78));
    if (cVar2 == '\0') {
      plVar4 = *(long **)((ulong)(uint)param_1 + 0xf0);
      (**(code **)(*plVar4 + 0x188))(plVar4,1);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIStoreItemDisplayer::OnChangeButton() */

void __thiscall PVZ2UIStoreItemDisplayer::OnChangeButton(PVZ2UIStoreItemDisplayer *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  MagentoProductProps *this_01;
  PlayerInfo *this_02;
  long lVar4;
  undefined8 uVar5;
  wchar_t *pwVar6;
  long *plVar7;
  PVZ2UIButton *pPVar8;
  float fVar9;
  undefined1 auStack_48 [8];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8);
  local_8 = ___stack_chk_guard;
  this_01 = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  fVar9 = (float)MagentoProductProps::GetPriceInUSD(this_01,false);
  this_02 = (PlayerInfo *)ProfileUtils::Profile();
  Sexy::StrFormat(L"%d",auStack_48,(ulong)(uint)(int)fVar9);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  bVar1 = std::operator==((string *)(lVar4 + 0x78),"gemreturn");
  if (bVar1) {
    cVar2 = PlayerInfo::TestLoginDayEvt(this_02,1);
    if (cVar2 == '\0') {
      plVar7 = *(long **)(this + 0xf0);
      bVar1 = true;
    }
    else {
      iVar3 = FUN_04376eb4(*(undefined4 *)(this_02 + 0x9d4));
      plVar7 = *(long **)(this + 0xf0);
      bVar1 = iVar3 != *(int *)((long)plVar7 + 0xd4) + 1;
    }
    (**(code **)(*plVar7 + 0x188))(plVar7,bVar1);
    PVZ2UIButton::ClearButton(*(PVZ2UIButton **)(this + 0xf0));
    iVar3 = FUN_04376eb4(*(undefined4 *)(this_02 + 0x9d4));
    pPVar8 = *(PVZ2UIButton **)(this + 0xf0);
    if (*(int *)(pPVar8 + 0xd4) + 1 < iVar3) {
      pwVar6 = L"[PLANT_OBTAINED]";
    }
    else {
      pwVar6 = L"[PLANT_OBTAIN]";
    }
    TodStringTranslate(pwVar6);
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22);
    PVZ2UIButton::AddText(pPVar8,aPStack_40,uVar5,0);
    FUN_05476c50(aPStack_40);
    FUN_05476c50(auStack_48);
  }
  else {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    bVar1 = std::operator==((string *)(lVar4 + 0x80),"gacha_diamond");
    if (bVar1) {
      cVar2 = PlayerInfo::canFreeGacha(this_02);
      if (cVar2 == '\0') {
        pwVar6 = L"[STORE_CATEGORY_GACHA_BUTTON_BUY_1_TIMES]";
      }
      else {
        pwVar6 = L"[GACHA_OPEN]";
      }
      TodStringTranslate(pwVar6);
      FUN_054766c8(auStack_48,aPStack_40);
      FUN_05476c50(aPStack_40);
      uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)
                         StoreItemConfig::IMAGE_UI_STORE_COST_GEM);
      PVZ2UIButton::ClearButton(*(PVZ2UIButton **)(this + 0xf0));
      pPVar8 = *(PVZ2UIButton **)(this + 0xf0);
      PVZ2UIImage::PVZ2UIImage(aPStack_40,uVar5,1);
      PVZ2UIButton::AddImage(pPVar8,aPStack_40,0);
      pPVar8 = *(PVZ2UIButton **)(this + 0xf0);
      uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_22);
      PVZ2UIButton::AddText(pPVar8,auStack_48,uVar5,0);
    }
    (**(code **)(**(long **)(this + 0xf0) + 0x188))(*(long **)(this + 0xf0),0);
    FUN_05476c50(auStack_48);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIStoreItemDisplayer::PVZ2UIStoreItemDisplayer(int, Sexy::ButtonListener*) */

void __thiscall
PVZ2UIStoreItemDisplayer::PVZ2UIStoreItemDisplayer
          (PVZ2UIStoreItemDisplayer *this,int param_1,ButtonListener *param_2)

{
  PVZ2UIStoreItemDisplayer *pPVar1;
  undefined4 uVar2;
  PVZ2UIButton *pPVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_80 [8];
  PVZ2UIImage aPStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = this + 0x130;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_0683b530;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xd8));
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  FUN_05476574(this + 0x128);
  FUN_05476574(pPVar1);
  Sexy::Point::Point((Point *)(this + 0x13c));
  FUN_05476574(this + 0x160);
  Sexy::Insets::Insets((Insets *)(this + 0x168));
  Sexy::Insets::Insets((Insets *)(this + 0x17c));
  FUN_05478178(aPStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar3 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar3,param_1,param_2,(wstring *)aPStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0xf0) = pPVar3;
  FUN_05476c50(aPStack_78);
  nop();
  if ((param_1 == 1000) || (param_1 != 2000)) {
    TodStringTranslate(L"[PLANT_BAG_PLANT_INTRO_INFO]");
    FUN_054766c8(pPVar1,aPStack_40);
    FUN_05476c50(aPStack_40);
    pPVar3 = *(PVZ2UIButton **)(this + 0xf0);
    TodStringTranslate(L"[PLANT_OBTAIN]");
    uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_22);
    PVZ2UIButton::AddText(pPVar3,aPStack_40,uVar4,0);
    FUN_05476c50(aPStack_40);
    uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)
                       StoreItemConfig::IMAGE_UI_STORE_PLANTS_BAG);
    *(undefined8 *)(this + 0x150) = uVar4;
  }
  else {
    TodStringTranslate(L"[GEMS_RESTORE_DES]");
    FUN_054766c8(pPVar1,aPStack_40);
    FUN_05476c50(aPStack_40);
    pPVar3 = *(PVZ2UIButton **)(this + 0xf0);
    TodStringTranslate(L"[GEMS_RESTORE_BUTTON_TITLE]");
    uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_22);
    PVZ2UIButton::AddText(pPVar3,aPStack_40,uVar4,0);
    FUN_05476c50(aPStack_40);
    uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)
                       StoreItemConfig::IMAGE_UI_STORE_RECOVER_GEM);
    *(undefined8 *)(this + 0x150) = uVar4;
    TodStringTranslate(L"[GEMS_RESTORE_TITLE]");
    FUN_054766c8(this + 0x128,aPStack_40);
    FUN_05476c50(aPStack_40);
  }
  *(undefined4 *)(this + 0x144) = 2;
  this[0x158] = (PVZ2UIStoreItemDisplayer)0x1;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  this[0x148] = (PVZ2UIStoreItemDisplayer)0x0;
  this[0x149] = (PVZ2UIStoreItemDisplayer)0x0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x14c) = 0;
  uVar2 = FUN_043772fc(0x2c);
  *(undefined4 *)(this + 0x138) = uVar2;
  uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)
                     StoreItemConfig::IMAGE_UI_CARDS_STORE_STORE_COIN_CARD);
  *(undefined8 *)(this + 0x100) = uVar4;
  uVar2 = FUN_043772fc(0x2c);
  *(undefined4 *)(this + 0x138) = uVar2;
  uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)
                     StoreItemConfig::IMAGE_UI_GENERIC_GREENBUYBUTTON);
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)
                     StoreItemConfig::IMAGE_UI_GENERIC_GREENBUYBUTTON_DOWN);
  uVar2 = FUN_043772fc(0x82);
  *(undefined4 *)(this + 0x178) = uVar2;
  pPVar3 = *(PVZ2UIButton **)(this + 0xf0);
  PVZ2UIImage::PVZ2UIImage(aPStack_78,uVar4,5);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,uVar5,5);
  PVZ2UIButton::SetDialogStates(pPVar3,aPStack_78,aPStack_40);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0xf0));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIStoreItemDisplayer::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
PVZ2UIStoreItemDisplayer::DrawAll
          (PVZ2UIStoreItemDisplayer *this,ModalFlags *param_1,Graphics *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  PlayerInfo *this_00;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  Image *pIVar10;
  LotteryResultProgressBar *this_01;
  PurchaseItemWidget *pPVar11;
  float fVar12;
  float fVar13;
  Image *local_40;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  if (*(Image **)(this + 0xf8) == (Image *)0x0) {
    if ((this[0x148] != (PVZ2UIStoreItemDisplayer)0x0) &&
       (this[0x149] == (PVZ2UIStoreItemDisplayer)0x0)) {
      pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)
                                    StoreItemConfig::IMAGE_UI_CARDS_STORE_PROGRESS_BAR_BG);
      Sexy::Graphics::DrawImage
                (param_2,pIVar10,*(int *)(this + 0x168),*(int *)(this + 0x16c),
                 *(int *)(this + 0x170),*(int *)(this + 0x174));
      if (0.0 < *(float *)(this + 0x14c)) {
        Sexy::Insets::Insets
                  (aIStack_28,*(int *)(this + 0x168),*(int *)(this + 0x16c),
                   (int)((float)*(int *)(this + 0x170) * *(float *)(this + 0x14c)),
                   *(int *)(this + 0x174));
        lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)
                           StoreItemConfig::IMAGE_UI_CARDS_STORE_PROGRESS_BAR);
        iVar3 = *(int *)(lVar7 + 0x38);
        fVar12 = *(float *)(this + 0x14c);
        lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)
                           StoreItemConfig::IMAGE_UI_CARDS_STORE_PROGRESS_BAR);
        iVar4 = *(int *)(lVar7 + 0x38);
        fVar13 = *(float *)(this + 0x14c);
        lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)
                           StoreItemConfig::IMAGE_UI_CARDS_STORE_PROGRESS_BAR);
        Sexy::Insets::Insets
                  ((Insets *)aCStack_18,(int)((1.0 - fVar12) * (float)iVar3),0,
                   (int)((float)iVar4 * fVar13),*(int *)(lVar7 + 0x3c));
        pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                     ((CachedUIResourcePtr<Sexy::Image> *)
                                      StoreItemConfig::IMAGE_UI_CARDS_STORE_PROGRESS_BAR);
        Sexy::Graphics::DrawImage(param_2,pIVar10,(TRect *)aIStack_28,(TRect *)aCStack_18);
      }
      this_01 = *(LotteryResultProgressBar **)(this + 0x118);
      if (this_01 != (LotteryResultProgressBar *)0x0) {
        iVar3 = *(int *)(this + 0x168);
        iVar4 = LotteryResultProgressBar::GetCurrentLevel(this_01);
        iVar2 = FUN_043772fc(2);
        Sexy::Graphics::DrawImage
                  (param_2,(Image *)this_01,(iVar3 - iVar4) + iVar2,*(int *)(this + 0x16c));
      }
      iVar3 = FUN_043772fc(2);
      Sexy::Insets::Insets
                (aIStack_28,*(int *)(this + 0x168),iVar3 + *(int *)(this + 0x16c),
                 *(int *)(this + 0x170),iVar3 + *(int *)(this + 0x174));
      uVar8 = PrimeText_PotentialTypeface::Typeface
                        (PrimeText_Game::Typeface_CafeteriaBlack_19_ThickOutline);
      Sexy::Color::Color(aCStack_18,1);
      WriteWordInRect(param_2,this + 0x160,aIStack_28,uVar8,aCStack_18,5,1);
    }
  }
  else {
    Sexy::Graphics::DrawImage
              (param_2,*(Image **)(this + 0xf8),*(int *)(this + 0x17c),*(int *)(this + 0x180),
               *(int *)(this + 0x184),*(int *)(this + 0x188));
  }
  pIVar10 = *(Image **)(this + 0x108);
  if (pIVar10 == (Image *)0x0) {
LAB_0437d6e0:
    pIVar10 = *(Image **)(this + 0x110);
    if (pIVar10 != (Image *)0x0) {
      iVar3 = *(int *)(pIVar10 + 0x38);
      iVar4 = *(int *)(this + 0x50);
      iVar2 = FUN_043772fc(0x23);
      Sexy::Graphics::DrawImage(param_2,pIVar10,iVar4 - iVar3,iVar2);
    }
  }
  else {
    iVar3 = *(int *)(pIVar10 + 0x38);
    iVar4 = *(int *)(this + 0x50);
    iVar2 = FUN_043772fc(0x23);
    Sexy::Graphics::DrawImage(param_2,pIVar10,iVar4 - iVar3,iVar2);
    if (*(long *)(this + 0x108) == 0) goto LAB_0437d6e0;
  }
  if (*(long *)(this + 0x120) == 0) goto LAB_0437d3dc;
  FUN_05476574(auStack_30);
  this_00 = (PlayerInfo *)ProfileUtils::Profile();
  lVar7 = PlayerInfo::getFreeGachaLeftTime(this_00);
  cVar1 = PlayerInfo::canFreeGacha(this_00);
  if ((cVar1 == '\0') && (iVar3 = FUN_04376eb0(*(undefined4 *)(this_00 + 0x40)), iVar3 != 0x17)) {
    uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)
                       StoreItemConfig::IMAGE_UI_STORE_GACHA_TIMING_FREE);
    *(undefined8 *)(this + 0x120) = uVar8;
    lVar9 = LawnApp::GetRealServerTime(gLawnApp);
    LawnApp::GetGachaConfig();
    if (lVar9 < 1) {
      pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)
                                    StoreItemConfig::IMAGE_UI_STORE_GACHA_NO_NETWORK);
      iVar3 = *(int *)(this + 0x50);
      *(Image **)(this + 0x120) = pIVar10;
      iVar4 = *(int *)(pIVar10 + 0x38);
      iVar2 = FUN_043772fc(0x50);
      iVar5 = FUN_043772fc(0xf0);
      Sexy::Graphics::DrawImage(param_2,pIVar10,(iVar3 - iVar4) - iVar2,iVar5);
      goto LAB_0437d3c4;
    }
    iVar3 = (int)(lVar7 / 0x3c);
    Sexy::StrFormat(L"%d:%02d:%02d",aCStack_18,lVar7 / 0xe10 & 0xffffffff,
                    (ulong)(uint)(iVar3 + (int)((lVar7 / 0x3c) / 0x3c) * -0x3c),
                    (ulong)(uint)((int)lVar7 + iVar3 * -0x3c));
    FUN_054766c8(auStack_30,aCStack_18);
    FUN_05476c50(aCStack_18);
    if (this[0x198] == (PVZ2UIStoreItemDisplayer)0x0) {
      local_40 = *(Image **)(this + 0x120);
      iVar3 = *(int *)(this + 0x50) - *(int *)(local_40 + 0x38);
    }
    else {
      iVar3 = FUN_043772fc(0x1e);
      local_40 = *(Image **)(this + 0x120);
      iVar3 = (iVar3 + *(int *)(this + 0x50)) - *(int *)(local_40 + 0x38);
    }
    iVar4 = FUN_043772fc(0x50);
    iVar2 = FUN_043772fc(0xf0);
    Sexy::Graphics::DrawImage(param_2,local_40,iVar3 - iVar4,iVar2);
    iVar3 = FUN_043772fc(0xfffffff1);
    iVar4 = FUN_043772fc(0x5a);
    Sexy::Insets::Insets(aIStack_28,iVar3,iVar4,*(int *)(this + 0x50),*(int *)(this + 0x54));
    uVar8 = PrimeText_PotentialTypeface::Typeface
                      (PrimeText_Game::Typeface_CafeteriaBlack_19_ThickOutline);
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_2,auStack_30,aIStack_28,uVar8,aCStack_18,5,1);
    cVar1 = PlayerInfo::isFirstDiamondGacha(this_00);
  }
  else {
    pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)
                                  StoreItemConfig::IMAGE_UI_STORE_GACHA_FREE_GACHA);
    *(Image **)(this + 0x120) = pIVar10;
    if (this[0x198] == (PVZ2UIStoreItemDisplayer)0x0) {
      iVar3 = FUN_043772fc(0xf0);
      Sexy::Graphics::DrawImage
                (param_2,pIVar10,
                 (int)((float)(*(int *)(this + 0x50) - *(int *)(pIVar10 + 0x38)) * 0.5),iVar3);
    }
    else {
      iVar2 = FUN_043772fc(0x1e);
      iVar3 = *(int *)(this + 0x50);
      iVar4 = *(int *)(pIVar10 + 0x38);
      iVar5 = FUN_043772fc(0x5a);
      iVar6 = FUN_043772fc(0xf0);
      Sexy::Graphics::DrawImage(param_2,pIVar10,((iVar2 + iVar3) - iVar4) - iVar5,iVar6);
    }
LAB_0437d3c4:
    cVar1 = PlayerInfo::isFirstDiamondGacha(this_00);
  }
  if (cVar1 == '\0') {
    pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)
                                  StoreItemConfig::IMAGE_UI_STORE_GACHA_FIRST_RECHARGE);
    iVar3 = *(int *)(this + 0x50);
    lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)
                       StoreItemConfig::IMAGE_UI_STORE_GACHA_FIRST_RECHARGE);
    iVar4 = *(int *)(lVar7 + 0x38);
    iVar2 = FUN_043772fc(0x78);
    Sexy::Graphics::DrawImage(param_2,pIVar10,iVar3 - iVar4,iVar2);
  }
  FUN_05476c50(auStack_30);
LAB_0437d3dc:
  pPVar11 = *(PurchaseItemWidget **)(this + 0xe8);
  if (pPVar11 != (PurchaseItemWidget *)0x0) {
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8))
    ;
    pIVar10 = (Image *)PurchaseItemWidget::GetGachaFlagImage(pPVar11,(string *)(lVar7 + 0x80));
    if (pIVar10 != (Image *)0x0) {
      iVar3 = *(int *)(pIVar10 + 0x38);
      iVar4 = *(int *)(this + 0x50);
      iVar2 = FUN_043772fc(0);
      Sexy::Graphics::DrawImage(param_2,pIVar10,iVar4 - iVar3,iVar2);
    }
    cVar1 = LawnApp::HasSpecialGemOffer(gLawnApp);
    if (cVar1 != '\0') {
      pPVar11 = *(PurchaseItemWidget **)(this + 0xe8);
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
      cVar1 = PurchaseItemWidget::HasGemSpecialOffer(pPVar11,(string *)(lVar7 + 0x10));
      if (cVar1 != '\0') {
        pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                     ((CachedUIResourcePtr<Sexy::Image> *)
                                      StoreItemConfig::IMAGE_UI_CARDS_STORE_BESTDEAL_RIBBON);
        iVar3 = *(int *)(this + 0x50);
        lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)
                           StoreItemConfig::IMAGE_UI_CARDS_STORE_BESTDEAL_RIBBON);
        iVar4 = *(int *)(lVar7 + 0x38);
        iVar2 = FUN_043772fc(3);
        iVar5 = FUN_043772fc(0x23);
        Sexy::Graphics::DrawImage(param_2,pIVar10,(iVar3 - iVar4) + iVar2,iVar5);
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIStoreItemDisplayer::PVZ2UIStoreItemDisplayer(Sexy::RtWeakPtr<MagentoProductProps>, int,
   Sexy::ButtonListener*) */

void __thiscall
PVZ2UIStoreItemDisplayer::PVZ2UIStoreItemDisplayer
          (PVZ2UIStoreItemDisplayer *this,RtMixedPtrBase *param_2,int param_3,
          ButtonListener *param_4)

{
  PVZ2UIStoreItemDisplayer *pPVar1;
  PVZ2UIStoreItemDisplayer *pPVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  byte bVar6;
  bool bVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined8 uVar11;
  long lVar12;
  PVZ2UIGameObjectCard *pPVar13;
  undefined1 *this_02;
  PurchaseItemWidget *pPVar14;
  MagentoProductProps *pMVar15;
  ActivityConfig *pAVar16;
  bool *pbVar17;
  undefined8 uVar18;
  PVZ2UIButton *pPVar19;
  long lVar20;
  undefined8 uVar21;
  wchar_t *pwVar22;
  ResourceInfo *pRVar23;
  ADManager *this_03;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_04;
  PurchaseBroker *this_05;
  MonthlyCardMgr *pMVar24;
  string *psVar25;
  string *extraout_x1;
  string *extraout_x1_00;
  ulong uVar26;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *this_06;
  long *plVar27;
  undefined8 uVar28;
  float fVar29;
  undefined1 local_120 [8];
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined1 auStack_d8 [7];
  char local_d1;
  string asStack_d0 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_c8 [8];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  Delegate0 aDStack_a8 [48];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  RtWeakPtr<Sexy::SoundResource> local_40 [8];
  undefined8 uStack_38;
  undefined8 local_30;
  long local_8;
  
  pPVar1 = this + 0x130;
  pPVar2 = this + 0x128;
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  this_06 = (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xd8);
  *(undefined ***)this = &PTR_GetClass_0683b530;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(this_06)
  ;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  FUN_05476574(pPVar2);
  FUN_05476574(pPVar1);
  Sexy::Point::Point((Point *)(this + 0x13c));
  FUN_05476574(this + 0x160);
  Sexy::Insets::Insets((Insets *)(this + 0x168));
  Sexy::Insets::Insets((Insets *)(this + 0x17c));
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  this[0x158] = (PVZ2UIStoreItemDisplayer)0x0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this_06,(RtWeakPtr *)param_2);
  this[0x148] = (PVZ2UIStoreItemDisplayer)0x0;
  *(undefined4 *)(this + 0x144) = 2;
  this[0x149] = (PVZ2UIStoreItemDisplayer)0x0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 0x14c) = 0;
  std::string::string(asStack_d0,"");
  nop();
  *(undefined8 *)(this + 0x120) = 0;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  cVar4 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if (cVar4 != '\0') {
    lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    bVar5 = std::operator==((string *)(lVar12 + 0x78),"plant");
    if ((bVar5) && (lVar12 = LawnApp::GetActivityConfig(), lVar12 != 0)) {
      pAVar16 = (ActivityConfig *)LawnApp::GetActivityConfig();
      lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      cVar4 = ActivityConfig::IsPlantOnSale(pAVar16,(string *)(lVar12 + 0x80));
      if (cVar4 != '\0') {
        psVar25 = (string *)LawnApp::GetActivityConfig();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
        ActivityConfig::GetPlantImageOnSale(psVar25);
LAB_04383780:
        FUN_05474278(asStack_d0,local_40);
        std::string::~string((string *)local_40);
      }
    }
    else {
      lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      bVar5 = std::operator==((string *)(lVar12 + 0x78),"avatar");
      if ((bVar5) && (lVar12 = LawnApp::GetActivityConfig(), lVar12 != 0)) {
        pAVar16 = (ActivityConfig *)LawnApp::GetActivityConfig();
        lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
        cVar4 = ActivityConfig::IsAvatarOnSale(pAVar16,(string *)(lVar12 + 0x80));
        if (cVar4 != '\0') {
          psVar25 = (string *)LawnApp::GetActivityConfig();
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
          ActivityConfig::GetAvatarImageOnSale(psVar25);
          FUN_05474278(asStack_d0,local_40);
          std::string::~string((string *)local_40);
        }
        bVar6 = Sexy::RtMixedPtrBase::IsValid(param_2);
        if ((this_01 == (PlayerInfo *)0x0) < bVar6) {
          lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
          cVar4 = PlayerInfo::GetIsPlantUnlocked(this_01,(string *)(lVar12 + 0x80));
          if (cVar4 == '\0') {
            uVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)
                                StoreItemConfig::IMAGE_UI_CARDS_STORE_NONE_PLANTS);
            *(undefined8 *)(this + 0x110) = uVar11;
          }
        }
        else {
          *(undefined8 *)(this + 0x110) = 0;
        }
      }
      else {
        lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
        bVar5 = std::operator==((string *)(lVar12 + 0x78),"gacha");
        if (bVar5) {
          lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
          bVar5 = std::operator==((string *)(lVar12 + 0x80),"gacha_diamond");
          if (bVar5) {
            uVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)
                                StoreItemConfig::IMAGE_UI_STORE_GACHA_TIMING_FREE);
            *(undefined8 *)(this + 0x120) = uVar11;
            goto LAB_04383618;
          }
        }
        pAVar16 = (ActivityConfig *)LawnApp::GetActivityConfig();
        lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
        cVar4 = ActivityConfig::IsGeneralSale(pAVar16,(string *)(lVar12 + 0x10));
        if (cVar4 != '\0') {
          pAVar16 = (ActivityConfig *)LawnApp::GetActivityConfig();
          lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
          cVar4 = ActivityConfig::IsGeneralSaleOnDay(pAVar16,(string *)(lVar12 + 0x10));
          if (cVar4 != '\0') {
            psVar25 = (string *)LawnApp::GetActivityConfig();
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
            ActivityConfig::GetGeneralSale(psVar25);
            goto LAB_04383780;
          }
        }
      }
    }
LAB_04383618:
    cVar4 = Sexy::RtMixedPtrBase::IsValid(param_2);
    if ((cVar4 != '\0') && (bVar5 = std::operator==(asStack_d0,""), !bVar5)) {
      pAVar16 = (ActivityConfig *)LawnApp::GetActivityConfig();
      lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      cVar4 = ActivityConfig::IsGeneralSaleFirstAward(pAVar16,(string *)(lVar12 + 0x10));
      if (cVar4 == '\0') {
LAB_043836c4:
        LawnApp::GetUIImageInfoFromStringId(gLawnApp,asStack_d0);
        Sexy::ResourceInfoTypes::FontRes::GetFont();
        pRVar23 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_40);
        *(ResourceInfo **)(this + 0x108) = pRVar23;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_40);
        goto LAB_04382c80;
      }
      lVar12 = LawnApp::GetActivityConfig();
      if (lVar12 != 0) {
        pAVar16 = (ActivityConfig *)LawnApp::GetActivityConfig();
        cVar4 = ActivityConfig::IsFirstRechargeAward(pAVar16);
        if (cVar4 != '\0') {
          lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
          cVar4 = PlayerInfo::IsGetRechargeDouble(this_01,(string *)(lVar12 + 0x10));
          if (cVar4 == '\0') goto LAB_043836c4;
        }
      }
    }
    *(undefined8 *)(this + 0x108) = 0;
  }
LAB_04382c80:
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_c8);
  cVar4 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_06);
  if (cVar4 != '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
    MagentoProductProps::GetLocalizedShortDescription();
    Sexy::UTF8StringToWString((Sexy *)local_40,extraout_x1);
    TodStringTranslate((wstring *)&local_78);
    FUN_054766c8(pPVar2,&local_c0);
    FUN_05476c50(&local_c0);
    FUN_05476c50((wstring *)&local_78);
    std::string::~string((string *)local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
    MagentoProductProps::GetLocalizedDescription();
    Sexy::UTF8StringToWString((Sexy *)local_40,extraout_x1_00);
    TodStringTranslate((wstring *)&local_78);
    FUN_054766c8(pPVar1,&local_c0);
    FUN_05476c50(&local_c0);
    FUN_05476c50((wstring *)&local_78);
    std::string::~string((string *)local_40);
    HotUIWidget::GetPtr();
    lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_40);
    bVar5 = std::operator==((string *)(lVar12 + 0x78),"plant");
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_40);
    if (bVar5) {
      uVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)
                          StoreItemConfig::IMAGE_UI_CARDS_STORE_ICON_FRAGMENT);
      *(undefined8 *)(this + 0x118) = uVar11;
    }
    else {
      HotUIWidget::GetPtr();
      lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_40);
      bVar5 = std::operator==((string *)(lVar12 + 0x78),"avatar");
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_40);
      if (bVar5) {
        uVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                           ((CachedUIResourcePtr<Sexy::Image> *)
                            StoreItemConfig::IMAGE_UI_CARDS_STORE_AVATAR_ICON);
        *(undefined8 *)(this + 0x118) = uVar11;
      }
      else {
        HotUIWidget::GetPtr();
        lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_40)
        ;
        bVar5 = std::operator==((string *)(lVar12 + 0x78),"plant_piece");
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_40);
        if (bVar5) {
          lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
          Sexy::StrFormat(L"X%d",local_40,(ulong)*(uint *)(lVar12 + 0x90));
          thunk_FUN_05477668(pPVar1,local_40);
          FUN_05476c50(local_40);
        }
        else {
          HotUIWidget::GetPtr();
          lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)local_40);
          bVar5 = std::operator==((string *)(lVar12 + 0x78),"gemreturn");
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_40)
          ;
          if (bVar5) {
            pwVar22 = (wchar_t *)FUN_054766ec(pPVar1);
            pMVar15 = (MagentoProductProps *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
            fVar29 = (float)MagentoProductProps::GetPriceInUSD(pMVar15,false);
            Sexy::StrFormat(pwVar22,local_40,(ulong)(uint)(int)fVar29);
            FUN_054766c8(pPVar1,local_40);
            FUN_05476c50(local_40);
          }
        }
      }
    }
  }
  uVar8 = FUN_043772fc(0x3a);
  *(undefined4 *)(this + 0x138) = uVar8;
  cVar4 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_06);
  if (cVar4 == '\0') {
    uVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)
                        StoreItemConfig::IMAGE_UI_CARDS_STORE_STORE_COMINGSOON_CARD);
    *(undefined8 *)(this + 0x100) = uVar11;
    TodStringTranslate(L"[STORE_COMING_SOON]");
    FUN_054766c8(pPVar2,local_40);
    FUN_05476c50(local_40);
    goto LAB_04382cf8;
  }
  lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
  bVar5 = std::operator==((string *)(lVar12 + 0x78),"coin");
  if (bVar5) {
LAB_04382f4c:
    this_02 = StoreItemConfig::IMAGE_UI_CARDS_STORE_STORE_COIN_CARD;
LAB_04382f54:
    uVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)this_02);
    *(undefined8 *)(this + 0x100) = uVar11;
    uVar8 = FUN_043772fc(0x2c);
    *(undefined4 *)(this + 0x138) = uVar8;
    cVar4 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_c8);
    if (cVar4 == '\0') goto LAB_04382f78;
LAB_04382d08:
    lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
    bVar5 = std::operator==((string *)(lVar12 + 0x78),"avatar");
    if (bVar5) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(local_40,(RtWeakPtrBase *)a_Stack_c8);
      pPVar13 = ::operator_new(0x160);
      PVZ2UIGameObjectCard::PVZ2UIGameObjectCard(pPVar13,local_40,1,0,0,1);
      *(PVZ2UIGameObjectCard **)(this + 0xe0) = pPVar13;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_40);
    }
    else {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(local_40,(RtWeakPtrBase *)a_Stack_c8);
      pPVar13 = ::operator_new(0x160);
      PVZ2UIGameObjectCard::PVZ2UIGameObjectCard(pPVar13,local_40,1,0xffffffff,0,1);
      *(PVZ2UIGameObjectCard **)(this + 0xe0) = pPVar13;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_40);
    }
    NewYearGoodsSelectItem::SelectItem(*(NewYearGoodsSelectItem **)(this + 0xe0),false);
    PVZ2UIGameObjectCard::SetShowLock(*(PVZ2UIGameObjectCard **)(this + 0xe0),false);
    PVZ2UIGameObjectCard::SetShowPlantPrice(*(PVZ2UIGameObjectCard **)(this + 0xe0),false);
    PVZ2UIGameObjectCard::SetItemOffset(*(PVZ2UIGameObjectCard **)(this + 0xe0),0.75);
    Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0xe0));
LAB_04382da4:
    bVar5 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this_06);
  }
  else {
    lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
    bVar5 = std::operator==((string *)(lVar12 + 0x78),"fuel");
    if (bVar5) {
LAB_0438344c:
      this_02 = StoreItemConfig::IMAGE_UI_DIALOG_ASSET_BG_BLUE;
      goto LAB_04382f54;
    }
    lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
    bVar5 = std::operator==((string *)(lVar12 + 0x78),"pvz1mode_time_energy");
    if (bVar5) goto LAB_0438344c;
    lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
    bVar5 = std::operator==((string *)(lVar12 + 0x78),"mystery_crystal");
    if (bVar5) goto LAB_0438344c;
    lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
    bVar5 = std::operator==((string *)(lVar12 + 0x78),"battlezTicket");
    if (bVar5) goto LAB_0438344c;
    lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
    bVar5 = std::operator==((string *)(lVar12 + 0x78),"pvpCoin");
    if (bVar5) {
      this_02 = StoreItemConfig::IMAGE_UI_PVP_STORE_BACKGROUND;
      goto LAB_04382f54;
    }
    lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
    bVar5 = std::operator==((string *)(lVar12 + 0x78),"stamina");
    if (bVar5) goto LAB_04383f74;
    lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
    bVar5 = std::operator==((string *)(lVar12 + 0x78),"gem");
    if (bVar5) goto LAB_0438344c;
    lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
    bVar5 = std::operator==((string *)(lVar12 + 0x78),"sun");
    if (bVar5) goto LAB_04382f4c;
    lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
    bVar5 = std::operator==((string *)(lVar12 + 0x78),"gift");
    if (bVar5) {
LAB_04383e50:
      this_02 = StoreItemConfig::IMAGE_UI_DIALOG_ASSET_BG_PURPLE;
      goto LAB_04382f54;
    }
    lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
    bVar5 = std::operator==((string *)(lVar12 + 0x78),"plant_gift");
    if (bVar5) goto LAB_04383e50;
    lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
    bVar5 = std::operator==((string *)(lVar12 + 0x78),"gacha");
    if (bVar5) {
      this_02 = StoreItemConfig::IMAGE_UI_CARDS_STORE_STORE_UPGRADE_CARD;
      goto LAB_04382f54;
    }
    lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
    bVar5 = std::operator==((string *)(lVar12 + 0x78),"redpack");
    if (bVar5) {
LAB_04383f74:
      this_02 = StoreItemConfig::IMAGE_UI_DIALOG_ASSET_BG_GREEN;
      goto LAB_04382f54;
    }
    lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
    bVar5 = std::operator==((string *)(lVar12 + 0x78),"zongzi");
    if (bVar5) goto LAB_04383f74;
    lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
    bVar5 = std::operator==((string *)(lVar12 + 0x78),"plant");
    if (bVar5) {
      cVar4 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_06);
      if ((cVar4 != '\0') &&
         (lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_06), 0 < *(int *)(lVar12 + 0x90)
         )) {
        this[0x148] = (PVZ2UIStoreItemDisplayer)0x1;
        lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
        iVar9 = PlayerInfo::GetPlantPieceCount(this_01,(string *)(lVar12 + 0x80),false);
        lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
        fVar29 = (float)NEON_fminnm((float)iVar9 / (float)*(int *)(lVar12 + 0x90),0x3f800000);
        *(float *)(this + 0x14c) = fVar29;
        if (fVar29 < 1.0) {
          lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
          uVar26 = PlayerInfo::GetPlantPieceCount(this_01,(string *)(lVar12 + 0x80),false);
          uVar26 = uVar26 & 0xffffffff;
        }
        else {
LAB_04384598:
          lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
          uVar26 = (ulong)*(uint *)(lVar12 + 0x90);
        }
LAB_043845a0:
        lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
        Sexy::StrFormat(L"%d/%d",local_40,uVar26,(ulong)*(uint *)(lVar12 + 0x90));
        FUN_054766c8(this + 0x160,local_40);
        FUN_05476c50(local_40);
      }
LAB_04384440:
      uVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)
                          StoreItemConfig::IMAGE_UI_DIALOG_ASSET_BG_GREEN);
      *(undefined8 *)(this + 0x100) = uVar11;
      psVar25 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar25);
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)a_Stack_c8,(RtWeakPtrBase *)local_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_40);
      uVar8 = FUN_043772fc(0x2c);
      *(undefined4 *)(this + 0x138) = uVar8;
    }
    else {
      lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
      bVar5 = std::operator==((string *)(lVar12 + 0x78),"gameupgrade");
      if (bVar5) {
        uVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                           ((CachedUIResourcePtr<Sexy::Image> *)
                            StoreItemConfig::IMAGE_UI_CARDS_STORE_STORE_UPGRADE_CARD);
        *(undefined8 *)(this + 0x100) = uVar11;
        psVar25 = (string *)
                  Sexy::LazySingleton<ObjectTypeDirectory<GameFeatureType>>::GetInstancePtr();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
        ObjectTypeDirectory<GameFeatureType>::GetTypeFromTypeName(psVar25);
        Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                  ((RtWeakPtr<SpartanBambooMatrixSystem> *)a_Stack_c8,(RtWeakPtrBase *)local_40);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_40);
        uVar8 = FUN_043772fc(0x2c);
        *(undefined4 *)(this + 0x138) = uVar8;
      }
      else {
        lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
        bVar5 = std::operator==((string *)(lVar12 + 0x78),"bundle");
        if (!bVar5) {
          lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
          bVar5 = std::operator==((string *)(lVar12 + 0x78),"avatar");
          if (!bVar5) {
            lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
            bVar5 = std::operator==((string *)(lVar12 + 0x78),"plant_piece");
            if (!bVar5) {
              lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
              bVar5 = std::operator==((string *)(lVar12 + 0x78),"avatar_piece");
              if (!bVar5) {
                lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
                bVar5 = std::operator==((string *)(lVar12 + 0x78),"gemreturn");
                if (bVar5) goto LAB_04382f4c;
                lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
                bVar5 = std::operator==((string *)(lVar12 + 0x78),"accessory_piece");
                if (!bVar5) {
                  lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
                  bVar5 = std::operator==((string *)(lVar12 + 0x78),"avatar_ticket");
                  if (bVar5) goto LAB_04383f74;
                  goto LAB_04382cf8;
                }
              }
            }
            psVar25 = (string *)
                      Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
            ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar25);
            Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                      ((RtWeakPtr<SpartanBambooMatrixSystem> *)a_Stack_c8,(RtWeakPtrBase *)local_40)
            ;
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)local_40);
            goto LAB_04383f74;
          }
          cVar4 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_06);
          if ((cVar4 != '\0') &&
             (lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_06),
             0 < *(int *)(lVar12 + 0x90))) {
            this[0x148] = (PVZ2UIStoreItemDisplayer)0x1;
            lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
            iVar9 = PlayerInfo::GetAvatarPiecesCount(this_01,lVar12 + 0x80,0,0);
            lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
            fVar29 = (float)NEON_fminnm((float)iVar9 / (float)*(int *)(lVar12 + 0x90),0x3f800000);
            *(float *)(this + 0x14c) = fVar29;
            if (1.0 <= fVar29) goto LAB_04384598;
            lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
            uVar26 = PlayerInfo::GetAvatarPiecesCount(this_01,lVar12 + 0x80,0,0);
            uVar26 = uVar26 & 0xffffffff;
            goto LAB_043845a0;
          }
          goto LAB_04384440;
        }
        uVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                           ((CachedUIResourcePtr<Sexy::Image> *)
                            StoreItemConfig::IMAGE_UI_DIALOG_ASSET_BG_BLUE);
        *(undefined8 *)(this + 0x100) = uVar11;
      }
    }
LAB_04382cf8:
    cVar4 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_c8);
    if (cVar4 != '\0') goto LAB_04382d08;
LAB_04382f78:
    cVar4 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_06);
    if (cVar4 == '\0') goto LAB_04382da4;
    lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
    bVar5 = std::operator==((string *)(lVar12 + 0x78),"gemreturn");
    if (bVar5) {
      lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
      uVar8 = *(undefined4 *)(lVar12 + 0x90);
      lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
      *(int *)(lVar12 + 0x90) = param_3;
      pRVar23 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_06);
      pPVar14 = ::operator_new(0x118);
      PurchaseItemWidget::PurchaseItemWidget(pPVar14,(MagentoProductProps *)pRVar23);
      *(PurchaseItemWidget **)(this + 0xe8) = pPVar14;
      lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
      pPVar14 = *(PurchaseItemWidget **)(this + 0xe8);
      *(undefined4 *)(lVar12 + 0x90) = uVar8;
    }
    else {
      pRVar23 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_06);
      pPVar14 = ::operator_new(0x118);
      PurchaseItemWidget::PurchaseItemWidget(pPVar14,(MagentoProductProps *)pRVar23);
      *(PurchaseItemWidget **)(this + 0xe8) = pPVar14;
    }
    Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)pPVar14);
    bVar5 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this_06);
  }
  if (!bVar5) goto LAB_04382db4;
  *(undefined8 *)(this + 0xf8) = 0;
  lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
  bVar5 = std::operator==((string *)(lVar12 + 0x88),"stone");
  if (bVar5) {
    lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
    PlayerInfo::CheckStoneStoreRec
              (this_01,(string *)(lVar12 + 0x10),(bool *)&local_78,(bool *)local_40);
    if (local_40[0] == (RtWeakPtr<Sexy::SoundResource>)0x0) {
      lVar12 = *(long *)(this + 0xf8);
    }
    else {
      lVar12 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)StoreItemConfig::IMAGE_UI_STORE_OBTAIN
                         );
      *(long *)(this + 0xf8) = lVar12;
    }
    if (lVar12 != 0) goto LAB_04382db4;
    goto LAB_0438307c;
  }
  if (*(long *)(this + 0xf8) != 0) goto LAB_04382db4;
  lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
  bVar5 = std::operator==((string *)(lVar12 + 0x78),"plant");
  if (bVar5) {
    pRVar23 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_06);
    cVar4 = PlayerInfo::OwnsItemContainedInProps(this_01,(MagentoProductProps *)pRVar23);
    if (cVar4 == '\0') goto LAB_0438305c;
LAB_04383980:
    uVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)StoreItemConfig::IMAGE_UI_STORE_OBTAIN);
    *(undefined8 *)(this + 0xf8) = uVar11;
    goto LAB_04382db4;
  }
LAB_0438305c:
  lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
  bVar5 = std::operator==((string *)(lVar12 + 0x78),"avatar");
  if (bVar5) {
    pRVar23 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_06);
    cVar4 = PlayerInfo::OwnsItemContainedInProps(this_01,(MagentoProductProps *)pRVar23);
    if (cVar4 != '\0') goto LAB_04383980;
  }
LAB_0438307c:
  local_d1 = '\0';
  pMVar15 = (MagentoProductProps *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
  fVar29 = (float)MagentoProductProps::GetPriceInUSD(pMVar15,false);
  lVar12 = LawnApp::GetActivityConfig();
  if (lVar12 != 0) {
    lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
    bVar5 = std::operator==((string *)(lVar12 + 0x78),"avatar");
    if (!bVar5) {
      lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
      bVar5 = std::operator==((string *)(lVar12 + 0x78),"plant");
      if (!bVar5) goto LAB_04383120;
    }
    lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
    bVar5 = std::operator==((string *)(lVar12 + 0x78),"avatar");
    pAVar16 = (ActivityConfig *)LawnApp::GetActivityConfig();
    lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
    iVar9 = ActivityConfig::GetActivityPrice(pAVar16,(string *)(lVar12 + 0x80),bVar5,(int)fVar29);
    fVar29 = (float)iVar9;
  }
LAB_04383120:
  pbVar17 = (bool *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
  MagentoProductProps::GetLocalizedPriceString(pbVar17);
  FUN_05476c50(local_40);
  Sexy::StrFormat(L"%d",&local_c0,(ulong)(uint)(int)fVar29);
  uVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)
                      StoreItemConfig::IMAGE_UI_GENERIC_GREENBUYBUTTON);
  uVar18 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)
                      StoreItemConfig::IMAGE_UI_GENERIC_GREENBUYBUTTON_DOWN);
  pMVar15 = (MagentoProductProps *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
  iVar9 = MagentoProductProps::GetPurchaseType(pMVar15);
  if (iVar9 == 0) {
    lVar12 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)StoreItemConfig::IMAGE_UI_STORE_COST_GEM
                       );
LAB_04383198:
    FUN_05478178((PVZ2UIImage *)&local_78,&DAT_056f11a8,auStack_d8);
    Sexy::Color::Color((Color *)local_40,1);
    pPVar19 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton(pPVar19,param_3,param_4,(wstring *)&local_78,(Color *)local_40);
    *(PVZ2UIButton **)(this + 0xf0) = pPVar19;
    FUN_05476c50((PVZ2UIImage *)&local_78);
    nop();
    if (lVar12 == 0) goto LAB_04383b90;
    lVar20 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
    bVar5 = std::operator==((string *)(lVar20 + 0x78),"plant");
    if (bVar5) {
LAB_04383244:
      pMVar15 = (MagentoProductProps *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
      iVar9 = MagentoProductProps::GetPurchaseType(pMVar15);
      if (iVar9 != 0) goto LAB_04383a84;
      pPVar19 = *(PVZ2UIButton **)(this + 0xf0);
      TodStringTranslate(L"[PLANT_OBTAIN]");
      uVar21 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22);
      PVZ2UIButton::AddText(pPVar19,local_40,uVar21,0);
      FUN_05476c50(local_40);
    }
    else {
      lVar20 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
      bVar5 = std::operator==((string *)(lVar20 + 0x78),"gift");
      if (bVar5) goto LAB_04383244;
      lVar20 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
      bVar5 = std::operator==((string *)(lVar20 + 0x78),"plant_gift");
      if (bVar5) goto LAB_04383244;
LAB_04383a84:
      lVar20 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
      bVar5 = std::operator==((string *)(lVar20 + 0x78),"avatar");
      if (bVar5) {
        pPVar19 = *(PVZ2UIButton **)(this + 0xf0);
        TodStringTranslate(L"[PLANT_OBTAIN]");
        uVar21 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22);
        PVZ2UIButton::AddText(pPVar19,local_40,uVar21,0);
        FUN_05476c50(local_40);
        (**(code **)(**(long **)(this + 0xf0) + 0x188))
                  (*(long **)(this + 0xf0),*(float *)(this + 0x14c) < 1.0);
      }
      else {
        lVar20 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
        bVar5 = std::operator==((string *)(lVar20 + 0x78),"gacha");
        if (bVar5) {
          lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
          bVar5 = std::operator==((string *)(lVar12 + 0x80),"gacha_diamond");
          if (bVar5) {
            cVar4 = PlayerInfo::canFreeGacha(this_01);
            if ((cVar4 == '\0') &&
               (iVar9 = FUN_04376eb0(*(undefined4 *)(this_01 + 0x40)), iVar9 != 0x17)) {
              pwVar22 = L"[STORE_CATEGORY_GACHA_BUTTON_BUY_1_TIMES]";
              goto LAB_04383d64;
            }
            TodStringTranslate(L"[GACHA_OPEN]");
            FUN_054766c8(&local_c0,local_40);
            FUN_05476c50(local_40);
          }
          else {
            pwVar22 = L"[STORE_CATEGORY_GACHA_BUTTON_BUY_10_TIMES]";
LAB_04383d64:
            TodStringTranslate(pwVar22);
            FUN_054766c8(&local_c0,local_40);
            FUN_05476c50(local_40);
            lVar12 = CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)
                                StoreItemConfig::IMAGE_UI_STORE_COST_GEM);
            if (lVar12 != 0) {
              pPVar19 = *(PVZ2UIButton **)(this + 0xf0);
              PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,lVar12,1);
              PVZ2UIButton::AddImage(pPVar19,local_40,0);
            }
          }
          PVZ2UIButton::AddText
                    (*(PVZ2UIButton **)(this + 0xf0),&local_c0,
                     PrimeText_Game::Typeface_CafeteriaBlack_28_Outline,0);
        }
        else {
          pPVar19 = *(PVZ2UIButton **)(this + 0xf0);
          PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,lVar12,1);
          PVZ2UIButton::AddImage(pPVar19,local_40,0);
          PVZ2UIButton::AddText
                    (*(PVZ2UIButton **)(this + 0xf0),&local_c0,
                     PrimeText_Game::Typeface_CafeteriaBlack_28_Outline,bVar5);
        }
      }
    }
    lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
    bVar5 = std::operator==((string *)(lVar12 + 0x78),"gacha");
    if (bVar5) {
      uVar8 = FUN_043772fc(0x8c);
      *(undefined4 *)(this + 0x178) = uVar8;
    }
    else {
      uVar8 = FUN_043772fc(0x82);
      *(undefined4 *)(this + 0x178) = uVar8;
    }
  }
  else {
    if (iVar9 == 2) {
      lVar12 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)
                          StoreItemConfig::IMAGE_UI_STORE_COST_COIN);
      goto LAB_04383198;
    }
    FUN_05478178((PVZ2UIImage *)&local_78,&DAT_056f11a8,auStack_d8);
    Sexy::Color::Color((Color *)local_40,1);
    pPVar19 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton(pPVar19,param_3,param_4,(wstring *)&local_78,(Color *)local_40);
    *(PVZ2UIButton **)(this + 0xf0) = pPVar19;
    FUN_05476c50((PVZ2UIImage *)&local_78);
    nop();
LAB_04383b90:
    lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
    bVar5 = std::operator==((string *)(lVar12 + 0x78),"gemreturn");
    if (bVar5) {
      cVar4 = PlayerInfo::TestLoginDayEvt(this_01,1);
      if (cVar4 == '\0') {
        plVar27 = *(long **)(this + 0xf0);
        iVar9 = *(int *)((long)plVar27 + 0xd4);
LAB_04383be4:
        if (iVar9 == 0) {
          iVar9 = FUN_04376eb4(*(undefined4 *)(this_01 + 0x9d4));
          bVar5 = iVar9 != 0;
        }
        else {
          bVar5 = true;
        }
      }
      else {
        iVar10 = FUN_04376eb4(*(undefined4 *)(this_01 + 0x9d4));
        plVar27 = *(long **)(this + 0xf0);
        iVar9 = *(int *)((long)plVar27 + 0xd4);
        if (iVar10 != iVar9 + 1) goto LAB_04383be4;
        bVar5 = false;
      }
      (**(code **)(*plVar27 + 0x188))(plVar27,bVar5);
      iVar9 = FUN_04376eb4(*(undefined4 *)(this_01 + 0x9d4));
      if (param_3 + 1 < iVar9) {
        pwVar22 = L"[PLANT_OBTAINED]";
      }
      else {
LAB_043840a8:
        pwVar22 = L"[PLANT_OBTAIN]";
      }
      pPVar19 = *(PVZ2UIButton **)(this + 0xf0);
      TodStringTranslate(pwVar22);
      uVar21 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22);
      PVZ2UIButton::AddText(pPVar19,local_40,uVar21,0);
      FUN_05476c50(local_40);
    }
    else {
      lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
      bVar7 = std::operator==((string *)(lVar12 + 0x88),"leaf");
      if (bVar7) {
        uVar21 = *(undefined8 *)(this + 0xf0);
        PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,StoreItemConfig::IMAGE_UI_HUD_LEAF,2);
        PVZ2UIButton::AddImageScale((PVZ2UIButton *)0x3f333333,uVar21,local_40,bVar5);
      }
      else {
        lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
        bVar5 = std::operator==((string *)(lVar12 + 0x88),"stone");
        if (bVar5) {
          uVar21 = *(undefined8 *)(this + 0xf0);
          PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,StoreItemConfig::IMAGE_UI_HUD_STONE,2);
          PVZ2UIButton::AddImageScale((PVZ2UIButton *)0x3f333333,uVar21,local_40,bVar7);
        }
      }
      if (fVar29 != 0.0) {
        this_04 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        this_05 = (PurchaseBroker *)
                  std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_rightmost(this_04);
        cVar4 = PurchaseBroker::NeedPurchaseWhite(this_05);
        if (cVar4 != '\0') {
LAB_043840d4:
          PVZ2UIButton::AddText
                    (*(PVZ2UIButton **)(this + 0xf0),&local_c0,
                     PrimeText_Game::Typeface_CafeteriaBlack_28_Outline,0);
          if (local_d1 != '\0') {
            pPVar19 = *(PVZ2UIButton **)(this + 0xf0);
            FUN_05478178(local_40,&DAT_05701860,(PVZ2UIImage *)&local_78);
            PVZ2UIButton::AddText
                      (pPVar19,local_40,PrimeText_Game::Typeface_CafeteriaBlack_28_Outline,0);
            FUN_05476c50(local_40);
            nop();
          }
          goto LAB_04383c68;
        }
        lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
        bVar5 = std::operator==((string *)(lVar12 + 0x10),"com.popcap.ios.chs.PVZ2.diamonds3");
        if (!bVar5) {
          lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
          bVar5 = std::operator==((string *)(lVar12 + 0x10),"com.popcap.ios.chs.PVZ2.diamonds4");
          if (!bVar5) {
            lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
            bVar5 = std::operator==((string *)(lVar12 + 0x10),"com.popcap.ios.chs.PVZ2.diamonds5");
            if (!bVar5) {
              lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
              bVar5 = std::operator==((string *)(lVar12 + 0x10),"com.popcap.ios.chs.PVZ2.diamonds6")
              ;
              if (!bVar5) goto LAB_043840d4;
            }
          }
        }
        goto LAB_043840a8;
      }
      lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
      bVar5 = std::operator==((string *)(lVar12 + 0x88),"ad");
      if (bVar5) {
        pPVar19 = *(PVZ2UIButton **)(this + 0xf0);
        TodStringTranslate(L"[GET_AD_BUTTON]");
        PVZ2UIButton::AddText(pPVar19,local_40,PrimeText_Game::Typeface_CafeteriaBlack_28_Outline,0)
        ;
        FUN_05476c50(local_40);
        this_03 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
        lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
        cVar4 = ADManager::CanWatchAD(this_03,(string *)(lVar12 + 0x78));
        if (cVar4 == '\0') {
          plVar27 = *(long **)(this + 0xf0);
LAB_0438405c:
          (**(code **)(*plVar27 + 0x188))(plVar27,1);
        }
      }
      else {
        lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
        bVar5 = std::operator==((string *)(lVar12 + 0x78),"mystery_crystal");
        if (!bVar5) {
          lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
          bVar5 = std::operator==((string *)(lVar12 + 0x78),"fuel");
          if (!bVar5) {
            lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
            bVar5 = std::operator==((string *)(lVar12 + 0x78),"pvz1mode_time_energy");
            if (!bVar5) {
              pPVar19 = *(PVZ2UIButton **)(this + 0xf0);
              TodStringTranslate(L"[PLANT_OBTAIN_BUTTON]");
              uVar21 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22);
              PVZ2UIButton::AddText(pPVar19,local_40,uVar21,bVar5);
              FUN_05476c50(local_40);
              goto LAB_04383c68;
            }
          }
        }
        pPVar19 = *(PVZ2UIButton **)(this + 0xf0);
        TodStringTranslate(L"[GET_FREE_MYSTERY_CRYSTAL_BUTTON]");
        PVZ2UIButton::AddText(pPVar19,local_40,PrimeText_Game::Typeface_CafeteriaBlack_28_Outline,0)
        ;
        FUN_05476c50(local_40);
        Sexy::LazySingleton<MonthlyCardMgr>::GetInstancePtr();
        cVar4 = MonthlyCardMgr::CanGetFreeMysteryCrystal();
        if (cVar4 != '\0') {
          uVar28 = 0;
          uVar21 = CachedUIResourcePtr<Sexy::Image>::operator->
                             ((CachedUIResourcePtr<Sexy::Image> *)
                              StoreItemConfig::IMAGE_UI_STORE_MONTHLY_CARD_ICON);
          this[0x59] = (PVZ2UIStoreItemDisplayer)0x0;
          *(undefined8 *)(this + 0xf8) = uVar21;
          lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
          bVar5 = std::operator==((string *)(lVar12 + 0x78),"mystery_crystal");
          if (!bVar5) {
            lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
            bVar5 = std::operator==((string *)(lVar12 + 0x78),"fuel");
            if (!bVar5) {
              lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
              bVar5 = std::operator==((string *)(lVar12 + 0x78),"pvz1mode_time_energy");
              if (bVar5) {
                uVar28 = 2;
                goto LAB_04384258;
              }
            }
            uVar28 = 1;
          }
LAB_04384258:
          pMVar24 = (MonthlyCardMgr *)Sexy::LazySingleton<MonthlyCardMgr>::GetInstancePtr();
          cVar4 = MonthlyCardMgr::CanRefreshFreeStatus(pMVar24,uVar28);
          plVar27 = *(long **)(this + 0xf0);
          if (cVar4 == '\0') goto LAB_0438405c;
          (**(code **)(*plVar27 + 0x188))(plVar27,0);
        }
      }
    }
LAB_04383c68:
    uVar8 = FUN_043772fc(0x82);
    *(undefined4 *)(this + 0x178) = uVar8;
  }
  pPVar19 = *(PVZ2UIButton **)(this + 0xf0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_78,uVar11,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,uVar18,3);
  PVZ2UIButton::SetDialogStates(pPVar19,(PVZ2UIImage *)&local_78,(PVZ2UIImage *)local_40);
  lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
  bVar5 = std::operator==((string *)(lVar12 + 0x78),"gacha");
  if (bVar5) {
    iVar9 = FUN_04376eb0(*(undefined4 *)(this_01 + 0x40));
    if (iVar9 == 0x17) {
      lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
      bVar5 = std::operator!=((string *)(lVar12 + 0x80),"gacha_diamond");
      if (!bVar5) goto LAB_04383338;
      lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_06);
      bVar5 = std::operator!=((string *)(lVar12 + 0x80),"entrance");
    }
    else {
LAB_04383338:
      bVar5 = false;
    }
    (**(code **)(**(long **)(this + 0xf0) + 0x188))(*(long **)(this + 0xf0),bVar5);
  }
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0xf0));
  FUN_05476c50(&local_c0);
LAB_04382db4:
  puVar3 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnChangeButton);
  Sexy::Delegate0::Delegate0<PVZ2UIStoreItemDisplayer,void(PVZ2UIStoreItemDisplayer::*)()>
            (aDStack_a8,local_40);
  MessageRouter::Subscribe((MessageRouter *)puVar3,Message::ChangeStoreDisplayerButton,aDStack_a8);
  puVar3 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,CloseCurrentGemProductNotice);
  local_100 = local_c0;
  uStack_f8 = uStack_b8;
  local_f0 = local_b0;
  MessageRouter::
  Subscribe<std::string_const&,Sexy::CBMemberTranslatorX<PVZ2UIStoreItemDisplayer,void(PVZ2UIStoreItemDisplayer::*)(std::string_const&)>>
            ((MessageRouter *)puVar3,Message::CloseCurrentGemProductNotice,&local_100);
  puVar3 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyFreeItemGot);
  local_100 = local_78;
  uStack_f8 = uStack_70;
  local_f0 = local_68;
  MessageRouter::
  Subscribe<std::string_const&,Sexy::CBMemberTranslatorX<PVZ2UIStoreItemDisplayer,void(PVZ2UIStoreItemDisplayer::*)(std::string_const&)>>
            ((MessageRouter *)puVar3,Message::NotifyFreeItemGot,&local_100);
  puVar3 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onADFinished);
  uStack_118 = uStack_38;
  local_110 = local_30;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<PVZ2UIStoreItemDisplayer,void(PVZ2UIStoreItemDisplayer::*)(int)>>
            ((MessageRouter *)puVar3,Message::NotifyADWatchFinish,local_120);
  this[0x198] = (PVZ2UIStoreItemDisplayer)0x0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_c8);
  std::string::~string(asStack_d0);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

