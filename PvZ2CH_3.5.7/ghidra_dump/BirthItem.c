// Class: BirthItem


/* BirthItem::~BirthItem() */

void __thiscall BirthItem::~BirthItem(BirthItem *this)

{
  *(undefined ***)this = &PTR_GetClass_06927fb0;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* BirthItem::~BirthItem() */

void __thiscall BirthItem::~BirthItem(BirthItem *this)

{
  ~BirthItem(this);
  AK::FreeHook(this);
  return;
}


/* BirthItem::BirthItem(int) */

void __thiscall BirthItem::BirthItem(BirthItem *this,int param_1)

{
  BirthItem BVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  LevelOfTheDayMgr *this_00;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  long lVar6;
  LotteryResultProgressBar *this_03;
  float fVar7;
  undefined4 uVar8;
  
  Sexy::Widget::Widget((Widget *)this);
  *(int *)(this + 0xe0) = param_1;
  this[0xe8] = (BirthItem)0x1;
  this[0xe9] = (BirthItem)0x0;
  *(undefined ***)this = &PTR_GetClass_06927fb0;
  this[0xea] = (BirthItem)0x0;
  this[0xeb] = (BirthItem)0x0;
  this[0xec] = (BirthItem)0x0;
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b75ae0);
  *(undefined8 *)(this + 0xd8) = uVar5;
  this_00 = (LevelOfTheDayMgr *)LevelOfTheDayMgr::GetInstance();
  iVar2 = LevelOfTheDayMgr::GetRealInterval(this_00);
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  lVar6 = PlayerInfo::GetBirthZRecord(this_02,*(int *)(this + 0xe0) + -1);
  if (*(int *)(this + 0xe0) == iVar2) {
    this[0xeb] = (BirthItem)0x1;
    this_03 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b75b30);
    *(LotteryResultProgressBar **)(this + 0xd8) = this_03;
    if (lVar6 != 0) {
      if (0 < *(int *)(lVar6 + 8)) {
        this[0xec] = (BirthItem)0x1;
      }
      iVar3 = LotteryResultProgressBar::GetCurrentLevel(this_03);
      iVar4 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0xd8));
      Sexy::Widget::Resize((Widget *)this,0,0,iVar3,iVar4);
      goto LAB_049cf334;
    }
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_03);
    iVar3 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0xd8));
    Sexy::Widget::Resize((Widget *)this,0,0,iVar2,iVar3);
LAB_049cf3e8:
    BVar1 = this[0xea];
  }
  else {
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0xd8));
    iVar4 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0xd8));
    Sexy::Widget::Resize((Widget *)this,0,0,iVar3,iVar4);
    if (lVar6 == 0) goto LAB_049cf3e8;
LAB_049cf334:
    iVar3 = *(int *)(lVar6 + 8);
    if (iVar3 < 1) goto LAB_049cf3e8;
    if (*(int *)(this + 0xe0) < iVar2) {
      this[0xea] = (BirthItem)0x1;
      BVar1 = (BirthItem)0x1;
      if (iVar3 < 3) goto LAB_049cf360;
    }
    else {
      if (iVar3 < 3) goto LAB_049cf3e8;
      BVar1 = this[0xea];
    }
    this[0xe9] = (BirthItem)0x1;
  }
  if (BVar1 == (BirthItem)0x0) {
    uVar8 = PVZ_EOT();
    *(undefined4 *)(this + 0xe4) = uVar8;
    return;
  }
LAB_049cf360:
  fVar7 = (float)PVZ_T();
  *(float *)(this + 0xe4) = fVar7 + (float)(*(int *)(this + 0xe0) + -1) * 1.2;
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x049cf9f8 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* BirthItem::DrawFlag(Sexy::Graphics*) */

void __thiscall BirthItem::DrawFlag(BirthItem *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Image *pIVar5;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xea] != (BirthItem)0x0) {
    fVar6 = (float)PVZ_T();
    if ((fVar6 <= *(float *)(this + 0xe4)) || (this[0xe8] == (BirthItem)0x0)) {
      fVar6 = 1.0;
    }
    else {
      fVar8 = *(float *)(this + 0xe4) + 1.2;
      fVar6 = (float)PVZ_T();
      if (fVar6 <= fVar8) {
        auVar7 = PVZ_T();
        local_10 = 0x3fe66666;
        local_c = 0x3f800000;
        fVar6 = CurveLerp<float>(auVar7,fVar8,auVar7._0_4_,&local_10,&local_c,3);
      }
      else {
        this[0xe8] = (BirthItem)0x0;
        fVar6 = 1.0;
      }
    }
    fVar8 = (float)PVZ_T();
    if (*(float *)(this + 0xe4) < fVar8) {
      pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b75b58);
      iVar1 = *(int *)(this + 0x50);
      this_00 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b75b58);
      iVar3 = LotteryResultProgressBar::GetCurrentLevel(this_00);
      iVar2 = *(int *)(this + 0x54);
      this_01 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b75b58);
      iVar4 = SalesProgressBar::GetCurrentLevel(this_01);
      TodDrawImageCenterScaledF
                (param_1,pIVar5,(float)((iVar1 - iVar3) / 2),(float)((iVar2 - iVar4) / 2),fVar6,
                 fVar6);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BirthItem::Draw(Sexy::Graphics*) */

void __thiscall BirthItem::Draw(BirthItem *this,Graphics *param_1)

{
  int iVar1;
  ProfileMgr *this_00;
  CachedUIResourcePtr *this_01;
  long lVar2;
  ResourceInfo *pRVar3;
  LotteryResultProgressBar *pLVar4;
  undefined8 uVar5;
  Image *pIVar6;
  int iVar7;
  int iVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  string asStack_28 [8];
  undefined1 auStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  Sexy::Graphics::DrawImage(param_1,*(Image **)(this + 0xd8),0,0);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  if (*(int *)(this + 0xe0) == 7) {
    this_01 = (CachedUIResourcePtr *)&DAT_06b75ce0;
  }
  else {
    this_01 = (CachedUIResourcePtr *)&DAT_06b75d20;
  }
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr(this_01);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
  iVar8 = *(int *)(lVar2 + 0x38);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
  iVar7 = *(int *)(lVar2 + 0x3c);
  if (this[0xe9] != (BirthItem)0x0) {
    iVar8 = (int)((double)iVar8 * 0.5);
    iVar7 = (int)((double)iVar7 * 0.5);
  }
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_30);
  Sexy::Graphics::DrawImage
            (param_1,(Image *)pRVar3,(*(int *)(this + 0x50) - iVar8) / 2,
             (*(int *)(this + 0x54) - iVar8) / 2,iVar8,iVar7);
  Sexy::StrFormat("IMAGE_UI_BIRTHZ_BZDAY_%d",asStack_28,(ulong)*(uint *)(this + 0xe0));
  iVar8 = FUN_049ce980(0xffffffe2);
  if (this[0xeb] != (BirthItem)0x0) {
    iVar8 = FUN_049ce980(0xffffffd3);
  }
  pLVar4 = (LotteryResultProgressBar *)StringHelper::ToImage(asStack_28,false);
  if (pLVar4 != (LotteryResultProgressBar *)0x0) {
    iVar7 = *(int *)(this + 0x50);
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar4);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pLVar4,(iVar7 - iVar1) / 2,iVar8 + *(int *)(this + 0x54));
  }
  if (this[0xec] != (BirthItem)0x0) {
    pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b75e70);
    iVar8 = *(int *)(this + 0x50);
    pLVar4 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b75e70);
    iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar4);
    iVar1 = FUN_049ce980(0xf);
    Sexy::Graphics::DrawImage(param_1,pIVar6,(iVar8 - iVar7) - iVar1,iVar1);
  }
  iVar8 = 0;
  if (this[0xeb] != (BirthItem)0x0) {
    iVar8 = FUN_049ce980(0xf);
  }
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
  iVar1 = FUN_049ce980(0xc);
  iVar7 = *(int *)(this + 0x50);
  TodStringTranslate(L"[BIRTHZ_DIALOG_LVTITLE]");
  Sexy::Color::Color(aCStack_18,1);
  Sexy::PrimeTypeface::DrawString_Line
            ((PrimeTypeface *)0x0,(float)(iVar1 + iVar8),(float)iVar7,uVar5,param_1,auStack_20,1,
             aCStack_18,0);
  FUN_05476c50(auStack_20);
  DrawFlag(this,param_1);
  std::string::~string(asStack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

