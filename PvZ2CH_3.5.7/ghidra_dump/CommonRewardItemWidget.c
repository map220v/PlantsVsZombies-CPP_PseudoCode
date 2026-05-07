// Class: CommonRewardItemWidget


/* CommonRewardItemWidget::SetCurrencyImage(Sexy::Image*) */

void __thiscall
CommonRewardItemWidget::SetCurrencyImage(CommonRewardItemWidget *this,Image *param_1)

{
  *(Image **)(this + 0x120) = param_1;
  return;
}


/* CommonRewardItemWidget::LoadData(CommonRewardItemData const&) */

void __thiscall
CommonRewardItemWidget::LoadData(CommonRewardItemWidget *this,CommonRewardItemData *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  pcVar2 = *(code **)(*(long *)this + 0x318);
  *(undefined8 *)(this + 0xd8) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0xe0) = uVar1;
  *(undefined4 *)(this + 0xe8) = *(undefined4 *)(param_1 + 0x10);
  (*pcVar2)();
  return;
}


/* CommonRewardItemWidget::SetSoldOut(bool) */

void __thiscall CommonRewardItemWidget::SetSoldOut(CommonRewardItemWidget *this,bool param_1)

{
  this[0x138] = (CommonRewardItemWidget)param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CommonRewardItemWidget::~CommonRewardItemWidget() */

void __thiscall CommonRewardItemWidget::~CommonRewardItemWidget(CommonRewardItemWidget *this)

{
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06a27670;
  Sexy::Delegate1<CommonRewardItemData_const&>::Delegate1(aDStack_38);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x140),(Delegate2 *)aDStack_38);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::string::~string((string *)(this + 0x130));
  FUN_05476c50(this + 0x100);
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CommonRewardItemWidget::~CommonRewardItemWidget() */

void __thiscall CommonRewardItemWidget::~CommonRewardItemWidget(CommonRewardItemWidget *this)

{
  ~CommonRewardItemWidget(this);
  AK::FreeHook(this);
  return;
}


/* CommonRewardItemWidget::CommonRewardItemWidget() */

void __thiscall CommonRewardItemWidget::CommonRewardItemWidget(CommonRewardItemWidget *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined4 *)(this + 0xd4) = 0xffffffff;
  *(undefined ***)this = &PTR_GetClass_06a27670;
  CommonRewardItemData::CommonRewardItemData((CommonRewardItemData *)(this + 0xd8));
  Sexy::Insets::Insets((Insets *)(this + 0xec));
  FUN_05476574(this + 0x100);
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x128) = 0x7fffffff;
  Set8BytesTo0(this + 0x130);
  this[0x138] = (CommonRewardItemWidget)0x0;
  Sexy::Delegate1<CommonRewardItemData_const&>::Delegate1((DummyInit *)(this + 0x140));
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  this[0x170] = (CommonRewardItemWidget)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CommonRewardItemWidget::TouchEnded(Sexy::Touch const&) */

void __thiscall CommonRewardItemWidget::TouchEnded(CommonRewardItemWidget *this,Touch *param_1)

{
  int iVar1;
  UIMessageBox *pUVar2;
  Image *pIVar3;
  long lVar4;
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xd4) == (int)*(undefined8 *)param_1) {
    if (this[0x138] == (CommonRewardItemWidget)0x0) {
      if (this[0x170] == (CommonRewardItemWidget)0x0) {
        pUVar2 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
        if (pUVar2 != (UIMessageBox *)0x0) {
          UIMessageBox::SetShowType(pUVar2,4);
          TodStringTranslate(L"[REVIVE_TIP]");
          TodStringTranslate(L"[PLANT_FAMILY_LOCKED]");
          TodStringTranslate(L"[BUTTON_OK]");
          UIMessageBox::SetMessage(pUVar2,awStack_20,awStack_28);
          std::string::string(asStack_10,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
          pIVar3 = (Image *)StringHelper::ToImage(asStack_10,false);
          UIMessageBox::SetBackground(pUVar2,pIVar3);
          std::string::~string(asStack_10);
          nop();
          lVar4 = UIMessageBox::GetButtonCancel(pUVar2);
          thunk_FUN_05477b9c(lVar4 + 0xd8,auStack_18);
          FUN_05476c50(auStack_18);
          FUN_05476c50(awStack_20);
          FUN_05476c50(awStack_28);
        }
      }
      else {
        iVar1 = FUN_04facfbc(*(undefined8 *)(this + 0x148),*(undefined8 *)(this + 0x158));
        if (iVar1 != 0) {
          Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
                    ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x140),(SexyURL *)(this + 0xd8));
        }
      }
    }
    else {
      pUVar2 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      if (pUVar2 != (UIMessageBox *)0x0) {
        UIMessageBox::SetShowType(pUVar2,4);
        TodStringTranslate(L"[REVIVE_TIP]");
        TodStringTranslate(L"[SOLD_OUT]");
        TodStringTranslate(L"[BUTTON_OK]");
        UIMessageBox::SetMessage(pUVar2,awStack_20,awStack_28);
        std::string::string(asStack_10,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
        pIVar3 = (Image *)StringHelper::ToImage(asStack_10,false);
        UIMessageBox::SetBackground(pUVar2,pIVar3);
        std::string::~string(asStack_10);
        nop();
        lVar4 = UIMessageBox::GetButtonCancel(pUVar2);
        thunk_FUN_05477b9c(lVar4 + 0xd8,auStack_18);
        FUN_05476c50(auStack_18);
        FUN_05476c50(awStack_20);
        FUN_05476c50(awStack_28);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CommonRewardItemWidget::SetBgImageRare(bool, int) */

void __thiscall
CommonRewardItemWidget::SetBgImageRare(CommonRewardItemWidget *this,bool param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_1) {
    if (param_2 == 0) {
      uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba7c80);
      *(undefined8 *)(this + 0x178) = uVar1;
      return;
    }
    if (param_2 == 1) {
      uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba7920);
      *(undefined8 *)(this + 0x178) = uVar1;
      return;
    }
    if (param_2 == 2) {
      uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba7880);
      *(undefined8 *)(this + 0x178) = uVar1;
      return;
    }
    if (param_2 == 3) {
      uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba78f8);
      *(undefined8 *)(this + 0x178) = uVar1;
      return;
    }
    if (param_2 == 4) {
      uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba7ba8);
      *(undefined8 *)(this + 0x178) = uVar1;
      return;
    }
  }
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba78d0);
  *(undefined8 *)(this + 0x178) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CommonRewardItemWidget::Draw(Sexy::Graphics*) */

void __thiscall CommonRewardItemWidget::Draw(CommonRewardItemWidget *this,Graphics *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  SeedPacketUtils *this_00;
  RtWeakPtr *this_01;
  ResourceInfo *pRVar9;
  long lVar10;
  Image *pIVar11;
  string *extraout_x1;
  float fVar12;
  float fVar13;
  Sexy aSStack_38 [8];
  int iStack_30;
  int iStack_2c;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  if (*(Image **)(this + 0x178) == (Image *)0x0) {
    pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba78f8);
    Sexy::Graphics::DrawImage(param_1,pIVar11,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
  else {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0x178),0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
  iVar2 = FUN_04fada68(0x19);
  Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(this + 0x50),iVar2);
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x100,aIStack_28,uVar8,aIStack_18,5,1);
  if (*(int *)(this + 0x128) == 2) {
    this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
    this_01 = (RtWeakPtr *)
              SeedPacketUtils::GetPlantPiecePacketRenderData(this_00,(string *)(this + 0x130));
    fVar13 = ((float)*(int *)(this + 0xf4) * 0.9) / (float)*(int *)(this_01 + 0x28);
    fVar12 = ((float)*(int *)(this + 0xf8) * 0.9) / (float)*(int *)(this_01 + 0x2c);
    Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)(this_01 + 0x170));
    GetImageOffset(&iStack_30,aIStack_18);
    Sexy::RtId::~RtId((RtId *)aIStack_18);
    UIWidget::ConvertPSDImageOffsetToUISpace(&iStack_30,&iStack_2c,1536.0);
    Sexy::Insets::Insets
              (aIStack_28,
               (int)((float)*(int *)(this + 0xec) + (float)*(int *)(this_01 + 0x30) * fVar13),
               (int)((float)*(int *)(this + 0xf0) + (float)*(int *)(this_01 + 0x34) * fVar12),
               (int)(fVar13 * (float)*(int *)(this_01 + 0x28)),
               (int)(fVar12 * (float)*(int *)(this_01 + 0x2c)));
    pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01 + 0x170);
    Sexy::Graphics::DrawImage(param_1,(Image *)pRVar9,(TRect *)aIStack_28,(TRect *)(this_01 + 0x20))
    ;
    Sexy::Insets::Insets
              (aIStack_18,
               (int)((float)*(int *)(this + 0xec) + (float)*(int *)(this_01 + 0x18) * fVar13),
               (int)((float)*(int *)(this + 0xf0) + (float)*(int *)(this_01 + 0x1c) * fVar12),
               (int)(fVar13 * (float)*(int *)(this_01 + 0x10)),
               (int)(fVar12 * (float)*(int *)(this_01 + 0x14)));
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
    if (bVar1) {
      lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
      pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar10 + 0x48));
      Sexy::Graphics::DrawImage(param_1,(Image *)pRVar9,(TRect *)aIStack_18,(TRect *)(this_01 + 8));
    }
  }
  else {
    if ((*(long *)(this + 0x110) != 0) && (*(long *)(this + 0x118) != 0)) {
      iVar3 = FUN_04fada68(0x14);
      iVar2 = *(int *)(this + 0xec);
      iVar6 = *(int *)(this + 0xf0);
      iVar4 = FUN_04fada68(0x2d);
      iVar7 = *(int *)(this + 0xf4);
      iVar5 = FUN_04fada68(0x28);
      Sexy::Insets::Insets
                (aIStack_18,iVar2 - iVar3,iVar6 - iVar3,iVar4 + iVar7,iVar5 + *(int *)(this + 0xf8))
      ;
      DrawAdaptiveImage(param_1,aIStack_18,*(undefined8 *)(this + 0x118));
      iVar3 = FUN_04fada68(0x14);
      iVar2 = *(int *)(this + 0xec);
      iVar6 = *(int *)(this + 0xf0);
      iVar4 = FUN_04fada68(0x2d);
      iVar7 = *(int *)(this + 0xf4);
      iVar5 = FUN_04fada68(0x28);
      Sexy::Insets::Insets
                (aIStack_18,iVar2 - iVar3,iVar6 - iVar3,iVar4 + iVar7,iVar5 + *(int *)(this + 0xf8))
      ;
      DrawAdaptiveImage(param_1,aIStack_18,*(undefined8 *)(this + 0x110));
    }
    if (*(long *)(this + 0x108) != 0) {
      Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0xec));
      DrawAdaptiveImage(param_1,aIStack_18,*(undefined8 *)(this + 0x108));
    }
  }
  pIVar11 = *(Image **)(this + 0x120);
  if (pIVar11 != (Image *)0x0) {
    iVar6 = FUN_04fada68(0x14);
    iVar7 = FUN_04fada68(0x1e);
    iVar2 = *(int *)(this + 0x54);
    iVar3 = FUN_04fada68(0x19);
    Sexy::Graphics::DrawImage(param_1,pIVar11,iVar6,iVar2 - iVar7,iVar3,iVar3);
  }
  iVar6 = FUN_04fada68(0x28);
  iVar7 = FUN_04fada68(0x1e);
  iVar2 = *(int *)(this + 0x54);
  iVar3 = FUN_04fada68(0x3c);
  iVar4 = FUN_04fada68(0x19);
  Sexy::Insets::Insets(aIStack_18,iVar6,iVar2 - iVar7,iVar3,iVar4);
  uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba7830);
  Draw3SliceImage(param_1,aIStack_18,uVar8);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xe4));
  Sexy::ToSexyString(aSStack_38,extraout_x1);
  iVar6 = FUN_04fada68(0x1c);
  iVar2 = *(int *)(this + 0x54);
  iVar7 = FUN_04fada68(0x19);
  Sexy::Insets::Insets(aIStack_28,0,iVar2 - iVar6,*(int *)(this + 0x50),iVar7);
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,&iStack_30,aIStack_28,uVar8,aIStack_18,5,1);
  FUN_05476c50(&iStack_30);
  std::string::~string((string *)aSStack_38);
  if (this[0x138] != (CommonRewardItemWidget)0x0) {
    pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba7cd0);
    iVar2 = FUN_04fada68(0x21);
    iVar6 = FUN_04fada68(0x23);
    iVar7 = FUN_04fada68(0x50);
    iVar3 = FUN_04fada68(0x30);
    Sexy::Graphics::DrawImage(param_1,pIVar11,iVar2,iVar6,iVar7,iVar3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CommonRewardItemWidget::init() */

void __thiscall CommonRewardItemWidget::init(CommonRewardItemWidget *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  DIniFile *this_00;
  string *extraout_x1;
  string asStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [16];
  wstring awStack_58 [16];
  wstring awStack_48 [16];
  int local_38;
  int iStack_34;
  undefined8 uStack_30;
  undefined1 auStack_28 [16];
  string asStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04fada68(0x19);
  iVar2 = FUN_04fada68(0x1e);
  iVar3 = FUN_04fada68(0x50);
  Sexy::Insets::Insets((Insets *)&local_38,iVar1,iVar2,iVar3,iVar3);
  *(ulong *)(this + 0xec) = CONCAT44(iStack_34,local_38);
  *(undefined8 *)(this + 0xf4) = uStack_30;
  if (*(long *)(this + 0x120) == 0) {
    iVar1 = MaterialItemMapper::GetInstance();
    NameMapperBase::GetNameForId(iVar1);
    Sexy::StringToUpper((Sexy *)awStack_58,extraout_x1);
    std::operator+("IMAGE_UI_FRAGMENT_MATERIAL_",(string *)awStack_48);
    uVar4 = StringHelper::ToImage((string *)&local_38,false);
    *(undefined8 *)(this + 0x120) = uVar4;
    std::string::~string((string *)&local_38);
    std::string::~string((string *)awStack_48);
    std::string::~string((string *)awStack_58);
  }
  if (*(int *)(this + 0xe8) == 0) {
    this[0x138] = (CommonRewardItemWidget)0x1;
  }
  iVar1 = *(int *)(this + 0xd8);
  if (iVar1 == 0xbc0) {
    TodStringTranslate(L"[GEM_BUY_GEM]");
    Sexy::StrFormat(L"x%d",awStack_48,(ulong)*(uint *)(this + 0xdc));
    std::operator+(awStack_58,awStack_48);
    FUN_054766c8(this + 0x100,(Insets *)&local_38);
    FUN_05476c50((Insets *)&local_38);
    FUN_05476c50(awStack_48);
    FUN_05476c50(awStack_58);
    uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba78a8);
    *(undefined8 *)(this + 0x108) = uVar4;
    goto LAB_04fb2a04;
  }
  if (iVar1 == 0xfad) {
    TodStringTranslate(L"[LOTTERY_GOLD]");
    Sexy::StrFormat(L"x%d",awStack_48,(ulong)*(uint *)(this + 0xdc));
    std::operator+(awStack_58,awStack_48);
    FUN_054766c8(this + 0x100,(Insets *)&local_38);
    FUN_05476c50((Insets *)&local_38);
    FUN_05476c50(awStack_48);
    FUN_05476c50(awStack_58);
    uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba7950);
    *(undefined8 *)(this + 0x108) = uVar4;
    goto LAB_04fb2a04;
  }
  GetGameItemInfo(iVar1,0x7fffffff,0);
  if (local_38 != 0) {
    if (iStack_34 == 0x20) {
LAB_04fb2da8:
      Sexy::StrFormat(L"x%d",awStack_58,(ulong)*(uint *)(this + 0xdc));
      std::operator+(awStack_10,awStack_58);
      FUN_054766c8(this + 0x100,awStack_48);
      FUN_05476c50(awStack_48);
      FUN_05476c50(awStack_58);
      uVar4 = StringHelper::ToImage(asStack_18,false);
      *(undefined8 *)(this + 0x108) = uVar4;
    }
    else if (iStack_34 < 0x21) {
      if (iStack_34 != 4) {
        if (iStack_34 < 5) {
          if (iStack_34 == 1) goto LAB_04fb2b14;
          if (iStack_34 == 2) {
            *(undefined4 *)(this + 0x128) = 2;
            thunk_FUN_05475e00(this + 0x130,auStack_28);
            Sexy::StrFormat(L"x%d",awStack_58,(ulong)*(uint *)(this + 0xdc));
            std::operator+(awStack_10,awStack_58);
            FUN_054766c8(this + 0x100,awStack_48);
            FUN_05476c50(awStack_48);
            FUN_05476c50(awStack_58);
            goto LAB_04fb2a84;
          }
        }
        else {
          if (iStack_34 == 8) goto LAB_04fb2da8;
          if (iStack_34 == 0x10) goto LAB_04fb2b14;
        }
        goto LAB_04fb2a80;
      }
LAB_04fb2b14:
      thunk_FUN_05477b9c(this + 0x100,awStack_10);
      uVar4 = StringHelper::ToImage(asStack_18,false);
      *(undefined8 *)(this + 0x108) = uVar4;
    }
    else {
      if (iStack_34 == 0x2000) goto LAB_04fb2da8;
      if (iStack_34 < 0x2001) {
        if (iStack_34 == 0x100) goto LAB_04fb2da8;
        if (iStack_34 == 0x1000) goto LAB_04fb2b14;
      }
      else {
        if (iStack_34 == 0x8000) {
          thunk_FUN_05477b9c(this + 0x100,awStack_10);
          uVar4 = StringHelper::ToImage(asStack_18,false);
          *(undefined8 *)(this + 0x108) = uVar4;
          DSingleton<HeadshotConfig>::getInstance();
          nop();
          DString::DString((DString *)awStack_48,*(int *)(this + 0xd8));
          DString::operator_cast_to_string((DString *)awStack_48);
          std::string::string((string *)awStack_58,"frame");
          iVar1 = DIniFile::getItemInt(this_00,asStack_68,(string *)awStack_58,1);
          std::string::~string((string *)awStack_58);
          nop();
          std::string::~string(asStack_68);
          DString::~DString((DString *)awStack_48);
          DString::DString((DString *)asStack_68,iVar1);
          ::operator+("IMAGE_UI_HEADSHOTFRAME_LV",(DString *)asStack_68);
          ::operator+((DString *)awStack_58,"_1");
          DString::operator_cast_to_string((DString *)awStack_48);
          DString::~DString((DString *)awStack_48);
          DString::~DString((DString *)awStack_58);
          DString::~DString((DString *)asStack_68);
          uVar4 = StringHelper::ToImage(asStack_78,false);
          *(undefined8 *)(this + 0x110) = uVar4;
          DString::DString((DString *)asStack_68,iVar1);
          ::operator+("IMAGE_UI_HEADSHOTFRAME_LV",(DString *)asStack_68);
          ::operator+((DString *)awStack_58,"_2");
          DString::operator_cast_to_string((DString *)awStack_48);
          DString::~DString((DString *)awStack_48);
          DString::~DString((DString *)awStack_58);
          DString::~DString((DString *)asStack_68);
          uVar4 = StringHelper::ToImage(asStack_70,false);
          *(undefined8 *)(this + 0x118) = uVar4;
          std::string::~string(asStack_70);
          std::string::~string(asStack_78);
          goto LAB_04fb2a84;
        }
        if ((iStack_34 == 0x10000) || (iStack_34 == 0x4000)) goto LAB_04fb2b14;
      }
LAB_04fb2a80:
      *(undefined8 *)(this + 0x108) = 0;
    }
  }
LAB_04fb2a84:
  GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_38);
LAB_04fb2a04:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

