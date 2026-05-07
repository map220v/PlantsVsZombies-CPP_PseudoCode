// Class: SeedChooserHeroPlantSelectWidgetItem


/* SeedChooserHeroPlantSelectWidgetItem::Update() */

void __thiscall
SeedChooserHeroPlantSelectWidgetItem::Update(SeedChooserHeroPlantSelectWidgetItem *this)

{
  undefined4 uVar1;
  
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  uVar1 = HeroPlantUtils::GetCurrentHeroPlant();
  *(undefined4 *)(this + 0xd4) = uVar1;
  return;
}


/* SeedChooserHeroPlantSelectWidgetItem::~SeedChooserHeroPlantSelectWidgetItem() */

void __thiscall
SeedChooserHeroPlantSelectWidgetItem::~SeedChooserHeroPlantSelectWidgetItem
          (SeedChooserHeroPlantSelectWidgetItem *this)

{
  *(undefined ***)this = &PTR_GetClass_06849130;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* SeedChooserHeroPlantSelectWidgetItem::~SeedChooserHeroPlantSelectWidgetItem() */

void __thiscall
SeedChooserHeroPlantSelectWidgetItem::~SeedChooserHeroPlantSelectWidgetItem
          (SeedChooserHeroPlantSelectWidgetItem *this)

{
  ~SeedChooserHeroPlantSelectWidgetItem(this);
  AK::FreeHook(this);
  return;
}


/* SeedChooserHeroPlantSelectWidgetItem::SeedChooserHeroPlantSelectWidgetItem() */

void __thiscall
SeedChooserHeroPlantSelectWidgetItem::SeedChooserHeroPlantSelectWidgetItem
          (SeedChooserHeroPlantSelectWidgetItem *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined4 *)(this + 0xd4) = 0;
  this[0xd8] = (SeedChooserHeroPlantSelectWidgetItem)0x0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined ***)this = &PTR_GetClass_06849130;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooserHeroPlantSelectWidgetItem::InitView(int) */

void __thiscall
SeedChooserHeroPlantSelectWidgetItem::InitView
          (SeedChooserHeroPlantSelectWidgetItem *this,int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  NameMapperBase *this_00;
  undefined8 uVar4;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  string *extraout_x1;
  Sexy aSStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  *(int *)(this + 0xe0) = param_1;
  local_8 = ___stack_chk_guard;
  this_00 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  cVar1 = NameMapperBase::ContainsId(this_00,*(int *)(this + 0xe0));
  if (cVar1 == '\0') {
    *(undefined8 *)(this + 0xe8) = 0;
    *(undefined4 *)(this + 0xe4) = 0;
  }
  else {
    iVar2 = PlantNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar2);
    Sexy::StringToUpper(aSStack_20,extraout_x1);
    std::operator+("IMAGE_UI_HEROPLANT_BUTTON_",asStack_18);
    uVar4 = StringHelper::ToImage(asStack_10,false);
    *(undefined8 *)(this + 0xe8) = uVar4;
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    uVar3 = PlayerInfo::GetPlantStarLevel(this_02,(string *)aSStack_20,false);
    *(undefined4 *)(this + 0xe4) = uVar3;
    std::string::~string((string *)aSStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooserHeroPlantSelectWidgetItem::Draw(Sexy::Graphics*) */

void __thiscall
SeedChooserHeroPlantSelectWidgetItem::Draw
          (SeedChooserHeroPlantSelectWidgetItem *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  Image *pIVar5;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b070b8);
  Draw9SliceImage(param_1,aIStack_18,uVar4);
  if (*(long *)(this + 0xe8) != 0) {
    iVar1 = FUN_0441bf40(5);
    iVar2 = FUN_0441bf40(10);
    Sexy::Insets::Insets
              (aIStack_18,iVar1,iVar1,*(int *)(this + 0x50) - iVar2,*(int *)(this + 0x54) - iVar2);
    DrawAdaptiveImage(param_1,aIStack_18,*(undefined8 *)(this + 0xe8));
  }
  iVar1 = *(int *)(this + 0xe4);
  if (iVar1 == 1) {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07538;
LAB_04420358:
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
    iVar1 = FUN_0441bf40(0x46);
    iVar2 = FUN_0441bf40(0x1e);
    iVar3 = FUN_0441bf40(0x28);
    Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,0,iVar2,iVar3);
    if (*(int *)(this + 0xd4) != *(int *)(this + 0xe0)) goto LAB_044202fc;
  }
  else {
    if (iVar1 == 2) {
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b070e0;
      goto LAB_04420358;
    }
    if (iVar1 == 3) {
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07600;
      goto LAB_04420358;
    }
    if (iVar1 == 4) {
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07170;
      goto LAB_04420358;
    }
    if (iVar1 == 5) {
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b076d0;
      goto LAB_04420358;
    }
    if (iVar1 == 6) {
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07238;
      goto LAB_04420358;
    }
    if (*(int *)(this + 0xd4) != *(int *)(this + 0xe0)) goto LAB_044202fc;
  }
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07338);
  Sexy::Graphics::DrawImage(param_1,pIVar5,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
LAB_044202fc:
  if (this[0xd8] != (SeedChooserHeroPlantSelectWidgetItem)0x0) {
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07408);
    Sexy::Graphics::DrawImage(param_1,pIVar5,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SeedChooserHeroPlantSelectWidgetItem::TouchEnded(Sexy::Touch const&) */

void __thiscall
SeedChooserHeroPlantSelectWidgetItem::TouchEnded
          (SeedChooserHeroPlantSelectWidgetItem *this,Touch *param_1)

{
  if (*(int *)(this + 0xdc) != (int)*(undefined8 *)param_1) {
    return;
  }
  MessageRouter::Broadcast<int,int>
            ((MessageRouter *)gMessageRouter,Message::SelectSeedChooserHeroPlantSelectWidget,
             *(int *)(this + 0xe0));
  return;
}

