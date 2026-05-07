// Class: DaveTreasureRewardWidget


/* DaveTreasureRewardWidget::~DaveTreasureRewardWidget() */

void __thiscall DaveTreasureRewardWidget::~DaveTreasureRewardWidget(DaveTreasureRewardWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_066f8340;
  FUN_05476c50(this + 0x110);
  std::string::~string((string *)(this + 0xf0));
  FUN_05476c50(this + 0xe0);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* DaveTreasureRewardWidget::~DaveTreasureRewardWidget() */

void __thiscall DaveTreasureRewardWidget::~DaveTreasureRewardWidget(DaveTreasureRewardWidget *this)

{
  ~DaveTreasureRewardWidget(this);
  AK::FreeHook(this);
  return;
}


/* DaveTreasureRewardWidget::DaveTreasureRewardWidget() */

void __thiscall DaveTreasureRewardWidget::DaveTreasureRewardWidget(DaveTreasureRewardWidget *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined ***)this = &PTR_GetClass_066f8340;
  FUN_05476574(this + 0xe0);
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  Set8BytesTo0(this + 0xf0);
  Sexy::Insets::Insets((Insets *)(this + 0xf8));
  FUN_05476574(this + 0x110);
  *(undefined8 *)(this + 0x118) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTreasureRewardWidget::TouchBegan(Sexy::Touch const&) */

void DaveTreasureRewardWidget::TouchBegan(Touch *param_1)

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
                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac2408);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(this);
  iVar6 = (int)((float)iVar2 + (float)iVar2);
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac2408);
  iVar3 = SalesProgressBar::GetCurrentLevel(this_00);
  iVar2 = *(int *)(param_1 + 0x50);
  iVar4 = FUN_039f135c(5);
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
/* DaveTreasureRewardWidget::Draw(Sexy::Graphics*) */

void __thiscall DaveTreasureRewardWidget::Draw(DaveTreasureRewardWidget *this,Graphics *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  SeedPacketUtils *this_00;
  RtWeakPtr *this_01;
  ResourceInfo *pRVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  int iStack_30;
  int iStack_2c;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  iVar3 = *(int *)(this + 0xec);
  local_8 = ___stack_chk_guard;
  if (iVar3 == 10) {
    bVar2 = std::operator!=("",(string *)(this + 0xf0));
    if (bVar2) {
      this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
      this_01 = (RtWeakPtr *)
                SeedPacketUtils::GetPlantPiecePacketRenderData(this_00,(string *)(this + 0xf0));
      fVar8 = ((float)*(int *)(this + 0x100) * 0.9) / (float)*(int *)(this_01 + 0x28);
      fVar7 = ((float)*(int *)(this + 0x104) * 0.9) / (float)*(int *)(this_01 + 0x2c);
      Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)(this_01 + 0x170));
      GetImageOffset(&iStack_30,(RtId *)aIStack_18);
      Sexy::RtId::~RtId((RtId *)aIStack_18);
      UIWidget::ConvertPSDImageOffsetToUISpace(&iStack_30,&iStack_2c,1536.0);
      Sexy::Insets::Insets
                (aIStack_28,
                 (int)((float)*(int *)(this + 0xf8) + (float)*(int *)(this_01 + 0x30) * fVar8),
                 (int)((float)*(int *)(this + 0xfc) + (float)*(int *)(this_01 + 0x34) * fVar7),
                 (int)(fVar8 * (float)*(int *)(this_01 + 0x28)),
                 (int)(fVar7 * (float)*(int *)(this_01 + 0x2c)));
      pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01 + 0x170);
      Sexy::Graphics::DrawImage
                (param_1,(Image *)pRVar5,(TRect *)aIStack_28,(TRect *)(this_01 + 0x20));
      Sexy::Insets::Insets
                (aIStack_18,
                 (int)((float)*(int *)(this + 0xf8) + (float)*(int *)(this_01 + 0x18) * fVar8),
                 (int)((float)*(int *)(this + 0xfc) + (float)*(int *)(this_01 + 0x1c) * fVar7),
                 (int)(fVar8 * (float)*(int *)(this_01 + 0x10)),
                 (int)(fVar7 * (float)*(int *)(this_01 + 0x14)));
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
      if (bVar2) {
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
        pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar6 + 0x48));
        Sexy::Graphics::DrawImage
                  (param_1,(Image *)pRVar5,(TRect *)aIStack_18,(TRect *)(this_01 + 8));
      }
      goto LAB_039fb7f4;
    }
    iVar3 = *(int *)(this + 0xec);
  }
  if (iVar3 == 100) {
    uVar1 = *(undefined4 *)(this + 0xe8);
    Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0xf8));
    FUN_039fb3cc(param_1,uVar1,aIStack_18);
  }
  else if (*(long *)(this + 0xd8) != 0) {
    Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0xf8));
    DrawAdaptiveImage(param_1,aIStack_18,*(undefined8 *)(this + 0xd8));
  }
LAB_039fb7f4:
  iVar3 = FUN_039f135c(10);
  Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(this + 0x50) - iVar3,*(int *)(this + 0x54));
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,4);
  WriteWordInRect(param_1,this + 0xe0,aIStack_28,uVar4,(Color *)aIStack_18,4,1);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTreasureRewardWidget::SetReawrd(DaveTreasureIntegralReward const&) */

void __thiscall
DaveTreasureRewardWidget::SetReawrd
          (DaveTreasureRewardWidget *this,DaveTreasureIntegralReward *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  wchar_t *pwVar9;
  string *extraout_x0;
  undefined8 uVar10;
  string asStack_88 [8];
  string asStack_80 [8];
  string asStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [16];
  string asStack_58 [16];
  string asStack_48 [16];
  undefined4 local_38;
  int iStack_34;
  undefined8 uStack_30;
  undefined1 auStack_28 [16];
  string asStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  iVar1 = *(int *)(this + 0x54);
  local_8 = ___stack_chk_guard;
  iVar5 = FUN_039f135c(6);
  iVar2 = *(int *)(this + 0x50);
  iVar6 = FUN_039f135c(10);
  iVar7 = FUN_039f135c(0x14);
  iVar7 = iVar1 - iVar7;
  Sexy::Insets::Insets((Insets *)&local_38,iVar5 + (iVar2 - iVar1) / 2,iVar6,iVar7,iVar7);
  iVar1 = *(int *)param_1;
  *(ulong *)(this + 0xf8) = CONCAT44(iStack_34,local_38);
  *(undefined8 *)(this + 0x100) = uStack_30;
  if (iVar1 == 0xbc0) {
    uVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac2150);
    *(undefined8 *)(this + 0xd8) = uVar10;
    pwVar9 = L"[REWARD_TYPE_GEM]";
  }
  else {
    if (iVar1 != 0xfad) {
      GetGameItemInfo(iVar1,0x7fffffff,0);
      if (iStack_34 == 0x8000) {
        DSingleton<HeadshotConfig>::getInstance();
        nop();
        DString::DString((DString *)asStack_48,*(int *)param_1);
        DString::operator_cast_to_string((DString *)asStack_48);
        std::string::string(asStack_68,"plant");
        std::string::string(asStack_58,"none");
        DIniFile::getItem(extraout_x0,asStack_70,asStack_68);
        std::string::~string(asStack_58);
        nop();
        std::string::~string(asStack_68);
        nop();
        std::string::~string(asStack_70);
        DString::~DString((DString *)asStack_48);
        uVar10 = FUN_0547429c(asStack_88);
        Sexy::OutputDebugStrF((wchar_t *)"avatar head %s",uVar10);
        bVar3 = std::operator!=(asStack_88,"none");
        if (bVar3) {
          iVar1 = *(int *)param_1;
          *(int *)(this + 0xe8) = iVar1;
          *(undefined4 *)(this + 0xec) = 100;
          DString::DString((DString *)asStack_48,iVar1);
          DString::operator_cast_to_string((DString *)asStack_48);
          std::string::string(asStack_78,"name");
          std::string::string(asStack_70,"");
          DIniFile::getItem(extraout_x0,asStack_80,asStack_78);
          DString::DString((DString *)asStack_68,asStack_58);
          std::string::~string(asStack_58);
          std::string::~string(asStack_70);
          nop();
          std::string::~string(asStack_78);
          nop();
          std::string::~string(asStack_80);
          DString::~DString((DString *)asStack_48);
          cVar4 = DString::empty((DString *)asStack_68);
          if (cVar4 == '\0') {
            DString::replace((char *)asStack_68,"\t");
            DString::operator=((DString *)asStack_68,(DString *)asStack_48);
            DString::~DString((DString *)asStack_48);
            ::operator+("[",(DString *)asStack_68);
            ::operator+((DString *)asStack_58,"]");
            DString::operator_cast_to_string((DString *)asStack_48);
            Sexy::UTF8StringToSexyString(asStack_80);
            TodStringTranslate((wstring *)asStack_78);
            FUN_054766c8(this + 0x110,asStack_70);
            FUN_05476c50(asStack_70);
            FUN_05476c50(asStack_78);
            std::string::~string(asStack_80);
            DString::~DString((DString *)asStack_48);
            DString::~DString((DString *)asStack_58);
          }
          else {
            TodStringTranslate(L"[BOSS_CHALLENGE_HEAD_ID_10000]");
            FUN_054766c8(this + 0x110,(DString *)asStack_48);
            FUN_05476c50((DString *)asStack_48);
          }
          DString::~DString((DString *)asStack_68);
        }
        std::string::~string(asStack_88);
      }
      else {
        if (iStack_34 == 2) {
          *(undefined4 *)(this + 0xec) = 10;
        }
        thunk_FUN_05475e00(this + 0xf0,auStack_28);
        lVar8 = StringHelper::ToImage(asStack_18,false);
        if (lVar8 != 0) {
          *(long *)(this + 0xd8) = lVar8;
        }
        thunk_FUN_05477b9c(this + 0x110,auStack_10);
      }
      GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_38);
      goto LAB_039fc3f8;
    }
    uVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac1ff8);
    *(undefined8 *)(this + 0xd8) = uVar10;
    pwVar9 = L"[REWARD_TYPE_COIN]";
  }
  TodStringTranslate(pwVar9);
  FUN_054766c8(this + 0x110,(Insets *)&local_38);
  FUN_05476c50((Insets *)&local_38);
LAB_039fc3f8:
  Sexy::StrFormat("x%d",asStack_48,(ulong)*(uint *)(param_1 + 4));
  Sexy::ToWString(asStack_48);
  FUN_054766c8(this + 0xe0,(Insets *)&local_38);
  FUN_05476c50((Insets *)&local_38);
  std::string::~string(asStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

