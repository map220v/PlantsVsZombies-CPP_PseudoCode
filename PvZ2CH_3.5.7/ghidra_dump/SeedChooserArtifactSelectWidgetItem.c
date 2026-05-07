// Class: SeedChooserArtifactSelectWidgetItem


/* SeedChooserArtifactSelectWidgetItem::~SeedChooserArtifactSelectWidgetItem() */

void __thiscall
SeedChooserArtifactSelectWidgetItem::~SeedChooserArtifactSelectWidgetItem
          (SeedChooserArtifactSelectWidgetItem *this)

{
  *(undefined ***)this = &PTR_GetClass_06848a40;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* SeedChooserArtifactSelectWidgetItem::~SeedChooserArtifactSelectWidgetItem() */

void __thiscall
SeedChooserArtifactSelectWidgetItem::~SeedChooserArtifactSelectWidgetItem
          (SeedChooserArtifactSelectWidgetItem *this)

{
  ~SeedChooserArtifactSelectWidgetItem(this);
  AK::FreeHook(this);
  return;
}


/* SeedChooserArtifactSelectWidgetItem::SeedChooserArtifactSelectWidgetItem() */

void __thiscall
SeedChooserArtifactSelectWidgetItem::SeedChooserArtifactSelectWidgetItem
          (SeedChooserArtifactSelectWidgetItem *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined4 *)(this + 0xd4) = 0;
  this[0xd8] = (SeedChooserArtifactSelectWidgetItem)0x0;
  this[0xd9] = (SeedChooserArtifactSelectWidgetItem)0x0;
  *(undefined ***)this = &PTR_GetClass_06848a40;
  *(undefined8 *)(this + 0xf0) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooserArtifactSelectWidgetItem::InitView(ArtifactInfo) */

void __thiscall
SeedChooserArtifactSelectWidgetItem::InitView
          (SeedChooserArtifactSelectWidgetItem *this,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  SeedChooserArtifactSelectWidgetItem SVar3;
  char cVar4;
  int iVar5;
  NameMapperBase *this_00;
  undefined8 uVar6;
  string *extraout_x1;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0xe0) = *param_2;
  *(undefined4 *)(this + 0xe4) = uVar1;
  *(undefined4 *)(this + 0xe8) = uVar2;
  iVar5 = ArtifactMapper::GetInstance();
  NameMapperBase::GetNameForId(iVar5);
  SVar3 = (SeedChooserArtifactSelectWidgetItem)LocalProfileSaveData::IsFavoriteArtifact(asStack_20);
  this[0xd9] = SVar3;
  this_00 = (NameMapperBase *)ArtifactMapper::GetInstance();
  cVar4 = NameMapperBase::ContainsId(this_00,*(int *)(this + 0xe0));
  if (cVar4 == '\0') {
    *(undefined8 *)(this + 0xf0) = 0;
  }
  else {
    Sexy::StringToUpper((Sexy *)asStack_20,extraout_x1);
    std::operator+("IMAGE_UI_ARTIFACT_",asStack_18);
    uVar6 = StringHelper::ToImage(asStack_10,false);
    *(undefined8 *)(this + 0xf0) = uVar6;
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
  }
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SeedChooserArtifactSelectWidgetItem::Update() */

void __thiscall
SeedChooserArtifactSelectWidgetItem::Update(SeedChooserArtifactSelectWidgetItem *this)

{
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined4 uVar1;
  
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  uVar1 = PlayerInfo::GetCurrentArtifact(this_01);
  *(undefined4 *)(this + 0xd4) = uVar1;
  return;
}


/* SeedChooserArtifactSelectWidgetItem::TouchEnded(Sexy::Touch const&) */

void __thiscall
SeedChooserArtifactSelectWidgetItem::TouchEnded
          (SeedChooserArtifactSelectWidgetItem *this,Touch *param_1)

{
  if (*(int *)(this + 0xdc) != (int)*(undefined8 *)param_1) {
    return;
  }
  MessageRouter::Broadcast<int,int>
            ((MessageRouter *)gMessageRouter,Message::SelectSeedChooserArtifactSelectWidget,
             *(int *)(this + 0xe0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooserArtifactSelectWidgetItem::Draw(Sexy::Graphics*) */

void __thiscall
SeedChooserArtifactSelectWidgetItem::Draw
          (SeedChooserArtifactSelectWidgetItem *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  Image *pIVar5;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  string asStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b070b8);
  Draw9SliceImage(param_1,aIStack_18,uVar4);
  if (*(long *)(this + 0xf0) != 0) {
    iVar1 = FUN_0441bf40(5);
    iVar2 = FUN_0441bf40(10);
    Sexy::Insets::Insets
              (aIStack_18,iVar1,iVar1,*(int *)(this + 0x50) - iVar2,*(int *)(this + 0x54) - iVar2);
    DrawAdaptiveImage(param_1,aIStack_18,*(undefined8 *)(this + 0xf0));
  }
  if (this[0xd9] == (SeedChooserArtifactSelectWidgetItem)0x0) {
    iVar1 = *(int *)(this + 0xe4);
    if (iVar1 != 1) goto LAB_0442d328;
LAB_0442d4b4:
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07538;
  }
  else {
    iVar1 = FUN_0441bf40(5);
    iVar2 = FUN_0441bf40(0x19);
    Sexy::Insets::Insets(aIStack_18,iVar1,iVar1,iVar2,iVar2);
    uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07458);
    DrawAdaptiveImage(param_1,aIStack_18,uVar4);
    iVar1 = *(int *)(this + 0xe4);
    if (iVar1 == 1) goto LAB_0442d4b4;
LAB_0442d328:
    if (iVar1 == 2) {
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b070e0;
    }
    else if (iVar1 == 3) {
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07600;
    }
    else {
      if (iVar1 != 4) goto LAB_0442d340;
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07170;
    }
  }
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
  iVar1 = FUN_0441bf40(0x46);
  iVar2 = FUN_0441bf40(0x1e);
  iVar3 = FUN_0441bf40(0x28);
  Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,0,iVar2,iVar3);
LAB_0442d340:
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xe8));
  Sexy::ToWString(asStack_38);
  iVar1 = FUN_0441bf40(0x46);
  iVar2 = FUN_0441bf40(0x19);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar1,iVar2,iVar2);
  uVar4 = PrimeText_PotentialTypeface::Typeface
                    (PrimeText_Game::Typeface_CafeteriaBlack_24_HardShadow);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar4,aIStack_18,5,1);
  FUN_05476c50(auStack_30);
  std::string::~string(asStack_38);
  if (*(int *)(this + 0xd4) == *(int *)(this + 0xe0)) {
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07338);
    Sexy::Graphics::DrawImage(param_1,pIVar5,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
  if (this[0xd8] != (SeedChooserArtifactSelectWidgetItem)0x0) {
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07408);
    Sexy::Graphics::DrawImage(param_1,pIVar5,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

