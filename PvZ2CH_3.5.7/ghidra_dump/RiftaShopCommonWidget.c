// Class: RiftaShopCommonWidget


/* RiftaShopCommonWidget::~RiftaShopCommonWidget() */

void __thiscall RiftaShopCommonWidget::~RiftaShopCommonWidget(RiftaShopCommonWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_069b8cb0;
  FUN_05476c50(this + 0x1a0);
  FUN_05476c50(this + 400);
  CommonRewardItemWidget::~CommonRewardItemWidget((CommonRewardItemWidget *)this);
  return;
}


/* RiftaShopCommonWidget::~RiftaShopCommonWidget() */

void __thiscall RiftaShopCommonWidget::~RiftaShopCommonWidget(RiftaShopCommonWidget *this)

{
  ~RiftaShopCommonWidget(this);
  AK::FreeHook(this);
  return;
}


/* RiftaShopCommonWidget::RiftaShopCommonWidget(int) */

void __thiscall
RiftaShopCommonWidget::RiftaShopCommonWidget(RiftaShopCommonWidget *this,int param_1)

{
  undefined4 uVar1;
  
  CommonRewardItemWidget::CommonRewardItemWidget((CommonRewardItemWidget *)this);
  *(int *)(this + 0x180) = param_1;
  *(undefined ***)this = &PTR_GetClass_069b8cb0;
  FUN_05476574(this + 400);
  FUN_05476574(this + 0x1a0);
  *(undefined4 *)(this + 0x184) = 0;
  *(undefined4 *)(this + 0x188) = 0;
  FUN_054772c4(this + 400,&DAT_056f11a8);
  this[0x198] = (RiftaShopCommonWidget)0x0;
  FUN_054772c4(this + 0x1a0,&DAT_056f11a8);
  uVar1 = FUN_04d84c28(0);
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined4 *)(this + 0x1a8) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftaShopCommonWidget::SetLockDescriptionIndex(int) */

void __thiscall
RiftaShopCommonWidget::SetLockDescriptionIndex(RiftaShopCommonWidget *this,int param_1)

{
  string asStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  *(int *)(this + 0x188) = param_1;
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat("[RIFTA_SHOP_ITEM_LOCK_DESCRIPTION_%d]",asStack_18);
  StringHelper::ToStringValue(asStack_18);
  FUN_054766c8(this + 400,auStack_10);
  FUN_05476c50(auStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftaShopCommonWidget::ClickCallback() */

void __thiscall RiftaShopCommonWidget::ClickCallback(RiftaShopCommonWidget *this)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  UIMessageBox *this_02;
  Image *pIVar2;
  long lVar3;
  NetworkMgr *this_03;
  long *plVar4;
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = PlayerInfo::GetMaterialNum(this_01,0x5a35);
  if (iVar1 < *(int *)(this + 0xe4)) {
    this_02 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (this_02 != (UIMessageBox *)0x0) {
      UIMessageBox::SetShowType(this_02,4);
      TodStringTranslate(L"[REVIVE_TIP]");
      TodStringTranslate(L"[MAT_RIFT_COIN_NOT_ENOUGH]");
      TodStringTranslate(L"[BUTTON_OK]");
      UIMessageBox::SetMessage(this_02,awStack_20,awStack_28);
      std::string::string(asStack_10,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar2 = (Image *)StringHelper::ToImage(asStack_10,false);
      UIMessageBox::SetBackground(this_02,pIVar2);
      std::string::~string(asStack_10);
      nop();
      lVar3 = UIMessageBox::GetButtonCancel(this_02);
      thunk_FUN_05477b9c(lVar3 + 0xd8,auStack_18);
      FUN_05476c50(auStack_18);
      FUN_05476c50(awStack_20);
      FUN_05476c50(awStack_28);
    }
  }
  else {
    this_03 = (NetworkMgr *)NetworkMgr::Instance();
    plVar4 = (long *)NetworkMgr::GetNewNetWorkProcess(this_03);
    (**(code **)(*plVar4 + 0x370))
              (plVar4,8,*(undefined4 *)(this + 0xd8),*(undefined4 *)(this + 0xdc),
               *(undefined4 *)(this + 0xe0),*(undefined4 *)(this + 0xe4));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftaShopCommonWidget::init() */

void __thiscall RiftaShopCommonWidget::init(RiftaShopCommonWidget *this)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  undefined8 uVar8;
  string *psVar9;
  long lVar10;
  RiftaShopButton *this_00;
  string *extraout_x1;
  undefined1 uVar11;
  CornucopiaShopButton *pCVar12;
  Sexy aSStack_b0 [8];
  Delegate0 aDStack_a8 [48];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [56];
  int local_40;
  int iStack_3c;
  undefined8 uStack_38;
  undefined1 auStack_30 [16];
  string asStack_20 [8];
  undefined1 auStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_04d84c28(0x19);
  iVar4 = FUN_04d84c28(0x1e);
  iVar5 = FUN_04d84c28(0x50);
  Sexy::Insets::Insets((Insets *)&local_40,iVar3,iVar4,iVar5,iVar5);
  *(ulong *)(this + 0xec) = CONCAT44(iStack_3c,local_40);
  *(undefined8 *)(this + 0xf4) = uStack_38;
  if (*(long *)(this + 0x120) == 0) {
    iVar3 = MaterialItemMapper::GetInstance();
    NameMapperBase::GetNameForId(iVar3);
    Sexy::StringToUpper(aSStack_b0,extraout_x1);
    std::operator+("IMAGE_UI_FRAGMENT_MATERIAL_",(string *)aRStack_78);
    uVar8 = StringHelper::ToImage((string *)&local_40,false);
    *(undefined8 *)(this + 0x120) = uVar8;
    std::string::~string((string *)&local_40);
    std::string::~string((string *)aRStack_78);
    std::string::~string((string *)aSStack_b0);
  }
  if (*(int *)(this + 0xe8) == 0) {
    this[0x138] = (RiftaShopCommonWidget)0x1;
LAB_04d86ddc:
    plVar7 = *(long **)(this + 0x1b0);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x158))(plVar7,0);
    }
LAB_04d86df4:
    iVar3 = *(int *)(this + 0xd8);
  }
  else {
    if ((this[0x138] != (RiftaShopCommonWidget)0x0) || (*(int *)(this + 0x184) == 2))
    goto LAB_04d86ddc;
    plVar7 = *(long **)(this + 0x1b0);
    if (plVar7 == (long *)0x0) {
      this_00 = ::operator_new(0x368);
      RiftaShopButton::RiftaShopButton(this_00,*(int *)(this + 0x180));
      *(RiftaShopButton **)(this + 0x1b0) = this_00;
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aRStack_78,&DAT_06b98278,3);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b980e8,3);
      PVZ2UIButton::SetDialogStates
                ((PVZ2UIButton *)this_00,(PVZ2UIImage *)aRStack_78,(PVZ2UIImage *)&local_40);
      uVar6 = FUN_04d84c28(0x2d);
      uVar1 = (int)*(uint *)(this + 0x1a8) >> 0x1f;
      iVar3 = (*(uint *)(this + 0x1a8) ^ uVar1) - uVar1;
      uVar1 = *(int *)(this + 0x54) + (iVar3 / 2) * -4;
      Sexy::OutputDebugStrF
                ((wchar_t *)"init rifta shop button x = %d y = %d w = %d h = %d",(ulong)uVar6,
                 (ulong)uVar1,(ulong)(uVar6 * -2 + *(int *)(this + 0x50)),(ulong)(uint)(iVar3 * 2));
      uVar2 = *(uint *)(this + 0x1a8);
      (**(code **)(**(long **)(this + 0x1b0) + 0x198))
                (*(long **)(this + 0x1b0),(ulong)uVar6,uVar1,uVar6 * -2 + *(int *)(this + 0x50),
                 ((uVar2 ^ (int)uVar2 >> 0x3f) - ((int)uVar2 >> 0x1f)) * 2);
      RiftaShopButton::InitView(*(RiftaShopButton **)(this + 0x1b0));
      FUN_04d84448(*(long *)(this + 0x1b0) + 0x328,*(undefined8 *)(this + 0x120));
      CornucopiaShopButton::SetItemAmount((int)*(undefined8 *)(this + 0x1b0));
      pCVar12 = *(CornucopiaShopButton **)(this + 0x1b0);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,ClickCallback);
      Sexy::Delegate0::Delegate0<RiftaShopCommonWidget,void(RiftaShopCommonWidget::*)()>
                (aDStack_a8,(Insets *)&local_40);
      CornucopiaShopButton::SetClickCallback(pCVar12,aDStack_a8);
      (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x1b0));
      goto LAB_04d86df4;
    }
    (**(code **)(*plVar7 + 0x158))(plVar7,1);
    iVar3 = *(int *)(this + 0xd8);
  }
  if (iVar3 == 0xbc0) {
    iVar3 = 0;
    uVar11 = false;
    TodStringTranslate(L"[GEM_BUY_GEM]");
    FUN_054766c8(this + 0x100,(Insets *)&local_40);
    FUN_05476c50((Insets *)&local_40);
    Sexy::StrFormat(L"x%d",(Insets *)&local_40,(ulong)*(uint *)(this + 0xdc));
    FUN_054766c8(this + 0x1a0,(Insets *)&local_40);
    FUN_05476c50((Insets *)&local_40);
    this[0x198] = (RiftaShopCommonWidget)0x1;
    uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b982f8);
    *(undefined8 *)(this + 0x108) = uVar8;
    goto LAB_04d86e74;
  }
  if (iVar3 == 0xfad) {
    iVar3 = 0;
    uVar11 = false;
    TodStringTranslate(L"[LOTTERY_GOLD]");
    FUN_054766c8(this + 0x100,(Insets *)&local_40);
    FUN_05476c50((Insets *)&local_40);
    Sexy::StrFormat(L"x%d",(Insets *)&local_40,(ulong)*(uint *)(this + 0xdc));
    FUN_054766c8(this + 0x1a0,(Insets *)&local_40);
    FUN_05476c50((Insets *)&local_40);
    this[0x198] = (RiftaShopCommonWidget)0x1;
    uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b97f40);
    *(undefined8 *)(this + 0x108) = uVar8;
    goto LAB_04d86e74;
  }
  GetGameItemInfo(iVar3,0x7fffffff,0);
  uVar11 = (undefined1)local_40;
  iVar3 = 0;
  if (local_40 != 0) {
    if (iStack_3c == 0x10) {
LAB_04d87260:
      iVar3 = 0;
      iVar4 = iVar3;
LAB_04d86fc4:
      uVar11 = (undefined1)iVar4;
      thunk_FUN_05477b9c(this + 0x100,auStack_18);
      uVar8 = StringHelper::ToImage(asStack_20,false);
      *(undefined8 *)(this + 0x108) = uVar8;
    }
    else {
      if (iStack_3c < 0x11) {
        if (iStack_3c != 2) {
          if (iStack_3c < 3) {
            if (iStack_3c == 1) {
              psVar9 = (string *)
                       Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
              ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar9);
              lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
              iVar3 = *(int *)(lVar10 + 0xd0);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
              iVar4 = 1;
              goto LAB_04d86fc4;
            }
          }
          else {
            if (iStack_3c == 4) goto LAB_04d87260;
            if (iStack_3c == 8) goto LAB_04d871b0;
          }
          goto LAB_04d8721c;
        }
        *(undefined4 *)(this + 0x128) = 2;
        thunk_FUN_05475e00(this + 0x130,auStack_30);
        thunk_FUN_05477b9c(this + 0x100,auStack_18);
        uVar1 = *(uint *)(this + 0xdc);
      }
      else {
        if (iStack_3c != 0x100) {
          if (iStack_3c < 0x101) {
            if (iStack_3c == 0x20) goto LAB_04d871b0;
          }
          else {
            if (iStack_3c == 0x1000) goto LAB_04d87260;
            if (iStack_3c == 0x2000) goto LAB_04d871b0;
          }
LAB_04d8721c:
          iVar3 = 0;
          *(undefined8 *)(this + 0x108) = 0;
          uVar11 = 0;
          goto LAB_04d86fe0;
        }
LAB_04d871b0:
        thunk_FUN_05477b9c(this + 0x100,auStack_18);
        uVar8 = StringHelper::ToImage(asStack_20,false);
        *(undefined8 *)(this + 0x108) = uVar8;
        uVar1 = *(uint *)(this + 0xdc);
      }
      iVar3 = 0;
      uVar11 = 0;
      Sexy::StrFormat(L"x%d",aRStack_78,(ulong)uVar1);
      FUN_054766c8(this + 0x1a0,aRStack_78);
      FUN_05476c50(aRStack_78);
      this[0x198] = (RiftaShopCommonWidget)0x1;
    }
  }
LAB_04d86fe0:
  GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_40);
LAB_04d86e74:
  CommonRewardItemWidget::SetBgImageRare((CommonRewardItemWidget *)this,(bool)uVar11,iVar3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftaShopCommonWidget::Draw(Sexy::Graphics*) */

void __thiscall RiftaShopCommonWidget::Draw(RiftaShopCommonWidget *this,Graphics *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  Image *pIVar7;
  SeedPacketUtils *this_00;
  RtWeakPtr *this_01;
  ResourceInfo *pRVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  int iStack_40;
  int iStack_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(Image **)(this + 0x178) == (Image *)0x0) {
    pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b97e18);
    Sexy::Graphics::DrawImage
              (param_1,pIVar7,0,0,*(int *)(this + 0x50),
               *(int *)(this + 0x54) + *(int *)(this + 0x1a8));
  }
  else {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0x178),0,0,*(int *)(this + 0x50),
               *(int *)(this + 0x54) + *(int *)(this + 0x1a8));
  }
  iVar2 = FUN_04d84c28(0x19);
  Sexy::Insets::Insets((Insets *)&local_28,0,0,*(int *)(this + 0x50),iVar2);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x100,(Insets *)&local_28,uVar6,aIStack_18,5,1);
  if (*(int *)(this + 0x128) == 2) {
    this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
    this_01 = (RtWeakPtr *)
              SeedPacketUtils::GetPlantPiecePacketRenderData(this_00,(string *)(this + 0x130));
    fVar11 = ((float)*(int *)(this + 0xf4) * 0.9) / (float)*(int *)(this_01 + 0x28);
    fVar10 = ((float)*(int *)(this + 0xf8) * 0.9) / (float)*(int *)(this_01 + 0x2c);
    Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)(this_01 + 0x170));
    GetImageOffset(&iStack_40,aIStack_18);
    Sexy::RtId::~RtId((RtId *)aIStack_18);
    UIWidget::ConvertPSDImageOffsetToUISpace(&iStack_40,&iStack_3c,1536.0);
    Sexy::Insets::Insets
              ((Insets *)&local_38,
               (int)((float)*(int *)(this + 0xec) + (float)*(int *)(this_01 + 0x30) * fVar11),
               (int)((float)*(int *)(this + 0xf0) + (float)*(int *)(this_01 + 0x34) * fVar10),
               (int)(fVar11 * (float)*(int *)(this_01 + 0x28)),
               (int)(fVar10 * (float)*(int *)(this_01 + 0x2c)));
    pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01 + 0x170);
    iVar2 = FUN_04d84c28(0x19);
    iVar3 = FUN_04d84c28(10);
    Sexy::Insets::Insets(aIStack_18,local_38 + iVar2,local_34 + iVar3,local_30,local_2c);
    Sexy::Graphics::DrawImage(param_1,(Image *)pRVar8,(TRect *)aIStack_18,(TRect *)(this_01 + 0x20))
    ;
    Sexy::Insets::Insets
              ((Insets *)&local_28,
               (int)((float)*(int *)(this + 0xec) + (float)*(int *)(this_01 + 0x18) * fVar11),
               (int)((float)*(int *)(this + 0xf0) + (float)*(int *)(this_01 + 0x1c) * fVar10),
               (int)(fVar11 * (float)*(int *)(this_01 + 0x10)),
               (int)(fVar10 * (float)*(int *)(this_01 + 0x14)));
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
    if (bVar1) {
      lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
      pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar9 + 0x48));
      iVar2 = FUN_04d84c28(0x19);
      iVar3 = FUN_04d84c28(10);
      Sexy::Insets::Insets(aIStack_18,local_28 + iVar2,local_24 + iVar3,local_20,local_1c);
      Sexy::Graphics::DrawImage(param_1,(Image *)pRVar8,(TRect *)aIStack_18,(TRect *)(this_01 + 8));
    }
  }
  else if (*(long *)(this + 0x108) != 0) {
    iVar3 = FUN_04d84c28(0x19);
    iVar2 = *(int *)(this + 0xec);
    iVar4 = FUN_04d84c28(10);
    Sexy::Insets::Insets
              (aIStack_18,iVar3 + iVar2,iVar4 + *(int *)(this + 0xf0),*(int *)(this + 0xf4),
               *(int *)(this + 0xf8));
    DrawAdaptiveImage(param_1,aIStack_18,*(undefined8 *)(this + 0x108));
  }
  if (this[0x198] == (RiftaShopCommonWidget)0x0) {
    iVar2 = *(int *)(this + 0x184);
  }
  else {
    iVar2 = *(int *)(this + 0x54);
    iVar3 = *(int *)(this + 0x50);
    iVar4 = *(int *)(this + 0x1a8);
    iVar5 = FUN_04d84c28(0x32);
    Sexy::Insets::Insets((Insets *)&local_28,iVar3 / 2,iVar4 + iVar2 / 2,iVar3 / 2,iVar5);
    uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_32_ThickOutline)
    ;
    Sexy::Color::Color((Color *)aIStack_18,4);
    WriteWordInRect(param_1,this + 0x1a0,(Insets *)&local_28,uVar6,aIStack_18,3,1);
    iVar2 = *(int *)(this + 0x184);
  }
  if (iVar2 == 2) {
    iVar4 = FUN_04d84c28(0x1c);
    iVar2 = *(int *)(this + 0x54);
    iVar3 = *(int *)(this + 0x1a8);
    iVar5 = FUN_04d84c28(0x19);
    Sexy::Insets::Insets((Insets *)&local_28,0,(iVar2 - iVar4) + iVar3,*(int *)(this + 0x50),iVar5);
    uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline)
    ;
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_1,this + 400,(Insets *)&local_28,uVar6,aIStack_18,5,1);
  }
  else if (this[0x138] != (RiftaShopCommonWidget)0x0) {
    pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b980c0);
    iVar2 = FUN_04d84c28(0x28);
    iVar3 = FUN_04d84c28(0x50);
    iVar4 = FUN_04d84c28(0x30);
    Sexy::Graphics::DrawImage(param_1,pIVar7,iVar2,iVar2,iVar3,iVar4);
  }
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

