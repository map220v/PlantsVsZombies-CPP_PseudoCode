// Class: HappyVaseDisplayItem


/* HappyVaseDisplayItem::~HappyVaseDisplayItem() */

void __thiscall HappyVaseDisplayItem::~HappyVaseDisplayItem(HappyVaseDisplayItem *this)

{
  *(undefined ***)this = &PTR_GetClass_066fb3d0;
  FUN_05476c50(this + 0xd8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* HappyVaseDisplayItem::~HappyVaseDisplayItem() */

void __thiscall HappyVaseDisplayItem::~HappyVaseDisplayItem(HappyVaseDisplayItem *this)

{
  ~HappyVaseDisplayItem(this);
  AK::FreeHook(this);
  return;
}


/* HappyVaseDisplayItem::HappyVaseDisplayItem() */

void __thiscall HappyVaseDisplayItem::HappyVaseDisplayItem(HappyVaseDisplayItem *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_066fb3d0;
  FUN_05476574(this + 0xd8);
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  this[0xf4] = (HappyVaseDisplayItem)0x0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  return;
}


/* HappyVaseDisplayItem::GetItemID() */

undefined4 __thiscall HappyVaseDisplayItem::GetItemID(HappyVaseDisplayItem *this)

{
  return *(undefined4 *)(this + 0xe8);
}


/* HappyVaseDisplayItem::GetItemAmount() */

undefined4 __thiscall HappyVaseDisplayItem::GetItemAmount(HappyVaseDisplayItem *this)

{
  return *(undefined4 *)(this + 0xec);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HappyVaseDisplayItem::DrawItem(Sexy::Graphics*) */

void __thiscall HappyVaseDisplayItem::DrawItem(HappyVaseDisplayItem *this,Graphics *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  SeedPacketUtils *this_00;
  RtWeakPtr *this_01;
  ResourceInfo *pRVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  string asStack_48 [8];
  string asStack_40 [4];
  int iStack_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xf0) == 1) {
    Sexy::Insets::Insets((Insets *)&local_38,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    iVar2 = PlantChipNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar2);
    this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
    this_01 = (RtWeakPtr *)SeedPacketUtils::GetPlantPiecePacketRenderData(this_00,asStack_48);
    fVar8 = ((float)local_30 * 0.9) / (float)*(int *)(this_01 + 0x28);
    fVar7 = ((float)local_2c * 0.9) / (float)*(int *)(this_01 + 0x2c);
    Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)(this_01 + 0x170));
    GetImageOffset(asStack_40,(RtId *)aIStack_18);
    Sexy::RtId::~RtId((RtId *)aIStack_18);
    UIWidget::ConvertPSDImageOffsetToUISpace((int *)asStack_40,&iStack_3c,1536.0);
    Sexy::Insets::Insets
              (aIStack_28,(int)((float)local_38 + (float)*(int *)(this_01 + 0x30) * fVar8),
               (int)((float)local_34 + (float)*(int *)(this_01 + 0x34) * fVar7),
               (int)(fVar8 * (float)*(int *)(this_01 + 0x28)),
               (int)(fVar7 * (float)*(int *)(this_01 + 0x2c)));
    pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01 + 0x170);
    Sexy::Graphics::DrawImage(param_1,(Image *)pRVar5,(TRect *)aIStack_28,(TRect *)(this_01 + 0x20))
    ;
    Sexy::Insets::Insets
              (aIStack_18,(int)((float)local_38 + (float)*(int *)(this_01 + 0x18) * fVar8),
               (int)((float)local_34 + (float)*(int *)(this_01 + 0x1c) * fVar7),
               (int)(fVar8 * (float)*(int *)(this_01 + 0x10)),
               (int)(fVar7 * (float)*(int *)(this_01 + 0x14)));
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
    if (bVar1) {
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
      pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar6 + 0x48));
      Sexy::Graphics::DrawImage(param_1,(Image *)pRVar5,(TRect *)aIStack_18,(TRect *)(this_01 + 8));
    }
    std::string::~string(asStack_48);
  }
  if (*(long *)(this + 0xf8) != 0) {
    iVar2 = FUN_03a0fa3c(4);
    iVar3 = FUN_03a0fa3c(8);
    Sexy::Insets::Insets
              (aIStack_18,iVar2,iVar2,*(int *)(this + 0x50) - iVar3,*(int *)(this + 0x54) - iVar3);
    DrawAdaptiveImage(param_1,aIStack_18,*(undefined8 *)(this + 0xf8));
  }
  if (1 < *(int *)(this + 0xec)) {
    Sexy::StrFormat("x%d",asStack_40);
    Sexy::ToWString(asStack_40);
    Sexy::Insets::Insets
              (aIStack_28,0,*(int *)(this + 0x54) / 2,*(int *)(this + 0x50),
               *(int *)(this + 0x54) / 2);
    uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
    Sexy::Color::Color((Color *)aIStack_18,0);
    WriteWordInRect(param_1,&local_38,aIStack_28,uVar4,(Color *)aIStack_18,2,1);
    FUN_05476c50(&local_38);
    std::string::~string(asStack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HappyVaseDisplayItem::TouchBegan(Sexy::Touch const&) */

void HappyVaseDisplayItem::TouchBegan(Touch *param_1)

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
                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac2cd8);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(this);
  iVar6 = (int)((float)iVar2 + (float)iVar2);
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac2cd8);
  iVar3 = SalesProgressBar::GetCurrentLevel(this_00);
  iVar2 = *(int *)(param_1 + 0x50);
  iVar4 = FUN_03a0fa3c(5);
  Sexy::Insets::Insets
            (aIStack_18,local_20 + (iVar2 - iVar6) / 2,
             (local_1c - (int)((float)iVar3 * 0.5)) + iVar4,iVar6,(int)((float)iVar3 * 0.5));
  lVar5 = *(long *)(param_1 + 0xe0);
  if (lVar5 == 0) {
    this_01 = ::operator_new(0xe8);
    memset(this_01,0,0xe8);
    StoneLotteryItemTipUI::StoneLotteryItemTipUI(this_01);
    uVar1 = *(uint *)(this_01 + 0x60);
    *(StoneLotteryItemTipUI **)(param_1 + 0xe0) = this_01;
    *(uint *)(this_01 + 0x60) = uVar1 | 0x10;
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))(*(long **)(gLawnApp + 0x360),this_01);
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(param_1 + 0xe0));
    lVar5 = *(long *)(param_1 + 0xe0);
  }
  PuzzleTip::SetTip(lVar5,param_1 + 0xd8);
  (**(code **)(**(long **)(param_1 + 0xe0) + 0x1a0))(*(long **)(param_1 + 0xe0),aIStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HappyVaseDisplayItem::Init(int, int) */

void __thiscall HappyVaseDisplayItem::Init(HappyVaseDisplayItem *this,int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  NameMapperBase *pNVar4;
  string *psVar5;
  long lVar6;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  Sexy aSStack_50 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  int local_38 [10];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0xe8) = param_1;
  *(int *)(this + 0xec) = param_2;
  if (param_1 == 0xbc0) {
    uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac2d30);
    *(undefined8 *)(this + 0xf8) = uVar3;
LAB_03a13c14:
    uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac2d00);
    *(undefined8 *)(this + 0x100) = uVar3;
  }
  else {
    if (param_1 == 0xfad) {
      uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac2c58);
      *(undefined8 *)(this + 0xf8) = uVar3;
      goto LAB_03a13c14;
    }
    pNVar4 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
    cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
    if (cVar1 == '\0') {
      pNVar4 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
      cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
      if (cVar1 != '\0') {
        iVar2 = PlantChipNameMapperServerID::GetInstance();
        NameMapperBase::GetNameForId(iVar2);
        psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_38);
        iVar2 = *(int *)(lVar6 + 0xd0);
        *(undefined4 *)(this + 0xf0) = 1;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_38);
        std::string::~string(asStack_40);
        goto LAB_03a13cf8;
      }
      pNVar4 = (NameMapperBase *)AvatarNameMapperServerID::GetInstance();
      cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
      if (cVar1 == '\0') {
        pNVar4 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
        cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
        if (cVar1 == '\0') {
          pNVar4 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
          cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
          if (cVar1 == '\0') {
            pNVar4 = (NameMapperBase *)PlantNewAvatarPieceMapper::GetInstance();
            cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
            if (cVar1 != '\0') goto LAB_03a13f50;
            pNVar4 = (NameMapperBase *)MaterialItemMapper::GetInstance();
            cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
            if (cVar1 == '\0') goto LAB_03a13c14;
            iVar2 = MaterialItemMapper::GetInstance();
            NameMapperBase::GetNameForId(iVar2);
            Sexy::StringToUpper((Sexy *)aRStack_48,extraout_x1_01);
            std::operator+("IMAGE_UI_FRAGMENT_MATERIAL_",asStack_40);
            uVar3 = StringHelper::ToImage((string *)local_38,false);
            *(undefined8 *)(this + 0xf8) = uVar3;
            std::string::~string((string *)local_38);
            std::string::~string(asStack_40);
            std::string::~string((string *)aRStack_48);
          }
          else {
            uVar3 = NewAvatar::GetAvatarTinyImage(param_1);
            *(undefined8 *)(this + 0xf8) = uVar3;
          }
        }
        else {
LAB_03a13f50:
          uVar3 = NewAvatar::Common_GetAvatarPieceImage(param_1);
          *(undefined8 *)(this + 0xf8) = uVar3;
        }
      }
      else {
        iVar2 = AvatarNameMapperServerID::GetInstance();
        NameMapperBase::GetNameForId(iVar2);
        Sexy::StringToUpper((Sexy *)aRStack_48,extraout_x1_00);
        std::operator+("IMAGE_UI_HEADSHOT_BIGAVATAR_",asStack_40);
        uVar3 = StringHelper::ToImage((string *)local_38,false);
        *(undefined8 *)(this + 0xf8) = uVar3;
        std::string::~string((string *)local_38);
        std::string::~string(asStack_40);
        if (*(long *)(this + 0xf8) == 0) {
          uVar3 = NewAvatar::GetAvatarTinyImage(param_1);
          *(undefined8 *)(this + 0xf8) = uVar3;
        }
        std::string::~string((string *)aRStack_48);
      }
      uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac2d00);
      *(undefined8 *)(this + 0x100) = uVar3;
LAB_03a13e90:
      uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac2a50);
      *(undefined8 *)(this + 0x100) = uVar3;
      goto LAB_03a13c34;
    }
    iVar2 = PlantNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar2);
    psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
    Sexy::StringToUpper(aSStack_50,extraout_x1);
    std::operator+("IMAGE_UI_HEADSHOT_PLANT_",asStack_40);
    uVar3 = StringHelper::ToImage((string *)local_38,false);
    *(undefined8 *)(this + 0xf8) = uVar3;
    std::string::~string((string *)local_38);
    std::string::~string(asStack_40);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
    iVar2 = *(int *)(lVar6 + 0xd0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
    std::string::~string((string *)aSStack_50);
LAB_03a13cf8:
    uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac2d00);
    *(undefined8 *)(this + 0x100) = uVar3;
    if (iVar2 == -1) goto LAB_03a13e90;
    if (iVar2 != 0) {
      if (iVar2 == 1) {
        uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac2ad8);
        *(undefined8 *)(this + 0x100) = uVar3;
      }
      else if (iVar2 == 2) {
        uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac2be0);
        *(undefined8 *)(this + 0x100) = uVar3;
      }
      else if (iVar2 == 3) {
        uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac2b90);
        *(undefined8 *)(this + 0x100) = uVar3;
      }
      else if (iVar2 == 4) {
        uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac2aa8);
        *(undefined8 *)(this + 0x100) = uVar3;
      }
      goto LAB_03a13c34;
    }
  }
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac2d00);
  *(undefined8 *)(this + 0x100) = uVar3;
LAB_03a13c34:
  GetGameItemInfo(param_1,0x7fffffff,0);
  if (local_38[0] != 0) {
    thunk_FUN_05477b9c(this + 0xd8,auStack_10);
    if (0 < param_2) {
      Sexy::StrFormat(L"x%d",asStack_40,(ulong)(uint)param_2);
      thunk_FUN_05477668(this + 0xd8,asStack_40);
      FUN_05476c50(asStack_40);
    }
  }
  GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HappyVaseDisplayItem::Draw(Sexy::Graphics*) */

void __thiscall HappyVaseDisplayItem::Draw(HappyVaseDisplayItem *this,Graphics *param_1)

{
  bool bVar1;
  RenderEffectDefinition *pRVar2;
  RenderEffect *pRVar3;
  code *pcVar4;
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  if (this[0xf4] == (HappyVaseDisplayItem)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0x100),0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    DrawItem(this,param_1);
  }
  else {
    pRVar2 = (RenderEffectDefinition *)Sexy::Graphics::Get3D(param_1);
    CachedResourcePtr::operator_cast_to_RenderEffectDefinition_((CachedResourcePtr *)&DAT_06ac2bb8);
    pRVar3 = (RenderEffect *)Sexy::Graphics3D::GetEffect(pRVar2);
    pcVar4 = *(code **)(*(long *)pRVar3 + 0x38);
    std::string::string(asStack_20,"Default");
    (*pcVar4)(pRVar3,asStack_20,1);
    std::string::~string(asStack_20);
    nop();
    Sexy::RenderEffectAutoState::RenderEffectAutoState
              ((RenderEffectAutoState *)asStack_20,param_1,pRVar3,1);
    while (bVar1 = Sexy::RenderEffectAutoState::operator_cast_to_bool
                             ((RenderEffectAutoState *)asStack_20), bVar1) {
      Sexy::Graphics::DrawImage
                (param_1,*(Image **)(this + 0x100),0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
      DrawItem(this,param_1);
      Sexy::RenderEffectAutoState::operator++((RenderEffectAutoState *)asStack_20);
    }
    Sexy::RenderEffectAutoState::~RenderEffectAutoState((RenderEffectAutoState *)asStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

