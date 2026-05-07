// Class: NoviceSevenDaysRewardDisplay


/* NoviceSevenDaysRewardDisplay::~NoviceSevenDaysRewardDisplay() */

void __thiscall
NoviceSevenDaysRewardDisplay::~NoviceSevenDaysRewardDisplay(NoviceSevenDaysRewardDisplay *this)

{
  *(undefined ***)this = &PTR_GetClass_067054c0;
  FUN_05476c50(this + 0x110);
  std::string::~string((string *)(this + 0xf0));
  FUN_05476c50(this + 0xe0);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* NoviceSevenDaysRewardDisplay::~NoviceSevenDaysRewardDisplay() */

void __thiscall
NoviceSevenDaysRewardDisplay::~NoviceSevenDaysRewardDisplay(NoviceSevenDaysRewardDisplay *this)

{
  ~NoviceSevenDaysRewardDisplay(this);
  AK::FreeHook(this);
  return;
}


/* NoviceSevenDaysRewardDisplay::NoviceSevenDaysRewardDisplay() */

void __thiscall
NoviceSevenDaysRewardDisplay::NoviceSevenDaysRewardDisplay(NoviceSevenDaysRewardDisplay *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined ***)this = &PTR_GetClass_067054c0;
  FUN_05476574(this + 0xe0);
  *(undefined4 *)(this + 0xe8) = 0;
  this[0xec] = (NoviceSevenDaysRewardDisplay)0x0;
  Set8BytesTo0(this + 0xf0);
  Sexy::Insets::Insets((Insets *)(this + 0xf8));
  FUN_05476574(this + 0x110);
  *(undefined8 *)(this + 0x118) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NoviceSevenDaysRewardDisplay::TouchBegan(Sexy::Touch const&) */

void NoviceSevenDaysRewardDisplay::TouchBegan(Touch *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  LotteryResultProgressBar *this;
  SalesProgressBar *this_00;
  StoneLotteryItemTipUI *this_01;
  long lVar5;
  int iVar6;
  int local_20;
  int local_1c;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)param_1 + 0xd0))(&local_20);
  this = (LotteryResultProgressBar *)
         CachedUIResourcePtr<Sexy::Image>::operator->
                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac4b90);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(this);
  iVar6 = (int)((float)iVar2 + (float)iVar2);
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac4b90);
  iVar3 = SalesProgressBar::GetCurrentLevel(this_00);
  iVar2 = *(int *)(param_1 + 0x50);
  iVar4 = FUN_03a3db80(5);
  Sexy::Insets::Insets
            (aIStack_18,local_20 + (iVar2 - iVar6) / 2,
             (local_1c - (int)((float)iVar3 * 0.5)) + iVar4,iVar6,(int)((float)iVar3 * 0.5));
  lVar5 = *(long *)(param_1 + 0x118);
  if (lVar5 == 0) {
    this_01 = ::operator_new(0xe8);
    memset(this_01,0,0xe8);
    StoneLotteryItemTipUI::StoneLotteryItemTipUI(this_01);
    uVar1 = *(uint *)(this_01 + 0x60);
    *(StoneLotteryItemTipUI **)(param_1 + 0x118) = this_01;
    *(uint *)(this_01 + 0x60) = uVar1 | 0x10;
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))(*(long **)(gLawnApp + 0x360),this_01);
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(param_1 + 0x118));
    lVar5 = *(long *)(param_1 + 0x118);
  }
  PuzzleTip::SetTip(lVar5,param_1 + 0x110);
  (**(code **)(**(long **)(param_1 + 0x118) + 0x1a0))(*(long **)(param_1 + 0x118),aIStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NoviceSevenDaysRewardDisplay::SetReawrd(NoviceSevenDaysIntegralReward const&) */

void __thiscall
NoviceSevenDaysRewardDisplay::SetReawrd
          (NoviceSevenDaysRewardDisplay *this,NoviceSevenDaysIntegralReward *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  long lVar9;
  wchar_t *pwVar10;
  undefined8 uVar11;
  string asStack_40 [8];
  undefined4 local_38;
  int iStack_34;
  undefined8 uStack_30;
  undefined1 auStack_28 [16];
  string asStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  iVar1 = *(int *)(this + 0x54);
  local_8 = ___stack_chk_guard;
  iVar5 = FUN_03a3db80(6);
  iVar2 = *(int *)(this + 0x50);
  iVar6 = FUN_03a3db80(5);
  iVar7 = FUN_03a3db80(10);
  iVar7 = iVar1 - iVar7;
  Sexy::Insets::Insets((Insets *)&local_38,iVar5 + (iVar2 - iVar1) / 2,iVar6,iVar7,iVar7);
  *(ulong *)(this + 0xf8) = CONCAT44(iStack_34,local_38);
  *(undefined8 *)(this + 0x100) = uStack_30;
  cVar4 = std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::empty
                    ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)param_1);
  if (cVar4 != '\0') goto LAB_03a3ff04;
  piVar8 = (int *)FUN_03a3d674(*(undefined8 *)param_1);
  iVar1 = *piVar8;
  uVar3 = piVar8[1];
  if (iVar1 == 0xbc0) {
    uVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac4a80);
    *(undefined8 *)(this + 0xd8) = uVar11;
    pwVar10 = L"[REWARD_TYPE_GEM]";
LAB_03a3ff48:
    TodStringTranslate(pwVar10);
    FUN_054766c8(this + 0x110,(Insets *)&local_38);
    FUN_05476c50((Insets *)&local_38);
  }
  else {
    if (iVar1 == 0xfad) {
      uVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac47b8);
      *(undefined8 *)(this + 0xd8) = uVar11;
      pwVar10 = L"[REWARD_TYPE_COIN]";
      goto LAB_03a3ff48;
    }
    GetGameItemInfo(iVar1,0x7fffffff,0);
    if (iStack_34 == 2) {
      this[0xec] = (NoviceSevenDaysRewardDisplay)0x1;
    }
    thunk_FUN_05475e00(this + 0xf0,auStack_28);
    lVar9 = StringHelper::ToImage(asStack_18,false);
    if (lVar9 != 0) {
      *(long *)(this + 0xd8) = lVar9;
    }
    thunk_FUN_05477b9c(this + 0x110,auStack_10);
    GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_38);
  }
  Sexy::StrFormat("x%d",asStack_40,(ulong)uVar3);
  Sexy::ToWString(asStack_40);
  FUN_054766c8(this + 0xe0,(Insets *)&local_38);
  FUN_05476c50((Insets *)&local_38);
  std::string::~string(asStack_40);
LAB_03a3ff04:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NoviceSevenDaysRewardDisplay::Draw(Sexy::Graphics*) */

void __thiscall
NoviceSevenDaysRewardDisplay::Draw(NoviceSevenDaysRewardDisplay *this,Graphics *param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  SeedPacketUtils *this_00;
  RtWeakPtr *this_01;
  ResourceInfo *pRVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  int iStack_30;
  int iStack_2c;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xec] != (NoviceSevenDaysRewardDisplay)0x0) {
    bVar1 = std::operator!=("",(string *)(this + 0xf0));
    if (bVar1) {
      this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
      this_01 = (RtWeakPtr *)
                SeedPacketUtils::GetPlantPiecePacketRenderData(this_00,(string *)(this + 0xf0));
      fVar7 = ((float)*(int *)(this + 0x100) * 0.9) / (float)*(int *)(this_01 + 0x28);
      fVar6 = ((float)*(int *)(this + 0x104) * 0.9) / (float)*(int *)(this_01 + 0x2c);
      Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)(this_01 + 0x170));
      GetImageOffset(&iStack_30,(RtId *)aIStack_18);
      Sexy::RtId::~RtId((RtId *)aIStack_18);
      UIWidget::ConvertPSDImageOffsetToUISpace(&iStack_30,&iStack_2c,1536.0);
      Sexy::Insets::Insets
                (aIStack_28,
                 (int)((float)*(int *)(this + 0xf8) + (float)*(int *)(this_01 + 0x30) * fVar7),
                 (int)((float)*(int *)(this + 0xfc) + (float)*(int *)(this_01 + 0x34) * fVar6),
                 (int)(fVar7 * (float)*(int *)(this_01 + 0x28)),
                 (int)(fVar6 * (float)*(int *)(this_01 + 0x2c)));
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01 + 0x170);
      Sexy::Graphics::DrawImage
                (param_1,(Image *)pRVar4,(TRect *)aIStack_28,(TRect *)(this_01 + 0x20));
      Sexy::Insets::Insets
                (aIStack_18,
                 (int)((float)*(int *)(this + 0xf8) + (float)*(int *)(this_01 + 0x18) * fVar7),
                 (int)((float)*(int *)(this + 0xfc) + (float)*(int *)(this_01 + 0x1c) * fVar6),
                 (int)(fVar7 * (float)*(int *)(this_01 + 0x10)),
                 (int)(fVar6 * (float)*(int *)(this_01 + 0x14)));
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
      if (bVar1) {
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
        pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar5 + 0x48));
        Sexy::Graphics::DrawImage
                  (param_1,(Image *)pRVar4,(TRect *)aIStack_18,(TRect *)(this_01 + 8));
      }
      goto LAB_03a44508;
    }
  }
  if (*(long *)(this + 0xd8) != 0) {
    Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0xf8));
    DrawAdaptiveImage(param_1,aIStack_18,*(undefined8 *)(this + 0xd8));
  }
LAB_03a44508:
  iVar2 = FUN_03a3db80(10);
  Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(this + 0x50) - iVar2,*(int *)(this + 0x54));
  uVar3 = PrimeText_PotentialTypeface::Typeface
                    (PrimeText_Game::Typeface_CafeteriaBlack_22_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,4);
  WriteWordInRect(param_1,this + 0xe0,aIStack_28,uVar3,(Color *)aIStack_18,4,1);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

